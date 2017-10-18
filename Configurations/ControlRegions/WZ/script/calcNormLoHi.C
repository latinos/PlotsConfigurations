#define nProcesses 11

enum {iDATA, iFake, iVg, itop, iWZ3LNu, iWgSEE, iWW, iZZ, iDY, iWZ2Q, iWgSMuMu};

void calcNormLoHi(){
  gStyle->SetOptStat(0);
  TH1::SetDefaultSumw2();

  double LLowBin(100);
  double LLowUP(5);

  TString fileName("../Full2016/rootFile_WZ_WZCut_Nlep2_LepCut3/plots_WZ_WZCut_Nlep2_LepCut3.root");
  //TString fileName("../Full2016/rootFile_WZ_WZCut_3tight_3W/plots_WZ_WZCut_3tight_3W.root");
  //TString fileName("../Full2016/rootFile_WZ_WZCut_3tight/plots_WZ_WZCut_3tight.root");
  cout<<fileName<<endl;
  TFile *myF   = new TFile(fileName);





  //// Calculate the efficiency
  //int effBinL = 1+ 0.0*LLowBin/LLowUP;
  ////int effBinL = 1+ 0.1*LLowBin/LLowUP;
  //int effBinH = 1+ 1*LLowBin/LLowUP;
  //double ZgSt_Data 	= h_Data->Integral(effBinL,effBinH);
  //double ZgSt_Vg   	= h_Vg->Integral(effBinL,effBinH);
  //double ZgSt_WZgS_L = h_WZgS_L->Integral(effBinL,effBinH);
  //double ZgSt_ggH_hww = h_ggH_hww->Integral(effBinL,effBinH);
  ////double Z_Fake		= h_Fake->Integral(42,48);
  //double ZgSt_DY		= h_DY->Integral(effBinL,effBinH);
  //double ZgSt_top		= h_top->Integral(effBinL,effBinH);

  //ZgSt_Data  = ZgSt_Data - ZgSt_Vg - ZgSt_DY - ZgSt_top - ZgSt_ggH_hww;

  //double eff01 = ZgSt_Data/ZgSt_WZgS_L;
  //double effErr01 =eff01* TMath::Sqrt(ZgSt_Data/ZgSt_Data/ZgSt_Data + ZgSt_WZgS_L/ZgSt_WZgS_L/ZgSt_WZgS_L);
  //cout<<"Eff_01: "<<eff01<<"+"<<effErr01<<endl;

  TString channel[6];
  channel[0]="ZTomumuWTomu";
  channel[1]="ZTomumuWToe";
  channel[2]="ZTomumu";
  channel[3]="ZToeeWTomu";
  channel[4]="ZToeeWToe";
  channel[5]="ZToee";

  enum idxChannel{ZTomumuWTomu,ZTomumuWToe,ZTomumu,ZToeeWTomu,ZToeeWToe,ZToee};

  double NorFactmllWgSt_WZ4[6];
  double NorFactmllWgSt_WZ4_Err[6];
  double NorFactmllmin3l_WZ4[6];
  double NorFactmllmin3l_WZ4_Err[6];

  double NorFactmllWgSt_WZ01[6];
  double NorFactmllWgSt_WZ01_Err[6];
  double NorFactmllmin3l_WZ01[6];
  double NorFactmllmin3l_WZ01_Err[6];

  TString tstring_mllWgSt("/mllWgSt/");

  // Zpeak mllWgSt ====================================
  double nBin_mllWgSt(120);
  double upper_mllWgSt(120);
  int effBinZmllWgSt_L = 1+ 80*nBin_mllWgSt/upper_mllWgSt;
  int effBinZmllWgSt_H = 1+ 110*nBin_mllWgSt/upper_mllWgSt;

  double nBin_mllmin3l(120);
  double upper_mllmin3l(120);
  int effBinZmllmin3l_L = 1+ 80*nBin_mllmin3l/upper_mllmin3l;
  int effBinZmllmin3l_H = 1+ 110*nBin_mllmin3l/upper_mllmin3l;


  TH1F* hmllWgSt_ggWW   ; 
  TH1F* hmllWgSt_ggH_hww; 
  TH1F* hmllWgSt_qqH_hww; 
  TH1F* hmllWgSt_Vg     ; 
  TH1F* hmllWgSt_VVV    ; 
  TH1F* hmllWgSt_top    ; 
  TH1F* hmllWgSt_ggZH_hww;
  TH1F* hmllWgSt_DATA   ; 
  TH1F* hmllWgSt_WW     ; 
  TH1F* hmllWgSt_WZgS_L ; 
  TH1F* hmllWgSt_Fake   ; 
  TH1F* hmllWgSt_WH_hww ; 
  TH1F* hmllWgSt_WZgS_H ; 
  TH1F* hmllWgSt_DY     ; 
  TH1F* hmllWgSt_H_htt  ; 
  TH1F* hmllWgSt_VZ     ; 
  TH1F* hmllWgSt_bbH_hww; 
  TH1F* hmllWgSt_WZ     ; 
  TH1F* hmllWgSt_ZH_hww ; 

  TString histBaseZmllWgSt;

  double nZmllWgSt_ggWW    ;
  double nZmllWgSt_ggH_hww ;
  double nZmllWgSt_qqH_hww ;
  double nZmllWgSt_Vg      ;
  double nZmllWgSt_VVV     ;
  double nZmllWgSt_top     ;
  double nZmllWgSt_ggZH_hww;
  double nZmllWgSt_DATA    ;
  double nZmllWgSt_WW      ;
  double nZmllWgSt_WZgS_L  ;
  double nZmllWgSt_Fake    ;
  double nZmllWgSt_WH_hww  ;
  double nZmllWgSt_WZgS_H  ;
  double nZmllWgSt_DY      ;
  double nZmllWgSt_H_htt   ;
  double nZmllWgSt_VZ      ;
  double nZmllWgSt_bbH_hww ;
  double nZmllWgSt_WZ      ;
  double nZmllWgSt_ZH_hww  ;


  double nZmllWgSt_DATA_for_WZ ;



  TString histBaseZmllmin3l;
  TH1F* hmllmin3l_ggWW    ;
  TH1F* hmllmin3l_ggH_hww ;
  TH1F* hmllmin3l_qqH_hww ;
  TH1F* hmllmin3l_Vg      ;
  TH1F* hmllmin3l_VVV     ;
  TH1F* hmllmin3l_top     ;
  TH1F* hmllmin3l_ggZH_hww;
  TH1F* hmllmin3l_DATA    ;
  TH1F* hmllmin3l_WW      ;
  TH1F* hmllmin3l_WZgS_L  ;
  TH1F* hmllmin3l_Fake    ;
  TH1F* hmllmin3l_WH_hww  ;
  TH1F* hmllmin3l_WZgS_H  ;
  TH1F* hmllmin3l_DY      ;
  TH1F* hmllmin3l_H_htt   ;
  TH1F* hmllmin3l_VZ      ;
  TH1F* hmllmin3l_bbH_hww ;
  TH1F* hmllmin3l_WZ      ;
  TH1F* hmllmin3l_ZH_hww  ;

  double nZmllmin3l_ggWW    ;
  double nZmllmin3l_ggH_hww ;
  double nZmllmin3l_qqH_hww ;
  double nZmllmin3l_Vg      ;
  double nZmllmin3l_VVV     ;
  double nZmllmin3l_top     ;
  double nZmllmin3l_ggZH_hww;
  double nZmllmin3l_DATA    ;
  double nZmllmin3l_WW      ;
  double nZmllmin3l_WZgS_L  ;
  double nZmllmin3l_Fake    ;
  double nZmllmin3l_WH_hww  ;
  double nZmllmin3l_WZgS_H  ;
  double nZmllmin3l_DY      ;
  double nZmllmin3l_H_htt   ;
  double nZmllmin3l_VZ      ;
  double nZmllmin3l_bbH_hww ;
  double nZmllmin3l_WZ      ;
  double nZmllmin3l_ZH_hww  ;



  double nZmllmin3l_DATA_for_WZ ;




  for(int i(0); i<6; i++){
    cout<<"decay channel: "<<channel[i]<<"====================================="<<endl;
    histBaseZmllWgSt=channel[i]+tstring_mllWgSt;
    cout<<"histogram dir:"<<histBaseZmllWgSt<<endl;
    hmllWgSt_ggWW    = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_ggWW");
    hmllWgSt_ggH_hww = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_ggH_hww");
    hmllWgSt_qqH_hww = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_qqH_hww");
    hmllWgSt_Vg      = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_Vg");
    hmllWgSt_VVV     = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_VVV");
    hmllWgSt_top     = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_top");
    hmllWgSt_ggZH_hww= (TH1F*)myF->Get(histBaseZmllWgSt+"histo_ggZH_hww");
    hmllWgSt_DATA    = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_DATA");
    hmllWgSt_WW      = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_WW");
    hmllWgSt_WZgS_L  = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_WZgS_L");
    hmllWgSt_Fake    = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_Fake");
    hmllWgSt_WH_hww  = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_WH_hww");
    hmllWgSt_WZgS_H  = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_WZgS_H");
    hmllWgSt_DY      = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_DY");
    hmllWgSt_H_htt   = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_H_htt");
    hmllWgSt_VZ      = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_VZ");
    hmllWgSt_bbH_hww = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_bbH_hww");
    hmllWgSt_WZ      = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_WZ");
    hmllWgSt_ZH_hww  = (TH1F*)myF->Get(histBaseZmllWgSt+"histo_ZH_hww");

  // Calculate the efficiency
    nZmllWgSt_ggWW    = hmllWgSt_ggWW    ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_ggH_hww = hmllWgSt_ggH_hww ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_qqH_hww = hmllWgSt_qqH_hww ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_Vg      = hmllWgSt_Vg      ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_VVV     = hmllWgSt_VVV     ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_top     = hmllWgSt_top     ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_ggZH_hww= hmllWgSt_ggZH_hww->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_DATA    = hmllWgSt_DATA    ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_WW      = hmllWgSt_WW      ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_WZgS_L  = hmllWgSt_WZgS_L  ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_Fake    = hmllWgSt_Fake    ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_WH_hww  = hmllWgSt_WH_hww  ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_WZgS_H  = hmllWgSt_WZgS_H  ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_DY      = hmllWgSt_DY      ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_H_htt   = hmllWgSt_H_htt   ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_VZ      = hmllWgSt_VZ      ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_bbH_hww = hmllWgSt_bbH_hww ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_WZ      = hmllWgSt_WZ      ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);
    nZmllWgSt_ZH_hww  = hmllWgSt_ZH_hww  ->Integral(effBinZmllWgSt_L, effBinZmllWgSt_H);



    nZmllWgSt_DATA_for_WZ = nZmllWgSt_DATA - nZmllWgSt_ggWW -nZmllWgSt_ggH_hww - nZmllWgSt_qqH_hww
                        - nZmllWgSt_Vg - nZmllWgSt_VVV - nZmllWgSt_top - nZmllWgSt_ggZH_hww - nZmllWgSt_WW
			- nZmllWgSt_Fake - nZmllWgSt_WH_hww - nZmllWgSt_DY - nZmllWgSt_H_htt - nZmllWgSt_VZ
			- nZmllWgSt_bbH_hww - nZmllWgSt_ZH_hww;



    nZmllWgSt_WZ /=1.1; // already multiplied at sample.py
    NorFactmllWgSt_WZ4[i]   = nZmllWgSt_DATA_for_WZ/nZmllWgSt_WZ;
    NorFactmllWgSt_WZ4_Err[i] =NorFactmllWgSt_WZ4[i]* TMath::Sqrt(1/nZmllWgSt_DATA_for_WZ ); //Err = f*sqrt(e^2/A^2 +...) MC error is ignorable
    cout<<"NorFact_ZmllWgSt_WZ4: "<<NorFactmllWgSt_WZ4[i]<<"+/-"<<NorFactmllWgSt_WZ4_Err[i]<<endl;

    NorFactmllWgSt_WZ01[i]    = nZmllWgSt_DATA_for_WZ/(nZmllWgSt_WZgS_L + nZmllWgSt_WZgS_H);
    NorFactmllWgSt_WZ01_Err[i] =NorFactmllWgSt_WZ01[i]* TMath::Sqrt(1/nZmllWgSt_DATA_for_WZ );
    cout<<"Eff_ZmllWgSt_WZ01: "<<NorFactmllWgSt_WZ01[i]<<"+/-"<<NorFactmllWgSt_WZ01_Err[i]<<endl;

  // Zpeak mllmin3l ====================================
    histBaseZmllmin3l=channel[i]+"/mllmin3l/";
    cout<<"histogram name dir: "<<histBaseZmllmin3l<<endl;
    hmllmin3l_ggWW    = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_ggWW");
    hmllmin3l_ggH_hww = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_ggH_hww");
    hmllmin3l_qqH_hww = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_qqH_hww");
    hmllmin3l_Vg      = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_Vg");
    hmllmin3l_VVV     = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_VVV");
    hmllmin3l_top     = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_top");
    hmllmin3l_ggZH_hww= (TH1F*)myF->Get(histBaseZmllmin3l+"histo_ggZH_hww");
    hmllmin3l_DATA    = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_DATA");
    hmllmin3l_WW      = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_WW");
    hmllmin3l_WZgS_L  = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_WZgS_L");
    hmllmin3l_Fake    = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_Fake");
    hmllmin3l_WH_hww  = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_WH_hww");
    hmllmin3l_WZgS_H  = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_WZgS_H");
    hmllmin3l_DY      = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_DY");
    hmllmin3l_H_htt   = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_H_htt");
    hmllmin3l_VZ      = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_VZ");
    hmllmin3l_bbH_hww = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_bbH_hww");
    hmllmin3l_WZ      = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_WZ");
    hmllmin3l_ZH_hww  = (TH1F*)myF->Get(histBaseZmllmin3l+"histo_ZH_hww");



  // Calculate the efficiency

    nZmllmin3l_ggWW    = hmllmin3l_ggWW    ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_ggH_hww = hmllmin3l_ggH_hww ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_qqH_hww = hmllmin3l_qqH_hww ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_Vg      = hmllmin3l_Vg      ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_VVV     = hmllmin3l_VVV     ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_top     = hmllmin3l_top     ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_ggZH_hww= hmllmin3l_ggZH_hww->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_DATA    = hmllmin3l_DATA    ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_WW      = hmllmin3l_WW      ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_WZgS_L  = hmllmin3l_WZgS_L  ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_Fake    = hmllmin3l_Fake    ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_WH_hww  = hmllmin3l_WH_hww  ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_WZgS_H  = hmllmin3l_WZgS_H  ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_DY      = hmllmin3l_DY      ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_H_htt   = hmllmin3l_H_htt   ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_VZ      = hmllmin3l_VZ      ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_bbH_hww = hmllmin3l_bbH_hww ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_WZ      = hmllmin3l_WZ      ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);
    nZmllmin3l_ZH_hww  = hmllmin3l_ZH_hww  ->Integral(effBinZmllmin3l_L, effBinZmllmin3l_H);



    nZmllmin3l_DATA_for_WZ = nZmllmin3l_DATA - nZmllmin3l_ggWW -nZmllmin3l_ggH_hww - nZmllmin3l_qqH_hww
                        - nZmllmin3l_Vg - nZmllmin3l_VVV - nZmllmin3l_top - nZmllmin3l_ggZH_hww - nZmllmin3l_WW
			- nZmllmin3l_Fake - nZmllmin3l_WH_hww - nZmllmin3l_DY - nZmllmin3l_H_htt - nZmllmin3l_VZ
			- nZmllmin3l_bbH_hww - nZmllmin3l_ZH_hww;



    nZmllmin3l_WZ /=1.1; // already multiplied at sample.py
    NorFactmllmin3l_WZ4[i]   = nZmllmin3l_DATA_for_WZ/nZmllmin3l_WZ;
    NorFactmllmin3l_WZ4_Err[i] =NorFactmllmin3l_WZ4[i]* TMath::Sqrt(1/nZmllmin3l_DATA_for_WZ );
    cout<<"Eff_Zmllmin3l_WZ: "<<NorFactmllmin3l_WZ4[i]<<"+/-"<<NorFactmllmin3l_WZ4_Err[i]<<endl;

    NorFactmllmin3l_WZ01[i]    = nZmllmin3l_DATA_for_WZ/(nZmllmin3l_WZgS_L + nZmllmin3l_WZgS_H);
    NorFactmllmin3l_WZ01_Err[i] =NorFactmllmin3l_WZ01[i]* TMath::Sqrt(1/nZmllmin3l_DATA_for_WZ );
    cout<<"Eff_Zmllmin3l_WZ01: "<<NorFactmllmin3l_WZ01[i]<<"+/-"<<NorFactmllmin3l_WZ01_Err[i]<<endl;

  }

  cout<<"Calculating average================================================"<<endl;
  cout<<"ZTomumuWToe WZ4: "<<NorFactmllmin3l_WZ4[idxChannel::ZTomumuWToe]<<"+"<<NorFactmllmin3l_WZ4_Err[idxChannel::ZTomumuWToe]<<endl;
  cout<<"ZToeeWTomu WZ4: "<<NorFactmllmin3l_WZ4[idxChannel::ZToeeWTomu]<<"+"<<NorFactmllmin3l_WZ4_Err[idxChannel::ZToeeWTomu]<<endl;
  double meanWZ4_Err = 1/TMath::Sqrt(1/NorFactmllmin3l_WZ4_Err[idxChannel::ZTomumuWToe]/NorFactmllmin3l_WZ4_Err[idxChannel::ZTomumuWToe]
                           +1/NorFactmllmin3l_WZ4_Err[idxChannel::ZToeeWTomu]/NorFactmllmin3l_WZ4_Err[idxChannel::ZToeeWTomu]);
  double meanWZ4 = meanWZ4_Err*meanWZ4_Err*(NorFactmllmin3l_WZ4[idxChannel::ZTomumuWToe]/NorFactmllmin3l_WZ4_Err[idxChannel::ZTomumuWToe]/NorFactmllmin3l_WZ4_Err[idxChannel::ZTomumuWToe]
                         +NorFactmllmin3l_WZ4[idxChannel::ZToeeWTomu]/NorFactmllmin3l_WZ4_Err[idxChannel::ZToeeWTomu]/NorFactmllmin3l_WZ4_Err[idxChannel::ZToeeWTomu]);
  cout<<"WZ4 normalization factor: "<<meanWZ4<<"+"<<meanWZ4_Err<<"+"<<fabs(NorFactmllmin3l_WZ4[idxChannel::ZTomumuWToe]-NorFactmllmin3l_WZ4[idxChannel::ZToeeWTomu])<<endl;

  cout<<"ZTomumuWToe WZ01: "<<NorFactmllmin3l_WZ01[idxChannel::ZTomumuWToe]<<"+"<<NorFactmllmin3l_WZ01_Err[idxChannel::ZTomumuWToe]<<endl;
  cout<<"ZToeeWTomu WZ01: "<<NorFactmllmin3l_WZ01[idxChannel::ZToeeWTomu]<<"+"<<NorFactmllmin3l_WZ01_Err[idxChannel::ZToeeWTomu]<<endl;
  double meanWZ01_Err = 1/TMath::Sqrt(1/NorFactmllmin3l_WZ01_Err[idxChannel::ZTomumuWToe]/NorFactmllmin3l_WZ01_Err[idxChannel::ZTomumuWToe]
                           +1/NorFactmllmin3l_WZ01_Err[idxChannel::ZToeeWTomu]/NorFactmllmin3l_WZ01_Err[idxChannel::ZToeeWTomu]);
  double meanWZ01 = meanWZ01_Err*meanWZ01_Err*(NorFactmllmin3l_WZ01[idxChannel::ZTomumuWToe]/NorFactmllmin3l_WZ01_Err[idxChannel::ZTomumuWToe]/NorFactmllmin3l_WZ01_Err[idxChannel::ZTomumuWToe]
                         +NorFactmllmin3l_WZ01[idxChannel::ZToeeWTomu]/NorFactmllmin3l_WZ01_Err[idxChannel::ZToeeWTomu]/NorFactmllmin3l_WZ01_Err[idxChannel::ZToeeWTomu]);
  cout<<"WZ01 normalization factor: "<<meanWZ01<<"+"<<meanWZ01_Err<<"+"<<fabs(NorFactmllmin3l_WZ01[idxChannel::ZTomumuWToe]-NorFactmllmin3l_WZ01[idxChannel::ZToeeWTomu])<<endl;


}

