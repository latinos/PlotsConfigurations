### puWeight
## Shapes
#rm ../../../../../../job/mkShapes__WUpDown_2018v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm WUpDown_root/plots_WUpDown_2018v7.root
#mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

## plots
#mkPlot.py --pycfg=conf.py --inputFile=WUpDown_root/plots_WUpDown_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf.py --inputFile=WUpDown_root/plots_WUpDown_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf.py --inputFile=WUpDown_root/plots_WUpDown_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_HTsf.py --inputFile=WUpDown_root/plots_WUpDown_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
##mkPlot.py --pycfg=conf.py --inputFile=WUpDown_root/plots_WUpDown_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Events 

### PS
## Shapes
#rm ../../../../../../job/mkShapes__WUpDown_PS_2018v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_PS.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_PS.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm WUpDown_PS_root/plots_WUpDown_PS_2018v7.root
#mkShapesMulti.py --pycfg=conf_PS.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

## plots
#mkPlot.py --pycfg=conf_PS.py --inputFile=WUpDown_PS_root/plots_WUpDown_PS_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_PS.py --inputFile=WUpDown_PS_root/plots_WUpDown_PS_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_PS.py --inputFile=WUpDown_PS_root/plots_WUpDown_PS_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_HTsf.py --inputFile=WUpDown_PS_root/plots_WUpDown_PS_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
##mkPlot.py --pycfg=conf_PS.py --inputFile=WUpDown_PS_root/plots_WUpDown_PS_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Events 

### QCD
## Shapes
#rm ../../../../../../job/mkShapes__WUpDown_QCD_2018v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_QCD.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_QCD.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

# hadd
rm WUpDown_QCD_root/plots_WUpDown_QCD_2018v7.root
mkShapesMulti.py --pycfg=conf_QCD.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd

## plots
#mkPlot.py --pycfg=conf_QCD.py --inputFile=WUpDown_QCD_root/plots_WUpDown_QCD_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_QCD.py --inputFile=WUpDown_QCD_root/plots_WUpDown_QCD_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf_QCD.py --inputFile=WUpDown_QCD_root/plots_WUpDown_QCD_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg
##mkPlot.py --pycfg=conf_HTsf.py --inputFile=WUpDown_QCD_root/plots_WUpDown_QCD_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
##mkPlot.py --pycfg=conf_QCD.py --inputFile=WUpDown_QCD_root/plots_WUpDown_QCD_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 --onlyVariable=Events 
