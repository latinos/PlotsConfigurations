using namespace std;

void macroZpt(TString filename = "rootFileZpt_hmm/plots_Zpt_hmm.root"){

  TFile* f = new TFile(filename);

  //DY
  TH1F* DY = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_DY");

  //DATA
  TH1F* DATA = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_DATA");

  //Other processes
  TH1F* ggWW    = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_ggWW");
  TH1F* Vg      = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_Vg");
  TH1F* ZH_hmm  = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_ZH_hmm");
  TH1F* Fakes   = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_Fakes");
  TH1F* WH_hmm  = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_WH_hmm");
  TH1F* top     = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_top");
  TH1F* WW      = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_WW");
  TH1F* VVV     = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_VVV");
  TH1F* VBF_hmm = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_VBF_hmm");
  TH1F* ttH_hmm = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_ttH_hmm");
  TH1F* ggH_hmm = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_ggH_hmm");
  TH1F* VgS     = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_VgS");
  TH1F* VZ      = (TH1F*) f -> Get("hmm_13TeV_Incl/ptll/histo_VZ");

  // TH1F* new_DATA = DATA;

  // new_DATA -> Add(ggWW,-1);
  // new_DATA -> Add(Vg,-1);
  // new_DATA -> Add(ZH_hmm,-1);
  // new_DATA -> Add(Fakes,-1);
  // new_DATA -> Add(WH_hmm,-1);
  // new_DATA -> Add(top,-1);
  // new_DATA -> Add(WW,-1);
  // new_DATA -> Add(VVV,-1);
  // new_DATA -> Add(VBF_hmm,-1);
  // new_DATA -> Add(ttH_hmm,-1);
  // new_DATA -> Add(ggH_hmm,-1);
  // new_DATA -> Add(VgS,-1);
  // new_DATA -> Add(VZ,-1);

  //  cout<<new_DATA -> GetNbinsX()<<endl;
  cout<<DY -> GetNbinsX()<<endl;

  //new_DATA -> Draw();
  DATA -> Draw();
  DY -> Draw("same");

  TH1F* DATA2 = new TH1F("DATA2","DATA2",DATA -> GetNbinsX(),0.,200.);

  for (int i = 1; i < DATA -> GetNbinsX() + 1; ++i){
    if (DY -> GetBinContent(i) != 0){
      DATA2 -> SetBinContent(i, DATA -> GetBinContent(i) / DY -> GetBinContent(i));
    }
    else{
      DATA2 -> SetBinContent(i, 0.);
    }
  }

  // set overflow
  DATA2 -> SetBinContent(DATA -> GetNbinsX() + 1, DATA2 -> GetBinContent(DATA -> GetNbinsX()));

  DATA2 -> Draw();
  DATA2 -> Smooth();
  DATA2 -> Draw();


  TFile* fOut = new TFile("DY_histo.root","recreate");
  fOut -> cd();

  DATA2 -> Write();
  
  fOut -> Close();

}
