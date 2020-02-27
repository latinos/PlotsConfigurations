{
  TFile *f0 = TFile::Open("rootFiles_ZH3lSR/plots_ZH3lSR.root");

  // Fragile, because it must match the name and ordering in cuts.py
  // TString cutslist[6] = {"preselection", "zmass_cut", "2jet_cut", "bveto", "z4lveto", "dphi_cut"};
  // TString cutslist[6] = {"preselection", "zmass_cut", "1jet_cut", "bveto_1j", "z4lveto_1j", "dphi_cut_1j"};
  TString cutslist[4] = {"dphi_cut_1j_Wm", "dphi_cut_1j_Wp", "zh3l_dphi_cut_Wm", "zh3l_dphi_cut_Wp"};

  float  n 	= ((TH1F*) f0->Get(cutslist[0]+"/events/histo_ZH_hww"))->Integral();

  float n_ZH = 0.0;
  float n_ggZH = 0.0;
  float n_ttZ = 0.0;
  float n_Vg = 0.0;
  float n_VVV = 0.0;
  float n_WH_htt = 0.0;
  float n_WW = 0.0;
  float n_WH_hww = 0.0;
  float n_ZZ = 0.0;
  float n_Fake = 0.0;
  float n_DATA = 0.0;
  float n_WZ = 0.0;
  float n_ZH_hww = 0.0;

  float n_Higgs = 0.0;
  float n_BG = 0.0;

  // cout << "\t\t ,         WZ,  ";
  // cout << "    ZZ, ";
  // cout << "    WW, ";
  // cout << "    Vg, ";
  // cout << "   VVV, ";
  // cout << "  Fake, ";
  // cout << "   ttZ, ";
  // cout << "    BG, ";
  // cout << "    ZH, ";
  // cout << "  ggZH, ";
  // cout << " Higgs, ";
  // cout << "   S/B, ";
  // cout << "   S/sqrt(B)" << endl;

  cout << "\t\t           WZ  ";
  cout << "    ZZ  ";
  cout << "    WW  ";
  cout << "    Vg  ";
  cout << "   VVV  ";
  cout << "  Fake  ";
  cout << "   ttZ  ";
  cout << "    BG  ";
  cout << "    ZH  ";
  cout << "  ggZH  ";
  cout << " Higgs  ";
  cout << "   S/B  ";
  cout << "   S/sqrt(B)" << endl;

  for (int i = 0; i < 4; i++) {
    n_ZH 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ZH_hww"))->Integral();
    n_ggZH 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ggZH_hww"))->Integral();
    n_ttZ 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ttZ"))->Integral();
    n_Vg 	= 1.34*((TH1F*) f0->Get(cutslist[i]+"/events/histo_Vg"))->Integral();
    // n_Vg 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Vg"))->Integral();
    n_VVV 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_VVV"))->Integral();
    n_WH_htt 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WH_htt"))->Integral();
    n_WW 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WW"))->Integral();
    n_WH_hww 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WH_hww"))->Integral();
    n_ZZ 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ZZ"))->Integral();
    n_Fake 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Fake"))->Integral();
    n_DATA 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_DATA"))->Integral();
    n_WZ 	= 1.09*((TH1F*) f0->Get(cutslist[i]+"/events/histo_WZ"))->Integral();
    // n_WZ 	= 1.16*((TH1F*) f0->Get(cutslist[i]+"/events/histo_WZ"))->Integral();
    // n_WZ 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WZ"))->Integral();

    n_Higgs = n_ZH + n_ggZH + n_WH_htt  +  n_WH_hww;
    n_BG = n_ttZ + n_Vg + n_VVV + n_WW + n_ZZ + n_Fake + n_WZ;

    // printf("%20s\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.4f%6.2f\n", cutslist[i].Data(),
    printf("%20s,\t%6.1f,\t%6.1f,\t%6.1f,\t%6.1f,\t%6.1f,\t%6.1f,\t%6.1f,\t%6.1f,\t%6.1f,\t%6.1f,\t%6.1f,\t%6.4f,%6.2f,\n", cutslist[i].Data(),
    n_WZ , 
    n_ZZ , 
    n_WW , 
    n_Vg , 
    n_VVV , 
    n_Fake , 
    n_ttZ , 
    n_BG, 
    n_ZH, 
    n_ggZH, 
    n_Higgs , 
    n_Higgs/n_BG,
    n_Higgs/sqrt(n_BG));

  }

//   TH1F* h_ggZH = (TH1F*) f0->Get("zh3l_13TeV/ptz/histo_ggZH_hww");
//   TH1F* h_WZ =   (TH1F*) f0->Get("zh3l_13TeV/ptz/histo_WZ");
// 
//   cout << "S/WZ = " << (h_ZH->Integral() + h_ggZH->Integral()) / h_WZ->Integral() << endl;
//   cout << "low = " << (h_ZH->Integral(0,10) + h_ggZH->Integral(0,10)) / h_WZ->Integral(0,10) << endl;
//   cout << "high = " << (h_ZH->Integral(10,21) + h_ggZH->Integral(10,21)) / h_WZ->Integral(10,21) << endl;
// 
//   h_ZH->SetLineColor(kViolet+1);
//   h_ggZH->SetLineColor(kRed);
//   h_WZ->SetLineColor(kGreen+2);
// 
//   h_ZH->Scale(1./h_ZH->Integral());
//   h_ggZH->Scale(1./h_ggZH->Integral());
//   h_WZ->Scale(1./h_WZ->Integral());
// 
//   h_ZH->Draw("HIST");
//   h_WZ->Draw("HIST SAME");
//   h_ggZH->Draw("HIST SAME");
}
