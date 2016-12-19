#include <iostream>

#include "TSystem.h"
#include <TFile.h>
#include <TTree.h>
#include <TH1D.h>
#include <TH2D.h>
#include <TLegend.h>
#include <TLine.h>
#include <TCanvas.h>
#include <TVector2.h>
#include <TF1.h>
#include <TMath.h>
#include <TStyle.h>
#include <TLorentzVector.h>

  vector<float>   *std_vector_lepton_pt;
  vector<float>	*std_vector_lepton_flavour;
  vector<float> *std_vector_lepton_eta;
  vector<float> *std_vector_lepton_phi;


void drawLatinoTree(const TString inputFileName = "giveMeMyMoney.root") {


  TH1::SetDefaultSumw2();

  //
  // Settings
  //
  gStyle->SetOptStat(0);
  //
  Int_t NVTXBINS = 30;
  //
  // Setup input ntuple
  //
  TFile* inputFile = new TFile(inputFileName);
  TTree* inputTree = (TTree*)inputFile->Get("latino");

  TString path = Form("Results");
  gSystem->mkdir(path, kTRUE);
  TFile* outFile = new TFile(path + "/out.root", "recreate");

  //
  // Declare variables to read in ntuple
  //
  Int_t nEvents;
  Float_t nvtx;
  Float_t metPfType1, metPfType1Phi, corrMetPfType1, corrMetPfType1Phi;
  Float_t metPfRaw, metPfRawPhi, corrMetPfRaw, corrMetPfRawPhi;

  //TVector2 *t2_slimMet=0, *t2_slimMetTxy=0;

  inputTree->SetBranchAddress("nvtx",         &nvtx);        // number of vertices
  inputTree->SetBranchAddress("std_vector_lepton_pt", &std_vector_lepton_pt);
  inputTree->SetBranchAddress("std_vector_lepton_flavour", &std_vector_lepton_flavour);
  inputTree->SetBranchAddress("std_vector_lepton_eta", &std_vector_lepton_eta);
  inputTree->SetBranchAddress("std_vector_lepton_phi", &std_vector_lepton_phi);
  inputTree->SetBranchAddress("metPfType1",       &metPfType1);
  inputTree->SetBranchAddress("metPfType1Phi",    &metPfType1Phi);
  inputTree->SetBranchAddress("corrMetPfType1",   &corrMetPfType1);
  inputTree->SetBranchAddress("corrMetPfType1Phi",   &corrMetPfType1Phi);
           
  inputTree->SetBranchAddress("metPfRaw",       &metPfRaw);
  inputTree->SetBranchAddress("metPfRawPhi",    &metPfRawPhi);
  inputTree->SetBranchAddress("corrMetPfRaw",   &corrMetPfRaw);
  inputTree->SetBranchAddress("corrMetPfRawPhi",   &corrMetPfRawPhi);
  //
  // Declare histograms
  //
  TH1D *hSlimMet  = new TH1D("hSlimMet","",100,0,150);
        hSlimMet->SetStats(0);
        hSlimMet->SetLineColor(1);
  TH1D *hSlimMetTxy  = new TH1D("hSlimMetTxy","",100,0,150);
        hSlimMetTxy->SetStats(0);
        hSlimMetTxy->SetLineColor(2);

  TH1D *hMetDiff  = new TH1D("hMetDiff","",100,-15,15);
        hMetDiff->SetStats(0);
        hMetDiff->GetXaxis()->SetTitle("Corr. - PfType1Met");
  TH1D *hMetPull  = new TH1D("hMetPull","",100,-1,1);
        hMetPull->SetStats(0);
        hMetPull->GetXaxis()->SetTitle("[Corr. - PfType1Met]/PfType1Met");
  TH1D *hPhiDiff  = new TH1D("hPhiDiff","",100,-1,1);
        hPhiDiff->SetStats(0);
        hPhiDiff->GetXaxis()->SetTitle("Corr.Phi - PfType1Phi");

  TH1D *hPhi = new TH1D("hPhi","",20,-3.5,3.5);
        hPhi->SetStats(0);
        hPhi->SetLineColor(1);
  TH1D *hPhiTxy  = new TH1D("hPhiTxy","",20,-3.5,3.5);
        hPhiTxy->SetStats(0);
        hPhiTxy->SetLineColor(4);

  TH1D *hMetRaw  = new TH1D("hMetRaw","",100,0,150);
        hMetRaw->SetStats(0);
        hMetRaw->SetLineColor(1);
  TH1D *hMetRawTxy  = new TH1D("hMetRawTxy","",100,0,150);
        hMetRawTxy->SetStats(0);
        hMetRawTxy->SetLineColor(2);

  TH1D *hMetRawDiff  = new TH1D("hMetRawDiff","",100,-15,15);
        hMetRawDiff->SetStats(0);
        hMetRawDiff->GetXaxis()->SetTitle("Corr. - MetPfRaw");
  TH1D *hMetRawPull  = new TH1D("hMetRawPull","",100,-1,1);
        hMetRawPull->SetStats(0);
        hMetRawPull->GetXaxis()->SetTitle("[Corr. - MetPfRaw]/MetPfRaw");
  TH1D *hRawPhiDiff  = new TH1D("hRawPhiDiff","",100,-1,1);
        hRawPhiDiff->SetStats(0);
        hRawPhiDiff->GetXaxis()->SetTitle("Corr.Phi - PfRawPhi");

  TH1D *hRawPhi = new TH1D("hRawPhi","",20,-3.5,3.5);
        hRawPhi->SetStats(0);
        hRawPhi->SetLineColor(1);
  TH1D *hRawPhiTxy  = new TH1D("hRawPhiTxy","",20,-3.5,3.5);
        hRawPhiTxy->SetStats(0);
        hRawPhiTxy->SetLineColor(4);


  TH1D *hPhi_VtxRange[4];
  TH1D *hPhiTxy_VtxRange[4];
  for(int i=0;i<4;i++)
  {
    TString Tname = Form("hPhi_VtxRange_%d", i);
    hPhi_VtxRange[i]     = new TH1D(Tname,"",20,-3.5,3.5);
    hPhiTxy_VtxRange[i]  = new TH1D(Tname,"",20,-3.5,3.5);
    hPhi_VtxRange[i]->SetStats(0);
    hPhi_VtxRange[i]->SetLineColor(1);
    hPhiTxy_VtxRange[i]->SetStats(0);
    hPhiTxy_VtxRange[i]->SetLineColor(4);
  }

  TH1D *hPhi_NoCut = new TH1D("hPhi_NoCut","",20,-3.5,3.5);
        hPhi_NoCut->SetStats(0);
        hPhi_NoCut->SetLineColor(1);
  TH1D *hPhiTxy_NoCut  = new TH1D("hPhiTxy_NoCut","",20,-3.5,3.5);
        hPhiTxy_NoCut->SetStats(0);
        hPhiTxy_NoCut->SetLineColor(4);

  TH2D *hMETnVtx_x = new TH2D("hMETnVtx_x","MET_{x} v. Number of Vertices",NVTXBINS,0,NVTXBINS,100,-150,150);
        hMETnVtx_x->GetXaxis()->SetTitle("Number of vertices");
        hMETnVtx_x->GetYaxis()->SetTitle("MET_{x} [GeV]");
  TH2D *hMETnVtx_y = new TH2D("hMETnVtx_y","MET_{y} v. Number of Vertices",NVTXBINS,0,NVTXBINS,100,-150,150);
        hMETnVtx_y->GetXaxis()->SetTitle("Number of vertices");
        hMETnVtx_y->GetYaxis()->SetTitle("MET_{y} [GeV]");
  TH2D *hMETnVtx_Txy_x = new TH2D("hMETnVtx_Txy_x","MET_{x} v. Number of Vertices",NVTXBINS,0,NVTXBINS,100,-150,150);
        hMETnVtx_Txy_x->GetXaxis()->SetTitle("Number of vertices");
        hMETnVtx_Txy_x->GetYaxis()->SetTitle("MET_{x} [GeV]");
  TH2D *hMETnVtx_Txy_y = new TH2D("hMETnVtx_Txy_y","MET_{y} v. Number of Vertices",NVTXBINS,0,NVTXBINS,100,-150,150);
        hMETnVtx_Txy_y->GetXaxis()->SetTitle("Number of vertices");
        hMETnVtx_Txy_y->GetYaxis()->SetTitle("MET_{y} [GeV]");

  TH1D *hRawPhi_NoCut = new TH1D("hRawPhi_NoCut","",20,-3.5,3.5);
        hRawPhi_NoCut->SetStats(0);
        hRawPhi_NoCut->SetLineColor(1);
  TH1D *hRawPhiTxy_NoCut  = new TH1D("hRawPhiTxy_NoCut","",20,-3.5,3.5);
        hRawPhiTxy_NoCut->SetStats(0);
        hRawPhiTxy_NoCut->SetLineColor(4);

  TH2D *hMETRawNvtx_x = new TH2D("hMETRawNvtx_x","MET_{x} v. Number of Vertices",NVTXBINS,0,NVTXBINS,100,-150,150);
        hMETRawNvtx_x->GetXaxis()->SetTitle("Number of vertices");
        hMETRawNvtx_x->GetYaxis()->SetTitle("MET_{x} [GeV]");
  TH2D *hMETRawNvtx_y = new TH2D("hMETRawNvtx_y","MET_{y} v. Number of Vertices",NVTXBINS,0,NVTXBINS,100,-150,150);
        hMETRawNvtx_y->GetXaxis()->SetTitle("Number of vertices");
        hMETRawNvtx_y->GetYaxis()->SetTitle("MET_{y} [GeV]");
  TH2D *hMETRawNvtx_Txy_x = new TH2D("hMETRawNvtx_Txy_x","MET_{x} v. Number of Vertices",NVTXBINS,0,NVTXBINS,100,-150,150);
        hMETRawNvtx_Txy_x->GetXaxis()->SetTitle("Number of vertices");
        hMETRawNvtx_Txy_x->GetYaxis()->SetTitle("MET_{x} [GeV]");
  TH2D *hMETRawNvtx_Txy_y = new TH2D("hMETRawNvtx_Txy_y","MET_{y} v. Number of Vertices",NVTXBINS,0,NVTXBINS,100,-150,150);
        hMETRawNvtx_Txy_y->GetXaxis()->SetTitle("Number of vertices");
        hMETRawNvtx_Txy_y->GetYaxis()->SetTitle("MET_{y} [GeV]");

  Int_t totalEvents=0;

  double phi;
  int ttNtry = inputTree->GetEntries();
  for(int jentry=0; jentry<ttNtry; jentry++) {
    inputTree->GetEntry(jentry);
    totalEvents += nEvents;

    hPhi_NoCut->Fill(metPfType1Phi);
    hPhiTxy_NoCut->Fill(corrMetPfType1Phi);
    hRawPhi_NoCut->Fill(metPfRawPhi);
    hRawPhiTxy_NoCut->Fill(corrMetPfRawPhi);

    if (std_vector_lepton_pt->size() < 2) continue;
    if( (*std_vector_lepton_flavour)[0]*(*std_vector_lepton_flavour)[1] !=-13*13) continue;
    double pt1=(*std_vector_lepton_pt)[0];
    double pt2=(*std_vector_lepton_pt)[1];
    double eta1=(*std_vector_lepton_eta)[0];
    double eta2=(*std_vector_lepton_eta)[1];
    double phi1=(*std_vector_lepton_phi)[0];
    double phi2=(*std_vector_lepton_phi)[1];
    if ( pt1< 20) continue;
    if ( pt2 < 10) continue;
    //TLorentzVector a, b;
    //a.SetPtEtaPhiM(pt1,eta1,phi1,0.1);
    //b.SetPtEtaPhiM(pt2,eta2,phi2,0.1);
    //double zmass = (a+b).M();
    //if(fabs(zmass-91.2)>15 ) continue;


    if( metPfType1 < 20) continue;
    //if( metPfType1 > 30) continue;
    //
    // Fill histograms
    //
    hMetDiff->Fill(corrMetPfType1 - metPfType1);
    hMetPull->Fill( (corrMetPfType1 - metPfType1)/metPfType1 );
    hPhiDiff->Fill(corrMetPfType1Phi - metPfType1Phi);
    hMETnVtx_x->Fill(nvtx,metPfType1*TMath::Cos(metPfType1Phi));
    hMETnVtx_y->Fill(nvtx,metPfType1*TMath::Sin(metPfType1Phi));
    hMETnVtx_Txy_x->Fill(nvtx,corrMetPfType1*TMath::Cos(corrMetPfType1Phi));
    hMETnVtx_Txy_y->Fill(nvtx,corrMetPfType1*TMath::Sin(corrMetPfType1Phi));

    hSlimMet      ->Fill(metPfType1);
    hSlimMetTxy   ->Fill(corrMetPfType1);

    hPhi->Fill(metPfType1Phi);
    hPhiTxy->Fill(corrMetPfType1Phi);

    hMetRawDiff->Fill(corrMetPfRaw - metPfRaw);
    hMetRawPull->Fill( (corrMetPfRaw - metPfRaw)/metPfRaw);
    hRawPhiDiff->Fill(corrMetPfRawPhi - metPfRawPhi);
    hMETRawNvtx_x->Fill(nvtx,metPfRaw*TMath::Cos(metPfRawPhi));
    hMETRawNvtx_y->Fill(nvtx,metPfRaw*TMath::Sin(metPfRawPhi));
    hMETRawNvtx_Txy_x->Fill(nvtx,corrMetPfRaw*TMath::Cos(corrMetPfRawPhi));
    hMETRawNvtx_Txy_y->Fill(nvtx,corrMetPfRaw*TMath::Sin(corrMetPfRawPhi));

    hMetRaw      ->Fill(metPfRaw);
    hMetRawTxy   ->Fill(corrMetPfRaw);

    hRawPhi->Fill(metPfRawPhi);
    hRawPhiTxy->Fill(corrMetPfRawPhi);


    if(nvtx < 5)
    {
      hPhi_VtxRange[0]->Fill(metPfType1Phi);
      hPhiTxy_VtxRange[0]->Fill(corrMetPfType1Phi);
    }else if(nvtx >=5 && nvtx <15){
      hPhi_VtxRange[1]->Fill(metPfType1Phi);
      hPhiTxy_VtxRange[1]->Fill(corrMetPfType1Phi);
    }else if(nvtx >=15 && nvtx <25){
      hPhi_VtxRange[2]->Fill(metPfType1Phi);
      hPhiTxy_VtxRange[2]->Fill(corrMetPfType1Phi);
    }else if(nvtx >=25 ){
      hPhi_VtxRange[3]->Fill(metPfType1Phi);
      hPhiTxy_VtxRange[3]->Fill(corrMetPfType1Phi);
    }

  }

  cout << "totalEvents is " << totalEvents << endl;

  // Loop through nVtx bins and find the mean value of metx and mety in each bin
  // Plot nVtx v. mean values of metx/mety in a separate histogram (1 for metx and 1 for mety)
  TH1D* hmetx_proj = new TH1D();
  TH1D* hmety_proj = new TH1D();
  Double_t meanmetx, meanmety;

  TH2D* hMEtMeanVtx_x = new TH2D("hMEtMeanVtx_x","MET_{x} v. Number of vertices",NVTXBINS,0,NVTXBINS,100,-25,15);
        hMEtMeanVtx_x->GetXaxis()->SetTitle("Number of vertices");
        hMEtMeanVtx_x->GetYaxis()->SetTitle("<MET_{x}> [GeV]");
  TH2D* hMEtMeanVtx_y = new TH2D("hMEtMeanVtx_y","MET_{y} v. Number of vertices",NVTXBINS,0,NVTXBINS,100,-25,15);
        hMEtMeanVtx_y->GetXaxis()->SetTitle("Number of vertices");
        hMEtMeanVtx_y->GetYaxis()->SetTitle("<MET_{y}> [GeV]");

  TH2D* hMEtMeanVtx_Txy_x = new TH2D("hMEtMeanVtx_Txy_x","MET_{x} v. Number of vertices",NVTXBINS,0,NVTXBINS,100,-25,15);
        hMEtMeanVtx_Txy_x->GetXaxis()->SetTitle("Number of vertices");
        hMEtMeanVtx_Txy_x->GetYaxis()->SetTitle("<MET_{x}> [GeV]");
  TH2D* hMEtMeanVtx_Txy_y = new TH2D("hMEtMeanVtx_Txy_y","MET_{y} v. Number of vertices",NVTXBINS,0,NVTXBINS,100,-25,15);
        hMEtMeanVtx_Txy_y->GetXaxis()->SetTitle("Number of vertices");
        hMEtMeanVtx_Txy_y->GetYaxis()->SetTitle("<MET_{y}> [GeV]");


  for(int jbin=1;jbin<hMEtMeanVtx_x->GetNbinsX()+1;jbin++) {
    hmetx_proj = hMETnVtx_x->ProjectionY("metx_proj",jbin,jbin+1,"");
    hmety_proj = hMETnVtx_y->ProjectionY("mety_proj",jbin,jbin+1,"");
    meanmetx = hmetx_proj->GetMean();
    meanmety = hmety_proj->GetMean();
    hMEtMeanVtx_x->Fill(jbin,meanmetx);
    hMEtMeanVtx_y->Fill(jbin,meanmety);

    hmetx_proj = hMETnVtx_Txy_x->ProjectionY("metx_proj",jbin,jbin+1,"");
    hmety_proj = hMETnVtx_Txy_y->ProjectionY("mety_proj",jbin,jbin+1,"");
    meanmetx = hmetx_proj->GetMean();
    meanmety = hmety_proj->GetMean();
    hMEtMeanVtx_Txy_x->Fill(jbin,meanmetx);
    hMEtMeanVtx_Txy_y->Fill(jbin,meanmety);
  }

  TH2D* hMEtRawMeanVtx_x = new TH2D("hMEtRawMeanVtx_x","MET_{x} v. Number of vertices",NVTXBINS,0,NVTXBINS,100,-25,15);
        hMEtRawMeanVtx_x->GetXaxis()->SetTitle("Number of vertices");
        hMEtRawMeanVtx_x->GetYaxis()->SetTitle("<MET_{x}> [GeV]");
  TH2D* hMEtRawMeanVtx_y = new TH2D("hMEtRawMeanVtx_y","MET_{y} v. Number of vertices",NVTXBINS,0,NVTXBINS,100,-25,15);
        hMEtRawMeanVtx_y->GetXaxis()->SetTitle("Number of vertices");
        hMEtRawMeanVtx_y->GetYaxis()->SetTitle("<MET_{y}> [GeV]");

  TH2D* hMEtRawMeanVtx_Txy_x = new TH2D("hMEtRawMeanVtx_Txy_x","MET_{x} v. Number of vertices",NVTXBINS,0,NVTXBINS,100,-25,15);
        hMEtRawMeanVtx_Txy_x->GetXaxis()->SetTitle("Number of vertices");
        hMEtRawMeanVtx_Txy_x->GetYaxis()->SetTitle("<MET_{x}> [GeV]");
  TH2D* hMEtRawMeanVtx_Txy_y = new TH2D("hMEtRawMeanVtx_Txy_y","MET_{y} v. Number of vertices",NVTXBINS,0,NVTXBINS,100,-25,15);
        hMEtRawMeanVtx_Txy_y->GetXaxis()->SetTitle("Number of vertices");
        hMEtRawMeanVtx_Txy_y->GetYaxis()->SetTitle("<MET_{y}> [GeV]");


  for(int jbin=1;jbin<hMEtRawMeanVtx_x->GetNbinsX()+1;jbin++) {
    hmetx_proj = hMETRawNvtx_x->ProjectionY("metx_proj",jbin,jbin+1,"");
    hmety_proj = hMETRawNvtx_y->ProjectionY("mety_proj",jbin,jbin+1,"");
    meanmetx = hmetx_proj->GetMean();
    meanmety = hmety_proj->GetMean();
    hMEtRawMeanVtx_x->Fill(jbin,meanmetx);
    hMEtRawMeanVtx_y->Fill(jbin,meanmety);

    hmetx_proj = hMETRawNvtx_Txy_x->ProjectionY("metx_proj",jbin,jbin+1,"");
    hmety_proj = hMETRawNvtx_Txy_y->ProjectionY("mety_proj",jbin,jbin+1,"");
    meanmetx = hmetx_proj->GetMean();
    meanmety = hmety_proj->GetMean();
    hMEtRawMeanVtx_Txy_x->Fill(jbin,meanmetx);
    hMEtRawMeanVtx_Txy_y->Fill(jbin,meanmety);
  }

  //
  // Save plots
  //
  TLegend *leg_Vtx_x = new TLegend(0.15,0.15,0.4,0.3,NULL,"brNDC");
  leg_Vtx_x->SetTextFont(62);
  leg_Vtx_x->SetTextSize(0.03330866);
  leg_Vtx_x->SetLineColor(1);
  leg_Vtx_x->SetLineStyle(1);
  leg_Vtx_x->SetLineWidth(1);
  leg_Vtx_x->SetFillColor(0);
  leg_Vtx_x->SetFillStyle(1001);
  leg_Vtx_x->SetBorderSize(0);
  leg_Vtx_x->AddEntry(hMEtMeanVtx_x,"Type1PfMet","p");
  leg_Vtx_x->AddEntry(hMEtMeanVtx_Txy_x,"Type1PfMet + Txy","p");


  TLine *metZeroLine=new TLine(0,0,NVTXBINS,0);
  metZeroLine->SetLineColor(kRed);
  metZeroLine->SetLineStyle(2);
  metZeroLine->SetLineWidth(2);

  TCanvas* tc_metVtx_x = new TCanvas();
  tc_metVtx_x->cd();
  hMEtMeanVtx_x->SetMarkerStyle(24);
  hMEtMeanVtx_x->SetMarkerSize(1);
  hMEtMeanVtx_x->SetMarkerColor(kRed);
  hMEtMeanVtx_x->Draw("p0");
  //hSlimMet->Draw("p9");
  hMEtMeanVtx_Txy_x->SetMarkerStyle(26);
  hMEtMeanVtx_Txy_x->SetMarkerSize(1);
  hMEtMeanVtx_Txy_x->SetMarkerColor(kBlue);
  hMEtMeanVtx_Txy_x->Draw("samep0");
  metZeroLine->Draw("same");
  leg_Vtx_x->Draw("same");
  tc_metVtx_x->Print(path+"/MetvsVtx_x.png");
  tc_metVtx_x->Print(path+"/MetvsVtx_x.pdf");

  TLegend *lRa_Vtx_x = new TLegend(0.15,0.15,0.4,0.3,NULL,"brNDC");
  lRa_Vtx_x->SetTextFont(62);
  lRa_Vtx_x->SetTextSize(0.03330866);
  lRa_Vtx_x->SetLineColor(1);
  lRa_Vtx_x->SetLineStyle(1);
  lRa_Vtx_x->SetLineWidth(1);
  lRa_Vtx_x->SetFillColor(0);
  lRa_Vtx_x->SetFillStyle(1001);
  lRa_Vtx_x->SetBorderSize(0);
  lRa_Vtx_x->AddEntry(hMEtRawMeanVtx_x,"MetPfRaw","p");
  lRa_Vtx_x->AddEntry(hMEtRawMeanVtx_Txy_x,"MetPfRaw + Txy","p");



  TCanvas* tc_metRawVtx_x = new TCanvas();
  tc_metRawVtx_x->cd();
  hMEtRawMeanVtx_x->SetMarkerStyle(24);
  hMEtRawMeanVtx_x->SetMarkerSize(1);
  hMEtRawMeanVtx_x->SetMarkerColor(kRed);
  hMEtRawMeanVtx_x->Draw("p0");
  //hSlimMet->Draw("p9");
  hMEtRawMeanVtx_Txy_x->SetMarkerStyle(26);
  hMEtRawMeanVtx_Txy_x->SetMarkerSize(1);
  hMEtRawMeanVtx_Txy_x->SetMarkerColor(kBlue);
  hMEtRawMeanVtx_Txy_x->Draw("samep0");
  metZeroLine->Draw("same");
  lRa_Vtx_x->Draw("same");
  tc_metRawVtx_x->Print(path+"/MetRawvsVtx_x.png");
  tc_metRawVtx_x->Print(path+"/MetRawvsVtx_x.pdf");

  //-------------------
  // Met vs Vtx y-axis
  //-------------------
  TLegend *leg_Vtx_y = new TLegend(0.15,0.15,0.4,0.3,NULL,"brNDC");
  leg_Vtx_y->SetTextFont(62);
  leg_Vtx_y->SetTextSize(0.03330866);
  leg_Vtx_y->SetLineColor(1);
  leg_Vtx_y->SetLineStyle(1);
  leg_Vtx_y->SetLineWidth(1);
  leg_Vtx_y->SetFillColor(0);
  leg_Vtx_y->SetFillStyle(1001);
  leg_Vtx_y->SetBorderSize(0);
  leg_Vtx_y->AddEntry(hMEtMeanVtx_y,"Type1PfMet","p");
  leg_Vtx_y->AddEntry(hMEtMeanVtx_Txy_y,"Type1PfMet + Txy","p");


  TCanvas* tc_metVtx_y = new TCanvas();
  tc_metVtx_y->cd();
  hMEtMeanVtx_y->SetMarkerStyle(24);
  hMEtMeanVtx_y->SetMarkerSize(1);
  hMEtMeanVtx_y->SetMarkerColor(kRed);
  hMEtMeanVtx_y->Draw("p0");
  //hSlimMet->Draw("p9");
  hMEtMeanVtx_Txy_y->SetMarkerStyle(26);
  hMEtMeanVtx_Txy_y->SetMarkerSize(1);
  hMEtMeanVtx_Txy_y->SetMarkerColor(kBlue);
  hMEtMeanVtx_Txy_y->Draw("same");
  metZeroLine->Draw("same");
  leg_Vtx_y->Draw("same");
  tc_metVtx_y->Print(path+"/MetvsVtx_y.png");
  tc_metVtx_y->Print(path+"/MetvsVtx_y.pdf");

  TLegend *lRa_Vtx_y = new TLegend(0.15,0.15,0.4,0.3,NULL,"brNDC");
  lRa_Vtx_y->SetTextFont(62);
  lRa_Vtx_y->SetTextSize(0.03330866);
  lRa_Vtx_y->SetLineColor(1);
  lRa_Vtx_y->SetLineStyle(1);
  lRa_Vtx_y->SetLineWidth(1);
  lRa_Vtx_y->SetFillColor(0);
  lRa_Vtx_y->SetFillStyle(1001);
  lRa_Vtx_y->SetBorderSize(0);
  lRa_Vtx_y->AddEntry(hMEtRawMeanVtx_y,"MetPfRaw","p");
  lRa_Vtx_y->AddEntry(hMEtRawMeanVtx_Txy_y,"MetPfRaw + Txy","p");


  TCanvas* tc_metRawVtx_y = new TCanvas();
  tc_metRawVtx_y->cd();
  hMEtRawMeanVtx_y->SetMarkerStyle(24);
  hMEtRawMeanVtx_y->SetMarkerSize(1);
  hMEtRawMeanVtx_y->SetMarkerColor(kRed);
  hMEtRawMeanVtx_y->Draw("p0");
  //hSlimMet->Draw("p9");
  hMEtRawMeanVtx_Txy_y->SetMarkerStyle(26);
  hMEtRawMeanVtx_Txy_y->SetMarkerSize(1);
  hMEtRawMeanVtx_Txy_y->SetMarkerColor(kBlue);
  hMEtRawMeanVtx_Txy_y->Draw("same");
  metZeroLine->Draw("same");
  lRa_Vtx_y->Draw("same");
  tc_metRawVtx_y->Print(path+"/MetRawvsVtx_y.png");
  tc_metRawVtx_y->Print(path+"/MetRawvsVtx_y.pdf");
  //---------------------
  // phi distribution
  //---------------------
  TCanvas* tc_phi = new TCanvas();
  tc_phi->cd();
  hPhi->SetLineColor(kRed);
  hPhi->SetLineWidth(2);
  hPhi->Draw("");
  hPhiTxy->SetLineColor(kBlue);
  hPhiTxy->SetLineWidth(2);
  hPhiTxy->Draw("same");
  TLegend *leg_Phi = new TLegend(0.15,0.15,0.4,0.3,NULL,"brNDC");
  leg_Phi->SetTextFont(62);
  leg_Phi->SetTextSize(0.03330866);
  leg_Phi->SetLineColor(1);
  leg_Phi->SetLineStyle(1);
  leg_Phi->SetLineWidth(1);
  leg_Phi->SetFillColor(0);
  leg_Phi->SetFillStyle(1001);
  leg_Phi->SetBorderSize(0);
  leg_Phi->AddEntry(hPhi,"Type1PfMet Phi","l");
  leg_Phi->AddEntry(hPhiTxy,"corrected Phi","l");
  leg_Phi->Draw("same");
  tc_phi->Print(path+"/phi.png");
  tc_phi->Print(path+"/phi.pdf");


  TCanvas* tc_RawPhi = new TCanvas();
  tc_RawPhi->cd();
  hRawPhi->SetLineColor(kRed);
  hRawPhi->SetLineWidth(2);
  hRawPhi->Draw("");
  hRawPhiTxy->SetLineColor(kBlue);
  hRawPhiTxy->SetLineWidth(2);
  hRawPhiTxy->Draw("same");
  TLegend *lRa_Phi = new TLegend(0.15,0.15,0.4,0.3,NULL,"brNDC");
  lRa_Phi->SetTextFont(62);
  lRa_Phi->SetTextSize(0.03330866);
  lRa_Phi->SetLineColor(1);
  lRa_Phi->SetLineStyle(1);
  lRa_Phi->SetLineWidth(1);
  lRa_Phi->SetFillColor(0);
  lRa_Phi->SetFillStyle(1001);
  lRa_Phi->SetBorderSize(0);
  lRa_Phi->AddEntry(hRawPhi,"MetPfRaw Phi","l");
  lRa_Phi->AddEntry(hRawPhiTxy,"corrected Phi","l");
  lRa_Phi->Draw("same");
  tc_RawPhi->Print(path+"/RawPhi.png");
  tc_RawPhi->Print(path+"/RawPhi.pdf");

  TCanvas *c_phi[4];
  TLegend *l_Phi[4];
  for(int i=0;i<4;i++){

    //TString Cname = Form("C_Phi_VtxRange_%d", i);
    c_phi[i] = new TCanvas();
    c_phi[i]->cd();
    hPhi_VtxRange[i]->SetLineColor(kRed);
    hPhi_VtxRange[i]->SetLineWidth(2);
    hPhi_VtxRange[i]->Draw("");
    hPhiTxy_VtxRange[i]->SetLineColor(kBlue);
    hPhiTxy_VtxRange[i]->SetLineWidth(2);
    hPhiTxy_VtxRange[i]->Draw("same");
    l_Phi[i] = new TLegend(0.15,0.15,0.4,0.3,NULL,"brNDC");
    l_Phi[i]->SetTextFont(62);
    l_Phi[i]->SetTextSize(0.03330866);
    l_Phi[i]->SetLineColor(1);
    l_Phi[i]->SetLineStyle(1);
    l_Phi[i]->SetLineWidth(1);
    l_Phi[i]->SetFillColor(0);
    l_Phi[i]->SetFillStyle(1001);
    l_Phi[i]->SetBorderSize(0);
    l_Phi[i]->AddEntry(hPhi_VtxRange[i],"Type1PfMet Phi","l");
    l_Phi[i]->AddEntry(hPhiTxy_VtxRange[i],"corrected Phi","l");
    l_Phi[i]->Draw("same");
    TString Oname = Form("Phi_VtxRange_%d", i);
    c_phi[i]->Print(path+"/"+Oname+".png");
    c_phi[i]->Print(path+"/"+Oname+".pdf");

  }

  TCanvas* tc_phi_NoCut = new TCanvas();
  tc_phi_NoCut->cd();
  hPhi_NoCut->SetLineColor(kRed);
  hPhi_NoCut->SetLineWidth(2);
  hPhi_NoCut->Draw("");
  hPhiTxy_NoCut->SetLineColor(kBlue);
  hPhiTxy_NoCut->SetLineWidth(2);
  hPhiTxy_NoCut->Draw("same");
  TLegend *leg_Phi_NoCut = new TLegend(0.15,0.15,0.4,0.3,NULL,"brNDC");
  leg_Phi_NoCut->SetTextFont(62);
  leg_Phi_NoCut->SetTextSize(0.03330866);
  leg_Phi_NoCut->SetLineColor(1);
  leg_Phi_NoCut->SetLineStyle(1);
  leg_Phi_NoCut->SetLineWidth(1);
  leg_Phi_NoCut->SetFillColor(0);
  leg_Phi_NoCut->SetFillStyle(1001);
  leg_Phi_NoCut->SetBorderSize(0);
  leg_Phi_NoCut->AddEntry(hPhi,"Type1PfMet Phi","l");
  leg_Phi_NoCut->AddEntry(hPhiTxy,"corrected Phi","l");
  leg_Phi_NoCut->Draw("same");
  tc_phi_NoCut->Print(path+"/phi_NoCut.png");
  tc_phi_NoCut->Print(path+"/phi_NoCut.pdf");

  TCanvas* tc_RawPhi_NoCut = new TCanvas();
  tc_RawPhi_NoCut->cd();
  hRawPhi_NoCut->SetLineColor(kRed);
  hRawPhi_NoCut->SetLineWidth(2);
  hRawPhi_NoCut->Draw("");
  hRawPhiTxy_NoCut->SetLineColor(kBlue);
  hRawPhiTxy_NoCut->SetLineWidth(2);
  hRawPhiTxy_NoCut->Draw("same");
  TLegend *lRa_Phi_NoCut = new TLegend(0.15,0.15,0.4,0.3,NULL,"brNDC");
  lRa_Phi_NoCut->SetTextFont(62);
  lRa_Phi_NoCut->SetTextSize(0.03330866);
  lRa_Phi_NoCut->SetLineColor(1);
  lRa_Phi_NoCut->SetLineStyle(1);
  lRa_Phi_NoCut->SetLineWidth(1);
  lRa_Phi_NoCut->SetFillColor(0);
  lRa_Phi_NoCut->SetFillStyle(1001);
  lRa_Phi_NoCut->SetBorderSize(0);
  lRa_Phi_NoCut->AddEntry(hRawPhi,"MetPfRaw Phi","l");
  lRa_Phi_NoCut->AddEntry(hRawPhiTxy,"corrected Phi","l");
  lRa_Phi_NoCut->Draw("same");
  tc_RawPhi_NoCut->Print(path+"/RawPhi_NoCut.png");
  tc_RawPhi_NoCut->Print(path+"/RawPhi_NoCut.pdf");
  //---------------------
  // corr-org 
  //---------------------
  TCanvas* tc_metDiff = new TCanvas();
  tc_metDiff->cd();
  hMetDiff->SetMarkerStyle(21);
  hMetDiff->Draw("e");
  tc_metDiff->Print(path+"/MetDiff.png");
  tc_metDiff->Print(path+"/MetDiff.pdf");

  TCanvas* tc_metPull = new TCanvas();
  tc_metPull->cd();
  hMetPull->SetMarkerStyle(21);
  hMetPull->Draw("e");
  tc_metPull->Print(path+"/MetPull.png");
  tc_metPull->Print(path+"/MetPull.pdf");

  TCanvas* tc_phiDiff = new TCanvas();
  tc_phiDiff->cd();
  hPhiDiff->SetMarkerStyle(21);
  hPhiDiff->Draw("e");
  tc_phiDiff->Print(path+"/PhiDiff.png");
  tc_phiDiff->Print(path+"/PhiDiff.pdf");

  outFile->cd();
  outFile->Write("", TObject::kOverwrite);
  outFile->Close();
}
