Intructions to run the WHSS STXS analysis for 2016

Make the shapes:

    mkShapesMulti.py --pycfg=configuration.py --doBatch=True --batchSplit=Samples,Files --batchQueue=workday

Add root files:

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files

If this is too slow try to hadd manually (TAG is the one in configuration.py)

    cd rootFileTAG
    hadd -j 5 -f plots__WH2016nano_HTXS1p1_ALL.root plots__WH2016nano_HTXS1p1_ALL_*

Make plots:

    mkPlot.py \
    --inputFile=rootFileTAG/plots_TAG_ALL.root \
    --showIntegralLegend=1 \
    --minLogCratio=0.1 \
    --minLogC=0.1 \
    --logOnly \
    --onlyPlot=c

For unblinding the control regions, comment out the signal regions in cuts.py and set isBlind=0 in plot.py. Then rerun mkPlot.py as above.

Make datacards:

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFileTAG/plots_TAG_ALL.root

Combine datacards:

    cd PATH_TO_COMBINE_INSTALL; cmsenv; cd -;
    # You need to edit the following script manually before running
    ./scripts/doCombination.sh

===================== DEVEL ======================

Make the workspace:
   
    python scripts/doWorkspace.py

Make the multidimensional fit:

    python scripts/doFit.py

