ggH analysis
==============

Produce shapes:

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=workday 

Add root files:

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files
    
If this is too slow try to hadd manually (TAG is the one in configuration.py)

    cd rootFileTAG
    hadd -j 5 -f plots_ggH_TAG_ALL.root plots_ggH_TAG_ALL_* 

Make plots:

    mkPlot.py --pycfg=configuration.py --inputFile=rootFileTAG/plots_TAG_ALL.root

For unblinding the control regions, comment out the signal regions in cuts.py and set isBlind=0 in plot.py. Then rerun mkPlot.py as above. 

Make datacards:

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFileTAG/plots_TAG_ALL.root

Make combination of datacards and workspaces by editing the script 'scripts/doCombination.sh' and running:

    ./doCombination.sh

