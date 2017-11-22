/*

root -l 'macroUEPS.C("latino_WWTo2L2Nu.root")'
root -l 'macroUEPS.C("latino_GluGluHToWWTo2L2NuPowheg_M125.root")'
root -l 'macroUEPS.C("latino_VBFHToWWTo2L2Nu_M125.root")'

*/

using namespace std;

void macroUEPS(TString fileName = "latino_WWTo2L2Nu.root"){

  TString nominalFolder = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__wwSel/";

  TString PSFolder = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__PS__wwSel/";

  TString UEupFolder = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__UEup__wwSel/";
  TString UEdoFolder = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__UEdo__wwSel/";

  TString preselCut = "std_vector_lepton_pt[0]>25 \
                    && std_vector_lepton_pt[1]>20 \
                    && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
                    && std_vector_lepton_pt[2]<10 \
                    && mll>12  \
                    && metPfType1 > 20 \
                    && mpmet > 20 \
                    && ptll > 30";

  TString weights = "XSWeight* \
                     puW*\
                     effTrigW*\
                     std_vector_lepton_recoW[0]*\
                     std_vector_lepton_recoW[1]*\
                     veto_EMTFBug*\
                     GenLepMatch2l*\
                     LepCut2l__ele_cut_WP_Tight80X__mu_cut_Tight80x*\
                     LepSF2l__ele_cut_WP_Tight80X__mu_cut_Tight80x*\
                     bPogSF_CMVAL";

  if (fileName == "latino_WWTo2L2Nu.root")
    weights = weights + "*nllW";

  TFile* nominalFile = new TFile(nominalFolder + fileName);
  TTree* nominalTree = (TTree*) nominalFile -> Get("latino");
  TH1F*  nominalHist = new TH1F("nominalHist","nominalHist",1000,0.,1000.);
  nominalTree->Draw("mll>>nominalHist",preselCut+"*"+weights,"goff");
  cout<<"Nominal Integral at 2 lep level: "<<nominalHist->Integral()<<endl;
  float nominal2lep = nominalHist->Integral();

  TFile* PSFile = new TFile(PSFolder + fileName);
  TTree* PSTree = (TTree*) PSFile -> Get("latino");
  TH1F*  PSHist = new TH1F("PSHist","PSHist",1000,0.,1000.);
  PSTree  ->Draw("mll>>PSHist",preselCut+"*"+weights,"goff");
  float PS2lep = PSHist->Integral();
  float PSnorm = nominal2lep / PS2lep;
  TString PSnorm_ = Form("%f",PSnorm);
  cout<<"PS Integral at 2 lep level: "<<PSHist->Integral()<<". Normalizing with: "<<PSnorm_<<endl;

  TFile* UEupFile = new TFile(UEupFolder + fileName);
  TTree* UEupTree = (TTree*) UEupFile -> Get("latino");
  TH1F*  UEupHist = new TH1F("UEupHist","UEupHist",1000,0.,1000.);
  UEupTree->Draw("mll>>UEupHist",preselCut+"*"+weights,"goff");
  float UEup2lep = UEupHist->Integral();
  float UEupnorm = nominal2lep / UEup2lep;
  TString UEupnorm_ = Form("%f",UEupnorm);
  cout<<"UE up Integral at 2 lep level: "<<UEupHist->Integral()<<". Normalizing with: "<<UEupnorm<<endl;

  TFile* UEdoFile = new TFile(UEdoFolder + fileName);
  TTree* UEdoTree = (TTree*) UEdoFile -> Get("latino");
  TH1F*  UEdoHist = new TH1F("UEdoHist","UEdoHist",1000,0.,1000.);
  UEdoTree->Draw("mll>>UEdoHist",preselCut+"*"+weights,"goff");
  float UEdo2lep = UEdoHist->Integral();
  float UEdonorm = nominal2lep / UEdo2lep;
  TString UEdonorm_ = Form("%f",UEdonorm);
  cout<<"UE down Integral at 2 lep level: "<<UEdoHist->Integral()<<". Normalizing with: "<<UEdonorm<<endl;

  TString finalCut = "njet >= 0 \
            && mth > 40 \
            && mll < 76 \
            && drll < 2.5 \
            && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
            && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
            && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
            && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
            && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
            && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
            && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
            && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
            && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
            && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 )";

  //nominalHist->Reset();
  TH1F* nominalHistBis = new TH1F("nominalHistBis","nominalHistBis",1000,0.,1000.);
  nominalTree->Draw("mll>>nominalHistBis",preselCut+"*"+weights+"*"+finalCut,"goff");
  float nominalFinal = nominalHistBis->Integral();
  cout<<"Final nominal selections: "<<nominalFinal<<endl; 

  //PSTree->Reset();
  TH1F* PSHistBis = new TH1F("PSHistBis","PSHistBis",1000,0.,1000.);
  PSTree  ->Draw("mll>>PSHistBis",preselCut+"*"+weights+"*"+finalCut,"goff"); // PSnorm_+"*"+
  float PSFinal = PSnorm * PSHistBis->Integral();
  float PSSyst  = PSnorm * PSHistBis->Integral() / nominalHistBis->Integral();
  cout<<"Final PS selections: "<<PSFinal<<endl; 
  cout<<"Parton shower uncertainty: "<<PSSyst<<endl;

  //UEupTree->Reset();
  TH1F* UEupHistBis = new TH1F("UEupHistBis","UEupHistBis",1000,0.,1000.);
  UEupTree  ->Draw("mll>>UEupHistBis",preselCut+"*"+weights+"*"+finalCut,"goff"); //UEupnorm_+"*"+
  float UEupFinal = UEupnorm * UEupHistBis->Integral();
  float UEupSyst  = UEupnorm * UEupHistBis->Integral() / nominalHistBis->Integral();
  cout<<"Final UEup selections: "<<UEupFinal<<endl; 
  cout<<"UE up uncertainty: "<<UEupSyst<<endl;

  //UEdoTree->Reset();
  TH1F* UEdoHistBis = new TH1F("UEdoHistBis","UEdoHistBis",1000,0.,1000.);
  UEdoTree  ->Draw("mll>>UEdoHistBis",preselCut+"*"+weights+"*"+finalCut,"goff"); //UEdonorm_+"*"+
  float UEdoFinal = UEdonorm * UEdoHistBis->Integral();
  float UEdoSyst  = UEdonorm * UEdoHistBis->Integral() / nominalHistBis->Integral();
  cout<<"Final UEdo selections: "<<UEdoFinal<<endl; 
  cout<<"UE down uncertainty: "<<UEdoSyst<<endl;
}
