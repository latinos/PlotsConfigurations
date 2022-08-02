# Clean compiled libs
#find . -name *.so -exec rm -rf {} \;
#find . -name *.pcm -exec rm -rf {} \;

## Investigation
## shape
#rm ../../../../../../job/mkShapes__dHsignal_2018v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=microcentury --treeName=Events --batchSplit=Samples,Files
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files

## hadd
#rm dHsignal_root/plots_dHsignal_2018v7.root
#mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files

# plots
mkPlot.py --pycfg=conf.py --inputFile=dHsignal_root/plots_dHsignal_2018v7.root --showIntegralLegend=1 --scaleToPlot=2
mkPlot.py --pycfg=conf.py --inputFile=dHsignal_root/plots_dHsignal_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
