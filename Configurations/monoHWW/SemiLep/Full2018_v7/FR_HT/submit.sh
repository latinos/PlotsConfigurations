### FR

## Data dir has been deleted => extract root files from previous iterations (only MC changed)
## This means: no direct mkShapesMulti.py sub possible, manual hadding possibly needed (avoided, l2loose results in same number of files)

## Shapes
#rm ../../../../../../job/mkShapes__FR_HT_2018v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=microcentury --treeName=Events --batchSplit=Samples,Files -n
#python ../../scripts/resubmit.py --config conf.py -q microcentury -r Wjets,DY

## hadd
#rm FR_root/plots_FR_HT_2018v7.root
#mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files

## plots
#mkPlot.py --pycfg=conf.py --inputFile=FR_root/plots_FR_HT_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributionsTHstack #--plotNormalizedDistributions
#mkPlot.py --pycfg=conf.py --inputFile=FR_root/plots_FR_HT_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

