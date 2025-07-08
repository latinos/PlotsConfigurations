#!/usr/bin/env python
# -*- coding: utf-8 -*-
import os
import sys
import imp
import pprint
from optparse import OptionParser

def main():
    # Parse command line arguments using optparse (like cmsCondor.py)
    parser = OptionParser()
    parser.add_option("-n", dest="nPerJob", type="int", default=1, 
                      help="NUMBER of files processed per job", metavar="NUMBER")
    parser.add_option("-q", "--flavour", dest="jobFlavour", type="str", default="tomorrow", 
                      help="job FLAVOUR", metavar="FLAVOUR")
    parser.add_option("-p", "--proxy", dest="proxyPath", type="str", default="noproxy", 
                      help="Proxy path")
    parser.add_option("--tag", dest="tag", type="str", 
                      help="Tag for this submission (e.g., ggWW_2018, ggWW_2017)")
    parser.add_option("--list-file", dest="listFile", type="str", default="List_cff.py", 
                      help="Python file containing fileList (default: List_cff.py)")
    parser.add_option("--cmssw-env", dest="cmsswEnv", type="str", 
                      default="/afs/cern.ch/work/s/ssaumya/private/Projects/WW_Analysis_Work/CMSSW_10_6_39", 
                      help="CMSSW environment path")
    parser.add_option("--output-dir", dest="outputDir", type="str", 
                      help="Output directory for results (REQUIRED)")
    parser.add_option("--analysis-script", dest="analysisScript", type="str", 
                      default="/afs/cern.ch/work/s/ssaumya/private/Projects/WW_Analysis_Work/CMSSW_10_6_39/src/PlotsConfigurations/Configurations/WW/FullRunII/Tools/MATRIX_prediction_Check/CONDOR/Get_GEN_ptWW_condor.py", 
                      help="Path to the analysis script to run")
    
    (opts, args) = parser.parse_args()
    
    # Validate required arguments
    if not opts.tag:
        print("Error: --tag is required!")
        print("Usage: python createJobs.py --tag <TAG> [options]")
        sys.exit(1)
    
    if not opts.outputDir:
        print("Error: --output-dir is required!")
        print("Usage: python createJobs.py --tag <TAG> --output-dir <OUTPUT_DIR> [options]")
        print("Example: python createJobs.py --tag ggWW_2018 --output-dir /path/to/output/directory")
        sys.exit(1)
    
    help_text = '\n./createJobs_improved.py --tag <TAG> [options]'
    help_text += '\n--tag (mandatory) = tag for this submission (e.g., ggWW_2018)'
    help_text += '\n--output-dir (mandatory) = Output directory for results'
    help_text += '\n--list-file (optional) = Python file containing fileList (default: List_cff.py)'
    help_text += '\n--cmssw-env (optional) = CMSSW environment path'
    help_text += '\n--proxy (optional) = location of your voms cms proxy'
    help_text += '\n-n (optional) = number of files processed per batch job (default=1)'
    help_text += '\n--flavour (optional) = job flavour (default=tomorrow)\n'
    
    print("Tag = %s" % opts.tag)
    print("List file = %s" % opts.listFile)
    print("CMSSW environment = %s" % opts.cmsswEnv)
    print("Proxy = %s" % opts.proxyPath)
    print("Output directory = %s" % opts.outputDir)
    print("Job flavour = %s" % opts.jobFlavour)
    print("Files per job = %s" % opts.nPerJob)
    print("Analysis script = %s" % opts.analysisScript)
    
    # Import the file list dynamically (Python 2 compatible)
    try:
        file_list_module = imp.load_source("file_list_module", opts.listFile)
        current_file_list = file_list_module.fileList
    except Exception as e:
        print("Error importing file list from %s: %s" % (opts.listFile, e))
        sys.exit(1)
    
    # Validate file list
    if not current_file_list:
        print("Error: No input files found in %s" % opts.listFile)
        sys.exit(2)
    
    print("Number of files in the source: %s:" % len(current_file_list))
    pprint.pprint(current_file_list[:5])  # Show first 5 files
    if len(current_file_list) > 5:
        print("... and %s more files" % (len(current_file_list) - 5))
    
    # Calculate number of jobs
    nFiles = len(current_file_list)
    nJobs = int(nFiles / opts.nPerJob)
    if (nJobs != 0 and (nFiles % opts.nPerJob) > 0) or nJobs == 0:
        nJobs = nJobs + 1
    
    print("Number of jobs to be created: %s" % nJobs)
    
    # Create job directory with tag
    job_dir = opts.outputDir
    try:
        os.makedirs(job_dir)
    except OSError:
        # Directory already exists, which is fine
        pass
    
    # Create individual job directories and scripts (like cmsCondor.py)
    for i in range(0, nJobs):
        job_subdir = os.path.join(job_dir, 'Job_%s' % str(i))
        os.system('mkdir -p %s' % job_subdir)
        
        # Get the files for this job
        iFileMin = i * opts.nPerJob
        iFileMax = min((i + 1) * opts.nPerJob, nFiles)
        file_group = current_file_list[iFileMin:iFileMax]
        
        # Create job script
        tmp_jobname = "sub_%s.sh" % str(i)
        tmp_job = open(os.path.join(job_subdir, tmp_jobname), 'w')
        tmp_job.write("#!/bin/bash\n")
        tmp_job.write("# Job %s - Processing %s file(s)\n" % (str(i), len(file_group)))
        tmp_job.write("# Input files for this job:\n")
        for j, file_path in enumerate(file_group):
            # Extract just the filename from the full path
            filename = os.path.basename(file_path)
            tmp_job.write("#   %s: %s\n" % (str(j+1), filename))
        tmp_job.write("# Full paths: %s\n" % ",".join(file_group))
        tmp_job.write("\n")
        
        # Add proxy setup if specified
        if opts.proxyPath != "noproxy":
            tmp_job.write("export X509_USER_PROXY=$1\n")
            tmp_job.write("voms-proxy-info -all\n")
            tmp_job.write("voms-proxy-info -all -file $1\n")
            # When proxy is used, input files are $2
            input_arg = "$2"
        else:
            # When no proxy, input files are $1
            input_arg = "$1"
        
        # Set up CMSSW environment
        tmp_job.write("cd $TMPDIR\n")
        tmp_job.write("mkdir Job_%s\n" % str(i))
        tmp_job.write("cd Job_%s\n" % str(i))
        
        tmp_job.write("cd %s\n" % opts.cmsswEnv)
        tmp_job.write("#eval `scramv1 runtime -sh`\n")
        tmp_job.write("cd -\n")
        tmp_job.write("cp -f %s .\n" % opts.analysisScript)
        
        # Get the input files
        tmp_job.write("# Try to get input files from different sources\n")
        tmp_job.write("INPUT_FILES=\"$1\"\n")
        tmp_job.write("if [ -z \"$INPUT_FILES\" ]; then\n")
        tmp_job.write("  INPUT_FILES=\"$@\"\n")
        tmp_job.write("fi\n")
        tmp_job.write("if [ -z \"$INPUT_FILES\" ]; then\n")
        tmp_job.write("  INPUT_FILES=\"%s\"\n" % ",".join(file_group))
        tmp_job.write("fi\n")
        tmp_job.write("echo \"Using INPUT_FILES: $INPUT_FILES\"\n\n")
        
        # Check if input files exist
        tmp_job.write("# Check if input files exist\n")
        tmp_job.write("echo \"=== CHECKING INPUT FILES ===\"\n")
        tmp_job.write("for file in $(echo $INPUT_FILES | tr ',' ' '); do\n")
        tmp_job.write("  echo \"Checking file: $file\"\n")
        tmp_job.write("  if [ -f \"$file\" ]; then\n")
        tmp_job.write("    echo \"  File exists and is readable\"\n")
        tmp_job.write("    ls -la \"$file\"\n")
        tmp_job.write("  else\n")
        tmp_job.write("    echo \"  File does not exist or is not readable\"\n")
        tmp_job.write("  fi\n")
        tmp_job.write("done\n")
        tmp_job.write("echo \"================================\"\n\n")
        
        # Run the analysis with the determined input files
        tmp_job.write("python3 Get_GEN_ptWW_condor.py --inputFiles \"$INPUT_FILES\"\n")
        
        # Copy output back
        tmp_job.write("echo 'sending the file back'\n")
        tmp_job.write("cp lhe_ptww.root \"%s/lhe_ptww_%s.root\"\n" % (
            opts.outputDir, str(i)))
        tmp_job.write("rm lhe_ptww.root\n")
        tmp_job.close()
        
        os.system("chmod +x %s" % os.path.join(job_subdir, tmp_jobname))
        print("Preparing job number %s/%s" % (str(i), nJobs-1))
    
    # Create Condor submit file
    condor_name = os.path.join(job_dir, "condor_cluster_%s.sub" % opts.tag)
    condor_file = open(condor_name, "w")
    
    condor_str = "universe = vanilla\n"
    condor_str += "executable = $(filename)\n"
    
    if opts.proxyPath != "noproxy":
        condor_str += "Proxy_path = %s\n" % opts.proxyPath
        condor_str += "arguments = $(Proxy_path) $(Item)\n"
    else:
        condor_str += "arguments = $(Item)\n"
    
    condor_str += "output = $Fp(filename)job.stdout\n"
    condor_str += "error = $Fp(filename)job.stderr\n"
    condor_str += "log = $Fp(filename)job.log\n"
    condor_str += '+JobFlavour = "%s"\n' % opts.jobFlavour
    condor_str += "should_transfer_files = YES\n"
    condor_str += "when_to_transfer_output = ON_EXIT\n"
    condor_str += "request_cpus = 1\n"
#    condor_str += "requirements = ( HasSingularity == true )\n"
#    condor_str += '+SingularityImage = "/cvmfs/unpacked.cern.ch/gitlab-registry.cern.ch/cms-cat/cmssw-lxplus/cmssw-el7-lxplus:latest/"\n'
#    condor_str += '+SingularityBind = "/cvmfs, /cms, /share"\n'
    
    # Create queue with individual file groups for each job
    condor_str += "queue filename, Item from (\n"
    for i in range(0, nJobs):
        iFileMin = i * opts.nPerJob
        iFileMax = min((i + 1) * opts.nPerJob, nFiles)
        file_group = current_file_list[iFileMin:iFileMax]
        input_files = ",".join(file_group)
        job_script = "Job_%s/sub_%s.sh" % (i, i)
        condor_str += "  %s \"%s\"\n" % (job_script, input_files)
    condor_str += ")\n"
    
    condor_file.write(condor_str)
    condor_file.close()
    
    # Print debugging info
    print("\n=== CONDOR SUBMIT FILE DEBUG ===")
    print("Arguments line: %s" % ("arguments = $(Proxy_path) $(Item)" if opts.proxyPath != "noproxy" else "arguments = $(Item)"))
    print("Queue entries:")
    for i in range(0, nJobs):
        iFileMin = i * opts.nPerJob
        iFileMax = min((i + 1) * opts.nPerJob, nFiles)
        file_group = current_file_list[iFileMin:iFileMax]
        input_files = ",".join(file_group)
        job_script = os.path.join(job_dir, "Job_%s" % i, "sub_%s.sh" % i)
        print("  %s %s" % (job_script, input_files))
    print("================================\n")
    
    # Create submission script
    sub_total = open(os.path.join(job_dir, "sub_total_%s.jobb" % opts.tag), "w")
    sub_total.write("condor_submit condor_cluster_%s.sub\n" % opts.tag)
    sub_total.close()
    os.system("chmod +x %s" % os.path.join(job_dir, "sub_total_%s.jobb" % opts.tag))
    
    # Print job summary
    print("\n" + "="*60)
    print("JOB SUMMARY - Files per job:")
    print("="*60)
    for i in range(0, nJobs):
        iFileMin = i * opts.nPerJob
        iFileMax = min((i + 1) * opts.nPerJob, nFiles)
        file_group = current_file_list[iFileMin:iFileMax]
        print("Job_%s: %s file(s)" % (str(i), len(file_group)))
        for j, file_path in enumerate(file_group):
            filename = os.path.basename(file_path)
            print("  - %s" % filename)
        print()
    
    print("="*60)
    print("Job creation completed!")
    print("="*60)
    print("Created Condor submit file: %s" % condor_name)
    print("Created %s job directories" % nJobs)
    print("Total files to process: %s" % nFiles)
    print("Files per job: %s" % opts.nPerJob)
    print("Output directory: %s" % opts.outputDir)
    print("\nTo submit jobs, run:")
    print("cd %s && ./sub_total_%s.jobb" % (job_dir, opts.tag))
    print("="*60)

if __name__ == "__main__":
    main() 
