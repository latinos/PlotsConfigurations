Module to compute private SF:

This requires two steps:

    1) generation of plots to be used for SF derivation
    2) computation of the scale factor .csv tables


Step 1)
It consists of a run of mkShape with an appropriate selection. The selection is defines in 

    cuts.py.

It consists of two control region, one for top and one for Z.
Each control region is done in different bins of the pt and eta of the jet to be used for the SF evaluation (which is the second one in ttbar and the first one in Z)
The bins are defined in the file 

    bins.py

. The algorithms and working points for which SF are to be computed are in the file

    wps.py

This step can be run with the script

    ./doit.sh

    
    
Step 2) 
Running

    python computeBPogSF.py rootFile/plots_BpogSF.root 

will produce .csv tables for each algorithm. These tables are to be placed in

    LatinoAnalysis/Gardener/python/data/CSVv2_ICHEP2016.csv for CSV
    LatinoAnalysis/Gardener/python/data/cMVAv2_ICHEP2016.csv for CMVA

Bear in mind that with the current statistics the SF for the tight WP (and in some case for the medium) have very large errors and cannot be trusted very much. Only the ones for the loose WP have been checked
