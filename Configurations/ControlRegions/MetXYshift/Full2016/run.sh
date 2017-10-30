
#voms-proxy-init --voms cms --valid 168:0
# queues at KNU: short(cpu:00:30:00, wall:00:45:00), cms, long

#############################################
# simply drawing a variable
#############################################
#inRootFile="/pnfs/knu.ac.kr/data/cms/store/user/salee/Apr2017_summer16_KNU/MCl2vloose_KNU/latino_WZTo3LNu_mllmin01_ext1__part0.root"
#inRootFile="/pnfs/knu.ac.kr/data/cms/store/user/salee/Apr2017_summer16_KNU/MCl2vloose_KNU/latino_WZTo3LNu__part0.root"
#RootOutDir="plotSimple_WZTo3LNu_mllmin01_ext1"
#RootOutDir="plotSimple_WZTo3LNu"
#root -l "../scripts/simplyDrawTree.C+(\"$inRootFile\",\"$RootOutDir\")"

##############################################
# Batch Jobs Working directory Setup
##############################################
# go to LatinoAnalysis/Tools/python
# cp userConfig_TEMPLATE.py userConfig.py
# modify baseDir as yours in userConfig.py

############################
# Batch options
############################
# -R(redo), -n(pretend)
######################################################################################################
# mkGardender
######################################################################################################
# check LatinoAnalysis/Gardener/python/Gardener_cfg.py

# metXYshift ###############################################################


skim=''
#skim='__wwSel'
inputDir='/pnfs/knu.ac.kr/data/cms/store/user/spak/LatinoTree/Full2016_Apr17/'
inputDataProcess='lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA'
inputFakeProcess='lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__multiFakeW__formulasFAKE__hadd'
outputDir='/pnfs/knu.ac.kr/data/cms/store/user/salee/Full2016_Apr17/'
#mkGardener.py -p Apr2017_summer16_KNU  -s metXYshift_MC -S Target -I /pnfs/knu.ac.kr/data/cms/store/user/spak/LatinoTree/Full2016_Apr17/ -i lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC${skim} -O /pnfs/knu.ac.kr/data/cms/store/user/salee/Full2016_Apr17/ -b -Q cms -R

#for Run in B C D E F G H; do
#  mkGardener.py -p Apr2017_Run2016${Run}_RemAOD_KNU -s metXYshift_2016${Run} -S Target -I ${inputDir} -i ${inputDataProcess} -O ${outputDir} -b -Q cms -R
#  mkGardener.py -p Apr2017_Run2016${Run}_RemAOD_KNU -s metXYshift_2016${Run} -S Target -I ${inputDir} -i ${inputFakeProcess} -O ${outputDir} -b -Q cms -R
#done


# metXYshift Test for DY and SingleMuon ###############################################

#mkGardener.py -p Apr2017_summer16_KNU -T DYJetsToLL_M-50 -s metXYshift_MC -S Target -I /pnfs/knu.ac.kr/data/cms/store/user/spak/LatinoTree/Full2016_Apr17/ -i lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC -O /pnfs/knu.ac.kr/data/cms/store/user/salee/Full2016_Apr17/ 
#mkGardener.py -p Apr2017_Run2016B_RemAOD_KNU -T SingleMuon_Run2016B-03Feb2017_ver2-v2 -s metXYshift_2016B -S Target -I /pnfs/knu.ac.kr/data/cms/store/user/spak/LatinoTree/Full2016_Apr17/ -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA -O /pnfs/knu.ac.kr/data/cms/store/user/salee//Full2016_Apr17/ -R 
#mkGardener.py -p Apr2017_Run2016C_RemAOD -T SingleMuon_Run2016C-03Feb2017-v1 -s metXYshift_2016C -S Target -I /pnfs/knu.ac.kr/data/cms/store/user/spak/LatinoTree/Full2016_Apr17/ -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA__wwSel -O /pnfs/knu.ac.kr/data/cms/store/user/salee/ -b -Q short
#mkGardener.py -p Apr2017_Run2016D_RemAOD -T SingleMuon_Run2016D-03Feb2017-v1 -s metXYshift_2016D -S Target -I /pnfs/knu.ac.kr/data/cms/store/user/spak/LatinoTree/Full2016_Apr17/ -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA__wwSel -O /pnfs/knu.ac.kr/data/cms/store/user/salee/ -b -Q short
#mkGardener.py -p Apr2017_Run2016E_RemAOD -T SingleMuon_Run2016E-03Feb2017-v1 -s metXYshift_2016E -S Target -I /pnfs/knu.ac.kr/data/cms/store/user/spak/LatinoTree/Full2016_Apr17/ -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA__wwSel -O /pnfs/knu.ac.kr/data/cms/store/user/salee/ -b -Q short
#mkGardener.py -p Apr2017_Run2016F_RemAOD -T SingleMuon_Run2016F-03Feb2017-v1 -s metXYshift_2016F -S Target -I /pnfs/knu.ac.kr/data/cms/store/user/spak/LatinoTree/Full2016_Apr17/ -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA__wwSel -O /pnfs/knu.ac.kr/data/cms/store/user/salee/ -b -Q short
#mkGardener.py -p Apr2017_Run2016G_RemAOD -T SingleMuon_Run2016G-03Feb2017-v1 -s metXYshift_2016G -S Target -I /pnfs/knu.ac.kr/data/cms/store/user/spak/LatinoTree/Full2016_Apr17/ -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA__wwSel -O /pnfs/knu.ac.kr/data/cms/store/user/salee/ -b -Q short
#mkGardener.py -p Apr2017_Run2016H_RemAOD -T SingleMuon_Run2016H-03Feb2017_ver2-v1 -s metXYshift_2016H -S Target -I /pnfs/knu.ac.kr/data/cms/store/user/spak/LatinoTree/Full2016_Apr17/ -i lepSel__EpTCorr__TrigMakerData__cleanTauData__l2loose__hadd__l2tightOR__formulasDATA__wwSel -O /pnfs/knu.ac.kr/data/cms/store/user/salee/ -b -Q short

######################################################################################################
# mkShapes
######################################################################################################
# mkShapes.py --pycfg=<Config> --inputDir=<Dir> --doBatch=True --batchSplit=Cuts,Samples

#mkShapes.py --pycfg=configuration.py \
#	   # --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__wwSel \
#	    --doBatch=True \
#            --batchSplit=AsMuchAsPossible \
#	    --batchQueue=cms
#mkShapes.py --pycfg=configuration.py --doBatch=True --batchSplit=Samples --batchQueue=cms # using directory in sample.py for KNU case
#mkShapes.py --pycfg=configuration.py --doBatch=True --batchSplit=AsMuchAsPossible --batchQueue=cms # using directory in sample.py for KNU case
#mkShapes.py --pycfg=configuration.py --doHadd=True --batchSplit=AsMuchAsPossible # using directory in sample.py for KNU case

######################################################################################################
# mkPlot.py
######################################################################################################
rm -rf plotDYCorrMetXYshift.old
#rm -rf plotGGhCorrMetXYshift.old
mv plotDYCorrMetXYshift plotDYCorrMetXYshift.old
#mv plotGGhCorrMetXYshift plotGGhCorrMetXYshift.old
mkdir plotDYCorrMetXYshift
#mkdir plotGGhCorrMetXYshift
mkPlot.py   --pycfg=configuration.py  --inputFile=rootFile/plots_DYmetXYcor.root --showIntegralLegend=1
#mkPlot.py   --pycfg=configuration.py  --inputFile=rootFile/plots_ggHmetXYcor.root --showIntegralLegend=1
#tar cvf plot_WZTo3LNu.tar plot_comp_WZold_min01
#tar cvf plotWgsKinematics.tar plotWgsKinematics
#scp plot_WZTo3LNu.tar lxplus.cern.ch:www/WZ/
#scp plotWgsKinematics.tar lxplus.cern.ch:www/WgS/
