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
     
     
     
     latino->Draw("ptbest:higgsLHEpt", "", "colz")

     
     
     
     
Anomalous couplings:


     example
     https://github.com/latinos/PlotsConfigurations/tree/master/Configurations/WW/Full2016_ACGen

a script to prepare the input to the datacards (fit of the yields as a function of the anomalous coupling value in each bin of the distribution)

    acoupling.py

is loading the generated grid and make a link to the structure of the performed parameter scan (1D, 2D and 3D scans are possible)
This disctionary is then used in samples.py to create all the needed histogram (1 hustogram per LHE weight)

The script is in ShapeAnalysis/script and can be used like:

    mkACPlot.py --pycfg=configuration_em.py  --inputFile=rootFile_em/plots_WW_em.root --varList=mll --cutList=all

that will create 1D 2D and/or 3D scan histogram for each bin of mll distribution
and perform pol2 fits (in 1D, 2D and 3D) to them + save in a new file

The idea is to run this only on signal samples
for now and create the SM datacards from another cfg

A-coupling model defined here:

    https://twiki.cern.ch/twiki/bin/viewauth/CMS/ATGCRooStats#Model_building

