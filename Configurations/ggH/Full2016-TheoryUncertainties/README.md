Test of Theory uncertainties


# Produce histograms

This step reads the post-processed latino trees and produces histograms for several variables and phase spaces.

    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__MCFix/ \
                --batchSplit=AsMuchAsPossible \
                --doBatch=True \
                --batchQueue=1nd

The jobs can take a while, thus it is natural to check their status.

    mkBatch.py --status


If a job takes too long / fails, one can kill it and resubmit manually.

    bsub -q 1nd ~/cms/HWW2016/jobs/mkShapes__ggH/mkShapes__ggH__hww2l2v_13TeV_em_mp_1j__top2.sh


# 3. Put all your apples in one basket

Once the previous jobs have finished we _hadd_ the outputs.

    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__MCFix/ \
                --batchSplit=AsMuchAsPossible \
                --doHadd=True


# 4. Read histograms

At this stage one can either produce plots or datacards.

### Produce plots

Now we are ready to make data/MC comparison plots.

    mkPlot.py --inputFile=rootFile/plots_ggH.root \
              --showIntegralLegend=1


and datacards 

    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root
    

Plot each nuisance effect:

    https://github.com/latinos/LatinoAnalysis/tree/master/ShapeAnalysis/test/draw          

    cd ../../../../LatinoAnalysis/ShapeAnalysis/test/draw/
    
    python DrawNuisancesAll.py \
         --inputFile ../../../../PlotsConfigurations/Configurations/ggH/Full2016-TheoryUncertainties/datacards/hww2l2v_13TeV_of_0j/events/shapes/histos_hww2l2v_13TeV_of_0j.root  \
         --outputDirPlots ggH0j  \
         --nuisancesFile  ../../../../PlotsConfigurations/Configurations/ggH/Full2016-TheoryUncertainties/nuisances.py  \
         --samplesFile    ../../../../PlotsConfigurations/Configurations/ggH/Full2016-TheoryUncertainties/samples.py \
         --cutName hww2l2v_13TeV_of_0j

         
    python DrawNuisancesAll.py \
         --inputFile ../../../../PlotsConfigurations/Configurations/ggH/Full2016-TheoryUncertainties/datacards/hww2l2v_13TeV_of_0j/mll/shapes/histos_hww2l2v_13TeV_of_0j.root  \
         --outputDirPlots ggH0j_mll  \
         --nuisancesFile  ../../../../PlotsConfigurations/Configurations/ggH/Full2016-TheoryUncertainties/nuisances.py  \
         --samplesFile    ../../../../PlotsConfigurations/Configurations/ggH/Full2016-TheoryUncertainties/samples.py \
         --cutName hww2l2v_13TeV_of_0j
