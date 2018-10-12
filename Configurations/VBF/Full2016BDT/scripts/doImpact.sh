


# cmsrel CMSSW_8_1_0
# cd CMSSW_8_1_0/src 
# cmsenv
# git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
# cd HiggsAnalysis/CombinedLimit
# # Update to a reccomended tag - currently the reccomended tag is v7.0.4**
# cd $CMSSW_BASE/src/HiggsAnalysis/CombinedLimit
# git fetch origin
# git checkout v7.0.4
# scramv1 b clean; scramv1 b # always make a clean build

cd $CMSSW_BASE/src/
git clone https://github.com/cms-analysis/CombineHarvester.git CombineHarvester
scramv1 b -j 20

# 


cd ~/Framework/Combine/CMSSW_8_1_0/src/
cmsenv
eval `scramv1 runtime -sh`
cd -






text2workspace.py datacards_3Dec/hww2l2v_13TeV_of2j_vbf_highmjj/mll_optim/datacard.txt   -o  workspace.my.root  



#####################################
# Impacts on data


combineTool.py -M Impacts -d workspace.my.root -m 125 --doInitialFit --robustFit 1 

# the next one may takes ... hours!
combineTool.py -M Impacts -d workspace.my.root -m 125 --robustFit 1 --doFits --parallel 5    --job-mode lxbatch --task-name lxbatch-test-impact-data --sub-opts='-q 1nw'
 
#  --parallel PARALLEL   Number of jobs to run in parallel [only affects
#                         interactive job-mode]
                        
combineTool.py -M Impacts -d workspace.my.root -m 125 -o workspace.my.root_impacts_datacard_data.json

plotImpacts.py -i workspace.my.root_impacts_datacard_data.json -o impacts_datacard_data





#####################################
# Impacts on Asimov MC


combineTool.py -M Impacts -d workspace.my.root -m 125 --doInitialFit --robustFit 1  --expectSignal=1 -t -1    --saveWorkspace

# the next one may takes ... hours!
combineTool.py -M Impacts -d workspace.my.root -m 120 --robustFit 1 --doFits --parallel 20  --expectSignal=1  -t -1    --job-mode lxbatch --task-name lxbatch-test --sub-opts='-q 1nd'     --dry-run

combineTool.py -M Impacts -d higgsCombine_initialFit_Test.MultiDimFit.mH125.root -m 125 --robustFit 1 --doFits --parallel 20  --expectSignal=1  -t -1    --job-mode lxbatch --task-name lxbatch-test --sub-opts='-q 1nd'   --snapshotName MultiDimFit  --doImpactNoCorr        --dry-run
combineTool.py -M Impacts -d higgsCombine_initialFit_Test.MultiDimFit.mH125.root -m 125 --robustFit 1 --doFits --parallel 20  --expectSignal=1  -t -1    --job-mode lxbatch --task-name lxbatch-test --sub-opts='-q 1nd'   --snapshotName MultiDimFit  --doImpactNoCorr   

combineTool.py -M Impacts -d higgsCombine_initialFit_Test.MultiDimFit.mH125.root -m 125  --expectSignal=1  -t -1  --doImpactNoCorr  -o workspace.my.root_impacts_datacard.MCAsimov.MYNEW.json

plotImpacts.py -i workspace.my.root_impacts_datacard.MCAsimov.MYNEW.json  -o impacts_datacard_MCAsimov.MYNEW






combineTool.py -M Impacts -d workspace.my.root -m 120  --expectSignal=1  -t -1   -o workspace.my.root_impacts_datacard.MCAsimov.json

plotImpacts.py -i workspace.my.root_impacts_datacard.MCAsimov.json  -o impacts_datacard_MCAsimov








#####################################
# Impacts on Asimov data


combineTool.py -M Impacts -d workspace.my.root -m 125 --doInitialFit --robustFit 1  --expectSignal=1 -t -1 --toysFreq 

# the next one may takes ... hours!
combineTool.py -M Impacts -d workspace.my.root -m 125 --robustFit 1 --doFits --parallel 20  --expectSignal=1  -t -1 --toysFreq 

combineTool.py -M Impacts -d workspace.my.root -m 125  --expectSignal=1  -t -1 --toysFreq     -o workspace.my.root_impacts_datacard.dataAsimov.json

plotImpacts.py -i workspace.my.root_impacts_datacard.dataAsimov.json  -o impacts_datacard_dataAsimov



