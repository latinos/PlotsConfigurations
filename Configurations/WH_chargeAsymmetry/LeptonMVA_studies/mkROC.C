/*

  root -l -b -q 'mkROC.C("rootFile_Legacy/plots_LeptonMVA_studies_Legacy.root", "rootFile_UL/plots_LeptonMVA_studies_UL.root", "electron", "2018")'
  root -l -b -q 'mkROC.C("rootFile_Legacy/plots_LeptonMVA_studies_Legacy.root", "rootFile_UL/plots_LeptonMVA_studies_UL.root", "muon", "2018")'

*/

using namespace std;

#include <sstream>
template <typename T>
std::string to_string_with_precision(const T a_value, const int n = 6)
{
  std::ostringstream out;
  out.precision(n);
  out << std::fixed << a_value;
  return out.str();
}

// Prepare ROC curve
TGraph ROC_curve(TH1F* h_sig, TH1F* h_bkg, TString name){

  // Consistency check
  if (h_bkg->GetNbinsX() != h_sig->GetNbinsX()){
    cout << "Signal and background histograms have not got the same number of bins!!!" << endl;
    return -1;
  }

  float integral_sig = 0.;
  float integral_bkg = 0.;
  
  integral_sig = h_sig -> Integral();
  integral_bkg = h_bkg -> Integral();
  
  cout << h_sig -> Integral() << endl;
  cout << h_bkg -> Integral() << endl;
  
  float eff_sig = 0.;
  float eff_bkg = 0.;

  // ROC Curve  
  TGraph ROC;
  int nbins = h_bkg->GetNbinsX();
  for (int b = 0; b < nbins; ++b){
    float S = h_sig -> Integral(b, nbins);
    float B = h_bkg -> Integral(b, nbins);
    eff_sig = S / integral_sig;
    eff_bkg = B / integral_bkg;
    ROC.SetPoint(b, eff_bkg, eff_sig);
  }
  ROC.SetName(name);
  return ROC;
}


// Returns the fake rate of a given MVA and WP.
// Use it to get the fake rate of the legacy MVA with its WP.
// Requires h_bkg to be a TH1F("h", "h", 1000, -1., 1.)            
float get_fake_rate(TH1F* h_bkg, float wp){

  int n_bins = 1000;
  
  // bin_number = (WP - x_min) / bin_width
  float wp_to_bin = (wp + 1) / 0.002;
  float bkg_eff = h_bkg -> Integral(wp_to_bin, n_bins) /  h_bkg -> Integral();
  
  return bkg_eff;
}


// Returns the WP corresponding to a given fake rate for a given MVA.
// Use it to get the WP of the UL MVA providing a given fake rate.
// Requires h_bkg to be a TH1F("h", "h", 1000, -1., 1.)
float get_WP(TH1F* h_bkg, float fr){
  
  int n_bins = 1001;

  float bkg_integral = h_bkg -> Integral(0, 1000);
  int correct_bin = 0;

  for (int i = 1; i < n_bins; ++i){

    float current_fr = h_bkg -> Integral(i, n_bins) / bkg_integral;
    if (current_fr <= fr){
      correct_bin = i;
      break;
    }
  }
  return (-1 + correct_bin*0.002);
}


// Efficiency plot
TGraph fake_leptons_eff(TH1F* h_bkg, TString name){

  float integral_bkg = 0.;

  integral_bkg = h_bkg -> Integral();

  cout << h_bkg -> Integral() << endl;

  float eff_bkg = 0.;

  // Actual figure of merit
  TGraph yields;
  int nbins = 1001;
  for (int b = 0; b < nbins; ++b){
    float B = h_bkg -> Integral(b, nbins);
    eff_bkg = B / integral_bkg;
    yields.SetPoint(b, -1. + (b / 500.), eff_bkg);
  }
  yields.SetName(name);
  return yields;
}


// Main function
void mkROC(TString file_name_v7 = "rootFile_Legacy/plots_LeptonMVA_studies_Legacy.root",
	   TString file_name_v9 = "rootFile_UL/plots_LeptonMVA_studies_UL.root",
	   TString channel      = "electron",
	   TString era          = "2018"
	   ){

  cout << "Opening rootfile" << endl;


  // Input files
  TFile* f_in_v7 = new TFile(file_name_v7);
  TFile* f_in_v9 = new TFile(file_name_v9);


  // Background histograms
  TString h_bkg_name_v7        = "";
  TString h_bkg_name_v9        = "";
  TString h_bkg_name_Legacy_v9 = "";

  if (channel == "electron"){
    h_bkg_name_v7        = "2electrons_SS_10GeV_background/min_legacy_ttHMVA_electron/histo_WJets_legacy";
    h_bkg_name_v9        = "2electrons_SS_10GeV_background/min_UL_ttHMVA_electron/histo_WJets_UL";
    h_bkg_name_Legacy_v9 = "2electrons_SS_10GeV_background/min_legacy_ttHMVA_electron/histo_WJets_UL";
  }
  else if (channel == "muon"){
    h_bkg_name_v7        = "2muons_SS_10GeV_background/min_legacy_ttHMVA_muon/histo_WJets_legacy";
    h_bkg_name_v9        = "2muons_SS_10GeV_background/min_UL_ttHMVA_muon/histo_WJets_UL";
    h_bkg_name_Legacy_v9 = "2muons_SS_10GeV_background/min_legacy_ttHMVA_muon/histo_WJets_UL";
  }
  else{
    cout << "I don't know this channel" << endl;
    return;
  }

  TH1F* h_bkg_v7        = (TH1F*) f_in_v7 -> Get(h_bkg_name_v7);
  TH1F* h_bkg_v9        = (TH1F*) f_in_v9 -> Get(h_bkg_name_v9);
  TH1F* h_bkg_Legacy_v9 = (TH1F*) f_in_v9 -> Get(h_bkg_name_Legacy_v9);


  // Signal histograms
  TString h_sig_name_v7        = "";
  TString h_sig_name_v9        = "";
  TString h_sig_name_Legacy_v9 = "";
  TString h_sig_name_SS_v7     = "";

  // We use fully-leptonic sample for signal, since they are the only ones currently available for UL
  // As a cross-check, we also plot the 2lSS signal for the legacy production
  if (channel == "electron"){
    h_sig_name_v7        = "2electrons_SS_10GeV_signal/min_legacy_ttHMVA_electron/histo_WH_hww_2l_legacy";
    h_sig_name_SS_v7     = "2electrons_SS_10GeV_signal/min_legacy_ttHMVA_electron/histo_WH_hww_legacy";
    h_sig_name_v9        = "2electrons_SS_10GeV_signal/min_UL_ttHMVA_electron/histo_WH_hww_2l_UL";
    h_sig_name_Legacy_v9 = "2electrons_SS_10GeV_signal/min_legacy_ttHMVA_electron/histo_WH_hww_2l_UL";
  }
  else if (channel == "muon"){
    h_sig_name_v7        = "2muons_SS_10GeV_signal/min_legacy_ttHMVA_muon/histo_WH_hww_2l_legacy";
    h_sig_name_SS_v7     = "2muons_SS_10GeV_signal/min_legacy_ttHMVA_muon/histo_WH_hww_legacy";
    h_sig_name_v9        = "2muons_SS_10GeV_signal/min_UL_ttHMVA_muon/histo_WH_hww_2l_UL";
    h_sig_name_Legacy_v9 = "2muons_SS_10GeV_signal/min_legacy_ttHMVA_muon/histo_WH_hww_2l_UL";
  }

  TH1F* h_sig_v7        = (TH1F*) f_in_v7 -> Get(h_sig_name_v7);
  TH1F* h_sig_SS_v7     = (TH1F*) f_in_v7 -> Get(h_sig_name_SS_v7);
  TH1F* h_sig_v9        = (TH1F*) f_in_v9 -> Get(h_sig_name_v9);
  TH1F* h_sig_Legacy_v9 = (TH1F*) f_in_v9 -> Get(h_sig_name_Legacy_v9);


  // Check: print histograms integrals
  cout << "Legacy background integral: " << h_bkg_v7   ->Integral() << endl;
  cout << "Legacy signal integral: "     << h_sig_v7   ->Integral() << endl;
  cout << "Legacy signal SS integral: "  << h_sig_SS_v7->Integral() << endl;

  cout << "UL background integral: "              << h_bkg_v9       ->Integral() << endl;
  cout << "UL signal integral: "                  << h_sig_v9       ->Integral() << endl;
  cout << "UL signal integral using Legacy MVA: " << h_sig_Legacy_v9->Integral() << endl;


  // Get legacy MVA fake rate and the corresponding UL working point, fake rate, and signal efficiency
  float legacyWP = 0;
  if      (channel == "electron") legacyWP = 0.7;
  else if (channel == "muon")     legacyWP = 0.8;
  else{
    cout << "I don't know this channel" << endl;
    return;
  }

  float legacy_fake_rate    = get_fake_rate(h_bkg_v7,    legacyWP);
  float legacy_sig_eff      = get_fake_rate(h_sig_v7,    legacyWP);
  float legacy_sig_SS_eff   = get_fake_rate(h_sig_SS_v7, legacyWP);

  float UL_WP             = get_WP(h_bkg_v9,    legacy_fake_rate);
  float UL_fake_rate      = get_fake_rate(h_bkg_v9,        UL_WP); 
  float UL_sig_eff        = get_fake_rate(h_sig_v9,        UL_WP);

  // Efficiency/WP on UL sample using Legacy MVA discriminant
  float UL_Legacy_WP        = get_WP(h_bkg_Legacy_v9,    legacy_fake_rate);
  float UL_fake_rate_Legacy = get_fake_rate(h_bkg_Legacy_v9, UL_Legacy_WP); 
  float UL_sig_Legacy_eff   = get_fake_rate(h_sig_Legacy_v9, UL_Legacy_WP);


  // Final printout (before plotting)
  cout << "With legacy WP " << legacyWP << ", we get a fake rate of " << legacy_fake_rate << " and a signal efficiency of " << legacy_sig_eff << endl;
  cout << "With legacy WP " << legacyWP << ", we get a fake rate of " << legacy_fake_rate << " and a signal efficiency of " << legacy_sig_SS_eff << " if we consieder the inclusive signal sample" << endl;
  cout << "The corresponding WP with UL MVA in UL sample is: "     << UL_WP << ", giving a fake rate of " << UL_fake_rate << " and a signal efficiency of " << UL_sig_eff << endl;
  cout << "The corresponding WP with Legacy MVA in UL sample is: " << UL_Legacy_WP << ", giving a fake rate of " << UL_fake_rate_Legacy << " and a signal efficiency of " << UL_sig_Legacy_eff << endl;


  // Now the plotting section

  // ROC Curves
  TGraph ROC_legacy    = ROC_curve(h_sig_v7,        h_bkg_v7,        "legacy");
  // TGraph ROC_legacy_SS = ROC_curve(h_sig_SS_v7,     h_bkg_v7,        "legacy - 2lSS sample");
  TGraph ROC_UL        = ROC_curve(h_sig_v9,        h_bkg_v9,        "UL");
  TGraph ROC_UL_Legacy = ROC_curve(h_sig_Legacy_v9, h_bkg_Legacy_v9, "UL - legacy discriminant");

  // Cosmetics                                                                                                                                                                                                                     
  ROC_legacy.SetLineColor(kBlack);
  // ROC_legacy_SS.SetLineColor(kRed+1);
  ROC_UL.SetLineColor(kGreen+1);
  ROC_UL_Legacy.SetLineColor(kBlue+1);

  ROC_legacy.SetLineWidth(2);
  // ROC_legacy_SS.SetLineWidth(2);
  ROC_UL.SetLineWidth(2);
  ROC_UL_Legacy.SetLineWidth(2);

  // Working Points
  TGraph gr_ROC_legacy_WP;
  gr_ROC_legacy_WP.SetPoint(0, legacy_fake_rate, legacy_sig_eff);
  gr_ROC_legacy_WP.SetMarkerSize(2);
  gr_ROC_legacy_WP.SetMarkerStyle(20);
  gr_ROC_legacy_WP.SetMarkerColor(kBlack);
  // TGraph gr_ROC_UL_legacy_SS_WP;
  // gr_ROC_UL_legacy_WP.SetPoint(0, UL_fake_rate, UL_sig_eff);
  // gr_ROC_UL_legacy_WP.SetMarkerSize(2);
  // gr_ROC_UL_legacy_WP.SetMarkerStyle(20);
  // gr_ROC_UL_legacy_WP.SetMarkerColor(kRed+1);
  TGraph gr_ROC_UL_WP;
  gr_ROC_UL_WP.SetPoint(0, UL_fake_rate, UL_sig_eff);
  gr_ROC_UL_WP.SetMarkerSize(2);
  gr_ROC_UL_WP.SetMarkerStyle(20);
  gr_ROC_UL_WP.SetMarkerColor(kGreen+1);
  TGraph gr_ROC_UL_Legacy_WP;
  gr_ROC_UL_Legacy_WP.SetPoint(0, UL_fake_rate_Legacy, UL_sig_Legacy_eff);
  gr_ROC_UL_Legacy_WP.SetMarkerSize(2);
  gr_ROC_UL_Legacy_WP.SetMarkerStyle(20);
  gr_ROC_UL_Legacy_WP.SetMarkerColor(kBlue+1);

  // Legend
  TString legacy_leg    = "WP = " + to_string_with_precision(legacyWP, 3)     + " - FR = " + to_string_with_precision(legacy_fake_rate, 6)    + ", sig. eff = " + to_string_with_precision(legacy_sig_eff, 3);
  TString UL_leg        = "WP = " + to_string_with_precision(UL_WP, 3)        + " - FR = " + to_string_with_precision(UL_fake_rate, 6)        + ", sig. eff = " + to_string_with_precision(UL_sig_eff, 3);
  TString UL_Legacy_leg = "WP = " + to_string_with_precision(UL_Legacy_WP, 3) + " - FR = " + to_string_with_precision(UL_fake_rate_Legacy, 6) + ", sig. eff = " + to_string_with_precision(UL_sig_Legacy_eff, 3);

  // Muon legend
  TLegend* leg1 = new TLegend(0.49, 0.15, 0.89, 0.45);
  leg1->SetLineColor(0);
  leg1->AddEntry(&ROC_legacy,   "Legacy mvaTTH applied on Legacy samples",   "l");
  leg1->AddEntry((TObject*)0,   legacy_leg, "");
  leg1->AddEntry(&ROC_UL,       "UL discriminant applied on UL samples", "l");
  leg1->AddEntry((TObject*)0,   UL_leg, "");
  leg1->AddEntry(&ROC_UL_Legacy,"Legacy mvaTTH applied on UL samples", "l");
  leg1->AddEntry((TObject*)0,   UL_Legacy_leg, "");

  // Electron legend
  TLegend* leg2 = new TLegend(0.15, 0.58, 0.55, 0.88);
  leg2->SetLineColor(0);
  leg2->AddEntry(&ROC_legacy,   "Legacy mvaTTH applied on Legacy samples",   "l");
  leg2->AddEntry((TObject*)0,   legacy_leg, "");
  leg2->AddEntry(&ROC_UL,       "UL discriminant applied on UL samples", "l");
  leg2->AddEntry((TObject*)0,   UL_leg, "");
  leg2->AddEntry(&ROC_UL_Legacy,"Legacy mvaTTH applied on UL samples", "l");
  leg2->AddEntry((TObject*)0,   UL_Legacy_leg, "");

  // Actual Plotting on Canvas
  TCanvas* c1 = new TCanvas("c1", "c1", 600, 600);
  c1 -> cd();
  TPad* pad1 = new TPad("", "", 0.0, 0.0, 1.0, 1.0);
  pad1 -> Draw();
  pad1 -> SetBottomMargin(0.12);
  pad1 -> SetLeftMargin(0.1);
  pad1 -> cd();
  // Set x-axis range on TGraph
  TAxis *axis = ROC_legacy.GetXaxis();
  axis->SetLimits(0.001, 1.0);
  ROC_legacy.Draw("AL");

  // Title
  TString ROC_title = "ROC Curve for " + channel + "MVA";
  ROC_legacy.SetTitle(ROC_title);
  pad1 -> SetLogx();
  pad1 -> Update();

  // Axes
  ROC_legacy.GetXaxis()->SetTitleOffset(1.5);
  ROC_legacy.GetXaxis()->SetTitle("Background Efficiency");
  ROC_legacy.GetYaxis()->SetTitle("Signal Efficiency");
  ROC_UL.Draw("L,same");
  ROC_UL_Legacy.Draw("L,same");
  gr_ROC_legacy_WP.Draw("P,same");
  gr_ROC_UL_WP.Draw("P,same");
  gr_ROC_UL_Legacy_WP.Draw("P,same");
  if (channel == "muon") leg1->Draw();
  if (channel == "electron") leg2->Draw();

  TString canvas_name;

  if (channel == "electron"){
    if (era == "2016_preVFP")
      canvas_name = "ROC_el_2016_preVFP";
    else if (era == "2016")
      canvas_name = "ROC_el_2016";
    else if (era == "2017")
      canvas_name = "ROC_el_2017";
    else if (era == "2018")
    canvas_name = "ROC_el_2018";
  }
  else if (channel == "muon"){
    if (era == "2016_preVFP")
      canvas_name = "ROC_mu_2016_preVFP";
    else if (era == "2016")
      canvas_name = "ROC_mu_2016";
    else if (era == "2017")
      canvas_name = "ROC_mu_2017";
    else if (era == "2018")
      canvas_name = "ROC_mu_2018";
  }
  else{
    cout << "I do not know this channel" << endl;
    return;
  }

  c1 -> Print("SameSign_" + canvas_name + ".png");
  c1 -> Print("SameSign_" + canvas_name + ".pdf");


}
