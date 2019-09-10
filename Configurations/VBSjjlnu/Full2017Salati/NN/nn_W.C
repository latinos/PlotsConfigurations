using namespace TMVA;


void nn_W(  ) {

 TMVA::Tools::Instance();
 std::map<std::string,int> Use;


 std::cout << std::endl;
 std::cout << "==> Start TMVAClassification" << std::endl;


 TString outfileName;
 outfileName = "nn_W.root"; //nome del file root di output
 TFile* outputFile = TFile::Open( outfileName, "RECREATE" );

 TMVA::Factory *factory = new TMVA::Factory( "TMVAClassification", outputFile,
                                              "!V:!Silent:Color:DrawProgressBar:Transformations=I;D;P;G,D:AnalysisType=Classification" );

TMVA::DataLoader* dataloader = new TMVA::DataLoader("datasetW") ;


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

//VBS
 TChain *signal1 = new TChain("Events");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv5_SigOnly_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WpToLNu_WmTo2J__part*");
 /*signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv5_SigOnly_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WpToLNu_ZTo2J__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv5_SigOnly_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_ZTo2L_ZTo2J__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv5_SigOnly_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WpTo2J_ZTo2L__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv5_SigOnly_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WpTo2J_WmToLNu__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv5_SigOnly_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WmToLNu_ZTo2J__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv5_SigOnly_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WmToLNu_WmTo2J__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv5_SigOnly_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WmTo2J_ZTo2L__part*");
 signal1->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv5_SigOnly_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WpToLNu_WpTo2J__part*");
*/
//Wjets
 TChain *background2 = new TChain("Events");
 background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WJetsToLNu_HT100_200__part*");
 /*background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WJetsToLNu_HT200_400__part*");
 background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WJetsToLNu_HT400_600__part*");
 background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WJetsToLNu_HT600_800__part*");
 background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WJetsToLNu_HT800_1200__part*");
 background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WJetsToLNu_HT1200_2500__part*");
 background2->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3__VBSjjlnuSkim2017v3_fatjet/nanoLatino_WJetsToLNu_HT2500_inf__part*");
*/
 


//si possono definire dei pesi, ma è opzionale (puoi lasciare a 1)
 Double_t signalWeight     = 1.0;
 Double_t backgroundWeight = 1.0;

 
 //dataloader->SetInputTrees(signal1, background2, signalWeight, backgroundWeight );
 dataloader->SetSignalTree(signal1,signalWeight);
 dataloader->SetBackgroundTree(background2,backgroundWeight);
 dataloader->SetSignalWeightExpression    ("XSWeight*puWeight*                   TriggerEffWeight_1l*                   Lepton_RecoSF[0]*                   EMTFbug_veto*Lepton_tightElectron_mvaFall17V2Iso_WP90_IdIsoSF[0]*                Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF[0]*(Lepton_isTightElectron_mvaFall17V2Iso_WP90[0]>0.5 || Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5)*PrefireWeight*METFilter_MC");
 dataloader->SetBackgroundWeightExpression("XSWeight*puWeight*                   TriggerEffWeight_1l*                   Lepton_RecoSF[0]*                   EMTFbug_veto*Lepton_tightElectron_mvaFall17V2Iso_WP90_IdIsoSF[0]*                Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF[0]*(Lepton_isTightElectron_mvaFall17V2Iso_WP90[0]>0.5 || Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5)*PrefireWeight*METFilter_MC");
       

//si possono defire dei tagli (analoghi a quelli che applichi alle tue NTuple), ma anche questo è opzionale e puoi lasciare a 1
 TCut mycuts = "(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0) && nLepton==1 && Lepton_pt[0]>30  && (  Lepton_isTightElectron_mvaFall17V2Iso_WP90[0] > 0.5  || Lepton_isTightMuon_cut_Tight_HWWW[0] > 0.5) && vbs_pt_high >= 30  && vbs_pt_low >= 30  && (vbs_eta_high <= 2.5 || vbs_eta_high >= 3.2 ) && (vbs_eta_low <= 2.5 || vbs_eta_low >= 3.2) && mjj_vbs >=300  && deltaeta_vbs >= 2  "; TCut mycutb = mycuts;
//&& VBS_category == 0  
 dataloader->PrepareTrainingAndTestTree(mycuts, mycutb, "SplitMode=Random:NormMode=NumEvents:!V");



//TMVA ha diersi metodi per la classificazione, io ho usato BDT. Non dovrebbe influenzare quello che ti interessa quindi lascia pure
 factory->BookMethod( dataloader, TMVA::Types::kCFMlpANN, "CF_ANN", "HiddenLayers=10,10,10:NCycles=3000");;
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
