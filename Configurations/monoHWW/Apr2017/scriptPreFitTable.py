# IMPORTANT: USE WITH COMBINE 747!

import os
import sys

Channels = {"em"}#,"sf"}
ZpMasses = {"600"}#,"800","1000","1200","1400","1700","2000","2500"}
A0Masses = {"300"}#,"400","500","600","700","800"}

if len(sys.argv) < 6 :
    print "Please insert all the inputs I need: channel, variable, cut"
    print ""
    print "python scriptPreFitTable.py em muccamva2HDMadaptFull_All_Bin800            MVA 800 300"
    print ""
    print "python scriptPreFitTable.py em muccamvaZbaradaptFull_All_Bin100            MVA ZB 100_1_"
    print ""
    sys.exit()

channel = sys.argv[1]
print "Channel: " + channel

variable = sys.argv[2]
print "Variable: " + variable

cut = sys.argv[3]
print "Cut: " + cut

mZp = sys.argv[4]
print "Mass Point/Model: " + mZp

mA0 = sys.argv[5]
print "Mass Point: " + mA0

os.system("mkdir -p /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/tables/")

os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlayWithDatacards/")

os.system("python systematicsAnalyzer.py /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt --all -f tex > /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/tables/monoH_" + cut + "_" + channel + "_" + variable + ".tex")

os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/")

