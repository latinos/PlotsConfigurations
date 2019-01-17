void covarianceMatrix(){

	RooFitResult *fit_s=(RooFitResult*)_file0->Get("fit_s");
	
	std::vector<std::string> nuisances;
  
	nuisances.push_back("r_0");
	nuisances.push_back("r_1");
	nuisances.push_back("r_2");
	nuisances.push_back("r_3");
	nuisances.push_back("r_4");
  
	RooArgSet POIs=RooArgSet("POIs");
  
	for(int i=0;i<nuisances.size();i++){
  
		POIs.add( (RooRealVar&)fit_s->floatParsFinal()[fit_s->floatParsFinal().index(nuisances.at(i).c_str())] );
  
	}
  
	TMatrixDSym Vxx=fit_s->reducedCovarianceMatrix(POIs);
  
	TH2F* covMatrix = new TH2F("covMatrix","covMatrix",nuisances.size(),0,nuisances.size(),nuisances.size(),0,nuisances.size());

	for (int inuis = 0; inuis < nuisances.size(); inuis++) {
		for (int jnuis = 0; jnuis < nuisances.size(); jnuis++) {
    
			covMatrix->SetBinContent(jnuis+1,inuis+1,Vxx[inuis][jnuis]);
    
		}
	}
  
	covMatrix->SetStats(0);
	covMatrix->GetXaxis()->SetTitle("njet gen");
	covMatrix->GetYaxis()->SetTitle("njet gen");
	covMatrix->Draw("coltext");
 
//////////////// Global correlation coefficients calculation //////////////////
  
	TMatrixDSym Vxx_inv = Vxx;
	Vxx_inv.Invert();
  
	std::vector<float> global_corr;
  
	for (int i=0;i<nuisances.size();i++) {
  
		global_corr.push_back(sqrt(1-1./(Vxx_inv[i][i]*Vxx[i][i])));
  	
	}
  
	float mean_global_corr=0;
	float max_global_corr=0;
  
	for(int i=0;i<nuisances.size();i++){
  
		if(global_corr[i]>max_global_corr) max_global_corr=global_corr[i];
		mean_global_corr+=global_corr[i];
  
	}
  
	mean_global_corr=mean_global_corr/nuisances.size();
  
	cout << "Maximum global correlation: " << max_global_corr << endl;
	cout << "Mean global correlation: " << mean_global_corr << endl;


}
