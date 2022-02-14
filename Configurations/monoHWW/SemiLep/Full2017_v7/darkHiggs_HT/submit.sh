# Clean compiled libs
#find . -name *.so -exec rm -rf {} \;
#find . -name *.pcm -exec rm -rf {} \;

### Analysis
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_HT_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_HT_root/plots_darkHiggs_HT_2017v7.root
#mkShapesMulti.py --pycfg=conf.py --doHadd=True --doNotCleanup --nThreads=100 --batchSplit=Samples,Files --FixNegativeAfterHadd

## propagate missing nuisances
#python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs_HT/darkHiggs_HT_root/plots_darkHiggs_HT_2018v7.root -o darkHiggs_HT_root/plots_darkHiggs_HT_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n PS_FSR,PS_ISR -s DY,WW,VVV,Vg,VgS_L,VgS_H,ggWW
#python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs_HT/darkHiggs_HT_root/plots_darkHiggs_HT_2018v7.root -o darkHiggs_HT_root/plots_darkHiggs_HT_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n PS_ISR_SAMPLE -s Wjets,top
#python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs_HT/darkHiggs_HT_root/plots_darkHiggs_HT_2018v7.root -o darkHiggs_HT_root/plots_darkHiggs_HT_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n PS_FSR_SAMPLE -s top
#
#python ../../scripts/propNuisance.py -i ../../Full2016_v7/darkHiggs_HT/darkHiggs_HT_root/plots_darkHiggs_HT_2016v7.root -o darkHiggs_HT_root/plots_darkHiggs_HT_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n QCDscale_Wjets -s WjetsNLO --smooth
#
## normalize W+jets and top nuisances
#rm darkHiggs_HT_root/plots_darkHiggs_HT_2017v7_nuisNorm.root
#python ../../scripts/normNuisance.py --config conf.py -c InCh_SR,InCh_SB,InCh_TCR -n ALL -s Wjets,top --write -o darkHiggs_HT_root/plots_darkHiggs_HT_2017v7_nuisNorm.root
#python ../../scripts/normNuisance.py --config conf.py -c InCh_SR,InCh_SB,InCh_TCR -n ALL -s WjetsNLO --write -o darkHiggs_HT_root/plots_darkHiggs_HT_2017v7_nuisNorm.root

## plots
#mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_HT_root/plots_darkHiggs_HT_2017v7_nuisNorm.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf.py --inputFile=darkHiggs_HT_root/plots_darkHiggs_HT_2017v7_nuisNorm.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

# datacards
#mkDatacards.py --pycfg=conf_lim.py --inputFile=darkHiggs_HT_root/plots_darkHiggs_HT_2017v7.root
#mkDatacards.py --pycfg=conf_lim.py --inputFile=darkHiggs_HT_root/plots_darkHiggs_HT_2017v7_edit.root

### Limits
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_HT_lim_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_lim.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_lim.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_HT_root_lim/plots_darkHiggs_HT_lim_2017v7.root
#mkShapesMulti.py --pycfg=conf_lim.py --doHadd=True --doNotCleanup --nThreads=100 --batchSplit=Samples,Files --FixNegativeAfterHadd

## propagate missing nuisances
#python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs_HT/darkHiggs_HT_root_lim/plots_darkHiggs_HT_lim_2018v7.root -o darkHiggs_HT_root_lim/plots_darkHiggs_HT_lim_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n PS_FSR,PS_ISR -s DY,WW,VVV,Vg,VgS_L,VgS_H,ggWW
#python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs_HT/darkHiggs_HT_root_lim/plots_darkHiggs_HT_lim_2018v7.root -o darkHiggs_HT_root_lim/plots_darkHiggs_HT_lim_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n PS_ISR_SAMPLE -s Wjets,top
#python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs_HT/darkHiggs_HT_root_lim/plots_darkHiggs_HT_lim_2018v7.root -o darkHiggs_HT_root_lim/plots_darkHiggs_HT_lim_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n PS_FSR_SAMPLE -s top

## normalize W+jets and top nuisances
#rm darkHiggs_HT_root_lim/plots_darkHiggs_HT_lim_2017v7_nuisNorm.root
#python ../../scripts/normNuisance.py --config conf_lim.py -c InCh_SR,InCh_SB,InCh_TCR -n ALL -s Wjets,top --write -o darkHiggs_HT_root_lim/plots_darkHiggs_HT_lim_2017v7_nuisNorm.root

## plots
#mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_HT_root_lim/plots_darkHiggs_HT_lim_2017v7_nuisNorm_rename.root --showIntegralLegend=1 --scaleToPlot=2 #--plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_lim.py --inputFile=darkHiggs_HT_root_lim/plots_darkHiggs_HT_lim_2017v7_nuisNorm_rename.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly

## datacards
#mkDatacards.py --pycfg=conf_lim.py --inputFile=darkHiggs_HT_root_lim/plots_darkHiggs_HT_lim_2017v7_nuisNorm.root

### All masspoints and interpolations
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_HT_int_2017v7__ALL/*/*.py
##mkShapesMulti.py --pycfg=conf_int.py --doBatch=True --batchQueue=tomorrow --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd
#mkShapesMulti.py --pycfg=conf_int.py --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#condor_submit ../../../../../../job/hadd__darkHiggs_HT_int_2017v7/job.jds

## propagate missing nuisances
#python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs_HT/darkHiggs_HT_root_int/plots_darkHiggs_HT_int_2018v7.root -o darkHiggs_HT_root_int/plots_darkHiggs_HT_int_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n PS_FSR,PS_ISR -s DY,WW,VVV,Vg,VgS_L,VgS_H,ggWW
#python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs_HT/darkHiggs_HT_root_int/plots_darkHiggs_HT_int_2018v7.root -o darkHiggs_HT_root_int/plots_darkHiggs_HT_int_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n PS_ISR_SAMPLE -s Wjets,top
#python ../../scripts/propNuisance.py -i ../../Full2018_v7/darkHiggs_HT/darkHiggs_HT_root_int/plots_darkHiggs_HT_int_2018v7.root -o darkHiggs_HT_root_int/plots_darkHiggs_HT_int_2017v7.root -c InCh_SR,InCh_SB,InCh_TCR -v ALL -n PS_FSR_SAMPLE -s top

## normalize W+jets and top nuisances
#rm darkHiggs_HT_root_int/plots_darkHiggs_HT_int_2017v7_nuisNorm.root
#python ../../scripts/normNuisance.py --config conf_int.py -c InCh_SR,InCh_SB,InCh_TCR -n ALL -s Wjets,top --write -o darkHiggs_HT_root_int/plots_darkHiggs_HT_int_2017v7_nuisNorm.root

## datacards
#condor_submit ../../../../../../job/datacards__darkHiggs_HT_int_2017v7/job.jds

### Signal significance
## Shapes
#rm ../../../../../../job/mkShapes__darkHiggs_HT_sig_2017v7__ALL/*/*.py
#mkShapesMulti.py --pycfg=conf_sig.py --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files --FixNegativeAfterHadd

## hadd
#rm darkHiggs_HT_root_sig/plots_darkHiggs_HT_sig_2017v7.root
#mkShapesMulti.py --pycfg=conf_sig.py --doHadd=True --doNotCleanup --nThreads=100 --batchSplit=Samples,Files --FixNegativeAfterHadd

# plots
mkPlot.py --pycfg=conf_sig.py --inputFile=darkHiggs_HT_root_sig/plots_darkHiggs_HT_sig_2017v7.root --showIntegralLegend=1 --scaleToPlot=2 --plotNormalizedDistributions #--plotNormalizedDistributionsTHstack --plotNormalizedDistributions
#mkPlot.py --pycfg=conf_sig.py --inputFile=darkHiggs_HT_root_sig/plots_darkHiggs_HT_sig_2017v7.root --showIntegralLegend=1 --scaleToPlot=3000. --logOnly
