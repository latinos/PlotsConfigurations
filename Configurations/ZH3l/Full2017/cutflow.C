{
  TFile *f0 = TFile::Open("rootFiles_ZH3l_2017_CR_noNF/plots_ZH3l_2017_CR_noNF.root");

  // Fragile, because it must match the name and ordering in cuts.py
  TString cutslist[12] = {"preselection", "zmass_cut", "1jet_cut", "bveto_1j", "z4lveto_1j", "zh3l_WZ_CR_1j", "zh3l_Zg_CR_1j", "2jet_cut", "bveto", "z4lveto", "zh3l_WZ_CR_2j", "zh3l_Zg_CR_2j"};
  // TString cutslist[6] = {"preselection", "zmass_cut"};
  //
  bool do_ratios = false;

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
  float n_Pred = 0.0;

  cout << "\t\t ,       WZ,  ";
  cout << "     ZZ, ";
  cout << "     WW, ";
  cout << "     Vg, ";
  cout << "    VVV, ";
  cout << "   Fake, ";
  cout << "    ttZ, ";
  cout << "     BG, ";
  cout << "     ZH, ";
  cout << "   ggZH, ";
  cout << "  Higgs, ";
  cout << " H/pred, ";
  cout << "  Npred, ";
  cout << "   DATA " << endl;

  TString table_format = "%18s,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.4f,%8.1f,%7.f,\n";
  if (do_ratios) table_format = "%18s,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.4f,%8.2f,%7.2f,\n"; 

  for (int i = 0; i < 12; i++) {
    n_ZH 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ZH_hww"))->Integral();
    n_ggZH 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ggZH_hww"))->Integral();
    n_ttZ 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ttZ"))->Integral();
    if (i < 7) // ugh
      n_Vg 	= 0.44*((TH1F*) f0->Get(cutslist[i]+"/events/histo_Vg"))->Integral();
    else 
      n_Vg 	= 0.92*((TH1F*) f0->Get(cutslist[i]+"/events/histo_Vg"))->Integral();
    // n_Vg 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Vg"))->Integral();
    n_VVV 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_VVV"))->Integral();
    n_WH_htt 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WH_htt"))->Integral();
    n_WW 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WW"))->Integral();
    n_WH_hww 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WH_hww"))->Integral();
    n_ZZ 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ZZ"))->Integral();
    n_Fake 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Fake"))->Integral();
    n_DATA 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_DATA"))->Integral();
    // n_WZ 	= (1/1.16)*((TH1F*) f0->Get(cutslist[i]+"/events/histo_WZ"))->Integral();
    n_WZ 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WZ"))->Integral();
    if (i == 0) cout << "WZ scale factor not applied" << endl;

    n_Higgs = n_ZH + n_ggZH + n_WH_htt  +  n_WH_hww;
    n_BG = n_ttZ + n_Vg + n_VVV + n_WW + n_ZZ + n_Fake + n_WZ;
    n_Pred = n_Higgs + n_BG;

    if (do_ratios) {
      n_ZH 	= n_ZH	   / n_Pred * 100;
      n_ggZH 	= n_ggZH   / n_Pred * 100;
      n_ttZ 	= n_ttZ    / n_Pred * 100;
      n_Vg 	= n_Vg 	   / n_Pred * 100;
      n_VVV 	= n_VVV    / n_Pred * 100;
      n_WW 	= n_WW 	   / n_Pred * 100;
      n_Higgs 	= n_Higgs  / n_Pred * 100;
      n_ZZ 	= n_ZZ 	   / n_Pred * 100;
      n_Fake 	= n_Fake   / n_Pred * 100;
      n_DATA 	= n_DATA   / n_Pred;
      n_WZ 	= n_WZ 	   / n_Pred * 100;
      n_BG	= n_BG	   / n_Pred * 100;

    }


    if (cutslist[i].Contains("jet")) cout << endl;

    // printf("%20s\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.1f\t%6.4f%6.2f\n", cutslist[i].Data(),
    printf(table_format.Data(), cutslist[i].Data(),
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
    n_Pred,
    n_DATA);

    // more terrible code
    if (!do_ratios && cutslist[i].Contains("_WZ_CR_")) {
      float n_notWZ = n_BG - n_WZ;
      float NF = (n_DATA - n_notWZ) / n_WZ;
      float dNF = n_DATA/pow(n_WZ,2) + pow((0.3*n_Fake)/n_WZ,2);
      dNF = sqrt(dNF);
      cout << endl << cutslist[i].Data() << " WZ NF = " << NF << " +/- " << dNF << " (stat+fake)\n" << endl;
    }
    if (!do_ratios && cutslist[i].Contains("_Zg_CR_")) {
      float n_notVg = n_BG - n_Vg;
      float NF = (n_DATA - n_notVg) / n_Vg;
      float dNF = n_DATA/pow(n_Vg,2) + pow((0.3*n_Fake)/n_Vg,2);
      dNF = sqrt(dNF);
      cout << endl << cutslist[i].Data() << " Zg NF = " << NF << " +/- " << dNF << " (stat+fake)\n" << endl;
    }


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
