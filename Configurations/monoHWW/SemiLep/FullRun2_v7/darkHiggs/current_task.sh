#!/usr/bin/bash
cd /afs/cern.ch/user/s/svanputt/work/monoHiggs/combine/CMSSW_10_2_13/src
eval `scramv1 runtime -sh`

# Run2
cd /afs/cern.ch/work/s/svanputt/monoHiggs/PR/CMSSW_10_6_5/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/FullRun2_v7/darkHiggs/datacards_combi/Run2_Comb/BDT_Ada13
text2workspace.py datacard_darkHiggs_mhs_160_mx_100_mZp_400_Run2Comb.txt --channel-masks
combineTool.py -M Impacts -d datacard_darkHiggs_mhs_160_mx_100_mZp_400_Run2Comb.root -t -1 --expectSignal 0 -n b --rMin -1.5 --doInitialFit --allPars -m 125
combineTool.py -M Impacts -d datacard_darkHiggs_mhs_160_mx_100_mZp_400_Run2Comb.root -o impacts_b.json -t -1 --expectSignal 0 -n b --rMin -1.5 --doFits -m 125 --job-mode condor --task-name b --sub-opts '+JobFlavour = "espresso"
requirements = (OpSysAndVer =?= "CentOS7")'
