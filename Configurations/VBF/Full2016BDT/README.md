To prepare:


    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__wwSel/ \ 
                --batchSplit=AsMuchAsPossible \
                --doBatch=True \
                --batchQueue=8nh

then:


    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__wwSel/ \
                --batchSplit=AsMuchAsPossible \
                --doHadd=True \

plot:

    mkPlot.py --inputFile=rootFile_3Dec/plots_VBF_3Dec.root \
              --showIntegralLegend=1 \
              --minLogCratio=0.1

    mkPlot.py --inputFile=rootFile_3Dec/plots_VBF_3Dec.root \
              --showIntegralLegend=1  \
              --showDataMinusBkgOnly
              
              
datacard:

    mkDatacards.py --pycfg=configuration.py \
                   --inputFile=rootFile_3Dec/plots_VBF_3Dec.root
    
    
