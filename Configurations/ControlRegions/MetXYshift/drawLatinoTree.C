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

  vector<float>   *std_vector_lepton_pt;


void drawLatinoTree(const TString inputFileName = "Wenu_p_select.root") {


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
  Float_t metPfType1, metPfType1Phi, corrPfType1Met, corrPfType1Phi;

  //TVector2 *t2_slimMet=0, *t2_slimMetTxy=0;

  inputTree->SetBranchAddress("nvtx",         &nvtx);        // number of vertices
  inputTree->SetBranchAddress("metPfType1",       &metPfType1);
  inputTree->SetBranchAddress("metPfType1Phi",    &metPfType1Phi);
  inputTree->SetBranchAddress("corrPfType1Met",   &corrPfType1Met);
  inputTree->SetBranchAddress("corrPfType1Phi",   &corrPfType1Phi);
  inputTree->SetBranchAddress("std_vector_lepton_pt", &std_vector_lepton_pt);
           
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


  Int_t totalEvents=0;

  double phi;
  int ttNtry = inputTree->GetEntries();
  for(int jentry=0; jentry<ttNtry; jentry++) {
    inputTree->GetEntry(jentry);
    totalEvents += nEvents;


    //if (std_vector_lepton_pt->size() < 2) continue;
    //if ( (*std_vector_lepton_pt)[0] < 20) continue;
    //if ( (*std_vector_lepton_pt)[1] < 10) continue;

    //if( metPfType1 < 20) continue;
    //
    // Fill histograms
    //
    hMetDiff->Fill(corrPfType1Met - metPfType1);
    hMetPull->Fill( (corrPfType1Met - metPfType1)/metPfType1 );
    hPhiDiff->Fill(corrPfType1Phi - metPfType1Phi);
    hMETnVtx_x->Fill(nvtx,metPfType1*TMath::Cos(metPfType1Phi));
    hMETnVtx_y->Fill(nvtx,metPfType1*TMath::Sin(metPfType1Phi));
    hMETnVtx_Txy_x->Fill(nvtx,corrPfType1Met*TMath::Cos(corrPfType1Phi));
    hMETnVtx_Txy_y->Fill(nvtx,corrPfType1Met*TMath::Sin(corrPfType1Phi));

    hSlimMet      ->Fill(metPfType1);
    hSlimMetTxy   ->Fill(corrPfType1Met);

    hPhi->Fill(metPfType1Phi);

    hPhiTxy->Fill(corrPfType1Phi);

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
