Intructions to produce plots with signal relative contributions in different categories, e.g. Figure 7 in HIG-16-042 paper.

First an input datacard is needed, you can take the following to get the same results as in HIG-16-042:

    cp /afs/cern.ch/user/l/lviliani/public/Full2017_ggH_HTXS_Stage1.txt .

Setup combine:

    cd PATH_TO_COMBINE_INSTALL; cmsenv; cd -;

Make the plot:
  
    python plotSignalFractionHTXS.py Full2017_ggH_HTXS_Stage1.txt

Make the confusion matrix, i.e. reco bins versus gen bins normalized by column (it is equivalent to the previous plot)

   python plotConfusionMatrixHTXS.py Full2017_ggH_HTXS_Stage1.txt

NB: The tdrstyle.py and CMS_lumi.py scripts are needed to get the CMS style plot.

NB2: To change the colors in the plot you can edit by hand the color palette in plotSignalFractionHTXS.py.
