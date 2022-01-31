# Clean compiled libs
#find . -name *.so -exec rm -rf {} \;
#find . -name *.pcm -exec rm -rf {} \;

### Analysis
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_root/plots_darkHiggs_2017v7.root
#mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd
#python ../../scripts/propNuisance.py -i ../../Full2016_v7/darkHiggs/darkHiggs_root/plots_darkHiggs_2016v7.root -o darkHiggs_root/plots_darkHiggs_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n QCDscale_V -s Wjets --smooth

## plots
#mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_HTsf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
##mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Puppimet

## datacards
#mkDatacards.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root

### QER
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_qer_2017v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf_qer.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_qer.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_qer_root/plots_darkHiggs_qer_2017v7.root
#mkShapesMulti.py --pycfg=conf_qer.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd
#
## plots
#mkPlot.py --pycfg=conf_qer.py --inputFile=darkHiggs_qer_root/plots_darkHiggs_qer_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_qer.py --inputFile=darkHiggs_qer_root/plots_darkHiggs_qer_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_qer.py --inputFile=darkHiggs_qer_root/plots_darkHiggs_qer_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_qer.py --inputFile=darkHiggs_qer_root/plots_darkHiggs_qer_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Events

### Limits
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_lim_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_lim.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_lim.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_lim.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd 

## hadd
#rm darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root
#mkShapesMulti.py --pycfg=conf_lim.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd
##python ../../scripts/propNuisance.py -i ../../Full2016_v7/darkHiggs/darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root -o darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n QCDscale_V -s Wjets

#python ../../scripts/propNuisance.py -i ../../Full2016_v7/darkHiggs/darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root -o darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v BDT_2018bin,BDT_2017bin,BDT_2016bin,BDT_2018CRbin,BDT_2017CRbin,BDT_2016CRbin,BDT_UniBin,Events,BDT_2018Fbin,BDT_2017Fbin,BDT_2016Fbin -n QCDscale_Wjets -s Wjets --smooth
#python ../../scripts/propNuisance.py -i ../../Full2016_v7/darkHiggs/darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root -o darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v BDT_nb_2016bin,BDT_nb_2017bin,BDT_nb_2018bin,BDT_b_2016bin,BDT_b_2017bin,BDT_b_2018bin,BDT_b_UniBin,BDT_nb_UniBin -n QCDscale_Wjets -s Wjets --smooth

## plots
#mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Events 
##mkPlot.py --pycfg=conf_lim_PuppiRW.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

## datacards
##mkDatacards.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root
#mkDatacards.py --pycfg=conf_lim_datacard.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root

### b-veto
# Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_bveto_2017v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf_bveto.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_bveto.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd 

## hadd
#rm darkHiggs_bveto_root/plots_darkHiggs_bveto_2017v7.root
#mkShapesMulti.py --pycfg=conf_bveto.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

## plots
#mkPlot.py --pycfg=conf_bveto.py --inputFile=darkHiggs_bveto_root/plots_darkHiggs_bveto_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_bveto.py --inputFile=darkHiggs_bveto_root/plots_darkHiggs_bveto_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_bveto.py --inputFile=darkHiggs_bveto_root/plots_darkHiggs_bveto_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_bveto.py --inputFile=darkHiggs_bveto_root/plots_darkHiggs_bveto_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Events 
##mkPlot.py --pycfg=conf_bveto_PuppiRW.py --inputFile=darkHiggs_bveto_root/plots_darkHiggs_bveto_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

## datacards
#mkDatacards.py --pycfg=conf_bveto.py --inputFile=darkHiggs_bveto_root/plots_darkHiggs_bveto_2017v7.root

### Binning
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_binning_2017v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf_binning.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_binning.py --doBatch=True --batchQueue=microcentury --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_binning_root/plots_darkHiggs_binning_2017v7.root
#mkShapesMulti.py --pycfg=conf_binning.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd
#
## plots
#mkPlot.py --pycfg=conf_binning.py --inputFile=darkHiggs_binning_root/plots_darkHiggs_binning_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_binning.py --inputFile=darkHiggs_binning_root/plots_darkHiggs_binning_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_binning.py --inputFile=darkHiggs_binning_root/plots_darkHiggs_binning_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg

### Relative plots
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_rel_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_rel.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_rel.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_rel_root/plots_darkHiggs_rel_2017v7.root
#mkShapesMulti.py --pycfg=conf_rel.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

## plots
#mkPlot.py --pycfg=conf_rel.py --inputFile=darkHiggs_rel_root/plots_darkHiggs_rel_2017v7.root --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
#mkPlot.py --pycfg=conf_rel.py --inputFile=darkHiggs_rel_root/plots_darkHiggs_rel_2017v7.root --scaleToPlot=0.8 --plotNormalizedDistributions --onlyPlot=cSigVsBkg --onlyVariable=Puppimet
#mkPlot.py --pycfg=conf_rel.py --inputFile=darkHiggs_rel_root/plots_darkHiggs_rel_2017v7.root --scaleToPlot=0.8 --plotNormalizedDistributions --onlyPlot=cSigVsBkg --onlyVariable=mt_lmet
#mkPlot.py --pycfg=conf_rel.py --inputFile=darkHiggs_rel_root/plots_darkHiggs_rel_2017v7.root --scaleToPlot=0.8 --plotNormalizedDistributions --onlyPlot=cSigVsBkg --onlyVariable=pt_ljj
#mkPlot.py --pycfg=conf_rel.py --inputFile=darkHiggs_rel_root/plots_darkHiggs_rel_2017v7.root --scaleToPlot=1 --plotNormalizedDistributions --onlyPlot=cSigVsBkg --onlyVariable=dphi_ljj_met

### Efficincies of prefire and trigger
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_eff_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_eff.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_eff.py --doBatch=True --batchQueue=microcentury --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_eff_root/plots_darkHiggs_eff_2017v7.root
#mkShapesMulti.py --pycfg=conf_eff.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

## plots
#mkPlot.py --pycfg=conf_eff.py --inputFile=darkHiggs_eff_root/plots_darkHiggs_eff_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions

### Investigation
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_inv_2017v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root
#mkShapesMulti.py --pycfg=conf_inv.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

#python ../../scripts/propNuisance.py -i ../../Full2016_v7/darkHiggs/darkHiggs_inv_root/plots_darkHiggs_inv_2016v7.root -o darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR,InCh_SBh -v ALL -n QCDscale_Wjets -s Wjets --smooth
#python ../../scripts/propNuisance.py -i ../../Full2016_v7/darkHiggs/darkHiggs_inv_root/plots_darkHiggs_inv_2016v7.root -o darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR,InCh_SBh -v ALL -n QCDscale_1_Wjets -s Wjets --smooth
#python ../../scripts/propNuisance.py -i ../../Full2016_v7/darkHiggs/darkHiggs_inv_root/plots_darkHiggs_inv_2016v7.root -o darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR,InCh_SBh -v ALL -n QCDscale_2_Wjets -s Wjets --smooth
#python ../../scripts/propNuisance.py -i ../../Full2016_v7/darkHiggs/darkHiggs_inv_root/plots_darkHiggs_inv_2016v7.root -o darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR,InCh_SBh -v ALL -n QCDscale_3_Wjets -s Wjets --smooth

# datacards
mkDatacards.py --pycfg=conf_inv.py --inputFile=darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root

## plots
#mkPlot.py --pycfg=conf_inv.py --inputFile=darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_inv.py --inputFile=darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_inv.py --inputFile=darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_HTsf.py --inputFile=darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions

### JER
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_JER_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_JER.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_JER.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_JER_root/plots_darkHiggs_JER_2017v7.root
#mkShapesMulti.py --pycfg=conf_JER.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

### Limits fast
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_lim_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_lim_fast.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_lim_fast.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_lim_fast.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd 

## hadd
#rm darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root
#mkShapesMulti.py --pycfg=conf_lim_fast.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd
##python ../../scripts/propNuisance.py -i ../../Full2016_v7/darkHiggs/darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root -o darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n QCDscale_V -s Wjets

#python ../../scripts/propNuisance.py -i ../../Full2016_v7/darkHiggs/darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root -o darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v BDT_2018bin,BDT_2017bin,BDT_2016bin,BDT_UniBin,Events,BDT_2018Fbin,BDT_2017Fbin,BDT_2016Fbin,BDT_2016CRbin,BDT_2017CRbin,BDT_2018CRbin -n QCDscale_V -s Wjets --smooth

## plots
#mkPlot.py --pycfg=conf_lim_fast.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_lim_fast.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_lim_fast.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_lim_fast.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Events 
##mkPlot.py --pycfg=conf_lim_PuppiRW.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

## datacards
#mkDatacards.py --pycfg=conf_lim_fast.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root
##mkDatacards.py --pycfg=conf_lim_datacard.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root

### CRonly postfit plots
##Individual year
#mkPostFitPlot.py --inputFileCombine darkHiggs_lim_datacards_fast/InCh_Combi/BDT_2017bin/fitDiagnostics_CRonly_fit.root --outputFile test_postFit_CRonly/CRonly_fit_plot_test.root --variable BDT_2017CRbin --cut SB --cutNameInOriginal InCh_SB --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind b --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#mkPostFitPlot.py --inputFileCombine darkHiggs_lim_datacards_fast/InCh_Combi/BDT_2017bin/fitDiagnostics_CRonly_fit.root --outputFile test_postFit_CRonly/CRonly_fit_plot_test.root --variable BDT_2017CRbin --cut TCR --cutNameInOriginal InCh_TCR --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind b --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#
#mkPlot.py --pycfg=conf_lim_fast_postfit.py --inputFile test_postFit_CRonly/CRonly_fit_plot_test.root --showIntegralLegend=1 --scaleToPlot=3000 --logOnly --outputDirPlots test_postFit_CRonly --postFit p

##Run2 Combi
#mkPostFitPlot.py --inputFileCombine ../../FullRun2_v7/darkHiggs/datacards_combi_fast/Run2_Comb/BDT_Run2bin/fitDiagnostics_CRonly_fit.root --outputFile run2_postFit_CRonly/CRonly_fit_plot_test.root --variable BDT_2017CRbin --cut Year2017_SB --cutNameInOriginal InCh_SB --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind p --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#mkPostFitPlot.py --inputFileCombine ../../FullRun2_v7/darkHiggs/datacards_combi_fast/Run2_Comb/BDT_Run2bin/fitDiagnostics_CRonly_fit.root --outputFile run2_postFit_CRonly/CRonly_fit_plot_test.root --variable BDT_2017CRbin --cut Year2017_TCR --cutNameInOriginal InCh_TCR --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind p --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#
#mkPlot.py --pycfg=conf_lim_fast_postfit.py --inputFile run2_postFit_CRonly/CRonly_fit_plot_test.root --showIntegralLegend=1 --scaleToPlot=3000 --logOnly --outputDirPlots run2_postFit_CRonly --postFit b


### Individual year
## b-only fit
#mkPostFitPlot.py --inputFileCombine darkHiggs_lim_datacards_fast/InCh_Combi/BDT_2017bin/fitDiagnostics_u_fit.root --outputFile postFit_unblind_b/Unblind_fit_plot.root --variable BDT_2017CRbin --cut SB --cutNameInOriginal InCh_SB --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind b --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#mkPostFitPlot.py --inputFileCombine darkHiggs_lim_datacards_fast/InCh_Combi/BDT_2017bin/fitDiagnostics_u_fit.root --outputFile postFit_unblind_b/Unblind_fit_plot.root --variable BDT_2017CRbin --cut TCR --cutNameInOriginal InCh_TCR --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind b --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#mkPostFitPlot.py --inputFileCombine darkHiggs_lim_datacards_fast/InCh_Combi/BDT_2017bin/fitDiagnostics_u_fit.root --outputFile postFit_unblind_b/Unblind_fit_plot.root --variable BDT_2017bin --cut SR --cutNameInOriginal InCh_SR --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind b --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#
#mkPlot.py --pycfg=conf_lim_fast_postfit.py --inputFile postFit_unblind_b/Unblind_fit_plot.root --showIntegralLegend=1 --scaleToPlot=3000 --logOnly --outputDirPlots postFit_unblind_b --postFit p
#
## s+b fit
#mkPostFitPlot.py --inputFileCombine darkHiggs_lim_datacards_fast/InCh_Combi/BDT_2017bin/fitDiagnostics_u_fit.root --outputFile postFit_unblind_s/Unblind_fit_plot.root --variable BDT_2017CRbin --cut SB --cutNameInOriginal InCh_SB --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind s --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#mkPostFitPlot.py --inputFileCombine darkHiggs_lim_datacards_fast/InCh_Combi/BDT_2017bin/fitDiagnostics_u_fit.root --outputFile postFit_unblind_s/Unblind_fit_plot.root --variable BDT_2017CRbin --cut TCR --cutNameInOriginal InCh_TCR --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind s --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#mkPostFitPlot.py --inputFileCombine darkHiggs_lim_datacards_fast/InCh_Combi/BDT_2017bin/fitDiagnostics_u_fit.root --outputFile postFit_unblind_s/Unblind_fit_plot.root --variable BDT_2017bin --cut SR --cutNameInOriginal InCh_SR --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind s --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#
#mkPlot.py --pycfg=conf_lim_fast_postfit.py --inputFile postFit_unblind_s/Unblind_fit_plot.root --showIntegralLegend=1 --scaleToPlot=3000 --logOnly --outputDirPlots postFit_unblind_s --postFit p

### Run2 combination
## b-only fit
#mkPostFitPlot.py --inputFileCombine ../../FullRun2_v7/darkHiggs/datacards_combi_fast/Run2_Comb/BDT_Run2bin/fitDiagnostics_u_fit.root --outputFile postFit_run2_unblind_b/Unblind_fit_plot.root --variable BDT_2017CRbin --cut Year2017_SB --cutNameInOriginal InCh_SB --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind b --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#mkPostFitPlot.py --inputFileCombine ../../FullRun2_v7/darkHiggs/datacards_combi_fast/Run2_Comb/BDT_Run2bin/fitDiagnostics_u_fit.root --outputFile postFit_run2_unblind_b/Unblind_fit_plot.root --variable BDT_2017CRbin --cut Year2017_TCR --cutNameInOriginal InCh_TCR --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind b --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#mkPostFitPlot.py --inputFileCombine ../../FullRun2_v7/darkHiggs/datacards_combi_fast/Run2_Comb/BDT_Run2bin/fitDiagnostics_u_fit.root --outputFile postFit_run2_unblind_b/Unblind_fit_plot.root --variable BDT_2017bin --cut Year2017_SR --cutNameInOriginal InCh_SR --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind b --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#
#mkPlot.py --pycfg=conf_lim_fast_postfit.py --inputFile postFit_run2_unblind_b/Unblind_fit_plot.root --showIntegralLegend=1 --scaleToPlot=3000 --logOnly --outputDirPlots postFit_run2_unblind_b --postFit p
#
## s+b fit
#mkPostFitPlot.py --inputFileCombine ../../FullRun2_v7/darkHiggs/datacards_combi_fast/Run2_Comb/BDT_Run2bin/fitDiagnostics_u_fit.root --outputFile postFit_run2_unblind_s/Unblind_fit_plot.root --variable BDT_2017CRbin --cut Year2017_SB --cutNameInOriginal InCh_SB --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind s --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#mkPostFitPlot.py --inputFileCombine ../../FullRun2_v7/darkHiggs/datacards_combi_fast/Run2_Comb/BDT_Run2bin/fitDiagnostics_u_fit.root --outputFile postFit_run2_unblind_s/Unblind_fit_plot.root --variable BDT_2017CRbin --cut Year2017_TCR --cutNameInOriginal InCh_TCR --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind s --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#mkPostFitPlot.py --inputFileCombine ../../FullRun2_v7/darkHiggs/datacards_combi_fast/Run2_Comb/BDT_Run2bin/fitDiagnostics_u_fit.root --outputFile postFit_run2_unblind_s/Unblind_fit_plot.root --variable BDT_2017bin --cut Year2017_SR --cutNameInOriginal InCh_SR --inputFile darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --kind s --structureFile structure_fast.py -S samples_fast.py --getSignalFromPrefit 1
#
#mkPlot.py --pycfg=conf_lim_fast_postfit.py --inputFile postFit_run2_unblind_s/Unblind_fit_plot.root --showIntegralLegend=1 --scaleToPlot=3000 --logOnly --outputDirPlots postFit_run2_unblind_s --postFit p
