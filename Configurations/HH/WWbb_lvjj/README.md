HH > WW bb > lvjj bb
====

Transfer data:

    single lepton MC
    
    /eos/user/g/govoni/samples/HWW2015/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/

    voms-proxy-init -voms cms

    gfal-ls srm://maite.iihe.ac.be:8443/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/ | awk '{print "gfal-copy srm://maite.iihe.ac.be:8443/pnfs/iihe/cms/store/user/xjanssen/HWW2015/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/"$1"  /eos/user/g/govoni/samples/HWW2015/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/"$1}'


Instructions:


# 1. First time only

Get the combine package. Follow the instructions documented in the revision **r170** of the [combine twiki](https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideHiggsAnalysisCombinedLimit#ROOT6_SLC6_release_CMSSW_7_4_X).

    cd $COMBINE_DIRECTORY

Get Andrea's scripts to modify datacards.

    cd $COMBINE_DIRECTORY
    git clone https://github.com/amassiro/ModificationDatacards

Copy and edit the latino user configuration file.

    cd $CMSSW_DIRECTORY/LatinoAnalysis/Tools/python
    cp userConfig_TEMPLATE.py userConfig.py


# 2. Produce histograms

This step reads the post-processed latino trees and produces histograms for several variables and phase spaces.

    cd $CONFIGURATION_DIRECTORY

    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/user/g/govoni/samples/HWW2015/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/ \
                --batchSplit=AsMuchAsPossible \
                --doBatch=True \
                --batchQueue=1nd

The jobs can take a while, thus it is natural to check their status.

    mkBatch.py --status

After all your jobs are finished, and before going to the next step, check the .jid files in the following output directory (tag is specified in configuration.py):

    ls -l $CONFIGURATION_DIRECTORY/jobs/mkShapes__tag/*.jid
    
If you find .jid files it means that the corresponding jobs failed, check the .err and .out files to understand the reason of the failure.

If a job takes too long / fails, one can kill it and resubmit manually, e.g.:

    bsub -q 1nd $CONFIGURATION_DIRECTORY/jobs/mkShapes__WWbb_lvjj/mkShapes__WWbb_lvjj__hww2l2v_13TeV_em_mp_1j__top2.sh

If several jobs failed and you want to resubmit them all at once you can do:

    cd $CONFIGURATION_DIRECTORY/jobs/mkShapes__tag
    for i in *jid; do bsub -q 1nd ${i/jid/sh}; done

# 3. Put all your apples in one basket

Once the previous jobs have finished we _hadd_ the outputs.

    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/user/g/govoni/samples/HWW2015/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/ \
                --batchSplit=AsMuchAsPossible \
                --doHadd=True
                
*NB*: If the --batchSplit=AsMuchAsPossible option is used, do not _hadd_ the outputs by hand but use the command above instead. Otherwise the MC statistical uncertainties are not treated in the correct way.


# 4. Read histograms

At this stage one can either produce plots or datacards.

### Produce plots

Now we are ready to make data/MC comparison plots.

    mkPlot.py --inputFile=rootFile/plots_WWbb_lvjj.root \
              --showIntegralLegend=1


### Produce datacards

    mkDatacards.py --pycfg=configuration.py \
                   --inputFile=rootFile/plots_WWbb_lvjj.root

                   
                   
                   
                   
