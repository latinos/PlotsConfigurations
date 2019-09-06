Steps involved
==============

- Create histograms with mkShapes.
- Merge the histograms into per-sample ROOT files.
- Preprocess the histograms for each differential observable.
  - Drop unused signal histograms (binned in different observables)
  - Merge categories
  - Create reduced-binning histograms
  - Merge processes and create new variation histograms accordingly
  - Renormalize signal uncertainties
- Make the per-category datacards with mkDatacard.
- Merge the datacards.
- Run various fits.

Creating histograms
===================

Because of the fine categorization + signal splitting, histogram files returned by mkShapes can be large (O(100) MB for signal samples). To not overflow your working directory, a good idea would be to create a symlink to an EOS directory with name `rootFile` under your configuration directory.

If some jobs fail, `tools/resubmit.py` can automatically find them and resubmit to condor. mkShapesMulti or batchTools should have similar features. Whatever works works.

Merging histograms
==================

Instead of `mkShapesMulti.py --doHadd=1`, use `tools/submit_merge_plots.py`. Because of the extreme number of histograms in the output root files, merging can be time consuming. This script submits a merge job (`tools/merge_plots.sh`) per sample. There is no need to merge the output files further; for one thing there is no space gain when merging two files containing entirely different set of histograms (as is the case when merging per-sample ROOT files). mkPlot.py and mkDatacard.py will work with one ROOT file per sample (we won't be using mkDatacard directly on these files though).

Because one ROOT file will be created per sample but the rest of the workflow (`restructure_input.py`, `mkDatacards.py`, and `mkPlot.py` if used) expects one file per *subsample*, you need to create symlinks representing subsamples in the `rootFile_merged` directory. The script `tools/mklinks.sh` takes care of this automatically.

Preprocessing
=============

From a configuration directory (in this example `ggH2018`), do
```
year=2018
obs=njet
card_tag=fullmodel

mkdir shapes

../tools/restructure_input.py --tag ggHDifferential${year} --signal-hww-only --signal-no-fiducial --input-fake-flavored --background-minor-merge --aslnn-category-pool -j 8 rootFile_merged shapes/plots_${obs}_${card_tag}.root $obs
```

This `restructure_input.py` is the most critical and most convoluted part of the differential analysis configuration. It sets up the sample and category merging schemes and executes merging, propagating systematic variations of individual samples / categories into the merged products. The script is mostly self-contained. The only external dependency is to the signal renormalization factor files, which are generated with `tools/renormalize_theoretical.py` for each year separately.

Making datacards
================

Standard `mkDatacard.py` is used, but with the output of preprocessing (`shapes/plots_${obs}_${card_tag}.root`) and the special structure file in `tools`. From a configuration directory, do
```
mkdir unmerged_cards

mkDatacards.py --outputDirDatacard=unmerged_cards/${obs}_${card_tag} --inputFile=shapes/plots_${obs}_${card_tag}.root --structureFile=../tools/structure_${obs}.py
```

Then switch to a `combine` environment (i.e. do `cmsenv` in the Combine-installed CMSSW workspace) and combine the cards from different categories with
```
obs=njet
card_tag=fullmodel

mkdir merged_cards

../tools/fitting/combine_cards.py --in unmerged_cards/${obs}_${card_tag} --out merged_cards/${obs}_${card_tag} --only-fullmodel > combine_cards_${obs}_${card_tag}.log
```

The workspace root file will be saved at `merged_cards/${obs}_${card_tag}/fullmodel.root`.

Running the fits
================

Script `tools/fitting/dofit.sh` has the commands for various fit-related tasks.

Creating the full combination workspace
=======================================

Constraint term is currently not supported by combineCards.py. Use the unregularized data cards and add the constraint term later:
```
cd combination
mkdir ${obs}_${card_tag}

combineCards.py hww2016=$PWD/../ggH2016/merged_cards/${obs}_${card_tag}/fullmodel_unreg.txt hww2017=$PWD/../ggH2017/merged_cards/${obs}_${card_tag}/fullmodel_unreg.txt hww2018=$PWD/../ggH2018/merged_cards/${obs}_${card_tag}/fullmodel_unreg.txt > ${obs}_${card_tag}/fullmodel.txt
sed -i 's/kmax [0-9]*/kmax */' ${obs}_${card_tag}/fullmodel.txt 
grep ' constr ' ../ggH2016/merged_cards/${obs}_${card_tag}/fullmodel.txt >> ${obs}_${card_tag}/fullmodel.txt

cd ${obs}_${card_tag}
if [ $obs = ptH ]
then
  # Make sure you are using the actual binning in the datacard!!
  text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO map=.*/.*H_hww_PTH_0_20:r_0[1.,-10.,10.] --PO map=.*/.*H_hww_PTH_20_45:r_1[1.,-10.,10.] --PO map=.*/.*H_hww_PTH_45_80:r_2[1.,-10.,10.] --PO map=.*/.*H_hww_PTH_80_120:r_3[1.,-10.,10.] --PO map=.*/.*H_hww_PTH_120_200:r_4[1.,-10.,10.] --PO map=.*/.*H_hww_PTH_GT200:r_5[1.,-10.,10.] fullmodel.txt -o fullmodel.root
elif [ $obs = njet ]
then
  text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO map=.*/.*H_hww_NJ_0:r_0[1.,-10.,10.] --PO map=.*/.*H_hww_NJ_1:r_1[1.,-10.,10.] --PO map=.*/.*H_hww_NJ_2:r_2[1.,-10.,10.] --PO map=.*/.*H_hww_NJ_3:r_3[1.,-10.,10.] --PO map=.*/.*H_hww_NJ_GE4:r_4[1.,-10.,10.] fullmodel.txt -o fullmodel.root
fi
```

Making plots
============

Directory `tools/plotting` contains scripts for plotting:

- `dyreweight.py`: Draw the rather-obscure DY reweighting function.
- `selectionvars.py`: Draw the distributions of variables used for event selection. Used with `selectionvars` configuration subdirectory for Figure 3 of AN-2019/006.
- `responsematrix.py`: Draw the signal response matrix.
- `binyields.py`: (Not used) Draw and print the prefit yields of signal and background in all CR and SR bins.
- `plot_delta_scan.py`: Take the output of DeltaScan in dofit.sh and plot the mean of the global correlation coefficients as a function of the regularization strength delta.
- `diffNuisances_mlfit.py`: Do what the standard diffNuisances script does for MultiDimFit output.
- `plot_mu.py`: Take the regularized and unregularized fit outputs and plot the mu values.
- `plot_correlation_matrix.py`: Take a fit result and plot the signal strength correlation matrix.
- `plot_sigma.py`: Make the "money plot".
