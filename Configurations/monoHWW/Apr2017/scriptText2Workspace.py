import os
import sys

if len(sys.argv) < 2 :
    print "Please insert all the inputs I need: variable"
    print "python scriptText2Workspace.py mthBin"
    print "python scriptText2Workspace.py muccamva2HDMadaptFull"
    print "python scriptText2Workspace.py muccamva2HDMadaptFull_Intermediate"
    print "python scriptText2Workspace.py muccamva2HDMadaptFull_Old"
    print "python scriptText2Workspace.py muccamva2HDMgradFull"
    print "python scriptText2Workspace.py muccamva2HDMgradFull_Intermediate"
    print "python scriptText2Workspace.py muccamva2HDMgradFull_Old"
    print "python scriptText2Workspace.py muccamvaZbaradaptFull"
    print "python scriptText2Workspace.py muccamvaZbaradaptFull_Intermediate"
    print "python scriptText2Workspace.py muccamvaZbaradaptFull_Old"
    print "python scriptText2Workspace.py muccamvaZbargradFull"
    print "python scriptText2Workspace.py muccamvaZbargradFull_Intermediate"
    print "python scriptText2Workspace.py muccamvaZbargradFull_Old"
    sys.exit()
    
variable = sys.argv[1]
print "Variable: " + variable

channel = "em"
cut = "MVA"

# Combine datacards
print "+++++ Combining Datacards +++++"

print "Full Signal Region"
os.system("combineCards.py signal=datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt WW=datacards/monoH_" + cut + "_WW_" + channel + "/events/datacard.txt.pruned.txt Top=datacards/monoH_" + cut + "_Top_" + channel + "/events/datacard.txt.pruned.txt DYtt=datacards/monoH_" + cut + "_DYtt_" + channel + "/events/datacard.txt.pruned.txt > datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_combined.txt")
            
print "1/15 Signal Region"
os.system("combineCards.py signal=datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard.txt.pruned.txt WW=datacards/monoH_" + cut + "_WW_" + channel + "/events/datacard.txt.pruned.txt Top=datacards/monoH_" + cut + "_Top_" + channel + "/events/datacard.txt.pruned.txt DYtt=datacards/monoH_" + cut + "_DYtt_" + channel + "/events/datacard.txt.pruned.txt > datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_blind.txt")

# Create folders for results
print "+++++ Creating Folders for Results +++++"
os.system('mkdir -p  goodnessOfFit_' + channel + '_' + cut + '/')
os.system('mkdir -p  combine_' + channel + '_' + cut + '/')
os.system('mkdir -p  limits_' + channel + '_' + cut + '/')
os.system('mkdir -p  pulls_' + channel + '_' + cut + '/')


# text2workspace step
print "+++++ Translating Datacards to Rootfiles +++++"

ZpMasses = {"600","800","1000","1200","1400","1700","2000","2500"}
A0Masses = {"300","400","500","600","700","800"}

if "Zbar" not in variable :
    for mZp in ZpMasses :
        for mA0 in A0Masses :
            if (mZp == "600" and (mA0 == "500" or mA0 == "600" or mA0 == "700" or mA0 == "800")) : continue;
            if (mZp == "800" and (mA0 == "700" or mA0 == "800")) : continue;
            print "Full Signal Region"
            os.system("text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_" + mZp + "_" + mA0 + ":r[1,0,10]\' --channel-masks datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_combined.txt -o monoH_" + mZp + "_" + mA0 + ".root >> allBogus" + cut + "_" + channel + "_" + variable + ".txt")
            os.system("mv monoH_" + mZp + "_" + mA0 + ".root combine_" + channel + "_" + cut + "/monoH_" + mZp + "_" + mA0 + "_" + variable + ".root")           
            print "1/15 Signal Region"
            os.system("text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_" + mZp + "_" + mA0 + ":r[1,0,10]\' --channel-masks datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_blind.txt -o monoH_" + mZp + "_" + mA0 + "_blind.root >> allBogus" + cut + "_" + channel + "_" + variable + "_blind.txt")
            os.system("mv monoH_" + mZp + "_" + mA0 + "_blind.root combine_" + channel + "_" + cut + "/monoH_" + mZp + "_" + mA0 + "_" + variable + "_blind.root")
            
print "Zbar Model Mass Points:"
ZB = "ZB"
ZBmasses={"10000_1000_","10000_500_","10000_150_","10000_50_","10000_1_","2000_1_","1995_1000_","1000_1000_","1000_150_","1000_1_","995_500_","500_500_","500_150_","500_1_","300_50_","300_1_","295_150_","200_150_","200_50_","200_1_","100_10_","100_1_","95_50_","50_50_","50_10_","50_1_","20_1_","15_10_","10_1000_","10_500_","10_150_","10_50_","10_10_","10_1_"}

if "2HDM" not in variable :                               
    for mA0 in ZBmasses :
        print "Full Signal Region"
        os.system("text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_" + ZB + "_" + mA0 + ":r[1,0,10]\' --channel-masks datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_combined.txt -o monoH_" + ZB + "_" + mA0 + ".root >> allBogus" + cut + "_" + channel + "_" + variable + ".txt")
        os.system("mv monoH_" + ZB + "_" + mA0 + ".root combine_" + channel + "_" + cut + "/monoH_" + ZB + "_" + mA0 + "_" + variable + ".root")
        print "1/15 Signal Region"
        os.system("text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_" + ZB + "_" + mA0 + ":r[1,0,10]\' --channel-masks datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_blind.txt -o monoH_" + ZB + "_" + mA0 + "_blind.root >> allBogus" + cut + "_" + channel + "_" + variable + "_blind.txt")
        os.system("mv monoH_" + ZB + "_" + mA0 + "_blind.root combine_" + channel + "_" + cut + "/monoH_" + ZB + "_" + mA0 + "_" + variable + "_blind.root")
        
