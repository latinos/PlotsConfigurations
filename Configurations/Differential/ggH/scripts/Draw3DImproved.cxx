//
//---- generic 3D plot
//

void Draw3DImproved(std::string xName = "r_{1}", std::string yName = "r_{2}", std::string zName = "r_{3}", std::string xNameVar = "r1", std::string yNameVar = "r2", std::string zNameVar = "r3" ) {
  
  TCanvas* cc = new TCanvas ("cc","",800,600); 
  
  
  TH3F *h3box = new TH3F("h3box","",10,-8,10,10,-8,10,10,0-8,10);
  
  
  TString whatToDraw = Form ("%s:%s:%s >> h3box", xNameVar.c_str(), yNameVar.c_str(), zNameVar.c_str());

  TString cutToDraw = Form ("1./(2*deltaNLL)*(deltaNLL<10)");
  
  std::cout << " whatToDraw = " << whatToDraw.Data() << std::endl;
  std::cout << " cutToDraw  = " << cutToDraw.Data() << std::endl;
  
  
  int n =  limit->Draw(whatToDraw.Data(),cutToDraw.Data(),"goff");
  
  h3box->SetFillColor(2);
  h3box->SetLineColor(2);
  h3box->SetMarkerColor(2);
  
  
//   h3box->Draw("glbox1");
//   h3box->Draw("ISO");
  h3box->Draw("BOX");
  
//   gStyle->SetCanvasPreferGL(1);
//   gStyle->SetPalette(1);
//   
//   h3box->Draw("glcol");
  
  
  h3box->GetXaxis()->SetTitle(xName.c_str());
  h3box->GetYaxis()->SetTitle(yName.c_str());
  h3box->GetZaxis()->SetTitle(zName.c_str());
   
  
}


