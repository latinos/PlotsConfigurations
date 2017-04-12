#include <iostream>

#include "TSystem.h"
#include <TFile.h>
#include <TTree.h>
#include <TProfile.h>
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
#define MetBin 6

  vector<float>   *std_vector_lepton_pt;
  vector<float>	*std_vector_lepton_flavour;
  vector<float> *std_vector_lepton_eta;
  vector<float> *std_vector_lepton_phi;


void makeProfMet(const TString inputFileName = "giveMeMyMoney.root") {


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
  //inputTree->SetBranchAddress("corrMetPfType1",   &corrMetPfType1);
  //inputTree->SetBranchAddress("corrMetPfType1Phi",   &corrMetPfType1Phi);
           
  //inputTree->SetBranchAddress("metPfRaw",       &metPfRaw);
  //inputTree->SetBranchAddress("metPfRawPhi",    &metPfRawPhi);
  //inputTree->SetBranchAddress("corrMetPfRaw",   &corrMetPfRaw);
  //inputTree->SetBranchAddress("corrMetPfRawPhi",   &corrMetPfRawPhi);
  //
  // Declare histograms
  //
  TProfile* prMetType1VsVtx_x[MetBin] , *prMetType1VsVtx_y[MetBin];
  TH1D *hMetType1[MetBin];
  //std::vector<TProfile* > prMetType1VsVtx_x , prMetType1VsVtx_y;
  char buffer[20];
  //string name="prMetType1VsVtx";
  for( int iMet(0);iMet<MetBin; iMet++)
  {
    sprintf(buffer, "prMetType1VsVtx_metBin%d_x",iMet);
    prMetType1VsVtx_x[iMet] = new TProfile(buffer,"Px",50,0,50);
    sprintf(buffer, "hMetType1_metBin%d_x",iMet);
    if(iMet == MetBin-1){
      hMetType1[iMet] = new TH1D(buffer,"hMetType1",1000,iMet*10,1050);
    }else{
      hMetType1[iMet] = new TH1D(buffer,"hMetType1",50,iMet*10,iMet*10+10);
    }
    //prMetType1VsVtx_x[iMet] = new TProfile(buffer.append("_x").c_str(),"Px",50,0,50);
    sprintf(buffer, "prMetType1VsVtx_metBin%d_y",iMet);
    prMetType1VsVtx_y[iMet] = new TProfile(buffer,"Py",50,0,50);
  }
  //TProfile *prMetType1VsVtx_x  = new TProfile("prMetType1VsVtx_x","prMetType1VsVtx_x",50,0,50);
  //TProfile *prMetType1VsVtx_y  = new TProfile("prMetType1VsVtx_y","prMetType1VsVtx_y",50,0,50);
  TH1D *hVtx = new TH1D("hVtx","hVtx",50,0,50);
        //hSlimMet->SetStats(0);
        //hSlimMet->SetLineColor(1);


  Int_t totalEvents=0;

  int ttNtry = inputTree->GetEntries();

  for(int jentry=0; jentry<ttNtry; jentry++) {
    if(jentry % 5000 == 0) cout<<"Processing "<<jentry<<"event"<<endl;
    inputTree->GetEntry(jentry);
    totalEvents += nEvents;

    hVtx->Fill(nvtx);
    for( int k(0); k<MetBin;k++)
    {
      if(k==MetBin-1){
	if( metPfType1 > k*10 )
	{
	  prMetType1VsVtx_x[ k ]->Fill(nvtx,metPfType1*TMath::Cos(metPfType1Phi));
	  prMetType1VsVtx_y[ k ]->Fill(nvtx,metPfType1*TMath::Sin(metPfType1Phi));
	  hMetType1[k]->Fill(metPfType1);
	}
      }else{
	if( metPfType1 > k*10 && metPfType1 < (k+1)*10 )
	{
	  prMetType1VsVtx_x[ k ]->Fill(nvtx,metPfType1*TMath::Cos(metPfType1Phi));
	  prMetType1VsVtx_y[ k ]->Fill(nvtx,metPfType1*TMath::Sin(metPfType1Phi));
	  hMetType1[k]->Fill(metPfType1);
	}
      }
    }
  }

  cout << "totalEvents is " << totalEvents << endl;

  outFile->cd();
  outFile->Write("", TObject::kOverwrite);
  outFile->Close();
}
