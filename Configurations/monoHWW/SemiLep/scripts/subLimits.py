import os
import re
import sys
import argparse
import subprocess

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--config' , action = 'store', type = str, dest = 'cfg'    , help = 'Input configuration file')
parser.add_argument('--var'    , action = 'store', type = str, dest = 'var'    , default='newBDT_Ada13Var', help = 'Variable to combine with CR\'s')
parser.add_argument('--varCR'  , action = 'store', type = str, dest = 'varCR'  , default='Events', help = 'Variable to use in the CR\'s')
parser.add_argument('--cut-tag', action = 'store', type = str, dest = 'cut_tag', default=None, help = 'SR: InCh_<tag>_SR')
parser.add_argument('--combine-dir', action = 'store', type = str, dest = 'cmbDir', default='/afs/cern.ch/user/s/svanputt/work/monoHiggs/combine/CMSSW_10_2_13/src', help = 'Combine dir for the job')
parser.add_argument('--unblind', action = 'store_true', help='Unblind')
parser.add_argument('-q',  '--queue', help='Job queue', default='espresso', type=str)
parser.add_argument('-n',  '--dry-run', action = 'store_true', help='Do not submit')

args = parser.parse_args()

execfile(args.cfg)

cut_tag = ''
if not args.cut_tag is None: cut_tag = '_'+args.cut_tag

pwd = os.getcwd()
job_dir_src = pwd + '/' + outputDirDatacard + '/job'
job_dir = job_dir_src + '/' + args.var + cut_tag
work_dir_src = pwd + '/' + outputDirDatacard + '/InCh'+cut_tag+'_Combi'
work_dir = work_dir_src + '/' + args.var
comb_dir = args.cmbDir

if not os.path.isdir(job_dir_src): os.system('mkdir '+job_dir_src)
if not os.path.isdir(job_dir): os.system('mkdir '+job_dir)
if not os.path.isdir(work_dir_src): os.system('mkdir '+work_dir_src)
if not os.path.isdir(work_dir): os.system('mkdir '+work_dir)

def add_rateparam_bounds(txt_file):
    o_file = open(txt_file, 'r')
    lines = o_file.readlines()
    o_file.close()
    
    o_file = open(txt_file, 'w')
    for line in lines:
        if 'rateParam' in line:
            str_to_add = '[0.1,10]'
            number_of_spaces = line.split('rateParam')[0].count(' ')
            if not str_to_add in line: 
                o_file.write(line.replace('1.0000', '1.0000'+' '*number_of_spaces+str_to_add))
            else:
                o_file.write(line)
        else: o_file.write(line)
    o_file.close()


def write_job_files(job_dir, job_id, comb_dir, work_dir, comb_cmd, run_cmd):
    job = job_dir+'/'+job_id
    # sh file
    sh_file = open(job+'.sh', 'w')
    sh_file.write('#!/bin/bash\n')
    sh_file.write('\n')
    sh_file.write('export SCRAM_ARCH=slc7_amd64_gcc700\n')
    sh_file.write('export VO_CMS_SW_DIR=/cvmfs/cms.cern.ch\n')
    sh_file.write('source $VO_CMS_SW_DIR/cmsset_default.sh\n')
    sh_file.write('\n')
    sh_file.write('cd '+comb_dir+'\n')
    sh_file.write('eval `scramv1 runtime -sh`\n')
    sh_file.write('cd '+work_dir+'\n')
    sh_file.write('\n')
    
    sh_file.write('echo "Running combineCards"\n')
    sh_file.write(comb_cmd + '\n')
    sh_file.write('\n')
    sh_file.write('ls -l\n')
    sh_file.write('\n')
    sh_file.write('echo "Running combine"\n')
    sh_file.write(run_cmd+'\n')
    sh_file.write('\n')
    sh_file.write('mv '+job+'.jid '+job+'.done\n')
    sh_file.close()
    os.system('chmod +x '+job+'.sh')

    # jds file
    o_file = open(job+'.jds', 'w')
    
    o_file.write('universe              = vanilla\n')
    o_file.write('executable            = '+job+'.sh\n')
    o_file.write('output                = '+job+'.out\n')
    o_file.write('error                 = '+job+'.err\n')
    o_file.write('log                   = '+job+'.log\n')
    o_file.write('RequestCpus           = 1\n')
    o_file.write('+JobFlavour           = "'+args.queue+'"\n')
    o_file.write('queue\n')
    o_file.close()

print('Prepare dirs and files')
jobs = []
for fil in os.listdir(outputDirDatacard+'/InCh'+cut_tag+'_SR/'+args.var):
    if not fil.startswith('datacard') : continue
    if not fil.endswith('.txt'): continue
    if not '_' in fil: continue
    print(' - Combining '+fil.replace('.txt', ''))
    mass_point = fil.replace('.txt', '').replace('datacard_', '')

    job_id = mass_point

    SR_path  = pwd + '/' +outputDirDatacard + '/InCh'+cut_tag+'_SR/' + args.var + '/' + fil    
    TCR_path = pwd + '/' +outputDirDatacard + '/InCh'+cut_tag+'_TCR/'+args.varCR+'/' + fil    
    SB_path  = pwd + '/' +outputDirDatacard + '/InCh'+cut_tag+'_SB/'+args.varCR+'/' + fil    

    add_rateparam_bounds(SR_path)
    add_rateparam_bounds(TCR_path)
    add_rateparam_bounds(SB_path)

    Comb_path_rel = fil.replace('.txt', '_comb.txt')
    SR_path_rel  = SR_path.replace(pwd + '/' +outputDirDatacard, '../..')
    TCR_path_rel = TCR_path.replace(pwd + '/' +outputDirDatacard, '../..')
    SB_path_rel  = SB_path.replace(pwd + '/' +outputDirDatacard, '../..')

    if not os.path.isfile(SR_path): 
        print('Warning: "'+SR_path+'" does not exist, skipped!')
        continue
    if not os.path.isfile(TCR_path): 
        print('Warning: "'+TCR_path+'" does not exist, skipped!')
        continue
    if not os.path.isfile(SB_path): 
        print('Warning: "'+SB_path+'" does not exist, skipped!')
        continue

    comb_cmd = 'combineCards.py '+' '.join(['SR='+SR_path_rel, 'TCR='+TCR_path_rel, 'SB='+SB_path_rel])+' > '+Comb_path_rel
    if not args.unblind: run_cmd  = 'combine -M AsymptoticLimits --run blind '+Comb_path_rel+' -n _'+mass_point
    else: run_cmd  = 'combine -M AsymptoticLimits '+Comb_path_rel+' -n _'+mass_point

    write_job_files(job_dir, job_id, comb_dir, work_dir, comb_cmd, run_cmd)
    jobs.append(job_dir +'/'+job_id)

# Submit the jobs
if not args.dry_run:
    print('Submit job')
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
