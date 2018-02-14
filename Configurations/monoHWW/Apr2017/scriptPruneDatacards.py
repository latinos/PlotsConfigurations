import os
import sys


if len(sys.argv) < 3 :
    print "Please insert all the inputs I need: variable, region"
    print ""
    print "python scriptPruneDatacards.py events MVA_em"
    print "python scriptPruneDatacards.py events MVA_DYtt_em"
    print "python scriptPruneDatacards.py events MVA_Top_em"
    print "python scriptPruneDatacards.py events MVA_WW_em"
    print ""
    print "python scriptPruneDatacards.py mthBin MVA_em"
    print "python scriptPruneDatacards.py mthBin MVA_DYtt_em"
    print "python scriptPruneDatacards.py mthBin MVA_Top_em"
    print "python scriptPruneDatacards.py mthBin MVA_WW_em"
    print ""
    print "python scriptPruneDatacards.py muccamva2HDMadaptFull_All_Bin800 MVA_em"
    print "python scriptPruneDatacards.py muccamva2HDMadaptFull_All_Bin800 MVA_DYtt_em"
    print "python scriptPruneDatacards.py muccamva2HDMadaptFull_All_Bin800 MVA_Top_em"
    print "python scriptPruneDatacards.py muccamva2HDMadaptFull_All_Bin800 MVA_WW_em"
    print ""
    print "python scriptPruneDatacards.py muccamvaZbaradaptFull_All_Bin100 MVA_em"
    print "python scriptPruneDatacards.py muccamvaZbaradaptFull_All_Bin100 MVA_DYtt_em"
    print "python scriptPruneDatacards.py muccamvaZbaradaptFull_All_Bin100 MVA_Top_em"
    print "python scriptPruneDatacards.py muccamvaZbaradaptFull_All_Bin100 MVA_WW_em"
    print ""
    print ""
    sys.exit()
    
variable = sys.argv[1]
print "Variable: " + variable

region = sys.argv[2]
print "Region: " + region


os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/ModificationDatacards")
print "ls /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_"+region+"/"+variable+"/*.txt  | grep -v \"pruned\"  | awk '{print \"python PruneDatacard.py  -d \"$1\" -o \"$1\".pruned.txt    -i examples/input_nuisances_to_prune.py\"}' | /bin/sh"
os.system("ls /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_"+region+"/"+variable+"/*.txt  | grep -v \"pruned\"  | awk '{print \"python PruneDatacard.py  -d \"$1\" -o \"$1\".pruned.txt    -i examples/input_nuisances_to_prune.py\"}' | /bin/sh")



