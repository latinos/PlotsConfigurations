//
//---- generic 2D plot
//

void Draw1DImproved(std::string xName = "r_{1}", std::string xNameVar = "r1", int dimension = 2 , std::string cut = "1") {
  
  TCanvas* cc = new TCanvas ("cc","",800,600); 
  
  TString whatToDraw = Form ("2*deltaNLL:%s", xNameVar.c_str());

  TString cutToDraw = Form ("(deltaNLL<10) && (%s)", cut.c_str());
  
  std::cout << " whatToDraw = " << whatToDraw.Data() << std::endl;
  std::cout << " cutToDraw  = " << cutToDraw.Data() << std::endl;
 
  TTree* limit = (TTree*) _file0 -> Get("limit");
  
  int n =  limit->Draw(whatToDraw.Data(),cutToDraw.Data(),"goff");
  
  TGraph *graphScan = new TGraph(n,limit->GetV2(),limit->GetV1());
  graphScan->SetTitle("");
  graphScan->SetMarkerStyle(21);
  graphScan->SetMarkerColor(kRed);
  graphScan->SetLineColor(kRed);

  graphScan->Draw("APL");

  graphScan->GetXaxis()->SetTitle(xName.c_str());
  graphScan->GetYaxis()->SetTitle("- 2#Delta logL");
  graphScan->GetYaxis()->SetRangeUser(0,10);

  
  
}


