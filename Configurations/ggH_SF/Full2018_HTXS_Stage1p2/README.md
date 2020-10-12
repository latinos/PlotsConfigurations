# Common tools for analysis:
  
    voms-proxy-init -voms cms -rfc --valid 168:0

## STEP 1 Produce distributions using mkShapesMulti.py in batch mode
  
    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

## STEP 2: Hadd files

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

## STEP 3: Produce distributions for data-driven DY estimation using mkShapesMulti.py in batch mode 

    mkShapesMulti.py --pycfg=configuration_DYEST.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch 

## STEP 4: Hadd DY-estimation files

    mkShapesMulti.py --pycfg=configuration_DYEST.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8   

## STEP 5: Call mkDYestim_data.py using doDY.py script

    python doDY.py

## STEP 5.1: Plot distributions

    mkPlot.py --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

Repeat, but with data-blind signal region. Put to 1 the 'isBlind' flag in plot.py and:

    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_ee_pth0_10              --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_ee_pth10_200            --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_ee_pth0_60              --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_ee_pth60_120            --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_ee_pth120_200           --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj0_350_pth0_60     --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj0_350_pth60_120   --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj0_350_pth120_200  --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj350_700_pthjj0_25 --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj350_700_pthjj25   --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj700_pthjj0_25     --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj700_pthjj25       --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_ee_pth200_300          --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_ee_pth300_450          --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_ee_pth450_650          --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_ee_pth650              --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_mm_pth0_10              --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_mm_pth10_200            --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_mm_pth0_60              --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_mm_pth60_120            --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_mm_pth120_200           --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj0_350_pth0_60     --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj0_350_pth60_120   --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj0_350_pth120_200  --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj350_700_pthjj0_25 --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj350_700_pthjj25   --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj700_pthjj0_25     --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj700_pthjj25       --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_mm_pth200_300          --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_mm_pth300_450          --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_mm_pth450_650          --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_mm_pth650              --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio 


## STEP 6: Create datacards

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root  --cardList=hww2l2v_13TeV_0j_ee_pth0_10,hww2l2v_13TeV_0j_mm_pth0_10,hww2l2v_13TeV_0j_ee_pth10_200,hww2l2v_13TeV_0j_mm_pth10_200,hww2l2v_13TeV_1j_ee_pth0_60,hww2l2v_13TeV_1j_mm_pth0_60,hww2l2v_13TeV_1j_ee_pth60_120,hww2l2v_13TeV_1j_mm_pth60_120,hww2l2v_13TeV_1j_ee_pth120_200,hww2l2v_13TeV_1j_mm_pth120_200,hww2l2v_13TeV_2j_ee_mjj0_350_pth0_60,hww2l2v_13TeV_2j_mm_mjj0_350_pth0_60,hww2l2v_13TeV_2j_ee_mjj0_350_pth60_120,hww2l2v_13TeV_2j_mm_mjj0_350_pth60_120,hww2l2v_13TeV_2j_ee_mjj0_350_pth120_200,hww2l2v_13TeV_2j_mm_mjj0_350_pth120_200,hww2l2v_13TeV_2j_ee_mjj350_700_pthjj0_25,hww2l2v_13TeV_2j_mm_mjj350_700_pthjj0_25,hww2l2v_13TeV_2j_ee_mjj350_700_pthjj25,hww2l2v_13TeV_2j_mm_mjj350_700_pthjj25,hww2l2v_13TeV_2j_ee_mjj700_pthjj0_25,hww2l2v_13TeV_2j_mm_mjj700_pthjj0_25,hww2l2v_13TeV_2j_ee_mjj700_pthjj25,hww2l2v_13TeV_2j_mm_mjj700_pthjj25,hww2l2v_13TeV_hpt_ee_pth200_300,hww2l2v_13TeV_hpt_mm_pth200_300,hww2l2v_13TeV_hpt_ee_pth300_450,hww2l2v_13TeV_hpt_mm_pth300_450,hww2l2v_13TeV_hpt_ee_pth450_650,hww2l2v_13TeV_hpt_mm_pth450_650,hww2l2v_13TeV_hpt_ee_pth650,hww2l2v_13TeV_hpt_mm_pth650,hww2l2v_13TeV_top_0j_ee,hww2l2v_13TeV_top_1j_ee,hww2l2v_13TeV_top_2j_ee,hww2l2v_13TeV_top_hpt_ee,hww2l2v_13TeV_top_0j_mm,hww2l2v_13TeV_top_1j_mm,hww2l2v_13TeV_top_2j_mm,hww2l2v_13TeV_top_hpt_mm,hww2l2v_13TeV_WW_0j_ee,hww2l2v_13TeV_WW_1j_ee,hww2l2v_13TeV_WW_2j_ee,hww2l2v_13TeV_WW_hpt_ee,hww2l2v_13TeV_WW_0j_mm,hww2l2v_13TeV_WW_1j_mm,hww2l2v_13TeV_WW_2j_mm,hww2l2v_13TeV_WW_hpt_mm

## STEP 7: Load combination CMSSW area
    
    cd ../../../../../../combine/CMSSW_10_2_13/src/ 
    cmsenv
    cd -

## STEP 8: Combine the datacards

    ./doCombination.sh > Combination/Full2018_SF_ggH_HTXS_Stage1p2.txt

## STEP 9: Transform the txt datacards into a workspace
    
    python doWorkspace.py

## STEP 10: Do the Fit

    python doFit.py

## STEP 11: Compute significance 
    
    python doSignificance.py

## STEP 12: Create yields table

   grep "proc" datacards/hww2l2v_13TeV_*/events/datacard.txt > yield.txt
   
   grep "rate " datacards/hww2l2v_13TeV_*/events/datacard.txt >> yield.txt
   
   :%!column -t #to organize the table


# OLD STUFF

#remember change the global path inside doDY.sh file. 
condor_submit doDY.jds
#mkDYestim_data.py --pycfg=configuration.py --dycfg=dyestim.py --inputFile=rootFile/plots_ggH2018v6_STXS.root


#STEP 4: Create datacards
mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_ggH2018v6_STXS_DYEstimDATA.root  --cardList=hww2l2v_13TeV_0j_ee_pth0_10,hww2l2v_13TeV_0j_mm_pth0_10,hww2l2v_13TeV_0j_ee_pth10_200,hww2l2v_13TeV_0j_mm_pth10_200,hww2l2v_13TeV_1j_ee_pth0_60,hww2l2v_13TeV_1j_mm_pth0_60,hww2l2v_13TeV_1j_ee_pth60_120,hww2l2v_13TeV_1j_mm_pth60_120,hww2l2v_13TeV_1j_ee_pth120_200,hww2l2v_13TeV_1j_mm_pth120_200,hww2l2v_13TeV_2j_ee_mjj0_350_pth0_60,hww2l2v_13TeV_2j_mm_mjj0_350_pth0_60,hww2l2v_13TeV_2j_ee_mjj0_350_pth60_120,hww2l2v_13TeV_2j_mm_mjj0_350_pth60_120,hww2l2v_13TeV_2j_ee_mjj0_350_pth120_200,hww2l2v_13TeV_2j_mm_mjj0_350_pth120_200,hww2l2v_13TeV_2j_ee_mjj350_700_pthjj0_25,hww2l2v_13TeV_2j_mm_mjj350_700_pthjj0_25,hww2l2v_13TeV_2j_ee_mjj350_700_pthjj25,hww2l2v_13TeV_2j_mm_mjj350_700_pthjj25,hww2l2v_13TeV_2j_ee_mjj700_pthjj0_25,hww2l2v_13TeV_2j_mm_mjj700_pthjj0_25,hww2l2v_13TeV_2j_ee_mjj700_pthjj25,hww2l2v_13TeV_2j_mm_mjj700_pthjj25,hww2l2v_13TeV_hpt_ee_pth200_300,hww2l2v_13TeV_hpt_mm_pth200_300,hww2l2v_13TeV_hpt_ee_pth300_450,hww2l2v_13TeV_hpt_mm_pth300_450,hww2l2v_13TeV_hpt_ee_pth450_650,hww2l2v_13TeV_hpt_mm_pth450_650,hww2l2v_13TeV_hpt_ee_pth650,hww2l2v_13TeV_hpt_mm_pth650,hww2l2v_13TeV_top_0j_ee,hww2l2v_13TeV_top_1j_ee,hww2l2v_13TeV_top_2j_ee,hww2l2v_13TeV_top_hpt_ee,hww2l2v_13TeV_top_0j_mm,hww2l2v_13TeV_top_1j_mm,hww2l2v_13TeV_top_2j_mm,hww2l2v_13TeV_top_hpt_mm,hww2l2v_13TeV_WW_0j_ee,hww2l2v_13TeV_WW_1j_ee,hww2l2v_13TeV_WW_2j_ee,hww2l2v_13TeV_WW_hpt_ee,hww2l2v_13TeV_WW_0j_mm,hww2l2v_13TeV_WW_1j_mm,hww2l2v_13TeV_WW_2j_mm,hww2l2v_13TeV_WW_hpt_mm

#STEP 5: Combining with script
./doCombination.sh > Combination/Full2018_SF_ggH_HTXS_Stage1p2.txt

#STEP 6: Load combination CMSSW area
cd ../../../../../../combine/CMSSW_10_2_13/src/ 
cmsenv
cd -


#STEP 7: Workspace
python doWorkspace.py

STEP 8: Fit
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


