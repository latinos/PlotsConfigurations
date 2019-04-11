Intructions to produce plots with signal relative contributions in different categories, e.g. Figure 7 in HIG-16-042 paper.

First an input datacard is needed, you can take the following to get the same results as in HIG-16-042:

    cp /afs/cern.ch/user/l/lviliani/public/Full2016.txt .

Setup combine:

    cd PATH_TO_COMBINE_INSTALL; cmsenv; cd -;

Make the plot:
  
    python multiSignalStrengthPlot.py Full2016.txt --plotFile=plot.py

NB: Signal names and categories are hardcoded in the script for now.

NB2: The tdrstyle.py and CMS_lumi.py scripts are needed to get the CMS style plot.

