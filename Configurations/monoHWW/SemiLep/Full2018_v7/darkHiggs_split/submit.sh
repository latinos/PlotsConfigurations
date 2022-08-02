# Clean compiled libs
#find . -name *.so -exec rm -rf {} \;
#find . -name *.pcm -exec rm -rf {} \;

### Analysis
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_split_2018v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_split_root/plots_darkHiggs_split_2018v7.root
#mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=10 --batchSplit=Samples,Files --FixNegativeAfterHadd
#
#python ../../scripts/propNuisance.py -i ../../Full2016_v7/darkHiggs_split/darkHiggs_split_root/plots_darkHiggs_split_2016v7.root -o darkHiggs_split_root/plots_darkHiggs_split_2018v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n QCDscale_Wjets -s Wjets_2j_dRjj_low,Wjets_3j_dRjj_low,Wjets_4j_dRjj_low,Wjets_2j_dRjj_hig,Wjets_3j_dRjj_hig,Wjets_4j_dRjj_hig --smooth
#python ../../scripts/propNuisance.py -i ../../Full2016_v7/darkHiggs_split/darkHiggs_split_root/plots_darkHiggs_split_2016v7.root -o darkHiggs_split_root/plots_darkHiggs_split_2018v7.root -c InCh_SR,InCh_SB,InCh_TCR -v dr_jj_V_njet,njet -n QCDscale_Wjets -s Wjets_2j_dRjj_low,Wjets_3j_dRjj_low,Wjets_4j_dRjj_low,Wjets_2j_dRjj_hig,Wjets_3j_dRjj_hig,Wjets_4j_dRjj_hig

## plots
#mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_split_root/plots_darkHiggs_split_2018v7.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_split_root/plots_darkHiggs_split_2018v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

# datacards
mkDatacards.py --pycfg=conf.py --inputFile=darkHiggs_split_root/plots_darkHiggs_split_2018v7.root
