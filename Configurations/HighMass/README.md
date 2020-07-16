1. Make the Shapes, make sure the bool in Step5 is "False"!

    mkShapesMulti.py --pycfg=configuration_em.py --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6 --batchSplit=AsMuchAsPossible --doBatch=True --batchQueue=workday

2. hadd output

    mkShapesMulti.py --pycfg=configuration_em.py --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6 --batchSplit=AsMuchAsPossible --doHadd=True --doNotCleanup --nThreads=16

3. If em final state: Run "python scripts/mkDYvetoUnc.py configuration_em.py" to fix Embedding uncertainty
4. Make plots with mkPlot.py
5. Redo stats to add correlated BinByBin stats. Switch the bool in nuisances.py to "True"! This step may take longer than a full day!

    mkShapesMulti.py --pycfg=configuration_em.py --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv6_Full2018v6/MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6 --batchSplit=AsMuchAsPossible --redoStat=True

6. Run "FixAll.sh" to skim the root file of all unneeded histograms (e.g. 1-bin histograms only needed in control regions), and also to rename the correlated bin-by-bin uncertainties so they work with CombineHarvester. This steps runs / can run on all years and final states.
