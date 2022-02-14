# WH charge asymmetry analysis

This is an adaptation of the analysis which is part of HIG-20-013. It is used to measure the asymmetry in the prodution of W+H and W-H. Here, the 3-leptons final state is inspected.

The instructions to run the analysis follow.

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs.

    cd $HOME/scripts/jobs/mkShapes__WH3l2018_v7_chargeAsymmetry/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time has been exceeded, resubmit them on a longer-time queue.

    cd $HOME/scripts/jobs/mkShapes__WHSS2018_v7_chargeAsymmetry/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Plot distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio

### Create datacards

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v7_chargeAsymmetry.root

### Combine datacards

Load combine:

     cd $HOME/work/combine/CMSSW_10_2_13/src/
     cmsenv
     cd -

Actually combine datacards:

     mkdir -p Combination

     combineCards.py WH_3l_ossf_minus=datacards/wh3l_13TeV_ossf_minus/min_WH3l_mOSll/datacard.txt \
     		     WH_3l_ossf_plus=datacards/wh3l_13TeV_ossf_plus/min_WH3l_mOSll/datacard.txt \
		     WH_3l_sssf_minus=datacards/wh3l_13TeV_sssf_minus/min_WH3l_mOSll/datacard.txt \
		     WH_3l_sssf_plus=datacards/wh3l_13TeV_sssf_plus/min_WH3l_mOSll/datacard.txt \
		     WH_3l_WZ_CR=datacards/wh3l_wz_13TeV/events/datacard.txt \
		     WH_3l_Zg_CR=datacards/wh3l_zg_13TeV/events/datacard.txt \
		     > Combination/WH_chargeAsymmetry_WH_3l_Full2018_v7.txt

Drop nuisances giving negative yields in the datacards:

     ./dropNuisances.sh

### Create workspace for combine and do the fit

Considering W+ and W- as separate signals:

     text2workspace.py Combination/WH_chargeAsymmetry_WH_3l_Full2018_v7.txt -o Combination/WH_chargeAsymmetry_WH_3l_Full2018_v7.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_htt_plus:r_WH_plus[1,-10,10]' \
     --PO 'map=.*/WH_htt_minus:r_WH_minus[1,-10,10]' \
     --PO 'map=.*/WH_hww_plus:r_WH_plus[1,-10,10]' \
     --PO 'map=.*/WH_hww_minus:r_WH_minus[1,-10,10]' 

     combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Combination/WH_chargeAsymmetry_WH_3l_Full2018_v7.root -t -1 --setParameters r_WH_minus=1,r_WH_plus=1,r_higgs=1 > Combination/FitResults.txt

Considering all Higgs processes  as a single signal:

     text2workspace.py Combination/WH_chargeAsymmetry_WH_3l_Full2018_v7.txt -o Combination/WH_chargeAsymmetry_WH_3l_Full2018_v7_AllHiggs.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \ 
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_htt_plus:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_htt_minus:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_hww_plus:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_hww_minus:r_higgs[1,-10,10]' 

     combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Combination/WH_chargeAsymmetry_WH_3l_Full2018_v7_AllHiggs.root -t -1 --setParameters r_higgs=1 > Combination/FitResultsAllHiggs.txt

### Interpret the results in terms of asymmetry

We define de asymmetry as:

![equation](http://www.sciweavers.org/tex2img.php?eq=A%20%3D%20%5Cfrac%7B%5Csigma%28W%5E%2Bh%29%20-%20%5Csigma%28W%5E-h%29%7D%7B%5Csigma%28W%5E%2Bh%29%20%2B%20%5Csigma%28W%5E-h%29%7D&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=0)

Considering the Yellow Report Cross sections for the two processes (https://twiki.cern.ch/twiki/bin/view/LHCPhysics/CERNYellowReportPageAt13TeV):
- XS W+h = 0.8380 pb
- XS W-h = 0.5313 pb

We can extract both the asymmetry and its uncertainty, based on the results stored in Combination/FitResults.txt. For the moment, just use the macro:

     python getAsymmetry.py
