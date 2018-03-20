/*

// 2HDM Model

root -l -b -q 'macroExclusionTable.C("muccamva2HDMadaptFull_All_Bin800","em","MVA","2HDM",false)'
root -l 
.L macroExclusionTable.C
smoothMap("2HDM","muccamva2HDMadaptFull_All_Bin800")
drawLines("2HDM","muccamva2HDMadaptFull_All_Bin800")
putEverythingTogether("2HDM","muccamva2HDMadaptFull_All_Bin800")
putEverythingTogetherSmooth("2HDM","muccamva2HDMadaptFull_All_Bin800")
.q

// Zbar Model

root -l -b -q 'macroExclusionTable.C("muccamvaZbaradaptFull_All_Bin100","em","MVA","Zbar",false)'
root -l 
.L macroExclusionTable.C
smoothMap("Zbar","muccamvaZbaradaptFull_All_Bin100")
drawLines("Zbar","muccamvaZbaradaptFull_All_Bin100")
putEverythingTogether("Zbar","muccamvaZbaradaptFull_All_Bin100")
putEverythingTogetherSmooth("Zbar","muccamvaZbaradaptFull_All_Bin100")
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
//{"600","800","1000","1200","1400","1700","2000","2500"}; 
TString mA0[nY_2HDM]      = {"300","325","350","375","400","425","450","475","500","525","550","575","600","625","650","675","700","725","750","775","800","825","850","875","900","925","950","975"};
//{"300","400","500","600","700","800"};

Float_t x_2HDM[nX_2HDM+1] = {400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000,2050,2100,2150,2200,2250,2300,2350,2400,2450,2500};
//{400,600,800,1000,1200,1400,1700,2000,2500};
Float_t y_2HDM[nY_2HDM+1] = {275,300,325,350,375,400,425,450,475,500,525,550,575,600,625,650,675,700,725,750,775,800,825,850,875,900,925,950,975};
//{200,300,400,500,600,700,800};

//TH2F* mymap2HDM   = new TH2F("mymap2HDM","mymap2HDM",nX_2HDM,x_2HDM,nY_2HDM,y_2HDM);

const int nX_Zbar = 32;
const int nY_Zbar = 40;

// DM=[1,35,100,125,150,175,200,225,250,275,300,325,350,375,400,425,450,475,500,525,550,575,600,625,650,675,700,725,750,775,800,825,850,875,900,925,950,975,1000]
// Z'=[10,50,100,200,250,300,350,400,450,500,550,600,675,750,800,850,900,950,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000]
TString mZb[nX_Zbar]      = {"10","50","100","150","200","250","300","350","400","450","500","550","600","650","700","750","800","850","900","950","1000","1100","1200","1300","1400","1500","1600","1700","1800","1900","2000"}; //{"10","15","20","50","95","100","200","295","300","500","995","1000","1995","2000","10000"};
TString mChi[nY_Zbar]     = {"1","10","50","100","125","150","175","200","225","250","275","300","325","350","375","400","425","450","475","500","525","550","575","600","625","650","675","700","725","750","775","800","825","850","875","900","925","950","975","1000"};   //"1"",""10"",""50"",""150"",""500"",""1000"};
Float_t x_Zbar[nX_Zbar+1] = {0,10,50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000}; //{0,10,15,20,50,95,100,200,295,300,500,995,1000,1995,2000,10000};
Float_t y_Zbar[nY_Zbar+1] = {0,1,10,50,100,125,150,175,200,225,250,275,300,325,350,375,400,425,450,475,500,525,550,575,600,625,650,675,700,725,750,775,800,825,850,875,900,925,950,975,1000};//{0,1,10,50,150,500,1000};

//TH2F* mymapZbar  = new TH2F("mymapZbar","mymapZbar",nX_Zbar,x_Zbar,nY_Zbar,y_Zbar);

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
    minX = 1;
    maxX = 10000;
    minY = 1;
    maxY = 1000;
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
      if (t -> GetEntries() == 6){
	t->GetEntry(0);
	mymapTwoSigmaDo -> SetBinContent(i+1,j+1,limit);
	t->GetEntry(1);
	mymapOneSigmaDo -> SetBinContent(i+1,j+1,limit);
	t->GetEntry(2);
	mymap -> SetBinContent(i+1,j+1,limit);
	cout<<"For bin "<<mX[i]<<", "<<mY[j]<<" the limits is "<<limit<<endl;
	t->GetEntry(3);
	mymapOneSigmaUp -> SetBinContent(i+1,j+1,limit);
	t->GetEntry(4);
	mymapTwoSigmaUp -> SetBinContent(i+1,j+1,limit);
	t->GetEntry(5);
	myobs -> SetBinContent(i+1,j+1,limit);
      }
      f->Close();
    }
  }
  gStyle->SetOptStat(0);
  gStyle->SetPaintTextFormat("4.2f");
  TString mapTitle = "Exclusion Limits for " + model +  " Model - " + variable + " Variable";
  if (isBlind)
    mapTitle = mapTitle + "(2.4fb^{-1})";
  if (!isBlind)
    mapTitle = mapTitle + "(35.9fb^{-1})";
  //  mymap->SetTitle(mapTitle);
  mymap->SetTitle("");
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

  TLatex* tl = new TLatex(0.15,0.91,"CMS preliminary");
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
  TLegend* l1 = new TLegend(0.2,0.79,0.4,0.89);
  l1->SetHeader(heather);
  l1 -> SetLineColor(kWhite);
  TPad* pad1 = new TPad("pad1","pad1",0.,0.,1.,1.);
  pad1->SetLeftMargin(0.15);
  pad1->SetRightMargin(0.15);
  pad1->Draw();
  pad1->cd();
  mymap->GetXaxis()->SetNdivisions(408);
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
  float sum;                  // sum of the adjacent bins to compute average
  
  // Expected Limits - Nominal
  cont = 0;
  for (int i = 1; i < Exp->GetNbinsX() + 1; ++i){
    for (int j = 1; j < Exp->GetNbinsY() + 1; ++j){
      if (Exp->GetBinContent(Exp->GetBin(i,j)) == 0){
	++cont;
	left  = 0;
	right = 0;
	up    = 0;
	down  = 0;
	sum = 0.;
	// left
	if (Exp->GetBinContent(Exp->GetBin(i-1,j)) != 0){
	  left = 1;
	  sum = sum + Exp->GetBinContent(Exp->GetBin(i-1,j));
	}
	// right
	if (Exp->GetBinContent(Exp->GetBin(i+1,j)) != 0){
	  right = 1;
	  sum = sum + Exp->GetBinContent(Exp->GetBin(i+1,j));
	}
	// up
	if (Exp->GetBinContent(Exp->GetBin(i,j+1)) != 0){
	  up = 1;
	  sum = sum + Exp->GetBinContent(Exp->GetBin(i,j+1));
	}
	// down
	if (Exp->GetBinContent(Exp->GetBin(i,j-1)) != 0){
	  down = 1;
	  sum = sum + Exp->GetBinContent(Exp->GetBin(i,j-1));
	}
	Exp->SetBinContent(i,j,sum/(right+left+up+down));

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
	sum = 0.;
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


void drawLines(TString model = "2HDM",
	       TString variable = "muccamva2HDMadaptFull_All_Bin800"
	       ){

  TString fileName = "ExclusionMap" + model + variable + "_smooth.root";

  TFile* f    = new TFile(fileName,"read");

  TH2F* Exp   = (TH2F*) f ->Get("mymap");
  TH2F* ExpDo = (TH2F*) f ->Get("mymapOneSigmaDo");
  TH2F* ExpUp = (TH2F*) f ->Get("mymapOneSigmaUp");

  TH2F* Obs   = (TH2F*) f ->Get("myobs");

  // Exp  ->Smooth(1);
  // ExpDo->Smooth(1);
  // ExpUp->Smooth(1);
  // Obs  ->Smooth(1);

  int U1[4] = {0, 0, 0, 0};
  vector<double> vx, vy, vz, vzup, vzdo, vzobs;
  for(int binx=1; binx<=Exp->GetNbinsX(); ++binx){
    double x = Exp->GetXaxis()->GetBinCenter(binx);
    for(int biny=1; biny<=Exp->GetNbinsY(); ++biny){
      double y = Exp->GetYaxis()->GetBinCenter(biny);
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

  TString outFileName = "";
  outFileName = "outMaps_"+model+"_"+variable+".root";
  TFile* outFile = new TFile(outFileName,"recreate");
  outFile->cd();

  // Expected - Nominal
  TGraph2D gExp("gExp", "", vx.size(), &vx.at(0), &vy.at(0), &vz.at(0));
  gExp.Write();
  gExp.SetNpx(500);
  gExp.SetNpy(500);
  gExp.GetHistogram();
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

  // Expected - 1 Sigma Up
  TGraph2D gExpUp("gExpUp", "", vx.size(), &vx.at(0), &vy.at(0), &vzup.at(0));
  gExpUp.SetNpx(15.);
  gExpUp.SetNpy(10.);
  gExpUp.GetHistogram();
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
  
  // Expected - 1 Sigma Down
  TGraph2D gExpDo("gExpDo", "", vx.size(), &vx.at(0), &vy.at(0), &vzdo.at(0));
  gExpDo.SetNpx(500.);
  gExpDo.SetNpy(500.);
  gExpDo.GetHistogram();
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

  // Observed
  TGraph2D gObs("gObs", "", vx.size(), &vx.at(0), &vy.at(0), &vzobs.at(0));
  gObs.SetNpx(500);
  gObs.SetNpy(500);
  gObs.GetHistogram();
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

  outFile->Close();
}


void putEverythingTogether(TString model = "2HDM",
			   TString variable = "muccamva2HDMadaptFull_All_Bin800"
			   ){


  gStyle->SetOptStat(0);

  TString mapFileName  = "";
  TString lineFileName = "";

  mapFileName  = "ExclusionMap"+model+variable+"_smooth.root";
  lineFileName = "outMaps_"+model+"_"+variable+".root";

  TFile* mapFile  = new TFile(mapFileName);
  TFile* lineFile = new TFile(lineFileName);

  TH2F* map = (TH2F*) mapFile->Get("mymap");

  //map -> Smooth(1);

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
  pad1->Draw();
  pad1->cd();

  pad1->SetLogz();

  TString heather = "";
  if (model == "2HDM") heather = "Z'-2HDM, Z' #rightarrow DM + h(WW)";
  else if (model == "Zbar") heather = "Z' Baryonic Model";
  TLegend* l1 = new TLegend(0.2,0.79,0.4,0.89);
  l1 -> SetHeader(heather);
  l1 -> SetLineColor(kWhite);
  l1 -> AddEntry(Obs,"Observed 95\% CL","l");
  l1 -> AddEntry(Exp,"Expected 95\% CL","l");
  l1 -> AddEntry(ExpUp,"#pm 1 std. dev.","l");
  //l1 -> AddEntry(ExpDo,"Expected, 1 #sigma down","l");

  TLatex* tl = new TLatex(0.15,0.91,"CMS preliminary");
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
  canvasName = "ExclusionMap"+model+variable+"_together";
  c1 -> Print(canvasName+".png");
  c1 -> Print(canvasName+".pdf");
}


void putEverythingTogetherSmooth(TString model = "2HDM",
				 TString variable = "muccamva2HDMadaptFull_All_Bin800"
				 ){
  
  gStyle->SetOptStat(0);

  TString mapFileName  = "";
  TString lineFileName = "";

  mapFileName  = "ExclusionMap"+model+variable+"_smooth.root";
  lineFileName = "outMaps_"+model+"_"+variable+".root";

  TFile* mapFile  = new TFile(mapFileName);
  TFile* lineFile = new TFile(lineFileName);

  TH2F* map = (TH2F*) mapFile->Get("mymap");

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
  pad1->Draw();
  pad1->cd();

  pad1->SetLogz();

  TString heather = "";
  if (model == "2HDM") heather = "Z'-2HDM, Z' #rightarrow DM + h(WW)";
  else if (model == "Zbar") heather = "Z' Baryonic Model";
  TLegend* l1 = new TLegend(0.2,0.79,0.4,0.89);
  l1 -> SetHeader(heather);
  l1 -> SetLineColor(kWhite);
  l1 -> AddEntry(Obs,"Observed 95\% CL","l");
  l1 -> AddEntry(Exp,"Expected 95\% CL","l");
  l1 -> AddEntry(ExpUp,"#pm 1 std. dev.","l");
  //l1 -> AddEntry(ExpDo,"Expected, 1 #sigma down","l");

  TLatex* tl = new TLatex(0.15,0.91,"CMS preliminary");
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
}
