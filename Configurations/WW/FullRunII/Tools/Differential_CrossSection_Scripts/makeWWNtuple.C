#if !defined(__CINT__) || defined(__MAKECINT__)
#include <TROOT.h>                  // access to gROOT, entry point to ROOT system
#include <TSystem.h>                // interface to OS
#include <TMath.h>                  // Math
#include <vector>                   // STL vector class
#include <iostream>                 // standard I/O
#include <iomanip>                  // functions to format standard I/O
#include <fstream>                  // functions for file I/O
#include <string>                   // C++ string class
#include <sstream>                  // class for parsing strings
#include <TFile.h>                  // File handle
#include <TH1D.h>                   // 1D histogram class
#endif

const double pi = TMath::Pi();

void makeWWResult(TString type, TString the0J = "", bool isNormalized = false){

	
  const int nBinWWPTL1 = 8;
  Float_t xbinsWWPTL1[nBinWWPTL1+1];
    xbinsWWPTL1[ 0] =  25;      xbinsWWPTL1[ 1] =  40;      xbinsWWPTL1[ 2] =  45;      xbinsWWPTL1[ 3] =   50;     xbinsWWPTL1[ 4] = 55;      
    xbinsWWPTL1[ 5] =  60;      xbinsWWPTL1[ 6] =  70;      xbinsWWPTL1[ 7] =  80;      xbinsWWPTL1[ 8] =  100;

  const int nBinWWPTL2 = 8;
  Float_t xbinsWWPTL2[nBinWWPTL2+1];
    xbinsWWPTL2[ 0] =  20;      xbinsWWPTL2[ 1] =  30;      xbinsWWPTL2[ 2] =  35;      xbinsWWPTL2[ 3] =   40;     xbinsWWPTL2[ 4] = 45;
    xbinsWWPTL2[ 5] =  50;      xbinsWWPTL2[ 6] =  55;      xbinsWWPTL2[ 7] = 60;	    xbinsWWPTL2[ 8] =  100;

  const int nBinWWMLL = 12;
  Float_t xbinsWWMLL[nBinWWMLL+1];
    xbinsWWMLL[ 0] =  20;      xbinsWWMLL[ 1] =  30;      xbinsWWMLL[ 2] =  40;      xbinsWWMLL[ 3] =   45;     xbinsWWMLL[ 4] = 50;      
    xbinsWWMLL[ 5] =  55;      xbinsWWMLL[ 6] =  60;      xbinsWWMLL[ 7] =  70;      xbinsWWMLL[ 8] =   80;     xbinsWWMLL[ 9] = 100;      
    xbinsWWMLL[10] = 150;      xbinsWWMLL[11] = 200;      xbinsWWMLL[12] = 250;

  const int nBinWWPTLL = 10;
  Float_t xbinsWWPTLL[nBinWWPTLL+1];
    xbinsWWPTLL[ 0] =  30;      xbinsWWPTLL[ 1] =  35;      xbinsWWPTLL[ 2] =  40;      xbinsWWPTLL[ 3] =   45;     xbinsWWPTLL[ 4] = 50;      
    xbinsWWPTLL[ 5] =  55;      xbinsWWPTLL[ 6] =  60;      xbinsWWPTLL[ 7] =  70;      xbinsWWPTLL[ 8] =   80;     xbinsWWPTLL[ 9] = 100;      
    xbinsWWPTLL[10] = 120;

  const int nBinWWPTWW = 7;
  Float_t xbinsWWPTWW[nBinWWPTWW+1];
    xbinsWWPTWW[ 0] =  0;      xbinsWWPTWW[ 1] =  20;      xbinsWWPTWW[ 2] =  30;      xbinsWWPTWW[ 3] =  35;      xbinsWWPTWW[ 4] =  40;
    xbinsWWPTWW[ 5] =  50;      xbinsWWPTWW[ 6] =  60;      xbinsWWPTWW[ 7] =  100; 
	
  const int nBinWWNJET = 4;
  Float_t xbinsWWNJET[nBinWWNJET+1];
    xbinsWWNJET[0] =-0.5; xbinsWWNJET[1] = 0.5; xbinsWWNJET[2] = 1.5; xbinsWWNJET[3] = 2.5; xbinsWWNJET[4] = 3.5;

  const int nBinWWPTJ1 = 11;
  Float_t xbinsWWPTJ1[nBinWWPTJ1+1];
    xbinsWWPTJ1[ 0] =  30;       xbinsWWPTJ1[ 1] =  40;       xbinsWWPTJ1[ 2] =  55;      xbinsWWPTJ1[ 3] =  75;      xbinsWWPTJ1[ 4] =  95;
    xbinsWWPTJ1[ 5] =  120;      xbinsWWPTJ1[ 6] =  150;      xbinsWWPTJ1[ 7] = 180;      xbinsWWPTJ1[ 8] = 215;      xbinsWWPTJ1[ 9] = 255;
    xbinsWWPTJ1[ 10] = 300;      xbinsWWPTJ1[ 11] = 350;

  const int nBinWWPTJ2 = 6;
  Float_t xbinsWWPTJ2[nBinWWPTJ2+1];
    xbinsWWPTJ2[ 0] =  30;       xbinsWWPTJ2[ 1] =  40;       xbinsWWPTJ2[ 2] =  55;      xbinsWWPTJ2[ 3] =  75;      xbinsWWPTJ2[ 4] =  100;
    xbinsWWPTJ2[ 5] =  150;      xbinsWWPTJ2[ 6] =  400;

  const int nBinWWMJJ = 11;
  Float_t xbinsWWMJJ[nBinWWMJJ+1];
    xbinsWWMJJ[ 0] =  0;         xbinsWWMJJ[ 1] =  40;        xbinsWWMJJ[ 2] =  55;       xbinsWWMJJ[ 3] =  70;       xbinsWWMJJ[ 4] =  90;
	  xbinsWWMJJ[ 5] =  110;       xbinsWWMJJ[ 6] =  135;       xbinsWWMJJ[ 7] =  165;      xbinsWWMJJ[ 8] =  200;      xbinsWWMJJ[ 9] =  250;
	  xbinsWWMJJ[ 10] =  300;      xbinsWWMJJ[ 11] =  400;

  const int nBinWWDPHIJJ = 14;
  Float_t xbinsWWDPHIJJ[nBinWWDPHIJJ+1];
    xbinsWWDPHIJJ[ 0] =  0;           xbinsWWDPHIJJ[ 1] =   1./7.*pi;    xbinsWWDPHIJJ[ 2] =  2./7.*pi;     xbinsWWDPHIJJ[ 3] =  3./7.*pi;    
	  xbinsWWDPHIJJ[ 4] =  4./7.*pi;	  xbinsWWDPHIJJ[ 5] =   5./7.*pi;    xbinsWWDPHIJJ[ 6] =   6./7.*pi;    xbinsWWDPHIJJ[ 7] =  pi;
 	  xbinsWWDPHIJJ[ 8] =  8./7.*pi;    xbinsWWDPHIJJ[ 9] =   9./7.*pi;    xbinsWWDPHIJJ[ 10] =  10./7.*pi;   xbinsWWDPHIJJ[ 11] =  11./7.*pi;
 	  xbinsWWDPHIJJ[ 12] =  12./7.*pi;  xbinsWWDPHIJJ[ 13] =  13./7.*pi;   xbinsWWDPHIJJ[ 14] =  14./7.*pi;

  TString xsfname("input_files/");
  TH1D* histoResult;
  if(type == "NJET") {
	  histoResult = new TH1D( "hDWWNJET", "hDWWNJET", nBinWWNJET, xbinsWWNJET ); 
	  xsfname = xsfname + "WW_NJET";
  }
  else if(type == "PTL1")  {
          histoResult = new TH1D( "hDWWPTL1", "hDWWPTL1", nBinWWPTL1, xbinsWWPTL1 );
          xsfname = xsfname + "WW_PTL1";
  }
  else if(type == "PTL2")  {
          histoResult = new TH1D( "hDWWPTL2", "hDWWPTL2", nBinWWPTL2, xbinsWWPTL2 );
          xsfname = xsfname + "WW_PTL2";
  }
  else if(type == "MLL")  {
	  histoResult = new TH1D( "hDWWMLL", "hDWWMLL", nBinWWMLL, xbinsWWMLL ); 
	  xsfname = xsfname + "WW_MLL";
  }
  else if(type == "PTLL")  {
          histoResult = new TH1D( "hDWWPTLL", "hDWWPTLL", nBinWWPTLL, xbinsWWPTLL );
          xsfname = xsfname + "WW_PTLL";
  }
  else if(type == "PTWW")  {
          histoResult = new TH1D( "hDWWPTWW", "hDWWPTWW", nBinWWPTWW, xbinsWWPTWW );
          xsfname = xsfname + "WW_PTWW";
  }
  else if(type == "PTJ1")  {
          histoResult = new TH1D( "hDWWPTJ1", "hDWWPTJ1", nBinWWPTJ1, xbinsWWPTJ1 );
          xsfname = xsfname + "WW_PTJ1";
  }
  else if(type == "PTJ2")  {
          histoResult = new TH1D( "hDWWPTJ2", "hDWWPTJ2", nBinWWPTJ2, xbinsWWPTJ2 );
          xsfname = xsfname + "WW_PTJ2";
  }
  else if(type == "MJJ")  {
          histoResult = new TH1D( "hDWWMJJ", "hDWWMJJ", nBinWWMJJ, xbinsWWMJJ );
          xsfname = xsfname + "WW_MJJ";
  }
  else if(type == "DPHIJJ")  {
          histoResult = new TH1D( "hDWWDPHIJJ", "hDWWDPHIJJ", nBinWWDPHIJJ, xbinsWWDPHIJJ );
          xsfname = xsfname + "WW_DPHIJJ";
  }
  else {printf("WRONG TYPE\n"); return;}


  if(isNormalized) xsfname = xsfname + "_normalized.txt";
  else             xsfname = xsfname + ".txt";

  int count = 0;
  ifstream ifs;
  ifs.open(xsfname.Data());
  cout << "Opening file: " << xsfname.Data() << endl;
  cout << "is_open = " << ifs.is_open() << endl;
  assert(ifs.is_open());
  string line;
  while(getline(ifs,line)) {
    Double_t r,rup,rdown;
    stringstream ss(line);
    ss >> r >> rup >> rdown;
    count++;
    histoResult->SetBinContent(count, r);
    histoResult->SetBinError  (count, (rup+rdown)/2.0);
  }
  ifs.close();

  if(histoResult->GetNbinsX() != count) {printf("DIFFERENT NUMBER OF BINS IN HISTOGRAM AND INPUT FILE: %d %d\n",histoResult->GetNbinsX(),count); return;}

  TString outNtuplename;

  if(isNormalized)
	  outNtuplename = Form("input_files/xs_WW%s%s_normalized.root",type.Data(),the0J.Data());
  else 
	  outNtuplename = Form("input_files/xs_WW%s%s.root",type.Data(),the0J.Data());

  TFile *outtuple = TFile::Open(outNtuplename.Data(),"recreate");
  outtuple->cd();
  histoResult->Write();
  outtuple->Close();
}

void makeWWNtuple(){
 //makeWWResult("PTL1", ""    , false);
 //makeWWResult("PTL1", "0JET", false);
 //makeWWResult("PTL1", ""    , true);
 //makeWWResult("PTL1", "0JET", true);

  makeWWResult("NJET", ""   , false);	
  makeWWResult("PTL1", ""    , false);
  makeWWResult("PTL2", ""    , false);
  makeWWResult("MLL", ""    , false);
  makeWWResult("PTLL", ""    , false);
  makeWWResult("PTWW", ""    , false);
  makeWWResult("PTJ1", ""    , false);
  makeWWResult("PTJ2", ""    , false);
  makeWWResult("MJJ", ""    , false);
  makeWWResult("DPHIJJ", ""    , false);

}
