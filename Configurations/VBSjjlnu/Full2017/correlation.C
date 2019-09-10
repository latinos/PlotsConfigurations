using namespace TMVA;


void correlation(  ) {

 TMVA::Tools::Instance();
 std::map<std::string,int> Use;


 std::cout << std::endl;
 std::cout << "==> Start TMVAClassification" << std::endl;


 TString outfileName;
 outfileName = "VBS_WJETS.root"; //nome del file root di output
 TFile* outputFile = TFile::Open( outfileName, "RECREATE" );

 TMVA::Factory *factory = new TMVA::Factory( "TMVAClassification", outputFile,
                                              "!V:!Silent:Color:DrawProgressBar:Transformations=I;D;P;G,D:AnalysisType=Classification" );

TMVA::DataLoader* dataloader = new TMVA::DataLoader("dataset") ;


//Qui puoi definire tutte le variabili che ti servono, usando i nomi che ci sono nel tree. F sta per float
 dataloader->AddVariable( "vbs_eta_high", 'F' ); 
 dataloader->AddVariable( "deltaeta_lep_vbs_high", 'F' );
 dataloader->AddVariable( "deltaeta_lep_vbs_low", 'F' );
 dataloader->AddVariable( "CleanFatJet_pt[0]", 'F' );
 dataloader->AddVariable( "vbs_pt_high", 'F' );
 dataloader->AddVariable( "CleanFatJet_tau21[0]", 'F' );
 dataloader->AddVariable( "mjj_vjet", 'F' );
 dataloader->AddVariable( "mjj_vbs", 'F' );
 dataloader->AddVariable( "Ht", 'F' );
 dataloader->AddVariable( "R_mw", 'F' );
 dataloader->AddVariable( "Asym_vbs", 'F' );
 dataloader->AddVariable( "Zlep", 'F' );


//Ora devi andare a prendere i tuoi samples
 TString fname;

//file di segnale (uno solo)
 TChain *signal1 = new TChain("Events");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WpToLNu_WmTo2J__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WpToLNu_ZTo2J__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_ZTo2L_ZTo2J__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WpTo2J_ZTo2L__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WpTo2J_WmToLNu__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WmToLNu_ZTo2J__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WmToLNu_WmTo2J__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WmTo2J_ZTo2L__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WpToLNu_WpTo2J__part*");

//per prendere i file di fondo si usa una TChain
 TChain *background2 = new TChain("Events");
 background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WJetsToLNu_HT100_200__part*");
 background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WJetsToLNu_HT200_400__part*");
 background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WJetsToLNu_HT400_600__part*");
 background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WJetsToLNu_HT600_800__part*");
 background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WJetsToLNu_HT800_1200__part*");
 background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WJetsToLNu_HT1200_2500__part*");
 background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017/nanoLatino_WJetsToLNu_HT2500_inf__part*");

 //background2->Add("/gwteray/users/govoni/OneLeptonSkims/Apr2017_summer16_SingleLepton_hercules/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l1tightChain__btagMedium__LepTrgFix__dorochester__formulasMC__gr4JetsSkim__HHPairingAndVars/latino_TTToSemiLepton__part1.root");


//si possono definire dei pesi, ma è opzionale (puoi lasciare a 1)
 Double_t signalWeight     = 1.0;
 Double_t backgroundWeight = 1.0;

 
 //dataloader->SetInputTrees(signal1, background2, signalWeight, backgroundWeight );
 dataloader->SetSignalTree(signal1,signalWeight);
 dataloader->SetBackgroundTree(background2,backgroundWeight);
 dataloader->SetSignalWeightExpression    ("XSWeight*puWeight*TriggerEffWeight_1l*Lepton_RecoSF[0]*EMTFbug_veto*Lepton_tightElectron_mvaFall17V2Iso_WP90_IdIsoSF[0]*Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF[0]*(Lepton_isTightElectron_mvaFall17V2Iso_WP90[0]>0.5 || Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5)*PrefireWeight*btagSF*Lepton_genmatched[0]*METFilter_MC");
 //dataloader->SetBackgroundWeightExpression("XSWeight*puWeight*                   TriggerEffWeight_1l*                   Lepton_RecoSF[0]*                   EMTFbug_veto*Lepton_tightElectron_mvaFall17V2Iso_WP90_IdIsoSF[0]*                Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF[0]*(Lepton_isTightElectron_mvaFall17V2Iso_WP90[0]>0.5 || Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5)*PrefireWeight*btagSF*Lepton_genmatched[0]*METFilter_MC");


//si possono defire dei tagli (analoghi a quelli che applichi alle tue NTuple), ma anche questo è opzionale e puoi lasciare a 1
 TCut mycuts = "VBS_category==0 && mjj_vbs > 300 && deltaeta_vbs > 2.5 && (Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)";
 TCut mycutb = mycuts;

 dataloader->PrepareTrainingAndTestTree(mycuts, mycutb, "SplitMode=Random:NormMode=NumEvents:!V");



//TMVA ha diersi metodi per la classificazione, io ho usato BDT. Non dovrebbe influenzare quello che ti interessa quindi lascia pure
 factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDT", 
        "!H:!V" );
 //factory->BookMethod(  TMVA::Types::kBDT, "BDT",
 //                     "!H:!V:NTrees=850:MinNodeSize=2.5%:MaxDepth=3:BoostType=AdaBoost:SeparationType=GiniIndex:nCuts=60" );

 factory->TrainAllMethods();

 factory->TestAllMethods();
 factory->EvaluateAllMethods();

 outputFile->Close();

 std::cout << "==> Wrote root file: " << outputFile->GetName() << std::endl;
 std::cout << "==> TMVAClassification is done!" << std::endl;

 delete factory;

 // Questo comando lancia una GUI una volta finito il programma. Ci sono diversi grafici, quello che interessa a te sta sotto la dicitura "(3) input variables Linear Correlation coefficients"
 if (!gROOT->IsBatch()) TMVAGui( outfileName );
}
