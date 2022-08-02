### FR
## Shapes
#rm ../../../../../../job/mkShapes__FR_2018v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf_FR.py --doBatch=True --batchQueue=microcentury --treeName=Events --batchSplit=Samples,Files
##mkShapesMulti.py --pycfg=conf_FR.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

## hadd
#rm FR_root/plots_FR_2018v7.root
#mkShapesMulti.py --pycfg=conf_FR.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files

## plots
#mkPlot.py --pycfg=conf_FR.py --inputFile=FR_root/plots_FR_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributionsTHstack #--plotNormalizedDistributions
#mkPlot.py --pycfg=conf_FR.py --inputFile=FR_root/plots_FR_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

### Analysis
# Shapes
rm ../../../../../../job/mkShapes__2HDMa_2017v7__ALL/*/*.py
mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

## hadd
#rm 2HDMa_root/plots_2HDMa_2017v7.root
#mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files
#
## plots
#mkPlot.py --pycfg=conf.py --inputFile=2HDMa_root/plots_2HDMa_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributionsTHstack #--plotNormalizedDistributions
#mkPlot.py --pycfg=conf.py --inputFile=2HDMa_root/plots_2HDMa_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

