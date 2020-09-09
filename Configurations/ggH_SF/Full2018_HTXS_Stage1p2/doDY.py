# Builds the proper doDY.sh and doDY.jds
# Then, it sends the corresponding job to Condor

import sys
import os
import stat


# Build doDY.sh - for now doDY_test.sh
PWD = os.getcwd()
print(PWD)

sh_file_name = "doDY_test.sh"
sh_file = open(sh_file_name, "w")

sh_file.write("#!/bin/bash")
sh_file.write("\n")
sh_file.write("\n")

sh_file.write("currentFolder={0}".format(PWD))
sh_file.write("\n")
sh_file.write("\n")

sh_file.write("voms-proxy-info")
sh_file.write("\n")
sh_file.write("\n")

sh_file.write("export SCRAM_ARCH=slc7_amd64_gcc820")
sh_file.write("\n")
sh_file.write("export VO_CMS_SW_DIR=/cvmfs/cms.cern.ch")
sh_file.write("\n")
sh_file.write("source $VO_CMS_SW_DIR/cmsset_default.sh")
sh_file.write("\n")
sh_file.write("cd ${currentFolder}")
sh_file.write("\n")
sh_file.write("eval `scramv1 ru -sh`")
sh_file.write("\n")
sh_file.write("ulimit -c 0")
sh_file.write("\n")
sh_file.write("\n")

sh_file.write("pycfg=${currentFolder}/configuration.py")
sh_file.write("\n")
sh_file.write("dycfg=${currentFolder}/dyestim.py")
sh_file.write("\n")
sh_file.write("input=${currentFolder}/rootFile/plots_ggH2018v6_STXS.root")
sh_file.write("\n")
sh_file.write("\n")

sh_file.write("mkDYestim_data.py --pycfg=$pycfg --dycfg=$dycfg --inputFile=$input")
sh_file.write("\n")

sh_file.close()

# Make it executable (chmod +x doDY_test.sh)
st = os.stat(sh_file_name)
os.chmod(sh_file_name, st.st_mode | stat.S_IEXEC)


# Now move to the Condor script - doDY_test.jds
jds_file_name = "doDY_test.jds"
jds_file = open(jds_file_name, "w")

jds_file.write("executable = {0}/{1}".format(PWD, sh_file_name))
jds_file.write("\n")
jds_file.write("universe = vanilla")
jds_file.write("\n")
jds_file.write("output = {0}/doDY_test.out".format(PWD))
jds_file.write("\n")
jds_file.write("error = {0}/doDY_test.err".format(PWD))
jds_file.write("\n")
jds_file.write("log = {0}/doDY_test.log".format(PWD))
jds_file.write("\n")
jds_file.write("\n")

jds_file.write("request_cpus = 1")
jds_file.write("\n")
jds_file.write('+JobFlavour = "testmatch"')
jds_file.write("\n")
jds_file.write("queue")

jds_file.close()


# Send to Condor
os.system("condor_submit {0}".format(jds_file_name))

# Check the status once
os.system("condor_q")
