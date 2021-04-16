# Clean compiled libs
#find . -name *.so -exec rm -rf {} \;
#find . -name *.pcm -exec rm -rf {} \;

### Analysis
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_2017v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_root/plots_darkHiggs_2017v7.root
#mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

## plots
#mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_HTsf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Puppimet

## datacards
#mkDatacards.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root

### Limits
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_lim_2017v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf_lim.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_lim.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd 

## hadd
#rm darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root
#mkShapesMulti.py --pycfg=conf_lim.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

## plots
#mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Events 
##mkPlot.py --pycfg=conf_lim_PuppiRW.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

## datacards
#mkDatacards.py --pycfg=conf_lim.py --inputFile=darkHiggs_lim_root/plots_darkHiggs_lim_2017v7.root

### Binning
## Shapes
rm ../../../../../../job/mkShapes__darkHiggs_binning_2017v7__ALL/*/*.py
mkShapesMulti.py --pycfg=conf_binning.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_binning.py --doBatch=True --batchQueue=microcentury --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

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
#
## plots
#mkPlot.py --pycfg=conf_rel.py --inputFile=darkHiggs_rel_root/plots_darkHiggs_rel_2017v7.root --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg

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
##mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
##mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root
#mkShapesMulti.py --pycfg=conf_inv.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd
#
## plots
#mkPlot.py --pycfg=conf_inv.py --inputFile=darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_inv.py --inputFile=darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_inv.py --inputFile=darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_HTsf.py --inputFile=darkHiggs_inv_root/plots_darkHiggs_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
