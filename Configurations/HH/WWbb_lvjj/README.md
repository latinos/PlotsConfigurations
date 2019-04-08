HH > WW bb > lvjj bb
====

Transfer data:

    single lepton MC
    
    /gwteraz/users/amassiro/latino/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/ 

    voms-proxy-init -voms cms

    gfal-ls srm://storm.mib.infn.it:8444/cms/store/group/OneLepton/Apr2017_Run2016B_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__hadd/ | awk '{print "gfal-copy srm://storm.mib.infn.it:8444/cms/store/group/OneLepton/Apr2017_Run2016B_RemAOD/lepSel__EpTCorr__TrigMakerData__cleanTauData__hadd/"$1"  /gwteraz/users/amassiro/latino/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/"$1}'

    
    Using webfts to trasnfer data: 
    https://webfts.cern.ch/transmissions.php
    

    
For hercules:

    source /cvmfs/cms.cern.ch/cmsset_default.sh
    
    
Instructions:


# 1. First time only

Get the combine package. Follow the instructions documented in the revision **r170** of the [combine twiki](https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideHiggsAnalysisCombinedLimit#ROOT6_SLC6_release_CMSSW_7_4_X).

    cd $COMBINE_DIRECTORY

Get Andrea's scripts to modify datacards.

    cd $COMBINE_DIRECTORY
    git clone https://github.com/amassiro/ModificationDatacards

Copy and edit the latino user configuration file.

    export CMSSW_DIRECTORY=/gwpool/users/amassiro/CMSSW_8_0_26_patch1/src
    cd $CMSSW_DIRECTORY/LatinoAnalysis/Tools/python
    cp userConfig_TEMPLATE.py userConfig.py

For example:

    baseDir  = '/gwpool/users/amassiro/Submit/'

    
# 2. Produce histograms

This step reads the post-processed latino trees and produces histograms for several variables and phase spaces.

    cd $CONFIGURATION_DIRECTORY

    mkShapes.py --pycfg=configuration.py \
                --inputDir=/gwteraz/users/amassiro/latino/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/  \
                --batchSplit=AsMuchAsPossible \
                --doBatch=True
    You need --inputDir= only if you don't insert the directory in samples.py

Local test:

    mkShapes.py --inputDir=/gwteraz/users/amassiro/latino/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC  --pycfg=configuration.py
 
To expand and see what is happening:

    easyDescription.py   --inputFileSamples=samples.py   --outputFileSamples=my_expanded_samples.py


Bicocca batch:

    hercules.hcms.it
    
    
The jobs can take a while, thus it is natural to check their status.

    mkBatch.py --status

To see all the jobs running on the batch system:

    qstat        

    
After all your jobs are finished, and before going to the next step, check the .jid files in the following output directory (tag is specified in configuration.py):

    ls -l $CONFIGURATION_DIRECTORY/jobs/mkShapes__tag/*.jid
    
If you find .jid files it means that the corresponding jobs failed, check the .err and .out files to understand the reason of the failure.

If a job takes too long / fails, one can kill it and resubmit manually, e.g.:

    qsub $CONFIGURATION_DIRECTORY/jobs/mkShapes__WWbb_lvjj/mkShapes__WWbb_lvjj__hww2l2v_13TeV_em_mp_1j__top2.sh

If several jobs failed and you want to resubmit them all at once you can do:

    cd $CONFIGURATION_DIRECTORY/jobs/mkShapes__tag
    for i in *jid; do qsub ${i/jid/sh}; done

# 3. Put all your apples in one basket

Once the previous jobs have finished we _hadd_ the outputs.

    mkShapes.py --pycfg=configuration.py \
                --inputDir=/gwteraz/users/amassiro/latino/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC/  \
                --batchSplit=AsMuchAsPossible \
                --doHadd=True
                
*NB*: If the --batchSplit=AsMuchAsPossible option is used, do not _hadd_ the outputs by hand but use the command above instead. Otherwise the MC statistical uncertainties are not treated in the correct way.


# 4. Read histograms

At this stage one can either produce plots or datacards.

### Produce plots

Now we are ready to make data/MC comparison plots.

    mkPlot.py --inputFile=rootFile/plots_WWlvjj.root \
              --showIntegralLegend=1 \
	      --showRelativeRatio \
	      --plotNormalizedDistributions=True


### Produce datacards

    mkDatacards.py --pycfg=configuration.py \
                   --inputFile=rootFile/plots_WWlvjj.root

                   
                   
                   
                   
