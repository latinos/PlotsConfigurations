mkShapes.py --pycfg=configuration.py --doThreads=True --inputDir=/tmp/arun/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__vh3lSel__l3kin__l4kin
mkPlot.py --pycfg=configuration.py --inputFile=rootFiles/plots_ZH4l.root
mkDatacards.py --pycfg=configuration.py --inputFile=rootFiles/plots_ZH4l.root
#cp plot_dRcheck/cratio_wh3l_top_13TeV_*.png /afs/cern.ch/user/a/arun/www/WHPlots/ControlRegions/2016/Top/
#cp plot_dRcheck/cratio_wh3l_wz_13TeV_*.png /afs/cern.ch/user/a/arun/www/WHPlots/ControlRegions/2016/WZ/
#cp plot_dRcheck/cratio_wh3l_zg_13TeV_*.png /afs/cern.ch/user/a/arun/www/WHPlots/ControlRegions/2016/Zgamma
#cp plot_dRcheck/cratio_wh3l_zjets_13TeV_*.png /afs/cern.ch/user/a/arun/www/WHPlots/ControlRegions/2016/ZJets/
#cp plot_dRcheck/*_wh3l_13TeV_ossf_*.png ~/www/WHPlots/SignalRegion/2016/
#cp plot_dRcheck/*_wh3l_13TeV_sssf_*.png ~/www/WHPlots/SignalRegion/2016/
#cd ../../../../ModificationDatacards/examples/
#./doPruneNuisanceVHWW3l_ICHEP.sh
#cd -
#cd /afs/cern.ch/work/a/arun/Latinos/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/test/WH_Limits/2016/15Sept/
#cmsenv
#cd -
#combineCards.py wh3l_13TeV_sssf=/afs/cern.ch/work/a/arun/Latinos/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/forLimit/datacards_NEW/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt wh3l_13TeV_ossf=/afs/cern.ch/work/a/arun/Latinos/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/forLimit/datacards_NEW/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt wh3l_wz_13TeV=/afs/cern.ch/work/a/arun/Latinos/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/forLimit/datacards_NEW/wh3l_wz_13TeV/events/datacard.txt.pruned.txt wh3l_zg_13TeV=/afs/cern.ch/work/a/arun/Latinos/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/forLimit/datacards_NEW/wh3l_zg_13TeV/events/datacard.txt.pruned.txt > datacard_WH3l125_12p3_20Sept.txt
#combine -M ProfileLikelihood --significance datacard_WH3l125_12p3_20Sept.txt -t -1 --expectSignal=1 > significance.txt
#cat significance.txt
#combine -M Asymptotic datacard_WH3l125_12p3_18Sept.txt -t -1 -m 125 > limit.txt
#cat limit.txt
#combine -M MaxLikelihoodFit --rMin=-10 --rMax=10 datacard_WH3l125_12p3_18Sept.txt -t -1 --expectSignal=1 -m 125 > signalstrength.txt
#cat signalstrength.txt
#combine -M MaxLikelihoodFit datacard_WH3l125_12p3_18Sept.txt --redefineSignalPOIs Zg3lnorm --freezeNuisances=r,WZ3lnorm --setPhysicsModelParameterRanges Zg3lnorm=0.01,2 -n "MLfitZg3lnorm" -m 125 > Zgamma_norm.txt
#cat Zgamma_norm.txt
#combine -M MaxLikelihoodFit datacard_WH3l125_12p3_18Sept.txt --redefineSignalPOIs WZ3lnorm --freezeNuisances=r,Zg3lnorm --setPhysicsModelParameterRanges WZ3lnorm=0.01,2 -n "MLfitWZ3lnorm" -m 125 > WZnorm.txt
#cat WZnorm.txt

