
### Fake
## Shapes
#rm ../../../../../../job/mkShapes__Fake_2018v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

## hadd
#rm Fake_root/plots_Fake_2018v7.root
#mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files

# plots
mkPlot.py --pycfg=conf.py --inputFile=Fake_root/plots_Fake_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
mkPlot.py --pycfg=conf.py --inputFile=Fake_root/plots_Fake_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf.py --inputFile=Fake_root/plots_Fake_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
