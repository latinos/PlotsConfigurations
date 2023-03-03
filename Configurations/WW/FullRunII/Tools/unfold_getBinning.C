#include "TROOT.h"
#include "TStyle.h"
#include "TLatex.h"
#include "TFile.h"
#include "TTree.h"
#include "TChain.h"
#include "TBranch.h"
#include "TLeaf.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TH1.h"
#include "TH2.h"
#include "TF1.h"
#include "TProfile.h"
#include "TProfile2D.h"
#include "TMath.h"
#include "TLorentzVector.h"
#include "TSystem.h"
#include "TMatrixD.h"
#include "TDecompSVD.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void getPurityStabilityStat(TH2D* h_response, int ibinlow, int ibinhigh, double &purity, double &stability, double &stat){

  int ibin_low = 1;
  int ibin_high = h_response->GetNbinsX();

  double ngen = h_response->Integral(ibin_low,ibin_high,ibinlow,ibinhigh);
  double ngenfull = h_response->Integral(0,ibin_high+1,ibinlow,ibinhigh);
  double nrec = h_response->Integral(ibinlow,ibinhigh,ibin_low,ibin_high);
  double nrecfull = h_response->Integral(ibinlow,ibinhigh,0,ibin_high+1);
  double nrecgen = h_response->Integral(ibinlow,ibinhigh,ibinlow,ibinhigh);
  
  if (ngen == 0 || nrec == 0) {
    purity = stability = stat = -1.0;
    return;
  }
  
  stability = nrecgen/ngen;
  purity = nrecgen/nrec;
  stat = nrec;

  return;
}

TH2D* convertTH2(TString var, TH1D* h_input){
  int nbins;
  float lowedge;
  float highedge = 400.;
  if (var == "mjj"){
    nbins = 80;
    lowedge = 0.;
  }
  else {
    nbins = 74;
    lowedge = 30.;
  }
  if (h_input->GetNbinsX() != nbins*nbins) {
    std::cout << "Error : number of bins in input histogram is not as expected for " << var << std::endl;
    exit(0);
  }
  TH2D* h_output = new TH2D("h_output","h_output",nbins,lowedge,highedge,nbins,lowedge,highedge);
  for (int ibinx = 1; ibinx < nbins; ibinx++){
    for (int ibiny = 1; ibiny < nbins; ibiny++){
      h_output->SetBinContent(ibinx,ibiny,h_input->GetBinContent(ibinx+nbins*(ibiny-1)));
    }
  }
  return h_output;
}

//Fill h_output with contents of h_input
void rebinTH2(TH2D* h_input, TH2D* h_output){
  int outbinx = 0;
  int inbinx_first = 0;
  for (int ibx = 0; ibx < h_input->GetXaxis()->GetNbins()+2; ibx++){
    if (((float)h_input->GetXaxis()->GetBinUpEdge(ibx) == (float)h_output->GetXaxis()->GetBinUpEdge(outbinx)) ||
	(ibx == h_input->GetXaxis()->GetNbins()+1 && outbinx == h_output->GetXaxis()->GetNbins()+1)){ //Overflow bins will not have same upper edge
      int outbiny = 0;
      int inbiny_first = 0;
      for (int iby = 0; iby < h_input->GetYaxis()->GetNbins()+2; iby++){
	if (((float)h_input->GetYaxis()->GetBinUpEdge(iby) == (float)h_output->GetYaxis()->GetBinUpEdge(outbiny)) ||
	(iby == h_input->GetYaxis()->GetNbins()+1 && outbiny == h_output->GetYaxis()->GetNbins()+1)){
	  double err;
	  double sum = h_input->IntegralAndError(inbinx_first,ibx,inbiny_first,iby,err);
	  h_output->SetBinContent(outbinx,outbiny,sum);
	  h_output->SetBinError(outbinx,outbiny,err);
	  outbiny += 1;
	  inbiny_first = iby+1;
	}
      }
      outbinx += 1;
      inbinx_first = ibx+1;
    }
  }
  h_output->GetXaxis()->SetTitle(h_input->GetXaxis()->GetTitle());
  h_output->GetYaxis()->SetTitle(h_input->GetYaxis()->GetTitle());
  return;
}

void unfold_getBinning(TString var, TString year) {
  
  TH1::AddDirectory(kFALSE);
  gStyle->SetOptStat(0);
  gStyle->SetPaintTextFormat("1.2f");
  
  TFile* histfile = TFile::Open("Full"+year+"_v7/"+var+"/rootFile/plots_WW"+year+"_v7_"+var+".root");
  TH1D* h_response_1D;
  if (var == "jetpt0"){
    h_response_1D = (TH1D*) histfile->Get("ww2l2v_13TeV_sr_1j_B0/"+var+"2D/histo_WW_B0");
    TH1D* h_response_1D_2 = (TH1D*) histfile->Get("ww2l2v_13TeV_sr_2j_B0/"+var+"2D/histo_WW_B0");
    TH1D* h_response_1D_ggWW = (TH1D*) histfile->Get("ww2l2v_13TeV_sr_1j_B0/"+var+"2D/histo_ggWW_B0");
    TH1D* h_response_1D_ggWW_2 = (TH1D*) histfile->Get("ww2l2v_13TeV_sr_2j_B0/"+var+"2D/histo_ggWW_B0");
    h_response_1D->Sumw2();
    h_response_1D_2->Sumw2();
    h_response_1D_ggWW->Sumw2();
    h_response_1D_ggWW_2->Sumw2();
    h_response_1D->Add(h_response_1D_2);
    h_response_1D->Add(h_response_1D_ggWW);
    h_response_1D->Add(h_response_1D_ggWW_2);
  }
  else {
    h_response_1D = (TH1D*) histfile->Get("ww2l2v_13TeV_sr_2j_B0/"+var+"2D/histo_WW_B0");
    TH1D* h_response_1D_ggWW = (TH1D*) histfile->Get("ww2l2v_13TeV_sr_2j_B0/"+var+"2D/histo_ggWW_B0");
    h_response_1D->Sumw2();
    h_response_1D_ggWW->Sumw2();
    h_response_1D->Add(h_response_1D_ggWW);
  }

  TH2D* h_response = convertTH2(var,h_response_1D);
  
  // -------------------------------------------------------------------------------------
  // find optimal binning
  // -------------------------------------------------------------------------------------

  std::vector<float> binedges;
  std::vector<float> v_stability;
  std::vector<float> v_purity;
  
  binedges.push_back(h_response->GetXaxis()->GetBinLowEdge(1));
  
  int lastbin = 0;
  for (int ib = lastbin+1; ib < h_response->GetNbinsX()+1; ib++){
    
    // Get purity / stability / stat
    double purity, stability, stat;
    getPurityStabilityStat(h_response, lastbin+1, ib, purity, stability, stat);
    
    // Quality condition: we want bins with purity / stability > 0.5, and stat > 20
    bool condition = false;
    if ( (purity > 0.5 && stability > 0.5 && stat > 20.0) || ib == h_response->GetNbinsX() ) condition=true;
    if (condition) { 
      binedges.push_back(h_response->GetXaxis()->GetBinUpEdge(ib));
      v_stability.push_back(stability);
      v_purity.push_back(purity);
      lastbin = ib;
      cout << "Added bin edge at " << h_response->GetXaxis()->GetBinUpEdge(ib) << ", lastbin is now " << lastbin << endl;
      cout << "Purity " << purity << " stability " << stability << " stat " << stat << endl;
    }
  }
  
  //Create new response matrix with this binning
  //Convert vector into array
  const int nbins_final = binedges.size() - 1;
  float binedges_final[nbins_final+1];
  for (int ii = 0; ii < nbins_final+1; ii++){
    binedges_final[ii] = binedges.at(ii);
  }
  
  TH2D* h_response_final = new TH2D("response_final","",nbins_final,binedges_final,nbins_final,binedges_final);

  /*
  float binedges_mjj[13]    = {0, 35, 50, 65, 85, 105, 130, 160, 200, 250, 300, 350, 400};
  float binedges_jetpt0[13] = {30, 40, 55, 75, 95, 120, 145, 180, 215, 250, 300, 350, 400};
  float binedges_jetpt1[9] = {30, 40, 55, 75, 95, 120, 150, 200, 400};

  TH2D* h_response_final;
  if (var == "mjj")         h_response_final = new TH2D("response_final","",12,binedges_mjj,12,binedges_mjj);
  else if (var == "jetpt0") h_response_final = new TH2D("response_final","",12,binedges_jetpt0,12,binedges_jetpt0);
  else                      h_response_final = new TH2D("response_final","",8,binedges_jetpt1,8,binedges_jetpt1);
  */

  rebinTH2(h_response,h_response_final);
  
  // -------------------------------------------------------------------------------------
  // plot projections
  // -------------------------------------------------------------------------------------

  TCanvas c("c","c",900,700);
  TH1D* h_reco = h_response_final->ProjectionX();
  TH1D* h_gen = h_response_final->ProjectionY();
  h_reco->Draw("hist");
  c.SaveAs(var+"_reco_"+year+".pdf");
  h_gen->Draw("hist");
  c.SaveAs(var+"_gen_"+year+".pdf");

  // -------------------------------------------------------------------------------------
  // plot response matrices 
  // -------------------------------------------------------------------------------------

  // normalize so that for each true bin, the reco bins add up to 100%
  TMatrixD RM(h_response_final->GetNbinsX(),h_response_final->GetNbinsX());

  for (int ir = 1; ir < h_response_final->GetNbinsX()+1; ir++){
    double rowsum = h_response_final->Integral(1,h_response_final->GetNbinsX(),ir,ir);
    for (int ic = 1; ic < h_response_final->GetNbinsX()+1; ic++){
      double normval = rowsum > 0.0 ? h_response_final->GetBinContent(ic,ir) / rowsum * 100.0 : 0.0;
      h_response_final->SetBinContent(ic,ir,normval);
      RM[ir-1][ic-1]=normval;
    }
  }

  h_response_final->GetXaxis()->SetTitle(var+" reco");
  h_response_final->GetYaxis()->SetTitle(var+" gen");
  h_response_final->SetMarkerSize(1.5);
  h_response_final->Draw("col text");
  c.SaveAs("responseMatrix_"+var+"_"+year+".pdf");

  TDecompSVD T_RM(RM);
  TVectorD SVs = T_RM.GetSig();
  float cond=SVs.Max()/(max(0.000001,SVs.Min()));
  std::cout << "Condition number:" << cond << std::endl;

}

