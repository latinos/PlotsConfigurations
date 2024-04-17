# DY->ee data driven estimation for WH charge asymmetry analysis

This configuration creates data-driven distributions to estimate the DY->ee contamination in the 2lSS signal region. Opposite-sign DY->ee events are selected in MC and weighted for the charge-flip probability, to obtain the expected distributions in the same-sign final state.

The instructions to produce the distributions and use them in the actual analysis follow.

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch --FixNegativeAfterHadd

Resubmit failed jobs.

    cd $HOME/scripts/jobs/mkShapes__WHSS2018_v9_chargeAsymmetry/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time has been exceeded, resubmit them on a longer-time queue.

    cd $HOME/scripts/jobs/mkShapes__WHSS2018_v7_chargeAsymmetry/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8 --FixNegativeAfterHadd

### Update same-sign histogram file with opposite-sign DY distributions, weighted to take into account charge flip:

    mkDYee_chargeFlip_OS_SS.py --os_ss_cutsFile=dict_os_ss_cuts.py --inputFileSS=../rootFile/plots_WHSS_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90.root --inputFileOS=rootFile/plots_WHSS_OSCR_2016noHIPM_v9_chargeAsymmetry_Mu82_Ele90.root --outputDir=../rootFile/ --outputFile=plots_WHSS_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root --year=2016noHIPM

This step creates the file `../rootFile/plots_WHSS_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root`, with the updated DY->ee histograms. You can use it to plot distributions and create datacards. You can now go back to the main directory:

    cd ..

Using data instead of DY MC:

    mkDYee_chargeFlip_OS_SS_data.py --os_ss_cutsFile=dict_os_ss_cuts.py --inputFileSS=../rootFile/plots_WHSS_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90.root --inputFileOS=rootFile/plots_WHSS_OSCR_2016noHIPM_v9_chargeAsymmetry_Mu82_Ele90.root --outputDir=../rootFile/ --outputFile=plots_WHSS_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90_DYflip_data.root --year=2016 --non_cf_bkg=Wg,Zg,WgS,ZgS,WZ,ZZ,VVV,ggH_hww,qqH_hww,ZH_hww,ggZH_hww,WH_hww_plus,WH_hww_minus,ttH_hww,ggH_htt,qqH_htt,ZH_htt,WH_htt_plus,WH_htt_minus,Fake_ee,Fake_em_Fake_mm

	cd ..

### Produce control plots

We draw distributions for all variables with a reduced set of nuisances, to speed up the production:

    mkShapesMulti.py --pycfg=configuration_control_plots.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch --FixNegativeAfterHadd

    mkShapesMulti.py --pycfg=configuration_control_plots.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8 --FixNegativeAfterHadd

    mkDYee_chargeFlip_OS_SS.py --os_ss_cutsFile=dict_os_ss_cuts.py --inputFileSS=../rootFile/plots_WHSS_2016noHIPM_v9_control_plots.root --inputFileOS=rootFile/plots_WHSS_OSCR_2016noHIPM_v9_control_plots.root --outputDir=../rootFile/ --outputFile=plots_WHSS_2016noHIPM_v9_control_plots_DYflip.root --year=2016noHIPM

Using data instead of DY MC:

    mkDYee_chargeFlip_OS_SS_data.py --os_ss_cutsFile=dict_os_ss_cuts.py --inputFileSS=../rootFile/plots_WHSS_2016noHIPM_v9_control_plots.root --inputFileOS=rootFile/plots_WHSS_OSCR_2016noHIPM_v9_control_plots.root --outputDir=../rootFile/ --outputFile=plots_WHSS_2016noHIPM_v9_control_plots_DYflip_data.root --year=2016 --non_cf_bkg=Wg,Zg,WgS,ZgS,WZ,ZZ,VVV,ggH_hww,qqH_hww,ZH_hww,ggZH_hww,WH_hww_plus,WH_hww_minus,ttH_hww,ggH_htt,qqH_htt,ZH_htt,WH_htt_plus,WH_htt_minus,Fake_ee,Fake_em_Fake_mm

### Plot shape-based nuisances on DY MC

    cd ~/work/latinos/unblinding/CMSSW_10_6_4/src/LatinoAnalysis/ShapeAnalysis/test/draw/

    python DrawNuisancesAll.py \
    --inputFile /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/WHSS/Full2016noHIPM_v7/DY_OS_CR/rootFile/plots_WHSS_OSCR_2016noHIPM_v7_chargeAsymmetry.root \
    --cutsFile /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/WHSS/Full2016noHIPM_v7/DY_OS_CR/cuts.py \
    --nuisancesFile /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/WHSS/Full2016noHIPM_v7/DY_OS_CR/nuisances.py \
    --varFile /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/WHSS/Full2016noHIPM_v7/DY_OS_CR/variables.py \
    --outputDirPlots nuisances_DY/ \
    --samplesFile /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/WHSS/Full2016noHIPM_v7/DY_OS_CR/samples.py \
    --cutName hww2l2v_13TeV_WH_OS_ee_2j_DYeeCR_pt2ge20

    cd -

### Plot distributions in an OS-like signal region

We can plot all the distributions in the OS-like signal region. This allows to check the data/MC agreement in the region we use to estimate the DY contamination in the SS signal region. Additionally, we can try to to a completely data-driven estimation: we consider data, remove all non-DY MC contributions: This will be our data-driven DY estimation in the OS phase space. Reweighting it by the charge-flip probabilities, we can get the DY contamination in the SS signal region.

    mkShapesMulti.py --pycfg=configuration_DY_OS.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch --FixNegativeAfterHadd

    mkShapesMulti.py --pycfg=configuration_DY_OS.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8 --FixNegativeAfterHadd

    ./do_plot_os_distributions.sh
