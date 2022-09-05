# WH charge asymmetry analysis

This is an adaptation of the analysis which is part of HIG-20-013. It is used to measure the asymmetry in the prodution of W+H and W-H. Here, the 2-leptons final state (one of the W bosons decays hadronically) is inspected.

The instructions to run the analysis follow.

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs.

    cd $HOME/scripts/jobs/mkShapes__WHSS2018_v7_chargeAsymmetry/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time has been exceeded, resubmit them on a longer-time queue.

    cd $HOME/scripts/jobs/mkShapes__WHSS2018_v7_chargeAsymmetry/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Include DY -> ee estimation from opposite-sign phase space

Go into the `DY_OS_CR` directory and follow the instructions in the `README` file:

    cd DY_OS_CR/
    
### Plot distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY --plotFile=plot_halfDY.py

Repeat, but with data-blind signal region:

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20 --plotFile=plot_blind.py  --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY 
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20 --plotFile=plot_blind.py  --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY 
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20 --plotFile=plot_blind.py  --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20 --plotFile=plot_blind.py  --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY


    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20 --plotFile=plot_blind.py  --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20 --plotFile=plot_blind.py  --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 --plotFile=plot_blind.py  --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20 --plotFile=plot_blind.py  --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY


    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20 --plotFile=plot_blind.py  --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20 --plotFile=plot_blind.py  --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20 --plotFile=plot_blind.py  --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20 --plotFile=plot_blind.py  --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20 --plotFile=plot_blind.py --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip_halfDY   


### Plot original distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1

Repeat, but with data-blind signal region:

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20 --plotFile=plot_blind.py

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20 --plotFile=plot_blind.py


    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20 --plotFile=plot_blind.py

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20 --plotFile=plot_blind.py


    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20 --plotFile=plot_blind.py

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root  --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20 --plotFile=plot_blind.py


### Create datacards

Using DY->ee data-driven distributions:

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement_DYflip.root --outputDirDatacard=datacards_DYflip

Using original distributions:

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_tripleChargeAgreement.root --outputDirDatacard=datacards


### Combine datacards

Load combine:

     cd $HOME/work/combine/CMSSW_10_2_13/src/
     cmsenv
     cd -

Actually combine datacards:

     mkdir -p Combination

Using DY->ee data-driven distributions:

     combineCards.py WH_SS_ee_2j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_ee_2j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_ee_1j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     ZH3l_WZ_CR_1j=datacards_DYflip/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                     ZH3l_WZ_CR_2j=datacards_DYflip/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
		     > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState_DYflip.txt

     combineCards.py WH_SS_em_2j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_2j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_ee_2j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_ee_2j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_1j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_1j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     ZH3l_WZ_CR_1j=datacards_DYflip/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                     ZH3l_WZ_CR_2j=datacards_DYflip/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
		     > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_DYflip.txt

     combineCards.py WH_SS_em_2j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_2j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_1j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_1j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_2j_minus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_2j_plus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_mm_2j_minus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_mm_2j_plus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_1j_minus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_1j_plus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_minus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_plus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     ZH3l_WZ_CR_1j=datacards_DYflip/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                     ZH3l_WZ_CR_2j=datacards_DYflip/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
		     > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_alsoLowPt_DYflip.txt

     combineCards.py WH_SS_em_2j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_2j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_ee_2j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_ee_2j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_1j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_1j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_minus=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_plus=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_2j_minus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_2j_plus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_mm_2j_minus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_mm_2j_plus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_ee_2j_minus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_ee_2j_plus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_1j_minus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_1j_plus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_minus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_plus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_minus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_plus_low_pt=datacards_DYflip/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     ZH3l_WZ_CR_1j=datacards_DYflip/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                     ZH3l_WZ_CR_2j=datacards_DYflip/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
		     > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_alsoLowPt_DYflip.txt

Using original distributions:

     combineCards.py WH_SS_ee_2j_minus=datacards/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_ee_2j_plus=datacards/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_ee_1j_minus=datacards/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_plus=datacards/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     ZH3l_WZ_CR_1j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                     ZH3l_WZ_CR_2j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
		     > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState.txt

     combineCards.py WH_SS_em_2j_minus=datacards/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_2j_plus=datacards/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_1j_minus=datacards/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_1j_plus=datacards/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     ZH3l_WZ_CR_1j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                     ZH3l_WZ_CR_2j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
		     > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.txt

     combineCards.py WH_SS_em_2j_minus=datacards/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_2j_plus=datacards/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_1j_minus=datacards/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_1j_plus=datacards/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_2j_minus_low_pt=datacards/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_2j_plus_low_pt=datacards/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_mm_2j_minus_low_pt=datacards/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_mm_2j_plus_low_pt=datacards/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_1j_minus_low_pt=datacards/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_1j_plus_low_pt=datacards/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_minus_low_pt=datacards/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_plus_low_pt=datacards/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     ZH3l_WZ_CR_1j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                     ZH3l_WZ_CR_2j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
		     > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_alsoLowPt.txt

     combineCards.py WH_SS_em_2j_minus=datacards/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_2j_plus=datacards/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_ee_2j_minus=datacards/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_ee_2j_plus=datacards/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_1j_minus=datacards/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_1j_plus=datacards/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_minus=datacards/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_plus=datacards/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     ZH3l_WZ_CR_1j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                     ZH3l_WZ_CR_2j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
		     > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates.txt

     combineCards.py WH_SS_em_2j_minus=datacards/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_2j_plus=datacards/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_mm_2j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_mm_2j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_ee_2j_minus=datacards/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_ee_2j_plus=datacards/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_1j_minus=datacards/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_1j_plus=datacards/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_minus=datacards/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_plus=datacards/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_2j_minus_low_pt=datacards/hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_2j_plus_low_pt=datacards/hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_mm_2j_minus_low_pt=datacards/hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_mm_2j_plus_low_pt=datacards/hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_ee_2j_minus_low_pt=datacards/hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_ee_2j_plus_low_pt=datacards/hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_1j_minus_low_pt=datacards/hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_1j_plus_low_pt=datacards/hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_minus_low_pt=datacards/hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_plus_low_pt=datacards/hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_minus_low_pt=datacards/hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_ee_1j_plus_low_pt=datacards/hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20/mlljj20_whss_1j_bin/datacard.txt \
                     ZH3l_WZ_CR_1j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                     ZH3l_WZ_CR_2j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
                     > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_alsoLowPt.txt

Drop nuisances giving negative yields in the datacards:

     ./dropNuisances.sh

### Create workspace for combine and do the fit using DY->ee data-driven distributions

Only ee final state:

     text2workspace.py Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState_DYflip.txt -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState_DYflip.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_htt_plus:r_WH_plus[1,-10,10]' \
     --PO 'map=.*/WH_hww_plus:r_WH_plus[1,-10,10]' \
     --PO 'map=.*/WH_htt_minus:r_WH_minus[1,-10,10]' \
     --PO 'map=.*/WH_hww_minus:r_WH_minus[1,-10,10]'

     combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState_DYflip.root -t -1 --setParameters r_WH_minus=1,r_WH_plus=1,r_higgs=1 > Combination/FitResults_eeFinalState_DYflip.txt

Checking how including ee final state affects the analysis:

     text2workspace.py Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_DYflip.txt -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_DYflip.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_htt_plus:r_WH_plus[1,-10,10]' \
     --PO 'map=.*/WH_hww_plus:r_WH_plus[1,-10,10]' \
     --PO 'map=.*/WH_htt_minus:r_WH_minus[1,-10,10]' \
     --PO 'map=.*/WH_hww_minus:r_WH_minus[1,-10,10]'

     combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_DYflip.root -t -1 --setParameters r_WH_minus=1,r_WH_plus=1,r_higgs=1 > Combination/FitResults_allFinalStates_DYflip.txt

### Create workspace for combine and do the fit using original distributions

Considering all Higgs processes as a single signal:

     text2workspace.py Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.txt -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_AllHiggs.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_htt_plus:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_hww_plus:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_htt_minus:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_hww_minus:r_higgs[1,-10,10]'

     combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_AllHiggs.root -t -1 --setParameters r_higgs=1 > Combination/FitResultsAllHiggs.txt

Checking how including ee final state affects the analysis:

     text2workspace.py Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates.txt -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_htt_plus:r_WH_plus[1,-10,10]' \
     --PO 'map=.*/WH_hww_plus:r_WH_plus[1,-10,10]' \
     --PO 'map=.*/WH_htt_minus:r_WH_minus[1,-10,10]' \
     --PO 'map=.*/WH_hww_minus:r_WH_minus[1,-10,10]'

     combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates.root -t -1 --setParameters r_WH_minus=1,r_WH_plus=1,r_higgs=1 > Combination/FitResults_allFinalStates.txt


Only ee final state:

     text2workspace.py Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState.txt -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_htt_plus:r_WH_plus[1,-10,10]' \
     --PO 'map=.*/WH_hww_plus:r_WH_plus[1,-10,10]' \
     --PO 'map=.*/WH_htt_minus:r_WH_minus[1,-10,10]' \
     --PO 'map=.*/WH_hww_minus:r_WH_minus[1,-10,10]'

     combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState.root -t -1 --setParameters r_WH_minus=1,r_WH_plus=1,r_higgs=1 > Combination/FitResults_eeFinalState.txt

### Interpret the results in terms of asymmetry

We define de asymmetry as:

$$ A = \frac{#sigma(W^+h) - #sigma(W^-h)}{#sigma(W^+h) + #sigma(W^-h)}$$

Considering the Yellow Report Cross sections for the two processes (https://twiki.cern.ch/twiki/bin/view/LHCPhysics/CERNYellowReportPageAt13TeV):
- XS W+h = 0.8380 pb
- XS W-h = 0.5313 pb

When fitting, it is more convenient to re-define the quantities we want to measure:

     A = (sigma+ - sigma-)/(sigma+ - sigma-)

     S = sigma+ + sigma- #sigma $\sigma$

This means that:

     sigma+ = S*(1+A)/2

     sigma- = S*(1-A)/2

In the combine 'notation':

     sigma+ = r_WH_plus * sigma+_theory

     sigma- = r_WH_minus * sigma-_theory

And this brings to:

     r_WH_plus  = S*(1+A)/(2*sigma+_theory)

     r_WH_minus = S*(1-A)/(2*sigma-_theory)

### Extract the asymmetry from a physics model in combine

Considering mm and em final states (as in legacy analysis):

     text2workspace.py \
     Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.txt \
     -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.root \
     -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
     -m 125 \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_h.*_plus:r_WH_plus=expr;;r_WH_plus("@0*(1+@1)/(2*0.8380)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO 'map=.*/WH_h.*_minus:r_WH_minus=expr;;r_WH_minus("@0*(1-@1)/(2*0.5313)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO verbose

     combine \
     -M MultiDimFit \
     --algo=singles \
     -d Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.root \
     -t -1 \
     --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 \
     --setParameterRanges r_S=0,20:r_A=-1,100:r_higgs=-10,10 \
     --redefineSignalPOIs r_S,r_A,r_higgs > Combination/FitResults_Asymmetry_A_S.txt


Considering mm and em final states and the low-pT categories:

     text2workspace.py \
     Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_alsoLowPt.txt \
     -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_alsoLowPt.root \
     -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
     -m 125 \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_h.*_plus:r_WH_plus=expr;;r_WH_plus("@0*(1+@1)/(2*0.8380)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO 'map=.*/WH_h.*_minus:r_WH_minus=expr;;r_WH_minus("@0*(1-@1)/(2*0.5313)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO verbose

     combine \
     -M MultiDimFit \
     --algo=singles \
     -d Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_alsoLowPt.root \
     -t -1 \
     --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 \
     --setParameterRanges r_S=0,20:r_A=-1,100:r_higgs=-10,10 \
     --redefineSignalPOIs r_S,r_A,r_higgs > Combination/FitResults_Asymmetry_A_S_alsoLowPt.txt


Considering only the ee final state:

     text2workspace.py \
     Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState.txt \
     -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState.root \
     -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
     -m 125 \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_h.*_plus:r_WH_plus=expr;;r_WH_plus("@0*(1+@1)/(2*0.8380)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO 'map=.*/WH_h.*_minus:r_WH_minus=expr;;r_WH_minus("@0*(1-@1)/(2*0.5313)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO verbose

     combine \
     -M MultiDimFit \
     --algo=singles \
     -d Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState.root \
     -t -1 \
     --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 \
     --setParameterRanges r_S=0,20:r_A=-1,100:r_higgs=-10,10 \
     --redefineSignalPOIs r_S,r_A,r_higgs > Combination/FitResults_Asymmetry_A_S_eeFinalState.txt

Considering all the final state:

     text2workspace.py \
     Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates.txt \
     -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates.root \
     -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
     -m 125 \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_h.*_plus:r_WH_plus=expr;;r_WH_plus("@0*(1+@1)/(2*0.8380)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO 'map=.*/WH_h.*_minus:r_WH_minus=expr;;r_WH_minus("@0*(1-@1)/(2*0.5313)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO verbose

     combine \
     -M MultiDimFit \
     --algo=singles \
     -d Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates.root \
     -t -1 \
     --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 \
     --setParameterRanges r_S=0,20:r_A=-1,100:r_higgs=-10,10 \
     --redefineSignalPOIs r_S,r_A,r_higgs > Combination/FitResults_Asymmetry_A_S_allFinalStates.txt


Considering all the final states and the low-pT categories:

     text2workspace.py \
     Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_alsoLowPt.txt \
     -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_alsoLowPt.root \
     -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
     -m 125 \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_h.*_plus:r_WH_plus=expr;;r_WH_plus("@0*(1+@1)/(2*0.8380)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO 'map=.*/WH_h.*_minus:r_WH_minus=expr;;r_WH_minus("@0*(1-@1)/(2*0.5313)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO verbose

     combine \
     -M MultiDimFit \
     --algo=singles \
     -d Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_alsoLowPt.root \
     -t -1 \
     --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 \
     --setParameterRanges r_S=0,20:r_A=-1,100:r_higgs=-10,10 \
     --redefineSignalPOIs r_S,r_A,r_higgs > Combination/FitResults_Asymmetry_A_S_allFinalStates_alsoLowPt.txt


Considering only the ee final state, estimated using charge-flip probabilities:

     text2workspace.py \
     Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState_DYflip.txt \
     -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState_DYflip.root \
     -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
     -m 125 \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_h.*_plus:r_WH_plus=expr;;r_WH_plus("@0*(1+@1)/(2*0.8380)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO 'map=.*/WH_h.*_minus:r_WH_minus=expr;;r_WH_minus("@0*(1-@1)/(2*0.5313)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO verbose

     combine \
     -M MultiDimFit \
     --algo=singles \
     -d Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_eeFinalState_DYflip.root \
     -t -1 \
     --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 \
     --setParameterRanges r_S=0,20:r_A=-1,100:r_higgs=-10,10 \
     --redefineSignalPOIs r_S,r_A,r_higgs > Combination/FitResults_Asymmetry_A_S_eeFinalState_DYflip.txt

Considering all final states, estimated using charge-flip probabilities:

     text2workspace.py \
     Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_DYflip.txt \
     -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_DYflip.root \
     -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
     -m 125 \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_h.*_plus:r_WH_plus=expr;;r_WH_plus("@0*(1+@1)/(2*0.8380)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO 'map=.*/WH_h.*_minus:r_WH_minus=expr;;r_WH_minus("@0*(1-@1)/(2*0.5313)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO verbose

     combine \
     -M MultiDimFit \
     --algo=singles \
     -d Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_DYflip.root \
     -t -1 \
     --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 \
     --setParameterRanges r_S=0,20:r_A=-1,100:r_higgs=-10,10 \
     --redefineSignalPOIs r_S,r_A,r_higgs > Combination/FitResults_Asymmetry_A_S_allFinalStates_DYflip.txt


Considering all final states, estimated using charge-flip probabilities, and including the low-pT categories:

     text2workspace.py \
     Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_alsoLowPt_DYflip.txt \
     -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_alsoLowPt_DYflip.root \
     -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
     -m 125 \
     --PO 'map=.*/ggH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-10,10]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-10,10]' \
     --PO 'map=.*/WH_h.*_plus:r_WH_plus=expr;;r_WH_plus("@0*(1+@1)/(2*0.8380)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO 'map=.*/WH_h.*_minus:r_WH_minus=expr;;r_WH_minus("@0*(1-@1)/(2*0.5313)",r_S[1.3693,0,20],r_A[0.224,-1,100])' \
     --PO verbose

     combine \
     -M MultiDimFit \
     --algo=singles \
     -d Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_alsoLowPt_DYflip.root \
     -t -1 \
     --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 \
     --setParameterRanges r_S=0,20:r_A=-1,100:r_higgs=-10,10 \
     --redefineSignalPOIs r_S,r_A,r_higgs > Combination/FitResults_Asymmetry_A_S_allFinalStates_alsoLowPt_DYflip.txt
