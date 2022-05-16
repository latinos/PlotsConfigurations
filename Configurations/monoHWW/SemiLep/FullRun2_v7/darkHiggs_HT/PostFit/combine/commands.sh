#/afs/cern.ch/user/s/svanputt/work/monoHiggs/combine/CMSSW_10_2_13/src

#### Fit results
#combineCards.py Year2016_TCR=../datacards_2016/InCh_TCR/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt Year2016_SB=../datacards_2016/InCh_SB/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt Year2016_SR=../datacards_2016/InCh_SR/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt Year2017_TCR=../datacards_2017/InCh_TCR/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt Year2017_SB=../datacards_2017/InCh_SB/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt Year2017_SR=../datacards_2017/InCh_SR/BDT_CFineEnd20/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt Year2018_TCR=../datacards_2018/InCh_TCR/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt Year2018_SB=../datacards_2018/InCh_SB/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt Year2018_SR=../datacards_2018/InCh_SR/BDT_CFineEnd20/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt > datacard_run2_combination.txt
#
#text2workspace.py datacard_run2_combination.txt
#
#combineTool.py -M FitDiagnostics datacard_run2_combination.root -n _run2_combination --setParameterRanges 'rgx{.*norm_.*}'=0.1,10 --robustFit 1 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_no_analytic


#### Combine cards for plots
### SR 2017-2018
#combineCards.py PF_2017SR=../datacards_2017/InCh_SR/BDT_CFineEnd20/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt PF_2018SR=../datacards_2018/InCh_SR/BDT_CFineEnd20/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt > datacard_17_18_SR.txt
#
#text2workspace.py datacard_17_18_SR.txt
#
### SR 2016 
#combineCards.py Year2016_SR=../datacards_2016/InCh_SR/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt > datacard_16_SR.txt
#
#text2workspace.py datacard_16_SR.txt
#
### SB run2
#combineCards.py PF_2016SB=../datacards_2016/InCh_SB/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt PF_2017SB=../datacards_2017/InCh_SB/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt PF_2018SB=../datacards_2018/InCh_SB/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt > datacard_run2_SB.txt
#
#text2workspace.py datacard_run2_SB.txt
#
### TCR run2
#combineCards.py PF_2016TCR=../datacards_2016/InCh_TCR/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt PF_2017TCR=../datacards_2017/InCh_TCR/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt PF_2018TCR=../datacards_2018/InCh_TCR/BDT_CFineEnd10/datacard_darkHiggs_mhs_160_mx_100_mZp_500.txt > datacard_run2_TCR.txt
#
#text2workspace.py datacard_run2_TCR.txt


### Create combine histograms
#PostFitShapesFromWorkspace -w datacard_17_18_SR.root -d datacard_17_18_SR.txt -o histograms_17_18_SR.root --postfit --sampling -f fitDiagnostics_run2_combination.root:fit_s --total-shapes  
#PostFitShapesFromWorkspace -w datacard_16_SR.root -d datacard_16_SR.txt -o histograms_16_SR.root --postfit --sampling -f fitDiagnostics_run2_combination.root:fit_s --total-shapes  
#PostFitShapesFromWorkspace -w datacard_run2_SB.root -d datacard_run2_SB.txt -o histograms_run2_SB.root --postfit --sampling -f fitDiagnostics_run2_combination.root:fit_s --total-shapes  
#PostFitShapesFromWorkspace -w datacard_run2_TCR.root -d datacard_run2_TCR.txt -o histograms_run2_TCR.root --postfit --sampling -f fitDiagnostics_run2_combination.root:fit_s --total-shapes  
PostFitShapesFromWorkspace -w datacard_17_18_SR.root -d datacard_17_18_SR.txt -o histograms_17_18_SR_b.root --postfit --sampling -f fitDiagnostics_run2_combination.root:fit_b --total-shapes  
PostFitShapesFromWorkspace -w datacard_16_SR.root -d datacard_16_SR.txt -o histograms_16_SR_b.root --postfit --sampling -f fitDiagnostics_run2_combination.root:fit_b --total-shapes  
#PostFitShapesFromWorkspace -w datacard_run2_SB.root -d datacard_run2_SB.txt -o histograms_run2_SB_b.root --postfit --sampling -f fitDiagnostics_run2_combination.root:fit_b --total-shapes  
#PostFitShapesFromWorkspace -w datacard_run2_TCR.root -d datacard_run2_TCR.txt -o histograms_run2_TCR_b.root --postfit --sampling -f fitDiagnostics_run2_combination.root:fit_b --total-shapes  
