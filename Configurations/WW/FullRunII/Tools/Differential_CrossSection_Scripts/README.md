# Plot differential cross section plots using the signal strengths from COMBINE output

For eg you have the WW fiducial cross sections in Njets, in text file `WW_NJETS.txt`.

Then, the script `makeWWNtuple.C` reads it, and produces ROOT file `xs_WWNJETS.root`. 

And finally, plots are made with `makeww_plots.sh` which runs `finalPlotWWUnfolding.C`.
