//
// List taken from Full2017/plot.py
//
enum {
  top,
  Fake_me,
  Fake_em,
  VVV,
  Vg,
  Wg,
  H_tt,
  H_hww,
  ZH_hww,
  ggZH_hww,
  WH_hww,
  qqH_hww,
  ggH_hww,
  bbH_hww,
  ttH_hww,
  qqH_htt,
  ggH_htt,
  WW,
  ggWW,
  WWewk,
  DY,
  VZ,
  WZ,
  ZZ,
  VgS_H,
  VgS_L,
  nprocess  // This line should be always last
};

TString hname[nprocess] = {
  "top",       // top
  "Fake_me",   // nonprompt
  "Fake_em",   // nonprompt
  "VVV",       // VVV
  "Vg",        // Vg
  "Wg",        // Vg
  "H_htt",     // Higgs
  "H_hww",     // Higgs
  "ZH_hww",    // Higgs
  "ggZH_hww",  // Higgs
  "WH_hww",    // Higgs
  "qqH_hww",   // Higgs
  "ggH_hww",   // Higgs
  "bbH_hww",   // Higgs
  "ttH_hww",   // Higgs
  "qqH_htt",   // Higgs
  "ggH_htt",   // Higgs
  "WW",        // WW
  "ggWW",      // WW
  "WWewk",     // WW
  "DY",        // DY
  "VZ",        // VZ
  "WZ",        // VZ
  "ZZ",        // VZ
  "VgS_H",     // VgS
  "VgS_L"      // VgS
};

TH1D* histo[nprocess];


void getHistogramContent(TString folder = "Full2016",
			 TString year   = "2016",
			 Int_t   bin    = -1)
{
  printf("\n %s results for mll bin %d\n", folder.Data(), bin);

  Float_t ntop       = 0;
  Float_t nnonprompt = 0;
  Float_t nVVV       = 0;
  Float_t nVg        = 0;
  Float_t nHiggs     = 0;
  Float_t nWW        = 0;
  Float_t nDY        = 0;
  Float_t nVZ        = 0;
  Float_t nVgS       = 0;
  Float_t nAllMC     = 0;

  TFile* _file0 = new TFile("../" + folder + "/rootFile/plots_VH2j_" + year + ".root", "read");


  // Loop
  //----------------------------------------------------------------------------
  for (Int_t i=0; i<nprocess; i++) {

    histo[i] = (TH1D*)_file0->Get("VH_2j_emu/mll/histo_" + hname[i]);

    if (!histo[i]) {printf("\n Skipping %s", hname[i].Data()); continue;}

    Float_t yield = (bin < 1) ? histo[i]->Integral() : histo[i]->GetBinContent(bin);

    if (hname[i].Contains("_htt") || hname[i].Contains("_hww"))
      nHiggs += yield;
    else
      nAllMC += yield;

    if (hname[i].EqualTo("top"))                                                    ntop       += yield;
    if (hname[i].Contains("Fake_"))                                                 nnonprompt += yield;
    if (hname[i].EqualTo("VVV"))                                                    nVVV       += yield;
    if (hname[i].EqualTo("Vg") || hname[i].EqualTo("Wg"))                           nVg        += yield;
    if (hname[i].Contains("WW"))                                                    nWW        += yield;
    if (hname[i].EqualTo("DY"))                                                     nDY        += yield;
    if (hname[i].EqualTo("VZ") || hname[i].EqualTo("WZ") || hname[i].EqualTo("ZZ")) nVZ        += yield;
    if (hname[i].Contains("VgS_"))                                                  nVgS       += yield;
  }


  // Print
  //----------------------------------------------------------------------------
  printf("\n\n");
  printf(" Top    %.1f\n", ntop);
  printf(" Prompt %.1f\n", nnonprompt);
  printf(" VVV    %.1f\n", nVVV);
  printf(" Vg     %.1f\n", nVg);
  printf(" Higgs  %.1f\n", nHiggs);
  printf(" WW     %.1f\n", nWW);
  printf(" DY     %.1f\n", nDY);
  printf(" VZ     %.1f\n", nVZ);
  printf(" VgS    %.1f\n", nVgS);
  printf(" AllMC  %.1f\n", nAllMC);
  printf("\n signal/background = %.1f%%\n\n", 1e2*nHiggs/nAllMC);
}
