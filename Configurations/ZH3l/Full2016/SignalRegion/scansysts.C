{

  TFile *f0 = TFile::Open("rootFiles_ZH3lSR_noCR/plots_ZH3lSR_noCR.root");
  TString processes[10] = {"ZH_hww", "ggZH_hww", "WH_htt", "WH_hww", "WW", "WZ", "ZZ", "ttZ", "Vg", "VVV"};
  TString cut = "zh3l_dphi_cut";
  TString systematic = "scale_e";

  for (int i = 0; i < 10; i++) {
    TH1F* h_nominal = (TH1F*) f0->Get(cut+"/events/histo_"+processes[i]);
    TH1F* h_up = (TH1F*) f0->Get(cut+"/events/histo_"+processes[i]+"_"+systematic+"Up");
    TH1F* h_down = (TH1F*) f0->Get(cut+"/events/histo_"+processes[i]+"_"+systematic+"Down");

    printf("%8s = %8.2f +/- %.2f (mc stats) -%.2f +%.2f (%s)\n", processes[i].Data(),
       	h_nominal->GetBinContent(1),
       	h_nominal->GetBinError(1),
       	h_down ? h_nominal->GetBinContent(1) - h_down->GetBinContent(1) : 0.0,
       	h_up ? h_up->GetBinContent(1) - h_nominal->GetBinContent(1) : 0.0,
	systematic.Data()
	);


  }
}

