VH2j plots
==============

Common tools for analysis:

voms-proxy-init -voms cms -rfc --valid 168:0

cmsenv

mkShapesMulti.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files

mkShapesMulti.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8


mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_VH2j_2016.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1 


Make data cards
===============

mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_VH2j_2016.root

cd ../../../../../../combine/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit/

combineCards.py datacards/VH_2j_emu/events/datacard.txt datacards/VH_2j_topemu/events/datacard.txt datacards/VH_2j_DYtautau/events/datacard.txt > datacards_combine.txt

text2workspace.py datacards_combine.txt -m 125
