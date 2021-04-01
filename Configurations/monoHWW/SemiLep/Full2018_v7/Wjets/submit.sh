# Clean compiled libs
#find . -name *.so -exec rm -rf {} \;
#find . -name *.pcm -exec rm -rf {} \;

## Investigation
## shape
#rm ../../../../../../job/mkShapes__Wjets_inv_2018v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files

## hadd
#rm Wjets_inv_root/plots_Wjets_inv_2018v7.root
#mkShapesMulti.py --pycfg=conf_inv.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files

# plots
mkPlot.py --pycfg=conf_inv.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2018v7.root --showIntegralLegend=1 --scaleToPlot=2
mkPlot.py --pycfg=conf_inv.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
mkPlot.py --pycfg=conf_inv2.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 
mkPlot.py --pycfg=conf_inv2.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
mkPlot.py --pycfg=conf_inv_comp.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
mkPlot.py --pycfg=conf_inv_comp2.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
mkPlot.py --pycfg=conf_inv_raw.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2018v7.root --showIntegralLegend=1 --scaleToPlot=2
mkPlot.py --pycfg=conf_inv_raw.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
