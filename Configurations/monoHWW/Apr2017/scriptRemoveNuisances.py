import os
import sys

if len(sys.argv) < 5 :
    print "Please insert all the inputs I need: variable"
    print ""
    print "python scriptRemoveNuisances.py events em MVA &"
    print "python scriptRemoveNuisances.py events em MVA_DYtt &"
    print "python scriptRemoveNuisances.py events em MVA_Top &"
    print "python scriptRemoveNuisances.py events em MVA_WW &"
    print ""
    print "python scriptRemoveNuisances.py mthBin em MVA &"
    print "python scriptRemoveNuisances.py mthBin em MVA_DYtt &"
    print "python scriptRemoveNuisances.py mthBin em MVA_Top &"
    print "python scriptRemoveNuisances.py mthBin em MVA_WW &"
    print ""
    print "python scriptRemoveNuisances.py muccamva2HDMadaptFull_All_Bin800 em MVA &"
    print "python scriptRemoveNuisances.py muccamva2HDMadaptFull_All_Bin800 em MVA_DYtt &"
    print "python scriptRemoveNuisances.py muccamva2HDMadaptFull_All_Bin800 em MVA_Top &"
    print "python scriptRemoveNuisances.py muccamva2HDMadaptFull_All_Bin800 em MVA_WW &"
    print ""
    print "python scriptRemoveNuisances.py muccamvaZbaradaptFull_All_Bin100 em MVA &"
    print "python scriptRemoveNuisances.py muccamvaZbaradaptFull_All_Bin100 em MVA_DYtt &"
    print "python scriptRemoveNuisances.py muccamvaZbaradaptFull_All_Bin100 em MVA_Top &"
    print "python scriptRemoveNuisances.py muccamvaZbaradaptFull_All_Bin100 em MVA_WW &"
    print ""
    print ""
    sys.exit()
    
variable = sys.argv[1]
print "Variable: " + variable

channel = sys.argv[2]
print "Channel: " + channel

cut = sys.argv[3]
print "Cut: " + cut

mZp = sys.argv[4]
print "mZp: " + mZp

mA0 = sys.argv[5]
print "mA0: " + mA0


inputDatacard  = open("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt","r")
outputDatacard = open("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt.2","w")

for line in inputDatacard : 
    if "shape             -            -            -            -            -            -            -            -            -            -            -            -            -            -            -            -            -            -" not in line :
        outputDatacard.write(line)

inputDatacard.close()
outputDatacard.close()

os.system("mv /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt.2 /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt")
