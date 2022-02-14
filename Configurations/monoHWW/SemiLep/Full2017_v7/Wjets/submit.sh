# Clean compiled libs
#find . -name *.so -exec rm -rf {} \;
#find . -name *.pcm -exec rm -rf {} \;

## Shapes
#rm ../../../../../../job/mkShapes__Wjets_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=microcentury --treeName=Events --batchSplit=Samples,Files

## hadd
#rm Wjets_root/plots_Wjets_2017v7.root
#mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=8 --batchSplit=Samples,Files

## plots
#mkPlot.py --pycfg=conf_LO_vs_NLO.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_LO_vs_NLO.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_HT_vs_LO.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_HT_vs_LO.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_NLO_vs_NLOin.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_NLO_vs_NLOin.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_NLOnj_vs_NLOmerge.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_NLOnj_vs_NLOmerge.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_noEWK_LO_vs_NLO.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_noEWK_LO_vs_NLO.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_HTkf_vs_NLO.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_HTkf_vs_NLO.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_HTbin_vs_HT.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_HTbin_vs_HT.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_NLOs_vs_NLOm.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 
#mkPlot.py --pycfg=conf_NLOs_vs_NLOm.py --inputFile=Wjets_root/plots_Wjets_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 


## Investigation
## shape
#rm ../../../../../../job/mkShapes__Wjets_inv_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf_inv.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files

## hadd
#rm Wjets_inv_root/plots_Wjets_inv_2017v7.root
#mkShapesMulti.py --pycfg=conf_inv.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files

## plots
#mkPlot.py --pycfg=conf_inv.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=2
#mkPlot.py --pycfg=conf_inv.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_inv2.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_inv_comp.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_inv_comp2.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_inv_raw.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=2
#mkPlot.py --pycfg=conf_inv_raw.py --inputFile=Wjets_inv_root/plots_Wjets_inv_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 

### Binning
## shape
#rm ../../../../../../job/mkShapes__Wjets_binning_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_binning.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files
#mkShapesMulti.py --pycfg=conf_binning.py --doBatch=True --batchQueue=microcentury --treeName=Events --batchSplit=Samples,Files

## hadd
#rm Wjets_binning_root/plots_Wjets_binning_2017v7.root
#mkShapesMulti.py --pycfg=conf_binning.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files

## plots
#mkPlot.py --pycfg=conf_binning.py --inputFile=Wjets_binning_root/plots_Wjets_binning_2017v7.root --showIntegralLegend=1 --scaleToPlot=2
#mkPlot.py --pycfg=conf_binning.py --inputFile=Wjets_binning_root/plots_Wjets_binning_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 
#mkPlot.py --pycfg=conf_binning_raw.py --inputFile=Wjets_binning_root/plots_Wjets_binning_2017v7.root --showIntegralLegend=1 --scaleToPlot=2
#mkPlot.py --pycfg=conf_binning_raw.py --inputFile=Wjets_binning_root/plots_Wjets_binning_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly 

### Dedicated k-factor study
## Shapes
#rm ../../../../../../job/mkShapes__Wjets_kfac_2017v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf_kfac.py --doBatch=True --batchQueue=microcentury --treeName=Events --batchSplit=Samples,Files

# hadd
rm Wjets_kfac_root/plots_Wjets_kfac_2017v7.root
mkShapesMulti.py --pycfg=conf_kfac.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files
