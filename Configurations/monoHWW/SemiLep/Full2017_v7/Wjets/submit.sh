# Clean compiled libs
#find . -name *.so -exec rm -rf {} \;
#find . -name *.pcm -exec rm -rf {} \;

## Shapes
#rm ../../../../../../job/mkShapes__Wjets_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files

## hadd
#rm Wjets_root/plots_Wjets_2017v7.root
#mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files

## plots
#mkPlot.py --pycfg=conf_LO_vs_NLO.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_HT_vs_LO.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_HT_vs_NLO.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_HT_vs_NLOpt.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_HTsf_vs_NLOpt.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_HTsf_vs_NLO.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_LO_vs_NLOpt.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_NLOpt_vs_NLO.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_NLO_vs_NLOin.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 

#mkPlot.py --pycfg=conf.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
##mkPlot.py --pycfg=conf.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions --onlyPlot=cSigVsBkg

## Investigation
## shape
#rm ../../../../../../job/mkShapes__Wjets_inv_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files

## hadd
#rm Wjets_inv_root/plots_Wjets_inv_2017v7.root
#mkShapesMulti.py --pycfg=conf_inv.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files

## plots
##mkPlot.py --pycfg=conf_inv.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=2
#mkPlot.py --pycfg=conf_inv.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_inv2.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_inv_comp.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
mkPlot.py --pycfg=conf_inv_comp2.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_inv_raw.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=2
#mkPlot.py --pycfg=conf_inv_raw.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
