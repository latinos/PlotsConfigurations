void drawNLLvarThree(std::string var = "r") {
  
  TCanvas* cc = new TCanvas("cc","", 800, 600);
  int n = 0;
  int n_data = 0;
  
  TTree* limit_0 = (TTree*) _file0->Get("limit");  
  TString toDraw_0 = Form ("2*deltaNLL:%s", var.c_str());
  n = limit_0->Draw(toDraw_0.Data(),"deltaNLL<10 && deltaNLL>-30","l");
  TGraph *graphScan_0 = new TGraph(n,limit_0->GetV2(),limit_0->GetV1());
  graphScan_0->RemovePoint(0);

  TTree* limit_1 = (TTree*) _file1->Get("limit");  
  TString toDraw_1 = Form ("2*deltaNLL:%s", var.c_str());
  n = limit_1->Draw(toDraw_1.Data(),"deltaNLL<10 && deltaNLL>-30","l");
  TGraph *graphScan_1 = new TGraph(n,limit_1->GetV2(),limit_1->GetV1());
  graphScan_1->RemovePoint(0);
  
  TTree* limit_2 = (TTree*) _file2->Get("limit");  
  TString toDraw_2 = Form ("2*deltaNLL:%s", var.c_str());
  n = limit_2->Draw(toDraw_2.Data(),"deltaNLL<10 && deltaNLL>-30","l");
  TGraph *graphScan_2 = new TGraph(n,limit_2->GetV2(),limit_2->GetV1());
  graphScan_2->RemovePoint(0);
  
  cc->SetGrid();
  
  
  graphScan_0->SetTitle("");
  graphScan_0->SetMarkerStyle(21);
  graphScan_0->SetLineWidth(2);
  graphScan_0->SetMarkerColor(kBlue);
  graphScan_0->SetLineColor(kBlue);

  graphScan_1->SetTitle("");
  graphScan_1->SetMarkerStyle(21);
  graphScan_1->SetLineWidth(2);
  graphScan_1->SetMarkerColor(kRed);
  graphScan_1->SetLineColor(kRed);

  graphScan_2->SetTitle("");
  graphScan_2->SetMarkerStyle(21);
  graphScan_2->SetLineWidth(2);
  graphScan_2->SetMarkerColor(kGreen+1);
  graphScan_2->SetLineColor(kGreen+1);
  
  
//   graphScan_0->Draw("APL");
  
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
//   tex3 = new TLatex(0.236,0.92,"L = 12.9 fb^{-1}  Preliminary");
  tex3 = new TLatex(0.236,0.92,"L = 15.2 fb^{-1}  Preliminary");
  tex3->SetNDC();
  tex3->SetTextFont(52);
  tex3->SetTextSize(0.035);
  tex3->SetLineWidth(2);
  
  
  float minX = 999;
  float maxX = -999;
  
  
  //---- clean duplicate (it happens during lxbatch scan)
  std::vector <double> x_std;
  std::map <double, double> x_y_map;
  double x_value;
  double y_value;
  for (int ip = 0; ip<graphScan_0->GetN(); ip++) {
    
    graphScan_0->GetPoint (ip, x_value, y_value);
//     std::cout << " x_value = " << x_value << std::endl;
    if (std::find(x_std.begin(), x_std.end(), x_value) != x_std.end()) {
      graphScan_0->RemovePoint(ip);
      //       std::cout << "removed " << ip << std::endl;
      ip--;
    }
    else {
      x_std.push_back(x_value);
      x_y_map[x_value] = y_value;
    }
  }
  
  graphScan_0->Set(0);
   
  
  float mc_min_x = -100;
  //---- fix the 0 of the likelihood scan
  float minimum = 1000;
  for (std::map<double, double>::iterator it = x_y_map.begin(); it != x_y_map.end(); it++) {
    if ( it->second < minimum ) {
      minimum = it->second;
      mc_min_x = it->first;
    }
  }
  for (std::map<double, double>::iterator it = x_y_map.begin(); it != x_y_map.end(); it++) {
    it->second =  it->second - minimum;
  }
  //---- (end) fix the 0 of the likelihood scan
  
  
  int ip = 0;
  for (std::map<double, double>::iterator it = x_y_map.begin(); it != x_y_map.end(); it++) {
    graphScan_0->SetPoint( ip, it->first , it->second);
    ip++;
  }
  
  
  //---- just for horizonthal lines
  for (std::map<double, double>::iterator it = x_y_map.begin(); it != x_y_map.end(); it++) {
    if ( it->first < minX ) {
      minX = it->first;
    }
    if ( it->first > maxX ) {
      maxX = it->first;
    }
  }
  //---- (end) just for horizonthal lines
  
  
  
  
  
  
  
  //---- plot ----
  
  graphScan_0->GetXaxis()->SetTitle("#mu");
  graphScan_0->GetYaxis()->SetTitle("-2 #Delta LL");
  
  graphScan_0  ->Draw("al");
  graphScan_1  ->Draw("l");
  graphScan_2  ->Draw("l");
  
  TLegend* legend = new TLegend(0.1,0.7,0.48,0.9);
  legend->AddEntry(graphScan_0,"2015","l");
  legend->AddEntry(graphScan_1,"2016","l");
  legend->AddEntry(graphScan_2,"2015+2016","l");
  legend->Draw();
  
  //   graphScan_0  ->Draw("aPl");
  
  tex->Draw("same");
  tex2->Draw("same");
  tex3->Draw("same");
  
  
  //  2deltaLogL = 1.00
  //  2deltaLogL = 3.84
  
//   TLine *line1 = new TLine((limit_0->GetV2())[0],1.0,(limit_0->GetV2())[n-1],1.0);
  TLine *line1 = new TLine(minX,1.0,maxX,1.0);
  line1->SetLineWidth(2);
  line1->SetLineStyle(2);
  line1->SetLineColor(kRed);
  line1->Draw(); 
  
//   TLine *line2 = new TLine((limit_0->GetV2())[0],3.84,(limit_0->GetV2())[n-1],3.84);
  TLine *line2 = new TLine(minX,3.84,maxX,3.84);
  line2->SetLineWidth(2);
  line2->SetLineStyle(2);
  line2->SetLineColor(kRed);
  line2->Draw();
  
  
  std::cout << " MC   at minimum:   " <<   mc_min_x << std::endl;
  std::cout << " MC   at 0:   " << graphScan_0    ->Eval(0) << std::endl;
  std::cout << " significance MC   at 0:   " << sqrt(graphScan_0    ->Eval(0)) << std::endl;
  
  
  cc->SaveAs("ll.png");
  
}

