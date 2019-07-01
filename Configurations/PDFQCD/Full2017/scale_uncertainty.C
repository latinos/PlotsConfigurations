#include "TCanvas.h"
#include "TTree.h"
#include "TH1D.h"
#include "TFile.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <unistd.h>

void scale_uncertainty(TString channel)
{
  //How to use: root -b -q "scale_uncertainty.C(\"hww2l2v_13TeV_of0j\")"
  if(channel==""){cout<<"No input channel -> Assuming channel = hww2l2v_13TeV_of0j"<<endl;channel="hww2l2v_13TeV_of0j";}

  TFile* inputfile= new TFile("rootFile_WW_PDFandScale/plots_PDFandScale.root");
  gStyle->SetOptStat(0);

  TH1F* h_scaleweight_mll[9];
  for(int i=0;i<9;i++){h_scaleweight_mll[i] = new TH1F(Form("weight%d_mll",i),Form("weight%d_mll",i),50,0,400); h_scaleweight_mll[i]= (TH1F*)inputfile->Get(Form(channel+"/mll_scaleweight%d/histo_top",i));}//WW",i));}
  TH1F* h_scaleweight_mth[9];
  for(int i=0;i<9;i++){h_scaleweight_mth[i] = new TH1F(Form("weight%d_mth",i),Form("weight%d_mth",i),50,50,400); h_scaleweight_mth[i]= (TH1F*)inputfile->Get(Form(channel+"/mth_scaleweight%d/histo_top",i));}//WW",i));}

  float integralmth[9];  float integralmll[9];
  for(int i=0;i<9;i++){integralmth[i]=h_scaleweight_mth[i]->Integral();integralmll[i]=h_scaleweight_mll[i]->Integral();}
  for(int i=0;i<9;i++){h_scaleweight_mth[i]->Scale(1/integralmth[i]);h_scaleweight_mll[i]->Scale(1/integralmll[i]);}

  TH1F* histo_bins_mth[50];
  for(int i=0;i<50;i++){histo_bins_mth[i] = new TH1F(Form("bin%d_mth",i),Form("bin%d_mth",i),130,0,1300);}
  TH1F* histo_bins_mll[50];
  for(int i=0;i<50;i++){histo_bins_mll[i] = new TH1F(Form("bin%d_mll",i),Form("bin%d_mll",i),130,0,1300);}

  float meanmll[50];     float meanmth[50];
  float meanerrmll[50];  float meanerrmth[50];
  float bincontentmll[9][50];  float bincontentmth[9][50];

  TGraphErrors *mth_mean =new TGraphErrors();
  TGraphErrors *mth_minus=new TGraphErrors();
  TGraphErrors *mth_plus =new TGraphErrors();
  TGraphErrors *mll_mean =new TGraphErrors();
  TGraphErrors *mll_minus=new TGraphErrors();
  TGraphErrors *mll_plus =new TGraphErrors();

  TGraphErrors *mllratioup=new TGraphErrors();
  TGraphErrors *mllratiodown=new TGraphErrors();
  TGraphErrors *mthratioup=new TGraphErrors();
  TGraphErrors *mthratiodown=new TGraphErrors();

  ///////////////////////////////////////////////////
  cout<<"Begin..."<<endl;

  for(int b=1;b<51;b++){
    for(int i=0;i<9;i++){
      bincontentmll[i][b-1]=h_scaleweight_mll[i]->GetBinContent(b);
      bincontentmth[i][b-1]=h_scaleweight_mth[i]->GetBinContent(b);
      histo_bins_mll[b-1]->Fill(bincontentmll[i][b-1]);
      histo_bins_mth[b-1]->Fill(bincontentmth[i][b-1]);
    }
  }

  for(int b=0;b<50;b++){
    meanmth[b]= histo_bins_mth[b]->GetMean();
    meanerrmth[b]= histo_bins_mth[b]->GetMeanError();
    meanmll[b]= histo_bins_mll[b]->GetMean();
    meanerrmll[b]= histo_bins_mll[b]->GetMeanError();
    // cout<<meanmll[b]<<" "<<meanerrmll[b]<<" "<<meanmth[b]<<" "<<meanerrmth[b]<<endl;
  }

  for(int b=1;b<51;b++){
    mth_mean ->SetPoint(b,b*8-4,meanmth[b-1]);
    mth_minus->SetPoint(b,b*8-4,bincontentmth[8][b-1]);
    mth_plus ->SetPoint(b,b*8-4,bincontentmth[4][b-1]);
    mll_mean ->SetPoint(b,b*8-4,meanmll[b-1]);
    mll_minus->SetPoint(b,b*8-4,bincontentmll[8][b-1]);
    mll_plus ->SetPoint(b,b*8-4,bincontentmll[4][b-1]);
    mllratioup  ->SetPoint(b,b*8-4,(bincontentmll[4][b-1])/meanmll[b-1]);
    mllratiodown->SetPoint(b,b*8-4,(bincontentmll[8][b-1])/meanmll[b-1]);
    mthratioup  ->SetPoint(b,b*8-4,(bincontentmth[4][b-1])/meanmth[b-1]);
    mthratiodown->SetPoint(b,b*8-4,(bincontentmth[8][b-1])/meanmth[b-1]);
    /* 
    mllratioup  ->SetPointError(b,0,sqrt(bincontentmll[4][b-1])*sqrt(1+bincontentmll[4][b-1]*meanerrmll[b-1]*meanerrmll[b-1]/(meanmll[b-1]*meanmll[b-1]))/meanmll[b-1]);
    mllratiodown  ->SetPointError(b,0,sqrt(bincontentmll[8][b-1])*sqrt(1+bincontentmll[8][b-1]*meanerrmll[b-1]*meanerrmll[b-1]/(meanmll[b-1]*meanmll[b-1]))/meanmll[b-1]);
    mthratioup  ->SetPointError(b,0,sqrt(bincontentmth[4][b-1])*sqrt(1+bincontentmth[4][b-1]*meanerrmth[b-1]*meanerrmth[b-1]/(meanmth[b-1]*meanmth[b-1]))/meanmth[b-1]);
    mthratiodown  ->SetPointError(b,0,sqrt(bincontentmth[8][b-1])*sqrt(1+bincontentmth[8][b-1]*meanerrmth[b-1]*meanerrmth[b-1]/(meanmth[b-1]*meanmth[b-1]))/meanmth[b-1]);
    */
    mllratioup  ->SetPointError(b,0,sqrt(bincontentmll[4][b-1]/integralmll[4])/meanmll[b-1]);
    mllratiodown  ->SetPointError(b,0,sqrt(bincontentmll[8][b-1]/integralmth[8])/meanmll[b-1]);
    mthratioup  ->SetPointError(b,0,sqrt(bincontentmth[4][b-1]/integralmth[4])/meanmth[b-1]);
    mthratiodown  ->SetPointError(b,0,sqrt(bincontentmth[8][b-1]/integralmth[8])/meanmth[b-1]);
  }

  //////////////////////////////////////////////////////
  cout<<"Creating plots..."<<endl;

  gStyle->SetFrameLineWidth(3);
  gStyle->SetLabelSize(0.06);
  TCanvas *mll_bands=  new TCanvas(); mll_bands->cd(); auto pad4 =new TPad();
  mll_mean->SetTitle("mll with all the weights"); mll_mean->GetXaxis()->SetTitle("mll [GeV]"); mll_mean->GetXaxis()->SetTitleOffset(1.4); 
  mll_bands->SetGridx(1); mll_bands->SetGridy(1); mll_mean->GetXaxis()->SetRangeUser(0,400);
  mll_mean->SetLineColor(2); mll_mean->SetLineWidth(2); mll_mean->Draw();
  mll_plus->SetLineColor(3); mll_plus->SetLineWidth(2); mll_plus->Draw("same");
  mll_minus->SetLineColor(3);mll_minus->SetLineWidth(2); mll_minus->Draw("same");
  pad4->GetFrame()->SetLineWidth(4);
  mll_bands->SaveAs("mllbands_scale.png");
  TCanvas *mth_bands=  new TCanvas(); mth_bands->cd(); auto pad5 =new TPad();
  mth_mean->SetTitle("mth with all the weights"); mth_mean->GetXaxis()->SetTitle("mth [GeV]");  mth_mean->GetXaxis()->SetTitleOffset(1.4); 
  mth_bands->SetGridx(1); mth_bands->SetGridy(1); mth_mean->GetXaxis()->SetRangeUser(50,400);
  mth_mean->SetLineColor(2); mth_mean->SetLineWidth(2); mth_mean->Draw();
  mth_plus->SetLineColor(3); mth_plus->SetLineWidth(2); mth_plus->Draw("same");
  mth_minus->SetLineColor(3);mth_minus->SetLineWidth(2); mth_minus->Draw("same");
  pad5->GetFrame()->SetLineWidth(4);
  mth_bands->SaveAs("mthbands_scale.png");

  TCanvas *allshapes_mll =new TCanvas(); allshapes_mll->cd(); auto pad1 =new TPad();
  h_scaleweight_mll[0]->SetTitle("mll with all the weights"); h_scaleweight_mll[0]->GetXaxis()->SetTitle("mll [GeV]"); h_scaleweight_mll[0]->GetXaxis()->SetTitleOffset(1.4); 
  allshapes_mll->SetGridx(1);allshapes_mll->SetGridy(1); h_scaleweight_mll[0]->SetLineWidth(2); 
  h_scaleweight_mll[0]->Draw("E");
  for (int i=1;i<9;i++){
    h_scaleweight_mll[i]->Draw("Esame"); h_scaleweight_mll[i]->SetLineWidth(2); 
  }
  mll_mean->Draw("same");
  mll_plus->Draw("same");
  mll_minus->Draw("same");
  pad1->GetFrame()->SetLineWidth(4);
  allshapes_mll->SaveAs("allshapes_mll_scale.png");
  TCanvas *allshapes_mth =new TCanvas(); allshapes_mth->cd(); auto pad2 =new TPad();
  h_scaleweight_mth[0]->SetTitle("mth with all the weights");  h_scaleweight_mth[0]->GetXaxis()->SetTitle("mth [GeV]"); h_scaleweight_mth[0]->GetXaxis()->SetTitleOffset(1.4); h_scaleweight_mth[0]->GetXaxis()->SetRangeUser(50,400);  
  allshapes_mth->SetGridx(1);allshapes_mth->SetGridy(1); h_scaleweight_mth[0]->SetLineWidth(2); 
  h_scaleweight_mth[0]->Draw("E");
  for (int i=1;i<9;i++){
    h_scaleweight_mth[i]->Draw("Esame"); h_scaleweight_mth[i]->SetLineWidth(2); 
  }
  mth_mean->Draw("same");
  mth_plus->Draw("same");
  mth_minus->Draw("same");
  pad2->GetFrame()->SetLineWidth(4);
  allshapes_mth->SaveAs("allshapes_mth_scale.png");

  TCanvas *rat1= new TCanvas(); rat1->cd(); auto pad6 =new TPad();
  mllratioup->SetTitle("ratios up/nominal and down/nominal");  mllratioup->GetXaxis()->SetTitle("mll [GeV]"); mllratioup->GetXaxis()->SetTitleOffset(1.4);  
  mllratioup->GetXaxis()->SetRangeUser(0,400); mllratioup->GetYaxis()->SetRangeUser(0.5,1.5);
  rat1->SetGridx(1);rat1->SetGridy(1); mllratioup->SetLineWidth(2); mllratioup->Draw(); mllratiodown->SetLineWidth(2); mllratiodown->Draw("same");
  pad6->GetFrame()->SetLineWidth(4);
  rat1->SaveAs("ratio_mll_scale.png");
  
  TCanvas *rat3= new TCanvas(); rat3->cd(); auto pad8 =new TPad();
  mthratioup->SetTitle("ratio up/nominal and down/nominal");  mthratioup->GetXaxis()->SetTitle("mth [GeV]"); mthratioup->GetXaxis()->SetTitleOffset(1.4);   
  mthratioup->GetXaxis()->SetRangeUser(50,400); mthratioup->GetYaxis()->SetRangeUser(0.5,1.5);
  rat3->SetGridx(1);rat3->SetGridy(1); mthratioup->SetLineWidth(2); mthratioup->Draw(); mthratiodown->SetLineWidth(2); mthratiodown->Draw("same");
  pad8->GetFrame()->SetLineWidth(4);
  rat3->SaveAs("ratio_mth_scale.png");
  
  cout<<" The End "<<endl;

}













