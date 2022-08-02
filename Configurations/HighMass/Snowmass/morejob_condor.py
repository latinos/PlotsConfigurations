from optparse import OptionParser, OptionGroup

## set up the option parser
parser = OptionParser(usage="usage: %prog command",
                      description="Submit one job to lxbatch")

# check number of arguments; in case print usage
(options, args) = parser.parse_args()
if len(args) < 1 :
    parser.print_usage()
    exit(1)

import os
import re

queue = "24"
cpus = "1" ### <==========================================================================================================
filename = "job_morejob"
queueorruntime = "JobFlavour" # JobFlavour , MaxRuntime

n = 0
file = open(filename+".sh", 'w')
#file.write('#!/bin/sh'+'\n'+'cd /afs/cern.ch/work/a/arun/Latinos/Check_forCC7/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/HighMass/Snowmass/'+'\n'+'export X509_USER_PROXY=/afs/cern.ch/work/d/dmroy/.grid_proxy/k5-ca-proxy.pem'+'\n'+'source /cvmfs/cms.cern.ch/cmsset_default.sh'+'\n'+'export SCRAM_ARCH=slc7_amd64_gcc700'+'\n'+'eval `scramv1 runtime -sh`'+'\n'+'cd '+os.getcwd()+'\n'+'\n')#os.getcwd()+'\n'+'eval '
file.write('#!/bin/sh'+'\n'+'cd /afs/cern.ch/work/a/arun/Latinos/Check_forCC7/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/HighMass/Snowmass/'+'\n'+'source /cvmfs/cms.cern.ch/cmsset_default.sh'+'\n'+'export SCRAM_ARCH=slc7_amd64_gcc700'+'\n'+'eval `scramv1 runtime -sh`'+'\n'+'cd '+os.getcwd()+'\n'+'\n')#os.getcwd()+'\n'+'eval '
# First line after #!bin...: +'\n'+'ulimit -s unlimited'
for arg in args:
  file.write('if [ $1 -eq '+str(n)+' ]; then'+'\n'+'  '+arg+'\n'+'fi'+'\n')
  n += 1
file.close()

if queue=="1":
  queue='"microcentury"'
  runtime = '3600'
if queue=="2":
  queue='"longlunch"'
  runtime = '7200'
if queue=="8":
  queue='"workday"'
  runtime = '28800'
if queue=="24":
  queue='"tomorrow"'
  runtime = '86400'
if queue=="72":
  queue='"testmatch"'
  runtime = '259200'
if queue=="1w":
  queue='"nextweek"'
  runtime = '604800'
if queueorruntime == "MaxRuntime": queue = runtime
os.system("chmod 755 "+filename+".sh")
#print "bsub -o "+os.getcwd()+"/job_onejob_%J.log -q "+queue+" "+os.getcwd()+"/job_onejob.sh"
#os.system("bsub -o "+os.getcwd()+"/job_onejob_%J.log -q "+queue+" "+os.getcwd()+"/job_onejob.sh")

sfile = open(filename+".sub", 'w')
sfile.write('executable = '+filename+'.sh'+'\n'+'arguments = $(ProcId)'+'\n'+'output                = '+filename+'.$(ClusterId).$(ProcId).out'+'\n'+'error                 = '+filename+'.$(ClusterId).$(ProcId).err'+'\n'+'log                   = '+filename+'.$(ClusterId).log'+'\n'+'+'+queueorruntime+' = '+queue+'\n'+'RequestCpus = '+cpus+'\n'+'\n'+'# Send the job to Held state on failure.'+'\n'+'on_exit_hold = (ExitBySignal == True) || (ExitCode != 0) || (!(ExitSignal =?= UNDEFINED))'+'\n'+'\n'+'# Periodically retry the jobs every 10 minutes, up to a maximum of 5 retries.'+'\n'+'periodic_release =  (NumJobStarts < 5) && ((CurrentTime - EnteredCurrentStatus) > 600)'+'\n'+'\n'+'\n'+'queue '+str(n)+'\n')#os.getcwd()+'\n'+'eval '
sfile.close()

os.system("condor_submit "+filename+".sub")

