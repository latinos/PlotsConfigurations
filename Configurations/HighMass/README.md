# First time setup

Do `git clone https://github.com/UniMiBAnalyses/NNEvaluation` into your src directory, then go to a previous commit with `git checkout 95fda8bbed473787d2f4047d3ea500c09e98039f` and compile with scram. This is needed for the DNNs.


# Running the analysis

1. Make the shapes:

    mkShapesMulti.py --pycfg=configuration_em.py --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7 --batchSplit=AsMuchAsPossible  --FixNegativeAfterHadd --doBatch=True --batchQueue=workday --treeName=Events

2. hadd output:

    mkShapesMulti.py --pycfg=configuration_em.py --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7 --batchSplit=AsMuchAsPossible  --FixNegativeAfterHadd --doHadd=True --doNotCleanup --nThreads=8

3. If em final state: Run "python scripts/mkDYvetoUnc.py configuration_em.py" to fix Embedding uncertainty
4. Make plots with mkPlot.py
5. Redo stats to add correlated BinByBin stats:

    mkShapesMulti.py --pycfg=configuration_em.py --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7 --batchSplit=AsMuchAsPossible --redoStat=True

6. Run `FixAll.sh` to do a number of postfixes on the shapes (See comments in the file for details). This steps runs / can run on all years and final states.


Note: Rerunning the analysis now will lead to very small differences in the DY MC distribution, compared to what was originally obtained, because in the meantime the module in `Differential/ngenjet.cc`, used for the pTll reweighting, was fixed.


# Snowmass

For the Snowmass analysis, use the same shapes from above, including all fixes. Then run `doSnowmassLumi.sh`, which will simply run `Fix_SnowmassLumi.py` on all shapes. This scales all yields, such that for the combination of 2016, 2017 and 2018, they correspond to 3000 fb-1. (This is also done for data, though the data shouldn't be used anyway for this extrapolation study.)

To consider the Snowmass scenario, where some uncertainties are smaller, the hardcoded variable "YR18" in line 14 of `Fix_SnowmassLumi.py` must be set to True. Set it to False to not resize the uncertainties.

The names of the signal shape histograms, which are different for different width scenarios like "RelW002" or "SMWidth", must also be hardcoded in line 11 of `Fix_SnowmassLumi.py`.
