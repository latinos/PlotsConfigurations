# bsub -q 1nd -o jobs/ZB_500_150__MVA_em_muccamvaZbaradaptFull.out -e jobs/ZB_500_150__MVA_em_muccamvaZbaradaptFull.err submitMonoH.sh em muccamvaZbaradaptFull MVA ZB 500_150_

import os
import sys

if len(sys.argv) < 3 :
    print "Please insert all the inputs I need: variable"
    print ""
    print "python mkMonoHiggsAnalysis.py muccamva2HDMadaptFull_All_Bin800 em"
    print ""
    print "python mkMonoHiggsAnalysis.py muccamvaZbaradaptFull_All_Bin100 em"
    print ""
    print ""
    print "python mkMonoHiggsAnalysis.py muccamva2HDMadaptFull_All_Bin800 sf"
    print ""
    print "python mkMonoHiggsAnalysis.py muccamvaZbaradaptFull_All_Bin100 sf"
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

ZpMasses = {"600","800","1000","1200","1400","1700","2000","2500"}
A0Masses = {"300","400","500","600","700","800"}
ttDMmasses={"scalar00010_","scalar00020_","scalar00050_","scalar00100_","scalar00200_","scalar00300_","scalar00500_","pseudo00010_","pseudo00020_","pseudo00050_","pseudo00100_","pseudo00200_","pseudo00300_","pseudo00500_"}

os.system("cp /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/submitMonoH.sh .")
os.system("chmod +x submitMonoH.sh")

if "Zbar" not in variable :                                                                                                                  
    
    for mzp in ZpMasses :
        for ma0 in A0Masses :
            if (mzp == "600" and (ma0 == "500" or ma0 == "600" or ma0 == "700" or ma0 == "800")) : continue;
            if (mzp == "800" and (ma0 == "700" or ma0 == "800")) : continue;
            print 'bsub -q 8nh -o jobs/' + mzp + '_' + ma0 + '_' + cut + '_'  + channel + '_' + variable + '.out -e jobs/' + mzp + '_' + ma0 + '_' + cut + '_' + channel + '_' + variable + '.err /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/submitMonoH.sh ' + channel + ' ' + variable + ' ' + cut + ' ' + mzp + ' ' + ma0
            os.system('bsub -q 8nh -o jobs/' + mzp + '_' + ma0 + '_' + cut + '_'  + channel + '_' + variable + '.out -e jobs/' + mzp + '_' + ma0 + '_' + cut + '_' + channel + '_' + variable + '.err /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/submitMonoH.sh ' + channel + ' ' + variable + ' ' + cut + ' ' + mzp + ' ' + ma0)

    for ttdm in ttDMmasses :
        print 'bsub -q 8nh -o jobs/' + mzp + '_' + ma0 + '_' + cut + '_'  + channel + '_' + variable + '.out -e jobs/' + mzp + '_' + ma0 + '_' + cut + '_' + channel + '_' + variable + '.err /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/submitMonoH.sh ' + channel + ' ' + variable + ' ' + cut + '  ttdm ' + ttdm
        os.system('bsub -q 8nh -o jobs/' + mzp + '_' + ma0 + '_' + cut + '_'  + channel + '_' + variable + '.out -e jobs/' + mzp + '_' + ma0 + '_' + cut + '_' + channel + '_' + variable + '.err /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/submitMonoH.sh ' + channel + ' ' + variable + ' ' + cut + ' ttdm ' + ttdm)

# python scriptMonoHSplit80.py em muccamva2HDMadaptFull_All_Bin800 MVA ttDM scalar00010_
            #os.system('.//afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/submitMonoH.sh ' + channel + ' ' + variable + ' ' + cut + ' ' + mzp + ' ' + ma0)


print "Zbar Model Mass Points:"

ZB = "ZB"
ZBmasses={"10000_1000_","10000_500_","10000_150_","10000_50_","10000_1_","2000_1_","1995_1000_","1000_1000_","1000_150_","1000_1_","995_500_","500_500_","500_150_","500_1_","300_50_","300_1_","295_150_","200_150_","200_50_","200_1_","100_10_","100_1_","95_50_","50_50_","50_10_","50_1_","20_1_","15_10_","10_1000_","10_500_","10_150_","10_50_","10_10_","10_1_"}

if "2HDM" not in variable :                                                                                                                  
    for ma0 in ZBmasses :
        print 'bsub -q 8nh -o jobs/' + ZB + '_' + ma0 + '_' + cut + '_'  + channel + '_' + variable + '.out -e jobs/' + ZB + '_' + ma0 + '_' + cut + '_' + channel + '_' + variable + '.err /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/submitMonoH.sh ' + channel + ' ' + variable + ' ' + cut + ' ' + ZB + ' ' + ma0
        os.system('bsub -q 8nh -o jobs/' + ZB + '_' + ma0 + '_' + cut + '_'  + channel + '_' + variable + '.out -e jobs/' + ZB + '_' + ma0 + '_' + cut + '_' + channel + '_' + variable + '.err /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/submitMonoH.sh ' + channel + ' ' + variable + ' ' + cut + ' ' + ZB + ' ' + ma0)
        #os.system('.//afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/submitMonoH.sh ' + channel + ' ' + variable + ' ' + cut + ' ' + ZB + ' ' + ma0)

