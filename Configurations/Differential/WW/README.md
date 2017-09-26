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


                   
                   
            
Now Fit:


    cd /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/Differential/ggH/pt1/
    cmsenv
    
    cd tests
    sh ../scripts/doGGH_doMultisignal.sh
    cd -

    
    r99t tests/higgsCombineTest.MultiDimFit.mH120.root ../scripts/Draw2DImproved.cxx
    
    r99t tests/higgsCombineTest.MultiDimFit.mH120.root ../scripts/Draw2DImproved.cxx\(\"r1\",\"r2\",\"r1\",\"r2\",2,\"r3\>0.9\&\&r3\<1.1\"\)
    r99t tests/higgsCombineTest.MultiDimFit.mH120.root ../scripts/Draw2DImproved.cxx\(\"r1\",\"r3\",\"r1\",\"r3\",2,\"r2\>0.9\&\&r2\<1.1\"\)
    r99t tests/higgsCombineTest.MultiDimFit.mH120.root ../scripts/Draw2DImproved.cxx\(\"r2\",\"r3\",\"r2\",\"r3\",2,\"r1\>0.9\&\&r1\<1.1\"\)

    r99t tests/higgsCombineTest.MultiDimFit.mH120.root ../scripts/Draw3DImproved.cxx

