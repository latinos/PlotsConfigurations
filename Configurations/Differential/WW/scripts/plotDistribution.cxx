{
  
  // 
  // 1 sigma -> 2*deltaNLL = 2.41
  // 
  
  //---- select 1-sigma region
  
  TTree* limit = (TTree*) _file0->Get("limit");
  
  limit->Draw(">>elist","2*deltaNLL < 2.41");
  TEventList* tel = (TEventList*) gDirectory->Get("elist");
  limit->SetEventList(tel);
  
  
  //---- define graphs
  
  TGraphAsymmErrors* gr = new TGraphAsymmErrors();
  TGraphAsymmErrors* gr_xsec = new TGraphAsymmErrors();
  
  float x;
  float y;
  float y_up;
  float y_do;
  float x_up;
  float x_do;
  float nominal_xsec;
  
  
  
  //---- first point
  
  x = 20;
  x_do = 20;
  x_up = 20;
  
  y = 1;
  y_do = y - limit->GetMinimum("r1");
  y_up = limit->GetMaximum("r1") - y;
  
  gr->SetPoint (0, x, y);
  gr->SetPointError (0, x_do, x_up, y_do, y_up);
  
  nominal_xsec = 15.123;
  gr_xsec->SetPoint (0, x, y*nominal_xsec);
  gr_xsec->SetPointError (0, x_do, x_up, y_do*nominal_xsec, y_up*nominal_xsec);
  
  
  //---- second point
  
  x = 45;
  x_do = 5;
  x_up = 5;
  
  y = 1;
  y_do = y - limit->GetMinimum("r2");
  y_up = limit->GetMaximum("r2") - y;
  
  gr->SetPoint (1, x, y);
  gr->SetPointError (1, x_do, x_up, y_do, y_up);
  
  
  nominal_xsec = 7.13;
  gr_xsec->SetPoint (1, x, y*nominal_xsec);
  gr_xsec->SetPointError (1, x_do, x_up, y_do*nominal_xsec, y_up*nominal_xsec);
  
  
  
  //---- now draw
  
  TCanvas* cc_signal_strength = new TCanvas();
  
  gr->SetMarkerSize(2);
  gr->SetMarkerStyle(21);
  gr->SetMarkerColor(2);
  
  gr->SetLineWidth(2);
  gr->SetLineColor(2);
  
  
  gr->Draw("AP");
  
  cc_signal_strength->SetGrid();
  
  
  //---- ... and now the distribution in pb
  
  TCanvas* cc_xsec = new TCanvas();
  
  
  gr_xsec->SetMarkerSize(2);
  gr_xsec->SetMarkerStyle(21);
  gr_xsec->SetMarkerColor(2);
  
  gr_xsec->SetLineWidth(2);
  gr_xsec->SetLineColor(2);
  
  gr_xsec->Draw("AP");
  
  cc_xsec->SetGrid();
  
  
  
}



