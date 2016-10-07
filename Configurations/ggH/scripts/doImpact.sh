#
# impact plots
#
# instructions: https://twiki.cern.ch/twiki/bin/view/CMS/HWWCombineTools#Impacts
#               https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SWGuideNonStandardCombineUses#Nuisance_parameter_impacts
#

cd ~/Framework/Combine/CMSSW_7_4_7/src/
cmsenv
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
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnorm2jvbf,Topnorm2jvbf,DYttnorm2jvbf,WWnorm2jvh,Topnorm2jvh,DYttnorm2jvh,Zg3lnorm,WZ3lnorm  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4:Zg3lnorm=-3,4:WZ3lnorm=-3:4

# the next one may takes ... hours!
combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20   \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4:Zg3lnorm=-3,4:WZ3lnorm=-3:4

combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125    \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnorm2jvbf,Topnorm2jvbf,DYttnorm2jvbf,WWnorm2jvh,Topnorm2jvh,DYttnorm2jvh,Zg3lnorm,WZ3lnorm  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4:Zg3lnorm=-3,4:WZ3lnorm=-3:4  \
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
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnorm2jvbf,Topnorm2jvbf,DYttnorm2jvbf,WWnorm2jvh,Topnorm2jvh,DYttnorm2jvh,Zg3lnorm,WZ3lnorm  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4:Zg3lnorm=-3,4:WZ3lnorm=-3:4


# the next one may takes ... hours!
combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20  --expectSignal=1  -t -1 --toysFreq  \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnorm2jvbf,Topnorm2jvbf,DYttnorm2jvbf,WWnorm2jvh,Topnorm2jvh,DYttnorm2jvh,Zg3lnorm,WZ3lnorm  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4:Zg3lnorm=-3,4:WZ3lnorm=-3:4

combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125  --expectSignal=1  -t -1 --toysFreq  \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnorm2jvbf,Topnorm2jvbf,DYttnorm2jvbf,WWnorm2jvh,Topnorm2jvh,DYttnorm2jvh,Zg3lnorm,WZ3lnorm  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4:Zg3lnorm=-3,4:WZ3lnorm=-3:4  \
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
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnorm2jvbf,Topnorm2jvbf,DYttnorm2jvbf,WWnorm2jvh,Topnorm2jvh,DYttnorm2jvh,Zg3lnorm,WZ3lnorm  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4:Zg3lnorm=-3,4:WZ3lnorm=-3:4


# the next one may takes ... hours!
combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20  --expectSignal=1  -t -1 --toysFreq  \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnorm2jvbf,Topnorm2jvbf,DYttnorm2jvbf,WWnorm2jvh,Topnorm2jvh,DYttnorm2jvh,Zg3lnorm,WZ3lnorm  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4:Zg3lnorm=-3,4:WZ3lnorm=-3:4

combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125  --expectSignal=1  -t -1 --toysFreq  \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnorm2jvbf,Topnorm2jvbf,DYttnorm2jvbf,WWnorm2jvh,Topnorm2jvh,DYttnorm2jvh,Zg3lnorm,WZ3lnorm  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4:Zg3lnorm=-3,4:WZ3lnorm=-3:4  \
               -o superCombination.Total.txt.pruned.root_impacts_datacard.MCAsimov_rateParam.json

plotImpacts.py -i superCombination.Total.txt.pruned.root_impacts_datacard.MCAsimov_rateParam.json  -o impacts_datacard_MCAsimov_rateParam










# test few nuisances


combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --doInitialFit --robustFit 1  --expectSignal=1 -t -1 --toysFreq \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnorm2jvbf,Topnorm2jvbf,DYttnorm2jvbf,WWnorm2jvh,Topnorm2jvh,DYttnorm2jvh  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4


# the next one may takes ... hours!
combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20  --expectSignal=1  -t -1 --toysFreq  \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnorm2jvbf,Topnorm2jvbf,DYttnorm2jvbf,WWnorm2jvh,Topnorm2jvh,DYttnorm2jvh,Zg3lnorm,WZ3lnorm  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4

combineTool.py -M Impacts -d superCombination.Total.txt.pruned.root -m 125  --expectSignal=1  -t -1 --toysFreq  \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnorm2jvbf,Topnorm2jvbf,DYttnorm2jvbf,WWnorm2jvh,Topnorm2jvh,DYttnorm2jvh,Zg3lnorm,WZ3lnorm  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4  \
               -o superCombination.Total.txt.pruned.root_impacts_datacard.MCAsimov_rateParam.json






















# test only control regions

cd ~/Framework/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -



       

combineCards.py   of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  of2j2j13Top=ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  of2j2j13DYtt=ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  >   superCombination.ControlRegions.Total.txt.pruned.txt
 
 
 

combineCards.py   of0j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  of0j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                  ICHEP_of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                  >   superCombination.ControlRegions.0j.txt.pruned.txt
 
combineCards.py   of1j13Top=ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  of1j13DYtt=ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                  ICHEP_of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                  >   superCombination.ControlRegions.1j.txt.pruned.txt

                  
combineCards.py   of2j2j13Top=ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  of2j2j13DYtt=ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13Top=ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2j2j13DYtt=ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt \
                  >   superCombination.ControlRegions.2j.txt.pruned.txt

                  
combineCards.py   of2jvbf13Top=VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt \
                  of2jvbf13DYtt=VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvbf13Top=VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  ICHEP_of2jvbf13DYtt=VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt \
                  >   superCombination.ControlRegions.vbf.txt.pruned.txt
 
 
 
combineCards.py   of2jvh2j13Top=VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  of2jvh2j13DYtt=VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13Top=VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt \
                  ICHEP_of2jvh2j13DYtt=VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt \
                  >   superCombination.ControlRegions.vh2j.txt.pruned.txt
 
text2workspace.py superCombination.ControlRegions.Total.txt.pruned.txt -m 125
text2workspace.py superCombination.ControlRegions.0j.txt.pruned.txt -m 125
text2workspace.py superCombination.ControlRegions.1j.txt.pruned.txt -m 125
text2workspace.py superCombination.ControlRegions.2j.txt.pruned.txt -m 125
text2workspace.py superCombination.ControlRegions.vbf.txt.pruned.txt -m 125
text2workspace.py superCombination.ControlRegions.vh2j.txt.pruned.txt -m 125

 
   
#                         
# combine -M MultiDimFit \
#      --redefineSignalPOIs Topnorm2jvh --freezeNuisances=r,WWnorm2jvh,DYttnorm2jvh  \
#      --setPhysicsModelParameterRanges Topnorm2jvh=0.01,2   \
#      --setPhysicsModelParameters    Topnorm2jvh=1 \
#      --algo=grid --points=200  \
#      superCombination.ControlRegions.vh2j.txt.pruned.txt    \
#      -n "LH1D_ControlRegion_vh2j_combined"     >   result.MultiDimFit.grid.workspace.ControlRegion_vh2j.txt.pruned.txt
# 
                   
combine -M MultiDimFit \
     --redefineSignalPOIs Topnorm2jvh,DYttnorm2jvh --freezeNuisances=r,WWnorm2jvh  \
     --setPhysicsModelParameterRanges DYttnorm2jvh=0.3,1.7:Topnorm2jvh=0.80,1.20   \
     --setPhysicsModelParameters    Topnorm2jvh=1,DYttnorm2jvh=1 \
     --algo=grid --points=200  \
     superCombination.ControlRegions.vh2j.txt.pruned.txt    \
     -n "LH2D_ControlRegion_vh2j_combined"     >   result.MultiDimFit.grid.workspace.ControlRegion_vh2j.txt.pruned.txt


>>>   higgsCombineLH2D_ControlRegion_vh2j_combined.MultiDimFit.mH120.root
 
r99t higgsCombineLH2D_ControlRegion_vh2j_combined.MultiDimFit.mH120.root   ggH/scripts/Draw2DImproved.cxx\(\"Top\",\"DY\",\"Topnorm2jvh\",\"DYttnorm2jvh\"\)
     

     
     
     
     
               
combine -M MultiDimFit \
     --redefineSignalPOIs Topnorm2jvbf,DYttnorm2jvbf --freezeNuisances=r,WWnorm2jvbf  \
     --setPhysicsModelParameterRanges DYttnorm2jvbf=0.1,4.0:Topnorm2jvbf=0.50,1.50   \
     --setPhysicsModelParameters    Topnorm2jvbf=1,DYttnorm2jvbf=1 \
     --algo=grid --points=200  \
     superCombination.ControlRegions.vbf.txt.pruned.txt    \
     -n "LH2D_ControlRegion_vbf2j_combined"     >   result.MultiDimFit.grid.workspace.ControlRegion_vbf2j.txt.pruned.txt


>>>   higgsCombineLH2D_ControlRegion_vbf2j_combined.MultiDimFit.mH120.root
 
r99t higgsCombineLH2D_ControlRegion_vbf2j_combined.MultiDimFit.mH120.root   ggH/scripts/Draw2DImproved.cxx\(\"Top\",\"DY\",\"Topnorm2jvbf\",\"DYttnorm2jvbf\"\)
     

     
     
        
combine -M MultiDimFit \
     --redefineSignalPOIs Topnorm2j,DYttnorm2j --freezeNuisances=r,WWnorm2j  \
     --setPhysicsModelParameterRanges DYttnorm2j=0.3,1.7:Topnorm2j=0.80,1.20   \
     --setPhysicsModelParameters    Topnorm2j=1,DYttnorm2j=1 \
     --algo=grid --points=200  \
     superCombination.ControlRegions.2j.txt.pruned.txt    \
     -n "LH2D_ControlRegion_2j_combined"     >   result.MultiDimFit.grid.workspace.ControlRegion_2j.txt.pruned.txt


>>>   higgsCombineLH2D_ControlRegion_2j_combined.MultiDimFit.mH120.root
 
r99t higgsCombineLH2D_ControlRegion_2j_combined.MultiDimFit.mH120.root   ggH/scripts/Draw2DImproved.cxx\(\"Top\",\"DY\",\"Topnorm2j\",\"DYttnorm2j\"\)
     

          
     
   
combine -M MultiDimFit \
     --redefineSignalPOIs Topnorm0j,DYttnorm0j --freezeNuisances=r,WWnorm0j  \
     --setPhysicsModelParameterRanges DYttnorm0j=0.2,1.8:Topnorm0j=0.60,1.40   \
     --setPhysicsModelParameters    Topnorm0j=1,DYttnorm0j=1 \
     --algo=grid --points=200  \
     superCombination.ControlRegions.0j.txt.pruned.txt    \
     -n "LH2D_ControlRegion_0j_combined"     >   result.MultiDimFit.grid.workspace.ControlRegion_0j.txt.pruned.txt


>>>   higgsCombineLH2D_ControlRegion_0j_combined.MultiDimFit.mH120.root
 
r99t higgsCombineLH2D_ControlRegion_0j_combined.MultiDimFit.mH120.root   ggH/scripts/Draw2DImproved.cxx\(\"Top\",\"DY\",\"Topnorm0j\",\"DYttnorm0j\"\)
     
   
     
     
 
combine -M MultiDimFit \
     --redefineSignalPOIs Topnorm1j,DYttnorm1j --freezeNuisances=r,WWnorm1j  \
     --setPhysicsModelParameterRanges DYttnorm1j=0.6,1.4:Topnorm1j=0.85,1.15   \
     --setPhysicsModelParameters    Topnorm1j=1,DYttnorm1j=1 \
     --algo=grid --points=200  \
     superCombination.ControlRegions.1j.txt.pruned.txt    \
     -n "LH2D_ControlRegion_1j_combined"     >   result.MultiDimFit.grid.workspace.ControlRegion_1j.txt.pruned.txt


>>>   higgsCombineLH2D_ControlRegion_1j_combined.MultiDimFit.mH120.root
 
r99t higgsCombineLH2D_ControlRegion_1j_combined.MultiDimFit.mH120.root   ggH/scripts/Draw2DImproved.cxx\(\"Top\",\"DY\",\"Topnorm1j\",\"DYttnorm1j\"\)
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
 
combineTool.py -M Impacts -d superCombination.ControlRegions.vh2j.txt.pruned.root -m 125 --doInitialFit --robustFit 1 \
               --named Topnorm0j,DYttnorm0j,Topnorm1j,DYttnorm1j,Topnorm2j,DYttnorm2j,Topnorm2jvbf,DYttnorm2jvbf,Topnorm2jvh,DYttnorm2jvh  \
               --setPhysicsModelParameterRanges Topnorm0j=-3,4:DYttnorm0j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4


# the next one may takes ... hours!
combineTool.py -M Impacts -d superCombination.ControlRegions.vh2j.txt.pruned.root -m 125 --robustFit 1 --doFits --parallel 20   \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnorm2jvbf,Topnorm2jvbf,DYttnorm2jvbf,WWnorm2jvh,Topnorm2jvh,DYttnorm2jvh,Zg3lnorm,WZ3lnorm  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4

combineTool.py -M Impacts -d superCombination.ControlRegions.vh2j.txt.pruned.root -m 125  --expectSignal=1  -t -1 --toysFreq  \
               --named WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnorm2jvbf,Topnorm2jvbf,DYttnorm2jvbf,WWnorm2jvh,Topnorm2jvh,DYttnorm2jvh,Zg3lnorm,WZ3lnorm  \
               --setPhysicsModelParameterRanges WWnorm0j=-3,4:Topnorm0j=-3,4:DYttnorm0j=-3,4:WWnorm1j=-3,4:Topnorm1j=-3,4:DYttnorm1j=-3,4:WWnorm2j=-3,4:Topnorm2j=-3,4:DYttnorm2j=-3,4:WWnorm2jvbf=-3,4:Topnorm2jvbf=-3,4:DYttnorm2jvbf=-3,4:WWnorm2jvh=-3,4:Topnorm2jvh=-3,4:DYttnorm2jvh=-3,4  \
               -o superCombination.ControlRegions.vh2j.txt.pruned.root_impacts_datacard.data_rateParam.json


plotImpacts.py -i superCombination.ControlRegions.vh2j.txt.pruned.root_impacts_datacard.data_rateParam.json  -o impacts_datacard.ControlRegions.vh2j.data_rateParam











cd ggH


