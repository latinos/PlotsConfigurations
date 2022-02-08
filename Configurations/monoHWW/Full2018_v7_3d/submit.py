import os
import shutil
import glob

for myfile in glob.glob("sub_send_*sub"):
#for myfile in glob.glob("sub_send_DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_160_mx_200_mZp_295_TuneCP5_13TeV__part36.sh.sub"):
    #print myfile
    subcom = 'condor_submit ' + myfile
    os.system(subcom)
