By following these instructions one should be able to read latino trees, produce histograms, make plots and datacards, combine the datacards, and extract the analysis significance.


# 0. Get started

    ssh -Y lxplus.cern.ch -o ServerAliveInterval=240
    bash -l

    cd CMSSW_8_0_26_patch1/src
    cmsenv
    scramv1 b

    # First time only copy and modify
    cd LatinoAnalysis/Tools/python
    cp userConfig_TEMPLATE.py userConfig.py


# 1. Read the latino trees and produce histograms

This step reads the post-processed latino trees and produces histograms for several variables and phase spaces.

    cd PlotsConfigurations/Configurations/ggH/Full2016

    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel__genericFormulas \
                --batchSplit=AsMuchAsPossible \
                --doBatch=True \
                --batchQueue=1nd

The jobs can take a while, thus it is natural to check their status.

    mkBatch.py --status


If a job takes too long / fails, one can kill it and resubmit manually.

    bsub -q 1nd ~/cms/HWW2016/jobs/mkShapes__ggH/mkShapes__ggH__hww2l2v_13TeV_em_mp_1j__top2.sh


# Put all your apples in one basket

Once the previous jobs have finished we _hadd_ the outputs,

    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel__genericFormulas \
                --batchSplit=AsMuchAsPossible \
                --doHadd=True


# 2. Take beautiful pictures

Now we are ready to make data/MC comparison plots,

    mkPlot.py --inputFile=rootFile/plots_ggH.root \
              --showIntegralLegend=1


# 3. It is time to get our datacards

    mkDatacards.py --pycfg=configuration.py \
                   --inputFile=rootFile/plots_ggH.root


# 4. Get the combine package

This step is meant to be done the first time only, by following the instructions documented in the revision **r170** of the [combine twiki](https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideHiggsAnalysisCombinedLimit#ROOT6_SLC6_release_CMSSW_7_4_X).

