#define nProcesses 11

enum {iDATA, iFake, iVg, itop, iWZ3LNu, iWgSEE, iWW, iZZ, iDY, iWZ2Q, iWgSMuMu};

void calcK_mll01(){
  gStyle->SetOptStat(0);
  TH1::SetDefaultSumw2();

  TFile *myF   = new TFile("rootFile/plots_WZTo3LNu_baseW.root");

  //range' : (60,0,120)
  TH1F* h_WZ3LNumll01 = (TH1F*)myF->Get("GenZ0/Gen_ZGstar_mass/histo_WZTo3LNu0p1GeV");
  TH1F* h_WZ3LNumll4  = (TH1F*)myF->Get("GenZ0/Gen_ZGstar_mass/histo_WZTo3LNu4GeV");


  // Calculate the efficiency
  double Z_WZ3LNumll01 = h_WZ3LNumll01->Integral(42,48);
  double Z_WZ3LNumll4  = h_WZ3LNumll4->Integral(42,48);


  double kFactor = Z_WZ3LNumll4/Z_WZ3LNumll01;
  double kErr =kFactor* TMath::Sqrt(Z_WZ3LNumll4/Z_WZ3LNumll4/Z_WZ3LNumll4 + Z_WZ3LNumll01/Z_WZ3LNumll01/Z_WZ3LNumll01);

  cout<<"Kfactor (Z_WZ3LNumll4/Z_WZ3LNumll01): "<<kFactor<<"+"<<kErr<<endl;



}
