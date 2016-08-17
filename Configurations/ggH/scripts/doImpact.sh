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


text2workspace.py superCombination.Total.txt.pruned.txt -m 125



#####################################
# Impacts on data


combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --doInitialFit --robustFit 1 

# the next one may takes ... hours!
combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20

combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 -o superCombination.Total.txt.pruned.root_impacts_datacard_data.json

plotImpacts.py -i superCombination.Total.txt.pruned.root_impacts_datacard_data.json -o impacts_datacard_data








combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --doInitialFit --robustFit 1  \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4

# the next one may takes ... hours!
combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20   \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4

combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125    \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4  \
               -o superCombination.Total.txt.pruned.root_impacts_datacard.data_rateParam.json

plotImpacts.py -i superCombination.Total.txt.pruned.root_impacts_datacard.data_rateParam.json  -o impacts_datacard_data_rateParam












#####################################
# Impacts on Asimov data


combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --doInitialFit --robustFit 1  --expectSignal=1 -t -1 --toysFreq 

# the next one may takes ... hours!
combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20  --expectSignal=1  -t -1 --toysFreq 

combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125  --expectSignal=1  -t -1 --toysFreq     -o superCombination.Total.txt.pruned.root_impacts_datacard.dataAsimov.json

plotImpacts.py -i superCombination.Total.txt.pruned.root_impacts_datacard.dataAsimov.json  -o impacts_datacard_dataAsimov





combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --doInitialFit --robustFit 1  --expectSignal=1 -t -1 --toysFreq \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4


# the next one may takes ... hours!
combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20  --expectSignal=1  -t -1 --toysFreq  \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4

combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125  --expectSignal=1  -t -1 --toysFreq  \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4  \
               -o superCombination.Total.txt.pruned.root_impacts_datacard.dataAsimov_rateParam.json

plotImpacts.py -i superCombination.Total.txt.pruned.root_impacts_datacard.dataAsimov_rateParam.json  -o impacts_datacard_dataAsimov_rateParam






#####################################
# Impacts on Asimov MC


combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --doInitialFit --robustFit 1  --expectSignal=1 -t -1

# the next one may takes ... hours!
combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20  --expectSignal=1  -t -1    --job-mode lxbatch --task-name lxbatch-test --sub-opts='-q 1nd'    --dry-run
combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20  --expectSignal=1  -t -1    --job-mode lxbatch --task-name lxbatch-test --sub-opts='-q 1nd'  

combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125  --expectSignal=1  -t -1   -o superCombination.Total.txt.pruned.root_impacts_datacard.MCAsimov.json

plotImpacts.py -i superCombination.Total.txt.pruned.root_impacts_datacard.MCAsimov.json  -o impacts_datacard_MCAsimov






combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --doInitialFit --robustFit 1  --expectSignal=1 -t -1 --toysFreq \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4


# the next one may takes ... hours!
combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20  --expectSignal=1  -t -1 --toysFreq  \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4

combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125  --expectSignal=1  -t -1 --toysFreq  \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4  \
               -o superCombination.Total.txt.pruned.root_impacts_datacard.MCAsimov_rateParam.json

plotImpacts.py -i superCombination.Total.txt.pruned.root_impacts_datacard.MCAsimov_rateParam.json  -o impacts_datacard_MCAsimov_rateParam





cd ggH


