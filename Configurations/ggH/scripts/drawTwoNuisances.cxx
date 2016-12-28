//
//---- generic 2D plot
//

void drawTwoNuisances() {
  
  
  TFile* _file0 = new TFile("higgsCombineLH2D_WWnorm0j_fake_syst_combined.MultiDimFit.mH120.root","READ"); 
  TTree* limit   = (TTree*) _file0->Get("limit");
  
  
  TCanvas* cc = new TCanvas ("cc","",800,600); 
  
  //----                                   X          Y
  TString whatToDraw = Form ("2*deltaNLL:WWnorm0j:fake_syst");
  
  TString cutToDraw = Form ("(deltaNLL<10)");
  
  std::cout << " whatToDraw = " << whatToDraw.Data() << std::endl;
  std::cout << " cutToDraw  = " << cutToDraw.Data() << std::endl;
  
  
  int n =  limit->Draw(whatToDraw.Data(),cutToDraw.Data(),"goff");
  
  TGraph2D *graphScan = new TGraph2D(n,limit->GetV2(),limit->GetV3(),limit->GetV1());
  graphScan->SetTitle("");
  graphScan->SetMarkerStyle(21);
  graphScan->SetMarkerColor(kRed);
  graphScan->SetLineColor(kRed);
  
  graphScan->Draw("colz");
  
  graphScan->GetXaxis()->SetTitle("WW norm 0 jet");
  graphScan->GetYaxis()->SetTitle("fake syst");
  graphScan->GetZaxis()->SetTitle("- 2#Delta logL");
  graphScan->GetZaxis()->SetRangeUser(0,10);
  
  //   graphScan->Draw("surf1");
  
  //---- 2D likelihood thresholds
  int dimension = 2;
  Double_t contours[2];
  if (dimension == 2) {
    contours[0] = 2.41;
    contours[1] = 5.99;
  }
  if (dimension == 3) {
    contours[0] = 3.67;
    contours[1] = 7.82;
  }
  
  //   graphScan->Draw("cont4z");
  graphScan->Draw("colz");
  graphScan->GetHistogram()->GetXaxis()->SetTitle("WW norm 0 jet");
  graphScan->GetHistogram()->GetYaxis()->SetTitle("fake syst");
  graphScan->GetHistogram()->GetZaxis()->SetTitle("- 2#Delta logL");
  // //   graphScan->Draw("cont4z");
  graphScan->Draw("colz");
  
  
  TCanvas* cc2 = new TCanvas ("cc2","",800,600); 
  cc2->SetRightMargin(0.15);
  
  graphScan->Draw("colz");
  //   graphScan->GetZaxis()->SetLabelOffset(0.2);
  
  TH2F* HistStreamFn_ph2 = (TH2F*) (graphScan->GetHistogram())->Clone("testhisto_ph2");
  HistStreamFn_ph2->SetContour(2, contours);
  HistStreamFn_ph2->SetLineWidth(2);
  HistStreamFn_ph2->SetLineStyle(2);
  HistStreamFn_ph2->Draw("CONT1 LIST SAME");
  
  //   gStyle->SetPadRightMargin(0.2);
  
  TGraph* cross11 = new TGraph();
  cross11->SetPoint(0,1,1);
  cross11->SetMarkerStyle(22);
  cross11->SetMarkerSize(2);
  cross11->SetMarkerColor(kBlack);
  cross11->SetLineColor(kBlack);
  
  cross11->Draw("P");
  
  
  
  float xmin;
  float ymin;
  
  limit->SetBranchAddress("WWnorm0j", &xmin );
  limit->SetBranchAddress("fake_syst", &ymin );
  
  limit->GetEntry(0);
  
  TGraph* crossMin = new TGraph();
  crossMin->SetPoint(0, xmin, ymin);
  crossMin->SetMarkerStyle(20);
  crossMin->SetMarkerSize(2);
  crossMin->SetMarkerColor(kRed);
  crossMin->SetLineColor(kRed);
  crossMin->SetLineWidth(3);
  
  crossMin->Draw("P");
  
  cc2->SetGrid();
  
  
}




