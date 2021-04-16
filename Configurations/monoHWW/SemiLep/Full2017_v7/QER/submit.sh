### Analysis
## Shapes
#rm ../../../../../../job/mkShapes__QER_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=microcentury --treeName=Events --batchSplit=Samples,Files

# hadd
rm QER_root/plots_QER_2017v7.root
mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files

# plots
mkPlot.py --pycfg=conf_Et25.py --inputFile=QER_root/plots_QER_2017v7.root --showIntegralLegend=1 --scaleToPlot=2
mkPlot.py --pycfg=conf_Et30.py --inputFile=QER_root/plots_QER_2017v7.root --showIntegralLegend=1 --scaleToPlot=2
mkPlot.py --pycfg=conf_Et35.py --inputFile=QER_root/plots_QER_2017v7.root --showIntegralLegend=1 --scaleToPlot=2

## datacards
#mkDatacards.py --pycfg=conf.py --inputFile=QER_root/plots_QER_2017v7.root
