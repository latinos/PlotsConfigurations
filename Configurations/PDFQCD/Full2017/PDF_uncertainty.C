#include "TCanvas.h"
#include "TTree.h"
#include "TH1D.h"
#include "TFile.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <unistd.h>

void PDF_uncertainty(TString channel)
{
  //How to use: root -b -q "PDF_uncertainty.C(\"hww2l2v_13TeV_of0j\")"
  TString namehist="";                               
  if(channel==""||channel=="WW"){cout<<"No input channel -> Assuming channel = hww2l2v_13TeV_of0j"<<endl;channel="hww2l2v_13TeV_of0j";namehist="WW";}
  if(channel=="top"){cout<<"Top channel -> Assuming channel = hww2l2v_13TeV_of1j"<<endl;channel="hww2l2v_13TeV_of1j";namehist="top";}

  TFile* inputfile= new TFile("rootFile_WW_PDFandScale/plots_PDFandScale.root");
  gStyle->SetOptStat(0);

  TH1F* h_PDFweight_mll[103];
  for(int i=0;i<103;i++){h_PDFweight_mll[i] = new TH1F(Form("weight%d_mll",i),Form("weight%d_mll",i),50,0,400); h_PDFweight_mll[i]= (TH1F*)inputfile->Get(Form(channel+"/mll_pdfweight%d/histo_%s",i,namehist.Data()));}
  TH1F* h_PDFweight_mth[103];
  for(int i=0;i<103;i++){h_PDFweight_mth[i] = new TH1F(Form("weight%d_mth",i),Form("weight%d_mth",i),50,50,400); h_PDFweight_mth[i]= (TH1F*)inputfile->Get(Form(channel+"/mth_pdfweight%d/histo_%s",i,namehist.Data()));}

  float integralmth[103];  float integralmll[103];
  for(int i=0;i<103;i++){integralmth[i]=h_PDFweight_mth[i]->Integral();integralmll[i]=h_PDFweight_mll[i]->Integral();}
  for(int i=0;i<103;i++){h_PDFweight_mth[i]->Scale(1/integralmth[i]);h_PDFweight_mll[i]->Scale(1/integralmll[i]);}
  
  TH1F* histo_bins_mth[50];
  for(int i=0;i<50;i++){histo_bins_mth[i] = new TH1F(Form("bin%d_mth",i),Form("bin%d_mth",i),130,0,1300);}
  TH1F* histo_bins_mll[50];
  for(int i=0;i<50;i++){histo_bins_mll[i] = new TH1F(Form("bin%d_mll",i),Form("bin%d_mll",i),130,0,1300);}

  float meanmll[50];  float RMSmll[50];  float meanmth[50];  float RMSmth[50];
  float meanerrmll[50]; float meanerrmth[50]; float RMSerrmll[50]; float RMSerrmth[50];  
  float bincontentmll[103][50];  float bincontentmth[103][50];

  TGraphErrors *mth_mean =new TGraphErrors();
  TGraphErrors *mth_minus=new TGraphErrors();
  TGraphErrors *mth_plus =new TGraphErrors();
  TGraphErrors *mll_mean =new TGraphErrors();
  TGraphErrors *mll_minus=new TGraphErrors();
  TGraphErrors *mll_plus =new TGraphErrors();

  TGraphErrors *mllratioup  =new TGraphErrors();
  TGraphErrors *mllratiodown=new TGraphErrors();
  TGraphErrors *mthratioup  =new TGraphErrors();
  TGraphErrors *mthratiodown=new TGraphErrors();

  ////////////////////////////// mth binned //////////////////////////////////
  TH1F* h_PDFweight_mll_mthbin[103][3];
  for(int b=0;b<3;b++){
    for(int i=0;i<103;i++){h_PDFweight_mll_mthbin[i][b] = new TH1F(Form("weight%d_mll_bin%d",i,b*50+50),Form("weight%d_mll_bin%d",i,b*50+50),50,0,400); h_PDFweight_mll_mthbin[i][b]= (TH1F*)inputfile->Get(Form(channel+"/mll_pdfweight%d_bin%d/histo_%s",i,b*50+50,namehist.Data()));}
  }


  float integralmllbin[103][3];
  for(int b=0;b<3;b++){
    for(int i=0;i<103;i++){integralmllbin[i][b]=h_PDFweight_mll_mthbin[i][b]->Integral();}
    for(int i=0;i<103;i++){h_PDFweight_mll_mthbin[i][b]->Scale(1/integralmllbin[i][b]);}
  }

  TH1F* histo_bins_mll_mthbin[50][3]; 
  for(int b=0;b<3;b++){
    for(int i=0;i<50;i++){histo_bins_mll_mthbin[i][b] = new TH1F(Form("bin%d_mll_mthbin%d",i,b*50+50),Form("bin%d_mll_mthbin%d",i,b*50+50),130,0,1300);}
  }

  float meanmllbin[50][3]; float RMSmllbin[50][3]; float meanerrmllbin[50][3]; float RMSerrmllbin[50][3];
  float bincontentmllbin[103][50][3];

  TGraphErrors *mll_meanbin[3];
  TGraphErrors *mll_minusbin[3];
  TGraphErrors *mll_plusbin[3];
  TGraphErrors *mllratioupbin[3];
  TGraphErrors *mllratiodownbin[3];
  
  for(int b=0;b<3;b++){
    mll_meanbin[b]  =new TGraphErrors();
    mll_minusbin[b] =new TGraphErrors();
    mll_plusbin[b]  =new TGraphErrors();
    mllratioupbin[b]   =new TGraphErrors();
    mllratiodownbin[b] =new TGraphErrors();
  }

  ///////////////////////////////////////////////////
  cout<<"Begin filling..."<<endl;

  for(int b=1;b<51;b++){
    for(int i=0;i<103;i++){
      bincontentmll[i][b-1]=h_PDFweight_mll[i]->GetBinContent(b);
      bincontentmth[i][b-1]=h_PDFweight_mth[i]->GetBinContent(b);
      histo_bins_mll[b-1]->Fill(bincontentmll[i][b-1]);
      histo_bins_mth[b-1]->Fill(bincontentmth[i][b-1]);
    }
  }

  for(int b=0;b<50;b++){
    RMSmth[b] = histo_bins_mth[b]->GetRMS(); 
    meanmth[b]= histo_bins_mth[b]->GetMean();
    RMSerrmth[b] = histo_bins_mth[b]->GetRMSError(); 
    meanerrmth[b]= histo_bins_mth[b]->GetMeanError();
    RMSmll[b] = histo_bins_mll[b]->GetRMS(); 
    meanmll[b]= histo_bins_mll[b]->GetMean();
    RMSerrmll[b] = histo_bins_mll[b]->GetRMSError(); 
    meanerrmll[b]= histo_bins_mll[b]->GetMeanError();
    //cout<<meanmll[b]<<" "<<meanerrmll[b]<<" "<<RMSmll[b]<<" "<<RMSerrmll[b]<<endl;
  }

  for(int b=1;b<51;b++){
    mth_mean ->SetPoint(b,b*8-4,meanmth[b-1]);
    mth_minus->SetPoint(b,b*8-4,meanmth[b-1]-RMSmth[b-1]);
    mth_plus ->SetPoint(b,b*8-4,meanmth[b-1]+RMSmth[b-1]);
    mll_mean ->SetPoint(b,b*8-4,meanmll[b-1]);
    mll_minus->SetPoint(b,b*8-4,meanmll[b-1]-RMSmll[b-1]);
    mll_plus ->SetPoint(b,b*8-4,meanmll[b-1]+RMSmll[b-1]);
    mllratioup->SetPoint(b,b*8-4,(meanmll[b-1]+RMSmll[b-1])/meanmll[b-1]);
    mllratiodown->SetPoint(b,b*8-4,(meanmll[b-1]-RMSmll[b-1])/meanmll[b-1]);
    mthratioup->SetPoint(b,b*8-4,(meanmth[b-1]+RMSmth[b-1])/meanmth[b-1]);
    mthratiodown->SetPoint(b,b*8-4,(meanmth[b-1]-RMSmth[b-1])/meanmth[b-1]);
    mllratioup->SetPointError(b,0,sqrt(RMSerrmll[b-1]*RMSerrmll[b-1]+RMSmll[b-1]*RMSmll[b-1]*meanerrmll[b-1]*meanerrmll[b-1]/(meanmll[b-1]*meanmll[b-1]))/meanmll[b-1]);
    mllratiodown->SetPointError(b,0,sqrt(RMSerrmll[b-1]*RMSerrmll[b-1]+RMSmll[b-1]*RMSmll[b-1]*meanerrmll[b-1]*meanerrmll[b-1]/(meanmll[b-1]*meanmll[b-1]))/meanmll[b-1]);
    mthratioup->SetPointError(b,0,sqrt(RMSerrmth[b-1]*RMSerrmth[b-1]+RMSmth[b-1]*RMSmth[b-1]*meanerrmth[b-1]*meanerrmth[b-1]/(meanmth[b-1]*meanmth[b-1]))/meanmth[b-1]);
    mthratiodown->SetPointError(b,0,sqrt(RMSerrmth[b-1]*RMSerrmth[b-1]+RMSmth[b-1]*RMSmth[b-1]*meanerrmth[b-1]*meanerrmth[b-1]/(meanmth[b-1]*meanmth[b-1]))/meanmth[b-1]);
  }

  ////////////////////////////// mth binned //////////////////////////////////
  for(int k=0;k<3;k++){
    for(int b=2;b<51;b++){    //take out first bin, with mll=0
      for(int i=0;i<103;i++){
	bincontentmllbin[i][b-1][k]=h_PDFweight_mll_mthbin[i][k]->GetBinContent(b);
	if(bincontentmllbin[i][b-1][k]!=0)histo_bins_mll_mthbin[b-1][k]->Fill(bincontentmllbin[i][b-1][k]);
      }
    }
  }
  for(int k=0;k<3;k++){
    for(int b=1;b<50;b++){    //take out first bin, with mll=0
      RMSmllbin[b][k] = histo_bins_mll_mthbin[b][k]->GetRMS(); 
      meanmllbin[b][k]= histo_bins_mll_mthbin[b][k]->GetMean();
      RMSerrmllbin[b][k] = histo_bins_mll_mthbin[b][k]->GetRMSError(); 
      meanerrmllbin[b][k]= histo_bins_mll_mthbin[b][k]->GetMeanError();
    }
  }
  for(int k=0;k<3;k++){
    for(int b=2;b<51;b++){    //take out first bin, with mll=0
      mll_meanbin[k] ->SetPoint(b,b*8-4,meanmllbin[b-1][k]);
      mll_minusbin[k]->SetPoint(b,b*8-4,meanmllbin[b-1][k]-RMSmllbin[b-1][k]);
      mll_plusbin[k] ->SetPoint(b,b*8-4,meanmllbin[b-1][k]+RMSmllbin[b-1][k]);
      mllratioupbin[k]->SetPoint(b,b*8-4,(meanmllbin[b-1][k]+RMSmllbin[b-1][k])/meanmllbin[b-1][k]);
      mllratiodownbin[k]->SetPoint(b,b*8-4,(meanmllbin[b-1][k]-RMSmllbin[b-1][k])/meanmllbin[b-1][k]);
      mllratioupbin[k]->SetPointError(b,0,sqrt(RMSerrmllbin[b-1][k]*RMSerrmllbin[b-1][k]+RMSmllbin[b-1][k]*RMSmllbin[b-1][k]*meanerrmllbin[b-1][k]*meanerrmllbin[b-1][k]/(meanmllbin[b-1][k]*meanmllbin[b-1][k]))/meanmllbin[b-1][k]);
      mllratiodownbin[k]->SetPointError(b,0,sqrt(RMSerrmllbin[b-1][k]*RMSerrmllbin[b-1][k]+RMSmllbin[b-1][k]*RMSmllbin[b-1][k]*meanerrmllbin[b-1][k]*meanerrmllbin[b-1][k]/(meanmllbin[b-1][k]*meanmllbin[b-1][k]))/meanmllbin[b-1][k]);
    }
  }

  //////////////////////////////////////////////////////
  cout<<"Creating plots..."<<endl;

  TLegend *leg= new TLegend(0.1,0.7,0.48,0.9);
  leg->AddEntry(mllratioupbin[0],"ratios for mth 50to100","l");
  leg->AddEntry(mllratioupbin[1],"ratios for mth 100to150","l");
  leg->AddEntry(mllratioupbin[2],"ratios for mth 150to200","l");

  gStyle->SetFrameLineWidth(3);
  gStyle->SetLabelSize(0.06);
  TCanvas *mll_bands=  new TCanvas(); mll_bands->cd(); auto pad4 =new TPad();
  mll_mean->SetTitle("mll with all the weights"); mll_mean->GetXaxis()->SetTitle("mll [GeV]"); mll_mean->GetXaxis()->SetTitleOffset(1.4); 
  mll_bands->SetGridx(1); mll_bands->SetGridy(1); mll_mean->GetXaxis()->SetRangeUser(0,400);
  mll_mean->SetLineColor(2); mll_mean->SetLineWidth(2); mll_mean->Draw("");
  mll_plus->SetLineColor(3); mll_plus->SetLineWidth(2); mll_plus->Draw("same");
  mll_minus->SetLineColor(3);mll_minus->SetLineWidth(2); mll_minus->Draw("same");
  pad4->GetFrame()->SetLineWidth(4);
  mll_bands->SaveAs("mllbands_PDF.png");
  TCanvas *mth_bands=  new TCanvas(); mth_bands->cd(); auto pad5 =new TPad();
  mth_mean->SetTitle("mth with all the weights"); mth_mean->GetXaxis()->SetTitle("mth [GeV]");  mth_mean->GetXaxis()->SetTitleOffset(1.4); 
  mth_bands->SetGridx(1); mth_bands->SetGridy(1); mth_mean->GetXaxis()->SetRangeUser(50,400);
  mth_mean->SetLineColor(2); mth_mean->SetLineWidth(2); mth_mean->Draw();
  mth_plus->SetLineColor(3); mth_plus->SetLineWidth(2); mth_plus->Draw("same");
  mth_minus->SetLineColor(3);mth_minus->SetLineWidth(2); mth_minus->Draw("same");
  pad5->GetFrame()->SetLineWidth(4);
  mth_bands->SaveAs("mthbands_PDF.png");

  TCanvas *allshapes_mll =new TCanvas(); allshapes_mll->cd(); auto pad1 =new TPad();
  h_PDFweight_mll[0]->SetTitle("mll with all the weights"); h_PDFweight_mll[0]->GetXaxis()->SetTitle("mll [GeV]"); h_PDFweight_mll[0]->GetXaxis()->SetTitleOffset(1.4);  
  allshapes_mll->SetGridx(1);allshapes_mll->SetGridy(1); h_PDFweight_mll[0]->SetLineWidth(2); 
  h_PDFweight_mll[0]->Draw("E");
  for (int i=1;i<103;i++){
    h_PDFweight_mll[i]->Draw("Esame"); h_PDFweight_mll[i]->SetLineWidth(2); 
  }
  mll_mean->Draw("same");
  mll_plus->Draw("same");
  mll_minus->Draw("same");
  pad1->GetFrame()->SetLineWidth(4);
  allshapes_mll->SaveAs("allshapes_mll_PDF.png");
  TCanvas *allshapes_mth =new TCanvas(); allshapes_mth->cd(); auto pad2 =new TPad();
  h_PDFweight_mth[0]->SetTitle("mth with all the weights");  h_PDFweight_mth[0]->GetXaxis()->SetTitle("mth [GeV]"); h_PDFweight_mth[0]->GetXaxis()->SetTitleOffset(1.4); h_PDFweight_mth[0]->GetXaxis()->SetRangeUser(50,400);
  allshapes_mth->SetGridx(1);allshapes_mth->SetGridy(1); h_PDFweight_mth[0]->SetLineWidth(2); 
  h_PDFweight_mth[0]->Draw("E");
  for (int i=1;i<103;i++){
    h_PDFweight_mth[i]->Draw("Esame"); h_PDFweight_mth[i]->SetLineWidth(2); 
  }
  mth_mean->Draw("same");
  mth_plus->Draw("same");
  mth_minus->Draw("same");
  pad2->GetFrame()->SetLineWidth(4);
  allshapes_mth->SaveAs("allshapes_mth_PDF.png");

  TCanvas *rat1= new TCanvas(); rat1->cd(); auto pad6 =new TPad();
  mllratioup->SetTitle("ratios up/nominal and down/nominal");  mllratioup->GetXaxis()->SetTitle("mll [GeV]"); mllratioup->GetXaxis()->SetTitleOffset(1.4);  
  mllratioup->GetXaxis()->SetRangeUser(0,400); mllratioup->GetYaxis()->SetRangeUser(0.95,1.05);
  rat1->SetGridx(1);rat1->SetGridy(1); mllratioup->SetLineWidth(2); mllratioup->Draw(); mllratiodown->SetLineWidth(2); mllratiodown->Draw("same");
  pad6->GetFrame()->SetLineWidth(4);
  rat1->SaveAs("ratio_mll_PDF.png");
  TCanvas *rat2= new TCanvas(); rat2->cd(); auto pad8 =new TPad();
  mthratioup->SetTitle("ratio up/nominal and down/nominal");  mthratioup->GetXaxis()->SetTitle("mth [GeV]"); mthratioup->GetXaxis()->SetTitleOffset(1.4);   
  mthratioup->GetXaxis()->SetRangeUser(50,400); mthratioup->GetYaxis()->SetRangeUser(0.95,1.05);
  rat2->SetGridx(1);rat2->SetGridy(1); mthratioup->SetLineWidth(2); mthratioup->Draw(); mthratiodown->SetLineWidth(2); mthratiodown->Draw("same");
  pad8->GetFrame()->SetLineWidth(4);
  rat2->SaveAs("ratio_mth_PDF.png");

  ////////////////////////////// mth binned //////////////////////////////////
  for(int b=0;b<3;b++){
    TCanvas *mll_bands=  new TCanvas(); mll_bands->cd(); auto pad3 =new TPad();
    mll_meanbin[b]->SetTitle(Form("mll for mth bin %d-%d",b*50+50,b*50+100)); mll_meanbin[b]->GetXaxis()->SetTitle("mll [GeV]"); mll_meanbin[b]->GetXaxis()->SetTitleOffset(1.4); 
    mll_bands->SetGridx(1); mll_bands->SetGridy(1); mll_meanbin[b]->GetXaxis()->SetRangeUser(0,400);
    mll_meanbin[b]->SetLineColor(2); mll_meanbin[b]->SetLineWidth(2); mll_meanbin[b]->Draw();
    mll_plusbin[b]->SetLineColor(3); mll_plusbin[b]->SetLineWidth(2); mll_plusbin[b]->Draw("same");
    mll_minusbin[b]->SetLineColor(3);mll_minusbin[b]->SetLineWidth(2); mll_minusbin[b]->Draw("same");
    pad3->GetFrame()->SetLineWidth(4);
    mll_bands->SaveAs(Form("mllbands_PDF_mthbin%dto%d.png",b*50+50,b*50+100));
  }
  /*
  for(int b=0;b<4;b++){
    TCanvas *allshapes_mll =new TCanvas(); allshapes_mll->cd(); auto pad7 =new TPad();
    h_PDFweight_mll_mthbin[0][b]->SetTitle(Form("mll for mth bin %d",b*50+50)); h_PDFweight_mll_mthbin[0][b]->GetXaxis()->SetTitle("mll [GeV]"); h_PDFweight_mll_mthbin[0][b]->GetXaxis()->SetTitleOffset(1.4);  
    allshapes_mll->SetGridx(1);allshapes_mll->SetGridy(1); h_PDFweight_mll_mthbin[0][b]->SetLineWidth(2); 
    h_PDFweight_mll_mthbin[0][b]->Draw("E");
    for (int i=1;i<103;i++){
      h_PDFweight_mll_mthbin[i][b]->Draw("Esame"); h_PDFweight_mll_mthbin[i][b]->SetLineWidth(2); 
    }
    mll_meanbin[b]->Draw("same");
    mll_plusbin[b]->Draw("same");
    mll_minusbin[b]->Draw("same");
    pad7->GetFrame()->SetLineWidth(4);
    allshapes_mll->SaveAs(Form("allshapes_mll_PDF_mthbin%d.png",b*50+50));
  }
  */
  TCanvas *rat4= new TCanvas();
  for(int b=0;b<3;b++){
    TCanvas *rat3= new TCanvas(); rat3->cd(); auto pad9 =new TPad();
    mllratioupbin[b]->SetTitle(Form("ratios mthbin%dto%d",b*50+50,b*50+100));  mllratioupbin[b]->GetXaxis()->SetTitle("mll [GeV]"); mllratioupbin[b]->GetXaxis()->SetTitleOffset(1.4);  
    mllratioupbin[b]->GetXaxis()->SetRangeUser(0,400); mllratioupbin[b]->GetYaxis()->SetRangeUser(0.95,1.05);
    rat3->SetGridx(1);rat3->SetGridy(1); mllratioupbin[b]->SetLineWidth(2); mllratioupbin[b]->Draw(); mllratiodownbin[b]->SetLineWidth(2); mllratiodownbin[b]->Draw("same");
    pad9->GetFrame()->SetLineWidth(4);
    rat3->SaveAs(Form("ratio_mll_PDF_mthbin%dto%d.png",b*50+50,b*50+100));
    mllratioupbin[b]->GetYaxis()->SetRangeUser(0.5,1.5);
    rat3->SaveAs(Form("ratio_mll_PDF_mthbin%dto%d_unzoomed.png",b*50+50,b*50+100));
    mllratiodownbin[b]->Fit("pol2","","",20,350);  mllratioupbin[b]->Fit("pol2","","",20,350);
    rat3->SaveAs(Form("ratio_mll_PDF_mthbin%dto%d_fit.png",b*50+50,b*50+100));
    rat4->cd(); mllratioupbin[b]->SetLineColor(b+1); mllratiodownbin[b]->SetLineColor(b+1); 
    if(b==0){mllratioupbin[b]->Draw();mllratiodownbin[b]->Draw("same"); mllratioupbin[b]->SetTitle("ratios for each mth bin");}
    else{mllratioupbin[b]->Draw("same");mllratiodownbin[b]->Draw("same");}
  }
  leg->Draw(); rat4->SaveAs("ratio_mll_PDF_mthbin_unzoomed_ALL.png");
 
  cout<<" The End "<<endl;
}













		     
