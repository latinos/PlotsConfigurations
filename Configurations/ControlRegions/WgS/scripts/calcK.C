#define nProcesses 11

enum {iDATA, iFake, iVg, itop, iWZ3LNu, iWgSEE, iWW, iZZ, iDY, iWZ2Q, iWgSMuMu};

void calcK(){
  gStyle->SetOptStat(0);
  TH1::SetDefaultSumw2();

  TFile *myF   = new TFile("rootFile/plots_WgS.root");

  //range' : (60,0,120)
  TH1F* h_Data  = (TH1F*)myF->Get("hww2l2v_13TeV_of0j_Test/mllMinimi/histo_DATA");
  TH1F* h_Vg  = (TH1F*)myF->Get("hww2l2v_13TeV_of0j_Test/mllMinimi/histo_Vg");
  TH1F* h_WZ3Lmllmin01 = (TH1F*)myF->Get("hww2l2v_13TeV_of0j_Test/mllMinimi/histo_WZ3Lmllmin01");
  TH1F* h_Fake = (TH1F*)myF->Get("hww2l2v_13TeV_of0j_Test/mllMinimi/histo_Fake");
  TH1F* h_DY = (TH1F*)myF->Get("hww2l2v_13TeV_of0j_Test/mllMinimi/histo_DY");
  TH1F* h_top = (TH1F*)myF->Get("hww2l2v_13TeV_of0j_Test/mllMinimi/histo_top");


  // Calculate the efficiency
  double Z_Data 	= h_Data->Integral(42,48);
  double Z_Vg   	= h_Vg->Integral(42,48);
  double Z_WZ3Lmllmin01 = h_WZ3Lmllmin01->Integral(42,48);
  double Z_Fake		= h_Fake->Integral(42,48);
  double Z_DY		= h_DY->Integral(42,48);
  double Z_top		= h_top->Integral(42,48);

  Z_Data  = Z_Data - Z_Vg - Z_Fake - Z_DY - Z_top;

  double eff = Z_Data/Z_WZ3Lmllmin01;
  double effErr =eff* TMath::Sqrt(Z_Data/Z_Data/Z_Data + Z_WZ3Lmllmin01/Z_WZ3Lmllmin01/Z_WZ3Lmllmin01);
  cout<<"Eff: "<<eff<<"+"<<effErr<<endl;

  double N_Data 	= h_Data->Integral(1,2);
  double N_Vg   	= h_Vg->Integral(1,2);
  double N_WZ3Lmllmin01 = h_WZ3Lmllmin01->Integral(1,2);
  double N_Fake		= h_Fake->Integral(1,2);
  double N_DY		= h_DY->Integral(1,2);
  double N_top		= h_top->Integral(1,2);

  N_Data = N_Data - N_Vg - N_Fake - N_DY -N_top;
  N_WZ3Lmllmin01 *= eff;
  //double N_data  = hist[iDATA]->Integral(1,2);
  //cout<<"N_Wgs: "<<N_Wgs<<" N_MC: "<<N_MC<<" N_data: "<<N_data<<endl;

  //N_Wgs *= eff;
  //N_MC  *= eff;
  //double N_WgsData = N_data-(N_MC-N_Wgs);
  double Kfactor = N_Data/N_WZ3Lmllmin01;
  double KfactorErr =Kfactor* TMath::Sqrt(N_Data/N_Data/N_Data + N_WZ3Lmllmin01/N_WZ3Lmllmin01/N_WZ3Lmllmin01);
  cout<<"Kfactor: "<<Kfactor<<"+"<<KfactorErr<<endl;



}
