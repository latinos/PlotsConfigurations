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
    
    cd ..
    sh ggH/scripts/doGGH_doMultisignal.sh
    cd -

See description of the model and details in:

    https://twiki.cern.ch/twiki/bin/viewauth/CMS/SWGuideHiggsAnalysisCombinedLimit#MultiSignalModel_ready_made_mode
    
    
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

       
       
Tests:

       
       r99t eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2NuPowheg_M125.root
       latino -> Draw("sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))):higgsGenpt")
       
       latino -> Draw("sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))):higgsGenpt", "higgsGenpt<100", "colz")
       
       latino -> Draw("sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))):higgsGenpt", "higgsGenpt<100 && ((ptll > 50 && ( mtw2>=0  && mtw2<=100) && ( mtw1>=0  && mtw1<=120)&& ( mth>=60)&& ( mth<=300)&& ( dphilmet<2)&& ( ht>120 )))", "colz")
       

       latino -> Draw("sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))):higgsGenpt", "higgsGenpt<100 && (( mtw2>=30  && mtw2<=90)    && ( mtw1>=40  && mtw1<=120)&& ( mth>=60) && ( mth<=300))", "colz")
       
       latino -> Draw("sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))):higgsGenpt", "higgsGenpt<100 && (( mtw2>=30  && mtw2<=90)    && ( mtw1>=40  && mtw1<=120)&& ( mth>=60) && ( mth<=300)   && vht_pt>30 && vht_pt<60) && mpmet >20", "colz")
       
       
 
 
 
 
 
       
 
       latino -> Draw("sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))", "higgsGenpt<15")
    
       latino -> Draw("sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))", "higgsGenpt>15 && higgsGenpt<30", "same")

       latino -> Draw("sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))", "higgsGenpt>30", "same")
       
    
       latino -> Draw("std_vector_lepton_pt[0]", "higgsGenpt<15")
    
       latino -> Draw("std_vector_lepton_pt[0]", "higgsGenpt>15 && higgsGenpt<30", "same")

       latino -> Draw("std_vector_lepton_pt[0]", "higgsGenpt>30", "same")
       
       latino->SetLineColor(kRed)
       latino -> Draw("std_vector_lepton_pt[1]", "higgsGenpt<15")
       latino->SetLineColor(kGreen)
       latino -> Draw("std_vector_lepton_pt[1]", "higgsGenpt>15 && higgsGenpt<30", "same")
       latino->SetLineColor(kBlue)
       latino -> Draw("std_vector_lepton_pt[1]", "higgsGenpt>30", "same")
    
    
       latino -> Draw("dphill", "higgsGenpt<15")
    
       latino -> Draw("dphill", "higgsGenpt>15 && higgsGenpt<30", "same")

       latino -> Draw("dphill", "higgsGenpt>30", "same")

       
       
       latino -> Draw("ptll", "higgsGenpt<15")
    
       latino -> Draw("ptll", "higgsGenpt>15 && higgsGenpt<30", "same")

       latino -> Draw("ptll", "higgsGenpt>30", "same")

        
 
       latino -> Draw("std_vector_lepton_eta[1]", "higgsGenpt<15")
    
       latino -> Draw("std_vector_lepton_eta[1]", "higgsGenpt>15 && higgsGenpt<30", "same")

       latino -> Draw("std_vector_lepton_eta[1]", "higgsGenpt>30", "same")
 

 
 
       latino -> Draw("mtw1", "higgsGenpt<15")
       latino -> Draw("mtw1", "higgsGenpt>15 && higgsGenpt<30", "same")
       latino -> Draw("mtw1", "higgsGenpt>30", "same")

 

       latino -> Draw("mtw2", "higgsGenpt<15")
       latino -> Draw("mtw2", "higgsGenpt>15 && higgsGenpt<30", "same")
       latino -> Draw("mtw2", "higgsGenpt>30", "same")

       
       latino -> Draw("drll", "higgsGenpt<15")
       latino -> Draw("drll", "higgsGenpt>15 && higgsGenpt<30", "same")
       latino -> Draw("drll", "higgsGenpt>30", "same")

       latino -> Draw("dphilmet", "higgsGenpt<15")
       latino -> Draw("dphilmet", "higgsGenpt>15 && higgsGenpt<30", "same")
       latino -> Draw("dphilmet", "higgsGenpt>30", "same")

       latino -> Draw("ht", "higgsGenpt<15")
       latino -> Draw("ht", "higgsGenpt>15 && higgsGenpt<30", "same")
       latino -> Draw("ht", "higgsGenpt>30", "same")
       
       latino -> Draw("yll", "higgsGenpt<15")
       latino -> Draw("yll", "higgsGenpt>15 && higgsGenpt<30", "same")
       latino -> Draw("yll", "higgsGenpt>30", "same")
       
       
       
       latino->SetLineColor(kRed)
       latino -> Draw("vht_pt", "higgsGenpt<15")
       latino->SetLineColor(kGreen)
       latino -> Draw("vht_pt", "higgsGenpt>15 && higgsGenpt<30", "same")
       latino->SetLineColor(kBlue)
       latino -> Draw("vht_pt", "higgsGenpt>30", "same")
      

       latino->SetLineColor(kRed)
       latino -> Draw("mpmet", "higgsGenpt<15")
       latino->SetLineColor(kGreen)
       latino -> Draw("mpmet", "higgsGenpt>15 && higgsGenpt<30", "same")
       latino->SetLineColor(kBlue)
       latino -> Draw("mpmet", "higgsGenpt>30", "same")
      
       
       latino->SetLineColor(kRed)
       latino -> Draw("mR", "higgsGenpt<15")
       latino->SetLineColor(kGreen)
       latino -> Draw("mR", "higgsGenpt>15 && higgsGenpt<30", "same")
       latino->SetLineColor(kBlue)
       latino -> Draw("mR", "higgsGenpt>30", "same")
       
       
       
      
       
       latino->SetLineColor(kRed)
       latino -> Draw("sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))", " (( mtw2>=30  && mtw2<=90)    && ( mtw1>=40  && mtw1<=120)&& ( mth>=60) && ( mth<=300)   && vht_pt>30 && vht_pt<60) && mpmet >20    && higgsGenpt<15")
       latino->SetLineColor(kGreen)
       latino -> Draw("sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))", " (( mtw2>=30  && mtw2<=90)    && ( mtw1>=40  && mtw1<=120)&& ( mth>=60) && ( mth<=300)   && vht_pt>30 && vht_pt<60) && mpmet >20    && higgsGenpt>15 && higgsGenpt<30", "same")
       latino->SetLineColor(kBlue)
       latino -> Draw("sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))", " ((ptll > 50 && ( mtw2>=0  && mtw2<=100) && ( mtw1>=0  && mtw1<=120)&& ( mth>=60)&& ( mth<=300)&& ( dphilmet<2)&& ( ht>120 )))    && higgsGenpt>30", "same")
       
       
       
       
       
       

 
 
 
 
 
 
 
 
 
 