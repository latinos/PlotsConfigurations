# WH charge asymmetry analysis

This is an adaptation of the analysis which is part of HIG-20-013. It is used to measure the asymmetry in the prodution of W+H and W-H. Here, the 2-leptons final state (one of the W bosons decays hadronically) is inspected.

The instructions to run the analysis follow.

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs.

    cd $HOME/scripts/jobs/mkShapes__WHSS2018_v9_chargeAsymmetry/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time has been exceeded, resubmit them on a longer-time queue.

    cd $HOME/scripts/jobs/mkShapes__WHSS2018_v9_chargeAsymmetry/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Plot original distributions

    ./do_plot_original_distributions.sh

### Include DY -> ee estimation from opposite-sign phase space

Go into the `DY_OS_CR` directory and follow the instructions in the `README` file:

    cd DY_OS_CR/
    
### Plot distributions with DY->ee data-driven histograms

    ./do_plot_DYflip_distributions.sh

### Select binning for BDT

    mkBinningOptimization.py --pyCfg=binning_mm.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20  --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_mm.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2ge20 --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_mm.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2ge20  --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_mm.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2ge20 --variable=BDTG6_more --figure=S_B

    mkBinningOptimization.py --pyCfg=binning_mm.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2lt20  --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_mm.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_mm_2j_minus_pt2lt20 --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_mm.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_mm_1j_plus_pt2lt20  --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_mm.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_mm_1j_minus_pt2lt20 --variable=BDTG6_more --figure=S_B


    mkBinningOptimization.py --pyCfg=binning_em.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20  --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_em.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20 --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_em.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20  --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_em.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20 --variable=BDTG6_more --figure=S_B

    mkBinningOptimization.py --pyCfg=binning_em.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20  --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_em.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20 --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_em.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20  --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_em.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20 --variable=BDTG6_more --figure=S_B


    mkBinningOptimization.py --pyCfg=binning_ee.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20  --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_ee.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20 --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_ee.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20  --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_ee.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20 --variable=BDTG6_more --figure=S_B

    mkBinningOptimization.py --pyCfg=binning_ee.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20  --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_ee.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20 --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_ee.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20  --variable=BDTG6_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_ee.py --input=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20 --variable=BDTG6_more --figure=S_B

### Create datacards

Using DY->ee data-driven distributions and scaling the signal by a factor 10, to test different strategies in single eras:

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root --outputDirDatacard=datacards_DYflip --structureFile=structure_DYflip.py

Using original distributions and scaling the signal by a factor 10, to test different strategies in single eras:

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards --structureFile=structure.py

Using DY->ee data-driven distributions and the correct signal scaling, for global combination:

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root --outputDirDatacard=datacards_DYflip_original_signal_scale --structureFile=structure_DYflip_original_signal_scale.py

### Combine datacards

Load combine:

     cd $HOME/work/combine/CMSSW_10_2_13/src/
     cmsenv
     cd -

Actually combine datacards:

     mkdir -p Combination

     python script_datacards.py

     python script_datacards_BDTG.py

### Interpret the results in terms of asymmetry

We define de asymmetry as:

$$ A = \frac{\sigma(W^+h) - \sigma(W^-h)}{\sigma(W^+h) + \sigma(W^-h)}$$

Considering the Yellow Report Cross sections for the two processes (https://twiki.cern.ch/twiki/bin/view/LHCPhysics/CERNYellowReportPageAt13TeV):
- XS W+h = 0.8380 pb
- XS W-h = 0.5313 pb

When fitting, it is more convenient to re-define the quantities we want to measure:

$$ S = \sigma(W^+h) + \sigma(W^-h) $$

$$ A = \frac{\sigma(W^+h) - \sigma(W^-h)}{S}$$

This means that:

$$ \sigma(W^+h) = \frac{S(1+A)}{2} $$

$$ \sigma(W^-h) = \frac{S(1-A)}{2} $$

In the combine 'notation':

$$ \sigma(W^+h) = r(W^+h) \times \sigma_{theory}(W^+h) $$

$$ \sigma(W^-h) = r(W^-h) \times \sigma_{theory}(W^-h) $$

And this brings to:

$$ r(W^+h) = \frac{S (1+A)}{2 \sigma_{theory}(W^+h)} $$

$$ r(W^-h) = \frac{S (1-A)}{2 \sigma_{theory}(W^-h)} $$

Since S appears in the denominator of the asymmetry expression, it cannot be 0, and we will require it to be always positive to avoid poles in the asymmetry definition.

### Use script to extract asymmetry

Using BDT variable (true/false refer to the usage of data-driven DYee):

    ./do_workspace_and_fit.sh BDTG6 true
    ./do_workspace_and_fit.sh BDTG6 false

    ./do_workspace_and_fit.sh mlljj20_whss_1j_bin true
    ./do_workspace_and_fit.sh mlljj20_whss_1j_bin false

### Produce Impact Plots

Source combine:

    cd $HOME/work/combine/CMSSW_10_2_13/src/
    cmsenv
    cd -

    ulimit -s unlimited

Prepare directory:

    mkdir -p Impact_plots

Select datacard to use:

    VAR=mlljj20_whss_1j_bin
    VAR=BDTG6

    FINAL_STATE=_allFinalStates
    FINAL_STATE=_alsoLowPt
    FINAL_STATE=_allFinalStates_alsoLowPt
    FINAL_STATE=_allFinalStates_alsoLowPt_noZveto
    FINAL_STATE=_allFinalStates_alsoLowPt_DYflip_noZveto

Actually produce impact plots:

    cd Impact_plots

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}${FINAL_STATE}.root -m 125 --doInitialFit -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --freezeParameters r_higgs

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}${FINAL_STATE}.root -m 125 --doFits -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --job-mode=condor --freezeParameters r_higgs

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}${FINAL_STATE}.root -m 125 -t -1 -o impacts_WHSS_2018_${VAR}${FINAL_STATE}.json --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --freezeParameters r_higgs

    plotImpacts.py -i impacts_WHSS_2018_${VAR}${FINAL_STATE}.json -o Impact_WHSS_2018_${VAR}${FINAL_STATE}

    rm combine_*
    rm condor_*
    rm higgsCombine_*
