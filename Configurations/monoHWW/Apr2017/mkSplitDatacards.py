#  bsub -q 8nh  submitSplitDatacards.sh events em 600 400

import os
import sys

if len(sys.argv) < 3 :
    print "Please insert all the inputs I need: variable"
    print ""
    print "python mkSplitDatacards.py muccamva2HDMadaptFull_All_Bin800 em"
    print ""
    print "python mkSplitDatacards.py muccamvaZbaradaptFull_All_Bin100 em"
    print ""
    print "python mkSplitDatacards.py mthBin em"
    print ""
    print "python mkSplitDatacards.py events em"
    print ""
    print ""

    sys.exit()
    
variable = sys.argv[1]
print "Variable: " + variable

channel = sys.argv[2]
print "Channel: " + channel

#channel = "em"
cut = "MVA"

os.system("mkdir -p jobs")

print "2HDM Model Mass Points:"

ZpMasses={"600","650","700","750","800","850","900","950","1000","1050","1100","1150","1200","1250","1300","1350","1400","1450","1500","1550","1600","1650","1700","1750","1800","1850","1900","1950","2000","2050","2100","2150","2200","2250","2300","2350","2400","2450","2500"}
A0Masses={"300","325","350","375","400","425","450","475","500","525","550","575","600","625","650","675","700","725","750","775","800","825","850","875","900","925","950","975"}

for mzp in ZpMasses :
    for ma0 in A0Masses :
        print 'bsub -q 8nh -o jobs/split_' + mzp + '_' + ma0 + '_' + cut + '_'  + channel + '_' + variable + '.out -e jobs/split_' + mzp + '_' + ma0 + '_' + cut + '_' + channel + '_' + variable + '.err /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/submitSplitDatacards.sh ' + variable + ' ' + channel + ' ' + cut + ' ' + mzp + ' ' + ma0
        os.system('bsub -q 8nh -o jobs/split_' + mzp + '_' + ma0 + '_' + cut + '_'  + channel + '_' + variable + '.out -e jobs/split_' + mzp + '_' + ma0 + '_' + cut + '_' + channel + '_' + variable + '.err /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/submitSplitDatacards.sh ' + variable + ' ' + channel + ' ' + cut + ' ' + mzp + ' ' + ma0)
