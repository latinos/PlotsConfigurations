//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//  root -l -b -q mjj.C\(1\)
//  root -l -b -q mjj.C\(2\)
//
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void DrawLatex(Font_t      tfont,
	       Float_t     x,
	       Float_t     y,
	       Float_t     tsize,
	       Short_t     align,
	       const char* text,
	       Bool_t      setndc = true);


void mjj(Int_t step = 1) 
{
  gInterpreter->ExecuteMacro("PaperStyle.C");

  TH1::SetDefaultSumw2();


  //----------------------------------------------------------------------------
  // Produce and save mjj histograms
  //----------------------------------------------------------------------------
  if (step == 1) {

    TString workdir = "/afs/cern.ch/user/l/lviliani/public/Fall17/wwSel/";

    TChain* sig = new TChain("Events", "Events");
    TChain* bkg = new TChain("Events", "Events");

    sig->Add(Form("%s/nanoLatino_HZJ_HToWW_M125__part*.root",      workdir.Data()));
    sig->Add(Form("%s/nanoLatino_ggZH_HToWW_M125__part*.root",     workdir.Data()));
    sig->Add(Form("%s/nanoLatino_HWplusJ_HToWW_M125__part*.root",  workdir.Data()));
    sig->Add(Form("%s/nanoLatino_HWminusJ_HToWW_M125__part*.root", workdir.Data()));
    
    bkg->Add(Form("%s/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part*.root", workdir.Data()));

    TH1F* mjj_sig = new TH1F("mjj_sig", "", 36, 0, 180);
    TH1F* mjj_bkg = new TH1F("mjj_bkg", "", 36, 0, 180);

    TCanvas* c1 = new TCanvas("c1", "c1");

    sig->Draw("mjj>>mjj_sig");
    bkg->Draw("mjj>>mjj_bkg");

    TFile* output = new TFile("mjj.root", "recreate");

    mjj_sig->Write();
    mjj_bkg->Write();
    
    output->Close();
  }


  //----------------------------------------------------------------------------
  // Draw pretty mjj histograms
  //---------------------------------------------------------------------------- 
  else if (step == 2) {

    TFile* input = new TFile("mjj.root", "read");
 
    TH1F* mjj_sig = (TH1F*)input->Get("mjj_sig");
    TH1F* mjj_bkg = (TH1F*)input->Get("mjj_bkg");

    TCanvas* c1 = new TCanvas("c1", "c1");


    // Histogram settings
    //--------------------------------------------------------------------------
    mjj_sig->Scale(1. / mjj_sig->Integral(1,-1));
    mjj_bkg->Scale(1. / mjj_bkg->Integral(1,-1));

    mjj_sig->SetLineColor(kRed+1);
    mjj_sig->SetLineWidth(2);

    mjj_bkg->SetLineColor(kBlack);
    mjj_bkg->SetLineWidth(2);

    mjj_sig->Draw("hist");
    mjj_bkg->Draw("hist,same");
    mjj_sig->Draw("hist,same");


    // Axis settings
    //--------------------------------------------------------------------------
    TString ytitle = Form("entries / %.0f GeV", mjj_sig->GetBinWidth(0));

    mjj_sig->GetXaxis()->SetTitleOffset(1.6);
    mjj_sig->GetYaxis()->SetTitleOffset(2.1);

    mjj_sig->GetXaxis()->SetTitle("m_{jj} [GeV]");
    mjj_sig->GetYaxis()->SetTitle(ytitle);


    // Legend
    //--------------------------------------------------------------------------
    TLegend* leg = new TLegend(0.79, 0.77, 0.94, 0.88);

    leg->SetBorderSize(0);
    leg->SetTextFont(42);
    leg->SetTextSize(0.04);

    leg->AddEntry(mjj_sig, " VH",  "l");
    leg->AddEntry(mjj_bkg, " ggH", "l");

    leg->Draw("same");

    DrawLatex(61, 0.223, 0.843, 0.050, 11, "CMS");
    DrawLatex(52, 0.223, 0.800, 0.035, 11, "Simulation");
    
    // Save the money
    //--------------------------------------------------------------------------
    c1->GetFrame()->DrawClone();

    c1->SaveAs("vh2j_mjj.png");
 }
}


//------------------------------------------------------------------------------
// DrawLatex
//------------------------------------------------------------------------------
void DrawLatex(Font_t      tfont,
	       Float_t     x,
	       Float_t     y,
	       Float_t     tsize,
	       Short_t     align,
	       const char* text,
	       Bool_t      setndc)
{
  TLatex* tl = new TLatex(x, y, text);

  tl->SetNDC      (setndc);
  tl->SetTextAlign( align);
  tl->SetTextFont ( tfont);
  tl->SetTextSize ( tsize);

  tl->Draw("same");
}
