import os
import re
import sys
import argparse
import subprocess

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--var'   , action = 'store', type = str, dest = 'var', default='newBDT_Ada13Var_fine2', help = 'Variable to combine with CR\'s')
parser.add_argument('--combine-dir', action = 'store', type = str, dest = 'cmbDir', default='/afs/cern.ch/user/s/svanputt/work/monoHiggs/combine/CMSSW_10_2_13/src', help = 'Combine dir for the job')
#parser.add_argument('-q',  '--queue', help='Job queue', default='espresso', type=str)
#parser.add_argument('--no-cp', action = 'store_true', help='Do not cp/overwrite datacards')
#parser.add_argument('-n',  '--dry-run', action = 'store_true', help='Do not submit')
parser.add_argument('-m',  '--mass-point', help='Datacard tag', default='mhs_160_mx_100_mZp_400', type=str)
parser.add_argument('-y',  '--year'      , help='Do this year', default='ALL', type=str)
parser.add_argument('--no-workspace', action = 'store_true', help='Do not (over)write workspace.')
parser.add_argument('-c',  '--collect', action = 'store_true', help='Collect impacts (and only do that)')
parser.add_argument('-n',  '--dry-run', action = 'store_true', help='Do not run')

args = parser.parse_args()

card_dict = {
    '2016': 'datacards_combi/2016_InCh_Combi',
    '2017': 'datacards_combi/2017_InCh_Combi',
    '2018': 'datacards_combi/2018_InCh_Combi',
    'Run2': 'datacards_combi/Run2_Comb',
}

def create_workspace_root(card_id):
    cmd = ''
    cmd += 'text2workspace.py '+card_id+'.txt --channel-masks\n'
    return cmd

def create_asimov_fitdiag(card_id, combine_dir, b_only=True):
    cmd = ''
    name_tag = '_b'
    sb_str = '-t -1 --expectSignal 0 -n '+name_tag
    if not b_only:
        name_tag = '_s+b' 
        sb_str = '-t -1 --expectSignal 1 -n '+name_tag

    cmd += 'combine -M FitDiagnostics -d '+card_id+'.root '+sb_str+' --rMin -1.5 --forceRecreateNLL\n'
    cmd += 'python '+combine_dir+'/HiggsAnalysis/CombinedLimit/test/diffNuisances.py -a fitDiagnostics'+name_tag+'.root -g plots'+name_tag+'.root >> fitResults'+name_tag+'\n'
    return cmd

def prep_and_sub_asimov_impact(card_id, b_only=True):
    cmd = ''
    name_tag = 'b'
    sb_str = '-t -1 --expectSignal 0 -n '+name_tag
    if not b_only:
        name_tag = 's+b' 
        sb_str = '-t -1 --expectSignal 1 -n '+name_tag
    cmd += 'combineTool.py -M Impacts -d '+card_id+'.root '+sb_str+' --rMin -1.5 --doInitialFit --allPars -m 125\n'
    cmd += 'combineTool.py -M Impacts -d '+card_id+'.root -o impacts_'+name_tag+'.json '+sb_str+' --rMin -1.5 --doFits -m 125 --job-mode condor --task-name '+name_tag+' --sub-opts \'+JobFlavour = "espresso"\nrequirements = (OpSysAndVer =?= "CentOS7")\'\n'
    return cmd

def collect_asimov_impact(card_id, b_only=True):
    cmd = ''
    name_tag = 'b'
    if not b_only: name_tag = 's+b'

    cmd += 'combineTool.py -M Impacts -d '+card_id+'.root -m 125 -n '+name_tag+' -o impacts_'+name_tag+'.json\n'
    cmd += 'plotImpacts.py -i impacts_'+name_tag+'.json -o impacts_'+name_tag+'\n'
    return cmd

exec_file = 'current_task.sh'
o_file = open(exec_file, 'w')
pwd = os.getcwd()
comb_dir = args.cmbDir
o_file.write('#!/usr/bin/bash\n')
o_file.write('cd '+comb_dir+'\n')
o_file.write('eval `scramv1 runtime -sh`\n')
#os.system('cd '+comb_dir)
#os.chdir(comb_dir)
#os.system('cmsenv')
#os.system('eval `scramv1 runtime -sh`')
for data_set in card_dict:
    if not 'ALL' in args.year:
        if not args.year in data_set: continue
    work_dir = pwd + '/' + card_dict[data_set] + '/' + args.var
    #os.system('cd '+work_dir) 
    #os.chdir(work_dir)
    o_file.write('\n# '+data_set+'\n')
    o_file.write('cd '+work_dir+'\n')

    card_id = ''
    for fil in os.listdir(work_dir):
        if not fil.endswith('.txt'): continue
        if not fil.startswith('datacard_'): continue
        if not args.mass_point in fil: continue
        card_id = fil.replace('.txt', '')
    print('card id = '+card_id)
    print('Write workspace')
    if not args.collect:
        if not args.no_workspace: o_file.write(create_workspace_root(card_id))
        #o_file.write(create_asimov_fitdiag(card_id, comb_dir, b_only=True))
        o_file.write(prep_and_sub_asimov_impact(card_id, b_only=True))
        #o_file.write(create_asimov_fitdiag(card_id, comb_dir, b_only=False))
        #o_file.write(prep_and_sub_asimov_impact(card_id, b_only=False))
    else:
        o_file.write(collect_asimov_impact(card_id, b_only=True))
        #o_file.write(collect_asimov_impact(card_id, b_only=False))

o_file.close() 

os.system('chmod +x '+exec_file)
if not args.dry_run: os.system('./'+exec_file)
