
using namespace std;

//structures

struct curves
{
    int nvar;
    TGraph * roc1 = new TGraph;
    TGraph * roc2 = new TGraph;
    TGraph * signif1 = new TGraph;
    TGraph * signif2 = new TGraph;
    TGraph * signif11 = new TGraph;
    TGraph * signif22 = new TGraph;
};

struct multicurves
{
    TMultiGraph * roc1 = new TMultiGraph;
    TMultiGraph * roc2 = new TMultiGraph;
    TMultiGraph * signif1 = new TMultiGraph;
    TMultiGraph * signif2 = new TMultiGraph;
};

// create structure

curves * create_curves ()
{
    curves * curve = new curves;
    return curve;
}

//create canvas

TCanvas * create_canva (int num)
{
    TCanvas * c = new TCanvas(Form("signif%d", 3 + num), "", 100, 200, 700, 500);
    return c;
}

// roc and significance curves generator

void roc_curve(TH1D * sig, TH1D * bkg, const char * namevar, curves * mycurves , multicurves * mymulticurves) {
    
    cout << "nvar: " << mycurves ->nvar <<endl;
    
    Color_t colour1 = 632 - (mycurves ->nvar)*20;
    Color_t colour2 = 880 - (mycurves ->nvar)*20;
    
    cout << "color1 " << colour1 << endl;
    cout << "color2 " << colour2 << endl;
        
    int N_sig = sig -> Integral();//Number of events (signal)
    int N_bkg = bkg -> Integral();//Number of events (background)
    int Nbin = sig -> GetNbinsX(); //we assume Nbin_sig = Nbin_bkg
    int sum_sig=0, sum_bkg=0;
    double eff_sig=1., eff_bkg=1.;
    double S1=double (N_sig) / sqrt(N_bkg);
    double S2=double (N_sig) / sqrt(N_bkg);
    
    for (int i=1; i<=Nbin; i++) {
        mycurves ->roc1 -> SetPoint(i, eff_bkg, eff_sig);
        mycurves ->roc2 -> SetPoint(i, 1-eff_bkg, 1-eff_sig);
        mycurves ->signif1 -> SetPoint(i, eff_sig, S1);
        mycurves ->signif2 -> SetPoint(i, 1-eff_sig, S2);
        mycurves ->signif11 -> SetPoint(i, sig->GetBinCenter(i), S1);
        mycurves ->signif22 -> SetPoint(i, sig->GetBinCenter(i), S2);
        sum_sig += sig -> GetBinContent(i);
        sum_bkg += bkg -> GetBinContent(i);
        eff_sig = double (N_sig - sum_sig) / N_sig;
        eff_bkg = double (N_bkg - sum_bkg) / N_bkg;
        S1 = double (N_sig - sum_sig) / sqrt(N_bkg - sum_bkg);
        S2 = double (sum_sig) / sqrt(sum_bkg);
    }
    
    mycurves -> roc1 -> SetMarkerStyle(20);
    mycurves -> roc1 -> SetMarkerSize(0.75);
    mycurves -> roc1 -> SetMarkerColor(colour1);
        
    mycurves -> roc2 -> SetMarkerStyle(20);
    mycurves -> roc2 -> SetMarkerSize(0.75);
    mycurves -> roc2 -> SetMarkerColor(colour1);
    
    mycurves -> signif1 -> SetMarkerStyle(20);
    mycurves -> signif1 -> SetMarkerSize(0.75);
    mycurves -> signif1 -> SetMarkerColor(colour1);   
    
    mycurves -> signif2 -> SetMarkerStyle(20);
    mycurves -> signif2 -> SetMarkerSize(0.75);
    mycurves -> signif2 -> SetMarkerColor(colour1);
    
    mycurves -> signif11 -> SetMarkerStyle(20);
    mycurves -> signif11 -> SetMarkerSize(0.75);
    mycurves -> signif11 -> SetMarkerColor(colour1);
    mycurves -> signif11 -> GetXaxis() -> SetTitleSize(0.05);
    mycurves -> signif11 -> GetXaxis() -> SetLabelSize(0.05);
    mycurves -> signif11 -> GetYaxis() -> SetTitleSize(0.05);
    mycurves -> signif11 -> GetYaxis() -> SetLabelSize(0.05);
    mycurves -> signif11 -> GetXaxis() -> SetTitleOffset(0.85);
    mycurves -> signif11 -> GetYaxis() -> SetTitleOffset(0.85);

    mycurves -> signif22 -> SetMarkerStyle(20);
    mycurves -> signif22 -> SetMarkerSize(0.75);
    mycurves -> signif22 -> SetMarkerColor(colour1);
    mycurves -> signif22 -> GetXaxis() -> SetTitleSize(0.05);
    mycurves -> signif22 -> GetXaxis() -> SetLabelSize(0.05);
    mycurves -> signif22 -> GetYaxis() -> SetTitleSize(0.05);
    mycurves -> signif22 -> GetYaxis() -> SetLabelSize(0.05);
    mycurves -> signif22 -> GetXaxis() -> SetTitleOffset(0.85);
    mycurves -> signif22 -> GetYaxis() -> SetTitleOffset(0.85);
 
    mymulticurves -> roc1 -> Add(mycurves ->roc1);
    mymulticurves -> roc2 -> Add(mycurves ->roc2);
    mymulticurves -> signif1 -> Add(mycurves ->signif1);
    mymulticurves -> signif2 -> Add(mycurves ->signif2);

    if (mycurves ->nvar == 0){
    
        mymulticurves -> roc1 -> SetTitle(" ; #varepsilon_{bkg}; #varepsilon_{sig} ");
        mymulticurves -> roc1 -> GetXaxis() -> SetTitleSize(0.05);
        mymulticurves -> roc1 -> GetXaxis() -> SetLabelSize(0.05);
        mymulticurves -> roc1 -> GetYaxis() -> SetTitleSize(0.05);
        mymulticurves -> roc1 -> GetYaxis() -> SetLabelSize(0.05);
        mymulticurves -> roc1 -> GetXaxis() -> SetTitleOffset(0.85);
        mymulticurves -> roc1 -> GetYaxis() -> SetTitleOffset(0.85);
        
        mymulticurves -> roc2 -> SetTitle(" ; 1- #varepsilon_{bkg}; 1- #varepsilon_{sig} ");
        mymulticurves -> roc2 -> GetXaxis() -> SetTitleSize(0.05);
        mymulticurves -> roc2 -> GetXaxis() -> SetLabelSize(0.05);
        mymulticurves -> roc2 -> GetYaxis() -> SetTitleSize(0.05);
        mymulticurves -> roc2 -> GetYaxis() -> SetLabelSize(0.05);
        mymulticurves -> roc2 -> GetXaxis() -> SetTitleOffset(0.85);
        mymulticurves -> roc2 -> GetYaxis() -> SetTitleOffset(0.85);
        
        mymulticurves -> signif1 -> SetTitle(" ; #varepsilon_{sig}; #Sigma_{1} ");
        mymulticurves -> signif1 -> GetXaxis() -> SetTitleSize(0.05);
        mymulticurves -> signif1 -> GetXaxis() -> SetLabelSize(0.05);
        mymulticurves -> signif1 -> GetYaxis() -> SetTitleSize(0.05);
        mymulticurves -> signif1 -> GetYaxis() -> SetLabelSize(0.05);
        mymulticurves -> signif1 -> GetXaxis() -> SetTitleOffset(0.85);
        mymulticurves -> signif1 -> GetYaxis() -> SetTitleOffset(0.85);
        
        mymulticurves -> signif2 -> SetTitle(" ; 1 - #varepsilon_{sig}; #Sigma_{2} ");
        mymulticurves -> signif2 -> GetXaxis() -> SetTitleSize(0.05);
        mymulticurves -> signif2 -> GetXaxis() -> SetLabelSize(0.05);
        mymulticurves -> signif2 -> GetYaxis() -> SetTitleSize(0.05);
        mymulticurves -> signif2 -> GetYaxis() -> SetLabelSize(0.05);
        mymulticurves -> signif2 -> GetXaxis() -> SetTitleOffset(0.85);
        mymulticurves -> signif2 -> GetYaxis() -> SetTitleOffset(0.85);
    
    }
    
};

// mkROC macro

void mkROC () {
    
    string file_in, subdirectory;
    cout << "insert *.root file name: ";
    cin >> file_in;   
    const char * filename = file_in.c_str();
    
    cout << "insert subdirectory name: ";
    cin >> subdirectory;
    const char * subd = subdirectory.c_str();
    
    vector <const char *> variables_name;
    vector <curves *> v_curves;
    
    int j = 0, c = 1;
    
    TCanvas * c1 = new TCanvas("roc1", "", 100, 200, 700, 500);
    TCanvas * c2 = new TCanvas("roc2", "", 100, 200, 700, 500);
    TCanvas * c3 = new TCanvas("signif1", "", 100, 200, 700, 500);
    TCanvas * c4 = new TCanvas("signif2", "", 100, 200, 700, 500);

    TH1D * histosgn;
    TH1D * histobkg;

    TFile * f = new TFile(filename);
    
    string ansv = "y";
    vector <string> variables;
    string variable;
    
    //variables cycle
    
    do {
        
        variable.clear();
        ansv.clear();
        
        cout << "insert variable name:" << endl;
        cin >> variable;
        variables.push_back(variable);
        
        cout << "Do you want to insert any other variable (y/n)?";
        cin >> ansv ;
            
        j ++;
        
    } while(ansv == "y");
    
    // names cycle
    
    for (int i = 0; i < variables.size();i++){
        
        variables_name.push_back(variables[i].c_str());
        cout << variables_name[i] << endl;
        
    }
    
    // structures cycle
    
    
    for (int i = 0; i < variables.size();i++){
        
        v_curves.push_back(create_curves ());
        v_curves[i] -> nvar = i;
        cout << "i " << v_curves[i] -> nvar << endl;
        
    }
    
    multicurves * mymulticurves = new multicurves;      //multigraph declaration
    
    gDirectory -> cd (subd);           //subdirectory
    
    string histo_sgn_name;
    string  histo_bkg_name;
    cout << "insert signal histo to analyze:" << endl;
    cin >> histo_sgn_name;
    cout << "insert bkg histo to analyze:" << endl;
    cin >> histo_bkg_name;
        
    const char * namesgn = histo_sgn_name.c_str();
    const char * namebkg = histo_bkg_name.c_str();

    //cycle on the variables
    
    for(int i = 0; i < variables_name.size(); i++){
        
        if (i != 0) gDirectory -> cd("../");
    
        gDirectory -> cd(variables_name[i]);
            
        histosgn = (TH1D*)gDirectory->Get(namesgn);
        histobkg = (TH1D*)gDirectory->Get(namebkg);
        
        cout << "i " << v_curves[i] -> nvar << endl;
        
        roc_curve(histosgn,histobkg, variables_name[i], v_curves[i], mymulticurves);
        
    }
    
    TLine * l = new TLine(0,0,1,1);
    l->SetLineStyle(9);
    l->SetLineColor(804);
    l->SetLineWidth(2);
        
    c1->cd();
    mymulticurves -> roc1 ->Draw("AP");
    l -> Draw("SAME");
    
    c2->cd();
    mymulticurves -> roc2 ->Draw("AP");
    l -> Draw("SAME");    
    
    c3->cd();
    mymulticurves -> signif1 ->Draw("AP");
    
    c4->cd();
    mymulticurves -> signif2 ->Draw("AP");
    
    const char * varname;
    
    TCanvas * c11;
    TCanvas * c22;
    
    for(int j = 0; j < variables.size(); j++) {
        
        varname = variables[j].c_str();
        
        c11 = create_canva(j);
        c11->cd();
        v_curves[j] -> signif11 -> GetXaxis() -> SetTitle(varname);
        v_curves[j] -> signif11 -> GetYaxis() -> SetTitle("#Sigma_{1}");
        v_curves[j] -> signif11 -> Draw("AP");
        
        c22 = create_canva(variables.size()*2 - 1 - j);
        c22->cd();
        v_curves[j] -> signif22 -> GetXaxis() -> SetTitle(varname);
        v_curves[j] -> signif22 -> GetYaxis() -> SetTitle("#Sigma_{2}");
        v_curves[j] -> signif22 -> Draw("AP");
    }
            
}
