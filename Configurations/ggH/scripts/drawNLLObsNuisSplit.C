void drawNLLObsNuisSplit(int lumi = 0) {
  
  TCanvas* cc = new TCanvas("cc","", 800, 600);
  int n = 0;
  int n_data = 0;
  
  TTree* limit = (TTree*) _file0->Get("limit");  
  n = limit->Draw("2*deltaNLL:r","deltaNLL<10 && deltaNLL>0","l");
  TGraph *graphScan = new TGraph(n,limit->GetV2(),limit->GetV1());
  graphScan->RemovePoint(0);

  TGraph *graphScanData = 0;
  if (_file1) {
   TTree* limitData = (TTree*) _file1->Get("limit");  
   std::cout << " limitData = " << limitData << std::endl;
   n_data = limitData->Draw("2*deltaNLL:r","deltaNLL<10 && deltaNLL>0","l");
   std::cout << " n_data = " << n_data << std::endl;
   graphScanData = new TGraph(n_data,limitData->GetV2(),limitData->GetV1());
   graphScanData->RemovePoint(0);
   graphScanData->SetTitle("");
   graphScanData->SetMarkerStyle(21);
   graphScanData->SetLineWidth(2);
   graphScanData->SetMarkerColor(kRed);
   graphScanData->SetLineColor(kRed);
  }

  
  TGraph *graphScanTheoryFrozen = 0;
  if (_file2) {
    TTree* limitTheoryFrozen = (TTree*) _file2->Get("limit");  
    std::cout << " limitTheoryFrozen = " << limitTheoryFrozen << std::endl;
    n_data = limitTheoryFrozen->Draw("2*deltaNLL:r","deltaNLL<10 && deltaNLL>0","l");
    std::cout << " n_data = " << n_data << std::endl;
    graphScanTheoryFrozen = new TGraph(n_data,limitTheoryFrozen->GetV2(),limitTheoryFrozen->GetV1());
    graphScanTheoryFrozen->RemovePoint(0);
    graphScanTheoryFrozen->SetTitle("");
    graphScanTheoryFrozen->SetMarkerStyle(1);
    graphScanTheoryFrozen->SetLineWidth(3);
    graphScanTheoryFrozen->SetLineStyle(4);
    graphScanTheoryFrozen->SetMarkerColor(kBlue);
    graphScanTheoryFrozen->SetLineColor(kBlue);
  }
  
  
  TGraph *graphScanDataTheoryFrozen = 0;
  if (_file3) {
    TTree* limitDataTheoryFrozen = (TTree*) _file3->Get("limit");  
    n_data = limitDataTheoryFrozen->Draw("2*deltaNLL:r","deltaNLL<10 && deltaNLL>0","l");
    std::cout << " n_data = " << n_data << std::endl;
    graphScanDataTheoryFrozen = new TGraph(n_data,limitDataTheoryFrozen->GetV2(),limitDataTheoryFrozen->GetV1());
    graphScanDataTheoryFrozen->RemovePoint(0);
    graphScanDataTheoryFrozen->SetTitle("");
    graphScanDataTheoryFrozen->SetMarkerStyle(1);
    graphScanDataTheoryFrozen->SetLineWidth(3);
    graphScanDataTheoryFrozen->SetLineStyle(4);
    graphScanDataTheoryFrozen->SetMarkerColor(kRed);
    graphScanDataTheoryFrozen->SetLineColor(kRed);
  }
  
  

  
  TGraph *graphScanExpNuisFrozen = 0;
  if (_file4) {
    TTree* limitExpNuisFrozen = (TTree*) _file4->Get("limit");  
    n_data = limitExpNuisFrozen->Draw("2*deltaNLL:r","deltaNLL<10 && deltaNLL>0","l");
    std::cout << " n_data = " << n_data << std::endl;
    graphScanExpNuisFrozen = new TGraph(n_data,limitExpNuisFrozen->GetV2(),limitExpNuisFrozen->GetV1());
    graphScanExpNuisFrozen->RemovePoint(0);
    graphScanExpNuisFrozen->SetTitle("");
    graphScanExpNuisFrozen->SetMarkerStyle(1);
    graphScanExpNuisFrozen->SetLineWidth(4);
    graphScanExpNuisFrozen->SetLineStyle(5);
    graphScanExpNuisFrozen->SetMarkerColor(kBlue);
    graphScanExpNuisFrozen->SetLineColor(kBlue);
  }
  
  
  TGraph *graphScanDataExpNuisFrozen = 0;
  if (_file5) {
    TTree* limitDataExpNuisFrozen = (TTree*) _file5->Get("limit");  
    n_data = limitDataExpNuisFrozen->Draw("2*deltaNLL:r","deltaNLL<10 && deltaNLL>0","l");
    std::cout << " n_data = " << n_data << std::endl;
    graphScanDataExpNuisFrozen = new TGraph(n_data,limitDataExpNuisFrozen->GetV2(),limitDataExpNuisFrozen->GetV1());
    graphScanDataExpNuisFrozen->RemovePoint(0);
    graphScanDataExpNuisFrozen->SetTitle("");
    graphScanDataExpNuisFrozen->SetMarkerStyle(1);
    graphScanDataExpNuisFrozen->SetLineWidth(4);
    graphScanDataExpNuisFrozen->SetLineStyle(5);
    graphScanDataExpNuisFrozen->SetMarkerColor(kRed);
    graphScanDataExpNuisFrozen->SetLineColor(kRed);
  }
  
  
  cc->SetGrid();
  
  
  graphScan->SetTitle("");
  graphScan->SetMarkerStyle(21);
  graphScan->SetLineWidth(2);
  graphScan->SetMarkerColor(kBlue);
  graphScan->SetLineColor(kBlue);
  
//   graphScan->Draw("APL");
  
  //----
  cc->SetTicks();
  cc->SetFillColor(0);
  cc->SetBorderMode(0);
  cc->SetBorderSize(2);
  cc->SetTickx(1);
  cc->SetTicky(1);
  cc->SetRightMargin(0.05);
  cc->SetBottomMargin(0.12);
  cc->SetFrameBorderMode(0);
  
  TLatex * tex;
  tex = new TLatex(0.94,0.92,"13 TeV");
  tex->SetNDC();
  tex->SetTextAlign(31);
  tex->SetTextFont(42);
  tex->SetTextSize(0.04);
  tex->SetLineWidth(2);
  
  TLatex * tex2 = new TLatex(0.14,0.92,"CMS");
  tex2->SetNDC();
  tex2->SetTextFont(61);
  tex2->SetTextSize(0.04);
  tex2->SetLineWidth(2);
  
  TLatex * tex3;
  if (lumi == 0 ) {
    tex3 = new TLatex(0.236,0.92,"L = 12.9 fb^{-1}  Preliminary");  
  }
  else if (lumi == 1 ) {
    tex3 = new TLatex(0.236,0.92,"L = 2.3 fb^{-1}  Preliminary");  
  }
  else {
    tex3 = new TLatex(0.236,0.92,"L = 2.3 + 12.9 fb^{-1}  Preliminary");  
  }
  tex3->SetNDC();
  tex3->SetTextFont(52);
  tex3->SetTextSize(0.035);
  tex3->SetLineWidth(2);
  
  
  
  //---- clean duplicate (it happens during lxbatch scan)
  std::vector <double> x_std;
  std::map <double, double> x_y_map;
  double x_value;
  double y_value;
  for (int ip = 0; ip<graphScan->GetN(); ip++) {
    
    graphScan->GetPoint (ip, x_value, y_value);
//     std::cout << " x_value = " << x_value << std::endl;
    if (std::find(x_std.begin(), x_std.end(), x_value) != x_std.end()) {
      graphScan->RemovePoint(ip);
      //       std::cout << "removed " << ip << std::endl;
      ip--;
    }
    else {
      x_std.push_back(x_value);
      x_y_map[x_value] = y_value;
    }
  }
  
  graphScan->Set(0);
   
  int ip = 0;
  for (std::map<double, double>::iterator it = x_y_map.begin(); it != x_y_map.end(); it++) {
    graphScan->SetPoint( ip, it->first , it->second);
    ip++;
  }
  
  
  x_std.clear();
  x_y_map.clear();
  
  if (graphScanData) {
    for (int ip = 0; ip<graphScanData->GetN(); ip++) {
      
      graphScanData->GetPoint (ip, x_value, y_value);
      //     std::cout << " x_value = " << x_value << std::endl;
      if (std::find(x_std.begin(), x_std.end(), x_value) != x_std.end()) {
        graphScanData->RemovePoint(ip);
        ip--;
      }
      else {
        x_std.push_back(x_value);
        x_y_map[x_value] = y_value;
      }
    }
    
    graphScanData->Set(0);
    
    ip = 0;
    for (std::map<double, double>::iterator it = x_y_map.begin(); it != x_y_map.end(); it++) {
      graphScanData->SetPoint( ip, it->first , it->second);
      ip++;
    }
  }
  
  
  x_std.clear();
  x_y_map.clear();
  
  
  if (graphScanTheoryFrozen) {
    for (int ip = 0; ip<graphScanTheoryFrozen->GetN(); ip++) {
      
      graphScanTheoryFrozen->GetPoint (ip, x_value, y_value);
      //     std::cout << " x_value = " << x_value << std::endl;
      if (std::find(x_std.begin(), x_std.end(), x_value) != x_std.end()) {
        graphScanTheoryFrozen->RemovePoint(ip);
        ip--;
      }
      else {
        x_std.push_back(x_value);
        x_y_map[x_value] = y_value;
      }
    }
    
    graphScanTheoryFrozen->Set(0);
    
    ip = 0;
    for (std::map<double, double>::iterator it = x_y_map.begin(); it != x_y_map.end(); it++) {
      graphScanTheoryFrozen->SetPoint( ip, it->first , it->second);
      ip++;
    }
  }
  
  
  x_std.clear();
  x_y_map.clear();
  
  
  if (graphScanDataTheoryFrozen) {
    for (int ip = 0; ip<graphScanDataTheoryFrozen->GetN(); ip++) {
      
      graphScanDataTheoryFrozen->GetPoint (ip, x_value, y_value);
      //     std::cout << " x_value = " << x_value << std::endl;
      if (std::find(x_std.begin(), x_std.end(), x_value) != x_std.end()) {
        graphScanDataTheoryFrozen->RemovePoint(ip);
        ip--;
      }
      else {
        x_std.push_back(x_value);
        x_y_map[x_value] = y_value;
      }
    }
    
    graphScanDataTheoryFrozen->Set(0);
    
    ip = 0;
    for (std::map<double, double>::iterator it = x_y_map.begin(); it != x_y_map.end(); it++) {
      graphScanDataTheoryFrozen->SetPoint( ip, it->first , it->second);
      ip++;
    }
  }
  
  
  
  
  
  
  x_std.clear();
  x_y_map.clear();
  
  
  if (graphScanExpNuisFrozen) {
    for (int ip = 0; ip<graphScanExpNuisFrozen->GetN(); ip++) {
      
      graphScanExpNuisFrozen->GetPoint (ip, x_value, y_value);
      //     std::cout << " x_value = " << x_value << std::endl;
      if (std::find(x_std.begin(), x_std.end(), x_value) != x_std.end()) {
        graphScanExpNuisFrozen->RemovePoint(ip);
        ip--;
      }
      else {
        x_std.push_back(x_value);
        x_y_map[x_value] = y_value;
      }
    }
    
    graphScanExpNuisFrozen->Set(0);
    
    ip = 0;
    for (std::map<double, double>::iterator it = x_y_map.begin(); it != x_y_map.end(); it++) {
      graphScanExpNuisFrozen->SetPoint( ip, it->first , it->second);
      ip++;
    }
  }
  
  
  x_std.clear();
  x_y_map.clear();
  
  
  if (graphScanDataExpNuisFrozen) {
    for (int ip = 0; ip<graphScanDataExpNuisFrozen->GetN(); ip++) {
      
      graphScanDataExpNuisFrozen->GetPoint (ip, x_value, y_value);
      //     std::cout << " x_value = " << x_value << std::endl;
      if (std::find(x_std.begin(), x_std.end(), x_value) != x_std.end()) {
        graphScanDataExpNuisFrozen->RemovePoint(ip);
        ip--;
      }
      else {
        x_std.push_back(x_value);
        x_y_map[x_value] = y_value;
      }
    }
    
    graphScanDataExpNuisFrozen->Set(0);
    
    ip = 0;
    for (std::map<double, double>::iterator it = x_y_map.begin(); it != x_y_map.end(); it++) {
      graphScanDataExpNuisFrozen->SetPoint( ip, it->first , it->second);
      ip++;
    }
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  //---- plot ----
  
  graphScan->GetXaxis()->SetTitle("#mu");
  graphScan->GetYaxis()->SetTitle("-2 #Delta LL");
  
  graphScan  ->Draw("al");
  
  if (graphScanData) {
    graphScanData->Draw("l");
  }
  if (graphScanTheoryFrozen) {
    graphScanTheoryFrozen->Draw("l");
  }
  if (graphScanDataTheoryFrozen) {
    graphScanDataTheoryFrozen->Draw("l");
  }
  if (graphScanExpNuisFrozen) {
    graphScanExpNuisFrozen->Draw("l");
  }
  if (graphScanDataExpNuisFrozen) {
    graphScanDataExpNuisFrozen->Draw("l");
  }
  
  
  
  
  tex->Draw("same");
  tex2->Draw("same");
  tex3->Draw("same");
  
  
  //  2deltaLogL = 1.00
  //  2deltaLogL = 3.84
  
  TLine *line1 = new TLine((limit->GetV2())[0],1.0,(limit->GetV2())[n-1],1.0);
  line1->SetLineWidth(2);
  line1->SetLineStyle(2);
  line1->SetLineColor(kRed);
  line1->Draw(); 
  
  TLine *line2 = new TLine((limit->GetV2())[0],3.84,(limit->GetV2())[n-1],3.84);
  line2->SetLineWidth(2);
  line2->SetLineStyle(2);
  line2->SetLineColor(kRed);
  line2->Draw();
  
  TLegend* leg = new TLegend(0.1,0.7,0.48,0.9);
  leg->AddEntry(graphScan,"Expected","l");
  
  if (graphScanTheoryFrozen) {
    leg->AddEntry(graphScanTheoryFrozen,"Expected No Theory Unc","l");
  }
  
  if (graphScanExpNuisFrozen) {
    leg->AddEntry(graphScanExpNuisFrozen,"Expected No ExpNuis Unc","l");
  }
  
  
  if (graphScanData) {
    leg->AddEntry(graphScanData,"Observed","l");
  }
  
  if (graphScanDataTheoryFrozen) {
    leg->AddEntry(graphScanDataTheoryFrozen,"Observed No Theory Unc","l");
  }
  
  
  if (graphScanDataExpNuisFrozen) {
    leg->AddEntry(graphScanDataExpNuisFrozen,"Observed No ExpNuis Unc","l");
  }
  
  
  leg->SetFillColor(0);
  leg->Draw();
  
  
  
  cc->SaveAs("ll.png");
  
}