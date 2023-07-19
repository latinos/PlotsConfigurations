{
  TFile *f0 = TFile::Open("../2017_v9/rootFiles_AZH_2017_v9_ellipsefit/plots_AZH_2017_v9_ellipsefit.root");

  // Fragile, because it must match the name and ordering in cuts.py
  TString cutslist[7] = {"preselection", "zmass_cut", "MET", "jet_cut_4j", "breq_SR", "bveto_4j", "bveto_1j_SR"};
  int ncut = 7;


  bool do_ratios = false;
  bool apply_NFs = true;
  bool tex_mode = false;
  bool signal_region = false;

  float n_Zg = 0.0;
  float n_ZgS = 0.0;
  float n_WZ = 0.0;
  float n_ttZ = 0.0;
  float n_ttH_hww = 0.0;
  float n_tZq_ll = 0.0;
  float n_ZZ = 0.0;
  float n_VVV = 0.0;
  float n_top = 0.0;
  float n_TTWJets = 0.0;
  float n_Fake = 0.0;
  float n_DATA = 0.0;

  float n_BG = 0.0;

  float WZ_4j_NF = 1.0;		float WZ_4j_dNF = 1.0;

  if (tex_mode) {
    cout << "\\hline" << endl;
    cout << "\t\t  &       Zg &  ";
    cout << "     ZgS & ";
    cout << "     WZ & ";
    cout << "    ttZ & ";
    cout << "   ttH_hww & ";
    cout << "    tZq_ll & ";
    cout << "    ZZ & ";
    cout << "     VVV & ";
    cout << "   top & ";
    cout << "  TTWJets & ";
    cout << "  Fakes  & ";
    cout << " all BG & ";
    cout << "   DATA \\\\" << endl;
    cout << "\\hline" << endl;
  } else {
    cout << "\t\t ,       Zg,  ";
    cout << "     ZgS, ";
    cout << "     WZ, ";
    cout << "    ttZ, ";
    cout << "   ttH_hww, ";
    cout << "    tZq_ll, ";
    cout << "     ZZ, ";
    cout << "     VVV, ";
    cout << "   top, ";
    cout << "  TTWJets, ";
    cout << "  Fakes, ";
    cout << " all BG, ";
    cout << "   DATA " << endl;
  }

  TString table_format = "%18s,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.1f,%8.4f,%8.1f,%7.f,\n";
  if (do_ratios) table_format = "%18s,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.2f,%8.4f,%8.2f,%7.2f,\n"; 
  if (tex_mode) {
    table_format = "%18s &%8.1f &%8.1f &%8.1f &%8.1f &%8.1f &%8.1f &%8.1f &%8.1f &%8.1f &%8.1f &%8.4f &%8.1f &%7.f \\\\ \n";
    if (do_ratios) table_format = "%18s &%8.2f &%8.2f &%8.2f &%8.2f &%8.2f &%8.2f &%8.2f &%8.2f &%8.2f &%8.2f &%8.4f &%8.2f &%7.2f \\\\\n"; 
  }

  for (int i = 0; i < ncut; i++) {
    n_Zg 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Zg"))->Integral();
    n_ZgS 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ZgS"))->Integral();
    n_WZ 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_WZ"))->Integral();
    n_ttZ 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ttZ"))->Integral();
    n_ttH_hww 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ttH_hww"))->Integral();
    n_tZq_ll 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_tZq_ll"))->Integral();
    n_ZZ	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ZZ"))->Integral();
    n_VVV	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_VVV"))->Integral();
    n_top	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_top"))->Integral();
    n_TTWJets	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_TTWJets"))->Integral();
    n_Fake 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Fake"))->Integral();
    n_DATA 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_DATA"))->Integral();

    n_BG = n_Zg + n_ZgS + n_WZ + n_ttZ + n_ttH_hww + n_tZq_ll + n_ZZ + n_VVV + n_top + n_TTWJets + n_Fake;

    if (do_ratios) {
      n_Zg 	= n_Zg	   / n_BG * 100;
      n_ZgS 	= n_ZgS   / n_BG * 100;
      n_WZ 	= n_WZ    / n_BG * 100;
      n_ttZ 	= n_ttZ	   / n_BG * 100;
      n_ttH_hww	= n_ttH_hww    / n_BG * 100;
      n_tZq_ll 	= n_tZq_ll  / n_BG * 100;
      n_ZZ 	= n_ZZ 	   / n_BG * 100;
      n_VVV 	= n_VVV   / n_BG * 100;
      n_top 	= n_top   / n_BG * 100;
      n_TTWJets = n_TTWJets   / n_BG * 100;
      n_Fake	= n_Fake  / n_BG * 100;

    }


    TString cutname(cutslist[i]);
    // failsafe...
    if (cutslist[i].Contains("_SR_")) n_DATA = 0.;

    // print unless this is a signal region cutflow and we're looking at a CR
    if (!signal_region) {
      printf(table_format.Data(), cutname.Data(),
	  n_Zg , 
	  n_ZgS , 
	  n_WZ , 
	  n_ttZ , 
	  n_ttH_hww , 
	  n_tZq_ll , 
	  n_ZZ, 
	  n_VVV, 
	  n_top, 
	  n_TTWJets , 
	  n_Fake,
	  n_BG,
	  n_DATA);
    }

    // less terrible code

    if (!do_ratios && cutslist[i].Contains("bveto_4j")) {
      float n_notWZ = n_BG - n_WZ;
      float NF = (n_DATA - n_notWZ) / n_WZ;
      // float dNF = n_DATA/pow(n_WZ,2) + pow((0.3*n_Fake)/n_WZ,2);
      // dNF = sqrt(dNF);
      float dNF = sqrt(n_DATA)/n_WZ;

	WZ_4j_NF = NF;
	WZ_4j_dNF = dNF;
    }

  }
  if (tex_mode) cout << "\\hline\\hline" << endl;

  if (tex_mode) {
    cout << endl << endl;
    printf("WZ,  4-jet 	 %.2f $\\pm$ %.2f \n", WZ_4j_NF, WZ_4j_dNF);
  } else {
    cout << endl << endl;
    printf("WZ,  4-jet 	 %.2f +/- %.2f \n", WZ_4j_NF, WZ_4j_dNF);
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
