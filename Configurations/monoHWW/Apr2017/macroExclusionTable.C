/*                           

Run this in lxplus7 !!!
                                                                             
source /cvmfs/sft.cern.ch/lcg/contrib/gcc/4.8/x86_64-centos7-gcc48-opt/setup.sh
source /cvmfs/sft.cern.ch/lcg/app/releases/ROOT/6.12.06/x86_64-centos7-gcc48-opt/root/bin/thisroot.sh

// 2HDM Model

root -l -b -q 'macroExclusionTable.C("muccamva2HDMadaptFull_All_Bin800","em","MVA","2HDM",false)'
root -l -b
.L macroExclusionTable.C
smoothMap("2HDM","muccamva2HDMadaptFull_All_Bin800")
drawLines("2HDM","muccamva2HDMadaptFull_All_Bin800")
putEverythingTogether("2HDM","muccamva2HDMadaptFull_All_Bin800")
putEverythingTogetherSmooth("2HDM","muccamva2HDMadaptFull_All_Bin800")
.q

cp ExclusionMap* ~/www/figuresLxplus/18Sep2018/Apr2017/pulls_em_MVA/

// Zbar Model

root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_Bin100","em","MVA","Zbar",false)'
root -l -b
.L macroExclusionTable.C
smoothMap("Zbar","muccamvaZbaradaptFull_All_Bin100")
drawLines("Zbar","muccamvaZbaradaptFull_All_Bin100")
putEverythingTogether("Zbar","muccamvaZbaradaptFull_All_Bin100")
putEverythingTogetherSmooth("Zbar","muccamvaZbaradaptFull_All_Bin100")
.q

cp ExclusionMap* ~/www/figuresLxplus/18Sep2018/Apr2017/pulls_em_MVA/

root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_Bin1000","em","MVA","Zbar",false)'
root -l -b
.L macroExclusionTable.C
smoothMap("Zbar","muccamvaZbaradaptFull_All_Bin1000")
drawLines("Zbar","muccamvaZbaradaptFull_All_Bin1000")
putEverythingTogether("Zbar","muccamvaZbaradaptFull_All_Bin1000")
putEverythingTogetherSmooth("Zbar","muccamvaZbaradaptFull_All_Bin1000")
.q

cp ExclusionMap* ~/www/figuresLxplus/16Mar2018/Apr2017/pulls_em_MVA/


root -l -b -q 'macroExclusionTable.C("muccamva2HDMadaptFull_All_NoWeights_Bin800","em","MVA","2HDM",false)'
root -l -b -q 'macroExclusionTable.C("muccamva2HDMadaptFull_All_Bin800","em","MVA","2HDM",true)'
root -l -b -q 'macroExclusionTable.C("muccamva2HDMadaptFull_All_NoWeights_Bin800","em","MVA","2HDM",true)'

root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_Bin100","em","MVA","Zbar",false)'
root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_NoWeights_Bin100","em","MVA","Zbar",false)'
root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_Bin1000","em","MVA","Zbar",false)'
root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_NoWeights_Bin1000","em","MVA","Zbar",false)'
root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_Bin100","em","MVA","Zbar",true)'
root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_NoWeights_Bin100","em","MVA","Zbar",true)'
root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_Bin1000","em","MVA","Zbar",true)'
root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_NoWeights_Bin1000","em","MVA","Zbar",true)'

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
#include "tdrStyle/CMS_lumi.C"

using namespace std;

float intLumi = 35.9;

const int nX_2HDM = 42;
const int nY_2HDM = 28;
TString mZp[nX_2HDM]      = {"450","500","550","600","650","700","750","800","850","900","950","1000","1050","1100","1150","1200","1250","1300","1350","1400","1450","1500","1550","1600","1650","1700","1750","1800","1850","1900","1950","2000","2050","2100","2150","2200","2250","2300","2350","2400","2450","2500"};
TString mA0[nY_2HDM]      = {"300","325","350","375","400","425","450","475","500","525","550","575","600","625","650","675","700","725","750","775","800","825","850","875","900","925","950","975"};

Float_t x_2HDM[nX_2HDM] = {450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000,2050,2100,2150,2200,2250,2300,2350,2400,2450,2500};
Float_t y_2HDM[nY_2HDM] = {300,325,350,375,400,425,450,475,500,525,550,575,600,625,650,675,700,725,750,775,800,825,850,875,900,925,950,975};

// if (model == "2HDM"){
//   map -> GetYaxis() -> SetRangeUser(300,700);
//   map -> GetXaxis() -> SetRangeUser(450,2000);
// }

const int nX_Zbar = 37;
const int nY_Zbar = 52;

TString mZb[nX_Zbar]      = {"10","15","20","30","40","50","75","95","100","150","200","250","300","350","400","450","500","550","600","650","700","750","800","850","900","950","1000","1100","1200","1300","1400","1500","1600","1700","1800","1900","2000"};
TString mChi[nY_Zbar]     = {"1","5","10","15","20","25","30","35","40","45","50","60","70","80","90","100","125","150","175","200","225","250","275","300","325","350","375","400","425","450","475","500","525","550","575","600","625","650","675","700","725","750","775","800","825","850","875","900","925","950","975","1000"};
Float_t x_Zbar[nX_Zbar] = {10,15,20,30,40,50,75,95,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
Float_t y_Zbar[nY_Zbar] = {1,5,10,15,20,25,30,35,40,45,50,60,70,80,90,100,125,150,175,200,225,250,275,300,325,350,375,400,425,450,475,500,525,550,575,600,625,650,675,700,725,750,775,800,825,850,875,900,925,950,975,1000};


//   if (model == "Zbar"){
//   map -> GetYaxis() -> SetRangeUser(0,1000);
//   map -> GetXaxis() -> SetRangeUser(0,2000);
// }


double limit;

void macroExclusionTable(TString variable  = "mthBin",
			 TString channel   = "em",
			 TString cut       = "MVA",
			 TString model     = "2HDM",
			 bool    isBlind   = false
			 ){

  Int_t nX,nY,minX,maxX,minY,maxY;
  Float_t xx[100];
  Float_t yy[100];
  TString mX[100];
  TString mY[100];

  if (model == "2HDM"){
    minX = 600;
    maxX = 2500;
    minY = 300;
    maxY = 975;
    nX = nX_2HDM;
    nY = nY_2HDM;
    for (int i = 0; i < nX; ++i)
      xx[i] = x_2HDM[i];
    for (int i = 0; i < nX; ++i)
      mX[i] = mZp[i];
    for (int i = 0; i < nY; ++i)
      yy[i] = y_2HDM[i];
    for (int i = 0; i < nY; ++i)
      mY[i] = mA0[i];
  }
  else if (model == "Zbar"){
    minX = 1;
    maxX = 10000;
    minY = 1;
    maxY = 1000;
    nX = nX_Zbar;
    nY = nY_Zbar;
    for (int i = 0; i < nX; ++i)
      xx[i] = x_Zbar[i];
    for (int i = 0; i < nX; ++i)
      mX[i] = mZb[i];
    for (int i = 0; i < nY; ++i)
      yy[i] = y_Zbar[i];
    for (int i = 0; i < nY; ++i)
      mY[i] = mChi[i];
  }
  else{
    cout<<"Sorry, I don't know the model "<<model<<endl;
    return; 
  }

  // Float_t xbins[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 12, 16, 20};
  // TH1F *EFar = new TH1F("EFar","EFar title",11,xbins);

  TH2F* mymap            = new TH2F("mymap","mymap",nX-1,xx,nY-1,yy); //nominal
  TH2F* mymapOneSigmaUp  = new TH2F("mymapOneSigmaUp","mymapOneSigmaUp",nX-1,xx,nY-1,yy); // +1 sigma
  TH2F* mymapOneSigmaDo  = new TH2F("mymapOneSigmaDo","mymapOneSigmaDo",nX-1,xx,nY-1,yy); // -1 sigma
  TH2F* mymapTwoSigmaUp  = new TH2F("mymapTwoSigmaUp","mymapTwoSigmaUp",nX-1,xx,nY-1,yy); // +2 sigma
  TH2F* mymapTwoSigmaDo  = new TH2F("mymapTwoSigmaDo","mymapTwoSigmaDo",nX-1,xx,nY-1,yy); // -2 sigma

  TH2F* myobs  = new TH2F("myobs","myobs",nX-1,xx,nY-1,yy);

  // TH2F* mymap            = new TH2F("mymap","mymap",nX-1,minX,maxX,nY-1,minY,maxY); //nominal
  // TH2F* mymapOneSigmaUp  = new TH2F("mymapOneSigmaUp","mymapOneSigmaUp",nX-1,minX,maxX,nY-1,minY,maxY); // +1 sigma
  // TH2F* mymapOneSigmaDo  = new TH2F("mymapOneSigmaDo","mymapOneSigmaDo",nX-1,minX,maxX,nY-1,minY,maxY); // -1 sigma
  // TH2F* mymapTwoSigmaUp  = new TH2F("mymapTwoSigmaUp","mymapTwoSigmaUp",nX-1,minX,maxX,nY-1,minY,maxY); // +2 sigma
  // TH2F* mymapTwoSigmaDo  = new TH2F("mymapTwoSigmaDo","mymapTwoSigmaDo",nX-1,minX,maxX,nY-1,minY,maxY); // -2 sigma

  // TH2F* myobs  = new TH2F("myobs","myobs",nX-1,minX,maxX,nY-1,minY,maxY);

  TString filename = "";
  for (int i = 0; i < nX; ++i){
    //if (i % 4 == 0) mymap->GetXaxis()->SetBinLabel(i+1,mX[i]);
    for (int j = 0; j < nY; ++j){
      //if (j % 4 == 0) mymap->GetYaxis()->SetBinLabel(j+1,mY[j]);
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
      if (model == "Zbar" && mX[i] == "10"   && mY[j] ==  "50") continue; // crazy limit there
      if (model == "Zbar" && mX[i] == "300"  && mY[j] ==  "70") continue; // crazy limit there
      if (model == "Zbar" && mX[i] == "150"  && mY[j] ==  "70") continue; // crazy limit there
      if (model == "Zbar" && mX[i] == "150"  && mY[j] ==  "10") continue; // crazy limit there
      if (model == "Zbar" && mX[i] == "150"  && mY[j] ==  "15") continue; // crazy limit there
      if (model == "Zbar" && mX[i] == "150"  && mY[j] ==  "25") continue; // crazy limit there
      if (model == "Zbar" && mX[i] == "150"  && mY[j] ==  "30") continue; // crazy limit there
      if (model == "Zbar" && mX[i] == "100"  && mY[j] ==  "60") continue; // crazy limit there
      if (model == "Zbar" && mX[i] == "900"  && mY[j] == "100") continue; // crazy limit there
      if (model == "2HDM" && mX[i] == "1100" && mY[j] == "375") continue; // crazy limit there
      if (model == "2HDM" && mX[i] == "1000" && mY[j] == "375") continue; // crazy limit there
      if (model == "2HDM" && mX[i] == "1050" && mY[j] == "300") continue; // crazy limit there

      if (model == "2HDM" && mX[i] == "1150" && mY[j] == "375") continue; // crazy limit there
      if (model == "2HDM" && mX[i] == "1100" && mY[j] == "350") continue; // crazy limit there
      if (model == "2HDM" && mX[i] == "1150" && mY[j] == "325") continue; // crazy limit there
      if (model == "2HDM" && mX[i] == "1150" && mY[j] == "300") continue; // crazy limit there
      if (model == "2HDM" && mX[i] == "1050" && mY[j] == "425") continue; // crazy limit there
      if (model == "2HDM" && mX[i] == "1000" && mY[j] == "450") continue; // crazy limit there
      if (model == "2HDM" && mX[i] == "1150" && mY[j] == "425") continue; // crazy limit there
      if (model == "2HDM" && mX[i] == "1150" && mY[j] == "450") continue; // crazy limit there
      if (model == "2HDM" && mX[i] == "1150" && mY[j] == "475") continue; // crazy limit there
      if (model == "2HDM" && mX[i] == "1100" && mY[j] == "450") continue; // crazy limit there
      if (model == "2HDM" && mX[i] == "1100" && mY[j] == "400") continue; // crazy limit there

      //      if (t -> GetEntries() == 6){
      t->GetEntry(0);
      mymapTwoSigmaDo -> SetBinContent(i+1,j+1,limit);
      if (model == "Zbar" && (xx[i] < (yy[j] + yy[j] - 0))) mymapTwoSigmaDo -> SetBinContent(i+1,j+1,2);
      if (model == "Zbar" && (xx[i] >= (yy[j] + yy[j] - 0)) && limit > 50) continue; 
      t->GetEntry(1);
      mymapOneSigmaDo -> SetBinContent(i+1,j+1,limit);
      if (model == "Zbar" && (xx[i] < (yy[j] + yy[j] - 0))) mymapOneSigmaDo -> SetBinContent(i+1,j+1,2);
      if (model == "Zbar" && (xx[i] >= (yy[j] + yy[j] - 0)) && limit > 50) continue; 
      t->GetEntry(2);
      mymap -> SetBinContent(i+1,j+1,limit);
      if (model == "Zbar" && (xx[i] < (yy[j] + yy[j] - 0))) mymap -> SetBinContent(i+1,j+1,2);
      if (model == "Zbar" && (xx[i] >= (yy[j] + yy[j] - 0)) && limit > 50) continue; 
      //      cout<<"For bin "<<mX[i]<<", "<<mY[j]<<" the limits is "<<limit<<endl;
      t->GetEntry(3);
      mymapOneSigmaUp -> SetBinContent(i+1,j+1,limit);
      if (model == "Zbar" && (xx[i] < (yy[j] + yy[j] - 0))) mymapOneSigmaUp -> SetBinContent(i+1,j+1,2);
      if (model == "Zbar" && (xx[i] >= (yy[j] + yy[j] - 0)) && limit > 50) continue; 
      t->GetEntry(4);
      mymapTwoSigmaUp -> SetBinContent(i+1,j+1,limit);
      if (model == "Zbar" && (xx[i] < (yy[j] + yy[j] - 25))) mymapTwoSigmaUp -> SetBinContent(i+1,j+1,2);
      if (model == "Zbar" && (xx[i] >= (yy[j] + yy[j] - 25)) && limit > 50) continue; 
      t->GetEntry(5);
      myobs -> SetBinContent(i+1,j+1,limit);
      //      }
      f->Close();
    }
  }
  gStyle->SetOptStat(0);
  gStyle->SetPalette(kBird);
  //  TColor::InvertPalette();

  gStyle->SetPaintTextFormat("4.2f");
  TString mapTitle = "Exclusion Limits for " + model +  " Model - " + variable + " Variable";
  if (isBlind)
    mapTitle = mapTitle + "(2.4fb^{-1})";
  if (!isBlind)
    mapTitle = mapTitle + "(35.9fb^{-1})";
  //  mymap->SetTitle(mapTitle);
  mymap->SetTitle("");
  mymap->GetXaxis()->SetTitleSize(0.05);
  mymap->GetYaxis()->SetTitleSize(0.05);
  mymap->GetXaxis()->SetTitle("M_{Z'} [GeV]");
  if (model == "2HDM")
    mymap->GetYaxis()->SetTitle("M_{A} [GeV]");
  if (model == "Zbar")
    mymap->GetYaxis()->SetTitle("M_{#chi} [GeV]");
  mymap->GetYaxis()->SetTitleOffset(1.5);

  // char latexString[80];
  // sprintf(latexString,"Best MVA cut: %3f", MVAmax);
  // char latexString2[80];
  // sprintf(latexString2,"Best significance: %3f", maxSig);

  TLatex* tl = new TLatex(0.15,0.91,"CMS");// preliminary");
  tl->SetNDC();
  tl->SetTextSize(0.03);
  TLatex* tl2 = new TLatex(0.63,0.91,"35.9 fb^{-1} (13 TeV)");
  tl2->SetNDC();
  tl2->SetTextSize(0.03);

  TString heather = "";
  if (model == "2HDM") heather = "Z'-2HDM Model";
  else if (model == "Zbar") heather = "Z' Baryonic Model";
  TCanvas *c1 = new TCanvas("c1","c1",800,800);
  c1->cd();
  TLegend* l1 = new TLegend(0.2,0.69,0.6,0.89);
  gStyle -> SetLegendTextSize(0.025);
  l1 -> SetHeader(heather);
  l1 -> SetLineColor(kWhite);
  TPad* pad1 = new TPad("pad1","pad1",0.,0.,1.,1.);
  pad1->SetLeftMargin(0.15);
  pad1->SetRightMargin(0.15);
  pad1->Draw();
  pad1->cd();
  //  pad1->SetLogz();

  mymap->GetXaxis()->SetNdivisions(408);
  mymap->GetZaxis()->SetRangeUser(0,100);

  if (model == "Zbar"){
    mymap->GetXaxis()->SetRangeUser(10,1000);
    mymap->GetYaxis()->SetRangeUser(1,500);
  }
    
  mymap->Draw("colz");//,text");
  l1->Draw("same");
  tl->Draw("same");
  tl2->Draw("same");
  //  if (isBlind)
  myobs->SetMarkerColor(kRed+1);
  //myobs->Draw("text,same");
  TString plotTitle = "ExclusionMap" + model + variable;
  if (isBlind)
    plotTitle = plotTitle + "_blind";
  c1->Print(plotTitle + ".png");
  c1->Print(plotTitle + ".pdf");
  TFile *outFile = new TFile(plotTitle + ".root","recreate");
  outFile->cd();
  mymap->Write();
  mymapTwoSigmaDo->Write();
  mymapOneSigmaDo->Write();
  mymapTwoSigmaUp->Write();
  mymapOneSigmaUp->Write();
  myobs->Write();
  outFile->Close();
}


void smoothMap(TString model = "2HDM",
	       TString variable = "muccamva2HDMadaptFull_All_Bin800"
	      ){

  gStyle->SetOptStat(0);
  gStyle->SetPalette(kBird);
  //  TColor::InvertPalette();

  TString fileName = "ExclusionMap" + model + variable + ".root";
  
  TFile* f    = new TFile(fileName,"read");
  
  TH2F* Exp   = (TH2F*) f ->Get("mymap");
  TH2F* ExpDo = (TH2F*) f ->Get("mymapOneSigmaDo");
  TH2F* ExpUp = (TH2F*) f ->Get("mymapOneSigmaUp");
  
  TH2F* Obs   = (TH2F*) f ->Get("myobs");
  
  TString outFileName = "ExclusionMap" + model + variable + "_smooth.root";
  TFile *out = new TFile(outFileName,"recreate");
  out->cd();

  std::ifstream file;
  file.open("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/crosssectionZp2HDM.txt",std::ios::in);
  std::string str; 
  float str1; 
  float str2; 
  float str3; 
  float XS = 0.01;
  
  int cont = 0;
  
  int left, right, up, down;  // tell if adjacent bins are empty
  float leftLim, rightLim, upLim, downLim;
  float sum;                  // sum of the adjacent bins to compute average
  
  // Expected Limits - Nominal
  cont = 0;
  for (int i = 1; i < Exp->GetNbinsX() + 1; ++i){
    for (int j = 1; j < Exp->GetNbinsY() + 1; ++j){
      if (Exp->GetBinContent(Exp->GetBin(i,j)) == 0){
	++cont;
	left     = 0;
	right    = 0;
	up       = 0;
	down     = 0;
	leftLim  = Exp->GetBinContent(Exp->GetBin(i-1,j));
	rightLim = Exp->GetBinContent(Exp->GetBin(i+1,j));
	upLim    = Exp->GetBinContent(Exp->GetBin(i,j+1));
	downLim  = Exp->GetBinContent(Exp->GetBin(i,j-1));
	sum      = 0.;
	// left
	if (leftLim > 0 && ((((leftLim < 50 && 2*Exp->GetYaxis()->GetBinCenter(j) < Exp->GetXaxis()->GetBinCenter(i)) || (2*Exp->GetYaxis()->GetBinCenter(j)+25 > Exp->GetXaxis()->GetBinCenter(i) && leftLim > 50)) && model == "Zbar") || model == "2HDM")){
	  left = 1;
	  sum = sum + leftLim;
	}
	// right
	if (rightLim > 0 && ((((rightLim < 50 && 2*Exp->GetYaxis()->GetBinCenter(j) < Exp->GetXaxis()->GetBinCenter(i)) || (2*Exp->GetYaxis()->GetBinCenter(j)+25 > Exp->GetXaxis()->GetBinCenter(i) && rightLim > 50)) && model == "Zbar") || model == "2HDM")){
	  right = 1;
	  sum = sum + rightLim;
	}
	// up
	if (upLim > 0 && ((((upLim < 50 && 2*Exp->GetYaxis()->GetBinCenter(j) < Exp->GetXaxis()->GetBinCenter(i)) || (2*Exp->GetYaxis()->GetBinCenter(j)+25 > Exp->GetXaxis()->GetBinCenter(i) && upLim > 50)) && model == "Zbar") || model == "2HDM")){
	  up = 1;
	  sum = sum + upLim;
	}
	// down
	if (downLim > 0 && ((((downLim < 50 && 2*Exp->GetYaxis()->GetBinCenter(j) < Exp->GetXaxis()->GetBinCenter(i)) || (2*Exp->GetYaxis()->GetBinCenter(j)+25 > Exp->GetXaxis()->GetBinCenter(i) && downLim > 50)) && model == "Zbar") || model == "2HDM")){
	  down = 1;
	  sum = sum + downLim;
	}
	float myZ = 2.;
	if (right+left+up+down != 0)
	  myZ = sum/(right+left+up+down);
	Exp->SetBinContent(i,j,myZ);
      }
    }
  }
  cout<<"I've found "<<cont<<" empty bins in expected limits map"<<endl;
  Exp->Write();

  TCanvas *c1 = new TCanvas("c1","c1",800,800);
  c1->cd();
  TPad* pad1 = new TPad("pad1","pad1",0.,0.,1.,1.);
  pad1->SetLeftMargin(0.15);
  pad1->SetRightMargin(0.15);
  pad1->Draw();
  pad1->cd();

  if (model == "2HDM"){
    Exp->GetXaxis()->SetRangeUser(600,1200);
    Exp->GetYaxis()->SetRangeUser(300,500);
  }
  else if (model == "Zbar"){
    Exp->GetXaxis()->SetRangeUser(100,1000);
    Exp->GetYaxis()->SetRangeUser(1,500);
  }

  Exp->GetZaxis()->SetRangeUser(0,100);

  Exp->GetXaxis()->SetNdivisions(408);
  Exp->Draw("colz");//,text");
  TString plotTitle = "ExclusionMap" + model + variable;
  c1->Print(plotTitle + "_smooth.png");
  c1->Print(plotTitle + "_smooth.pdf");

  // Expected Limits - 1 Sigma Up
  cont = 0;
  for (int i = 1; i < ExpUp->GetNbinsX() + 1; ++i){
    for (int j = 1; j < ExpUp->GetNbinsY() + 1; ++j){
      if (ExpUp->GetBinContent(ExpUp->GetBin(i,j)) == 0){
	++cont;
	left  = 0;
	right = 0;
	up    = 0;
	down  = 0;
	sum   = 0.;
	// left
	if (ExpUp->GetBinContent(ExpUp->GetBin(i-1,j)) != 0){
	  left = 1;
	  sum = sum + ExpUp->GetBinContent(ExpUp->GetBin(i-1,j));
	}
	// right
	if (ExpUp->GetBinContent(ExpUp->GetBin(i+1,j)) != 0){
	  right = 1;
	  sum = sum + ExpUp->GetBinContent(ExpUp->GetBin(i+1,j));
	}
	// up
	if (ExpUp->GetBinContent(ExpUp->GetBin(i,j+1)) != 0){
	  up = 1;
	  sum = sum + ExpUp->GetBinContent(ExpUp->GetBin(i,j+1));
	}
	// down
	if (ExpUp->GetBinContent(ExpUp->GetBin(i,j-1)) != 0){
	  down = 1;
	  sum = sum + ExpUp->GetBinContent(ExpUp->GetBin(i,j-1));
	}
	ExpUp->SetBinContent(i,j,sum/(right+left+up+down));

      }
    }
  }
  cout<<"I've found "<<cont<<" empty bins in 1 sigma up expected limits map"<<endl;
  ExpUp->Write();


  // Expected Limits - 1 Sigma Down
  cont = 0;
  for (int i = 1; i < ExpDo->GetNbinsX() + 1; ++i){
    for (int j = 1; j < ExpDo->GetNbinsY() + 1; ++j){
      if (ExpDo->GetBinContent(ExpDo->GetBin(i,j)) == 0){
	++cont;
	left  = 0;
	right = 0;
	up    = 0;
	down  = 0;
	sum = 0.;
	// left
	if (ExpDo->GetBinContent(ExpDo->GetBin(i-1,j)) != 0){
	  left = 1;
	  sum = sum + ExpDo->GetBinContent(ExpDo->GetBin(i-1,j));
	}
	// right
	if (ExpDo->GetBinContent(ExpDo->GetBin(i+1,j)) != 0){
	  right = 1;
	  sum = sum + ExpDo->GetBinContent(ExpDo->GetBin(i+1,j));
	}
	// up
	if (ExpDo->GetBinContent(ExpDo->GetBin(i,j+1)) != 0){
	  up = 1;
	  sum = sum + ExpDo->GetBinContent(ExpDo->GetBin(i,j+1));
	}
	// down
	if (ExpDo->GetBinContent(ExpDo->GetBin(i,j-1)) != 0){
	  down = 1;
	  sum = sum + ExpDo->GetBinContent(ExpDo->GetBin(i,j-1));
	}
	ExpDo->SetBinContent(i,j,sum/(right+left+up+down));

      }
    }
  }
  cout<<"I've found "<<cont<<" empty bins in 1 sigma down expected limits map"<<endl;
  ExpDo->Write();


  // Observed Limits - Nominal
  cont = 0;
  for (int i = 1; i < Obs->GetNbinsX() + 1; ++i){
    for (int j = 1; j < Obs->GetNbinsY() + 1; ++j){
      if (Obs->GetBinContent(Obs->GetBin(i,j)) == 0){
	++cont;
	left  = 0;
	right = 0;
	up    = 0;
	down  = 0;
	sum = 0.;
	// left
	if (Obs->GetBinContent(Obs->GetBin(i-1,j)) != 0){
	  left = 1;
	  sum = sum + Obs->GetBinContent(Obs->GetBin(i-1,j));
	}
	// right
	if (Obs->GetBinContent(Obs->GetBin(i+1,j)) != 0){
	  right = 1;
	  sum = sum + Obs->GetBinContent(Obs->GetBin(i+1,j));
	}
	// up
	if (Obs->GetBinContent(Obs->GetBin(i,j+1)) != 0){
	  up = 1;
	  sum = sum + Obs->GetBinContent(Obs->GetBin(i,j+1));
	}
	// down
	if (Obs->GetBinContent(Obs->GetBin(i,j-1)) != 0){
	  down = 1;
	  sum = sum + Obs->GetBinContent(Obs->GetBin(i,j-1));
	}
	Obs->SetBinContent(i,j,sum/(right+left+up+down));
      }
    }
  }
  cout<<"I've found "<<cont<<" empty bins in expected limits map"<<endl;
  Obs->Write();


  out->Close();
}


void interpolateMap(TString model = "2HDM",
		    TString variable = "muccamva2HDMadaptFull_All_Bin800"
		    ){
  
  TString fileName = "ExclusionMap" + model + variable + "_smooth.root";

  TFile* f    = new TFile(fileName,"read");

  TH2F* Exp   = (TH2F*) f ->Get("mymap");
  TH2F* ExpDo = (TH2F*) f ->Get("mymapOneSigmaDo");
  TH2F* ExpUp = (TH2F*) f ->Get("mymapOneSigmaUp");
  TH2F* Obs   = (TH2F*) f ->Get("myobs");

  TGraph2D *gExp   = new TGraph2D();
  TGraph2D *gExpDo = new TGraph2D();
  TGraph2D *gExpUp = new TGraph2D();
  TGraph2D *gObs   = new TGraph2D();

  float N,x,y,z;
  for (int i = 1; i < Exp->GetNbinsX() + 1; ++i){
    for (int j = 1; j < Exp->GetNbinsY() + 1; ++j){
      N = i+(j+Exp->GetNbinsX()*(i-1));

      // Expected TGraph2D
      x = Exp->GetXaxis()->GetBinLowEdge(i)+Exp->GetXaxis()->GetBinWidth(i);
      y = Exp->GetYaxis()->GetBinLowEdge(j)+Exp->GetYaxis()->GetBinWidth(j);
      z = Exp->GetBinContent(i,j);
      cout<<N<<": "<<x<<", "<<y<<", "<<z<<endl;
      gExp->SetPoint(N,x,y,z);

      // Expected TGraph2D 1 sigma up
      x = ExpUp->GetXaxis()->GetBinLowEdge(i)+ExpUp->GetXaxis()->GetBinWidth(i);
      y = ExpUp->GetYaxis()->GetBinLowEdge(j)+ExpUp->GetYaxis()->GetBinWidth(j);
      z = ExpUp->GetBinContent(i,j);
      cout<<N<<": "<<x<<", "<<y<<", "<<z<<endl;
      gExpUp->SetPoint(N,x,y,z);

      // Expected TGraph2D 1 sigma down
      x = ExpDo->GetXaxis()->GetBinLowEdge(i)+ExpDo->GetXaxis()->GetBinWidth(i);
      y = ExpDo->GetYaxis()->GetBinLowEdge(j)+ExpDo->GetYaxis()->GetBinWidth(j);
      z = ExpDo->GetBinContent(i,j);
      cout<<N<<": "<<x<<", "<<y<<", "<<z<<endl;
      gExpDo->SetPoint(N,x,y,z);

      // Observed TGraph2D
      x = Obs->GetXaxis()->GetBinLowEdge(i)+Obs->GetXaxis()->GetBinWidth(i);
      y = Obs->GetYaxis()->GetBinLowEdge(j)+Obs->GetYaxis()->GetBinWidth(j);
      z = Obs->GetBinContent(i,j);
      cout<<N<<": "<<x<<", "<<y<<", "<<z<<endl;
      gObs->SetPoint(N,x,y,z);
    }
  }
  cout<<""<<endl;
}


void drawLines(TString model = "2HDM",
	       TString variable = "muccamva2HDMadaptFull_All_Bin800"
	       ){

  TString fileName = "ExclusionMap" + model + variable + "_smooth.root";

  TFile* f    = new TFile(fileName,"read");

  TH2F* Exp   = (TH2F*) f ->Get("mymap");
  TH2F* ExpDo = (TH2F*) f ->Get("mymapOneSigmaDo");
  TH2F* ExpUp = (TH2F*) f ->Get("mymapOneSigmaUp");

  TH2F* Obs   = (TH2F*) f ->Get("myobs");

  int U1[4] = {0, 0, 0, 0};
  vector<double> vx, vy, vz, vzup, vzdo, vzobs;
  for(int binx=1; binx<=Exp->GetNbinsX(); ++binx){
    double x = Exp->GetXaxis()->GetBinLowEdge(binx); // Exp->GetXaxis()->GetBinCenter(binx);
    for(int biny=1; biny<=Exp->GetNbinsY(); ++biny){
      double y = Exp->GetYaxis()->GetBinLowEdge(biny); // Exp->GetYaxis()->GetBinCenter(biny);
      vx.push_back(x);
      vy.push_back(y);
      // Expected - nominal
      double z = Exp->GetBinContent(Exp->GetBin(binx,biny)); 
      vz.push_back(z);
      if (z<1.) U1[0]++;
      // Expected - 1 sigma up
      z = ExpUp->GetBinContent(ExpUp->GetBin(binx,biny)); 
      vzup.push_back(z);
      if (z<1.) U1[1]++;
      // Expected - 1 sigma down 
      z = ExpDo->GetBinContent(ExpDo->GetBin(binx,biny)); 
      vzdo.push_back(z);
      if (z<1.) U1[2]++;
      // Observed
      z = Obs->GetBinContent(Obs->GetBin(binx,biny)); 
      vzobs.push_back(z);
      if (z<1.) U1[3]++;
    }
  }

  int max_points = 991, min_points = 8;

  if (model == "Zbar") min_points = 30;

  TString outFileName = "";
  outFileName = "outMaps_"+model+"_"+variable+".root";
  TFile* outFile = new TFile(outFileName,"recreate");
  outFile->cd();

  // Expected - Nominal
  TGraph2D ggExp("ggExp", "", vx.size(), &vx.at(0), &vy.at(0), &vz.at(0));
  ggExp.SetNpx(200);
  ggExp.SetNpy(200);
  //  ggExp.GetHistogram();
  TH2D* hExp = ggExp.GetHistogram();
  hExp->SetName("hExp");
  if (model == "2HDM") 
    hExp->Smooth(1);
  if (model == "Zbar"){
    hExp->Smooth(1);
  }
  TGraph2D gExp(hExp);
  gExp.SetNpx(200);
  gExp.SetNpy(200);
  gExp.SetName("gExp");
  if (U1[0]>1) {
    if (gExp.GetContourList(1.) != 0){
      TList *list = gExp.GetContourList(1.); 
      TIter liter(list);
      for(int i = 0; i < list->GetSize(); ++i){
	TGraph *g = static_cast<TGraph*>(list->At(i));
	if(g == nullptr) continue;
	int n_points = g->GetN();
	cout<<"Exp:     Contour with "<<n_points<<" points "<<endl;
	if(n_points < max_points && n_points >= min_points){
	  g->SetName("grExp");
	  g->Write();
	  max_points = n_points;
	}
      }
    }
    else {
      cout<<"Exp nominal: no contour" << endl;
      TGraph *g = new TGraph();
      g->SetName("grExp");
      g->Write();
    }
  }
  else {
    cout<<"Exp nominal: no contour" << endl;
    TGraph *g = new TGraph();
    g->SetName("grExp");
    g->Write();
  }
  gExp.Write();
  ggExp.Write();

  // Expected - 1 Sigma Up
  TGraph2D ggExpUp("ggExpUp", "", vx.size(), &vx.at(0), &vy.at(0), &vzup.at(0));
  ggExpUp.SetNpx(200);
  ggExpUp.SetNpy(200);
  ggExpUp.GetHistogram();
  TH2D* hExpUp = ggExpUp.GetHistogram();
  hExpUp->SetName("gExpUp");
  if (model == "2HDM") 
    hExpUp->Smooth(1);
  if (model == "Zbar") 
    hExpUp->Smooth(1);
  TGraph2D gExpUp(hExpUp);
  gExpUp.SetNpx(200);
  gExpUp.SetNpy(200);
  gExpUp.SetName("gExpUp");
  if (U1[1]>1) {
    if (gExpUp.GetContourList(1.) != 0){
      TList *listup = gExpUp.GetContourList(1.); 
      TIter literup(listup);
      max_points = 991;
      for(int i = 0; i < listup->GetSize(); ++i){
	TGraph *g = static_cast<TGraph*>(listup->At(i));
	if(g == nullptr) continue;
	int n_points = g->GetN();
	cout<<"Exp down: Contour with "<<n_points<<" points "<<endl;
	if(n_points < max_points && n_points >= min_points){
	  g->SetName("grExpUp");
	  g->Write();
	  max_points = n_points;
	}
      }
    }
    else {
      cout<<"Exp up: no contour" << endl;
      TGraph *g = new TGraph();
      g->SetName("grExpUp");
      g->Write();
    }
  }
  else {
    cout<<"Exp up: no contour" << endl;
    TGraph *g = new TGraph();
    g->SetName("grExpUp");
    g->Write();
  }
  gExpUp.Write();
  ggExpUp.Write();
  
  // Expected - 1 Sigma Down
  TGraph2D ggExpDo("ggExpDo", "", vx.size(), &vx.at(0), &vy.at(0), &vzdo.at(0));
  ggExpDo.SetNpx(500);
  ggExpDo.SetNpy(500);
  ggExpDo.GetHistogram();
  TH2D* hExpDo = ggExpDo.GetHistogram();
  hExpDo->SetName("gExpDo");
  if (model == "2HDM") 
    hExpDo->Smooth(1);
  if (model == "Zbar") 
    hExpDo->Smooth(1);
  TGraph2D gExpDo(hExpDo);
  gExpDo.SetNpx(100);
  gExpDo.SetNpy(100);
  gExpDo.SetName("gExpDo");
  if (U1[2]>1) {
    if (gExpDo.GetContourList(1.) != 0){
      TList *listdo = gExpDo.GetContourList(1.); 
      TIter literdo(listdo);
      max_points = 991;
      for(int i = 0; i < listdo->GetSize(); ++i){
	TGraph *g = static_cast<TGraph*>(listdo->At(i));
	if(g == nullptr) continue;
	int n_points = g->GetN();
	cout<<"Exp down: Contour with "<<n_points<<" points "<<endl;
	if(n_points < max_points && n_points >= min_points){
	  g->SetName("grExpDo");
	  g->Write();
	  max_points = n_points;
	}
      }
    } 
    else {
      cout<<"Exp down: no contour" << endl;
      TGraph *g = new TGraph();
      g->SetName("grExpDo");
      g->Write();
    }
  }
  else {
    cout<<"Exp down: no contour" << endl;
    TGraph *g = new TGraph();
    g->SetName("grExpDo");
    g->Write();
  }
  gExpDo.Write();
  ggExpDo.Write();

  // Observed
  TGraph2D ggObs("ggObs", "", vx.size(), &vx.at(0), &vy.at(0), &vzobs.at(0));
  ggObs.SetNpx(200);
  ggObs.SetNpy(200);
  ggObs.GetHistogram();
  TH2D* hObs = ggObs.GetHistogram();
  hObs->SetName("ggObs");
  if (model == "2HDM") 
    hObs->Smooth(1);
  if (model == "Zbar") 
    hObs->Smooth(1);
  TGraph2D gObs(hObs);
  gObs.SetNpx(200);
  gObs.SetNpy(200);
  gObs.SetName("gObs");
  if (U1[3]>1) {
    if (gObs.GetContourList(1.) != 0){
      TList *listObs = gObs.GetContourList(1.); 
      TIter liter(listObs);
      int max_points = 991, min_points = 8;
      for(int i = 0; i < listObs->GetSize(); ++i){
	TGraph *g = static_cast<TGraph*>(listObs->At(i));
	if(g == nullptr) continue;
	int n_points = g->GetN();
	cout<<"Obs:     Contour with "<<n_points<<" points "<<endl;
	if(n_points < max_points && n_points >= min_points){
	  g->SetName("grObs");
	  g->Write();
	  max_points = n_points;
	}
      }
    }
    else {
      cout<<"Obs: no contour" << endl;
      TGraph *g = new TGraph();
      g->SetName("grObs");
      g->Write();
    }
  }
  else {
    cout<<"Obs: no contour" << endl;
    TGraph *g = new TGraph();
    g->SetName("grObs");
    g->Write();
  }
  gObs.Write();
  ggObs.Write();

  outFile->Close();
}


void putEverythingTogether(TString model = "2HDM",
			   TString variable = "muccamva2HDMadaptFull_All_Bin800"
			   ){

  gStyle->SetOptStat(0);
  gStyle->SetPalette(kBird);
  //TColor::InvertPalette();

  TString mapFileName  = "";
  TString lineFileName = "";

  mapFileName  = "ExclusionMap"+model+variable+"_smooth.root";
  lineFileName = "outMaps_"+model+"_"+variable+".root";

  TFile* mapFile  = new TFile(mapFileName);
  TFile* lineFile = new TFile(lineFileName);

  //  TH2F* map = (TH2F*) mapFile->Get("mymap");
  TGraph2D* mymap = (TGraph2D*) lineFile->Get("gExp");
  TH2D* map = mymap->GetHistogram();

  if (model == "2HDM") 
    map -> Smooth(1);

  TGraph* Exp   = (TGraph*) lineFile->Get("grExp");
  TGraph* ExpUp = (TGraph*) lineFile->Get("grExpUp");
  TGraph* ExpDo = (TGraph*) lineFile->Get("grExpDo");
  TGraph* Obs   = (TGraph*) lineFile->Get("grObs");

  Exp   -> SetLineWidth(3);
  ExpUp -> SetLineWidth(3);
  ExpDo -> SetLineWidth(3);
  Obs   -> SetLineWidth(3);

  ExpUp -> SetLineStyle(3);
  ExpDo -> SetLineStyle(3);

  Obs -> SetLineColor(kRed);
  //  Exp -> SetLineStyle(9);

  TCanvas *c1 = new TCanvas("c1","c1",800,800);
  c1->cd();

  TPad* pad1 = new TPad("pad1","pad1",0.,0.,1.,1.);
  pad1->SetTopMargin(0.10);
  pad1->SetLeftMargin(0.15);
  pad1->SetRightMargin(0.15);
  pad1->SetBottomMargin(0.12);
  pad1->SetTicks();
  pad1->Draw();
  pad1->cd();

  map->GetXaxis()->SetTitleSize(0.05);
  map->GetYaxis()->SetTitleSize(0.05);
  map->GetYaxis()->SetTitleOffset(1.3);

  if (model == "2HDM"){
    map->GetXaxis()->SetRangeUser(600,1200);
    map->GetYaxis()->SetRangeUser(305,500);
    map->GetXaxis()->SetTitle("m_{Z'} [GeV]");
    map->GetYaxis()->SetTitle("m_{A} [GeV]");
  }
  else if (model == "Zbar"){
    map->GetXaxis()->SetTitle("m_{Z'} [GeV]");
    map->GetYaxis()->SetTitle("m_{#chi} [GeV]");
    for (int i = 1; i < map->GetXaxis()->GetNbins()+1; ++i){
      for (int j = 1; j < map->GetYaxis()->GetNbins()+1; ++j){
    	float xxx, yyy;
    	xxx = map->GetXaxis()->GetBinLowEdge(i);
    	yyy = map->GetYaxis()->GetBinLowEdge(j);
    	if (map->GetBinContent(i,j) > 1.98 && xxx < 2*yyy - 0) map->SetBinContent(i,j,1000);
      }
    }
    map->Smooth(1);
    map->Smooth(1);
    map->Smooth(1);
    map->GetXaxis()->SetRangeUser(105,1000);
    map->GetYaxis()->SetRangeUser(5,500);
  }

  map->GetZaxis()->SetRangeUser(0.7,100);

  pad1->SetLogz();

  TString heather = "";
  if (model == "2HDM") heather = "Z'-2HDM, Z' #rightarrow DM + h(WW)";
  else if (model == "Zbar") heather = "Baryonic Z', Z' #rightarrow DM + h(WW)";
  TLegend* l1 = new TLegend(0.54,0.74,0.82,0.88);
  gStyle -> SetLegendTextSize(0.022);
  l1 -> SetHeader(heather);
  l1 -> SetLineColor(kWhite);
  l1 -> AddEntry(Obs,"Observed 95\% CL","l");
  l1 -> AddEntry(Exp,"Expected 95\% CL","l");
  l1 -> AddEntry(ExpUp,"#pm 1 std. dev.","l");
  //l1 -> AddEntry(ExpDo,"Expected, 1 #sigma down","l");

  //TLatex* tl = new TLatex(0.15,0.92,"CMS");// preliminary");
  TLatex* tl = new TLatex(0.18,0.84,"CMS");// preliminary");
  tl->SetNDC();
  tl->SetTextFont(61);
  tl->SetTextSize(0.05);

  TLatex* tlSup = new TLatex(0.29,0.84,"#it{Supplementary}");
  tlSup->SetNDC();
  tlSup->SetTextFont(42);
  tlSup->SetTextSize(0.03);

  TLatex* tl2 = new TLatex(0.59,0.92,"35.9 fb^{-1} (13 TeV)");
  tl2->SetNDC();
  tl2->SetTextFont(42);
  tl2->SetTextSize(0.040);
  tl2->SetTextSize(0.045);

  // Z'-2HDM
  TLatex* tl3 = new TLatex(0.18,0.80,"Z'-2HDM, Dirac DM");
  tl3->SetNDC();
  tl3->SetTextFont(42);
  tl3->SetTextSize(0.03);
  TLatex* tl4 = new TLatex(0.18,0.76,"g_{Z'} = 0.8, g_{#chi} = 1");
  tl4->SetNDC();
  tl4->SetTextFont(42);
  tl4->SetTextSize(0.03);
  TLatex* tl5 = new TLatex(0.18,0.72,"m_{#chi} = 100 GeV");
  tl5->SetNDC();
  tl5->SetTextFont(42);
  tl5->SetTextSize(0.03);
  TLatex* tl6 = new TLatex(0.18,0.68,"tan#beta = 1");
  tl6->SetNDC();
  tl6->SetTextFont(42);
  tl6->SetTextSize(0.03);
  TLatex* tl7 = new TLatex(0.18,0.64,"m_{A} = m_{H^{#pm}} = m_{H}");
  tl7->SetNDC();
  tl7->SetTextFont(42);
  tl7->SetTextSize(0.03);

  // Baryonic Z'
  TLatex* tl8 = new TLatex(0.18,0.80,"Baryonic Z'");
  tl8->SetNDC();
  tl8->SetTextFont(42);
  tl8->SetTextSize(0.03);
  TLatex* tl9 = new TLatex(0.18,0.76,"Dirac DM");
  tl9->SetNDC();
  tl9->SetTextFont(42);
  tl9->SetTextSize(0.03);
  TLatex* tl10 = new TLatex(0.18,0.72,"g_{q} = 0.25, g_{#chi} = 1");
  tl10->SetNDC();
  tl10->SetTextFont(42);
  tl10->SetTextSize(0.03);

  TLatex* tex2 = new TLatex(0.95,0.90,"#sigma/#sigma_{theory}");
  tex2->SetNDC();
  tex2->SetTextFont(42);
  tex2->SetLineWidth(2);
  tex2->SetTextSize(0.04);
  tex2->SetTextAngle(90);
  tex2->SetTextAlign(33);

  // if (model == "2HDM"){
  //   map -> GetYaxis() -> SetRangeUser(300,700);
  //   map -> GetXaxis() -> SetRangeUser(450,2000);
  // }
  //   if (model == "Zbar"){
  //   map -> GetYaxis() -> SetRangeUser(0,1000);
  //   map -> GetXaxis() -> SetRangeUser(0,2000);
  // }

  //  map -> GetZaxis() -> SetRangeUser(0.1,100);
  
  map  ->Draw("colz");
  Exp  ->Draw("PC,same");
  ExpUp->Draw("PC,same");
  ExpDo->Draw("PC,same");
  Obs  ->Draw("PC,same");
  l1   ->Draw("same");
  tl   ->Draw("same");
  //tlSup->Draw("same");
  tl2  ->Draw("same");
  tex2 ->Draw("same");

  // Z'-2HDM
  if (model == "2HDM"){
    tl3  ->Draw("same");
    tl4  ->Draw("same");
    tl5  ->Draw("same");
    tl6  ->Draw("same");
    tl7  ->Draw("same");
  }
  // Baryonic Z'
  if (model == "Zbar"){
    tl8  ->Draw("same");
    tl9  ->Draw("same");
    tl10 ->Draw("same");
  }
  
  TString canvasName = "";
  canvasName = "ExclusionMap"+model+variable+"_together";
  c1 -> Print(canvasName+".png");
  c1 -> Print(canvasName+".pdf");

  TString plotTitle = "ExclusionMap" + model + variable+"_together";
  TFile *outFile = new TFile(plotTitle + ".root","recreate");
  outFile->cd();
  map->Write();
  outFile->Close();
}


void putEverythingTogetherSmooth(TString model = "2HDM",
				 TString variable = "muccamva2HDMadaptFull_All_Bin800"
				 ){
  
  gStyle->SetOptStat(0);
  gStyle->SetPalette(kBird);
  //  TColor::InvertPalette();

  TString mapFileName  = "";
  TString lineFileName = "";

  mapFileName  = "ExclusionMap"+model+variable+"_smooth.root";
  lineFileName = "outMaps_"+model+"_"+variable+".root";

  TFile* mapFile  = new TFile(mapFileName);
  TFile* lineFile = new TFile(lineFileName);

  //  TH2F* map = (TH2F*) mapFile->Get("mymap");
  TGraph2D* mymap = (TGraph2D*) lineFile->Get("gExp");
  TH2D* map = mymap->GetHistogram();
 
  map -> Smooth(1,"k3a");
  
  TGraph* Exp   = (TGraph*) lineFile->Get("grExp");
  TGraph* ExpUp = (TGraph*) lineFile->Get("grExpUp");
  TGraph* ExpDo = (TGraph*) lineFile->Get("grExpDo");
  TGraph* Obs   = (TGraph*) lineFile->Get("grObs");

  Exp   -> SetLineWidth(4);
  ExpUp -> SetLineWidth(1);
  ExpDo -> SetLineWidth(1);
  Obs   -> SetLineWidth(4);

  Obs -> SetLineColor(kRed);
  //  Exp -> SetLineStyle(9);

  TCanvas *c1 = new TCanvas("c1","c1",800,800);
  c1->cd();

  TPad* pad1 = new TPad("pad1","pad1",0.,0.,1.,1.);
  pad1->SetLeftMargin(0.15);
  pad1->SetRightMargin(0.15);
  pad1->SetBottomMargin(0.20);
  pad1->Draw();
  pad1->cd();

  if (model == "2HDM"){
    map->GetXaxis()->SetRangeUser(600,2000);
    map->GetYaxis()->SetRangeUser(300,500);
  }
  else if (model == "Zbar"){
    map->GetXaxis()->SetRangeUser(0,1000);
    map->GetYaxis()->SetRangeUser(0,500);
  }

  map->GetZaxis()->SetRangeUser(0.7,100);

  pad1->SetLogz();

  TString heather = "";
  if (model == "2HDM") heather = "Z'-2HDM, Z' #rightarrow DM + h(WW)";
  else if (model == "Zbar") heather = "Z' Baryonic Model";
  TLegend* l1 = new TLegend(0.2,0.69,0.6,0.89);
  gStyle -> SetLegendTextSize(0.03);
  l1 -> SetHeader(heather);
  l1 -> SetLineColor(kWhite);
  l1 -> AddEntry(Obs,"Observed 95\% CL","l");
  l1 -> AddEntry(Exp,"Expected 95\% CL","l");
  l1 -> AddEntry(ExpUp,"#pm 1 std. dev.","l");
  //l1 -> AddEntry(ExpDo,"Expected, 1 #sigma down","l");

  TLatex* tl = new TLatex(0.15,0.91,"CMS");// preliminary");
  tl->SetNDC();
  tl->SetTextSize(0.03);
  TLatex* tl2 = new TLatex(0.63,0.91,"35.9 fb^{-1} (13 TeV)");
  tl2->SetNDC();
  tl2->SetTextSize(0.03);

  // map -> GetYaxis() -> SetRangeUser(300,700);
  // map -> GetXaxis() -> SetRangeUser(450,2000);

  map  ->Draw("colz");
  Exp  ->Draw("PL,same");
  ExpUp->Draw("PL,same");
  ExpDo->Draw("PL,same");
  Obs  ->Draw("PL,same");
  l1   ->Draw("same");
  tl   ->Draw("same");
  tl2  ->Draw("same");
  
  TString canvasName = "";
  canvasName = "ExclusionMap"+model+variable+"_together_smooth";
  c1 -> Print(canvasName+".png");
  c1 -> Print(canvasName+".pdf");

  TString plotTitle = "ExclusionMap" + model + variable+"_together_smooth";
  TFile *outFile = new TFile(plotTitle + ".root","recreate");
  outFile->cd();
  map->Write();
  outFile->Close();
}
