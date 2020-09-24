import os, sys, stat
import ROOT as r
from array import array
import glob

# python mkLimits.py datacards /afs/cern.ch/work/f/fernanpe/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/FullComb_v7/

templateCONDOR = """#!/bin/bash
cd CMSSWRELEASE
eval `scramv1 runtime -sh`
cd WORKINGPATH
combine -M AsymptoticLimits --run blind INPUT -n OUTPUT
"""


########################## Main program #####################################
if __name__ == "__main__":

    datacardsFolder = sys.argv[1]
    cmsswRelease = sys.argv[2]
    workingpath = sys.argv[3]

    for myfile in glob.glob(datacardsFolder + "/*_combined_corr*"):

        tempname = myfile.replace(datacardsFolder,'').replace('/datacard_', '').replace('_combined_corr.txt', '')
        template = templateCONDOR
        template = template.replace('CMSSWRELEASE', cmsswRelease)
        template = template.replace('INPUT', myfile) 
        template = template.replace('OUTPUT', tempname)

        template = template.replace('WORKINGPATH', workingpath) 
            
        f = open('send_' + tempname + '.sh', 'w')
        f.write(template)
        f.close()
        os.chmod('send_' + tempname + '.sh', 0755)     

    













     

