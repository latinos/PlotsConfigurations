ggH analysis, differential distribution
==============

Some useful aliases:
    
    alias eosusermount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount'
    alias eosuserumount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse umount'

Steps to get datacards and plots:

    
    cd /tmp/<your nice login>
    eosusermount eos
    cd -

    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/a/amassiro/HWW2015/ICHEP/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/

    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root

    
Pruning:

    cd /afs/cern.ch/user/a/amassiro/Limit/ModificationDatacards
    sh examples/doPruneNuisanceHWWdifferential.sh 
    cd -


Auto tests:

    cd /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/Differential/ggH/pt1/
    cmsenv
    
    cd tests
    sh ../scripts/doGGH_doMultisignal.sh
    cd -

    
    r99t tests/higgsCombineTest.MultiDimFit.mH120.root ../scripts/Draw2DImproved.cxx
    
    r99t tests/higgsCombineTest.MultiDimFit.mH120.root ../scripts/Draw2DImproved.cxx\(\"r1\",\"r2\",\"r1\",\"r2\",2,\"r3\>0.9\&\&r3\<1.1\"\)
    r99t tests/higgsCombineTest.MultiDimFit.mH120.root ../scripts/Draw2DImproved.cxx\(\"r1\",\"r3\",\"r1\",\"r3\",2,\"r2\>0.9\&\&r2\<1.1\"\)
    r99t tests/higgsCombineTest.MultiDimFit.mH120.root ../scripts/Draw2DImproved.cxx\(\"r2\",\"r3\",\"r2\",\"r3\",2,\"r1\>0.9\&\&r1\<1.1\"\)

    r99t tests/higgsCombineTest.MultiDimFit.mH120.root ../scripts/Draw3DImproved.cxx
    
     
    
Plots:

 
 leptons


    r99t eos/user/a/amassiro/HWW2015/ICHEP/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2NuPowheg_M125.root
    
    latino->Draw("std_vector_dressedLeptonGen_pt[0]:std_vector_lepton_pt[0]", "std_vector_lepton_pt[0]>0", "box")
    latino->Draw("std_vector_dressedLeptonGen_pt[1]:std_vector_lepton_pt[1]", "std_vector_lepton_pt[1]>0", "box")
    
    latino->Draw("std_vector_dressedLeptonGen_pt[0]:std_vector_leptonGen_pt[0]", "std_vector_lepton_pt[0]>0", "box")
    latino->Draw("std_vector_leptonGen_pt[0]:std_vector_lepton_pt[0]", "std_vector_lepton_pt[0]>0", "box")
    
    
    
       latino->SetLineColor(kRed)
       latino->SetFillColor(kRed)
       latino->SetFillStyle(3001)
    latino->Draw("std_vector_dressedLeptonGen_pt[0]:std_vector_lepton_pt[0] >> h1(20,0,300,20,0,300) ", "std_vector_lepton_pt[0]>0", "box")

       
       latino->SetLineColor(kBlue)
       latino->SetFillColor(kBlue)
       latino->SetFillStyle(3004)

    latino->Draw("std_vector_leptonGen_pt[0]:std_vector_lepton_pt[0] >> h2(20,0,300,20,0,300)", "std_vector_lepton_pt[0]>0", "box same")

       h1->GetXaxis()->SetTitle("reco p_{T} [GeV]")
       h1->GetYaxis()->SetTitle("gen p_{T} [GeV]")
       
       gPad->SetGrid()
    
       
 
    latino->Draw("std_vector_dressedLeptonGen_pt[0]", "std_vector_lepton_pt[0]>0", "box")
 
           
       latino->SetLineWidth(3)
       latino->SetLineColor(kRed)
       latino -> Draw("std_vector_lepton_pt[0] >> h1(50,0,100)", "std_vector_dressedLeptonGen_pt[0]<40")
       latino->SetLineColor(kGreen)
       latino -> Draw("std_vector_lepton_pt[0] >> h2(50,0,100)", "std_vector_dressedLeptonGen_pt[0]>40 && std_vector_dressedLeptonGen_pt[0]<60", "same")
       latino->SetLineColor(kBlue)
       latino -> Draw("std_vector_lepton_pt[0] >> h3(50,0,100)", "std_vector_dressedLeptonGen_pt[0]>60", "same")
       
       h1->GetXaxis()->SetTitle("reco lepton p_{T} [GeV]")
       
       gPad->SetGrid()
     

     
     
    latino->Draw("std_vector_dressedLeptonGen_pt[0]:std_vector_lepton_pt[0]", "std_vector_lepton_pt[0]>0", "box")
 
           
       latino->SetLineWidth(3)
       latino->SetLineColor(kRed)
       latino -> Draw("std_vector_dressedLeptonGen_pt[0]:std_vector_lepton_pt[0] >> h1(10,0,100,10,0,100)", "std_vector_dressedLeptonGen_pt[0]<40", "box")
       latino->SetLineColor(kGreen)
       latino -> Draw("std_vector_dressedLeptonGen_pt[0]:std_vector_lepton_pt[0] >> h2(10,0,100,10,0,100)", "std_vector_dressedLeptonGen_pt[0]>40 && std_vector_dressedLeptonGen_pt[0]<60", "same box")
       latino->SetLineColor(kBlue)
       latino -> Draw("std_vector_dressedLeptonGen_pt[0]:std_vector_lepton_pt[0] >> h3(10,0,100,10,0,100)", "std_vector_dressedLeptonGen_pt[0]>60", "same box")
       
       h1->GetXaxis()->SetTitle("reco lepton p_{T} [GeV]")
       h1->GetYaxis()->SetTitle("gen lepton p_{T} [GeV]")
       
       gPad->SetGrid()
     
     
       
       
       
       
       
       
       
       
       
       
       
       
       
 