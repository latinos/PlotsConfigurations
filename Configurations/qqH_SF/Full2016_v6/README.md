The following instructions correspond to the VBF and VH SF HWW analysis.

# Produce a valid VOMS proxy

    voms-proxy-init -voms cms -rfc --valid 168:0
    
# Produce histograms

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

# Group (hadd) histograms

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

# Data-driven DY estimation

    mkShapesMulti.py --pycfg=configuration_DYEST090.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch
    mkShapesMulti.py --pycfg=configuration_DYEST090.py --doHadd=1  --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    mkShapesMulti.py --pycfg=configuration_DYEST080.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch 
    mkShapesMulti.py --pycfg=configuration_DYEST080.py --doHadd=1  --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    mkDYestim_data.py --pycfg=configuration.py --dycfg=dyestim_qqH.py --inputFile=rootFile/plots_qqH2016_v6.root

# Plot distributions

Before data-driven DY corrections:

    mkPlot.py --inputFile=rootFile/plots_qqH2016_v6.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_qqH2016_v6_noDY

Repeat, but with data-blind signal region. Put to 1 the 'isBlind' flag in plot.py and:

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vh_ee  --inputFile=rootFile/plots_qqH2016_v6.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_qqH2016_v6_noDY
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vbf_ee --inputFile=rootFile/plots_qqH2016_v6.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_qqH2016_v6_noDY

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vh_mm  --inputFile=rootFile/plots_qqH2016_v6.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_qqH2016_v6_noDY
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vbf_mm --inputFile=rootFile/plots_qqH2016_v6.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_qqH2016_v6_noDY

With data-driven DY corrections:

    mkPlot.py --inputFile=rootFile/plots_qqH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_qqH2016_v6

Repeat, but with data-blind signal region. Put to 1 the 'isBlind' flag in plot.py and:

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vh_ee  --inputFile=rootFile/plots_qqH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_qqH2016_v6
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vbf_ee --inputFile=rootFile/plots_qqH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_qqH2016_v6

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vh_mm  --inputFile=rootFile/plots_qqH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_qqH2016_v6
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vbf_mm --inputFile=rootFile/plots_qqH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_qqH2016_v6

# Make datacards

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_qqH2016_v6_DYEstimDATA.root --cardList=hww2l2v_13TeV_2j_vbf_ee,hww2l2v_13TeV_2j_vbf_mm,hww2l2v_13TeV_2j_vh_ee,hww2l2v_13TeV_2j_vh_mm,hww2l2v_13TeV_WW_2j_vbf_ee,hww2l2v_13TeV_WW_2j_vbf_mm,hww2l2v_13TeV_WW_2j_vh_ee,hww2l2v_13TeV_WW_2j_vh_mm,hww2l2v_13TeV_top_2j_vbf_ee,hww2l2v_13TeV_top_2j_vbf_mm,hww2l2v_13TeV_top_2j_vh_ee,hww2l2v_13TeV_top_2j_vh_mm

# Combine channels/categories

    mkComb.py --pycfg=configuration.py --combineLocation=$HOME/work/combine/CMSSW_10_2_13/src/ --combcfg=comb_qqH.py
    ./dropNuisance.sh

# Significance and best fit

    mkOptim.py --pycfg=configuration.py --combineLocation=$HOME/work/combine/CMSSW_10_2_13/src/ --combcfg=comb_qqH.py --fomList=SExpPre,BestFit

# Check the significance and best fit values.

    grep "Significance:" datacards/*/comb/SExpPre_*
    grep "Best fit r:"   datacards/*/comb/BestFit_*

# Make yield tables

    grep "proc"  datacards/hww2l2v_13TeV_*/events/datacard.txt > yield.txt
    grep "rate " datacards/hww2l2v_13TeV_*/events/datacard.txt >> yield.txt
    column -t yield.txt > yield_organized.txt

# Draw distributions

    mkPlot.py --inputFile=rootFile/plots_qqH2017_v6_DYEstimDATA.root --logOnly    --fileFormats=png --onlyPlot=cratio --minLogCratio=0.1 --maxLogCratio=1000
    mkPlot.py --inputFile=rootFile/plots_qqH2017_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

To produce blinded distributions (no data) open `plot.py` and set the variable `isBlind` to 1 for `DATA`. Then you will have to produce again the signal region plots.

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vh_ee  --inputFile=rootFile/plots_qqH2017_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vh_mm  --inputFile=rootFile/plots_qqH2017_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vbf_ee --inputFile=rootFile/plots_qqH2017_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vbf_mm --inputFile=rootFile/plots_qqH2017_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

# Make impacts

    text2workspace.py datacard.txt -o workspace.root

    combineTool.py -M Impacts -d workspace_0j.root -m 125 --doInitialFit -t -1 --expectSignal=1 --robustFit=1
    combineTool.py -M Impacts -d workspace_0j.root -m 125 -t -1 --expectSignal=1 --robustFit=1 --doFits
    combineTool.py -M Impacts -d workspace_0j.root -m 125 -o impacts_0j.json -t -1
    plotImpacts.py -i impacts_0j.json -o Impact_0j

