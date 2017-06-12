


void printPrePostFit(std::string process = "ggH_hww") {
  
  std::vector<std::string> cuts;
  
  RooArgSet*     post = (RooArgSet*) _file0->Get("norm_fit_s");
  RooArgSet*     pre = (RooArgSet*) _file0->Get("norm_prefit");

  cuts.push_back("b0j");
  cuts.push_back("b1j");
  cuts.push_back("b2j");
  

  for (int icut = 0; icut < cuts.size(); icut++) {  
    RooRealVar *norm_pre, *norm_post;
          
    TString name = Form ("%s/%s", cuts.at(icut).c_str(), process.c_str());
  
    if (!( post->find(name.Data())) ) continue;

    norm_post = (RooRealVar* ) post->find(name.Data()); 
    norm_pre  = (RooRealVar* ) pre->find(name.Data());

    std::cout << cuts.at(icut).c_str() << "/" << process.c_str() << " --> prefit = " << norm_pre->getVal() << " postfit = " << norm_post->getVal() << " postfit/prefit = " << norm_post->getVal()/norm_pre->getVal() << std::endl;
  }
}

void printNuisance(std::string nuisance = "WWnorm0j"){

  RooFitResult* fit_s;
  fit_s = (RooFitResult*) _file0->Get("fit_s");

  RooRealVar* nuisanceVal = (RooRealVar*) ( (RooArgList)  fit_s->floatParsFinal()).find( nuisance.c_str() );
  std::cout << nuisance.c_str() << " = " << nuisanceVal->getVal() << " +/- " << nuisanceVal->getError()  << std::endl;

}



