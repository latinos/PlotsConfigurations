
### Analysis
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files

# hadd
rm darkHiggs_root/plots_darkHiggs_2017v7.root
mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files

# plots
mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg

# datacards
mkDatacards.py --pycfg=conf.py --inputFile=darkHiggs_root/plots_darkHiggs_2017v7.root
