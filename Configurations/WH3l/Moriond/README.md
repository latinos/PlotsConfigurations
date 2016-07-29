There are three directories with similar files inside.

1. forLimit : It makes the signal datacards and final shapes.
2. ControlRegion : It makes the datacards for Zg and WZ control regions.
3. forPlot : This is just to make plots.

The commands given here will be such that, one can produce datacards for signal region (OSSF,SSSF & inclusive) and for Control Region (WZ and Zg).

1. Producing the datacards for Signal phase space:

cd PlotsConfigurations/Configurations/WH3l/2015/forLimit

mkShapes.py --pycfg=configuration.py --inputDir=/tmp/arun/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__vh3lSel__l3kin/

mkDatacards.py --pycfg=configuration.py --inputFile=rootFiles_WH_Signal/plots_WH3l.root

mkPlot.py --pycfg=configuration.py --inputFile=rootFiles_WH_Signal/plots_WH3l.root

SSSF datacard needs to be pruned for stat uncertainties because it gives problem.

2. Producing the datacards for Background Control Regions (WZ and Zg):

cd PlotsConfigurations/Configurations/WH3l/2015/ControlRegion

mkShapes.py --pycfg=configuration.py --inputDir=/tmp/arun/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__vh3lSel__l3kin/

mkDatacards.py --pycfg=configuration.py --inputFile=rootFiles_CR/plots_WH3l.root

mkPlot.py --pycfg=configuration.py --inputFile=rootFiles_CR/plots_WH3l.root

One thing here is : For some nuisances, some of samples in one of the phase spaces can give problems. So, either that nuisance has to be pruned out so remove that sample from that control region. Right now this setup include every sample for every nuisance.
e.g. For Zg CR, VVV sample was giving problem in bTag nuisance. So, I removed that sample while making Zg datacard.
Also Zg datacard needs to be pruned for stat uncertainties.

With these instructions, one can get the shapes and datacards for signal and background phase spaces.

"drllmin3l" : This variable is used for limit setting. 3 bins between 0 and 4.
"events" : This variable is used for background normalization. So, use the shape of this variable for background phase space datacards.



Other helpful Commands for 2015 Analysis:


Pruning the datacards:

cd Latinos/CMSSW_7_6_3/src/ModificationDatacards/examples

Modify : doPruneNuisanceVHWW3l.sh

./doPruneNuisanceVHWW3l.sh

Going to HiggsCombine package

cd Latinos/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test

cmsenv

combineCards.py wh3l_13TeV_sssf=/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/forLimit/datacards_Signal_LooseBTag_ZHtt/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt wh3l_13TeV_ossf=/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/forLimit/datacards_Signal_LooseBTag_ZHtt/wh3l_13TeV_ossf/drllmin3l/datacard.txt wh3l_wz_13TeV=/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/ControlRegion/datacards_WZ/wh3l_wz_13TeV/events/datacard.txt wh3l_zg_13TeV=/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/ControlRegion/datacards_Zg/wh3l_zg_13TeV/events/datacard.txt.pruned.txt > datacard_wh3l_6July.txt



 combineCards.py wh3l_13TeV_ossf=/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/forLimit/datacards_Signal_LooseBTag_ZHtt/wh3l_13TeV_ossf/drllmin3l/datacard.txt wh3l_wz_13TeV=/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/ControlRegion/datacards_WZ/wh3l_wz_13TeV/events/datacard.txt wh3l_zg_13TeV=/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/ControlRegion/datacards_Zg/wh3l_zg_13TeV/events/datacard.txt.pruned.txt > datacard_wh3l_OSSF_6July.txt



combineCards.py wh3l_13TeV_sssf=/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/forLimit/datacards_Signal_LooseBTag_ZHtt/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt wh3l_wz_13TeV=/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/ControlRegion/datacards_WZ/wh3l_wz_13TeV/events/datacard.txt wh3l_zg_13TeV=/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/ControlRegion/datacards_Zg/wh3l_zg_13TeV/events/datacard.txt.pruned.txt > datacard_wh3l_SSSF_6July.txt



   combineCards.py wh3l_13TeV=/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/forLimit/datacards_Signal_LooseBTag_ZHtt/wh3l_13TeV/drllmin3l/datacard.txt wh3l_wz_13TeV=/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/ControlRegion/datacards_WZ/wh3l_wz_13TeV/events/datacard.txt wh3l_zg_13TeV=/afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/ControlRegion/datacards_Zg/wh3l_zg_13TeV/events/datacard.txt.pruned.txt > datacard_wh3l_6July_noncat.txt



To get the limit:

combine -M Asymptotic datacard_wh3l_6July.txt -t -1 -m 125

combine -M Asymptotic datacard_wh3l_OSSF_6July.txt -t -1 -m 125

combine -M Asymptotic datacard_wh3l_SSSF_6July.txt -t -1 -m 125

combine -M Asymptotic datacard_wh3l_6July_noncat.txt -t -1 -m 125

Expected Limit is : 10.2812

Expected limit OSSF : 15.5625

Expected limit SSSF : 15.8125

Expected limit without dividing into categories : 12.0938


To get the significance:

combine -M ProfileLikelihood --significance datacard_wh3l_6July.txt  -t -1 --expectSignal=1

Significance: 0.255768

p-value = 0.399065

For the signal strength : 

combine -M MaxLikelihoodFit --rMin=-10 --rMax=10 datacard_wh3l_6July.txt -t -1 --expectSignal=1 -m 125

Best fit r: 1  -3.15267/+4.84633  (68% CL)

Run the Likelihood Scan and get the plot of signal strength:

combine -M MultiDimFit datacard_wh3l_6July.txt --algo=grid --point 100 --setPhysicsModelParameterRanges r=-10,10 -t -1 --expectSignal=1 -n "LHScan" -m 125

cp higgsCombineLHScan.MultiDimFit.mH125.root Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/forLimit

root -l -b -q Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/scripts/drawNLL.C

To get the WZ normalization:

combine -M MaxLikelihoodFit datacard.txt --redefineSignalPOIs WZ3lnorm --freezeNuisances=r --setPhysicsModelParameterRanges WZ3lnorm=0.01,2 --expectSignal=1 -n "MLfitWZ3lnorm" -m 125

To make Tables and Plots for Systematics and Pre-Fit Rates (Yields):

cd Latinos/CMSSW_7_4_7/src/PlayWithDatacards

cmsenv

python systematicsAnalyzer.py  /afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/forLimit/datacards_Signal_LooseBTag_ZHtt/wh3l_13TeV_ossf/drllmin3l/datacard.txt --all  -m    125     -f      tex    >  WH3l_OSSF_Systematics.tex

This systematicsAnalyzer code runs individually on one datacard. It does not run on combined datacard. 

It gives a big systematic table and also yield table.

python tableFromCards.py /afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/forLimit/datacards_Signal_LooseBTag_ZHtt/wh3l_13TeV_ossf/drllmin3l/datacard.txt -m 125 > table_wh3l_ossf.tex

python tableFromCards.py /afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/forLimit/datacards_Signal_LooseBTag_ZHtt/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt -m 125 > table_wh3l_sssf.tex

 python bigTableFromCards.py /afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/forLimit/datacards_Signal_LooseBTag_ZHtt/wh3l_13TeV_ossf/drllmin3l/datacard.txt > bigtable_wh3l_ossf.tex

python bigTableFromCards.py /afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/forLimit/datacards_Signal_LooseBTag_ZHtt/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt > bigtable_wh3l_sssf.tex

To make Pie Plots:

The script does not work on “groupPlot” so one has to remove that part from plot.py and hence a copy is made without that part. This code runs individually on one datacard per phase space.

python pieFromCards.py /afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/forLimit/datacards_Signal_LooseBTag_ZHtt/wh3l_13TeV_ossf/drllmin3l/datacard.txt --plotFile /afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WH3l/BTagChecks/forLimit/plot_forpie.py

To make Impact Plots:

Check out the package : CombineHarvester

text2workspace.py datacard_wh3l_6July.txt -m 125

combineTool.py -M Impacts -d datacard_wh3l_6July.root -m 125 --doInitialFit --robustFit 1 -t -1 --expectSignal=1

combineTool.py -M Impacts -d datacard_wh3l_6July.root -m 125 --robustFit 1 --doFits --parallel 20 --expectSignal=1 -t -1

combineTool.py -M Impacts -d datacard_wh3l_6July.root -m 125 --expectSignal=1 -t -1 -o datacard_wh3l_6July.root_impacts_datacard.MCAsimov.json

plotImpacts.py -i datacard_wh3l_6July.root_impacts_datacard.MCAsimov.json -o impacts_datacard_MCAsimov
