
void checkSystsAboveThreshold(TString cat, TString sample, double threshold = 1.) {

   cout << cat << " " << sample << " " << endl;
   float nominal=0;
   TH1* hnom = NULL;
   int nbins = 0;
   TRegexp re1("histo_"+sample+".*");
   TRegexp re2("histo_"+sample+"_.*");
   //TRegexp re("histo_/^("+sample+"|"+sample+"_.*)$/");

   TIter keyList(gDirectory->GetListOfKeys());
   TKey *key;
   while ((key = (TKey*)keyList())) {
      TClass *cl = gROOT->GetClass(key->GetClassName());
      if (!cl->InheritsFrom("TH1")) continue;
      TString title = key->GetTitle();

      if ( !(title.Contains(re1)) && !(title.Contains(re2)))  continue;

      if (title == "histo_"+sample){
        hnom = (TH1*)key->ReadObj();
        nbins = hnom->GetNbinsX();
        continue;
      }
     
      for (int ibin=1; ibin<=nbins; ibin++){
                if (hnom->GetBinContent(ibin) == 0) continue;
                TH1 *h2 = (TH1*)key->ReadObj();
                double nuisance = abs(1-h2->GetBinContent(ibin)/hnom->GetBinContent(ibin));
                if (nuisance>threshold){
                  cout << cat << " " << sample << " " << title.ReplaceAll("histo_","") << " bin " << ibin << " above threshold!!! ---> " << nuisance << " --> " << h2->GetBinContent(ibin) << "/" << hnom->GetBinContent(ibin) << endl; 
                }
  	      //cout << sample << "/" << title.ReplaceAll("histo_","") << " = " << nominal/h->Integral() << endl;
     }
   }
}

void checkSysts(TString file){

        double threshold = 1;
 
        TFile *f1 = TFile::Open(file);

	TString samples[9] = {"top","WW","DY","Fake_em","Fake_me","Vg","VgS"};
        TString cats[1] = {"hww2l2v_13TeV_me_pm_0j_pt2lt20"};
        TString variables[1] = {"mllVSmth_pt2lt20"};

        int ncats = (sizeof(cats)/sizeof(*cats));
	int nsamples = (sizeof(samples)/sizeof(*samples)); 
        int nvars = (sizeof(variables)/sizeof(*variables));

        for (int c=0; c<ncats; ++c){
          for (int v=0; v<nvars; ++v){     
                f1->cd();
                gDirectory->cd(cats[c]+"/"+variables[v]);
		cout << "---------------------------------" << endl;
		cout << "------- " << cats[c] << " " << variables[v] << " --------" << endl;
		cout << "---------------------------------" << endl;
		for (int s=0; s<nsamples; ++s){
			cout << "### " << samples[s] << " ### " << endl;
			checkSystsAboveThreshold(cats[c],samples[s],threshold);
		}
          }
	}
}


