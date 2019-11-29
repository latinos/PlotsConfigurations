Intructions to run the WHSS STXS analysis for 2016,2017,2018

Run the following command in the main folder:

    cd $CMSSW_BASE/src/PlotsConfigurations_STXS_1p1/Configurations/<WH-CHANNEL>/Full-YEAR-nano_STXS_1p1
    
Main folder directory will be referred as ```$PWD```

Make the shapes:

    mkShapesMulti.py --pycfg=configuration.py --doBatch=True --batchSplit=Samples,Files --batchQueue=workday

Add root files:

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files

If this is too slow try to hadd manually (TAG is the one in configuration.py)

    cd rootFileTAG
    hadd -j 5 -f plots_TAG_ALL.root plots__TAG_ALL_*

Make plots:

    ./script/doPlot.sh rootFile/plots_TAG_ALL.root

For unblinding the control regions, comment out the signal regions in cuts.py and set isBlind=0 in plot.py. Then rerun mkPlot.py as above.

Make datacards:

    ./script/doDatacard.sh rootFileTAG/plots_TAG_ALL.root

Combine datacards, make sure you have COMBINE install:

    # You need to edit the following script manually before running
    ./scripts/doCombination.sh datacard-FOLDER

Inspecting Confusion Matrix (Credit goes to Adrian!):

    cd $PWD/plotScripts/
    python plotConfusionMatrixHTXS.py ../Combination/Full-YEAR-_WH_SS_HTXS_Stage1.txt
    
Inspecting Signal contribution in each Reco Bin (Credit goes to Adrian!):

    cd $PWD/plotScripts/
    python plotSignalFractionHTXS.py ../Combination/Full-YEAR-_WH_SS_HTXS_Stage1.txt

Make the workspace:
   
    cd PWD
    python scripts/doWorkspace.py

Make the multidimensional fit:

    python scripts/doFit.py
    
Plot r_signal modifier results (Credit goes to Adrian!):

    cd $PWD/plotScripts/
    python plotSignalStrengths.py


