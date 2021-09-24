# Clean compiled libs
#find . -name *.so -exec rm -rf {} \;
#find . -name *.pcm -exec rm -rf {} \;

### Analysis
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_2016v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_root/plots_darkHiggs_2016v7.root
#mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd
#python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs/darkHiggs_root/plots_darkHiggs_2018v7.root -o darkHiggs_root/plots_darkHiggs_2016v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n QCDscale_top -s top

## plots
#mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2016v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_HTsf.py --inputFile=darkHiggs_root/plots_darkHiggs_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
##mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Events 

## datacards
#mkDatacards.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2016v7.root

### QER
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_qer_2016v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf_qer.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_qer.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_qer_root/plots_darkHiggs_qer_2016v7.root
#mkShapesMulti.py --pycfg=conf_qer.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

## plots
#mkPlot.py --pycfg=conf_qer.py --inputFile=darkHiggs_qer_root/plots_darkHiggs_qer_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_qer.py --inputFile=darkHiggs_qer_root/plots_darkHiggs_qer_2016v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_qer.py --inputFile=darkHiggs_qer_root/plots_darkHiggs_qer_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_qer.py --inputFile=darkHiggs_qer_root/plots_darkHiggs_qer_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Events

### Limits
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_lim_2016v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_lim.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_lim.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_lim.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root
#mkShapesMulti.py --pycfg=conf_lim.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd
##python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs/darkHiggs_lim_root/plots_darkHiggs_lim_2018v7.root -o darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n QCDscale_top -s top

#python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs/darkHiggs_lim_root/plots_darkHiggs_lim_2018v7.root -o darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root -c InCh_SR,InCh_SB,InCh_TCR -v BDT_2018bin,BDT_2017bin,BDT_2016bin,BDT_2018CRbin,BDT_2017CRbin,BDT_2016CRbin,BDT_UniBin,Events,BDT_2018Fbin,BDT_2017Fbin,BDT_2016Fbin -n QCDscale_top -s top
#python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs/darkHiggs_lim_root/plots_darkHiggs_lim_2018v7.root -o darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root -c InCh_SR,InCh_SB,InCh_TCR -v BDT_nb_2016bin,BDT_nb_2017bin,BDT_nb_2018bin,BDT_b_2016bin,BDT_b_2017bin,BDT_b_2018bin,BDT_b_UniBin,BDT_nb_UniBin -n QCDscale_top -s top

# plots
mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
#mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
#mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Events 
#mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root --showIntegralLegend=1 --scaleToPlot=3000. --onlyVariable=BDT_Ada13 --logOnly 

## datacards
##mkDatacards.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root
#mkDatacards.py --pycfg=conf_lim_datacard.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root

### Investigation
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_inv_2016v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_inv_root/plots_darkHiggs_inv_2016v7.root
#mkShapesMulti.py --pycfg=conf_inv.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

## plots
#mkPlot.py --pycfg=conf_inv.py --inputFile=darkHiggs_inv_root/plots_darkHiggs_inv_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_inv.py --inputFile=darkHiggs_inv_root/plots_darkHiggs_inv_2016v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_inv.py --inputFile=darkHiggs_inv_root/plots_darkHiggs_inv_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_HTsf.py --inputFile=darkHiggs_inv_root/plots_darkHiggs_inv_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions

### Binning
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_binning_2016v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf_binning.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_binning.py --doBatch=True --batchQueue=microcentury --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_binning_root/plots_darkHiggs_binning_2016v7.root
#mkShapesMulti.py --pycfg=conf_binning.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd
#
## plots
#mkPlot.py --pycfg=conf_binning.py --inputFile=darkHiggs_binning_root/plots_darkHiggs_binning_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_binning.py --inputFile=darkHiggs_binning_root/plots_darkHiggs_binning_2016v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_binning.py --inputFile=darkHiggs_binning_root/plots_darkHiggs_binning_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg

### Efficincies of prefire and trigger
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_eff_2016v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_eff.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_eff.py --doBatch=True --batchQueue=microcentury --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_eff_root/plots_darkHiggs_eff_2016v7.root
#mkShapesMulti.py --pycfg=conf_eff.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

## plots
#mkPlot.py --pycfg=conf_eff.py --inputFile=darkHiggs_eff_root/plots_darkHiggs_eff_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions

## Limits fast
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_lim_2016v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_lim_fast.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_lim_fast.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_lim_fast.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root
#mkShapesMulti.py --pycfg=conf_lim_fast.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd
##python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs/darkHiggs_lim_root/plots_darkHiggs_lim_2018v7.root -o darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n QCDscale_top -s top

#python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs/darkHiggs_lim_root/plots_darkHiggs_lim_2018v7.root -o darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root -c InCh_SR,InCh_SB,InCh_TCR -v BDT_2018bin,BDT_2017bin,BDT_2016bin,BDT_UniBin,Events,BDT_2018Fbin,BDT_2017Fbin,BDT_2016Fbin,BDT_2016CRbin,BDT_2017CRbin,BDT_2018CRbin -n QCDscale_top -s top

## plots
#mkPlot.py --pycfg=conf_lim_fast.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_lim_fast.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_lim_fast.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_lim_fast.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Events 
##mkPlot.py --pycfg=conf_lim_fast.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root --showIntegralLegend=1 --scaleToPlot=3000. --onlyVariable=BDT_Ada13 --logOnly 

## datacards
#mkDatacards.py --pycfg=conf_lim_fast.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2016v7.root

