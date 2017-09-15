using namespace std;

const int nProcesses = 16;

TString processes[16] = {"DY",
			 "Fake",
			 "H_htt",
			 "VVV",
			 "VZ",
			 "Vg",
			 "VgS",
			 "WH_hww",
			 "WW",
			 "ZH_hww",
			 "bbH_hww",
			 "ggH_hww",
			 "ggWW",
			 "ggZH_hww",
			 "qqH_hww",
			 "top"};

void macroYieldPostFit(TString massPoint = "600_300_",
		       TString variable  = "muccamva2HDMadaptFull_", 
		       TString dataset   = "SB"
		       ){

  TString inputFileName = "";
  inputFileName = "combine_em_MVA/mlfit_" + massPoint + variable + dataset + ".root"; //600_300_muccamva2HDMadaptFull_SB.root";
  
  TFile *f = new TFile(inputFileName,"read");

  TString prefitFolder = "";
  prefitFolder = "shapes_prefit/signal/";

  TString hSignalName = "";
  hSignalName = prefitFolder + "total_signal";

  TString hBackgroundName = "";
  hBackgroundName = prefitFolder + "total_background";


  TH1F* hSignal = (TH1F*) f -> Get(hSignalName);
  TH1F* hBackground = (TH1F*) f -> Get(hBackgroundName);

  TH1F* hBackgrounds[nProcesses];

  for (int i = 0; i < nProcesses; ++i){
    TString processName = prefitFolder + processes[i];
    hBackgrounds[i] = (TH1F*) f -> Get(processName);
  }

  Int_t nBins = 0;
  nBins = hSignal->GetNbinsX();

  TString caption = "";
  caption = "Yields for " + massPoint + " mass point, " + variable + " variable";
  if (dataset == "SB")
    caption = caption + " for a Asimov dataset considering all backgrounds and the presence of signal with r = 1.";

  //  cout<<setprecision(2);
  cout<<"\\begin{table}[h!]"<<endl;
  cout<<"\\begin{tabular}{cccccccccccccccccccccc}"<<endl;
  cout<<"\\hline"<<endl;
  cout<<"\\hline"<<endl;
  TString firstLines = "";
  firstLines = "Bin & Signal & All Backgrounds";
  for (int i = 0; i < nProcesses; ++i)
    firstLines = firstLines + " & " + processes[i];
  firstLines = firstLines + " & Significance \\\\";
  //  cout<<"Bin & Signal & All Backgrounds & Significance \\\\"<<endl;
  cout<<firstLines<<endl;
  cout<<"\\hline"<<endl;
  for (int i = 1; i < nBins + 1; ++i){
    Float_t significance = 0.;
    if (hSignal->GetBinContent(i) + hBackground->GetBinContent(i) != 0)
      significance = hSignal->GetBinContent(i) / sqrt(hSignal->GetBinContent(i) + hBackground->GetBinContent(i));
    cout<<i<<" & "<<hSignal->GetBinContent(i)<<" & "<<hBackground->GetBinContent(i);//<<" & "<<significance<<"\\\\"<<endl;
    for (int j = 0; j < nProcesses; ++j){
      cout<<" & "<<hBackgrounds[j]->GetBinContent(i);
    }
    cout<<" & "<<significance<<"\\\\"<<endl;
  }
  cout<<"\\hline"<<endl;
  cout<<"\\end{tabular}"<<endl;
  cout<<"\\caption{"<<caption<<"}"<<endl;
  cout<<"\\end{table}"<<endl;
}
