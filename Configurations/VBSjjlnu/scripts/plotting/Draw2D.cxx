void Draw2D() {
  
  int n =  limit->Draw("2*deltaNLL:muGGH:muVBF","deltaNLL<10","goff");
  
  TGraph2D *graphScan = new TGraph2D(n,limit->GetV2(),limit->GetV3(),limit->GetV1());
  graphScan->SetTitle("");
  graphScan->SetMarkerStyle(21);
  graphScan->SetMarkerColor(kRed);
  graphScan->SetLineColor(kRed);

  graphScan->Draw("colz");

  graphScan->GetXaxis()->SetTitle("#mu_{ggH}");
  graphScan->GetYaxis()->SetTitle("#mu_{VBF}");
  graphScan->GetZaxis()->SetTitle("- 2#Delta logL");
  graphScan->GetZaxis()->SetRangeUser(0,10);
  
//   graphScan->Draw("surf1");

  //---- 2D likelihood thresholds
  Double_t contours[2];
  contours[0] = 1;
  contours[1] = 3.84;
    
  TCanvas* cc = new TCanvas ("cc","",800,600); 
//   graphScan->Draw("cont4z");
  graphScan->Draw("colz");
  graphScan->GetHistogram()->GetXaxis()->SetTitle("#mu_{ggH}");
  graphScan->GetHistogram()->GetYaxis()->SetTitle("#mu_{VBF/VH}");
  graphScan->GetHistogram()->GetZaxis()->SetTitle("- 2#Delta logL");
// //   graphScan->Draw("cont4z");
  graphScan->Draw("colz");
  

  TCanvas* cc2 = new TCanvas ("cc2","",800,600); 
  cc2->SetRightMargin(0.15);

  graphScan->Draw("colz");
  
  TH2F* HistStreamFn_ph2 = (TH2F*) (graphScan->GetHistogram())->Clone("testhisto_ph2");
  HistStreamFn_ph2->SetContour(2, contours);
  HistStreamFn_ph2->SetLineWidth(2);
  HistStreamFn_ph2->SetLineStyle(2);
  HistStreamFn_ph2->Draw("CONT1 LIST SAME");
  
//   gStyle->SetPadRightMargin(0.2);
  
  cc2->SetGrid();
  
  
}
