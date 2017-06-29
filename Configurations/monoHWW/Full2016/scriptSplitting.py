import os 
import sys

if len(sys.argv) < 4 :
    print "Please insert all the inputs I need: channel, variable, cut"
    print "python scriptSplitting.py em mthBin MVA"
    sys.exit()

channel = sys.argv[1]
print channel

variable = sys.argv[2]
print variable

cut = sys.argv[3]
print cut

allSamples=["monoH_600_300","monoH_800_300","monoH_1000_300","monoH_1200_300","monoH_1400_300","monoH_1700_300","monoH_2000_300","monoH_2500_300","monoH_600_400","monoH_800_400","monoH_1000_400","monoH_1200_400","monoH_1400_400","monoH_1700_400","monoH_2000_400","monoH_2500_400","monoH_600_500","monoH_800_500","monoH_1000_500","monoH_1200_500","monoH_1400_500","monoH_1700_500","monoH_2000_500","monoH_2500_500","monoH_600_600","monoH_800_600","monoH_1000_600","monoH_1200_600","monoH_1400_600","monoH_1700_600","monoH_2000_600","monoH_2500_600","monoH_600_700","monoH_800_700","monoH_1000_700","monoH_1200_700","monoH_1400_700","monoH_1700_700","monoH_2000_700","monoH_2500_700","monoH_600_800","monoH_800_800","monoH_1000_800","monoH_1200_800","monoH_1400_800","monoH_1700_800","monoH_2000_800","monoH_2500_800","monoH_ZB_10000_1000","monoH_ZB_10000_500","monoH_ZB_10000_150","monoH_ZB_10000_50","monoH_ZB_1000_1000","monoH_ZB_2000_1","monoH_ZB_1995_1000","monoH_ZB_1000_150","monoH_ZB_1000_1","monoH_ZB_995_500","monoH_ZB_500_500","monoH_ZB_500_150","monoH_ZB_500_1","monoH_ZB_300_50","monoH_ZB_300_1","monoH_ZB_295_150","monoH_ZB_200_150","monoH_ZB_200_50","monoH_ZB_200_1","monoH_ZB_100_10","monoH_ZB_100_1","monoH_ZB_95_50","monoH_ZB_50_50","monoH_ZB_50_10","monoH_ZB_50_1","monoH_ZB_20_1","monoH_ZB_15_10","monoH_ZB_10_1000","monoH_ZB_10_500","monoH_ZB_10_150","monoH_ZB_10_50","monoH_ZB_10_10","monoH_ZB_10_1"]


print "+++++ Creating Folder for Input Files +++++"
os.system('mkdir -p  RemoveSamples_' + channel + '_' + cut + '/')

print "+++++ Creating Input Files +++++"
for i in range(0,len(allSamples)) :
    f = open("inputRemoval_" + str(allSamples[i]) + ".py","w")
    for sample in allSamples:
        if sample != str(allSamples[i]) :
            f.write("nameFactor.update({\'" + sample + "\'  : \'\'})\n")
    f.close()
    os.system('mv inputRemoval_' + str(allSamples[i]) + '.py RemoveSamples_' + channel + '_' + cut + '/')

print "+++++ Removing Signal Samples from Datacards +++++"
os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/ModificationDatacards/")
for i in range(0,len(allSamples)) :
    print "I shall keep signal sample called " + str(allSamples[i])
    print "Now Working on Signal Region Datacard"
    os.system('python RemoveSample.py   /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard.txt.pruned.txt    -i   /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/RemoveSamples_' + channel + '_' + cut + '/inputRemoval_' + str(allSamples[i]) + '.py -o /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/monoH_' + cut + '_' + channel + '/' + variable + '/' + str(allSamples[i]) + '.txt')
    print "Now Working on Top Control Region Datacard"
    os.system('python RemoveSample.py   /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/monoH_' + cut + '_Top_' + channel + '/events/datacard.txt.pruned.txt    -i   /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/RemoveSamples_' + channel + '_' + cut + '/inputRemoval_' + str(allSamples[i]) + '.py -o /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/monoH_' + cut + '_Top_' + channel + '/events/' + str(allSamples[i]) + '.txt')
    print "Now Working on WW Control Region Datacard"
    os.system('python RemoveSample.py   /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/monoH_' + cut + '_WW_' + channel + '/events/datacard.txt.pruned.txt    -i   /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/RemoveSamples_' + channel + '_' + cut + '/inputRemoval_' + str(allSamples[i]) + '.py -o /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/monoH_' + cut + '_WW_' + channel + '/events/' + str(allSamples[i]) + '.txt')
    print "Now Working on DYtt Control Region Datacard"
    os.system('python RemoveSample.py   /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/monoH_' + cut + '_DYtt_' + channel + '/events/datacard.txt.pruned.txt    -i   /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/RemoveSamples_' + channel + '_' + cut + '/inputRemoval_' + str(allSamples[i]) + '.py -o /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/monoH_' + cut + '_DYtt_' + channel + '/events/' + str(allSamples[i]) + '.txt')
os.chdir("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/")

print "+++++ Combining Datacards +++++"
for i in range(0,len(allSamples)) :
    os.system('combineCards.py datacards/monoH_' + cut + '_' + channel + '/' + variable + '/' + str(allSamples[i]) + '.txt datacards/monoH_' + cut + '_WW_' + channel + '/events/' + str(allSamples[i]) + '.txt datacards/monoH_' + cut + '_Top_' + channel + '/events/' + str(allSamples[i]) + '.txt datacards/monoH_' + cut + '_DYtt_' + channel + '/events/' + str(allSamples[i]) + '.txt > datacards/monoH_' + cut + '_' + channel + '/' + variable + '/' + str(allSamples[i]) + '_combined.txt')
