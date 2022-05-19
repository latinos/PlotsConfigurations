import os
import sys
import ROOT
import argparse
import subprocess

parser = argparse.ArgumentParser()
parser.add_argument('--config'      , type=str, help='Configuration file (variables.py)')
parser.add_argument('--fitresults'  , type=str, help='Root file containing fit results from FitDiagnostics')
parser.add_argument('--tag-name'    , type=str, help='Name of operation', default='run2')
parser.add_argument('--postfit'     ,           help='Run postfit', action='store_true')
parser.add_argument('--split-run2'  ,           help='Split run 2 in separate years', action='store_true')
parser.add_argument('--skip-combine',           help='Skip combine steps (assuming results exist already)', action='store_true')
parser.add_argument('--combine-dir' , type=str, help='Combine directory', default='/afs/cern.ch/user/s/svanputt/work/monoHiggs/combine/CMSSW_10_2_13/src')
parser.add_argument('-q', '--queue' , type=str, help='Job queue', default='espresso')
args = parser.parse_args()

pwd = os.getcwd()

base_dir = pwd+'/'+args.tag_name
if not os.path.exists(base_dir): os.mkdir(base_dir)

job_base_dir = pwd+'/jobs'
if not os.path.exists(job_base_dir): os.mkdir(job_base_dir)
job_dir = job_base_dir + '/' + args.tag_name
if not os.path.exists(job_dir): os.mkdir(job_dir)

year_datacard_dict = {
    '2016': '/eos/user/s/svanputt/monoHWW/plots/Full2016_v7/darkHiggs_HT/darkHiggs_HT_datacards',
    '2017': '/eos/user/s/svanputt/monoHWW/plots/Full2017_v7/darkHiggs_HT/darkHiggs_HT_datacards',
    '2018': '/eos/user/s/svanputt/monoHWW/plots/Full2018_v7/darkHiggs_HT/darkHiggs_HT_datacards',
}

run2 = ['2016', '2017', '2018']

handle = open(args.config, 'r')
exec(handle)
handle.close()

#tag = 'combined'  
#outputDir = './'  
#variablesFile = 'variables_combined.py'  
#cutsFile = 'cuts_combined.py'  
#plotFile = 'plot_combined.py'   
#outputDirPlots = 'plot_'+tag   
#structureFile = 'structure_combined.py'   

variables = {}
handle = open(variablesFile, 'r')
exec(handle)
handle.close()

cuts = {}
handle = open(cutsFile, 'r')
exec(handle)
handle.close()

def write_combine_cmd(o_file, cut, var, target_dir):
    # Get combine cmsenv
    o_file.write('cd '+args.combine_dir+'\n')
    #o_file.write('export SCRAM_ARCH=slc7_amd64_gcc700\n')
    #o_file.write('source /cvmfs/cms.cern.ch/cmsset_default.sh\n')
    o_file.write('eval `scramv1 runtime -sh`\n')
    o_file.write('cd $TMPDIR\n')
    o_file.write('\n')
    

    # Create datacards
    card_split = 'datacard_YEAR_'+cut+'_'+var+'.txt'
    card_run2 = 'datacard_run2_'+cut+'_'+var+'.txt'

    cmb_base = 'combineCards.py'
    for year in run2:
        card_year = card_split.replace('YEAR', year)
        y_dc = 'PF_'+year+cut+'='+year_datacard_dict[year]+'/'+cut+'/'+var+'/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt'
        if not args.split_run2:
            cmb_base += ' '+y_dc
        else: 
            o_file.write(cmb_base +' '+ y_dc + ' > '+card_year+'\n')
            o_file.write('text2workspace.py '+card_year+'\n')
            o_file.write('\n')
    if not args.split_run2:
        o_file.write(cmb_base + ' > '+card_run2+'\n')
        o_file.write('text2workspace.py '+card_run2+'\n')
        o_file.write('\n')

    # Create prefit and postfit shapes
    cmd = 'PostFitShapesFromWorkspace -w {} -d {} -o {} --postfit --sampling -f '+os.path.basename(args.fitresults)+':fit_s --total-shapes'
    if args.split_run2:
        for year in run2:
            card_year = card_split.replace('YEAR', year)
            card_year_r = card_year.replace('.txt', '.root')
            out = card_year_r.replace('datacard', 'histograms')
            cmd_tmp = cmd.format(card_year_r, card_year, out)
            o_file.write(cmd_tmp+'\n')
            o_file.write('\n')
    else:
        card_run2_r = card_run2.replace('.txt', '.root')
        out = card_run2_r.replace('datacard', 'histograms')
        cmd_tmp = cmd.format(card_run2_r, card_run2, out)
        o_file.write(cmd_tmp+'\n')
        o_file.write('\n')

    # Copy results to target dir
    o_file.write('cp datacard*.txt '+target_dir+'\n')
    o_file.write('cp datacard*.root '+target_dir+'\n')
    o_file.write('cp histograms*.root '+target_dir+'\n')
    o_file.write('\n')
    

def write_sh(job_id, cut, var, target_dir):
    o_file = open(job_id+'.sh', 'w')
    o_file.write('#!/bin/sh\n')
    o_file.write('cd '+pwd+'\n')
    o_file.write('source /cvmfs/cms.cern.ch/cmsset_default.sh\n')
    o_file.write('\n')

    # Copy ingredients to TMPDIR
    o_file.write('cp '+args.fitresults+' $TMPDIR\n')
    o_file.write('cp '+structureFile+' $TMPDIR\n')
    o_file.write('cp '+plotFile+' $TMPDIR\n')
    o_file.write('\n')

    if not args.skip_combine: write_combine_cmd(o_file, cut, var, target_dir) 
    else: 
        o_file.write('cp '+target_dir+'/histograms*.root $TMPDIR\n')
        o_file.write('\n')

    o_file.write('cd '+target_dir+'\n')
    o_file.write('eval `scramv1 runtime -sh`\n')
    o_file.write('cd $TMPDIR\n')
    o_file.write('\n')

    kind = 'p'
    p_str = 'prefit'
    if args.postfit: 
        kind = 'P'
        p_str = 'postfit'
    cmd = 'mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace {} --outputFile {} --kind '+kind+' --cutName '+cut+' --variable '+var+' --structureFile '+structureFile+' --plotFile '+plotFile+' --lumiText "XXX" --listOfFilesOriginal {} --nonFitVariable'
    if args.split_run2:
        for year in run2:
            hist_file = 'histograms_'+year+'_'+cut+'_'+var+'.root'
            shapes = year_datacard_dict[year]+'/'+cut+'/'+var+'/shapes/histos_'+cut+'.root'
            out = hist_file.replace('histograms', 'plots_'+p_str)
            o_file.write(cmd.format(hist_file, out, shapes)+'\n')
    else:
        hist_file = 'histograms_run2_'+cut+'_'+var+'.root'
        shps = []
        for year in run2:
            shps.append(year_datacard_dict[year]+'/'+cut+'/'+var+'/shapes/histos_'+cut+'.root')
        shapes = ','.join(shps)
        out = hist_file.replace('histograms', 'plots_'+p_str)
        o_file.write(cmd.format(hist_file, out, shapes)+'\n')
    o_file.write('cp plots*.root '+target_dir+'\n')
    o_file.write('\n')

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

jobs = []
for cut in cuts:

    cut_dir = base_dir + '/' + cut
    cut_jdir = job_dir + '/' + cut
    if not os.path.exists(cut_dir): os.mkdir(cut_dir)
    if not os.path.exists(cut_jdir): os.mkdir(cut_jdir)

    for var in variables:
   
        var_dir = cut_dir + '/' + var
        var_jdir = cut_jdir + '/' + var
        if not os.path.exists(var_dir): os.mkdir(var_dir)
        if not os.path.exists(var_jdir): os.mkdir(var_jdir)

        job_id = var_jdir+'/job'
        write_sh(job_id, cut, var, var_dir)
        write_jds(job_id)
        jobs.append(job_id)

submit_jobs(jobs)


