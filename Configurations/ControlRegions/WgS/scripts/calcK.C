#define nProcesses 11

enum {iDATA, iFake, iVg, itop, iWZ3LNu, iWgSEE, iWW, iZZ, iDY, iWZ2Q, iWgSMuMu};

void calcK(){
  gStyle->SetOptStat(0);
  TH1::SetDefaultSumw2();

  TFile *InF = new TFile("../rootFile_mpmet25pt25158_DoubleMuTight1all/plots_WgS.root");
  TH1F* hist[nProcesses];
  hist[iDATA] = (TH1F*)InF->Get("hww2l2v_13TeV_WgS_mmm_JPsi_tightpt1/mllMinimi/histo_DATA");
  hist[iFake] = (TH1F*)InF->Get("hww2l2v_13TeV_WgS_mmm_JPsi_tightpt1/mllMinimi/histo_Fake");
  hist[iVg] = (TH1F*)InF->Get("hww2l2v_13TeV_WgS_mmm_JPsi_tightpt1/mllMinimi/histo_Vg");
  hist[itop] = (TH1F*)InF->Get("hww2l2v_13TeV_WgS_mmm_JPsi_tightpt1/mllMinimi/histo_top");
  hist[iWZ3LNu] = (TH1F*)InF->Get("hww2l2v_13TeV_WgS_mmm_JPsi_tightpt1/mllMinimi/histo_WZ3LNu");
  hist[iWgSEE] = (TH1F*)InF->Get("hww2l2v_13TeV_WgS_mmm_JPsi_tightpt1/mllMinimi/histo_WgSEE");
  hist[iWgSEE]->Scale(12.);
  hist[iWW] = (TH1F*)InF->Get("hww2l2v_13TeV_WgS_mmm_JPsi_tightpt1/mllMinimi/histo_WW");
  hist[iZZ] = (TH1F*)InF->Get("hww2l2v_13TeV_WgS_mmm_JPsi_tightpt1/mllMinimi/histo_ZZ");
  hist[iDY] = (TH1F*)InF->Get("hww2l2v_13TeV_WgS_mmm_JPsi_tightpt1/mllMinimi/histo_DY");
  hist[iWZ2Q] = (TH1F*)InF->Get("hww2l2v_13TeV_WgS_mmm_JPsi_tightpt1/mllMinimi/histo_WZ2Q");
  hist[iWgSMuMu] = (TH1F*)InF->Get("hww2l2v_13TeV_WgS_mmm_JPsi_tightpt1/mllMinimi/histo_WgSMuMu");
  hist[iWgSMuMu]->Scale(12.);

  TH1F* MC = (TH1F*)hist[iFake]->Clone("MC");
  for( int i(2); i<= iWgSMuMu; i++){
    MC->Add(hist[i]);
  }
  // Calculate the efficiency
  double Z_data = hist[iDATA]->Integral(43,48);
  double Z_MC   = MC->Integral(43,48);
  double eff = Z_data/Z_MC;
  cout<<"Eff: "<<eff<<endl;
  double N_Wgs   = hist[iWgSMuMu]->Integral(1,2);
  double N_MC    = MC->Integral(1,2);
  double N_data  = hist[iDATA]->Integral(1,2);
  cout<<"N_Wgs: "<<N_Wgs<<" N_MC: "<<N_MC<<" N_data: "<<N_data<<endl;

  N_Wgs *= eff;
  N_MC  *= eff;
  double N_WgsData = N_data-(N_MC-N_Wgs);
  double Kfactor = N_WgsData/N_Wgs;
  double KfactorErr =Kfactor* TMath::Sqrt(N_WgsData/N_WgsData/N_WgsData + N_Wgs/N_Wgs/N_Wgs);
  cout<<"Kfactor: "<<Kfactor<<"+"<<KfactorErr<<endl;



}
