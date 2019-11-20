{
  TFile *f0 = TFile::Open("rootFiles_ZH3l_2017_CR_noNF/plots_ZH3l_2017_CR_noNF.root");

  // Fragile, because it must match the name and ordering in cuts.py
  // TString cutslist[12] = {"preselection", "zmass_cut", "1jet_cut", "bveto_1j", "z4lveto_1j", "zh3l_Zg_CR_1j", "zh3l_WZ_CR_1j", "2jet_cut", "bveto", "z4lveto", "zh3l_Zg_CR_2j", "zh3l_WZ_CR_2j"};
  TString cutslist[12] = {"preselection", "zmass_cut", "zh3l_Zg_CR_1j", "zh3l_WZ_CR_1j", "jet_cut_1j", "bveto_1j", "z4lveto_1j", "zh3l_Zg_CR_2j", "zh3l_WZ_CR_2j", "jet_cut_2j", "bveto_2j", "z4lveto_2j"};
  // TString cutslist[6] = {"preselection", "zmass_cut"};
  //
  bool do_ratios = false;
  bool apply_NFs = false;

  float n_ZH = 0.0;
  float n_ggZH = 0.0;
  float n_ttZ = 0.0;
  float n_Zg = 0.0;
  float n_VVV = 0.0;
  float n_WH_htt = 0.0;
  float n_WH_hww = 0.0;
  float n_ZZ = 0.0;
  float n_Fake = 0.0;
  float n_DATA = 0.0;
  float n_WZ = 0.0;
  float n_ZH_hww = 0.0;

  float n_Higgs = 0.0;
  float n_BG = 0.0;
  float n_Pred = 0.0;

  float WZ_1j_NF = 1.0;
  float WZ_2j_NF = 1.0;
  float Zg_1j_NF = 1.0;
  float Zg_2j_NF = 1.0;

  cout << "\t\t ,       WZ,  ";
  cout << "     ZZ, ";
  cout << "     Zg, ";
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

  TString table_format = "%18s,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.4f,%8.1f,%7.f,\n";
  if (do_ratios) table_format = "%18s,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.4f,%8.2f,%7.2f,\n"; 

  for (int i = 0; i < 12; i++) {
    n_ZH 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ZH_hww"))->Integral();
    n_ggZH 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ggZH_hww"))->Integral();
    n_ttZ 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ttZ"))->Integral();
    if (cutslist[i].Contains("1j") && apply_NFs) 
      n_Zg 	= Zg_1j_NF * ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Zg"))->Integral();
    else if (cutslist[i].Contains("2j") && apply_NFs) 
      n_Zg 	= Zg_2j_NF * ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Zg"))->Integral();
    else
      n_Zg 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Zg"))->Integral();

    n_VVV 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_VVV"))->Integral();
    n_WH_hww 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WH_hww"))->Integral();
    n_ZZ 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ZZ"))->Integral();
    n_Fake 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Fake_me"))->Integral();
    n_Fake 	+= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Fake_em"))->Integral();
    n_DATA 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_DATA"))->Integral();
    if (cutslist[i].Contains("1j") && apply_NFs) 
      n_WZ 	= WZ_1j_NF * ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WZ"))->Integral();
    else if (cutslist[i].Contains("2j") && apply_NFs) 
      n_WZ 	= WZ_2j_NF * ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WZ"))->Integral();
    else
      n_WZ 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WZ"))->Integral();

    n_Higgs = n_ZH + n_ggZH + n_WH_htt  +  n_WH_hww;
    n_BG = n_ttZ + n_Zg + n_VVV + n_ZZ + n_Fake + n_WZ;
    n_Pred = n_Higgs + n_BG;

    if (do_ratios) {
      n_ZH 	= n_ZH	   / n_Pred * 100;
      n_ggZH 	= n_ggZH   / n_Pred * 100;
      n_ttZ 	= n_ttZ    / n_Pred * 100;
      n_Zg 	= n_Zg 	   / n_Pred * 100;
      n_VVV 	= n_VVV    / n_Pred * 100;
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
    n_Zg , 
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

    // less terrible code
    if (!do_ratios && cutslist[i].Contains("_Zg_CR_")) {
      float n_notZg = n_BG - n_Zg;
      float NF = (n_DATA - n_notZg) / n_Zg;
      // float dNF = n_DATA/pow(n_Zg,2) + pow((0.3*n_Fake)/n_Zg,2);
      // dNF = sqrt(dNF);
      float dNF = sqrt(n_DATA)/n_Zg;
      cout << endl << cutslist[i].Data() << " Zg NF = " << NF << " +/- " << dNF << " (stat)\n" << endl;

      if (cutslist[i].Contains("1j")) Zg_1j_NF = NF;
      else if (cutslist[i].Contains("2j")) Zg_2j_NF = NF;

    }


    if (!do_ratios && cutslist[i].Contains("_WZ_CR_")) {
      if (cutslist[i].Contains("1j")) 		n_BG = n_BG - n_Zg + n_Zg*Zg_1j_NF;
      else if (cutslist[i].Contains("2j")) 	n_BG = n_BG - n_Zg + n_Zg*Zg_2j_NF;
      float n_notWZ = n_BG - n_WZ;
      float NF = (n_DATA - n_notWZ) / n_WZ;
      // float dNF = n_DATA/pow(n_WZ,2) + pow((0.3*n_Fake)/n_WZ,2);
      // dNF = sqrt(dNF);
      float dNF = sqrt(n_DATA)/n_WZ;
      cout << endl << cutslist[i].Data() << " WZ NF = " << NF << " +/- " << dNF << " (stat)\n" << endl;

      if (cutslist[i].Contains("1j")) WZ_1j_NF = NF;
      else if (cutslist[i].Contains("2j")) WZ_2j_NF = NF;
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
