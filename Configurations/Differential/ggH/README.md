ggH analysis, differential distribution
==============

Some useful aliases:
    
    alias eosusermount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount'
    alias eosuserumount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse umount'

Steps to get datacards and plots:

    
    cd /tmp/<your nice login>
    eosusermount eos
    cd -

    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root

    
Pruning:

    cd /afs/cern.ch/user/a/amassiro/Limit/ModificationDatacards
    sh examples/doPruneNuisanceHWWdifferential.sh 
    cd -


Auto tests:

    cd /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/
    cmsenv
    cd ..
    sh ggH/scripts/doGGH.sh
    cd -
    

Make tables:

    cd /afs/cern.ch/user/a/amassiro/Limit/PlayWithDatacards
    cd /afs/cern.ch/user/a/amassiro/Framework/Combine/CMSSW_7_1_15/src/HiggsAnalysis/CombinedLimit
    cmsenv
    scramv1 b -j 20
    cd -
    
    
    python      systematicsAnalyzer.py    \
        /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt   \
       --all    -m      125     -f      tex    >     hww2l2v_13TeV_em_0j.tex
    
    python      systematicsAnalyzer.py    \
        /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt   \
       --all    -m      125     -f      tex    >     hww2l2v_13TeV_me_0j.tex
    
    python      systematicsAnalyzer.py    \
        /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt   \
       --all    -m      125     -f      tex    >     hww2l2v_13TeV_em_1j.tex
    
    python      systematicsAnalyzer.py    \
        /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt   \
       --all    -m      125     -f      tex    >     hww2l2v_13TeV_me_1j.tex


Make plots:

    cd /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/LatinoAnalysis/ShapeAnalysis/test/draw/
    cmsenv
    
    python DrawNuisancesAll.py \
         --inputFile /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/datacards/hww2l2v_13TeV_me_0j/mllVSmth/shapes/histos_hww2l2v_13TeV_me_0j.root  \
         --outputDirPlots ggH0jme  \
         --nuisancesFile  /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/nuisances.py  \
         --samplesFile    /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/samples.py \
         --cutName hww2l2v_13TeV_me_0j

    python DrawNuisancesAll.py \
         --inputFile /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/datacards/hww2l2v_13TeV_em_0j/mllVSmth/shapes/histos_hww2l2v_13TeV_em_0j.root  \
         --outputDirPlots ggH0jem  \
         --nuisancesFile  /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/nuisances.py  \
         --samplesFile    /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/samples.py \
         --cutName hww2l2v_13TeV_em_0j
    
    python DrawNuisancesAll.py \
         --inputFile /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/datacards/hww2l2v_13TeV_me_1j/mllVSmth/shapes/histos_hww2l2v_13TeV_me_1j.root  \
         --outputDirPlots ggH1jme  \
         --nuisancesFile  /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/nuisances.py  \
         --samplesFile    /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/samples.py \
         --cutName hww2l2v_13TeV_me_1j
    
    python DrawNuisancesAll.py \
         --inputFile /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/datacards/hww2l2v_13TeV_em_1j/mllVSmth/shapes/histos_hww2l2v_13TeV_em_1j.root  \
         --outputDirPlots ggH1jem  \
         --nuisancesFile  /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/nuisances.py  \
         --samplesFile    /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/Differential/ggH/samples.py \
         --cutName hww2l2v_13TeV_em_1j

       
       


 
 