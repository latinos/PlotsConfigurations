//
//---- generic 2D plot
//

#include "tdrstyle.C"


void Draw2DLine(std::string xName = "r_{1}", std::string yName = "r_{3}", 
                std::string xNameVar = "r1", std::string yNameVar = "r3" , 
                std::string nameFile = "test" , std::string cut = "1", std::string folderName = "plot2DLL") {
  
  
  gStyle->SetOptStat(0);
  
  setTDRStyle();
  
  
  #include "TROOT.h"
  #include "TStyle.h"
  #include "TColor.h"
//   const Int_t __NRGBs = 2;
//   const Int_t __NCont = 255;
//   Double_t __stops[__NRGBs] = { 0.00, 1.00 };
//   Double_t __red[__NRGBs]   = { 1.00, 0.00 };
//   Double_t __green[__NRGBs] = { 1.00, 0.00 };
//   Double_t __blue[__NRGBs]  = { 1.00, 1.00 };
//   
//   TColor::CreateGradientColorTable(__NRGBs, __stops, __red, __green, __blue, __NCont);
//   gStyle->SetNumberContours(__NCont);
//   
//   
  
//   
//   red    = numpy.array( [ 1.00, 0.00] )
//   green  = numpy.array( [ 1.00, 0.00] )
//   blue   = numpy.array( [ 1.00, 1.00] )
//   length = numpy.array( [ 0.00, 1.00] )
//   number = len(red)
//   nb=255
//   ROOT.TColor.CreateGradientColorTable(number,length,red,green,blue,nb)
//   
  
  
  float minimum2DeltaLL = limit->GetMinimum("deltaNLL");
  std::cout << " shift = " << minimum2DeltaLL << std::endl;
  
  TCanvas* cc = new TCanvas ("cc","",800,600); 
  cc->SetRightMargin(0.19);
  
  TString whatToDraw = Form ("2*(deltaNLL-%f):%s:%s", minimum2DeltaLL, xNameVar.c_str(), yNameVar.c_str());
  
//   TString cutToDraw = Form ("((deltaNLL<10) *1 + (deltaNLL>=10)*10) && (%s)", cut.c_str());
  TString cutToDraw = Form ("((deltaNLL-%f)<10) && (%s)", minimum2DeltaLL, cut.c_str());
  
  std::cout << " whatToDraw = " << whatToDraw.Data() << std::endl;
  std::cout << " cutToDraw  = " << cutToDraw.Data() << std::endl;
  
  
  int n =  limit->Draw(whatToDraw.Data(),cutToDraw.Data(),"goff");
  
  TGraph2D *graphScan = new TGraph2D(n,limit->GetV2(),limit->GetV3(),limit->GetV1());
  graphScan->SetNpx(200);
  graphScan->SetNpy(200);
  
  graphScan->SetLineWidth(3);
    
  graphScan->SetTitle("");
//   graphScan->SetMarkerStyle(21);
//   graphScan->SetMarkerColor(kRed);
//   graphScan->SetLineColor(kRed);
  
  graphScan->Draw("colz");
  
  graphScan->GetXaxis()->SetTitle(xName.c_str());
  graphScan->GetYaxis()->SetTitle(yName.c_str());
  graphScan->GetZaxis()->SetTitle("- 2#Delta logL");
  graphScan->GetZaxis()->SetRangeUser(0,10);
  
  //   graphScan->Draw("surf1");
  
  //---- 2D likelihood thresholds
  Double_t contours[2];
  contours[0] = 2.41;
  contours[1] = 5.99;
  
  graphScan->GetHistogram()->GetXaxis()->SetTitle(xName.c_str());
  graphScan->GetHistogram()->GetYaxis()->SetTitle(yName.c_str());
  graphScan->GetHistogram()->GetZaxis()->SetTitle("- 2#Delta logL");
  graphScan->GetHistogram()->GetZaxis()->SetRangeUser(0,9.99);  
  
  TH2F* myHisto = (TH2F*) graphScan->GetHistogram()->Clone("myHisto");
  for (int i=0; i<myHisto->GetSize(); i++) {
    myHisto->SetBinContent(i+1, 0);
  }
  
  for (int i=0; i<graphScan->GetN(); i++) {
//     myHisto->Fill( graphScan->GetX()[i],  graphScan->GetY()[i],  graphScan->GetZ()[i]);
    myHisto->Fill( graphScan->GetX()[i],  graphScan->GetY()[i],  graphScan->GetZ()[i] + 0.001);
  }
  
  myHisto->Draw("colz");
  

  cc->SetGrid();
  
  TString nameImage = Form ("%s/%s.png", folderName.c_str(), nameFile.c_str());
  
//   TString nameImage = Form ("plot2DLL/%s.png", nameFile.c_str());
//   TString nameImage = Form ("plot2DLL_1jme/%s.png", nameFile.c_str());
//   TString nameImage = Form ("plot2DLL_1jem/%s.png", nameFile.c_str());
  cc->SaveAs(nameImage.Data());
  
  
  
  TCanvas* cc2 = new TCanvas ("cc2","",800,600); 
  cc2->SetRightMargin(0.19);
  graphScan->Draw("P");
  
//   graphScan->Draw("TRI1");
// //   graphScan->Draw("TRI");
// //   graphScan->Draw("TRI2");
// //   graphScan->Draw("CONT5");
//   graphScan->Draw("CONT4");
  
  
}



