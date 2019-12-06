//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//  root -l -b -q mjj.C\(0\)
//  root -l -b -q mjj.C\(1\)
//
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void ProduceHistograms();

void DrawHistograms   ();

void DrawLatex        (Font_t      tfont,
		       Float_t     x,
		       Float_t     y,
		       Float_t     tsize,
		       Short_t     align,
		       const char* text,
		       Bool_t      setndc = true);

void MoveOverflows    (TH1*        hist,
		       Float_t     xmin,
		       Float_t     xmax);


Float_t min_mjj   = 0;
Float_t max_mjj   = 200;
Float_t bin_width = 5;
Int_t   nbin      = (max_mjj - min_mjj) / bin_width;


//------------------------------------------------------------------------------
// main
//------------------------------------------------------------------------------
void mjj(Bool_t draw = 0) 
{
  printf("\n");
  printf("   min_mjj = %3.0f GeV\n", min_mjj);
  printf("   max_mjj = %3.0f GeV\n", max_mjj);
  printf(" bin_width = %3.0f GeV\n", bin_width);
  printf("      nbin = %3d\n",   nbin);
  printf("\n");

  gInterpreter->ExecuteMacro("PaperStyle.C");

  TH1::SetDefaultSumw2();

  draw ? DrawHistograms() : ProduceHistograms();
}


//------------------------------------------------------------------------------
// ProduceHistograms
//------------------------------------------------------------------------------
void ProduceHistograms()
{
  TString workdir = "/afs/cern.ch/user/l/lviliani/public/Fall17/wwSel/";

  TChain* vh  = new TChain("Events", "Events");
  TChain* ggh = new TChain("Events", "Events");
  TChain* vbf = new TChain("Events", "Events");

  vh ->Add(Form("%s/nanoLatino_HZJ_HToWW_M125__part*.root",                workdir.Data()));
  vh ->Add(Form("%s/nanoLatino_ggZH_HToWW_M125__part*.root",               workdir.Data()));
  vh ->Add(Form("%s/nanoLatino_HWplusJ_HToWW_M125__part*.root",            workdir.Data()));
  vh ->Add(Form("%s/nanoLatino_HWminusJ_HToWW_M125__part*.root",           workdir.Data()));
  ggh->Add(Form("%s/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part*.root", workdir.Data()));
  vbf->Add(Form("%s/nanoLatino_VBFHToWWTo2L2NuPowheg_M125__part*.root",    workdir.Data()));

  TH1F* mjj_vh  = new TH1F("mjj_vh",  "", nbin, min_mjj, max_mjj);
  TH1F* mjj_ggh = new TH1F("mjj_ggh", "", nbin, min_mjj, max_mjj);
  TH1F* mjj_vbf = new TH1F("mjj_vbf", "", nbin, min_mjj, max_mjj);

  TCanvas* c1 = new TCanvas("c1", "c1");

  vh ->Draw("mjj>>mjj_vh",  "mjj > 0");
  ggh->Draw("mjj>>mjj_ggh", "mjj > 0");
  vbf->Draw("mjj>>mjj_vbf", "mjj > 0");

  TFile* output = new TFile("mjj.root", "recreate");

  mjj_vh ->Write();
  mjj_ggh->Write();
  mjj_vbf->Write();
    
  output->Close();
}


//----------------------------------------------------------------------------
// DrawHistograms
//----------------------------------------------------------------------------
void DrawHistograms()
{
  TFile* input = new TFile("mjj.root", "read");
 
  TH1F* mjj_vh  = (TH1F*)input->Get("mjj_vh");
  TH1F* mjj_ggh = (TH1F*)input->Get("mjj_ggh");
  TH1F* mjj_vbf = (TH1F*)input->Get("mjj_vbf");

  TCanvas* c1 = new TCanvas("c1", "c1");

  c1->SetLogy();


  // Histogram settings
  //----------------------------------------------------------------------------
  MoveOverflows(mjj_vh,  min_mjj, max_mjj);
  MoveOverflows(mjj_ggh, min_mjj, max_mjj);
  MoveOverflows(mjj_vbf, min_mjj, max_mjj);

  mjj_vh ->Scale(1. / mjj_vh ->Integral());
  mjj_ggh->Scale(1. / mjj_ggh->Integral());
  mjj_vbf->Scale(1. / mjj_vbf->Integral());

  mjj_vh->SetLineColor(kRed+1);
  mjj_vh->SetLineWidth(2);

  mjj_ggh->SetLineColor(kBlack);
  mjj_ggh->SetLineWidth(2);

  mjj_vbf->SetLineColor(kBlue);
  mjj_vbf->SetLineWidth(2);

  mjj_vbf->Draw("hist");
  mjj_ggh->Draw("hist,same");
  mjj_vh ->Draw("hist,same");


  // Axis settings
  //----------------------------------------------------------------------------
  mjj_vbf->SetMinimum(1e-3);

  TString ytitle = Form("entries / %.0f GeV", mjj_vbf->GetBinWidth(0));

  mjj_vbf->GetXaxis()->SetTitleOffset(1.6);
  mjj_vbf->GetYaxis()->SetTitleOffset(1.9);

  mjj_vbf->GetXaxis()->SetTitle("m_{jj} [GeV]");
  mjj_vbf->GetYaxis()->SetTitle(ytitle);


  // Legend
  //----------------------------------------------------------------------------
  TLegend* leg = new TLegend(0.77, 0.72, 0.92, 0.87);

  leg->SetBorderSize(0);
  leg->SetTextFont(42);
  leg->SetTextSize(0.04);

  leg->AddEntry(mjj_vh,  " VH",  "l");
  leg->AddEntry(mjj_ggh, " ggH", "l");
  leg->AddEntry(mjj_vbf, " VBF", "l");

  leg->Draw("same");

  DrawLatex(61, 0.190, 0.94, 0.050, 11, "CMS");
  DrawLatex(52, 0.305, 0.94, 0.030, 11, "Simulation");
  
  
  // Save the money
  //----------------------------------------------------------------------------
  gSystem->mkdir("png", kTRUE);

  c1->GetFrame()->DrawClone();

  c1->SaveAs("png/vh2j_mjj.png");
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


//------------------------------------------------------------------------------
// MoveOverflows
//
// For all histogram types: nbins, xlow, xup
//
//   bin = 0;       underflow bin
//   bin = 1;       first bin with low-edge xlow INCLUDED
//   bin = nbins;   last bin with upper-edge xup EXCLUDED
//   bin = nbins+1; overflow bin
//
//------------------------------------------------------------------------------
void MoveOverflows(TH1*    hist,
		   Float_t xmin,
		   Float_t xmax)
{
  int nentries = hist->GetEntries();
  int nbins    = hist->GetNbinsX();
  
  TAxis* xaxis = (TAxis*)hist->GetXaxis();


  // Underflow
  //----------------------------------------------------------------------------
  if (xmin != -999)
    {
      Int_t   firstBin = -1;
      Float_t firstVal = 0;
      Float_t firstErr = 0;
      
      for (Int_t i=0; i<=nbins+1; i++)
	{
	  if (xaxis->GetBinLowEdge(i) < xmin)
	    {
	      firstVal += hist->GetBinContent(i);
	      firstErr += (hist->GetBinError(i)*hist->GetBinError(i));
	      hist->SetBinContent(i, 0);
	      hist->SetBinError  (i, 0);
	    }
	  else if (firstBin == -1)
	    {
	      firstVal += hist->GetBinContent(i);
	      firstErr += (hist->GetBinError(i)*hist->GetBinError(i));
	      firstBin = i;
	    }
	}

      firstErr = sqrt(firstErr);
  
      hist->SetBinContent(firstBin, firstVal);
      hist->SetBinError  (firstBin, firstErr);
    }


  // Overflow
  //----------------------------------------------------------------------------
  if (xmax != -999)
    {
      Int_t   lastBin = -1;
      Float_t lastVal = 0;
      Float_t lastErr = 0;
      
      for (Int_t i=nbins+1; i>=0; i--)
	{
	  Float_t lowEdge = xaxis->GetBinLowEdge(i);
      
	  if (lowEdge >= xmax)
	    {
	      lastVal += hist->GetBinContent(i);
	      lastErr += (hist->GetBinError(i)*hist->GetBinError(i));
	      hist->SetBinContent(i, 0);
	      hist->SetBinError  (i, 0);
	    }
	  else if (lastBin == -1)
	    {
	      lastVal += hist->GetBinContent(i);
	      lastErr += (hist->GetBinError(i)*hist->GetBinError(i));
	      lastBin = i;
	    }
	}

      lastErr = sqrt(lastErr);
  
      hist->SetBinContent(lastBin, lastVal);
      hist->SetBinError  (lastBin, lastErr);
    }

  hist->SetEntries(nentries);
}
