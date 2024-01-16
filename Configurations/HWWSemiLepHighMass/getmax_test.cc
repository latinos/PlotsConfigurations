void getMax(const char *infilename){
TFile *infile=TFile::Open(infilename);
//infile->cd("incl_twojets/tree");
double HvOvjj_Wjet = 0;
//replaced twojets with fat per vedere se ci stanno i boosted dentro oppure nisba
TTree *tree_Wjets= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_Wjets"));
TTree *tree_top= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_top"));
TTree *tree_DY= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_DY"));
TTree *tree_FAKE= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_FAKE"));
//TTree *tree_QCD= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_QCD"));
TTree *tree_VVV= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_VVV"));
TTree *tree_Vg= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_Vg"));
TTree *tree_VgS_H= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_VgS_H"));
TTree *tree_VgS_L= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_VgS_L"));
TTree *tree_VZ= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_VZ"));
TTree *tree_ggH_hww= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_ggH_hww"));
TTree *tree_ggH_htt= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_ggH_htt"));
TTree *tree_qqH_hww= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_qqH_hww"));
TTree *tree_qqH_htt= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_qqH_htt"));
TTree *tree_ZH_htt= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_ZH_htt"));
TTree *tree_ZH_hww= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_ZH_hww"));
TTree *tree_WH_htt= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_WH_htt"));
TTree *tree_WH_hww= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_WH_hww"));
TTree *tree_ggWW= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_ggWW"));
//TTree *tree_WWewk= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_WWewk"));
TTree *tree_WW= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_WW"));
TTree *tree_qqWWqq= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_qqWWqq"));
//TTree *tree_WW2J= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_WW2J"));
TTree *tree_QQH_1000_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_QQH_1000_RelW002"));
TTree *tree_GGH_1000_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_GGH_1000_RelW002"));
TTree *tree_QQH_1500_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_QQH_1500_RelW002"));
TTree *tree_GGH_1500_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_GGH_1500_RelW002"));
TTree *tree_QQH_2000_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_QQH_2000_RelW002"));
TTree *tree_GGH_2000_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_GGH_2000_RelW002"));
TTree *tree_QQH_3000_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_QQH_3000_RelW002"));
TTree *tree_GGH_3000_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_GGH_3000_RelW002"));
TTree *tree_QQH_5000_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_QQH_5000_RelW002"));
TTree *tree_GGH_5000_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_GGH_5000_RelW002"));
TTree *tree_QQH_500_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_QQH_500_RelW002"));
TTree *tree_GGH_500_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_GGH_500_RelW002"));
TTree *tree_QQH_600_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_QQH_600_RelW002"));
TTree *tree_GGH_600_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_GGH_600_RelW002"));
TTree *tree_QQH_800_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_QQH_800_RelW002"));
TTree *tree_GGH_800_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_GGH_800_RelW002"));
double Whadpt = 200 ;
//TTree *tree_fat_Wjets= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_Wjets"));
//TTree *tree_fat_top= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_top"));
//TTree *tree_fat_DY= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_DY"));
//TTree *tree_fat_FAKE= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_FAKE"));
////TTree *tree_fat_QCD= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_QCD"));
//TTree *tree_fat_VVV= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_VVV"));
//TTree *tree_fat_Vg= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_Vg"));
//TTree *tree_fat_VgS_H= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_VgS_H"));
//TTree *tree_fat_VgS_L= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_VgS_L"));
//TTree *tree_fat_VZ= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_VZ"));
//TTree *tree_fat_ggH_hww= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_ggH_hww"));
//TTree *tree_fat_ggH_htt= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_ggH_htt"));
//TTree *tree_fat_qqH_hww= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_qqH_hww"));
//TTree *tree_fat_qqH_htt= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_qqH_htt"));
//TTree *tree_fat_ZH_htt= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_ZH_htt"));
//TTree *tree_fat_ZH_hww= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_ZH_hww"));
//TTree *tree_fat_WH_htt= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_WH_htt"));
//TTree *tree_fat_WH_hww= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_WH_hww"));
//TTree *tree_fat_ggWW= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_ggWW"));
//TTree *tree_fat_WWewk= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_WWewk"));
//TTree *tree_fat_WW= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_WW"));
//TTree *tree_fat_qqWWqq= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_qqWWqq"));
////TTree *tree_fat_WW2J= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_WW2J"));
//TTree *tree_fat_QQH_1000_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_QQH_1000_RelW002"));
//TTree *tree_fat_GGH_1000_RelW002= (TTree*)(infile->Get("incl_ResolvedSR_/tree/tree_GGH_1000_RelW002"));
double Mela_boo = 0.00;
double Mela_res = 0.00;
double BoostedSB_2jetsmass = 10;
double tau21 = 0.65;
double fatdeep = 0.00;
vector <float> nEvents_bkg(25);
vector <float> nEvents_sig(25);
vector <float> nEvents_bkg_fat(25);
vector <float> nEvents_sig_fat(25);
vector <float> nEvents_whad(25);
vector <float> nEvents_hvovjj(25);
vector <float> nEvents_ratio(25);
vector <float> nEvents_significance(25);
vector <float> nEvents_ratio_fat(25);
vector <float> nEvents_bkg_res_on(25);
vector <float> nEvents_sig_res_on(25);

int n= 0;

float tot_ev = 0;
float tot_ev_sig = 0;

float xs_prod_ggh_500 = 1.709 ;
float xs_prod_qqh_500 = 0.4872 ;
float xs_prod_ggh_600 =  1.001;
float xs_prod_qqh_600 = 0.3274 ;
float xs_prod_ggh_800 =  0.4015;
float xs_prod_qqh_800 = 0.1622;
float xs_prod_ggh_1000 = 0.08732;
float xs_prod_qqh_1000 = 0.0117428;
float xs_prod_ggh_1500 = 0.03690;
float xs_prod_qqh_1500 = 0.02288;
float xs_prod_ggh_2000 = 0.009600;
float xs_prod_qqh_2000 = 0.007052;
float xs_prod_ggh_3000 = 0.0009400;
float xs_prod_qqh_3000 = 0.0008253;
//float xs_prod_ggh_5000 = ;
//float xs_prod_qqh_5000 = 1.769e-06;
float xsggh = 2*xs_prod_ggh_500*0.541;// 0.1845*0.541*0.1086*0.6741;//500-1.709:1000-0.1845:1500-0.03690:3000-0.0009400
float xsqqh = 2*xs_prod_qqh_500*0.541;//500-0.4872:1000-0.08732:1500-0.02288:3000-0.0008253



TH1F *histo_ev_res = new TH1F("histo_ev_res", "", 3, -0.5, 2.5);
TH1F *histo_ev_res_min = new TH1F("histo_ev_res_min", "", 3, -0.5, 2.5)	;

TH1F *histo_ev_fat = new TH1F("histo_ev_fat", "", 3, -0.5, 2.5);
TH1F *histo_ev = new TH1F("histo_ev", "", 3, -0.5, 2.5)	;
for (int i =0; i<25;i++){
//for (int j =0; j<5;j++){
	string condition = "(Deep_Tag  > " + to_string(fatdeep) +  " &&  mass_HIGGS_boo > 400 && mass_HIGGS_boo < 600  )*weight ";// CleanTau_21, HvOverFAT_stud, CleanFatPt_stud, Tau_21_decorrelated, FatJet_deepTag

	const char *cara = condition.c_str();
	TCut mycut(cara);
	std::cout << mycut << std::endl;
	nEvents_bkg[n] = 0;
	nEvents_sig[n] = 0;
	nEvents_bkg_fat[n] = 0;
	nEvents_sig_fat[n] = 0;
	tree_DY->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_Wjets->Draw("1>> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_top->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_FAKE->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_VVV->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_Vg->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_VgS_L->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_VgS_H->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_VZ->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_ggH_hww->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_ggH_htt->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_qqH_hww->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_qqH_htt->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_ZH_htt->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_ZH_hww->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_WH_htt->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_WH_hww->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_ggWW->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	//tree_WWewk-> Draw("1 >> histo_ev", mycut, "goff");
	//nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_WW->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);
	tree_qqWWqq->Draw("1 >> histo_ev", mycut, "goff");
	nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev->GetBinContent(2);

	string condition_ggh = condition +" *"+ to_string(xsggh);
	const char *cara_ggh = condition_ggh.c_str();
	TCut mycut_ggh(cara_ggh);
	string condition_vbf = condition + " *" +to_string(xsqqh);
	const char *cara_vbf = condition_vbf.c_str();
	TCut mycut_vbf(cara_vbf);
	//tree_QQH_500_RelW002->Draw("1 >> histo_ev", mycut, "goff");
	//nEvents_sig[n] = nEvents_sig[n]+ histo_ev->GetBinContent(2);
	//tree_GGH_500_RelW002->Draw("1 >> histo_ev", mycut, "goff");
	//nEvents_sig[n] = nEvents_sig[n]+ histo_ev->GetBinContent(2);


	tree_QQH_500_RelW002->Draw("1 >> histo_ev", mycut_vbf, "goff");
	nEvents_sig[n] = nEvents_sig[n]+ histo_ev->GetBinContent(2);
	tree_GGH_500_RelW002->Draw("1 >> histo_ev", mycut_ggh, "goff");
	nEvents_sig[n] = nEvents_sig[n]+ histo_ev->GetBinContent(2);
/*	
	string condition_minor = "(Deep_Tag < " + to_string(fatdeep) +  " && HoverFAT > 0.4 &&  mass_HIGGS_boo > 400 && mass_HIGGS_boo < 600  )*weight ";// CleanTau_21, HvOverFAT_stud, CleanFatPt_stud, Tau_21_decorrelated, FatJet_deepTag
	
	//string condition = "(MELA_boosted < " + to_string(Mela_boo) +  " &&  mass_HIGGS > 500 && mass_HIGGS < 1500  )*weight ";// CleanTau_21, HvOverFAT_stud, CleanFatPt_stud, Tau_21_decorrelated, FatJet_deepTag

	const char *cara_minor = condition_minor.c_str();
	TCut mycut_minor(cara_minor);
	std::cout << mycut_minor << std::endl;

	tree_DY->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_Wjets->Draw("1>> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_top->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_FAKE->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	//tree_QCD->Draw("1 >> histo_ev", mycut_minor, "goff");
	//nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_VVV->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_Vg->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_VgS_L->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_VgS_H->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_VZ->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_ggH_hww->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_ggH_htt->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_qqH_hww->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_qqH_htt->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_ZH_htt->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_ZH_hww->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_WH_htt->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_WH_hww->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_ggWW->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	//tree_WWewk-> Draw("1 >> histo_ev", mycut_minor, "goff");
	//nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_WW->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	tree_qqWWqq->Draw("1 >> histo_ev", mycut_minor, "goff");
	nEvents_bkg_fat[n] = nEvents_bkg_fat[n]+ histo_ev->GetBinContent(2);
	
	string condition_ggh_min = condition_minor +"*"+ to_string(xsggh);
	const char *cara_ggh_min = condition_ggh_min.c_str();
	TCut mycut_ggh_min(cara_ggh_min);
	string condition_vbf_min = condition_minor + " *" +to_string(xsqqh);
	const char *cara_vbf_min = condition_vbf_min.c_str();
	TCut mycut_vbf_min(cara_vbf_min);

	tree_QQH_500_RelW002->Draw("1 >> histo", mycut_vbf_min, "goff");
	nEvents_sig_fat[n] = nEvents_sig_fat[n]+ histo_ev->GetBinContent(2);
	tree_GGH_500_RelW002->Draw("1 >> histo", mycut_ggh_min, "goff");
	nEvents_sig_fat[n] = nEvents_sig_fat[n]+ histo_ev->GetBinContent(2);
	
	nEvents_ratio[n] = nEvents_sig[n]/sqrt(nEvents_bkg[n]);
	nEvents_ratio_fat[n] = nEvents_sig_fat[n]/sqrt(nEvents_bkg_fat[n]);
//	nEvents_whad[n] =  Mela_res;//tau21;
//	nEvents_hvovjj[n] = Mela_boo;
	


*/













	//string condition_res = "(MELA_resolved > " + to_string(Mela_res) +  " &&  mass_HIGGS > 500 && mass_HIGGS < 1500  )*weight ";// CleanTau_21, HvOverFAT_stud, CleanFatPt_stud, Tau_21_decorrelated, FatJet_deepTag

	//const char *cara_res = condition_res.c_str();
	//TCut mycut_res(cara_res);
	//std::cout << mycut_res << std::endl;
	//nEvents_bkg_res[n] = 0;
	//nEvents_sig_res[n] = 0;
	//nEvents_bkg_res_min[n] = 0;
	//nEvents_sig_res_min[n] = 0;
	//tree_fat_DY->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg[n] = nEvents_bkg[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_Wjets->Draw("1>> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_top->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_FAKE->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_VVV->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_Vg->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_VgS_L->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_VgS_H->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_VZ->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_ggH_hww->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_ggH_htt->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_qqH_hww->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_qqH_htt->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_ZH_htt->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_ZH_hww->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_WH_htt->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_WH_hww->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_ggWW->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_WWewk-> Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_WW->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_qqWWqq->Draw("1 >> histo_ev_res", mycut_res, "goff");
	//nEvents_bkg_res[n] = nEvents_bkg_res[n]+ histo_ev_res->GetBinContent(2);

	//string condition_res_ggh = condition_res +" *"+ to_string(xsggh);
	//const char *cara_res_ggh = condition_res_ggh.c_str();
	//TCut mycut_res_ggh(cara_res_ggh);
	//string condition_res_vbf = condition_res + " *" +to_string(xsqqh);
	//const char *cara_res_vbf = condition_res_vbf.c_str();
	//TCut mycut_res_vbf(cara_res_vbf);


	//tree_fat_QQH_1000_RelW002->Draw("1 >> histo_ev_res", mycut_res_vbf, "goff");
	//nEvents_sig_res[n] = nEvents_sig_res[n]+ histo_ev_res->GetBinContent(2);
	//tree_fat_GGH_1000_RelW002->Draw("1 >> histo_ev_res", mycut_res_ggh, "goff");
	//nEvents_sig_res[n] = nEvents_sig_res[n]+ histo_ev_res->GetBinContent(2);
	//
	//
	//string condition_res_minor = "(MELA_resolved < " + to_string(Mela_res) +  " &&  mass_HIGGS > 500 && mass_HIGGS < 1500  )*weight ";// CleanTau_21, HvOverFAT_stud, CleanFatPt_stud, Tau_21_decorrelated, FatJet_deepTag

	//const char *cara_res_minor = condition_res_minor.c_str();
	//TCut mycut_res_minor(cara_res_minor);
	//std::cout << mycut_res_minor << std::endl;
	//tree_res_min_DY->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_Wjets->Draw("1>> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_top->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_FAKE->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	////tree_res_min_QCD->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	////nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_VVV->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_Vg->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_VgS_L->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_VgS_H->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_VZ->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_ggH_hww->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_ggH_htt->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_qqH_hww->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_qqH_htt->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_ZH_htt->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_ZH_hww->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_WH_htt->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_WH_hww->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_ggWW->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_WWewk-> Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_WW->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//tree_res_min_qqWWqq->Draw("1 >> histo_ev_res_min", mycut_minor, "goff");
	//nEvents_bkg_res_min[n] = nEvents_bkg[n]+ histo_ev_res_min->GetBinContent(2);
	//
	//string condition_ggh_min = condition_minor +"*"+ to_string(xsggh);
	//const char *cara_ggh_min = condition_ggh_min.c_str();
	//TCut mycut_ggh_min(cara_ggh_min);
	//string condition_vbf_min = condition_minor + " *" +to_string(xsqqh);
	//const char *cara_vbf_min = condition_vbf_min.c_str();
	//TCut mycut_vbf_min(cara_vbf_min);

	//tree_fat_QQH_1000_RelW002->Draw("1 >> histo_ev_fat", mycut_vbf_min, "goff");
	//nEvents_sig_fat[n] = nEvents_sig_fat[n]+ histo_ev_fat->GetBinContent(2);
	//tree_fat_GGH_1000_RelW002->Draw("1 >> histo_ev_fat", mycut_ggh_min, "goff");
	//nEvents_sig_fat[n] = nEvents_sig_fat[n]+ histo_ev_fat->GetBinContent(2);
	
	n = n+1;
	Whadpt = Whadpt + 80;
	BoostedSB_2jetsmass = BoostedSB_2jetsmass + 30;
	tau21 = tau21 - 0.1;
	nEvents_hvovjj[i] = fatdeep;
	//nEvents_hvovjj[i] = Mela_boo;
	Mela_boo = Mela_boo + 0.05;
	Mela_res = Mela_res + 0.04;
	fatdeep = fatdeep + 0.04;
}
/*       }

tau21 = 0.65;
Whadpt = 200 ;
BoostedSB_2jetsmass = 10;
//Mela_boo = 0.2;
Mela_boo = Mela_boo + 0.1;
fatdeep = 0.55;
}*/
float max_index = 0;

float max_tmp = 0;      
float max_sig_tmp = 0;      

TH2* h2 = new TH2F("h2", "map", 5, 0.2 , 1.20 , 5, 360, 760);
TH2* h4 = new TH2F("h4", "map", 5, 0.2 , 1.20 , 5, 360, 760);
TH2* h3 = new TH2F("h3", "map", 5, 0.2 , 1.20 , 5, 360, 760);



std::cout << "nback	 nsig	ratio	deepTag		hvovfat"<< std::endl;
for (int i = 0; i < 25;i ++){
	//nEvents_significance[i] = sqrt(nEvents_ratio[i]*nEvents_ratio[i] + nEvents_ratio_fat[i]*nEvents_ratio_fat[i]);
	nEvents_significance[i] = sqrt(nEvents_ratio[i]*nEvents_ratio[i]);
	//nEvents_bkg_res_on[i] = nEvents_bkg[i] - nEvents_bkg_fat[i];
	//nEvents_sig_res_on[i] = nEvents_sig[i] - nEvents_sig_fat[i];
	//h2->Fill(nEvents_hvovjj[i], nEvents_whad[i], nEvents_bkg[i]);
	//h3->Fill(nEvents_hvovjj[i], nEvents_whad[i], nEvents_sig[i]);
	//h4->Fill(nEvents_hvovjj[i], nEvents_whad[i], nEvents_ratio[i]);
	std::cout<<nEvents_hvovjj[i]<<"," <<nEvents_significance[i]<<","<< nEvents_sig[i]<<","<<nEvents_bkg[i]<<std::endl;
	//std::cout <<nEvents_bkg[i]<<"__"<<nEvents_sig[i]<<"__"<<nEvents_ratio[i]<<"__"<<nEvents_hvovjj[i]<<"___" <<nEvents_significance[i]<<std::endl;
	if( nEvents_significance[i] > max_sig_tmp){
 		max_sig_tmp = nEvents_significance[i];
		max_index = i;

}
}

h2->SetTitle("NBkg");
h2->GetXaxis()->SetTitle("FatJet_mass");
h2->GetYaxis()->SetTitle("CleanFatJet_pt");
//h2->Draw("LEGO");

//TCanvas *c2 = new TCanvas;
//c2->cd();
h3->SetTitle("NSig");
h3->GetXaxis()->SetTitle("FatJet_mass");
h3->GetYaxis()->SetTitle("CleanFatJet_pt");
//h3->Draw("LEGO");
//gPad->SetGrid(1,1);
//TCanvas *c3 = new TCanvas;
//c3->cd();
h4->SetTitle("Nratio");
h4->GetXaxis()->SetTitle("tau_21");
h4->GetYaxis()->SetTitle("FatJet_mass");
//h4->Draw("LEGO");

std::cout <<" il miglior ratio signal su fondo vale " << nEvents_significance[max_index] << " con ratio < " << nEvents_ratio[max_index] <<" e con HovJj > " << nEvents_hvovjj[max_index] << std::endl;		




/*int nEntries = tree_wjets->GetEntries();	
for (int iev = 0; iev < nEntries;iev++){
tree_wjets->GetEntry(iev);
std::cout << HvOvJJ << std::endl;

}*/


}



