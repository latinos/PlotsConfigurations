void normalization() {
  
  
  RooArgSet*     norm_fit_s = (RooArgSet*) _file0->Get("norm_fit_s");
  
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
  
  
}


