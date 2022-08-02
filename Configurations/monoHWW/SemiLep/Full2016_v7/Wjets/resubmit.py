import os
import re
import sys
import json
import time
import argparse
import subprocess

parser = argparse.ArgumentParser()
parser.add_argument("--config", help="configuration file", type=str)
parser.add_argument("-q", "--queue", help="job queue", type=str)
parser.add_argument("-r", "--redo", help="forcefully redo comma seperated samples", type=str)
args = parser.parse_args()

cms_base = os.getenv('CMSSW_BASE')

exec(open(args.config))
exec(open(cms_base+'/src/LatinoAnalysis/Tools/python/userConfig.py'))

def check_job_file(file_name):
    o_file = open(file_name, 'r')
    lines = o_file.readlines()
    o_file.close()
   
    moves_jid = False
    for line in lines:
        if '.jid' in line: 
            moves_jid = True
            break

    if not moves_jid:
        o_file = open(file_name, 'a')
        job = file_name.replace('.sh', '')
        o_file.write('[ $? -eq 0 ] && mv '+job+'.jid '+job+'.done\n')

#jobDir

start = time.time()

job_base = 'mkShapes__'+tag+'__ALL'
path = jobDir+'/'+job_base

# Rewrite job files
os.system('rm '+path+'/*/*.py')
#os.system('mkShapesMulti.py --pycfg='+args.config+' --doBatch=True --batchQueue='+args.queue+' --treeName=Events --batchSplit=Samples,Files -n')
print('Updating job configs')
proc = subprocess.Popen(['mkShapesMulti.py', '--pycfg='+args.config, '--doBatch=True', '--batchQueue='+args.queue, '--treeName=Events', '--batchSplit=Samples,Files', '-n'], stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE)
out, err = proc.communicate()
if proc.returncode != 0:
    sys.stderr.write(err)
    raise RuntimeError('Rewriting job files failed.')
#print(out.strip())

# Collect jobs to resub
to_redo = []
if not args.redo is None: to_redo = args.redo.split(',')
for idx in range(len(to_redo)):
    to_redo[idx] += '.'
jobs = []
dirs = os.listdir(path)
print('Jobs to resubmit: ')
for diry in dirs:
    job_files = path+'/'+diry+'/'+job_base+'__'+diry
    sample = diry.split('.')[0] + '.'
    if os.path.isfile(job_files+'.py'): 
        if os.path.isfile(job_files+'.jid') or sample in to_redo:
            jobs.append(job_files)
            check_job_file(job_files+'.sh')
            print('- '+diry)

# Resubmit the jobs to condor
if len(jobs) < 1: print('No jobs to resubmit found')
else:
    job_f = open(jobs[0]+'.jds', 'r')
    jds_lines = job_f.readlines()
    job_f.close()
    
    jds = ''
    for line in jds_lines:
        if 'JobFlavour' in line: jds += '+JobFlavour = "'+args.queue+'"\n'
        elif 'queue' in line: continue
        else: jds += line.replace(jobs[0], '$(JName)')
    jds += 'queue JName in (\n'
    for job in jobs:
        jds += job + '\n'
    jds += ')\n'
    #print(jds)

    proc = subprocess.Popen(['condor_submit'], stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE)
    out, err = proc.communicate(jds)
    if proc.returncode != 0:
        sys.stderr.write(err)
        raise RuntimeError('Job submission failed.')
    print(out.strip())

    # Write jid
    matches = re.match('.*submitted to cluster ([0-9]*)\.', out.split('\n')[-2])
    if not matches:
        sys.stderr.write('Failed to retrieve the job id. Job submission may have failed.\n')
        for job in jobs:
            jidFile = job + '.jid'
            open(jidFile, 'w').close()
    else:
        clusterId = matches.group(1)
        # now write the jid files
        proc = subprocess.Popen(['condor_q', clusterId, '-l', '-attr', 'ProcId,Cmd', '-json'], stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE)
        out, err = proc.communicate()
        try:
            qlist = json.loads(out.strip())
        except:
            sys.stderr.write('Failed to retrieve job info. Job submission may have failed.\n')
            for job in jobs:
                jidFile = job + '.jid'
                open(jidFile, 'w').close()
        else:
            for qdict in qlist:
                with open(qdict['Cmd'].replace('.sh', '.jid'), 'w') as out:
                    out.write('%s.%d\n' % (clusterId, qdict['ProcId']))
#print(jobs)

