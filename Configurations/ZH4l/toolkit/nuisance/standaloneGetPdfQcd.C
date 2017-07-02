/*

  The QCD, PDF and alpha_s variations are documented in the following slides,

  https://indico.cern.ch/event/459797/contributions/1961581/attachments/1181555/1800214/mcaod-Feb15-2016.pdf
  
  The correspondence with latinos is documented in the mcWeightExplainedOrdered histogram,

  >>> 9 QCD variations
  [bin    1]   <weight id="1001"> muR=1 muF=1 </weight>
  [bin    2]   <weight id="1002"> muR=1 muF=2 </weight>
  [bin    3]   <weight id="1003"> muR=1 muF=0.5 </weight>
  [bin    4]   <weight id="1004"> muR=2 muF=1 </weight>
  [bin    5]   <weight id="1005"> muR=2 muF=2 </weight>
  [bin    6]   <weight id="1006"> muR=2 muF=0.5 </weight>
  [bin    7]   <weight id="1007"> muR=0.5 muF=1 </weight>
  [bin    8]   <weight id="1008"> muR=0.5 muF=2 </weight>
  [bin    9]   <weight id="1009"> muR=0.5 muF=0.5 </weight>

  >>> 100 PDF variations
  [bin   10]   <weight id="2001"> PDF set = 260001 </weight>
  [bin   11]   <weight id="2002"> PDF set = 260002 </weight>
  [bin   12]   <weight id="2003"> PDF set = 260003 </weight>
  ...
  [bin  107]   <weight id="2098"> PDF set = 260098 </weight>
  [bin  108]   <weight id="2099"> PDF set = 260099 </weight>
  [bin  109]   <weight id="2100"> PDF set = 260100 </weight>

  >>> 2 alpha_s variations
  [bin  110]   <weight id="2101"> PDF set = 265000 </weight>
  [bin  111]   <weight id="2102"> PDF set = 266000 </weight>
*/

#include "TCanvas.h"
#include "TCut.h"
#include "TFile.h"
#include "TFrame.h"
#include "TH1D.h"
#include "TString.h"
#include "TSystem.h"
#include "TTree.h"
#include <fstream>
#include <iostream>
#include <vector>

// Constants
//------------------------------------------------------------------------------
const int  _nqcd        = 9;
const int  _npdf        = 100;
const bool _savefigures = true;


// Functions
//------------------------------------------------------------------------------
void PrintProgress(Long64_t counter, Long64_t total);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// standaloneGetPdfQcd
//   
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void standaloneGetPdfQcd()
{
  gInterpreter->ExecuteMacro("PaperStyle.C");

  if (_savefigures) gSystem->mkdir("figures", kTRUE);

  TFile* file = new TFile("/wk_cms/pchen/work/HWAnalysis/data/eoscms/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__vh3lSel__l3kin__l4kin/latino_ZZTo4L.root");

  TH1D* h_weights_gen = (TH1D*)file->Get("list_vectors_weights");
  TH1D* h_weights_rec = (TH1D*)h_weights_gen->Clone();

  h_weights_rec->Reset();

  TTree* tree = (TTree*)file->Get("latino");

  float chllll_zh4l;
  float metPfType1;
  float mllll_zh4l;
  float z0Mass_zh4l;
  float z1Mass_zh4l;
  float flagZ1SF_zh4l;

  tree->SetBranchAddress("chllll_zh4l",      &chllll_zh4l);
  tree->SetBranchAddress("metPfType1",    &metPfType1);
  tree->SetBranchAddress("mllll_zh4l",       &mllll_zh4l);
  tree->SetBranchAddress("z0Mass_zh4l",   &z0Mass_zh4l);
  tree->SetBranchAddress("z1Mass_zh4l",   &z1Mass_zh4l);
  tree->SetBranchAddress("flagZ1SF_zh4l", &flagZ1SF_zh4l);

  std::vector<float> *std_vector_LHE_weight = 0;
  std::vector<float> *std_vector_jet_cmvav2 = 0;
  std::vector<float> *std_vector_jet_pt     = 0;
  std::vector<float> *std_vector_lepton_isTightLepton = 0;
  std::vector<float> *std_vector_lepton_pt = 0;

  tree->SetBranchAddress("std_vector_LHE_weight", &std_vector_LHE_weight);
  tree->SetBranchAddress("std_vector_jet_cmvav2", &std_vector_jet_cmvav2);
  tree->SetBranchAddress("std_vector_jet_pt",     &std_vector_jet_pt);
  tree->SetBranchAddress("std_vector_lepton_isTightLepton", &std_vector_lepton_isTightLepton);
  tree->SetBranchAddress("std_vector_lepton_pt", &std_vector_lepton_pt);


  // Loop over the tree
  //----------------------------------------------------------------------------
  std::cout << std::endl;

  for (int ievent=0; ievent<tree->GetEntries(); ievent++) {
    
    tree->GetEntry(ievent);
    
    PrintProgress(ievent, tree->GetEntries());

  

    bool wh3l_13TeV_z1sf  = (std_vector_lepton_pt->at(0)>25 && std_vector_lepton_pt->at(1)>15 && std_vector_lepton_pt->at(2)>10 && std_vector_lepton_pt->at(3)>10 &&
                          std_vector_lepton_pt->at(4)<10 &&
                          chllll_zh4l == 0 &&
                          std_vector_lepton_isTightLepton->at(3) > 0.5 &&
                          z0Mass_zh4l > 4 && z1Mass_zh4l > 4 &&
                          mllll_zh4l > 140 &&            
                          flagZ1SF_zh4l ==1 &&
                          metPfType1 > 15 &&
                          fabs(z0Mass_zh4l-91.1876)<15 &&
                          10 <z1Mass_zh4l &&
                          z1Mass_zh4l <65 &&
                          std_vector_jet_pt->at(0) < 50 &&
                        ( std_vector_jet_pt->at(0) < 20 || std_vector_jet_cmvav2->at(0) < -0.715 ) &&
                        ( std_vector_jet_pt->at(1) < 20 || std_vector_jet_cmvav2->at(1) < -0.715 ) &&
                        ( std_vector_jet_pt->at(2) < 20 || std_vector_jet_cmvav2->at(2) < -0.715 ) &&
                        ( std_vector_jet_pt->at(3) < 20 || std_vector_jet_cmvav2->at(3) < -0.715 ) &&
                        ( std_vector_jet_pt->at(4) < 20 || std_vector_jet_cmvav2->at(4) < -0.715 ) &&
                        ( std_vector_jet_pt->at(5) < 20 || std_vector_jet_cmvav2->at(5) < -0.715 ) &&
                        ( std_vector_jet_pt->at(6) < 20 || std_vector_jet_cmvav2->at(6) < -0.715 ) &&
                        ( std_vector_jet_pt->at(7) < 20 || std_vector_jet_cmvav2->at(7) < -0.715 ) &&
                        ( std_vector_jet_pt->at(8) < 20 || std_vector_jet_cmvav2->at(8) < -0.715 ) &&
                        ( std_vector_jet_pt->at(9) < 20 || std_vector_jet_cmvav2->at(9) < -0.715 ));

     if (!wh3l_13TeV_z1sf) continue;

    // Loop over weights
    //--------------------------------------------------------------------------
    for (int iWeight=0; iWeight<h_weights_rec->GetNbinsX(); iWeight++)
      {
	float ratio = std_vector_LHE_weight->at(iWeight) / std_vector_LHE_weight->at(0);
	
	h_weights_rec->Fill(iWeight+0.5, ratio);
      }
  }

  std::cout << std::endl;


  // Produce the QCD uncertainties
  //----------------------------------------------------------------------------
  float qcd_gen_mu05 = h_weights_gen->GetBinContent(9) / h_weights_gen->GetBinContent(1);
  float qcd_gen_mu20 = h_weights_gen->GetBinContent(5) / h_weights_gen->GetBinContent(1);

  float qcd_rec_mu05 = h_weights_rec->GetBinContent(9) / h_weights_rec->GetBinContent(1);
  float qcd_rec_mu20 = h_weights_rec->GetBinContent(5) / h_weights_rec->GetBinContent(1);


  // Produce the PDF uncertainties
  //----------------------------------------------------------------------------
  TH1D* h_pdfratio = new TH1D("h_pdfratio", "", 100, 0.965, 1.035);

  float denominator = h_weights_rec->GetBinContent(1) / h_weights_gen->GetBinContent(1);  // Nominal values

  for (int i=10; i<110; i++)
    {
      float numerator = h_weights_rec->GetBinContent(i) / h_weights_gen->GetBinContent(i);

      float ratio = numerator / denominator;

      h_pdfratio->Fill(ratio);
    }


  // Draw the PDF distribution
  //----------------------------------------------------------------------------
  TCanvas* canvas = new TCanvas("canvas", "canvas");

  h_pdfratio->SetFillColor(kRed+1);
  h_pdfratio->SetFillStyle(  1001);
  h_pdfratio->SetLineColor(kRed+1);

  h_pdfratio->Draw("hist");

  h_pdfratio->SetXTitle("#frac{N_{rec}^{PDF} / N_{gen}^{PDF}}{N_{rec}^{nominal} / N_{gen}^{nominal}}");
  h_pdfratio->SetYTitle("entries / bin");

  h_pdfratio->GetXaxis()->SetTitleOffset(2.0);

  canvas->GetFrame()->DrawClone();

  if (_savefigures)
    {
    //  canvas->SaveAs("figures/pdfacceptance_forVg.pdf");
      canvas->SaveAs("figures/pdfacceptance_forzz.png");
    }


  // Produce the alpha_s uncertainties
  //----------------------------------------------------------------------------
  float alpha_gen_265000 = h_weights_gen->GetBinContent(110) / h_weights_gen->GetBinContent(1);
  float alpha_gen_266000 = h_weights_gen->GetBinContent(111) / h_weights_gen->GetBinContent(1);

  float alpha_rec_265000 = h_weights_rec->GetBinContent(110) / h_weights_rec->GetBinContent(1);
  float alpha_rec_266000 = h_weights_rec->GetBinContent(111) / h_weights_rec->GetBinContent(1);


  // Prepare the final uncertainties
  //----------------------------------------------------------------------------
  float qcd_mu05 = 1e2 * fabs(1. - qcd_rec_mu05 / qcd_gen_mu05);
  float qcd_mu20 = 1e2 * fabs(1. - qcd_rec_mu20 / qcd_gen_mu20);

  float alpha_265000 = 1e2 * fabs(1. - alpha_rec_265000 / alpha_gen_265000);
  float alpha_266000 = 1e2 * fabs(1. - alpha_rec_266000 / alpha_gen_266000);

  float pdf = 1e2 * h_pdfratio->GetRMS();

  float pdf_alpha = sqrt(pdf*pdf + (alpha_265000*alpha_265000 + alpha_266000*alpha_266000)/2.);


  // Print the final uncertainties
  //----------------------------------------------------------------------------
  printf("\n Acceptance uncertainties\n");
  printf("-----------------------------------------\n");
  printf(" nominal acceptance * eff      %4.2f%%\n", 1e2 * h_weights_rec->GetBinContent(1) / h_weights_gen->GetBinContent(1));
  printf(" QCD         mu=0.5 / mu=2.0   %4.2f%% / %4.2f%%\n", qcd_mu05, qcd_mu20);
  printf(" alpha_s     265000 / 266000   %4.2f%% / %4.2f%%\n", alpha_265000, alpha_266000);
  printf(" PDF                           %4.2f%%\n", pdf);
  printf(" PDF+alpha_s                   %4.2f%%\n", pdf_alpha);
  printf("\n");
}


//------------------------------------------------------------------------------
// PrintProgress
//------------------------------------------------------------------------------
void PrintProgress(Long64_t counter, Long64_t total)
{
  double progress = 1e2 * (counter+1) / total;

  double fractpart, intpart;

  fractpart = modf(progress, &intpart);

  if (fractpart < 1e-2)
    {
      std::cout << " Progress: " << int(ceil(progress)) << "%\r";
      std::cout.flush();
    }
}
