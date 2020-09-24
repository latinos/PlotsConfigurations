darkHiggs analysis
======================

# 0 - DO THE FINAL COMBINATION

    python mkCombinations.py --inputDir2016 /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2016_v7/datacards_2016/ --inputDir2017 /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7/datacards_2017/ --inputDir2018 /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2018_v7/datacards_2018/

    ./runCombination.sh


Fix the root files paths:
    python doPathCorrection.py --inputDir datacards

Run the impacts and checks:

    cd /afs/cern.ch/work/f/fernanpe/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit/	
    cmsenv
    cd -

    text2workspace.py datacards/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.txt

    combine -M FitDiagnostics -d datacards/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -t -1 --expectSignal 0 --rMin -10 --forceRecreateNLL -n _t0

    python $CMSSW_BASE/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py  -a fitDiagnostics_t0.root -g plots_t0.root >> ./fitResults_t0 

    combine -M FitDiagnostics -d datacards/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -t -1 --expectSignal 1  --forceRecreateNLL -n _t1
    python $CMSSW_BASE/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py  -a fitDiagnostics_t1.root -g plots_t1.root >> ./fitResults_t1 

    combineTool.py -M Impacts -d datacards/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -t -1 --expectSignal 0 --rMin -10 --doInitialFit --allPars -m 1 -n t0
    combineTool.py -M Impacts -d datacards/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -t -1 --expectSignal 1 --rMin -10 --doInitialFit --allPars -m 1 -n t1

    combineTool.py -M Impacts -d datacards/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -o impacts_t0.json -t -1 --expectSignal 0 --rMin -10 --doFits -m 1 -n t0 --job-mode condor --task-name t0 --sub-opts '+JobFlavour = "espresso"\nrequirements = (OpSysAndVer =?= "CentOS7")'
    combineTool.py -M Impacts -d datacards/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -o impacts_t1.json -t -1 --expectSignal 1 --rMin -10 --doFits -m 1 -n t1 --job-mode condor --task-name t1 --sub-opts '+JobFlavour = "espresso"\nrequirements = (OpSysAndVer =?= "CentOS7")'

    combineTool.py -M Impacts -d datacards/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -m 1 -n t0 -o impacts_t0.json
    combineTool.py -M Impacts -d datacards/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -m 1 -n t1 -o impacts_t1.json

    plotImpacts.py -i  impacts_t0.json -o  impacts_t0
    plotImpacts.py -i  impacts_t1.json -o  impacts_t1

    

Run the limits:

    python mkLimits.py datacards /afs/cern.ch/work/f/fernanpe/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7/ 
    python mksub.py 
    python submit.py

    ./runLimits.sh