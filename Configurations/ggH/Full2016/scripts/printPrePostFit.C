void printPrePostFit(std::string process = "ggH_hww") {
  
  std::vector<std::string> cuts;
  
  RooArgSet*     post = (RooArgSet*) _file0->Get("norm_fit_s");
  RooArgSet*     pre = (RooArgSet*) _file0->Get("norm_prefit");

  cuts.push_back("ggHtag_of0j_em_mp_0j_pt2ge20"); 
  cuts.push_back("ggHtag_of0j_em_mp_0j_pt2lt20");
  cuts.push_back("ggHtag_of0j_em_pm_0j_pt2ge20");
  cuts.push_back("ggHtag_of0j_em_pm_0j_pt2lt20");
  cuts.push_back("ggHtag_of0j_me_mp_0j_pt2ge20");
  cuts.push_back("ggHtag_of0j_me_mp_0j_pt2lt20");
  cuts.push_back("ggHtag_of0j_me_pm_0j_pt2ge20");
  cuts.push_back("ggHtag_of0j_me_pm_0j_pt2lt20");
  cuts.push_back("ggHtag_of0j_of0j_DYtt");
  cuts.push_back("ggHtag_of0j_of0j_Top");
  cuts.push_back("ggHtag_of1j_em_mp_1j_pt2ge20");
  cuts.push_back("ggHtag_of1j_em_mp_1j_pt2lt20");
  cuts.push_back("ggHtag_of1j_em_pm_1j_pt2ge20");
  cuts.push_back("ggHtag_of1j_em_pm_1j_pt2lt20");
  cuts.push_back("ggHtag_of1j_me_mp_1j_pt2ge20");
  cuts.push_back("ggHtag_of1j_me_mp_1j_pt2lt20");
  cuts.push_back("ggHtag_of1j_me_pm_1j_pt2ge20");
  cuts.push_back("ggHtag_of1j_me_pm_1j_pt2lt20");
  cuts.push_back("ggHtag_of1j_of1j_DYtt");
  cuts.push_back("ggHtag_of1j_of1j_Top");
  cuts.push_back("ggHtag_of2j_of2j_DYtt");
  cuts.push_back("ggHtag_of2j_of2j_Top");
  cuts.push_back("ggHtag_of2j_of_2j");
  cuts.push_back("ggHtag_sf0j_sf_0j_ee_Top");
  cuts.push_back("ggHtag_sf0j_sf_0j_ee_WW");
  cuts.push_back("ggHtag_sf0j_sf_0j_ee_pt2ge20");
  cuts.push_back("ggHtag_sf0j_sf_0j_ee_pt2lt20");
  cuts.push_back("ggHtag_sf0j_sf_0j_mm_Top");
  cuts.push_back("ggHtag_sf0j_sf_0j_mm_WW");
  cuts.push_back("ggHtag_sf0j_sf_0j_mm_pt2ge20");
  cuts.push_back("ggHtag_sf0j_sf_0j_mm_pt2lt20");
  cuts.push_back("ggHtag_sf1j_sf_1j_Top");
  cuts.push_back("ggHtag_sf1j_sf_1j_ee");
  cuts.push_back("ggHtag_sf1j_sf_1j_ee_WW");
  cuts.push_back("ggHtag_sf1j_sf_1j_mm");
  cuts.push_back("ggHtag_sf1j_sf_1j_mm_WW");
  cuts.push_back("vbftag_of2j_vbf_2j_DYtt");
  cuts.push_back("vbftag_of2j_vbf_2j_Top");
  cuts.push_back("vbftag_of2j_vbf_2j_highmjj");
  cuts.push_back("vbftag_of2j_vbf_2j_lowmjj");
  cuts.push_back("vhtag_of2j_vh2j_DYtt");
  cuts.push_back("vhtag_of2j_vh2j_Top");
  cuts.push_back("vhtag_of2j_vh_2j");
  cuts.push_back("wh3ltag_wh3l_13TeV_ossf");
  cuts.push_back("wh3ltag_wh3l_sssf");
  cuts.push_back("wh3ltag_wh3l_wz_13TeV");
  cuts.push_back("wh3ltag_wh3l_zg_13TeV");
  cuts.push_back("zh4ltag_zh4l_XDF_13TeV");
  cuts.push_back("zh4ltag_zh4l_XSF_13TeV");
  cuts.push_back("zh4ltag_zh4l_ZZ_13TeV");

  cuts.push_back("vh_2j");


  std::cout << std::left << setw(30) << "category/process " << std::left << setw(30) << " prefit " << std::left << setw(30) << " postfit " << std::left << setw(30) << " postfit/prefit " << std::endl;
  for (int icut = 0; icut < cuts.size(); icut++) {  
    RooRealVar *norm_pre, *norm_post;
          
    TString name = Form ("%s/%s", cuts.at(icut).c_str(), process.c_str());
  
    if (!( post->find(name.Data())) ) continue;

    norm_post = (RooRealVar* ) post->find(name.Data()); 
    norm_pre  = (RooRealVar* ) pre->find(name.Data());

    TString pre   = Form ("%.2f +/- %.2f", norm_pre->getVal(), norm_pre->getError());
    TString post  = Form ("%.2f +/- %.2f", norm_post->getVal(), norm_post->getError());
    TString ratio = Form ("%.2f", norm_post->getVal()/norm_pre->getVal());

    std::cout << std::left << setw(30) << name << setw(30) << pre << setw(33) << post << setw(20) << ratio << endl; 
//    std::cout <<  setw(30) << setprecision(3) << norm_pre->getVal() << " +/- " << setprecision(3) << norm_pre->getError() <<  setw(30) << setprecision(3) << norm_post->getVal() << " +/- " << setprecision(3) << norm_post->getError() <<  setw(30) << setprecision(3) << norm_post->getVal()/norm_pre->getVal()<< std::endl;
//    std::cout <<  setw(30) << setprecision(3) << norm_post->getVal() << setw(2)  << " +/- " << setw(5) << setprecision(3) << norm_post->getError();
//    std::cout <<  setw(30) << setprecision(3) << norm_post->getVal()/norm_pre->getVal()<< std::endl;
  }
}

void printNuisance(std::string nuisance = "WWnorm0j"){

  RooFitResult* fit_s;
  fit_s = (RooFitResult*) _file0->Get("fit_s");

  RooRealVar* nuisanceVal = (RooRealVar*) ( (RooArgList)  fit_s->floatParsFinal()).find( nuisance.c_str() );
  std::cout << nuisance.c_str() << " = " << nuisanceVal->getVal() << " +/- " << nuisanceVal->getError()  << std::endl;

}

void printAllNuisances(){

  RooFitResult* fit_s;
  fit_s = (RooFitResult*) _file0->Get("fit_s");
  //fit_s = (RooFitResult*) _file0->Get("nuisances_prefit_res");
  RooArgList parList = fit_s->floatParsFinal();

  for( Int_t j=0; j<parList.getSize(); j++){
    RooRealVar* nuisanceVal = (RooRealVar*) ( parList.find( parList.at(j)->GetName() ) );
    std::cout << parList.at(j)->GetName() << " = " << nuisanceVal->getVal() << " +/- " << nuisanceVal->getError()  << std::endl;

  }

}

void printCorrelation(char* nuis1, char* nuis2){

  RooFitResult* fit_s;
  fit_s = (RooFitResult*) _file0->Get("fit_s");
  std::cout << "Correlation between nuisances " << nuis1 << " and " << nuis2 << " = " << fit_s->correlation(nuis1, nuis2) << std::endl;

}
