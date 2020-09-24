import os
import shutil
import glob

for myfile in glob.glob("send_*"):
    txt="universe              = vanilla\n"
    txt+="executable            = " + myfile + "\n"
    txt+="output                = output/job.$(ClusterId).$(ProcId).out\n"
    txt+="error                 = error/job.$(ClusterId).$(ProcId).err\n"
    txt+="log                   = log/job.$(ClusterId).log\n"
    txt+="Notify_user           = pedro.fernandez.manteca@cern.ch\n"
    txt+="RequestCpus           = 1\n"
    txt+='+JobFlavour           = "espresso"\n'
    txt+="queue\n"

    f = open('sub_' + myfile + ".sub", 'w')
    f.write(txt)
    f.close()
