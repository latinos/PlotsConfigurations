using namespace std;

void do_macroPlot(TString fileName,
				  TString cut,
				  TString variable
				  ){

  cout << "Cut =      " << cut      << endl;
  cout << "Variable = " << variable << endl;

  TFile* f = new TFile(fileName);
  
  // UL
  TString histo_name_UL = cut + "/" + variable + "/histo_DY_UL";
  TH1F* histo_UL = (TH1F*) f -> Get(histo_name_UL); 

  TString histo_name_UL_up = cut + "/" + variable + "/histo_DY_UL_CMS_jes_UL_2018Up";
  TH1F* histo_UL_up = (TH1F*) f -> Get(histo_name_UL_up); 

  // pre-UL
  TString histo_name_preUL = cut + "/" + variable + "/histo_DY_preUL";
  TH1F* histo_preUL = (TH1F*) f -> Get(histo_name_preUL); 

  TString histo_name_preUL_up = cut + "/" + variable + "/histo_DY_preUL_CMS_jes_preUL_2018Up";
  TH1F* histo_preUL_up = (TH1F*) f -> Get(histo_name_preUL_up); 

  // Ratios
  TGraphAsymmErrors* gr_UL = new TGraphAsymmErrors();    // UL/preUL    --> Error is UL_up/preUL
  TGraphAsymmErrors* gr_preUL = new TGraphAsymmErrors(); // preUL/preUL --> Error is preUL_up/preUL
  int nbins = histo_UL->GetNbinsX();
  cout << "n bins = " << nbins << endl;

  for (int i = 1; i < nbins+1; ++i){
	float bin_center = histo_UL->GetXaxis()->GetBinCenter(i);
	float UL_o_preUL = 0.;
	float ULup_o_preUL = 0.;
	float preULup_o_preUL = 0.;
	if (histo_preUL->GetBinContent(i) != 0){
	  UL_o_preUL      = histo_UL->GetBinContent(i)/histo_preUL->GetBinContent(i);
	  ULup_o_preUL    = histo_UL_up->GetBinContent(i)/histo_preUL->GetBinContent(i);
	  preULup_o_preUL = histo_preUL_up->GetBinContent(i)/histo_preUL->GetBinContent(i);
	  
	  float bin_width = histo_UL->GetBinWidth(i);

	  gr_UL    -> SetPoint(i, bin_center, UL_o_preUL);
	  gr_UL    -> SetPointError(i, bin_width/2, bin_width/2, abs(ULup_o_preUL - UL_o_preUL), abs(ULup_o_preUL - UL_o_preUL));
	  gr_preUL -> SetPoint(i, bin_center, 1.0);
	  gr_preUL -> SetPointError(i, bin_width/2, bin_width/2, abs(preULup_o_preUL - 1), abs(preULup_o_preUL - 1));
	}
	else{
	  float bin_width = histo_UL->GetBinWidth(i);

	  gr_UL    -> SetPoint(i, bin_center, 0.0);
	  gr_UL    -> SetPointError(i, bin_width/2, bin_width/2, 0.0, 0.0);
	  gr_preUL -> SetPoint(i, bin_center, 0.0);
	  gr_preUL -> SetPointError(i, bin_width/2, bin_width/2, 0.0, 0.0);
	}
  }

  // Canvas and cosmetics
  TCanvas* c1 = new TCanvas("c1", "c1", 800, 800);
  c1 -> cd();

  TPad* pad1 = new TPad("pad1", "pad1", 0.0, 0.3, 1.0, 1.0);
  pad1 -> Draw();
  pad1 -> cd();

  histo_UL -> SetLineColor(kGreen+1);
  histo_UL -> SetLineWidth(2);

  histo_UL -> GetXaxis() -> SetTitle(variable);

  histo_preUL -> SetLineColor(kRed+1);
  histo_preUL -> SetLineWidth(2);

  histo_UL_up -> SetLineColor(kGreen+1);
  histo_UL_up -> SetLineWidth(2);
  histo_UL_up -> SetLineStyle(2);
 
  histo_preUL_up -> SetLineColor(kRed+1);
  histo_preUL_up -> SetLineWidth(2);
  histo_preUL_up -> SetLineStyle(2);
 
  // Legend
  TLegend* leg = new TLegend(0.65,0.65, 0.89,0.85);
  leg -> SetLineColor(0);
  leg -> AddEntry(histo_UL,       "DY UL",            "l");
  leg -> AddEntry(histo_UL_up,    "DY UL JES Up",     "l");
  leg -> AddEntry(histo_preUL,    "DY Legacy",        "l");
  leg -> AddEntry(histo_preUL_up, "DY Legacy JES Up", "l");

  // Draw
  histo_UL    -> Draw("pl");
  histo_UL_up -> Draw("pl,same");

  histo_preUL    -> Draw("p,same");
  histo_preUL_up -> Draw("p,same");

  leg -> Draw("same");

  c1->cd();

  TPad* pad2 = new TPad("pad2", "pad2", 0.0, 0.0, 1.0, 0.3);
  pad2 -> Draw();
  pad2 -> cd();

  gr_UL->GetXaxis()->SetRangeUser(histo_UL->GetXaxis()->GetBinLowEdge(1), histo_UL->GetXaxis()->GetBinUpEdge(nbins)); 

  // gr_UL    -> SetMarkerStyle(20);
  // gr_UL    -> SetMarkerColor(kGreen+1);
  gr_UL    -> SetLineColor(kGreen+1);
  gr_UL    -> SetMarkerSize(2);
  gr_UL    -> SetLineWidth(2);
  gr_UL    -> SetFillStyle(3002);
  gr_UL    -> SetFillColor(kGreen+1);

  // gr_preUL -> SetMarkerStyle(22);
  // gr_preUL -> SetMarkerColor(kRed+1);
  gr_preUL -> SetLineColor(kRed+1);
  gr_preUL -> SetMarkerSize(2);
  gr_preUL -> SetLineWidth(2);
  gr_preUL -> SetFillStyle(3002);
  gr_preUL -> SetFillColor(kRed+1);

  gr_UL    -> GetYaxis() -> SetRangeUser(0.5, 1.5);
  gr_UL    -> GetYaxis() -> SetLabelSize(0.08);
  gr_UL    -> GetXaxis() -> SetLabelSize(0.08);

  TLegend* leg2 = new TLegend(0.2,0.6, 0.6,0.8);
  leg2 -> SetLineColor(0);
  leg2 -> AddEntry(gr_UL,    "UL over Legacy (UL up over legacy used as error bar)", "l");
  leg2 -> AddEntry(gr_preUL, "Legacy uncertainty",                                   "l");

  gr_UL    -> Draw("ape");
  gr_preUL -> Draw("pe,same");

  leg2 -> Draw("same");  

  TString output_name = "plots_JES/" + cut + "_" + variable;
  c1 -> Print(output_name + ".png","png");
  // c1 -> Print(output_name + ".pdf","pdf");

}


void macroPlot(){

  int ncuts = 2;
  TString cuts[2] = {
	"Zee_incl", 
	"Zmm_incl"
  };

  int nvar = 22;
  TString variables[22] = {
	"mll",
	"ptll",
	"mll",
	"ptll",  
	"ptll_more",
	"pt1", 
	"pt2",
	"eta1",
	"eta2",
	"phi1",
	"phi2",
	"puppimet",
	"pfmet",
	"njet",
	"jetpt1",
	"jetpt2",
	"jetpt1_more",
	"jetpt2_more",
	"jeteta1",
	"jeteta2",
	"trkMet", 
	"mpmet"
  };

  gStyle -> SetOptStat(0);

  for (int i = 0; i < ncuts; ++i){
	for (int j = 0; j < nvar; ++j){
	  do_macroPlot("rootFile/plots_JES_UL_vs_preUL.root", cuts[i], variables[j]);
	}
  }
}
