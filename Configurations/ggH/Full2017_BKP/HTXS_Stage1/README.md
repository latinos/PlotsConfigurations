Intructions to run the ggH HTXS analysis for 2017

Make the shapes:

    mkShapesMulti.py --pycfg=configuration.py --doBatch=True --batchSplit=Samples,Files --batchQueue=workday

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

Combine datacards:

    cd PATH_TO_COMBINE_INSTALL; cmsenv; cd -;
    # You need to edit the following script manually before running
    ./scripts/doCombination.sh

Make the workspace:
   
    python scripts/doWorkspace.py

Make the multidimensional fit:

    python scripts/doFit.py

