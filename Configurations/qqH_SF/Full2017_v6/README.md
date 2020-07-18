# Produce histograms

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

# Group (hadd) histograms

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

# Data-driven DY estimation

    mkDYestim_data.py --pycfg=configuration.py --dycfg=dyestim_qqH.py --inputFile=rootFile/plots_qqH2017_v6.root

# Make datacards

    mkDatacards.py \
        --pycfg=configuration.py \
        --inputFile=rootFile/plots_qqH2017_v6_DYEstimDATA.root \
        --cardList=hww2l2v_13TeV_2j_vbf_ee,hww2l2v_13TeV_WW_2j_vbf_ee,hww2l2v_13TeV_top_2j_vbf_ee,hww2l2v_13TeV_2j_vbf_mm,hww2l2v_13TeV_WW_2j_vbf_mm,hww2l2v_13TeV_top_2j_vbf_mm,hww2l2v_13TeV_2j_vh_ee,hww2l2v_13TeV_WW_2j_vh_ee,hww2l2v_13TeV_top_2j_vh_ee,hww2l2v_13TeV_2j_vh_mm,hww2l2v_13TeV_WW_2j_vh_mm,hww2l2v_13TeV_top_2j_vh_mm

# Combine channels/categories

    mkComb.py --pycfg=configuration.py --combineLocation=$HOME/combine/CMSSW_10_2_13/src/ --combcfg=comb_qqH.py

# Significance and best fit

    mkOptim.py --pycfg=configuration.py --combineLocation=$HOME/combine/CMSSW_10_2_13/src/ --combcfg=comb_qqH.py --fomList=SExpPre,BestFit

Alternative way.

    pushd $HOME/combine/CMSSW_10_2_13/src/
    cmsenv
    popd

    combine datacards/hww2l2v_13TeV_VH/comb/datacard.txt -M Significance   --rMin=-6 --rMax=20 -t -1 --expectSignal=1
    combine datacards/hww2l2v_13TeV_VH/comb/datacard.txt -M FitDiagnostics --rMin=-6 --rMax=20 -t -1 --expectSignal=1 --robustFit=1 --cminDefaultMinimizerStrategy 0

Check the significance value and best fit.

    grep "Significance:" datacards/*/comb/SExpPre_*
    grep "fit r:"        datacards/*/comb/BestFit_*

# Make yield tables

    grep "proc"  datacards/hww2l2v_13TeV_*/events/datacard.txt > yield.txt
    grep "rate " datacards/hww2l2v_13TeV_*/events/datacard.txt >> yield.txt
    :%!column -t #to organize the table

# Draw distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_qqH2017_v6.root --logOnly    --fileFormats=png --onlyPlot=cratio --minLogCratio=0.1 --maxLogCratio=1000
    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_qqH2017_v6.root --linearOnly --fileFormats=png --onlyPlot=cratio

# Make impacts

    text2workspace.py datacard.txt -o workspace.root

    combineTool.py -M Impacts -d workspace_0j.root -m 125 --doInitialFit -t -1 --expectSignal=1 --robustFit=1
    combineTool.py -M Impacts -d workspace_0j.root -m 125 -t -1 --expectSignal=1 --robustFit=1 --doFits
    combineTool.py -M Impacts -d workspace_0j.root -m 125 -o impacts_0j.json -t -1
    plotImpacts.py -i impacts_0j.json -o Impact_0j

