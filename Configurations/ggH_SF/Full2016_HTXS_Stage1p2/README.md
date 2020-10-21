# Common tools for analysis:

    voms-proxy-init -voms cms -rfc --valid 168:0

# Submit shapesmulti in batch

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

# Hadd files

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

# Performing data-driven DY estimation

    mkShapesMulti.py --pycfg=configuration_DYEST080.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch 
    mkShapesMulti.py --pycfg=configuration_DYEST080.py --doHadd=1  --batchSplit=Samples,Files --doNotCleanup --nThreads=8   

    mkShapesMulti.py --pycfg=configuration_DYEST090.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch 
    mkShapesMulti.py --pycfg=configuration_DYEST090.py --doHadd=1  --batchSplit=Samples,Files --doNotCleanup --nThreads=8   

Put together

    mkDYestim_data.py --pycfg=configuration.py --dycfg=dyestim.py --inputFile=rootFile/plots_STXS_ggH_SF_2016.root

Or, by using condor:

    python doDY.py --pycfg=configuration.py --dycfg=dyestim.py --inputFile=rootFile/plots_STXS_ggH_SF_2016.root

# Plot distributions

    mkPlot.py --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

Repeat, but with data-blind signal region. Put to 1 the 'isBlind' flag in plot.py and:

    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_ee_pth0_10              --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_ee_pth10_200            --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_ee_pth0_60              --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_ee_pth60_120            --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_ee_pth120_200           --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj0_350_pth0_60     --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj0_350_pth60_120   --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj0_350_pth120_200  --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj350_700_pthjj0_25 --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj350_700_pthjj25   --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj700_pthjj0_25     --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj700_pthjj25       --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_ee_pth200_300          --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_ee_pth300_450          --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_ee_pth450_650          --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_ee_pth650              --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_mm_pth0_10              --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_mm_pth10_200            --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_mm_pth0_60              --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_mm_pth60_120            --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_mm_pth120_200           --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj0_350_pth0_60     --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj0_350_pth60_120   --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj0_350_pth120_200  --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj350_700_pthjj0_25 --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj350_700_pthjj25   --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj700_pthjj0_25     --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj700_pthjj25       --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_mm_pth200_300          --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_mm_pth300_450          --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_mm_pth450_650          --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_mm_pth650              --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

# Create datacards

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_STXS_ggH_SF_2016_DYEstimDATA.root  --cardList=hww2l2v_13TeV_0j_ee_pth0_10,hww2l2v_13TeV_0j_mm_pth0_10,hww2l2v_13TeV_0j_ee_pth10_200,hww2l2v_13TeV_0j_mm_pth10_200,hww2l2v_13TeV_1j_ee_pth0_60,hww2l2v_13TeV_1j_mm_pth0_60,hww2l2v_13TeV_1j_ee_pth60_120,hww2l2v_13TeV_1j_mm_pth60_120,hww2l2v_13TeV_1j_ee_pth120_200,hww2l2v_13TeV_1j_mm_pth120_200,hww2l2v_13TeV_2j_ee_mjj0_350_pth0_60,hww2l2v_13TeV_2j_mm_mjj0_350_pth0_60,hww2l2v_13TeV_2j_ee_mjj0_350_pth60_120,hww2l2v_13TeV_2j_mm_mjj0_350_pth60_120,hww2l2v_13TeV_2j_ee_mjj0_350_pth120_200,hww2l2v_13TeV_2j_mm_mjj0_350_pth120_200,hww2l2v_13TeV_2j_ee_mjj350_700_pthjj0_25,hww2l2v_13TeV_2j_mm_mjj350_700_pthjj0_25,hww2l2v_13TeV_2j_ee_mjj350_700_pthjj25,hww2l2v_13TeV_2j_mm_mjj350_700_pthjj25,hww2l2v_13TeV_2j_ee_mjj700_pthjj0_25,hww2l2v_13TeV_2j_mm_mjj700_pthjj0_25,hww2l2v_13TeV_2j_ee_mjj700_pthjj25,hww2l2v_13TeV_2j_mm_mjj700_pthjj25,hww2l2v_13TeV_hpt_ee_pth200_300,hww2l2v_13TeV_hpt_mm_pth200_300,hww2l2v_13TeV_hpt_ee_pth300_450,hww2l2v_13TeV_hpt_mm_pth300_450,hww2l2v_13TeV_hpt_ee_pth450_650,hww2l2v_13TeV_hpt_mm_pth450_650,hww2l2v_13TeV_hpt_ee_pth650,hww2l2v_13TeV_hpt_mm_pth650,hww2l2v_13TeV_top_0j_ee,hww2l2v_13TeV_top_1j_ee,hww2l2v_13TeV_top_2j_ee,hww2l2v_13TeV_top_hpt_ee,hww2l2v_13TeV_top_0j_mm,hww2l2v_13TeV_top_1j_mm,hww2l2v_13TeV_top_2j_mm,hww2l2v_13TeV_top_hpt_mm,hww2l2v_13TeV_WW_0j_ee,hww2l2v_13TeV_WW_1j_ee,hww2l2v_13TeV_WW_2j_ee,hww2l2v_13TeV_WW_hpt_ee,hww2l2v_13TeV_WW_0j_mm,hww2l2v_13TeV_WW_1j_mm,hww2l2v_13TeV_WW_2j_mm,hww2l2v_13TeV_WW_hpt_mm

# Combine datacards with script:

    ./doCombination.sh > Combination/Full2016_SF_ggH_HTXS_Stage1p2.txt

# Prepare the workspace

    python doWorkspace.py

# Do the Fit

    python doFit.py

STEP 9: Significance 
python doSignificance.py

#Create yield table
grep "proc" datacards/hww2l2v_13TeV_2016_*/events/datacard.txt > yield.txt
grep "rate " datacards/hww2l2v_13TeV_2016_*/events/datacard.txt >> yield.txt
:%!column -t #to organize the table

#Plotting
mkPlot.py --pycfg=configuration --inputFile=rootFile/plots_ --minLogCratio=0.1 --maxLogCratio=1000 --logOnly --fileFormats=png --onlyPlot=cratio
mkPlot.py --pycfg=configuration --inputFile=rootFile/plots_ --linearOnly --fileFormats=png --onlyPlot=cratio


# Combine channels/categories

    mkComb.py --pycfg=configuration.py --combineLocation=$HOME/work/combine/CMSSW_10_2_13/src/ --combcfg=comb_ggH.py

# Significance and best fit

    mkOptim.py --pycfg=configuration.py --combineLocation=$HOME/work/combine/CMSSW_10_2_13/src/ --combcfg=comb_ggH.py --fomList=SExpPre,BestFit

Or:

    combine datacard.txt -M Significance --expectSignal=1 -t -1
    combine datacard.txt -M FitDiagnostics  --rMin=-6 --rMax=20 -t -1 --expectSignal=1 --robustFit=1 --cminDefaultMinimizerStrategy 0

# Significane and best fit results are stored in:

    grep Significance: datacards/*/comb/SExpPre_*
    grep "fit r:" datacards/*/comb/BestFit_*

# Create yield table

    grep "proc" datacards/hww2l2v_13TeV_*/events/datacard.txt > yield.txt
    grep "rate " datacards/hww2l2v_13TeV_*/events/datacard.txt >> yield.txt
    column -t yield.txt > yield_organized.txt

# Produce impact plots

    text2workspace.py datacards/hww2l2v_13TeV_ggH/comb/datacard.txt  -o hww2l2v_13TeV_ggH.root 

    combineTool.py -M Impacts -d hww2l2v_13TeV_ggH.root -m 125 --doInitialFit -t -1 --expectSignal=1 --robustFit=1
    combineTool.py -M Impacts -d hww2l2v_13TeV_ggH.root -m 125 -t -1 --expectSignal=1 --robustFit=1 --doFits
    combineTool.py -M Impacts -d hww2l2v_13TeV_ggH.root -m 125 -o impacts_0j.json -t -1
    plotImpacts.py -i impacts.json -o Impact.pdf





