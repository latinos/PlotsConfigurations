//---- 
//---- perform Stewatr-Tackmann procedure at 13 TeV
//----


void doST() {

  //---- inputs
  //
  // ge = greater or equal
 
  float sigma_0;
  float sigma_ge1;
  float sigma_ge2;
  float sigma_1;
  
  float err_sigma_ge0;
  float err_sigma_ge1;
  float err_sigma_ge2;

  
  float f0;
  float f1;
  float f2;
  
   
  //---- filling inputs with numbers from ST-resummation
  //----  from ggF YR4
  sigma_ge0 = 47.41;
  sigma_0 = 29.51;
  sigma_1 = 11.94;
  sigma_ge2 = 5.96;
  
  err_sigma_ge0 = 5.1/100.;
  err_sigma_ge1 = 10.5/100.;
  err_sigma_ge2 = 17.6/100.;
  
  
  //---- now some math
  f0 = sigma_0 / sigma_ge0;
  f1 = sigma_1 / sigma_ge0;
  f2 = sigma_ge2 / sigma_ge0;
  
  
  //---- and the results:

  float QCDscale_ggH = pow ( exp( err_sigma_ge0 ) , 1./f0 );
  
  float QCDscale_ggH1in_0jet = pow ( exp( err_sigma_ge1 ) , - (f1+f2)/f0 );
  float QCDscale_ggH1in_1jet = pow ( exp( err_sigma_ge1 ) ,   (f1+f2)/f1 );
  
  float QCDscale_ggH2in_1jet = pow ( exp( err_sigma_ge2 ) , - f2/f1 );
  float QCDscale_ggH2in_2jet = exp( err_sigma_ge2 );
  
  
  //---- and print:
  std::cout << " QCDscale_ggH         =      " << QCDscale_ggH           <<   std::endl;
  std::cout << " QCDscale_ggH1in_0jet =      " << QCDscale_ggH1in_0jet   <<   std::endl;
  std::cout << " QCDscale_ggH1in_1jet =      " << QCDscale_ggH1in_1jet   <<   std::endl;
  std::cout << " QCDscale_ggH2in_1jet =      " << QCDscale_ggH2in_1jet   <<   std::endl;
  std::cout << " QCDscale_ggH2in_2jet =      " << QCDscale_ggH2in_2jet   <<   std::endl;
  
  
}
