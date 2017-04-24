void normalization() {
  
  
  RooArgSet*     norm_fit_s = (RooArgSet*) _file0->Get("norm_fit_s");
  
  std::vector<std::string> samples;
  std::vector<std::string> cuts_0jet;
  std::vector<std::string> cuts_1jet;
  
  samples.push_back("Fake");
  samples.push_back("WW");
  samples.push_back("DY");
  samples.push_back("top");
  
  cuts_0jet.push_back("c2015_em_0j_13");
  cuts_0jet.push_back("c2015_me_0j_13");

  cuts_1jet.push_back("c2015_em_1j_13");
  cuts_1jet.push_back("c2015_me_1j_13");
  
  
  
  std::cout << " --- 0 jet --- " << std::endl;
  
  for (int isample = 0; isample < samples.size(); isample++) {
    float norm = 0;
    for (int icut = 0; icut < cuts_0jet.size(); icut++) {   
      RooRealVar*  norm_var;
      
      TString name = Form ("%s/%s", cuts_0jet.at(icut).c_str(), samples.at(isample).c_str());
      
      norm_var = (RooRealVar* ) norm_fit_s->find(name.Data());  
      norm += norm_var->getVal();         
    }
    std::cout << " " <<  samples.at(isample) << " = " << norm << std::endl;
  }
  
  std::cout << " --- 1 jet --- " << std::endl;
  
  for (int isample = 0; isample < samples.size(); isample++) {
    float norm = 0;
    for (int icut = 0; icut < cuts_1jet.size(); icut++) {   
      RooRealVar*  norm_var;
      
      TString name = Form ("%s/%s", cuts_1jet.at(icut).c_str(), samples.at(isample).c_str());

      norm_var = (RooRealVar* ) norm_fit_s->find(name.Data());  
      norm += norm_var->getVal();         
    }
    std::cout << " " <<  samples.at(isample) << " = " << norm << std::endl;
  }
  
  
  
  
  
  std::vector<std::string> nuisances;
  nuisances.push_back("WWnorm0j");
  nuisances.push_back("DYttnorm0j");
  nuisances.push_back("Topnorm0j");
  nuisances.push_back("WWnorm1j");
  nuisances.push_back("DYttnorm1j");
  nuisances.push_back("Topnorm1j");
  
  
  RooFitResult* fit_s;
  fit_s = (RooFitResult*) _file0->Get("fit_s");
  
  std::cout << " ---- nuisances ---- " << std::endl;
  
  for (int inuisance = 0; inuisance < nuisances.size(); inuisance++) {
    RooRealVar* varnorm_nuisance = (RooRealVar*) ( (RooArgList)  fit_s->floatParsFinal()).find( nuisances.at(inuisance).c_str() );
    std::cout << " [ " << nuisances.at(inuisance).c_str() << " ] = " << varnorm_nuisance->getVal() << std::endl;
  }
  
  
  
  
//   RooRealVar* varnorm_nuisance = (RooRealVar*) ( (RooArgList)  fit_s->floatParsFinal()).find("WWnorm0j");
//   std::cout << " var = " << varnorm_nuisance->getVal() << std::endl;
  
    
  
  
  
  
  
  
  
  
  
  
  
  /*
  //---- 0 jet
  
  std::cout << " --- 0 jet --- " << std::endl;
  
  float normwjet_0jet = 0;
  RooRealVar*    wjet_0jet;
  
  wjet_0jet = (RooRealVar* ) norm_fit_s->find("c2015_em_0j_13/Fake");  
  normwjet_0jet += wjet_0jet->getVal();
  
  wjet_0jet = (RooRealVar* ) norm_fit_s->find("c2015_me_0j_13/Fake");  
  normwjet_0jet += wjet_0jet->getVal();
  
  std::cout << " wjet = " << normwjet_0jet << std::endl;
  
  
  float normWW_0jet = 0;
  RooRealVar*    WW_0jet;
  
  WW_0jet = (RooRealVar* ) norm_fit_s->find("c2015_em_0j_13/WW");  
  normWW_0jet += WW_0jet->getVal();
  
  WW_0jet = (RooRealVar* ) norm_fit_s->find("c2015_me_0j_13/WW");  
  normWW_0jet += WW_0jet->getVal();
  
  std::cout << " WW = " << normWW_0jet << std::endl;
  
  
  float normDY_0jet = 0;
  RooRealVar*    DY_0jet;
  
  DY_0jet = (RooRealVar* ) norm_fit_s->find("c2015_em_0j_13/DY");  
  normDY_0jet += DY_0jet->getVal();
  
  DY_0jet = (RooRealVar* ) norm_fit_s->find("c2015_me_0j_13/DY");  
  normDY_0jet += DY_0jet->getVal();
  
  std::cout << " DY = " << normDY_0jet << std::endl;
  
  
  
  float normtop_0jet = 0;
  RooRealVar*    top_0jet;
  
  top_0jet = (RooRealVar* ) norm_fit_s->find("c2015_em_0j_13/top");  
  normtop_0jet += top_0jet->getVal();
  
  top_0jet = (RooRealVar* ) norm_fit_s->find("c2015_me_0j_13/top");  
  normtop_0jet += top_0jet->getVal();
  
  std::cout << " top = " << normtop_0jet << std::endl;
  
  
  
  
  
  //---- 1 jet
  
  std::cout << " --- 1 jet --- " << std::endl;
  
  float normwjet_1jet = 0;
  RooRealVar*    wjet_1jet;
  
  wjet_1jet = (RooRealVar* ) norm_fit_s->find("c2015_em_1j_13/Fake");  
  normwjet_1jet += wjet_1jet->getVal();
  
  wjet_1jet = (RooRealVar* ) norm_fit_s->find("c2015_me_1j_13/Fake");  
  normwjet_1jet += wjet_1jet->getVal();
  
  std::cout << " wjet = " << normwjet_1jet << std::endl;
  
  
  float normWW_1jet = 0;
  RooRealVar*    WW_1jet;
  
  WW_1jet = (RooRealVar* ) norm_fit_s->find("c2015_em_1j_13/WW");  
  normWW_1jet += WW_1jet->getVal();
  
  WW_1jet = (RooRealVar* ) norm_fit_s->find("c2015_me_1j_13/WW");  
  normWW_1jet += WW_1jet->getVal();
  
  std::cout << " WW = " << normWW_1jet << std::endl;
  
  
  float normDY_1jet = 0;
  RooRealVar*    DY_1jet;
  
  DY_1jet = (RooRealVar* ) norm_fit_s->find("c2015_em_1j_13/DY");  
  normDY_1jet += DY_1jet->getVal();
  
  DY_1jet = (RooRealVar* ) norm_fit_s->find("c2015_me_1j_13/DY");  
  normDY_1jet += DY_1jet->getVal();
  
  std::cout << " DY = " << normDY_1jet << std::endl;
  
  
  
  float normtop_1jet = 0;
  RooRealVar*    top_1jet;
  
  top_1jet = (RooRealVar* ) norm_fit_s->find("c2015_em_1j_13/top");  
  normtop_1jet += top_1jet->getVal();
  
  top_1jet = (RooRealVar* ) norm_fit_s->find("c2015_me_1j_13/top");  
  normtop_1jet += top_1jet->getVal();
  
  std::cout << " top = " << normtop_1jet << std::endl;
  */
  
}


