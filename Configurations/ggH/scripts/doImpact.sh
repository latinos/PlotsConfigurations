#
# impact plots
#
# instructions: https://twiki.cern.ch/twiki/bin/view/CMS/HWWCombineTools#Impacts
#               https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SWGuideNonStandardCombineUses#Nuisance_parameter_impacts
#

cd ~/Framework/Combine/CMSSW_7_4_7/src/
eval `scramv1 runtime -sh`
git clone https://github.com/cms-analysis/CombineHarvester.git CombineHarvester
scramv1 b -j 20
cd -

cd ..


text2workspace.py Moriond2016.v1.txt.pruned.txt -m 125

combineTool.py -M Impacts -d Moriond2016.v1.txt.pruned.root -m 125 --doInitialFit --robustFit 1 

# the next one may takes ... hours!
combineTool.py -M Impacts -d Moriond2016.v1.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20

combineTool.py -M Impacts -d Moriond2016.v1.txt.pruned.root -m 125 -o Moriond2016.v1.txt.pruned.root_impacts_datacard.json

plotImpacts.py -i Moriond2016.v1.txt.pruned.root_impacts_datacard.json -o impacts_datacard










combineTool.py -M Impacts -d Moriond2016.v1.txt.pruned.root -m 125 --doInitialFit --robustFit 1  --expectSignal=1  --toysFreq 

# the next one may takes ... hours!
combineTool.py -M Impacts -d Moriond2016.v1.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20  --expectSignal=1  --toysFreq 

combineTool.py -M Impacts -d Moriond2016.v1.txt.pruned.root -m 125  --expectSignal=1  --toysFreq     -o Moriond2016.v1.txt.pruned.root_impacts_datacard.json

plotImpacts.py -i Moriond2016.v1.txt.pruned.root_impacts_datacard.json  -o impacts_datacard






cd ggH


