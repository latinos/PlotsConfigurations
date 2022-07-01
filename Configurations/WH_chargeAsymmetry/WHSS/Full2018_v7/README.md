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
    
### Plot original distributions with DY->ee data-driven histograms

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry_DYflip.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --outputDirPlots=plots_WHSS_2018_v7_chargeAsymmetry_DYflip

### Plot original distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1

Repeat, but with data-blind signal region:

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20 --plotFile=plot_blind.py

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20 --plotFile=plot_blind.py


    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20 --plotFile=plot_blind.py

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20 --plotFile=plot_blind.py


    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20 --plotFile=plot_blind.py

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20 --plotFile=plot_blind.py
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --onlyCut=hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20 --plotFile=plot_blind.py


### Create datacards

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root

### Combine datacards

Load combine:

     cd $HOME/work/combine/CMSSW_10_2_13/src/
     cmsenv
     cd -

Actually combine datacards:

     mkdir -p Combination

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

Create groups of nuisances:

     echo "theory group = QCDscale_V QCDscale_VH QCDscale_VV QCDscale_WWewk  QCDscale_ggVV  QCDscale_ggZH  QCDscale_gg_ACCEPT  QCDscale_qqH  QCDscale_qqbar_ACCEPT  QCDscale_ttH pdf_Higgs_gg  pdf_Higgs_gg_ACCEPT  pdf_Higgs_qqbar  pdf_Higgs_qqbar_ACCEPT pdf_Higgs_ttH pdf_gg_ACCEPT pdf_qqbar pdf_qqbar_ACCEPT singleTopToTTbar" >> Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.txt

     echo "exp    group = CMS_PUID_2018 CMS_PU_2018 CMS_btag_cferr1 CMS_btag_cferr2 CMS_btag_hf CMS_btag_hfstats1_2018 CMS_btag_hfstats2_2018 CMS_btag_jes CMS_btag_lf CMS_btag_lfstats1_2018 CMS_btag_lfstats2_2018 CMS_eff_e_2018 CMS_eff_hwwtrigger_2018 CMS_eff_m_2018 CMS_fake_e_2018 CMS_fake_m_2018 CMS_fake_stat_e_2018 CMS_fake_stat_m_2018 CMS_fake_syst_em CMS_fake_syst_mm CMS_hww_WgStarScale CMS_res_j_2018 CMS_scale_JESAbsolute CMS_scale_JESAbsolute_2018 CMS_scale_JESBBEC1 CMS_scale_JESBBEC1_2018 CMS_scale_JESEC2 CMS_scale_JESEC2_2018 CMS_scale_JESFlavorQCD CMS_scale_JESHF CMS_scale_JESHF_2018 CMS_scale_JESRelativeBal CMS_scale_JESRelativeSample_2018 CMS_scale_e_2018 CMS_scale_m_2018 CMS_scale_met_2018 CMS_topPtRew CMS_whss_chargeFlip PS_FSR PS_ISR lumi_13TeV_2018 lumi_13TeV_CurrCalib lumi_13TeV_LSCale lumi_13TeV_XYFact"  >> Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.txt

Drop nuisances giving negative yields in the datacards:

     ./dropNuisances.sh

### Create workspace for combine and do the fit

Considering W+ and W- as separate signals:

     text2workspace.py Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.txt -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \
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

     combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.root -t -1 --setParameters r_WH_minus=1,r_WH_plus=1,r_higgs=1 > Combination/FitResults.txt


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


Checking how including low-pT sub-leading leptons affects the analysis:

     text2workspace.py Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_alsoLowPt.txt -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_alsoLowPt.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \
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

     combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_alsoLowPt.root -t -1 --setParameters r_WH_minus=1,r_WH_plus=1,r_higgs=1 > Combination/FitResults_alsoLowPt.txt


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


Including also ee final state and splitting into high-pT and low-pT sub-leading leptons categories:

     text2workspace.py Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_alsoLowPt.txt -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_alsoLowPt.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \
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

     combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_allFinalStates_alsoLowPt.root -t -1 --setParameters r_WH_minus=1,r_WH_plus=1,r_higgs=1 > Combination/FitResults_allFinalStates_alsoLowPt.txt


### Interpret the results in terms of asymmetry

We define de asymmetry as:

$$ A = \frac{#sigma(W^+h) - #sigma(W^-h)}{#sigma(W^+h) + #sigma(W^-h)}$$

Considering the Yellow Report Cross sections for the two processes (https://twiki.cern.ch/twiki/bin/view/LHCPhysics/CERNYellowReportPageAt13TeV):
- XS W+h = 0.8380 pb
- XS W-h = 0.5313 pb

We can extract both the asymmetry and its uncertainty, based on the results stored in Combination/FitResults.txt. For the moment, just use the macro:

     python getAsymmetry.py

### Extract the asymmetry from a physics model in combine

First, we need to create the workspace. We want to use define one of the WH signal strengths in terms of the asymmetry:

     --PO 'map=.*/ggH_hww:r_higgs[1,-20,20]' \
     --PO 'map=.*/qqH_hww:r_higgs[1,-20,20]' \
     --PO 'map=.*/ZH_hww:r_higgs[1,-20,20]' \
     --PO 'map=.*/ggZH_hww:r_higgs[1,-20,20]' \
     --PO 'map=.*/ttH_hww:r_higgs[1,-20,20]' \
     --PO 'map=.*/ggH_htt:r_higgs[1,-20,20]' \
     --PO 'map=.*/qqH_htt:r_higgs[1,-20,20]' \
     --PO 'map=.*/ZH_htt:r_higgs[1,-20,20]' \


     text2workspace.py \
     Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.txt \
     -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_physicsModel.root \
     -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
     -m 125 \
     --PO 'map=.*/WH_h.*_plus:r_WH_plus[1,-20,20]' \
     --PO 'map=.*/WH_h.*_minus:r_WH_minus=expr;;r_WH_minus("0.8380/0.5313*@0*(1-@1)/(1+@1)",r_WH_plus,r_Asym[0.224,0,10])' \
     --PO verbose



Then, do the actual fit:

     combine \
     -M MultiDimFit \
     --algo=singles \
     -d Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_physicsModel.root \
     -t -1 \
     --setParameters r_WH_plus=1,r_Asym=0.224 \
     --setParameterRanges r_WH_plus=-20,20:r_Asym=0,10 \
     --redefineSignalPOIs r_WH_plus,r_Asym


,r_higgs 



     --setParametersExplicit r_WH_minus=1,r_higgs,r_Asym=0.224 \



     --cminDefaultMinimizerStrategy 0 \
     --robustFit 1 \
     --X-rtd MINIMIZER_analytic \





text2workspace.py \
    semilepcombined_all.txt \
    -o workspace_semilepcombined_all.root  \
    -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
    -m 125 \
    --PO map='.*/TT.*FG_2:r_TTFG[1,0,20]' \
    --PO map='.*/TTOtherFG:r_TTFG'  \
    --PO map='.*/TT.*FG_1:r_neg[1,0,20]' \
    --PO map='.*/TT.*FG_3:r_pos=expr;;r_pos("4950.5/4798.4*@0*(100+@1)/(100-@1)",r_neg,r_Asym[-2,-5,0])' \
    --PO verbose




combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.root -t -1 --setParameters r_WH_minus=1,r_WH_plus=1,r_higgs=1 > Combination/FitResults.txt




combine -M $METHOD --algo $ALGO -d $WORKSPACE -v $VERBOSITY --redefineSignalPOIs $redefineSignalPOIs --setParameterRanges $SetParameterRanges --setParameters $SetParameters --robustFit 1 --cminDefaultMinimizerStrategy 0 --saveWorkspace -n _bestfit
combine \
    -M $METHOD \
    --algo $ALGO \
    -d $WORKSPACE \
    -v $VERBOSITY \
    --redefineSignalPOIs $redefineSignalPOIs \
    --setParameterRanges $SetParameterRanges \
    --setParameters $SetParameters \





export METHOD=MultiDimFit
export WORKSPACE=workspace_semilepcombined_all.root
export VERBOSITY=0
export ALGO=none
#export ALGO=singles
#export ALGO=grid
#export ALGO=cross
#export ALGO=impact
export SetParameters="rgx{r.+}=1,r_Asym=-1.588"
export SetParametersExplicit="r_TTFG=1,r_neg=1,r_Asym=-1.588"
export SetParameterRanges="rgx{r.+}=0.5,2:r_Asym=-10,5"
export redefineSignalPOIs="r_Asym,r_neg,r_TTFG"

#combine -M $METHOD --algo $ALGO -d $WORKSPACE -v $VERBOSITY --redefineSignalPOIs $redefineSignalPOIs --setParameterRanges $SetParameterRanges --setParameters $SetParameters --robustFit 1 --cminDefaultMinimizerStrategy 0 --saveWorkspace -n _bestfit
combine \
    -M $METHOD \
    --algo $ALGO \
    -d $WORKSPACE \
    -v $VERBOSITY \
    --redefineSignalPOIs $redefineSignalPOIs \
    --setParameterRanges $SetParameterRanges \
    --setParameters $SetParameters \














### Produce impact plots

Load combine:

     cd $HOME/work/combine/CMSSW_10_2_13/src/
     cmsenv
     cd -

Set the limit of the combine stack-size to infinite, to avoid crashes:

     ulimit -s unlimited

Prepare directory:

     mkdir -p Impact_plots

Run combineTool on the combined datacard:

     combineTool.py -M Impacts -d Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.root 


### Cross-check analysis: remove fakes

We can use the rootfiles already produced, but a different structure file, in order to not consider the non-prompt lepton contamination when we create the datacards:

    mkDatacards.py --pycfg=configuration_no_fakes.py --inputFile=rootFile/plots_WHSS2018_v7_chargeAsymmetry.root

Then, combine the new datacards obtained. First, load combine:

     cd $HOME/work/combine/CMSSW_10_2_13/src/
     cmsenv
     cd -

And then combine the datacards:

     mkdir -p Combination

     combineCards.py WH_SS_em_2j_minus=datacards/hww2l2v_13TeV_WH_SS_em_2j_minus/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_2j_plus=datacards/hww2l2v_13TeV_WH_SS_em_2j_plus/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_minus/mlljj20_whss_2j_bin/datacard.txt \
		     WH_SS_mm_2j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_2j_plus/mlljj20_whss_2j_bin/datacard.txt \
                     WH_SS_em_1j_minus=datacards/hww2l2v_13TeV_WH_SS_em_1j_minus/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_em_1j_plus=datacards/hww2l2v_13TeV_WH_SS_em_1j_plus/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_minus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_minus/mlljj20_whss_1j_bin/datacard.txt \
                     WH_SS_mm_1j_plus=datacards/hww2l2v_13TeV_WH_SS_mm_1j_plus/mlljj20_whss_1j_bin/datacard.txt \
                     ZH3l_WZ_CR_1j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_1j/events/datacard.txt \
                     ZH3l_WZ_CR_2j=datacards/hww2l2v_13TeV_ZH3l_WZ_CR_2j/events/datacard.txt \
		     > Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7.txt

Create groups of nuisances:

     echo "theory group = QCDscale_V QCDscale_VH QCDscale_VV QCDscale_WWewk  QCDscale_ggVV  QCDscale_ggZH  QCDscale_gg_ACCEPT  QCDscale_qqH  QCDscale_qqbar_ACCEPT  QCDscale_ttH pdf_Higgs_gg  pdf_Higgs_gg_ACCEPT  pdf_Higgs_qqbar  pdf_Higgs_qqbar_ACCEPT pdf_Higgs_ttH pdf_gg_ACCEPT pdf_qqbar pdf_qqbar_ACCEPT singleTopToTTbar" >> Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_no_fakes Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_no_fakes.txt

     echo "exp    group = CMS_PUID_2018 CMS_PU_2018 CMS_btag_cferr1 CMS_btag_cferr2 CMS_btag_hf CMS_btag_hfstats1_2018 CMS_btag_hfstats2_2018 CMS_btag_jes CMS_btag_lf CMS_btag_lfstats1_2018 CMS_btag_lfstats2_2018 CMS_eff_e_2018 CMS_eff_hwwtrigger_2018 CMS_eff_m_2018 CMS_hww_WgStarScale CMS_res_j_2018 CMS_scale_JESAbsolute CMS_scale_JESAbsolute_2018 CMS_scale_JESBBEC1 CMS_scale_JESBBEC1_2018 CMS_scale_JESEC2 CMS_scale_JESEC2_2018 CMS_scale_JESFlavorQCD CMS_scale_JESHF CMS_scale_JESHF_2018 CMS_scale_JESRelativeBal CMS_scale_JESRelativeSample_2018 CMS_scale_e_2018 CMS_scale_m_2018 CMS_scale_met_2018 CMS_topPtRew CMS_whss_chargeFlip PS_FSR PS_ISR lumi_13TeV_2018 lumi_13TeV_CurrCalib lumi_13TeV_LSCale lumi_13TeV_XYFact"  >> Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_no_fakes.txt

Combine the datacards and extract the signals:

     text2workspace.py Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_no_fakes.txt -o Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_no_fakes.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose \
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

     combine -M MultiDimFit --algo=singles --X-rtd MINIMIZER_analytic Combination/WH_chargeAsymmetry_WH_SS_Full2018_v7_no_fakes.root -t -1 --setParameters r_WH_minus=1,r_WH_plus=1,r_higgs=1 > Combination/FitResults_no_fakes.txt

