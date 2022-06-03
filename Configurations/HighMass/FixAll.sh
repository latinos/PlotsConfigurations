# FixNegativeBins.py:
# Filters histograms not needed as input for datacard (like 1-bin "events" variable for signal region, or vice versa. Also nominal DYveto)
# Fixes negative entries in histograms. Most are fixed during mkShapesMulti, those that aren't are the manually constructed bbb nuisances.
# Gives proper, separable names to the manually constructed bbb nuisances (otherwise they'd all be correlated across categories)
# Renames the "DATA" process to "data_obs", which is the standard in CombineHarvester
python FixNegativeBins.py v7_Full2016/rootFile_Full2016_em/plots_Full2016_em.root > Fixoutput_16em.txt
python FixNegativeBins.py v7_Full2016/rootFile_Full2016_ee/plots_Full2016_ee.root > Fixoutput_16ee.txt
python FixNegativeBins.py v7_Full2016/rootFile_Full2016_mm/plots_Full2016_mm.root > Fixoutput_16mm.txt
python FixNegativeBins.py v7_Full2017/rootFile_Full2017_em/plots_Full2017_em.root > Fixoutput_17em.txt
python FixNegativeBins.py v7_Full2017/rootFile_Full2017_ee/plots_Full2017_ee.root > Fixoutput_17ee.txt
python FixNegativeBins.py v7_Full2017/rootFile_Full2017_mm/plots_Full2017_mm.root > Fixoutput_17mm.txt
python FixNegativeBins.py v7_Full2018/rootFile_Full2018_em/plots_Full2018_em.root > Fixoutput_18em.txt
python FixNegativeBins.py v7_Full2018/rootFile_Full2018_ee/plots_Full2018_ee.root > Fixoutput_18ee.txt
python FixNegativeBins.py v7_Full2018/rootFile_Full2018_mm/plots_Full2018_mm.root > Fixoutput_18mm.txt

# FixLowInterference.py:
# Adds contribution to the SBI shapes, such that there is no value of the signal strength modifier that causes the total S+B+I shapes to be negative (as a result of the estimated interference being sometimes more destructive as physically possible)
python FixLowInterference.py v7_Full2016/rootFile_Full2016_em/plots_Full2016_em.root > FixInt_16em.txt
python FixLowInterference.py v7_Full2016/rootFile_Full2016_ee/plots_Full2016_ee.root > FixInt_16ee.txt
python FixLowInterference.py v7_Full2016/rootFile_Full2016_mm/plots_Full2016_mm.root > FixInt_16mm.txt
python FixLowInterference.py v7_Full2017/rootFile_Full2017_em/plots_Full2017_em.root > FixInt_17em.txt
python FixLowInterference.py v7_Full2017/rootFile_Full2017_ee/plots_Full2017_ee.root > FixInt_17ee.txt
python FixLowInterference.py v7_Full2017/rootFile_Full2017_mm/plots_Full2017_mm.root > FixInt_17mm.txt
python FixLowInterference.py v7_Full2018/rootFile_Full2018_em/plots_Full2018_em.root > FixInt_18em.txt
python FixLowInterference.py v7_Full2018/rootFile_Full2018_ee/plots_Full2018_ee.root > FixInt_18ee.txt
python FixLowInterference.py v7_Full2018/rootFile_Full2018_mm/plots_Full2018_mm.root > FixInt_18mm.txt

# FixMergeBackgrounds.py:
# Merges processes into new combined processes (All SM processes that don't interfere, and all non-WW Multiboson processes, and DYemb with DYMC)
# Prints out where bins are empty
python FixMergeBackgrounds.py v7_Full2016/rootFile_Full2016_em/plots_Full2016_em.root > FixMerge_16em.txt
python FixMergeBackgrounds.py v7_Full2016/rootFile_Full2016_ee/plots_Full2016_ee.root > FixMerge_16ee.txt
python FixMergeBackgrounds.py v7_Full2016/rootFile_Full2016_mm/plots_Full2016_mm.root > FixMerge_16mm.txt
python FixMergeBackgrounds.py v7_Full2017/rootFile_Full2017_em/plots_Full2017_em.root > FixMerge_17em.txt
python FixMergeBackgrounds.py v7_Full2017/rootFile_Full2017_ee/plots_Full2017_ee.root > FixMerge_17ee.txt
python FixMergeBackgrounds.py v7_Full2017/rootFile_Full2017_mm/plots_Full2017_mm.root > FixMerge_17mm.txt
python FixMergeBackgrounds.py v7_Full2018/rootFile_Full2018_em/plots_Full2018_em.root > FixMerge_18em.txt
python FixMergeBackgrounds.py v7_Full2018/rootFile_Full2018_ee/plots_Full2018_ee.root > FixMerge_18ee.txt
python FixMergeBackgrounds.py v7_Full2018/rootFile_Full2018_mm/plots_Full2018_mm.root > FixMerge_18mm.txt

# FixSysNorms2.py:
# Extracts the normalizations of all uncorrelated nuisances of the processes that have their nominal normalization floating in the fit (Top/DY/WW)
python FixSysNorms2.py > FixSys2.txt

# FixSysNorms2_apply.py:
# Applied the normalization from the previous step, such that any normalization effects of the nuisances are absorbed
# Also decorrelates met_scale uncertainty across final states as a postfix
# Also renames DYc->DY from the previous step, can't do that then because of a bug
python FixSysNorms2_apply.py v7_Full2016/rootFile_Full2016_em/plots_Full2016_em.root > FixSys2_16em.txt
python FixSysNorms2_apply.py v7_Full2016/rootFile_Full2016_ee/plots_Full2016_ee.root > FixSys2_16ee.txt
python FixSysNorms2_apply.py v7_Full2016/rootFile_Full2016_mm/plots_Full2016_mm.root > FixSys2_16mm.txt
python FixSysNorms2_apply.py v7_Full2017/rootFile_Full2017_em/plots_Full2017_em.root > FixSys2_17em.txt
python FixSysNorms2_apply.py v7_Full2017/rootFile_Full2017_ee/plots_Full2017_ee.root > FixSys2_17ee.txt
python FixSysNorms2_apply.py v7_Full2017/rootFile_Full2017_mm/plots_Full2017_mm.root > FixSys2_17mm.txt
python FixSysNorms2_apply.py v7_Full2018/rootFile_Full2018_em/plots_Full2018_em.root > FixSys2_18em.txt
python FixSysNorms2_apply.py v7_Full2018/rootFile_Full2018_ee/plots_Full2018_ee.root > FixSys2_18ee.txt
python FixSysNorms2_apply.py v7_Full2018/rootFile_Full2018_mm/plots_Full2018_mm.root > FixSys2_18mm.txt

# FixSysNorms3.py:
# Do this step again, so it works with the previously decorrelated nuisances.
# Also: In this step it normalizes ALL Top/DY/WW nuisances, not just the ones exclusive to the processes.
python FixSysNorms3.py > FixSys3.txt

python FixSysNorms3_apply.py v7_Full2016/rootFile_Full2016_em/plots_Full2016_em.root > FixSys3_16em.txt
python FixSysNorms3_apply.py v7_Full2016/rootFile_Full2016_ee/plots_Full2016_ee.root > FixSys3_16ee.txt
python FixSysNorms3_apply.py v7_Full2016/rootFile_Full2016_mm/plots_Full2016_mm.root > FixSys3_16mm.txt
python FixSysNorms3_apply.py v7_Full2017/rootFile_Full2017_em/plots_Full2017_em.root > FixSys3_17em.txt
python FixSysNorms3_apply.py v7_Full2017/rootFile_Full2017_ee/plots_Full2017_ee.root > FixSys3_17ee.txt
python FixSysNorms3_apply.py v7_Full2017/rootFile_Full2017_mm/plots_Full2017_mm.root > FixSys3_17mm.txt
python FixSysNorms3_apply.py v7_Full2018/rootFile_Full2018_em/plots_Full2018_em.root > FixSys3_18em.txt
python FixSysNorms3_apply.py v7_Full2018/rootFile_Full2018_ee/plots_Full2018_ee.root > FixSys3_18ee.txt
python FixSysNorms3_apply.py v7_Full2018/rootFile_Full2018_mm/plots_Full2018_mm.root > FixSys3_18mm.txt

