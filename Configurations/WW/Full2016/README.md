WW analysis
===========

mkShapes.py --pycfg=configuration_sf.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__sfSel/ --doBatch=True --batchQueue=8nh --batchSplit=AsMuchAsPossible

mkShapes.py --pycfg=configuration_sf.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__sfSel/ --batchSplit=AsMuchAsPossible --doHadd=True


mkPlot.py --pycfg=configuration_sf.py --inputFile=rootFile_sf/plots_WW_sf.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --showIntegralLegend=1

mkDatacards.py   --pycfg=configuration_sf.py  --inputFile=rootFile_sf/plots_WW_sf.root



