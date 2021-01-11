# VH-2j analysis 2016

Configuration for the different-flavor VH-2j analysis using 2016 Data.

## Instructions to run the analysis

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs:

    cd $HOME/scripts/jobs/mkShapes__ggH_SF_2016_v7/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time have been exceeded, resubmit them on a longer-time queue:

    cd $HOME/scripts/jobs/mkShapes__ggH_SF_2016_v7/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Plot distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_VH2j_2016_v7.root --linearOnly --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1

Repeat, but with data-blind signal region:

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vh_em --inputFile=rootFile/plots_VH2j_2016_v7.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py --showIntegralLegend=1

### Create datacards

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_VH2j_2016_v7.root 

### Combine channels/categories

Create folder for the combined datacard:

    mkdir -p datacards/hww2l2v_13TeV_vh/mll

Load combine, needed from this point on:

    cd $HOME/work/combine/CMSSW_10_2_13/src/;cmsenv;cd -

Actual cards combination:

    combineCards.py datacards/hww2l2v_13TeV_2j_vh_em/mll/datacard.txt datacards/hww2l2v_13TeV_top_2j_vh_em/mll/datacard.txt datacards/hww2l2v_13TeV_dytt_2j_vh_em/mll/datacard.txt > datacards/hww2l2v_13TeV_vh/mll/datacard.txt

### Compute significance and best fit

    combine -M Significance --expectSignal=1 -t -1 datacards/hww2l2v_13TeV_vh/mll/datacard.txt -m 125 > datacards/hww2l2v_13TeV_vh/mll/significance.txt

    combine -M FitDiagnostics  --rMin=-5 --rMax=20 -t -1 --expectSignal=1 --robustFit=1 --cminDefaultMinimizerStrategy 0 datacards/hww2l2v_13TeV_vh/mll/datacard.txt -m 125 > datacards/hww2l2v_13TeV_vh/mll/best_fit.txt

### Significance and best fit results are stored in:

    grep Significance: datacards/hww2l2v_13TeV_vh/mll/significance.txt
    grep "fit r:" datacards/hww2l2v_13TeV_vh/mll/best_fit.txt

### Produce Impact Plots

Prepare directory:

    mkdir -p Impact_plots_VH2j

Source combine:

    cd $HOME/work/combine/CMSSW_10_2_13/src/
    cmsenv
    cd -

    ulimit -s unlimited

Impact plots:

    text2workspace.py datacards/hww2l2v_13TeV_vh/mll/datacard.txt -o datacards/hww2l2v_13TeV_vh/mll/datacard.root

    combineTool.py -M Impacts -d datacards/hww2l2v_13TeV_vh/mll/datacard.root -m 125 --doInitialFit -t -1 --expectSignal=1 --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 --rMin=-6 --rMax=10

    combineTool.py -M Impacts -d datacards/hww2l2v_13TeV_vh/mll/datacard.root -m 125 --doFits -t -1 --expectSignal=1 --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 --job-mode=interactive --parallel=10 --rMin=-6 --rMax=10

    combineTool.py -M Impacts -d datacards/hww2l2v_13TeV_vh/mll/datacard.root -m 125 -t -1 --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 -o datacards/hww2l2v_13TeV_vh/mll/impatcs.json
    
    plotImpacts.py -i datacards/hww2l2v_13TeV_vh/mll/impatcs.json -o Impact_plots_VH2j/impatcs

    rm higgsCombine_*

### Produce cumulative plots for the three years 2016 + 2017 + 2018

    mkPlot.py --inputFile rootFile/plots_VH2j_2016_v7.root                --nuisancesFile nuisances.py                --onlyVariable mll --onlyCut hww2l2v_13TeV_2j_vh_em --outputDirPlots plots_2016 --removeWeight --plotFile plot_blind.py

    mkPlot.py --inputFile ../Full2017_v7/rootFile/plots_VH2j_2017_v7.root --nuisancesFile ../Full2017_v7/nuisances.py --onlyVariable mll --onlyCut hww2l2v_13TeV_2j_vh_em --outputDirPlots plots_2017 --removeWeight --plotFile ../Full2017_v7/plot_blind.py

    mkPlot.py --inputFile ../Full2018_v7/rootFile/plots_VH2j_2018_v7.root --nuisancesFile ../Full2018_v7/nuisances.py --onlyVariable mll --onlyCut hww2l2v_13TeV_2j_vh_em --outputDirPlots plots_2018 --removeWeight --plotFile ../Full2018_v7/plot_blind.py


    mkCombinedPlot.py --pycfg=configuration.py  --inputCutsList=cuts_to_merge_VH2j.py \
                      --outputDirPlots=plots_VH2j_cumulative \
                      --variable=mll \
                      --minvariable=0           --maxvariable=200 \
                      --variableHR="m_{ll} [GeV]" \
                      --getVarFromFile=1  \
                      --divideByBinWidth \
		      --plotFile plot_blind_run2.py \
		      --yAxisTitle="Events"