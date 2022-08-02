import os
import re
import sys
import argparse
import subprocess

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--var'   , action = 'store', type = str, dest = 'var', default='newBDT_Ada13Var', help = 'Variable to combine with CR\'s')
parser.add_argument('--combine-dir', action = 'store', type = str, dest = 'cmbDir', default='/afs/cern.ch/user/s/svanputt/work/monoHiggs/combine/CMSSW_10_2_13/src', help = 'Combine dir for the job')
parser.add_argument('-q',  '--queue', help='Job queue', default='espresso', type=str)
parser.add_argument('--no-cp', action = 'store_true', help='Do not cp/overwrite datacards')
parser.add_argument('-n',  '--dry-run', action = 'store_true', help='Do not submit')

args = parser.parse_args()

pwd = os.getcwd()
year_dict = {
    '2016': os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2016_v7/darkHiggs/darkHiggs_lim_datacards/', 
    '2017': os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v7/darkHiggs/darkHiggs_lim_datacards/', 
    '2018': os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2018_v7/darkHiggs/darkHiggs_lim_datacards/', 
}

# set up directories
pwd = os.getcwd()
base_dir = 'datacards_combi'
if not os.path.isdir(base_dir): os.system('mkdir '+base_dir)

work_dir_base = base_dir + '/Run2_Comb'
if not os.path.isdir(work_dir_base): os.system('mkdir '+work_dir_base)
work_dir = work_dir_base + '/' + args.var
if not os.path.isdir(work_dir): os.system('mkdir '+work_dir)
abs_work_dir = pwd + '/' + work_dir

job_dir_base = pwd + '/job'
if not os.path.isdir(job_dir_base): os.system('mkdir '+job_dir_base)
job_dir = job_dir_base + '/' + args.var
if not os.path.isdir(job_dir): os.system('mkdir '+job_dir)

channels = ['InCh_SR', 'InCh_SB', 'InCh_TCR', 'InCh_Combi']
channel_vars = [args.var, 'Events', 'Events', args.var]
run2 = ['2016', '2017', '2018']

if not args.no_cp:
    print('Copying datacards')
    for year in run2:
        print(' - '+year)
        for idx, ch in enumerate(channels):
            yr_channel = year + '_' + ch
            if not os.path.isdir(base_dir + '/' +yr_channel): os.system('mkdir '+base_dir + '/' +yr_channel)
            yr_channel_path = base_dir + '/' +yr_channel + '/' + channel_vars[idx]
            if not os.path.isdir(yr_channel_path): os.system('mkdir '+yr_channel_path)
            channel_path = year_dict[year] + ch + '/' + channel_vars[idx]
            if not os.path.isdir(channel_path): 
                raise IOError('Path does not exist: "'+channel_path+'"')
            # copy data cards
            os.system('cp '+channel_path+'/*.txt '+yr_channel_path+'/.')
            # copy shapes
            if 'InCh_Combi' not in ch: os.system('cp -r '+channel_path+'/shapes '+yr_channel_path+'/.')

# correct path
def correct_path(txt_file, wrong_str, corr_str):
    o_file = open(txt_file, 'r')
    lines = o_file.readlines()
    o_file.close()
    
    o_file = open(txt_file, 'w')
    for line in lines:
        if wrong_str in line: o_file.write(line.replace(wrong_str, corr_str))
        else: o_file.write(line)
    o_file.close()
        
print('Correcting path\'s') 
for year in run2:
    print(' - '+year)
    yr_channel_path = base_dir + '/'+year+'_InCh_Combi/' + args.var
    for fil in os.listdir(yr_channel_path):
        if not fil.endswith('.txt'): continue
        if not fil.startswith('datacard'): continue
      
        file_path = yr_channel_path + '/' + fil
        wrong_str = '/InCh'
        corr_str  = '/'+year+'_InCh'
        correct_path(file_path, wrong_str, corr_str) 

def write_job_files(job_dir, job_id, comb_dir, work_dir, comb_cmd, run_cmd):
    job = job_dir+'/'+job_id
    # sh file
    sh_file = open(job+'.sh', 'w')
    sh_file.write('#!/bin/bash\n')
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

print('Prepare jobs')
all_files = []
for year in run2:
    for fil in os.listdir(base_dir+'/'+year+'_InCh_Combi/'+args.var):
        if not fil.startswith('datacard') : continue
        if not fil.endswith('.txt'): continue
        if not '_' in fil: continue
        if fil not in all_files: all_files.append(fil)
    
jobs = []
for fil in all_files:
    mass_point = fil.replace('.txt', '').replace('datacard_', '')
    print(' - Combining '+mass_point)
    job_id = mass_point

    f2016_path = base_dir + '/2016_InCh_Combi/' + args.var + '/' + fil    
    f2017_path = base_dir + '/2017_InCh_Combi/' + args.var + '/' + fil    
    f2018_path = base_dir + '/2018_InCh_Combi/' + args.var + '/' + fil    

    f2016_path_rel = '../../2016_InCh_Combi/' + args.var + '/' + fil    
    f2017_path_rel = '../../2017_InCh_Combi/' + args.var + '/' + fil    
    f2018_path_rel = '../../2018_InCh_Combi/' + args.var + '/' + fil    

    Comb_path_rel = fil.replace('_comb.txt', '_Run2Comb.txt')

    if not os.path.isfile(f2016_path): 
        print('Warning: "'+f2016_path+'" does not exist, skipped!')
        continue
    if not os.path.isfile(f2017_path): 
        print('Warning: "'+f2017_path+'" does not exist, skipped!')
        continue
    if not os.path.isfile(f2018_path): 
        print('Warning: "'+f2018_path+'" does not exist, skipped!')
        continue

    #comb_cmd = 'combineCards.py '+' '.join([f2016_path_rel, f2017_path_rel, f2018_path_rel])+' > '+Comb_path_rel
    comb_cmd = 'combineCards.py '+' '.join(['Year2016='+f2016_path_rel, 'Year2017='+f2017_path_rel, 'Year2018='+f2018_path_rel])+' > '+Comb_path_rel
    run_cmd  = 'combine -M AsymptoticLimits --run blind '+Comb_path_rel+' -n _'+mass_point
    
    write_job_files(job_dir, job_id, args.cmbDir, abs_work_dir, comb_cmd, run_cmd)
    jobs.append(job_dir +'/'+job_id)
 


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
