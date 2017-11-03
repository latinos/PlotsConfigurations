import os
import sys


print "2HDM Model Mass Points:"

ZpMasses = {"600","800","1000","1200","1400","1700","2000","2500"}
A0Masses = {"300","400","500","600","700","800"}

if len(sys.argv) < 2 :
    print "Please insert all the inputs I need: variable"
    print ""
    print "python scriptSplitDatacards.py events"
    print ""
    print "python scriptSplitDatacards.py muccamva2HDMadaptFull_600"
    print "python scriptSplitDatacards.py muccamva2HDMadaptFull_1000"
    print "python scriptSplitDatacards.py muccamva2HDMadaptFull_2000"
    print "python scriptSplitDatacards.py muccamva2HDMadaptFull_2500"
    print ""
    print "python scriptSplitDatacards.py muccamvaZbaradaptFull_10"
    print "python scriptSplitDatacards.py muccamvaZbaradaptFull_100"
    print "python scriptSplitDatacards.py muccamvaZbaradaptFull_1000"
    print "python scriptSplitDatacards.py muccamvaZbaradaptFull_2000"
    print ""
    print "python scriptSplitDatacards.py muccamva2HDMadaptFull_All_Bin1000"
    print "python scriptSplitDatacards.py muccamva2HDMadaptFull_All_Bin2000"
    print "python scriptSplitDatacards.py muccamva2HDMadaptFull_All_Bin2500"
    print "python scriptSplitDatacards.py muccamva2HDMadaptFull_All_Bin600"
    print ""
    print "python scriptSplitDatacards.py muccamvaZbaradaptFull_All_Bin10"
    print "python scriptSplitDatacards.py muccamvaZbaradaptFull_All_Bin100"
    print "python scriptSplitDatacards.py muccamvaZbaradaptFull_All_Bin1000"
    print "python scriptSplitDatacards.py muccamvaZbaradaptFull_All_Bin2000"
    print ""
    sys.exit()
    
variable = sys.argv[1]
print "Variable: " + variable

channel = "em"
cut = "MVA"

#Splitting Datacards
if "Zbar" not in variable and "ttDM" not in variable:                
    for mZp in ZpMasses :
        for mA0 in A0Masses :
            if (mZp == "600" and (mA0 == "500" or mA0 == "600" or mA0 == "700" or mA0 == "800")) : continue;
            if (mZp == "800" and (mA0 == "700" or mA0 == "800")) : continue;
            print "+++++ Splitting Datacards +++++"
            os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/ModificationDatacards")
            # Full lumi datacards
            os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + mZp + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
            os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_WW_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + mZp + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_WW_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
            os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_Top_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + mZp + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_Top_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
            os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_DYtt_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + mZp + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_DYtt_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
            # 1/15 lumi datacards
            os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + mZp + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")


print "Zbar Model Mass Points:"

ZB = "ZB"
ZBmasses={"10000_1000_","10000_500_","10000_150_","10000_50_","10000_1_","2000_1_","1995_1000_","1000_1000_","1000_150_","1000_1_","995_500_","500_500_","500_150_","500_1_","300_50_","300_1_","295_150_","200_150_","200_50_","200_1_","100_10_","100_1_","95_50_","50_50_","50_10_","50_1_","20_1_","15_10_","10_1000_","10_500_","10_150_","10_50_","10_10_","10_1_"}

if "2HDM" not in variable and "ttDM" not in variable:                                                                                                                  
    for mA0 in ZBmasses :
        print "+++++ Splitting Datacards +++++"
        os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/ModificationDatacards")
        # Full lumi datacards
        os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
        os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_WW_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_WW_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
        os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_Top_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_Top_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
        os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_DYtt_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_DYtt_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
        # 1/15 lumi datacards
        os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")


print "ttDM Model Mass Points:"

ZB = "ttDM"
ttDMmasses={"pseudo00010_","pseudo00020_","pseudo00050_","pseudo00100_","pseudo000200_","pseudo00300_","pseudo00500_","scalar00010_","scalar00020_","scalar00050_","scalar00100_","scalar000200_","scalar00300_","scalar00500_"}

if "2HDM" not in variable and "Zbar" not in variable:                                                                                                                  
    for mA0 in ttDMmasses :
        print "+++++ Splitting Datacards +++++"
        os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/ModificationDatacards")
        # Full lumi datacards
        os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
        os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_WW_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_WW_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
        os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_Top_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_Top_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
        os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_DYtt_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_DYtt_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
        # 1/15 lumi datacards
        os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
