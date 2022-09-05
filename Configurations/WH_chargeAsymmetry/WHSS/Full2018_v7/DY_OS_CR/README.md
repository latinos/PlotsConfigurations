# DY->ee data driven estimation for WH charge asymmetry analysis

This configuration creates data-driven distributions to estimate the DY->ee contamination in the 2lSS signal region. Opposite-sign DY->ee events are selected in MC and weighted for the charge-flip probability, to obtain the expected distributions in the same-sign final state.

The instructions to produce the distributions and use them in the actual analysis follow.

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

### Update same-sign histogram file with opposite-sign DY distributions, weighted to take into account charge flip:

    mkDYee_chargeFlip_OS_SS.py --os_ss_cutsFile=dict_os_ss_cuts.py --inputFileSS=../rootFile/plots_WHSS_2018_v7_chargeAsymmetry.root --inputFileOS=rootFile/plots_WHSS_OSCR_2018_v7_chargeAsymmetry.root --outputDir=../rootFile/ --outputFile=plots_WHSS_2018_v7_chargeAsymmetry_DYflip.root --year=2018

This step creates the file `../rootFile/plots_WHSS_2018_v7_chargeAsymmetry_DYflip.root`, with the updated DY->ee histograms. You can use it to plot distributions and create datacards. You can now go back to the main directory:

    cd ..

### Plot shape-based nuisances on DY MC

    cd ~/work/latinos/unblinding/CMSSW_10_6_4/src/LatinoAnalysis/ShapeAnalysis/test/draw/

    python DrawNuisancesAll.py \
    --inputFile /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/WHSS/Full2018_v7/DY_OS_CR/rootFile/plots_WHSS_OSCR_2018_v7_chargeAsymmetry.root \
    --cutsFile /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/WHSS/Full2018_v7/DY_OS_CR/cuts.py \
    --nuisancesFile /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/WHSS/Full2018_v7/DY_OS_CR/nuisances.py \
    --varFile /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/WHSS/Full2018_v7/DY_OS_CR/variables.py \
    --outputDirPlots nuisances_DY/ \
    --samplesFile /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/WHSS/Full2018_v7/DY_OS_CR/samples.py \
    --cutName hww2l2v_13TeV_WH_OS_ee_2j_DYeeCR_pt2ge20

    cd -

### Plot distributions in an OS-like signal region

We can plot all the distributions in the OS-like signal region. This allows to check the data/MC agreement in the region we use to estimate the DY contamination in the SS signal region. Additionally, we can try to to a completely data-driven estimation: we consider data, remove all non-DY MC contributions: This will be our data-driven DY estimation in the OS phase space. Reweighting it by the charge-flip probabilities, we can get the DY contamination in the SS signal region.

    mkShapesMulti.py --pycfg=configuration_DY_OS.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

    mkShapesMulti.py --pycfg=configuration_DY_OS.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    mkPlot.py        --pycfg=configuration_DY_OS.py --inputFile=rootFile_OS/plots_WHSS_DY_OSCR_2018_v7_chargeAsymmetry.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1