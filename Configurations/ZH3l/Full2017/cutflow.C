{
  // TFile *f0 = TFile::Open("rootFiles_ZH3l_2017_TightEl/plots_ZH3l_2017_TightEl.root");
  TFile *f0 = TFile::Open("rootFiles_ZH3l_2017_v6test/plots_ZH3l_2017_v6test.root ");

  // Fragile, because it must match the name and ordering in cuts.py
  // TString cutslist[12] = {"preselection", "zmass_cut", "zh3l_Zg_CR_1j", "zh3l_WZ_CR_1j", "jet_cut_1j", "bveto_1j", "z4lveto_1j", "zh3l_Zg_CR_2j", "zh3l_WZ_CR_2j", "jet_cut_2j", "bveto_2j", "z4lveto_2j"};
  // int ncut = 12;
  TString cutslist[14] = {"preselection", "zmass_cut", "zh3l_Zg_CR_1j", "zh3l_WZ_CR_1j", "jet_cut_1j", "bveto_1j", "z4lveto_1j", "zh3l_SR_1j", "zh3l_Zg_CR_2j", "zh3l_WZ_CR_2j", "jet_cut_2j", "bveto_2j", "z4lveto_2j", "zh3l_SR_2j"};
  int ncut = 14;

  // Would be good to split out so that NFs are calculated separately and you don't have to
  // print them at an awkward point in the cutflow.

  bool do_ratios = false;
  bool apply_NFs = true;
  bool tex_mode = false;
  bool signal_region = true;

  float n_ZH = 0.0;
  float n_ggZH = 0.0;
  float n_ttV = 0.0;
  float n_Zg = 0.0;
  float n_ZgS = 0.0;
  float n_VVV = 0.0;
  float n_H_htt = 0.0;
  float n_WH_hww = 0.0;
  float n_ZZ = 0.0;
  float n_Fake = 0.0;
  float n_DATA = 0.0;
  float n_WZ = 0.0;
  float n_ZH_hww = 0.0;

  float n_Higgs = 0.0;
  float n_BG = 0.0;
  float n_Pred = 0.0;

  float WZ_1j_NF = 1.0;		float WZ_1j_dNF = 1.0;
  float WZ_2j_NF = 1.0;         float WZ_2j_dNF = 1.0;
  float Zg_1j_NF = 1.0;         float Zg_1j_dNF = 1.0;
  float Zg_2j_NF = 1.0;         float Zg_2j_dNF = 1.0;

  if (tex_mode) {
    cout << "\\hline" << endl;
    cout << "\t\t  &       WZ &  ";
    cout << "     ZZ & ";
    cout << "     Z\\gamma & ";
    cout << "    VVV & ";
    cout << "   Fake & ";
    cout << "    $t\\bar{t}$Z & ";
    cout << "    all BG & ";
    cout << "     ZH & ";
    cout << "   ggZH & ";
    cout << "  Higgs & ";
    cout << " H/pred & ";
    cout << "  Npred & ";
    cout << "   DATA \\\\" << endl;
    cout << "\\hline" << endl;
  } else {
    cout << "\t\t ,       WZ,  ";
    cout << "     ZZ, ";
    cout << "     Zg, ";
    cout << "    VVV, ";
    cout << "   Fake, ";
    cout << "    ttV, ";
    cout << "     BG, ";
    cout << "     ZH, ";
    cout << "   ggZH, ";
    cout << "  Higgs, ";
    cout << " H/pred, ";
    cout << "  Npred, ";
    cout << "   DATA " << endl;
  }

  TString table_format = "%18s,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.4f,%8.1f,%7.f,\n";
  if (do_ratios) table_format = "%18s,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.4f,%8.2f,%7.2f,\n"; 
  if (tex_mode) {
    table_format = "%18s &%8.1f &%8.1f &%8.1f &%8.1f &%8.1f &%8.1f &%8.1f &%8.1f &%8.1f &%8.1f &%8.4f &%8.1f &%7.f \\\\ \n";
    if (do_ratios) table_format = "%18s &%8.2f &%8.2f &%8.2f &%8.2f &%8.2f &%8.2f &%8.2f &%8.2f &%8.2f &%8.2f &%8.4f &%8.2f &%7.2f \\\\\n"; 
  }

  for (int i = 0; i < ncut; i++) {
    n_ZH 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ZH_hww"))->Integral();
    n_ggZH 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ggZH_hww"))->Integral();
    n_ttV 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ttV"))->Integral();
    if (cutslist[i].Contains("1j") && apply_NFs) 
      n_Zg 	= Zg_1j_NF * ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Zg"))->Integral();
    else if (cutslist[i].Contains("2j") && apply_NFs) 
      n_Zg 	= Zg_2j_NF * ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Zg"))->Integral();
    else
      n_Zg 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Zg"))->Integral();
    n_ZgS 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ZgS"))->Integral();

    n_VVV 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_VVV"))->Integral();
    n_WH_hww 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WH_hww"))->Integral();
    n_H_htt 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_H_htt"))->Integral();
    n_ZZ 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ZZ"))->Integral();
    n_Fake 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Fake_m"))->Integral();
    n_Fake 	+= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Fake_e"))->Integral();
    n_DATA 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_DATA"))->Integral();
    if (cutslist[i].Contains("1j") && apply_NFs) 
      n_WZ 	= WZ_1j_NF * ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WZ"))->Integral();
    else if (cutslist[i].Contains("2j") && apply_NFs) 
      n_WZ 	= WZ_2j_NF * ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WZ"))->Integral();
    else
      n_WZ 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WZ"))->Integral();

    n_Higgs = n_ZH + n_ggZH + n_H_htt + n_WH_hww;
    n_BG = n_ttV + n_Zg + n_VVV + n_ZZ + n_Fake + n_WZ;
    n_Pred = n_Higgs + n_BG;

    if (do_ratios) {
      n_ZH 	= n_ZH	   / n_Pred * 100;
      n_ggZH 	= n_ggZH   / n_Pred * 100;
      n_ttV 	= n_ttV    / n_Pred * 100;
      n_Zg 	= n_Zg 	   / n_Pred * 100;
      n_VVV 	= n_VVV    / n_Pred * 100;
      n_Higgs 	= n_Higgs  / n_Pred * 100;
      n_ZZ 	= n_ZZ 	   / n_Pred * 100;
      n_Fake 	= n_Fake   / n_Pred * 100;
      n_DATA 	= n_DATA   / n_Pred;
      n_WZ 	= n_WZ 	   / n_Pred * 100;
      n_BG	= n_BG	   / n_Pred * 100;

    }


    TString cutname(cutslist[i]);
    cutname.ReplaceAll("_"," ");
    if (tex_mode) cutname.ReplaceAll("Zg","$Z\\gamma$");
    if (tex_mode) cutname.ReplaceAll("zh3l ","");

    // try to make reasonable spacing, a moving target
    if (cutslist[i].Contains("_Zg_CR_")) cout << endl;

    // remove data counts if this is a signal region cutflow
    if (signal_region && !cutslist[i].Contains("_CR_")) n_DATA = 0.;

    // failsafe...
    if (cutslist[i].Contains("_SR_")) n_DATA = 0.;

    // print unless this is a signal region cutflow and we're looking at a CR
    if (!signal_region || !cutslist[i].Contains("_CR_")) {
      printf(table_format.Data(), cutname.Data(),
	  n_WZ , 
	  n_ZZ , 
	  n_Zg , 
	  n_VVV , 
	  n_Fake , 
	  n_ttV , 
	  n_BG, 
	  n_ZH, 
	  n_ggZH, 
	  n_Higgs , 
	  n_Higgs/n_BG,
	  n_Pred,
	  n_DATA);
    }

    // less terrible code
    if (!do_ratios && cutslist[i].Contains("_Zg_CR_")) {
      float n_notZg = n_BG - n_Zg;
      float NF = (n_DATA - n_notZg) / n_Zg;
      // float dNF = n_DATA/pow(n_Zg,2) + pow((0.3*n_Fake)/n_Zg,2);
      // dNF = sqrt(dNF);
      float dNF = sqrt(n_DATA)/n_Zg;

      if (cutslist[i].Contains("1j")) {
	Zg_1j_NF = NF;
	Zg_1j_dNF = dNF;
      } else if (cutslist[i].Contains("2j")) {
	Zg_2j_NF = NF;
	Zg_2j_dNF = dNF;
      }
    }

    if (!do_ratios && cutslist[i].Contains("_WZ_CR_")) {
      if (!apply_NFs) {		// we still want to apply them here
	if (cutslist[i].Contains("1j")) 		n_BG = n_BG - n_Zg + n_Zg*Zg_1j_NF;
	else if (cutslist[i].Contains("2j")) 	n_BG = n_BG - n_Zg + n_Zg*Zg_2j_NF;
      }
      float n_notWZ = n_BG - n_WZ;
      float NF = (n_DATA - n_notWZ) / n_WZ;
      // float dNF = n_DATA/pow(n_WZ,2) + pow((0.3*n_Fake)/n_WZ,2);
      // dNF = sqrt(dNF);
      float dNF = sqrt(n_DATA)/n_WZ;

      if (cutslist[i].Contains("1j")) {
	WZ_1j_NF = NF;
	WZ_1j_dNF = dNF;
      } else if (cutslist[i].Contains("2j")) {
	WZ_2j_NF = NF;
	WZ_2j_dNF = dNF;
      }
    }

  }
  if (tex_mode) cout << "\\hline\\hline" << endl;

  if (tex_mode) {
    cout << endl << endl;
    printf("WZ,  1-jet 	 %.2f $\\pm$ %.2f \n", WZ_1j_NF, WZ_1j_dNF);
    printf("WZ,  2-jet 	 %.2f $\\pm$ %.2f \n", WZ_2j_NF, WZ_2j_dNF);
    printf("Zg,  1-jet 	 %.2f $\\pm$ %.2f \n", Zg_1j_NF, Zg_1j_dNF);
    printf("Zg,  2-jet 	 %.2f $\\pm$ %.2f \n", Zg_2j_NF, Zg_2j_dNF);
  } else {
    cout << endl << endl;
    printf("WZ,  1-jet 	 %.2f +/- %.2f \n", WZ_1j_NF, WZ_1j_dNF);
    printf("WZ,  2-jet 	 %.2f +/- %.2f \n", WZ_2j_NF, WZ_2j_dNF);
    printf("Zg,  1-jet 	 %.2f +/- %.2f \n", Zg_1j_NF, Zg_1j_dNF);
    printf("Zg,  2-jet 	 %.2f +/- %.2f \n", Zg_2j_NF, Zg_2j_dNF);
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
