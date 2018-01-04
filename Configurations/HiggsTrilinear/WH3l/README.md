Source from:

    https://github.com/latinos/PlotsConfigurations/tree/master/Configurations/WH3l/Full2016
    

Then optimization for pT bins




To prepare:

    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__vh3lSel/ \
                --batchSplit=AsMuchAsPossible \
                --doBatch=True \
                --batchQueue=1nd

then:

    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__vh3lSel/ \
                --batchSplit=AsMuchAsPossible \
                --doHadd=True

plot:

    mkPlot.py --inputFile=rootFiles_WH3l_Signal_forPlots_mva_90p_Iso2016/plots_WH3l_Signal_forPlots_mva_90p_Iso2016.root \
              --showIntegralLegend=1

    mkPlot.py --inputFile=rootFiles_WH3l_Signal_forPlots_mva_90p_Iso2016/plots_WH3l_Signal_forPlots_mva_90p_Iso2016.root \
              --showIntegralLegend=1  \
              --showDataMinusBkgOnly

              
              
datacard:

    mkDatacards.py --pycfg=configuration.py \
                   --inputFile=rootFiles_WH3l_Signal_forPlots_mva_90p_Iso2016/plots_WH3l_Signal_forPlots_mva_90p_Iso2016.root
    
 
 
 
 
 
Check distribution:
 
     /eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__vh3lSel/latino_HWplusJ_HToWW_M125.root

     latino->Draw("higgsLHEpt")
     
     latino->Draw("higgsLHEpt:pTWWW", "flagOSSF == 0", "colz")
     latino->Draw("higgsLHEpt:ptll", "flagOSSF == 0", "colz")
     
     