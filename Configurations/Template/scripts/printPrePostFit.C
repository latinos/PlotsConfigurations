void printPrePostFit(std::string process = "ggH_hww") {
  
  std::vector<std::string> cuts;
  
  RooArgSet*     post = (RooArgSet*) _file0->Get("norm_fit_s");
  RooArgSet*     pre = (RooArgSet*) _file0->Get("norm_prefit");

  auto iter_pre = pre->createIterator();
  auto var_pre = iter_pre->Next();
  while (var_pre){
    std::string aa = var_pre->GetName();
    std::string cat = aa.substr(0,aa.find("/"));
    std::string proc = aa.substr(aa.find("/")+1,aa.length());
    if (proc != process) {
      var_pre = iter_pre->Next();
    }
    else{
      cuts.push_back(cat);
      var_pre = iter_pre->Next();
    }
  }

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
