import os
import sys


# print "2HDM Model Mass Points:"

# ZpMasses={"600","650","700","750","800","850","900","950","1000","1050","1100","1150","1200","1250","1300","1350","1400","1450","1500","1550","1600","1650","1700","1750","1800","1850","1900","1950","2000","2050","2100","2150","2200","2250","2300","2350","2400","2450","2500"}
# A0Masses={"300","325","350","375","400","425","450","475","500","525","550","575","600","625","650","675","700","725","750","775","800","825","850","875","900","925","950","975"}

# ZpMasses = {"600","800","1000","1200","1400","1700","2000","2500"}
# A0Masses = {"300","400","500","600","700","800"}

if len(sys.argv) < 3 :
    print "Please insert all the inputs I need: variable"
    print ""
    print "python scriptSplitDatacards.py events em 600 400"
    print ""
    print "python scriptSplitDatacards.py mthBin em 600 400"
    print ""
    print "python scriptSplitDatacards.py muccamva2HDMadaptFull_All_Bin800 em 600 400"
    print ""
    print "python scriptSplitDatacards.py muccamvaZbaradaptFull_All_Bin100 em 600 400"
    print ""
    print ""
    sys.exit()
    
variable = sys.argv[1]
print "Variable: " + variable

channel = sys.argv[2]
print "Channel: " + channel

mZp = sys.argv[3]
print "mZp: " + mZp

mA0 = sys.argv[4]
print "mA0: " + mA0

#channel = "em"
cut = "MVA"

#Splitting Datacards
#if "Zbar" not in variable and "ttDM" not in variable:                
#for mZp in ZpMasses :
#    for mA0 in A0Masses :
#        if (mZp == "600" and (mA0 == "500" or mA0 == "600" or mA0 == "700" or mA0 == "800")) : continue;
#        if (mZp == "800" and (mA0 == "700" or mA0 == "800")) : continue;
print "+++++ Splitting Datacards +++++"
os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/ModificationDatacards")
# Full lumi datacards
os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + mZp + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_WW_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + mZp + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_WW_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_Top_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + mZp + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_Top_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_DYtt_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + mZp + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_DYtt_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
# # 1/15 lumi datacards
# os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + mZp + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")









# print "Zbar Model Mass Points:"

# ZB = "ZB"
# ZBmasses={"10000_1000_","10000_500_","10000_150_","10000_50_","10000_1_","2000_1_","1995_1000_","1000_1000_","1000_150_","1000_1_","995_500_","500_500_","500_150_","500_1_","300_50_","300_1_","295_150_","200_150_","200_50_","200_1_","100_10_","100_1_","95_50_","50_50_","50_10_","50_1_","20_1_","15_10_","10_1000_","10_500_","10_150_","10_50_","10_10_","10_1_"}

# #if "2HDM" not in variable and "ttDM" not in variable:                                                                                                                  
# for mA0 in ZBmasses :
#     print "+++++ Splitting Datacards +++++"
#     os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/ModificationDatacards")
#     # Full lumi datacards
#     os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
#     os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_WW_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_WW_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
#     os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_Top_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_Top_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
#     os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_DYtt_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_DYtt_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
#     # 1/15 lumi datacards
#     os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + ZB + "_" + mA0 + ".txt.pruned.txt -k \"monoH_" + ZB + "_" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")


# # print "ttDM Model Mass Points:"

# ZB = "ttDM"
# ttDMmasses={"pseudo_00010_","pseudo_00020_","pseudo_00050_","pseudo_00100_","pseudo_00200_","pseudo_00300_","pseudo_00500_","scalar_00010_","scalar_00020_","scalar_00050_","scalar_00100_","scalar_00200_","scalar_00300_","scalar_00500_"}

# ###if "2HDM" not in variable and "Zbar" not in variable:                                                                                                                  
# for mA0 in ttDMmasses :
#     print "+++++ Splitting Datacards +++++"
#     os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/ModificationDatacards")
#     # Full lumi datacards
#     os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mA0 + ".txt.pruned.txt -k \"ttDM" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
#     os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_WW_" + channel + "/" + variable + "/datacard_" + mA0 + ".txt.pruned.txt -k \"ttdm" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_WW_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
#     os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_Top_" + channel + "/" + variable + "/datacard_" + mA0 + ".txt.pruned.txt -k \"ttDM" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_Top_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
#     os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_DYtt_" + channel + "/" + variable + "/datacard_" + mA0 + ".txt.pruned.txt -k \"ttDM" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_" + cut + "_DYtt_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
#     # 1/15 lumi datacards
#     os.system("python RemoveSample.py -i inputRemoval.py -o ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mA0 + ".txt.pruned.txt -k \"ttDM" + mA0 + "\" ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt")
