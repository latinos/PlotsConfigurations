//
//---- generic 2D plot
//

#include "tdrstyle.C"


void Draw2DImproved(std::string xName = "r_{1}", std::string yName = "r_{3}", std::string xNameVar = "r1", std::string yNameVar = "r3" , int dimension = 2 , std::string cut = "1", int FillHighLL = 1) {
  
  
  gStyle->SetOptStat(0);
  
  setTDRStyle();
  
  
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
  
  
  
  TCanvas* cc3 = new TCanvas ("cc3","",800,600); 
  
//   TString whatToDraw = Form ("2*deltaNLL:%s:%s", xNameVar.c_str(), yNameVar.c_str());
  TString whatToDraw = Form ("%s:%s:2*deltaNLL", xNameVar.c_str(), yNameVar.c_str());
  
//   TString cutToDraw = Form ("((deltaNLL<10) *1 + (deltaNLL>=10)*10) && (%s)", cut.c_str());
  TString cutToDraw = Form ("(deltaNLL<20) && (%s)", cut.c_str());
  
  std::cout << " whatToDraw = " << whatToDraw.Data() << std::endl;
  std::cout << " cutToDraw  = " << cutToDraw.Data() << std::endl;
  
  
//   int n =  limit->Draw(whatToDraw.Data(),cutToDraw.Data(),"goff");
  int n =  limit->Draw(whatToDraw.Data(),cutToDraw.Data(), "colz");
  
  TCanvas* cc = new TCanvas ("cc","",800,600); 
  
  
  TGraph2D *graphScan = new TGraph2D(n,limit->GetV1(),limit->GetV2(),limit->GetV3());
//   TGraph2D *graphScan = new TGraph2D(n,limit->GetV2(),limit->GetV3(),limit->GetV1());
  graphScan->SetTitle("");
  graphScan->SetMarkerStyle(21);
  graphScan->SetMarkerColor(kRed);
  graphScan->SetLineColor(kRed);
  
  graphScan->Draw("colz");
  
  graphScan->GetXaxis()->SetTitle(xName.c_str());
  graphScan->GetYaxis()->SetTitle(yName.c_str());
  graphScan->GetZaxis()->SetTitle("- 2#Delta logL");
  graphScan->GetZaxis()->SetRangeUser(0,19.99);
  
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
  graphScan->GetHistogram()->GetZaxis()->SetRangeUser(0,19.99); 
  graphScan->GetHistogram()->GetXaxis()->SetRangeUser(-2,2);
  graphScan->GetHistogram()->GetYaxis()->SetRangeUser(0,2);
  
  if (FillHighLL) {
    for (int i=0; i<graphScan->GetHistogram()->GetSize(); i++) {
      //     std::cout << " [ " << i << " ] = " << graphScan->GetHistogram()->GetBinContent(i+1) << std::endl;
      if (graphScan->GetHistogram()->GetBinContent(i+1) == 0) { 
        graphScan->GetHistogram()->SetBinContent(i+1, 100);
      }
    }
  }
  
  graphScan->Draw("colz");
  

  
  TCanvas* cc2 = new TCanvas ("cc2","",800,600); 
//   cc2->SetRightMargin(0.15);
  cc2->SetRightMargin(0.19);
  
  graphScan->Draw("contz");
  graphScan->Draw("colz");
  
  //   graphScan->GetZaxis()->SetLabelOffset(0.2);
  
  
  TH2F* HistStreamFn_ph2 = (TH2F*) (graphScan->GetHistogram())->Clone("testhisto_ph2");
  HistStreamFn_ph2->SetContour(2, contours);
  HistStreamFn_ph2->SetLineWidth(2);
  HistStreamFn_ph2->SetLineStyle(2);
//   HistStreamFn_ph2->GetZaxis()->SetRangeUser(0,9.99);  
  HistStreamFn_ph2->Draw("CONT1 LIST SAME");
  
  
  cc->cd();  
  HistStreamFn_ph2->Draw("CONT Z LIST");
  cc->Update();
  TObjArray *conts = (TObjArray*) gROOT->GetListOfSpecials()->FindObject("contours");
  std::cout << " conts = " << conts << std::endl;
  std::cout << " conts->GetSize() = " << conts->GetSize() << std::endl;
  TGraph* gr_1sigma = (TGraph*) ( ((TList*) conts->At(0))->First());
  TGraph* gr_2sigma = (TGraph*) ( ((TList*) conts->At(1))->First());
  
  
  gr_1sigma->SetLineWidth(2);
  gr_1sigma->SetLineStyle(1);
  gr_1sigma->SetLineColor(1);
  
  
  gr_2sigma->SetLineWidth(2);
  gr_2sigma->SetLineStyle(7);
  gr_2sigma->SetLineColor(1);
  
  
   
  
  cc2->cd();
  
  gr_1sigma->Draw("L");
  gr_2sigma->Draw("L");
  
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
  
  
  
  TLegend* leg = new TLegend (0.60,0.70,0.80,0.85);
  leg->SetBorderSize(1);
  leg->AddEntry(gr_1sigma,"1 #sigma","l");
  leg->AddEntry(gr_2sigma,"2 #sigma","l");
  leg->AddEntry(crossMin,"Best fit","P");
  leg->AddEntry(cross11,"SM","P");
  leg->Draw();
  
  
  
  
  
  //---- draw cms preliminary and similar
  
  cc2->SetTicks();
//   cc2->SetFillColor(0);
//   cc2->SetBorderMode(0);
//   cc2->SetBorderSize(2);
//   cc2->SetTickx(1);
//   cc2->SetTicky(1);
//   cc2->SetRightMargin(0.05);
//   cc2->SetBottomMargin(0.12);
//   cc2->SetFrameBorderMode(0);
  cc2->SetTopMargin(0.12);
  
  TLatex * tex;
//   tex = new TLatex(0.94,0.92,"13 TeV");
  tex = new TLatex(0.80,0.92,"13 TeV");
  tex->SetNDC();
  tex->SetTextAlign(31);
  tex->SetTextFont(42);
  tex->SetTextSize(0.04);
  tex->SetLineWidth(2);
  
//   TLatex * tex2 = new TLatex(0.14,0.92,"CMS Preliminary");
  TLatex * tex2 = new TLatex(0.16,0.92,"CMS");
  tex2->SetNDC();
  tex2->SetTextFont(61);
  tex2->SetTextSize(0.04);
  tex2->SetLineWidth(2);

  TLatex * texPre = new TLatex(0.23,0.92,"Preliminary");
  texPre->SetNDC();
  texPre->SetTextFont(52);
  texPre->SetTextSize(0.035);
  texPre->SetLineWidth(2);
  
  TLatex * tex3;
//   tex3 = new TLatex(0.236,0.92,"L = 12.9 fb^{-1}  Preliminary");
//   tex3 = new TLatex(0.236,0.92,"L = 15.2 fb^{-1}");
    tex3 = new TLatex(0.55,0.92,"L = 35.9 fb^{-1}   (13 TeV)");
  //   tex3 = new TLatex(0.55,0.92,"L = 2.3 fb^{-1}   (13 TeV)");
//     tex3 = new TLatex(0.55,0.92,"L = 12.9 fb^{-1}   (13 TeV)");
  tex3->SetNDC();
  tex3->SetTextFont(52);
  tex3->SetTextSize(0.035);
  tex3->SetLineWidth(2);
  
//   tex->Draw("same");
  tex2->Draw("same");
  texPre->Draw("same");
  tex3->Draw("same");
  
  
  
  
  
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
  
  
  cc2->SaveAs("cc2.png");
  
  
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
