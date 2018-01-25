import os
import sys

if len(sys.argv) < 6 :
    print "Please insert all the inputs I need: channel, variable, cut, blind Lumi"
    print ""
    print "python scriptImpacts.py em muccamva2HDMadaptFull_All_Bin800 MVA 600 300 True"
    print "python scriptImpacts.py em muccamva2HDMadaptFull_All_Bin800 MVA 600 300 True _blindData"
    print ""
    print "python scriptImpacts.py em muccamva2HDMadaptFull_All_Bin800 MVA 800 300 True"
    print "python scriptImpacts.py em muccamva2HDMadaptFull_All_Bin800 MVA 800 300 True _blindData"
    print ""
    print "python scriptImpacts.py em muccamvaZbaradaptFull_All_Bin100 MVA ZB 100_1_ True"
    print "python scriptImpacts.py em muccamvaZbaradaptFull_All_Bin100 MVA ZB 100_1_ True _blindData"
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

doBlind=""
if len(sys.argv) > 7 :
    doBlind = sys.argv[7]
print "Do blind: " + doBlind


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
print("combineCards.py signal=datacards" + doBlind + "/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt WW=datacards/monoH_" + cut + "_WW_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt Top=datacards/monoH_" + cut + "_Top_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt DYtt=datacards/monoH_" + cut + "_DYtt_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt > datacards" + doBlind + "/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.txt")
#os.system("echo \"* autoMCStats 10 1\" >> datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.txt")

# print "1/15 Signal Region"
# os.system("combineCards.py signal=datacards_blindData/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt WW=datacards/monoH_" + cut + "_WW_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt Top=datacards/monoH_" + cut + "_Top_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt DYtt=datacards/monoH_" + cut + "_DYtt_" + channel + "/events/datacard_" + mZp + "_" + mA0 + ".txt.pruned.txt > datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_blind.txt")
#os.system("echo \"* autoMCStats 10 1\" >> datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_blind.txt")
print ""
print "2) Create workspace:"
print ""
print "text2workspace.py datacards" + doBlind + "/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.txt -o datacards" + doBlind + "/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.root"

print ""
print "3) Do the initial fit:"
print ""
print "combineTool.py -M Impacts -d datacards" + doBlind + "/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.root -m 125 --doInitialFit --rMin=-2 --robustFit 1 -n " + mZp + "_" + mA0 + "_" + variable + doBlind
  
print ""
print "4) Send all the impacts to lxbatch:"
print ""
print "combineTool.py -M Impacts -d datacards" + doBlind + "/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.root -m 125 --robustFit 1 --rMin=-2 --doFits --parallel 5 --job-mode lxbatch --task-name " + mZp + "_" + mA0 + "_" + variable + " --sub-opts=\'-q 2nd\' -n " + mZp + "_" + mA0 + "_" + variable + doBlind

print ""
print "5) When all the jobs are finished, produce the json file:"
print ""
print "combineTool.py -M Impacts -d datacards" + doBlind + "/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.root -m 125 --rMin=-2 -o pulls_" + channel + "_" + cut + "/impact_" + mZp + "_" + mA0 + "_" + variable + doBlind + ".json -n " + mZp + "_" + mA0 + "_" + variable + doBlind
  
print ""
print "6) Repeat steps 3), 4) and 5) for rateParams alone"
print ""
print "a)"
print "combineTool.py -M Impacts -d datacards" + doBlind + "/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.root -m 125 --doInitialFit --rMin=-2 --robustFit 1 -n " + mZp + "_" + mA0 + "_" + variable + doBlind + " --named WWnorm,Topnorm,DYttnorm --setParameterRanges WWnorm=-3,4:Topnorm=-3,4:DYttnorm=-3,4"
print ""
print "b)"
print "combineTool.py -M Impacts -d datacards" + doBlind + "/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.root -m 125 --robustFit 1 --rMin=-2 --doFits --parallel 5 --job-mode lxbatch --task-name " + mZp + "_" + mA0 + "_" + variable + doBlind + " --sub-opts=\'-q 2nd\' -n " + mZp + "_" + mA0 + "_" + variable + doBlind + " --named WWnorm,Topnorm,DYttnorm --setParameterRanges WWnorm=-3,4:Topnorm=-3,4:DYttnorm=-3,4"
print ""
print "c)"
print "combineTool.py -M Impacts -d datacards" + doBlind + "/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_" + mZp + "_" + mA0 + "_combined.root -m 125 --rMin=-2 -o pulls_" + channel + "_" + cut + "/impact_" + mZp + "_" + mA0 + "_" + variable + doBlind + "_rateParam.json -n " + mZp + "_" + mA0 + "_" + variable + doBlind + " --named WWnorm,Topnorm,DYttnorm --setParameterRanges WWnorm=-3,4:Topnorm=-3,4:DYttnorm=-3,4"

print ""
print "7) Merge the two json files:"
print ""
print "cat pulls_" + channel + "_" + cut + "/impact_" + mZp + "_" + mA0 + "_" + variable + doBlind + "_rateParam.json pulls_" + channel + "_" + cut + "/impact_" + mZp + "_" + mA0 + "_" + variable + doBlind + ".json > pulls_" + channel + "_" + cut + "/impact_" + mZp + "_" + mA0 + "_" + variable + doBlind + "_total.json"
print ""

print ""
print "8) Translate the json file into a pdf file:"
print ""
print "plotImpacts.py -i pulls_" + channel + "_" + cut + "/impact_" + mZp + "_" + mA0 + "_" + variable + doBlind + "_total.json -o pulls_" + channel + "_" + cut + "/impact_" + mZp + "_" + mA0 + "_" + variable + doBlind + "_total"
print ""
