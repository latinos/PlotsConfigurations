import os
import re
import sys
import json
import time
import argparse
import subprocess

parser = argparse.ArgumentParser()
parser.add_argument('-w', '--workspace', help='Combine workspace file (e.g. workspace.root)', type=str)
parser.add_argument('--name', help='Name tag in output files', default='GoF_toy', type=str)
parser.add_argument('--n-toys', help='Number of toys per job', default=None     , type=int)
parser.add_argument('--n-jobs', help='Number of jobs'        , default=None     , type=int)
parser.add_argument('-q', '--queue', help='job queue'                 , default='espresso', type=str)
parser.add_argument('--job-dir'    , help='Derecory to dump job files', default='.'       , type=str)
parser.add_argument('--output-dir' , help='Derecory put output files' , default='.'       , type=str)
parser.add_argument('--combine-dir', help='Combine directory'         , default='/afs/cern.ch/user/s/svanputt/work/monoHiggs/combine/CMSSW_10_2_13/src', type=str)
parser.add_argument('--do-hadd'    , help='Hadd results'              , action = 'store_true')
args = parser.parse_args()

cms_base = os.getenv('CMSSW_BASE')


# Set dirs
if not os.path.isdir(args.output_dir): os.mkdir(args.output_dir)
if not os.path.isdir(args.job_dir)   : os.mkdir(args.job_dir)
cwd = os.getcwd()
work_dir = os.path.join(cwd, args.output_dir)
job_dir = os.path.join(cwd, args.job_dir)
ws_path = cwd + '/' + args.workspace

def write_sh(job_id, idx):
    cmd = 'combineTool.py -M GoodnessOfFit -d '+ws_path+' --algo=saturated -n _'+args.name+'_'+str(idx)+' -t '+str(args.n_toys)+' -s -1'

    o_file = open(job_id+'.sh', 'w')
    o_file.write('#!/bin/sh\n')
    o_file.write('ulimit -s unlimited\n')
    o_file.write('set -e\n')
    o_file.write('cd '+args.combine_dir+'\n')
    o_file.write('export SCRAM_ARCH=slc7_amd64_gcc700\n')
    o_file.write('source /cvmfs/cms.cern.ch/cmsset_default.sh\n')
    o_file.write('eval `scramv1 runtime -sh`\n')
    o_file.write('cd '+work_dir+'\n') 
    o_file.write('\n')
    #o_file.write('if [ $1 -eq 0 ]; then\n')
    #o_file.write('  combine --algo=saturated -t 10 -M GoodnessOfFit -s -1 -d datacard_FullCombi_mhs_160_mx_100_mZp_500.root -n _GoF_toy_37\n')
    #o_file.write('fi\n')
    o_file.write(cmd+'\n')
    o_file.write('\n')
    o_file.write('[ $? -eq 0 ] && mv '+job_id+'.jid '+job_id+'.done\n')
    o_file.close()

def write_jds(job_id):
    o_file = open(job_id+'.jds', 'w')

    o_file.write('executable = '+job_id+'.sh\n')
    o_file.write('output     = '+job_id+'.out\n')
    o_file.write('error      = '+job_id+'.err\n')
    o_file.write('log        = '+job_id+'.log\n')
    o_file.write('\n')
    o_file.write('+JobFlavour = "'+args.queue+'"\n')
    o_file.write('queue 1\n')

    o_file.close()

def submit_jobs(jobs):
    if len(jobs) < 1:
        print('No jobs to submit')
        return
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
        os.system('touch '+job+'.jid')
        jds += job + '\n'
    jds += ')\n'
    #print(jds)

    proc = subprocess.Popen(['condor_submit'], stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE)
    out, err = proc.communicate(jds)
    if proc.returncode != 0:
        sys.stderr.write(err)
        raise RuntimeError('Job submission failed.')
    print(out.strip())

if not args.do_hadd:
    # Check inputs
    if args.n_jobs is None: 
        raise ValueError('"--n-jobs" not defined')
    if args.n_toys is None: 
        raise ValueError('"--n-toys" not defined')

    jobs = []
    print('Creating job files:')
    for idx in range(args.n_jobs):
        job_id = job_dir+'/'+args.name+'_'+str(idx)
        print(' -- ID: : '+job_id)
        write_sh(job_id, idx)
        write_jds(job_id)
        jobs.append(job_id)

    print('Submitting jobs:')
    submit_jobs(jobs)
else:
    result_file = work_dir+'/'+args.name+'_hadd.GoodnessOfFit.root'
    cmd = 'hadd '+result_file+' '+work_dir+'/higgsCombine_'+args.name+'_*.GoodnessOfFit.mH120.*.root'
    print('Hadding results:')
    print(' -- Target: '+result_file)
    os.system(cmd)

