# LUXE-NPOD Dumper

Configuration to simply dump MC distributions from LUXE-NPOD experiment. Currently, working on background samples only.

The instructions to produce the plots follow.

### Produce distributions using mkShapes.py in batch mode

    mkShapes.py --pycfg=configuration.py --doBatch=1 --batchQueue=testmatch --batchSplit=AsMuchAsPossible

Resubmit failed jobs.

    cd $HOME/scripts/jobs/mkShapes__WHSS2018_v7_chargeAsymmetry/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time has been exceeded, resubmit them on a longer-time queue.

    cd $HOME/scripts/jobs/mkShapes__WHSS2018_v7_chargeAsymmetry/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapes.py --pycfg=configuration.py --doHadd=1 --batchSplit=AsMuchAsPossible --doNotCleanup --nThreads=8 

### Plot distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_Luxe.root --fileFormats=png --onlyPlot=c

### Copy the plots on the web

General instructions:

    mkdir -p /etpwww/web/<your_login_name>/public_html/<your_web_directory>/

    cp -r plots_Luxe  /etpwww/web/<your_login_name>/public_html/<your_web_directory>/

    python gallery.py /etpwww/web/<your_login_name>/public_html/<your_web_directory>/plots_Luxe/

One specific example:

    mkdir -p /etpwww/web/ntrevisa/public_html/2022_05_16/

    cp -r plots_Luxe  /etpwww/web/ntrevisa/public_html/2022_05_16/

    python gallery.py /etpwww/web/ntrevisa/public_html/2022_05_16/plots_Luxe/

Plots will be visible at:

    https://etpwww.etp.kit.edu/~<your_login_name>/<your_web_directory>/plots_Luxe/       

In our example case:

    https://etpwww.etp.kit.edu/~ntrevisa/2022_04_05/plots_Luxe/
    

At KIT, you can find the gallery.py file at:

    /work/ntrevisa/utils/gallery.py
