//
//---- generic 2D plot
//

void Draw2DImproved(std::string xName = "r_{1}", std::string yName = "r_{3}", std::string xNameVar = "r1", std::string yNameVar = "r3" , int dimension = 2 , std::string cut = "1") {
  
  
  gStyle->SetOptStat(0);
  
  
  
  #include "TROOT.h"
  #include "TStyle.h"
  #include "TColor.h"
  const Int_t __NRGBs = 2;
  const Int_t __NCont = 255;
  Double_t __stops[__NRGBs] = { 0.00, 1.00 };
  Double_t __red[__NRGBs]   = { 1.00, 0.00 };
  Double_t __green[__NRGBs] = { 1.00, 0.00 };
  Double_t __blue[__NRGBs]  = { 1.00, 1.00 };
  
  TColor::CreateGradientColorTable(__NRGBs, __stops, __red, __green, __blue, __NCont);
  gStyle->SetNumberContours(__NCont);
  
  
  
//   
//   red    = numpy.array( [ 1.00, 0.00] )
//   green  = numpy.array( [ 1.00, 0.00] )
//   blue   = numpy.array( [ 1.00, 1.00] )
//   length = numpy.array( [ 0.00, 1.00] )
//   number = len(red)
//   nb=255
//   ROOT.TColor.CreateGradientColorTable(number,length,red,green,blue,nb)
//   
  
  
  
  TCanvas* cc = new TCanvas ("cc","",800,600); 
  
  TString whatToDraw = Form ("2*deltaNLL:%s:%s", xNameVar.c_str(), yNameVar.c_str());
  
//   TString cutToDraw = Form ("((deltaNLL<10) *1 + (deltaNLL>=10)*10) && (%s)", cut.c_str());
  TString cutToDraw = Form ("(deltaNLL<10) && (%s)", cut.c_str());
  
  std::cout << " whatToDraw = " << whatToDraw.Data() << std::endl;
  std::cout << " cutToDraw  = " << cutToDraw.Data() << std::endl;
  
  
  int n =  limit->Draw(whatToDraw.Data(),cutToDraw.Data(),"goff");
  
  TGraph2D *graphScan = new TGraph2D(n,limit->GetV2(),limit->GetV3(),limit->GetV1());
  graphScan->SetTitle("");
  graphScan->SetMarkerStyle(21);
  graphScan->SetMarkerColor(kRed);
  graphScan->SetLineColor(kRed);
  
  graphScan->Draw("colz");
  
  graphScan->GetXaxis()->SetTitle(xName.c_str());
  graphScan->GetYaxis()->SetTitle(yName.c_str());
  graphScan->GetZaxis()->SetTitle("- 2#Delta logL");
  graphScan->GetZaxis()->SetRangeUser(0,10);
  
  //   graphScan->Draw("surf1");
  
  //---- 2D likelihood thresholds
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
  graphScan->GetHistogram()->GetXaxis()->SetTitle(xName.c_str());
  graphScan->GetHistogram()->GetYaxis()->SetTitle(yName.c_str());
  graphScan->GetHistogram()->GetZaxis()->SetTitle("- 2#Delta logL");
  // //   graphScan->Draw("cont4z");
  graphScan->GetHistogram()->GetZaxis()->SetRangeUser(0,9.99);  
  
  for (int i=0; i<graphScan->GetHistogram()->GetSize(); i++) {
//     std::cout << " [ " << i << " ] = " << graphScan->GetHistogram()->GetBinContent(i+1) << std::endl;
    if (graphScan->GetHistogram()->GetBinContent(i+1) == 0) { 
      graphScan->GetHistogram()->SetBinContent(i+1, 100);
    }
  }
  
  graphScan->Draw("colz");
  

  
  TCanvas* cc2 = new TCanvas ("cc2","",800,600); 
  cc2->SetRightMargin(0.15);
 
  graphScan->Draw("contz");
  graphScan->Draw("colz");
  
  //   graphScan->GetZaxis()->SetLabelOffset(0.2);
  
  
  TH2F* HistStreamFn_ph2 = (TH2F*) (graphScan->GetHistogram())->Clone("testhisto_ph2");
  HistStreamFn_ph2->SetContour(2, contours);
  HistStreamFn_ph2->SetLineWidth(2);
  HistStreamFn_ph2->SetLineStyle(2);
//   HistStreamFn_ph2->GetZaxis()->SetRangeUser(0,9.99);  
  HistStreamFn_ph2->Draw("CONT1 LIST SAME");
  
//   gStyle->SetPadRightMargin(0.2);
  
  TGraph* cross11 = new TGraph();
  cross11->SetPoint(0,1,1);
  cross11->SetMarkerStyle(22);
  cross11->SetMarkerSize(2);
  cross11->SetMarkerColor(kBlack);
  cross11->SetLineColor(kBlack);
  
  cross11->Draw("P");

  
  
   

  
//   int ix,iy,iz;
//   graphScan->GetHistogram()->GetMinimumBin(ix,iy,iz);
//   double xmin = graphScan->GetHistogram()->GetXaxis()->GetBinCenter(ix);
//   double ymin = graphScan->GetHistogram()->GetYaxis()->GetBinCenter(iy);

//   std::cout << "xmin = " << xmin << std::endl;
//   std::cout << "ymin = " << ymin << std::endl;
  
  
  float xmin;
  float ymin;
  
  limit->SetBranchAddress(xNameVar.c_str(), &xmin );
  limit->SetBranchAddress(yNameVar.c_str(), &ymin );
  
  limit->GetEntry(0);
  
  std::cout << " min x,y = " << xmin << "  ,  " << ymin << std::endl;
  
  TGraph* crossMin = new TGraph();
  crossMin->SetPoint(0, xmin, ymin);
  crossMin->SetMarkerStyle(20);
  crossMin->SetMarkerSize(2);
  crossMin->SetMarkerColor(kRed);
  crossMin->SetLineColor(kRed);
  crossMin->SetLineWidth(3);
  
  crossMin->Draw("P");
  
//   cc2->SetGrid();
  
  
  
  
  //---- fix Z-axis (begin)
  cc2->Update();
//   TPaletteAxis *palette = (TPaletteAxis*) graphScan->GetListOfFunctions()->FindObject("palette");
  
  // the following lines move the paletter. Choose the values you need for the position.
  
//   std::cout << " palette = " << palette << std::endl;
  
//   palette->SetX1NDC(0.9);
//   palette->SetX2NDC(0.95);
//   palette->SetY1NDC(0.2);
//   palette->SetY2NDC(0.8);
//   cc2->Modified();
//   cc2->Update();
  //---- fix Z-axis (end)
  
  
  
  
  
}






// //
// //---- generic 2D plot
// //
// 
// void Draw2DImproved(std::string xName = "#mu_{ggH}", std::string yName = "#mu_{VBF/VH}", std::string xNameVar = "muGGH", std::string yNameVar = "muVBF"  ) {
//   
//   TCanvas* cc = new TCanvas ("cc","",800,600); 
//   
//   TString whatToDraw = Form ("2*deltaNLL:%s:%s", xNameVar.c_str(), yNameVar.c_str());
// 
//   int n =  limit->Draw(whatToDraw.Data(),"deltaNLL<10","goff");
//   
//   TGraph2D *graphScan = new TGraph2D(n,limit->GetV2(),limit->GetV3(),limit->GetV1());
//   graphScan->SetTitle("");
//   graphScan->SetMarkerStyle(21);
//   graphScan->SetMarkerColor(kRed);
//   graphScan->SetLineColor(kRed);
// 
//   graphScan->Draw("colz");
// 
//   graphScan->GetXaxis()->SetTitle(xName.c_str());
//   graphScan->GetYaxis()->SetTitle(yName.c_str());
//   graphScan->GetZaxis()->SetTitle("- 2#Delta logL");
//   graphScan->GetZaxis()->SetRangeUser(0,10);
//   
// //   graphScan->Draw("surf1");
// 
//   //---- 2D likelihood thresholds
//   Double_t contours[2];
//   contours[0] = 1;
//   contours[1] = 3.84;
//     
// //   graphScan->Draw("cont4z");
//   graphScan->Draw("colz");
//   graphScan->GetHistogram()->GetXaxis()->SetTitle(xName.c_str());
//   graphScan->GetHistogram()->GetYaxis()->SetTitle(yName.c_str());
//   graphScan->GetHistogram()->GetZaxis()->SetTitle("- 2#Delta logL");
// // //   graphScan->Draw("cont4z");
//   graphScan->Draw("colz");
//   
// 
//   TCanvas* cc2 = new TCanvas ("cc2","",800,600); 
//   cc2->SetRightMargin(0.15);
// 
//   graphScan->Draw("colz");
//   
//   TH2F* HistStreamFn_ph2 = (TH2F*) (graphScan->GetHistogram())->Clone("testhisto_ph2");
//   HistStreamFn_ph2->SetContour(2, contours);
//   HistStreamFn_ph2->SetLineWidth(2);
//   HistStreamFn_ph2->SetLineStyle(2);
//   HistStreamFn_ph2->Draw("CONT1 LIST SAME");
//   
// //   gStyle->SetPadRightMargin(0.2);
//   
//   cc2->SetGrid();
//   
//   
// }
// 
// 
