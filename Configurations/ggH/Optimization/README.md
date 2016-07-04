ggH analysis
==============

Common tools for analysis:

    plot distributions
    limit and significance results



Some useful aliases:
    
    alias eosusermount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount'
    alias eosuserumount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse umount'

Steps to get datacards and plots:

    
    cd /tmp/<your nice login>
    eosusermount eos
    cd -
    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/

    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root

    
Pruning:

    cd /afs/cern.ch/user/a/amassiro/Limit/ModificationDatacards
    sh examples/doPruneNuisanceHWWOptimization.sh 
    cd -


Auto tests:

    cd /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH
    cmsenv
    cd ..
    sh ggH/scripts/doGGH_blind.sh
    cd -
    
    cd ..
    sh ggH/scripts/doGGH.sh
    cd -

    cd ..
    sh ggH/scripts/doGGH_alternative.sh
    cd -
 

Plots:


    r99t eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M125.root
    latino->Draw("mtw2:mth","std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13)", "colz");

    r99t eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WWTo2L2Nu.root
    latino->Draw("mtw2:mth","(std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13)) * (mth<200 && mtw2<120)", "colz");

    r99t 
    TChain* latino = new TChain("latino");
    latino->Add("eos/user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW/*.root");
    latino->Draw("mtw2:mth","(std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13)) * (mth<200 && mtw2<120)", "colz");

    
    
    latino->Draw("mtw2:mth","trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))*(std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13)) * (mth<300)", "colz");

    
    