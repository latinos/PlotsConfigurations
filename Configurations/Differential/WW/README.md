WW differential distirbutions
====


    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__wwSel \
                --batchSplit=AsMuchAsPossible \
                --doBatch=True \
                --batchQueue=1nd

    mkBatch.py --status

    bsub -q 1nd ~/cms/HWW2016/jobs/mkShapes__WW/mkShapes__WW__hww2l2v_13TeV_em_mp_1j__top2.sh


    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__wwSel \
                --batchSplit=AsMuchAsPossible \
                --doHadd=True

                

    mkPlot.py --inputFile=rootFile/plots_WW.root \
              --showIntegralLegend=1



    mkDatacards.py --pycfg=configuration.py \
                   --inputFile=rootFile/plots_WW.root


            
            
