import sys
import os

if len(sys.argv) < 4 :
    print "Please insert all the inputs I need: channel, variable, cut"
    print "python scriptImpact.py em mthBin MVA"
    sys.exit()

channel = sys.argv[1]
print channel

variable = sys.argv[2]
print variable

cut = sys.argv[3]
print cut

os.system('mkdir -p impacts_' + channel + '_' + cut + '/')

os.system('text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO \'map=.*/monoH_*:0\' --PO \'map=.*/monoH_800_300:r[1,0,10]\' datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_combined.txt -o datacards/monoH_' + cut + '_' + channel + '/' + variable + '/datacard_combined.root')

os.system("combineTool.py -M Impacts -d datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_combined.root -m 125 --doInitialFit -t -1 --expectSignal=1 --robustFit 1")

os.system("combineTool.py -M Impacts -d datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_combined.root -m 125 -t -1 --expectSignal=1 --robustFit 1 --doFits")

os.system("combineTool.py -M Impacts -d datacards/monoH_" + cut + "_" + channel + "/" + variable + "/datacard_combined.root -m 125 -o impacts_" + channel + "_" + cut + "/" + variable + ".json")

os.system('plotImpacts.py -i impacts_' + channel + '_' + cut + '/' + variable + '.json -o impacts_' + channel + '_' + cut + '/' + variable)
