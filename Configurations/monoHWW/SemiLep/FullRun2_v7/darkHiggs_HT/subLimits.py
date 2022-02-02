import os
import re
import sys
import argparse
import subprocess

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--var'   , action = 'store', type = str, dest = 'var'  , help = 'Variable in the SR 2016,2017,2018')
parser.add_argument('--varCR' , action = 'store', type = str, dest = 'varCR', help = 'Variable in the CR 2016,2017,2018')
parser.add_argument('--combine-dir', action = 'store', type = str, dest = 'cmbDir', default='/afs/cern.ch/user/s/svanputt/work/monoHiggs/combine/CMSSW_10_2_13/src', help = 'Combine dir for the job')
parser.add_argument('-q',  '--queue', help='Job queue', default='microcentury', type=str)
parser.add_argument('--tag', action = 'store', type = str, dest = 'tag', default='', help = 'tag in datacard path: darkHiggs_lim_datacards<TAG>')
parser.add_argument('--no-cp', action = 'store_true', help='Do not cp/overwrite datacards')
parser.add_argument('--unblind', action = 'store_true', help='Unblind limits')
parser.add_argument('--resub', action = 'store_true', help='Resubmit missing jobs')
parser.add_argument('-n',  '--dry-run', action = 'store_true', help='Do not submit')
parser.add_argument('--skip-run2', action = 'store_true', help='Skip run2 combination submission')
parser.add_argument('--skip-year', action = 'store_true', help='Skip separate combination submission')

args = parser.parse_args()

var_y = args.var.split(',')
varCR_y = args.varCR.split(',')

pwd = os.getcwd()
year_dict = {
    '2016': os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2016_v7/darkHiggs_HT/darkHiggs_HT_datacards'+args.tag+'/', 
    '2017': os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v7/darkHiggs_HT/darkHiggs_HT_datacards'+args.tag+'/', 
    '2018': os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2018_v7/darkHiggs_HT/darkHiggs_HT_datacards'+args.tag+'/', 
}

run2 = ['2016', '2017', '2018']
channels_dict = {}
for idx,year in enumerate(run2):
    channels_dict[year] = {}
    channels_dict[year]['InCh_SR'] = var_y[idx]
    channels_dict[year]['InCh_SB'] = varCR_y[idx]
    channels_dict[year]['InCh_TCR'] = varCR_y[idx]

# set up directories
pwd = os.getcwd()
#base_dir = 'datacards_combi'+args.tag
base_dir = 'new_datacards_combi'+args.tag
if not os.path.isdir(base_dir): os.system('mkdir '+base_dir)

work_dir_dict = {}
work_dir_base = base_dir + '/Run2_Comb'
if not os.path.isdir(work_dir_base): os.system('mkdir '+work_dir_base)
work_dir = work_dir_base + '/' + '_'.join(var_y).replace('YEAR', 'Run2')
if not os.path.isdir(work_dir): os.system('mkdir '+work_dir)
work_dir_dict['run2'] = pwd + '/' + work_dir

for year in run2:
    work_dir_base = base_dir + '/'+year+'_Comb'
    if not os.path.isdir(work_dir_base): os.system('mkdir '+work_dir_base)
    work_dir = work_dir_base + '/' + channels_dict[year]['InCh_SR'].replace('YEAR', year)
    if not os.path.isdir(work_dir): os.system('mkdir '+work_dir)
    work_dir_dict[year] = pwd + '/' + work_dir

job_dir_dict = {}
job_dir_base = pwd + '/job'
if not os.path.isdir(job_dir_base): os.system('mkdir '+job_dir_base)
job_dir = job_dir_base + '/Run2_' + '_'.join(var_y).replace('YEAR', 'Run2')
if not os.path.isdir(job_dir): os.system('mkdir '+job_dir)
job_dir_dict['run2'] = job_dir

for year in run2:
    job_dir = job_dir_base + '/'+year+'_' + channels_dict[year]['InCh_SR'].replace('YEAR', year)
    if not os.path.isdir(job_dir): os.system('mkdir '+job_dir)
    job_dir_dict[year] = job_dir


#channels = ['InCh_SR', 'InCh_SB', 'InCh_TCR', 'InCh_Combi']
#channel_vars = [args.var, args.varCR, args.varCR, args.var]

if not args.resub: 
    if not args.no_cp:
        print('Copying datacards')
        for year in run2:
            print(' - '+year)
            for idx, ch in enumerate(channels_dict[year]):
                yr_channel = year + '_' + ch
                if not os.path.isdir(base_dir + '/' +yr_channel): os.system('mkdir '+base_dir + '/' +yr_channel)
                yr_channel_path = base_dir + '/' +yr_channel + '/' + channels_dict[year][ch].replace('YEAR', year)
                if not os.path.isdir(yr_channel_path): os.system('mkdir '+yr_channel_path)
                channel_path = year_dict[year] + ch + '/' + channels_dict[year][ch].replace('YEAR', year)
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
            
    #print('Correcting path\'s') 
    #for year in run2:
    #    print(' - '+year)
    #    yr_channel_path = base_dir + '/'+year+'_InCh_Combi/' + args.var.replace('YEAR', year)
    #    for fil in os.listdir(yr_channel_path):
    #        if not fil.endswith('.txt'): continue
    #        if not fil.startswith('datacard'): continue
    #      
    #        file_path = yr_channel_path + '/' + fil
    #        wrong_str = '/InCh'
    #        corr_str  = '/'+year+'_InCh'
    #        correct_path(file_path, wrong_str, corr_str) 
    
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
        for ch in channels_dict[year]:
            for fil in os.listdir(base_dir+'/'+year+'_'+ch+'/'+channels_dict[year][ch].replace('YEAR', year)):
                if not fil.startswith('datacard') : continue
                if not fil.endswith('.txt'): continue
                if not '_' in fil: continue
                if fil not in all_files: all_files.append(fil)

    jobs_dict = {}

    # Prepare run2 jobs 
    jobs_dict['run2'] = []
    for fil in all_files:
        mass_point = fil.replace('.txt', '').replace('datacard_', '')
        print(' - Combining '+mass_point)
        job_id = mass_point

        skip_mp = False
        cards = []
        for year in run2:
            for ch in channels_dict[year]:
                org_path =  base_dir + '/'+year+'_'+ch+'/'+channels_dict[year][ch].replace('YEAR', year)+'/'+fil    
                rel_path =  '../../' +     year+'_'+ch+'/'+channels_dict[year][ch].replace('YEAR', year)+'/'+fil                

                combine_chan_name = ch.replace('InCh_', '').replace('SB', 'WCR')

                if not os.path.isfile(org_path): 
                    print('Warning: "'+org_path+'" does not exist, "'+mass_point+'" will be skipped!')
                    skip_mp = True
                else: cards.append('Year'+year+'_'+combine_chan_name+'='+rel_path)
        if skip_mp:
            print(' ---> Skip')
            continue
        Comb_path_rel = fil.replace('_comb.txt', '_Run2Comb.txt')
        comb_cmd = 'combineCards.py '+' '.join(cards)+' > '+Comb_path_rel
        run_cmd  = 'combine -M AsymptoticLimits --run blind '+Comb_path_rel+' -n _'+mass_point
        if args.unblind: run_cmd  = 'combine -M AsymptoticLimits '+Comb_path_rel+' -n _'+mass_point
        
        write_job_files(job_dir_dict['run2'], job_id, args.cmbDir, work_dir_dict['run2'], comb_cmd, run_cmd)
        jobs_dict['run2'].append(job_dir_dict['run2'] +'/'+job_id)

    # Prepare year jobs
    for year in run2:
        jobs_dict[year] = []
        for fil in all_files:
            mass_point = fil.replace('.txt', '').replace('datacard_', '')
            print(' - Combining '+year+' '+mass_point)
            job_id = mass_point

            skip_mp = False
            cards = []
            for ch in channels_dict[year]:
                org_path =  base_dir + '/'+year+'_'+ch+'/'+channels_dict[year][ch].replace('YEAR', year)+'/'+fil    
                rel_path =  '../../' +     year+'_'+ch+'/'+channels_dict[year][ch].replace('YEAR', year)+'/'+fil                

                combine_chan_name = ch.replace('InCh_', '').replace('SB', 'WCR')

                if not os.path.isfile(org_path): 
                    print('Warning: "'+org_path+'" does not exist, "'+mass_point+'" will be skipped!')
                    skip_mp = True
                else: cards.append(combine_chan_name+'='+rel_path)
            if skip_mp:
                print(' ---> Skip')
                continue
            Comb_path_rel = fil.replace('_comb.txt', '_'+year+'Comb.txt')
            comb_cmd = 'combineCards.py '+' '.join(cards)+' > '+Comb_path_rel
            run_cmd  = 'combine -M AsymptoticLimits --run blind '+Comb_path_rel+' -n _'+mass_point
            if args.unblind: run_cmd  = 'combine -M AsymptoticLimits '+Comb_path_rel+' -n _'+mass_point
            
            write_job_files(job_dir_dict[year], job_id, args.cmbDir, work_dir_dict[year], comb_cmd, run_cmd)
            jobs_dict[year].append(job_dir_dict[year] +'/'+job_id)
             
else:
    jobs_dict = {}
    for period in job_dir_dict:
        jobs_dict[period] = []
        for fil in os.listdir(job_dir_dict[period]):
            if not fil.endswith('.jid'): continue
            job_id = fil.replace('.jid', '')
            print(' - to resubmit: '+job_id)
            jobs_dict[period].append(job_dir_dict[period] +'/'+job_id)


def submit(jobs):
    if len(jobs) < 1: 
        print('Nothing to submit, jobs empty')
        return
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

if not args.dry_run:
    print('Submit job')
    if not args.skip_run2: submit(jobs_dict['run2'])
    if not args.skip_year:
        for year in run2:
            submit(jobs_dict[year])

