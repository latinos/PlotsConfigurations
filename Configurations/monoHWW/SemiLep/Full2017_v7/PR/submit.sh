### PR
## Shapes
#rm ../../../../../../job/mkShapes__PR_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=microcentury --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=espresso --treeName=Events --batchSplit=Samples,Files

# hadd
rm PR_root/plots_PR_2017v7.root
mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files

## plots
#mkPlot.py --pycfg=conf.py --inputFile=PR_root/plots_PR_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributionsTHstack #--plotNormalizedDistributions
#mkPlot.py --pycfg=conf.py --inputFile=PR_root/plots_PR_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
