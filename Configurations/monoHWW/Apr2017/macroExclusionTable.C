/*

root -l -b -q 'macroExclusionTable.C("muccamva2HDMadaptFull_All_Bin600","em","MVA","2HDM",false)'
root -l -b -q 'macroExclusionTable.C("muccamva2HDMadaptFull_All_Bin800","em","MVA","2HDM",false)'
root -l -b -q 'macroExclusionTable.C("muccamva2HDMadaptFull_All_Bin1000","em","MVA","2HDM",false)'
root -l -b -q 'macroExclusionTable.C("muccamva2HDMadaptFull_All_Bin2000","em","MVA","2HDM",false)'
root -l -b -q 'macroExclusionTable.C("muccamva2HDMadaptFull_All_Bin600","em","MVA","2HDM",true)'
root -l -b -q 'macroExclusionTable.C("muccamva2HDMadaptFull_All_Bin800","em","MVA","2HDM",true)'
root -l -b -q 'macroExclusionTable.C("muccamva2HDMadaptFull_All_Bin1000","em","MVA","2HDM",true)'
root -l -b -q 'macroExclusionTable.C("muccamva2HDMadaptFull_All_Bin2000","em","MVA","2HDM",true)'

root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_Bin100","em","MVA","Zbar",false)'
root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_Bin1000","em","MVA","Zbar",false)'
root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_Bin2000","em","MVA","Zbar",false)'
root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_Bin100","em","MVA","Zbar",true)'
root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_Bin1000","em","MVA","Zbar",true)'
root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_Bin2000","em","MVA","Zbar",true)'

*/

#include <Riostream.h>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include "TTree.h"
#include "TH1D.h"
#include "TFile.h"
#include "TROOT.h"
#include "TGraphAsymmErrors.h"
#include "TCanvas.h"
#include "TLine.h"
#include "TLatex.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TPaveText.h"

using namespace std;

float intLumi = 35.9;

const int nX_2HDM = 8;
const int nY_2HDM = 6;
TString mZp[nX_2HDM]      = {"600","800","1000","1200","1400","1700","2000","2500"}; 
TString mA0[nY_2HDM]      = {"300","400","500","600","700","800"};
Float_t x_2HDM[nX_2HDM+1] = {400,600,800,1000,1200,1400,1700,2000,2500};
Float_t y_2HDM[nY_2HDM+1] = {200,300,400,500,600,700,800};
//TH2F* mymap2HDM   = new TH2F("mymap2HDM","mymap2HDM",nX_2HDM,x_2HDM,nY_2HDM,y_2HDM);

const int nX_Zbar = 15;
const int nY_Zbar = 6;
TString mZb[nX_Zbar]      = {"10","15","20","50","95","100","200","295","300","500","995","1000","1995","2000","10000"};
TString mChi[nY_Zbar]     = {"1","10","50","150","500","1000"};
Float_t x_Zbar[nX_Zbar+1] = {0,10,15,20,50,95,100,200,295,300,500,995,1000,1995,2000,10000};
Float_t y_Zbar[nY_Zbar+1] = {0,1,10,50,150,500,1000};
//TH2F* mymapZbar  = new TH2F("mymapZbar","mymapZbar",nX_Zbar,x_Zbar,nY_Zbar,y_Zbar);

double limit;

void macroExclusionTable(TString variable  = "mthBin",
			 TString channel   = "em",
			 TString cut       = "MVA",
			 TString model     = "2HDM",
			 bool    isBlind   = false
			 ){
  Int_t nX,nY;
  Float_t xx[100];
  Float_t yy[100];
  TString mX[100];
  TString mY[100];

  if (model == "2HDM"){
    nX = nX_2HDM;
    nY = nY_2HDM;
    for (int i = 0; i < nX+1; ++i)
      xx[i] = x_2HDM[i];
    for (int i = 0; i < nX; ++i)
      mX[i] = mZp[i];
    for (int i = 0; i < nY+1; ++i)
      yy[i] = y_2HDM[i];
    for (int i = 0; i < nY; ++i)
      mY[i] = mA0[i];
  }
  else if (model == "Zbar"){
    nX = nX_Zbar;
    nY = nY_Zbar;
    for (int i = 0; i < nX+1; ++i)
      xx[i] = x_Zbar[i];
    for (int i = 0; i < nX; ++i)
      mX[i] = mZb[i];
    for (int i = 0; i < nY+1; ++i)
      yy[i] = y_Zbar[i];
    for (int i = 0; i < nY; ++i)
      mY[i] = mChi[i];
  }
  else{
    cout<<"Sorry, I don't know the model "<<model<<endl;
    return; 
  }

  TH2F* mymap  = new TH2F("mymap","mymap",nX,0,nX,nY,0,nY);
  TH2F* myobs  = new TH2F("myobs","myobs",nX,0,nX,2*nY,0,nY);

  TString filename = "";
  for (int i = 0; i < nX; ++i){
    mymap->GetXaxis()->SetBinLabel(i+1,mX[i]);
    for (int j = 0; j < nY; ++j){
      mymap->GetYaxis()->SetBinLabel(j+1,mY[j]);
      if (model == "2HDM"){
	filename = "combine_" + channel + "_" + cut + "/higgsCombine" + mX[i] + "_" + mY[j] + "_"+ variable + ".Asymptotic.mH120.root";
	if (isBlind)
	  filename = "combine_" + channel + "_" + cut + "/higgsCombine" + mX[i] + "_" + mY[j] + "_"+ variable + "_blind.Asymptotic.mH120.root";
      }
      if (model == "Zbar"){
	filename = "combine_" + channel + "_" + cut + "/higgsCombineZB_" + mX[i] + "_" + mY[j] + "__"+ variable + ".Asymptotic.mH120.root";
	if (isBlind)
	  filename = "combine_" + channel + "_" + cut + "/higgsCombineZB_" + mX[i] + "_" + mY[j] + "__"+ variable + "_blind.Asymptotic.mH120.root";
      }
      cout<<"Name: "<<filename<<endl;
      TFile* f = NULL;
      f = TFile::Open(filename,"read");
      if (f == NULL) continue;
      TTree* t = NULL;
      t = (TTree*)f->Get("limit");
      if (t == NULL){
	cout<<"Launch again this:"<<endl;
	if (model == "2HDM")
	  cout<<"python scriptMonoHSplit.py em "<<variable<<" MVA "<<mX[i]<<" "<<mY[j]<<endl;
	if (model == "Zbar")
	  cout<<"python scriptMonoHSplit.py em "<<variable<<" MVA ZB "<<mX[i]<<"_"<<mY[j]<<endl;
	  continue;
      }
      t->SetBranchAddress("limit", &limit);
      if (t->GetEntries() < 2){
	cout<<"Launch again this:"<<endl;
	if (model == "2HDM")
	  cout<<"python scriptMonoHSplit.py em "<<variable<<" MVA "<<mX[i]<<" "<<mY[j]<<endl;
	if (model == "Zbar")
	  cout<<"python scriptMonoHSplit.py em "<<variable<<" MVA ZB "<<mX[i]<<"_"<<mY[j]<<endl;
	  continue;
      }
      t->GetEntry(2);
      mymap -> SetBinContent(i+1,j+1,limit);
      if (isBlind){
	t->GetEntry(5);
	myobs -> SetBinContent(i+1,2*j+1,limit);
      }
    }
  }
  gStyle->SetOptStat(0);
  gStyle->SetPaintTextFormat("4.2f");
  TString mapTitle = "Exclusion Limits for " + model +  " Model - " + variable + " Variable";
  if (isBlind)
    mapTitle = mapTitle + "(2.4fb^{-1})";
  if (!isBlind)
    mapTitle = mapTitle + "(35.9fb^{-1})";
  mymap->SetTitle(mapTitle);
  mymap->GetXaxis()->SetTitle("mZp [GeV]");
  if (model == "2HDM")
    mymap->GetYaxis()->SetTitle("mA0 [GeV]");
  if (model == "Zbar")
    mymap->GetYaxis()->SetTitle("m#chi [GeV]");
  mymap->GetYaxis()->SetTitleOffset(1.5);
  TCanvas *c1 = new TCanvas("c1","c1",800,800);
  c1->cd();
  TPad* pad1 = new TPad("pad1","pad1",0.,0.,1.,1.);
  pad1->SetLeftMargin(0.15);
  pad1->SetRightMargin(0.15);
  pad1->Draw();
  pad1->cd();
  mymap->Draw("colz,text");
  if (isBlind)
    myobs->Draw("text,same");
  TString plotTitle = "ExclusionMap" + model + variable;
  if (isBlind)
    plotTitle = plotTitle + "_blind";
  c1->Print(plotTitle + ".png");
  c1->Print(plotTitle + ".pdf");
}



