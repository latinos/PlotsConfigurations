1. Make the Shapes, make sure the bool in Step6 is "False"!
2. hadd output
3. If em final state: Run "python scripts/mkDYvetoUnc.py configuration_em.py" to fix Embedding uncertainty
4. Run "python scripts/AddSBI.py configuration_em.py" to make SBI shapes from signal, SMH125 and WW background (for em, ee and mm)
5. Make plots with mkPlot.py
6. Redo stats to add correlated BinByBin stats. Switch the bool in nuisances.py to "True"!
7. Run "FixAll.sh" to fix negative bin due to interference (usually due to too large weights in few single events), and also to rename the correlated bin-by-bin uncertainties so they work with CombineHarvester, and also to skim the root file of all unneeded histograms (e.g. 1-bin histograms only needed in control regions)
