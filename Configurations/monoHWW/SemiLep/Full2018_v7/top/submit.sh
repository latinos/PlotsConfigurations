# Clean compiled libs
#find . -name *.so -exec rm -rf {} \;
#find . -name *.pcm -exec rm -rf {} \;

### Analysis
## Shapes
#rm ../../../../../../job/mkShapes__top_2018v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

# hadd
rm top_root/plots_top_2018v7.root
mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

# plots
mkPlot.py --pycfg=conf.py --inputFile=top_root/plots_top_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
mkPlot.py --pycfg=conf.py --inputFile=top_root/plots_top_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
#mkPlot.py --pycfg=conf.py --inputFile=top_root/plots_top_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
#mkPlot.py --pycfg=conf.py --inputFile=top_root/plots_top_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Events

