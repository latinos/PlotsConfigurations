{
//  TFile *f0 = TFile::Open("rootFiles_ZH3l_2016_v7/plots_ZH3l_2016_v7.root");
  TFile *f0 = TFile::Open("/afs/cern.ch/work/s/srudrabh/AZH/Analysis/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/AToZH/Full2016_v7/rootFiles_AZH_2016_v7/plots_AZH_2016_v7.root");
  // Fragile, because it must match the name and ordering in cuts.py
//TString cutslist[14] = {"preselection", "zmass_cut", "jet_cut_2j", "bveto_2j", "z4lveto_2j", "zh3l_Zg_CR_2j", "zh3l_SR_2j", "zh3l_WZ_CR_2j", "jet_cut_1j", "bveto_1j", "z4lveto_1j", "zh3l_Zg_CR_1j", "zh3l_SR_1j", "zh3l_WZ_CR_1j"};
// TString cutslist[7] = {"preselection", "zmass_cut", "1jet_cut", "bveto_1j", "z4lveto_1j", "zh3l_SR_1j", "zh3l_WZ_CR_1j"};
//  TString cutslist[4] = {"preselection", "dphi_cut_1j_Wp", "zh3l_dphi_cut_Wm", "zh3l_dphi_cut_Wp"};
//TString cutslist[6] = {"zh3l_SR_2j", "zh3l_Zg_CR_2j", "zh3l_WZ_CR_2j", "zh3l_SR_1j", "zh3l_Zg_CR_1j", "zh3l_WZ_CR_1j"};
//  float  n 	= ((TH1F*) f0->Get(cutslist[0]+"/events/histo_ZH_hww"))->Integral();
 TString cutslist[4] = {"preselection", "zmass_cut", "jet_cut_4j", "breq"};
//  float n_ZH = 0.0;
//TString cutslist[14] = {"preselection", "zmass_cut", "jet_cut_2j", "MET_cut_2j", "bveto_2j", "z4lveto_2j", "zh3l_SR_2j", "zh3l_WZ_CR_2j", "jet_cut_1j", "bveto_1j", "z4lveto_1j", "zh3l_SR_1j", "zh3l_WZ_CR_1j"};
   bool tex_mode = false;


 /*float n_ggZH_hww_v7 = 0.0;
  float n_ttV_v7 = 0.0;
  float n_Zg_v7 = 0.0;
  float n_ZgS_v7 = 0.0;
  float n_top_v7 = 0.0;
  float n_DY_v7 = 0.0;
  float n_VVV_v7 = 0.0;
  float n_WH_hww_v7 = 0.0;
//  float n_WW = 0.0;
//  float n_WWewk = 0.0;
//  float n_ggWW = 0.0;
//  float n_H_htt = 0.0;
  float n_ZZ_v7 = 0.0;
  float n_Fake_v7 = 0.0;
  float n_DATA_v7 = 0.0;
  float n_WZ_v7 = 0.0;
  float n_ZH_hww_v7 = 0.0;
  float n_ttH_hww_v7 = 0.0;
 // float n_ggH_htt = 0.0;
//  float n_qqH_htt = 0.0;
  float n_ZH_htt_v7 = 0.0;
  float n_WH_htt_v7 = 0.0;
  float n_Higgs_v7 = 0.0;
  float n_BG_v7 = 0.0;
*/

  /*float n_ggZH_hww_v6 = 0.0;
  float n_ttV_v6 = 0.0;
  float n_Zg_v6 = 0.0;
  float n_ZgS_v6 = 0.0;
  float n_top_v6 = 0.0;
  float n_DY_v6 = 0.0;
  float n_VVV_v6 = 0.0;
  float n_WH_hww_v6 = 0.0;
  float n_ZZ_v6 = 0.0;
  float n_Fake_v6 = 0.0;
  float n_DATA_v6 = 0.0;
  float n_WZ_v6 = 0.0;
  float n_ZH_hww_v6 = 0.0;
  float n_ttH_hww_v6 = 0.0;
  float n_ZH_htt_v6 = 0.0;
  float n_WH_htt_v6 = 0.0;
  float n_Higgs_v6 = 0.0;
  float n_BG_v6 = 0.0;*/

  float n_ttV = 0.0;
  float n_VVV = 0.0;
 float n_Fake = 0.0;

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
if (tex_mode) {
  cout << "\\hline" << endl;
  cout << "   VVV  &";
  cout << "  Fake & ";
  cout << "   ttV & ";
//  cout << "  WWewk ";
//  cout << "  ggWW  ";
  cout << "\\hline" << endl;
} else {
    cout << "\t\t cuts,";
    cout << "    VVV, ";
    cout << "   Fake, ";
    cout << "    ttV, ";
}

TString table_format = " %18s,%8.3f,%8.3f,%8.3f,%8.3f\n";

  for (int i = 0; i < 4; i++) {
    n_ttV 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_ttV"))->Integral();
    n_VVV 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_VVV"))->Integral();
   n_Fake 	= ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Fake_e"))->Integral();
   n_Fake      += ((TH1F*) f0->Get(cutslist[i]+"/events/histo_Fake_m"))->Integral(); 
   TString cutname(cutslist[i]);
        cutname.ReplaceAll("_"," ");
   printf(table_format.Data(), cutname.Data(),
    n_VVV ,
    n_Fake , 
    n_ttV ); 
}  
}
