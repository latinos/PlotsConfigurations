float getCorrelation(char* nuis1, char* nuis2){

  RooFitResult* fit_s;
  fit_s = (RooFitResult*) _file0->Get("fit_s");
  std::cout << "Correlation between nuisances " << nuis1 << " and " << nuis2 << " = " << fit_s->correlation(nuis1, nuis2) << std::endl;
  return fit_s->correlation(nuis1, nuis2);

}

void correlationMatrix() {

  float H_ref = 1200;
  float W_ref = 1200;
  float W = W_ref;
  float H = H_ref;
  
  float T = 0.08*H_ref; 
  float B = 0.30*H_ref;//0.12
  float L = 0.30*W_ref;//0.14
  float R = 0.14*W_ref;
  
  TCanvas* canvas = new TCanvas("c2","c2",50,50,W,H);
  canvas->SetFillColor(0);
  canvas->SetBorderMode(0);
  canvas->SetFrameFillStyle(0);
  canvas->SetFrameBorderMode(0);
  canvas->SetLeftMargin( L/W );
  canvas->SetRightMargin( R/W );
  canvas->SetTopMargin( T/H );
  canvas->SetBottomMargin( B/H );
  canvas->SetTickx(0);
  canvas->SetTicky(0);



  RooFitResult* fit_s;
  fit_s = (RooFitResult*) _file0->Get("fit_s");
  
  std::vector<std::string> nuisances;
  
  nuisances.push_back("r_0");
  nuisances.push_back("r_1");
  nuisances.push_back("r_2");
  nuisances.push_back("r_3");
  nuisances.push_back("r_4");

  TH2F* corMatrix = new TH2F("corMatrix","corMatrix",nuisances.size(),0,nuisances.size(),nuisances.size(),0,nuisances.size());

  for (int inuis = 0; inuis < nuisances.size(); inuis++) {
    for (int jnuis = 0; jnuis < nuisances.size(); jnuis++) {
      double cor = fit_s->correlation(nuisances.at(inuis).c_str(),nuisances.at(jnuis).c_str());//nuisances.at(inuis),nuisances.at(jnuis)); 
      corMatrix->SetBinContent(inuis+1, jnuis+1, cor);
    }
  }

  gStyle->SetPaintTextFormat("4.1f");

  corMatrix->SetStats(0);
  corMatrix->SetTitle("");
  corMatrix->GetXaxis()->SetLabelOffset(99);
  corMatrix->GetYaxis()->SetLabelOffset(99);
  corMatrix->Draw("colz text");

  TLatex* xlabels = new TLatex();
  xlabels->SetTextSize(0.021);
  xlabels->SetTextAngle(90);
  xlabels->SetTextAlign(32);

  for (int i=0; i < nuisances.size(); ++i){
    double y = gPad->GetUymin() - 0.5*corMatrix->GetYaxis()->GetBinWidth(i+1);
    double x = corMatrix->GetXaxis()->GetBinCenter(i+1);
    cout << nuisances.at(i).c_str() << endl;
    xlabels->DrawLatex(x,y,nuisances.at(i).c_str());
  }

  TLatex* ylabels = new TLatex();
  ylabels->SetTextSize(0.021);
  ylabels->SetTextAngle(0);
  ylabels->SetTextAlign(32);

  for (int j=0; j < nuisances.size(); ++j){
    double x = gPad->GetUxmin() - 0.5*corMatrix->GetXaxis()->GetBinWidth(j+1);
    double y = corMatrix->GetXaxis()->GetBinCenter(j+1);
    ylabels->DrawLatex(x,y,nuisances.at(j).c_str());
  }


}



