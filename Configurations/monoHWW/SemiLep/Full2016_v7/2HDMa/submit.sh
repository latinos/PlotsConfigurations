### GenSemi
## Shapes
#rm ../../../../../../job/mkShapes__GenSemi_2017v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf_GenSemi.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

# hadd
rm GenSemi_root/plots_GenSemi_2017v7.root
mkShapesMulti.py --pycfg=conf_GenSemi.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files

# plots
mkPlot.py --pycfg=conf_GenSemi.py --inputFile=GenSemi_root/plots_GenSemi_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributionsTHstack #--plotNormalizedDistributions
mkPlot.py --pycfg=conf_GenSemi.py --inputFile=GenSemi_root/plots_GenSemi_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
