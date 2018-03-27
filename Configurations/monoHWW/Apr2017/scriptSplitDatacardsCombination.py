import os
import sys


# print "2HDM Model Mass Points:"

# ZpMasses={"600","650","700","750","800","850","900","950","1000","1050","1100","1150","1200","1250","1300","1350","1400","1450","1500","1550","1600","1650","1700","1750","1800","1850","1900","1950","2000","2050","2100","2150","2200","2250","2300","2350","2400","2450","2500"}
# A0Masses={"300","325","350","375","400","425","450","475","500","525","550","575","600","625","650","675","700","725","750","775","800","825","850","875","900","925","950","975"}

# ZpMasses = {"600","800","1000","1200","1400","1700","2000","2500"}
# A0Masses = {"300","400","500","600","700","800"}

if len(sys.argv) < 5 :
    print "Please insert all the inputs I need: variable"
    print ""
    print "python scriptSplitDatacardsCombination.py events em MVA 600 300 &"
    print "python scriptSplitDatacardsCombination.py events em MVA_DYtt 600 300 &"
    print "python scriptSplitDatacardsCombination.py events em MVA_Top 600 300 &"
    print "python scriptSplitDatacardsCombination.py events em MVA_WW 600 300 &"
    print ""
    print "python scriptSplitDatacardsCombination.py mthBin em MVA 600 300 &"
    print "python scriptSplitDatacardsCombination.py mthBin em MVA_DYtt 600 300 &"
    print "python scriptSplitDatacardsCombination.py mthBin em MVA_Top 600 300 &"
    print "python scriptSplitDatacardsCombination.py mthBin em MVA_WW 600 300 &"
    print ""
    print "python scriptSplitDatacardsCombination.py muccamva2HDMadaptFull_All_Bin800 em MVA 600 300 &"
    print "python scriptSplitDatacardsCombination.py muccamva2HDMadaptFull_All_Bin800 em MVA_DYtt 600 300 &"
    print "python scriptSplitDatacardsCombination.py muccamva2HDMadaptFull_All_Bin800 em MVA_Top 600 300 &"
    print "python scriptSplitDatacardsCombination.py muccamva2HDMadaptFull_All_Bin800 em MVA_WW 600 300 &"
    print ""
    print "python scriptSplitDatacardsCombination.py muccamvaZbaradaptFull_All_Bin100 em MVA 600 300 &"
    print "python scriptSplitDatacardsCombination.py muccamvaZbaradaptFull_All_Bin100 em MVA_DYtt 600 300 &"
    print "python scriptSplitDatacardsCombination.py muccamvaZbaradaptFull_All_Bin100 em MVA_Top 600 300 &"
    print "python scriptSplitDatacardsCombination.py muccamvaZbaradaptFull_All_Bin100 em MVA_WW 600 300 &"
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

print "+++++ Get Datacard Path +++++"
path = os.getcwd()
print path

print "+++++ Splitting Datacards +++++"
os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/ModificationDatacards")

# Full lumi datacards
os.system("python RemoveSample.py -i inputRemoval.py -o " + path + "/datacards_combination/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + mZp + "_" + mA0 + "\" " + path + "/datacards_combination/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")

# # 1/15 lumi datacards - not needed now
# os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + mZp + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")

