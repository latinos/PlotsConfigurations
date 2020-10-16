# Common tools for analysis:

    voms-proxy-init -voms cms -rfc --valid 168:0

# Submit shapesmulti in batch

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

# Hadd files

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

# DY estimate from data-driven

    mkShapesMulti.py --pycfg=configuration_DYEST090.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch
    mkShapesMulti.py --pycfg=configuration_DYEST090.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    mkShapesMulti.py --pycfg=configuration_DYEST080.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch 
    mkShapesMulti.py --pycfg=configuration_DYEST080.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    mkDYestim_data.py --pycfg=configuration.py --dycfg=dyestim_ggH_DATA.py --inputFile=rootFile/plots_ggH2016_v6.root

# Plot distributions

Before data-driven DY corrections:

    mkPlot.py --inputFile=rootFile/plots_ggH2016_v6.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_ggH2016_v6_noDY

Repeat, but with data-blind signal region. Put to 1 the 'isBlind' flag in plot.py and:

    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_ee --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_ggH2016_v6_noDY
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_ee --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_ggH2016_v6_noDY
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_ggH2016_v6_noDY

    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_mm --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_ggH2016_v6_noDY
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_mm --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_ggH2016_v6_noDY
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_ggH2016_v6_noDY

With corrections:

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

Repeat, but with data-blind signal region. Put to 1 the 'isBlind' flag in plot.py and:

    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_ee --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_ee --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_mm --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_mm --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio




# Create datacards

mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --cardList=hww2l2v_13TeV_0j_ee,hww2l2v_13TeV_WW_0j_ee,hww2l2v_13TeV_top_0j_ee,hww2l2v_13TeV_0j_mm,hww2l2v_13TeV_WW_0j_mm,hww2l2v_13TeV_top_0j_mm,hww2l2v_13TeV_1j_ee,hww2l2v_13TeV_WW_1j_ee,hww2l2v_13TeV_top_1j_ee,hww2l2v_13TeV_1j_mm,hww2l2v_13TeV_WW_1j_mm,hww2l2v_13TeV_top_1j_mm,hww2l2v_13TeV_2j_ee,hww2l2v_13TeV_WW_2j_ee,hww2l2v_13TeV_top_2j_ee,hww2l2v_13TeV_2j_mm,hww2l2v_13TeV_WW_2j_mm,hww2l2v_13TeV_top_2j_mm

mkDatacards.py --pycfg=configuration_merged.py --inputFile=rootFile/plots_ggH2016_v6_DYEstimDATA.root --cardList=hww2l2v_13TeV_0j_ee,hww2l2v_13TeV_WW_0j_ee,hww2l2v_13TeV_top_0j_ee,hww2l2v_13TeV_0j_mm,hww2l2v_13TeV_WW_0j_mm,hww2l2v_13TeV_top_0j_mm,hww2l2v_13TeV_1j_ee,hww2l2v_13TeV_WW_1j_ee,hww2l2v_13TeV_top_1j_ee,hww2l2v_13TeV_1j_mm,hww2l2v_13TeV_WW_1j_mm,hww2l2v_13TeV_top_1j_mm,hww2l2v_13TeV_2j_ee,hww2l2v_13TeV_WW_2j_ee,hww2l2v_13TeV_top_2j_ee,hww2l2v_13TeV_2j_mm,hww2l2v_13TeV_WW_2j_mm,hww2l2v_13TeV_top_2j_mm

#STEP 6: Combine channels/categories
mkComb.py --pycfg=configuration.py --combineLocation=/afs/cern.ch/work/c/calderon/private/combine/CMSSW_10_2_13/src/ --combcfg=comb_ggH.py

#STEP 7: Significance and best fit
#mkOptim (calculate the significance)
mkOptim.py --pycfg=configuration.py --combineLocation=/afs/cern.ch/work/c/calderon/private/combine/CMSSW_10_2_13/src/ --combcfg=comb_ggH.py --fomList=SExpPre,BestFit

#or cd ../../../../../../combine/CMSSW_10_2_13/src/ 
#cmsenv
#cd -

combine datacard.txt -M Significance --expectSignal=1 -t -1
combine datacard.txt -M FitDiagnostics  --rMin=-6 --rMax=20 -t -1 --expectSignal=1 --robustFit=1 --cminDefaultMinimizerStrategy 0

#TO check the significance value and best fit 
grep Significance: datacards/*/comb/SExpPre_*
grep "fit r:" datacards/*/comb/BestFit_*

#Create yield table
grep "proc" datacards/hww2l2v_13TeV_*/events/datacard.txt > yield.txt
grep "rate " datacards/hww2l2v_13TeV_*/events/datacard.txt >> yield.txt
:%!column -t #to organize the table

STEP 8: Plot
mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_ggH2016_v6.root --minLogCratio=0.1 --maxLogCratio=1000 --logOnly --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1

mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_ggH2016_v6.root --linearOnly --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1

#Make impacts

text2workspace.py datacards/hww2l2v_13TeV_ggH/comb/datacard.txt  -o hww2l2v_13TeV_ggH.root 
combineTool.py -M Impacts -d hww2l2v_13TeV_ggH.root -m 125 --doInitialFit -t -1 --expectSignal=1 --robustFit=1
combineTool.py -M Impacts -d hww2l2v_13TeV_ggH.root -m 125 -t -1 --expectSignal=1 --robustFit=1 --doFits
combineTool.py -M Impacts -d hww2l2v_13TeV_ggH.root -m 125 -o impacts_0j.json -t -1
plotImpacts.py -i impacts.json -o Impact.pdf


