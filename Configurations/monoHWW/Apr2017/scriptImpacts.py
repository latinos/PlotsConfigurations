import os
import sys

if len(sys.argv) < 6 :
    print "Please insert all the inputs I need: channel, variable, cut"
    print ""
    print "python scriptImpacts.py em muccamva2HDMadaptFull_All_Bin800             MVA 600 300 True"
    print "python scriptImpacts.py em muccamva2HDMadaptFull_All_NoWeights_Bin800   MVA 600 300 True"
    print ""
    print "python scriptImpacts.py em muccamvaZbaradaptFull_All_Bin100             MVA ZB 100_1_ True"
    print "python scriptImpacts.py em muccamvaZbaradaptFull_All_NoWeights_Bin100   MVA ZB 100_1_ True"
    print "python scriptImpacts.py em muccamvaZbaradaptFull_All_Bin1000            MVA ZB 100_1_ True"
    print "python scriptImpacts.py em muccamvaZbaradaptFull_All_NoWeights_Bin1000  MVA ZB 100_1_ True"
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

doPulls="False"
if len(sys.argv) > 6 :
    doPulls = sys.argv[6]
print "Do pulls: " + doPulls


print ""
print "0) Source combine:"
print ""
print "cd ~/work/CMSSW_8_1_0/src/HiggsAnalysis/CombinedLimit/"
print "cmsenv"     
print "cd -"
print ""

print ""
print "1) Combine Datacards:"
print ""
print("combineCards.py signal=datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt WW=datacards/monoH_" + cut + "_WW_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt Top=datacards/monoH_" + cut + "_Top_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt DYtt=datacards/monoH_" + cut + "_DYtt_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt > datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.txt")
#os.system("echo \"* autoMCStats 10 1\" >> datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.txt")

# print "1/15 Signal Region"
# os.system("combineCards.py signal=datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt WW=datacards/monoH_" + cut + "_WW_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt Top=datacards/monoH_" + cut + "_Top_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt DYtt=datacards/monoH_" + cut + "_DYtt_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt > datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_blind.txt")
#os.system("echo \"* autoMCStats 10 1\" >> datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_blind.txt")
print ""
print "2) Create workspace:"
print ""
print "text2workspace.py datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.txt -o datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.root"

print ""
print "3) Do the initial fit:"
print ""
print "combineTool.py -M Impacts -d datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.root -m 125 --doInitialFit -t -1 --expectSignal=1 --robustFit 1 -n " + mZp + "_" + mA0 + "_" + variable + " --named WWnorm,Topnorm,DYttnorm --setParameterRanges WWnorm=-3,4:Topnorm=-3,4:DYttnorm=-3,4"
  
print ""
print "4) Send all the impacts to lxbatch:"
print ""
print "combineTool.py -M Impacts -d datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.root -m 125 --robustFit 1 -t -1 --expectSignal=1 --doFits --parallel 5 --job-mode lxbatch --task-name " + mZp + "_" + mA0 + "_" + variable + " --sub-opts=\'-q 2nd\' -n " + mZp + "_" + mA0 + "_" + variable + " --named WWnorm,Topnorm,DYttnorm --setParameterRanges WWnorm=-3,4:Topnorm=-3,4:DYttnorm=-3,4"

print ""
print "5) When all the jobs are finished, produce the json file:"
print ""
print "combineTool.py -M Impacts -d datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.root -m 125 -o pulls_" + channel + "_" + cut + "/impact_" + mZp + "_" + mA0 + "_" + variable + ".json -n " + mZp + "_" + mA0 + "_" + variable + " --named WWnorm,Topnorm,DYttnorm --setParameterRanges WWnorm=-3,4:Topnorm=-3,4:DYttnorm=-3,4"
  
print ""
print "6) Translate the json file into a pdf file:"
print ""
print "plotImpacts.py -i pulls_" + channel + "_" + cut + "/impact_" + mZp + "_" + mA0 + "_" + variable + ".json -o pulls_" + channel + "_" + cut + "/impact_" + mZp + "_" + mA0 + "_" + variable
print ""
