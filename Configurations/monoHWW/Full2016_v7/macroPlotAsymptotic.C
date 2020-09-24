/*

root -l -b -q 'macroPlotAsymptotic.C("","em","muccamvaDHadaptFull_All_Bin800","MVA","DH")'
root -l -b -q 'macroPlotAsymptotic.C("","em","muccamvaDHadaptFull_All_Bin800_blind","MVA","DH")'

root -l -b -q 'macroPlotAsymptotic.C("","em","muccamvaZbaradaptFull_All_Bin100","MVA","Zbar")'
root -l -b -q 'macroPlotAsymptotic.C("","em","muccamvaZbaradaptFull_All_Bin100_blind","MVA","Zbar")'


root -l -b -q 'macroPlotAsymptotic.C("","sf_Tight","muccamvaDHadaptFull_All_Bin800_Bis","MVA","DH")'
root -l -b -q 'macroPlotAsymptotic.C("","sf_Tight","muccamvaDHadaptFull_All_Bin800_Bis_blind","MVA","DH")'

root -l -b -q 'macroPlotAsymptotic.C("","sf_Tight","muccamvaZbaradaptFull_All_Bin100_Bis","MVA","Zbar")'
root -l -b -q 'macroPlotAsymptotic.C("","sf_Tight","muccamvaZbaradaptFull_All_Bin100_Bis_blind","MVA","Zbar")'

*/
#include <Riostream.h>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include "TTree.h"
#include "TH1D.h"
#include "TFile.h"
#include "TROOT.h"
#include "TGraphAsymmErrors.h"
#include "TCanvas.h"
#include "TLine.h"
#include "TLatex.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TPaveText.h"
#define nXm_DH 10    //darkHiggs

using namespace std;

float intLumi = 35.9;
const string dirXSect = "./";

void plot_Asymptotic();
void setFPStyle();
void scaleGraph(TGraphAsymmErrors* g, double factor)
{
  int npoints = g->GetN();
  for(int i=0; i!=npoints; ++i) {
    double x = g->GetX()[i];
    double y = g->GetY()[i];
    double eyh = g->GetEYhigh()[i];
    double eyl = g->GetEYlow()[i];
    y = (y*factor);
    eyh = (eyh*factor);
    eyl = (eyl*factor);
    g->SetPoint(i,x,y);
    g->SetPointEYhigh(i, eyh);
    g->SetPointEYlow(i, eyl);
  }

}

double expo_interp(double s2, double s1,  double newM, double m2, double m1)
{
  if (m1 > m2) {
    double tmps = s1;
    double tmpm = m1;
    s1 = s2;
    m1 = m2;
    s2 = tmps;
    m2 = tmpm;
  }
  double deltaM = m2 - m1;
  double alpha = (log(s2) - log(s1)) / deltaM;
  double newS = s1 * pow(exp(newM - m1), alpha);
  return newS;
}



double linear_interp(double s2, double s1, double mass, double m2, double m1)
{
  if (m1 > m2) {
    double tmps = s1;
    double tmpm = m1;
    s1 = s2;
    m1 = m2;
    s2 = tmps;
    m2 = tmpm;
  }
  return (s1 + (s2 - s1) * (mass - m1) / (m2 - m1));
}



void macroPlotAsymptotic(TString outputdir,
			 TString mode, // add "_blind" to get results with 2.4/fb
			 TString model = "DH",
			 TString mhs = "160",
			 TString mDM = "100"
			 )
{
  //bool obs=false;
  // bool obs=false;
  // if (variable.Contains("blind")){
  //   obs=true;
  //   intLumi = 2.39;
  //   cout<<"blind!!!"<<endl;
  // }
  TString outfilename = outputdir + ".root";
  TFile *fout = new TFile(outfilename,"RECREATE");
  bool useNewStyle = true;
  if (useNewStyle)  setFPStyle();
//  gROOT->LoadMacro("CMS_lumi.C");
 
  int nXm;
  if (model == "DH") nXm = nXm_DH;

  TFile *fFREQ[nXm];
  TTree *t[nXm];


  int XmassDH[nXm_DH]={195,200,295,300,400,500,800,1000,1200,1500};   // DH
  TString massDH[nXm_DH]={"195","200","295","300","400","500","800","1000","1200","1500"};   // DH

  int Xmass[nXm];
  if (model == "DH"){
    for (int x = 0; x < nXm; ++x)
      Xmass[x] = XmassDH[x];
  }

  vector<double> v_mh, v_median, v_68l, v_68h, v_95l, v_95h, v_obs;
 
  for(int n=0;n<nXm;n++)
  {
    TString limitfilename;
    if (Xmass[n] == 0) continue;
    if (model == "DH")
      limitfilename = "higgsCombineDH_mhs_" + mhs + "_mx_" + mDM + "_mZp_" + massDH[n]  + ".AsymptoticLimits.mH120.root";
    cout << "Hola" << endl;
    TString limitfile = /*outputdir+"/"+*/limitfilename;
    fFREQ[n] = new TFile(limitfile, "READ");
    cout<<" Read limit file: "<<limitfile<<endl;
    t[n] = (TTree*)fFREQ[n]->Get("limit");
    cout << "Hola2" << endl;
  
    double mh, limit;
    float quant;
    t[n]->SetBranchAddress("mh", &mh);
    t[n]->SetBranchAddress("limit", &limit);
    t[n]->SetBranchAddress("quantileExpected", &quant);
    cout << "Hola3" << endl;
    
    
    //int iMH = 0;
    //while (iMH < n) {
 
      for (int i = 0; i < t[n]->GetEntries(); i++) {

        t[n]->GetEntry(i);

        cout<<" quant : "<<quant<<" limit : " <<limit<<endl;
        /// Map: mh --> observed, 95low, 68low, expected, 68hi, 95hi, xsec
        if (quant > -1.01 && quant < -0.99) {
        v_obs.push_back(limit);
        } 
        else if (quant > 0.02 && quant < 0.03) {
	v_95l.push_back(limit);
        }
        else if (quant > 0.15 && quant < 0.17) {
	v_68l.push_back(limit);
        }
        else if (quant > 0.49 && quant < 0.51) {
	v_median.push_back(limit);
        v_mh.push_back(mh);
        }
        else if (quant > 0.83 && quant < 0.85) {
	v_68h.push_back(limit);
        }
        else if (quant > 0.965 && quant < 0.98) {
	v_95h.push_back(limit);
        }
        else {
        cout << "Error! Quantile =  " << quant << endl;
        }
     }
	//     }//end while loop

  }//file loop

  std::cout<<" extraction done "<<std::endl;
  //string xsect_file_th = dirXSect + "xsec_MonoHTheory_ForComparison.txt";
  //string xsect_file_th = dirXSect + "xsec_MonoHTheory_ForBBResolved.txt";
  //string xsect_file_th = dirXSect + "xsec_MonoHTheory_ForZZ.txt";
  //string xsect_file_th = dirXSect + "xsec_MonoHTheory_comb.txt";
  //string xsect_file_th = dirXSect + "xsec_MonoHTheoryDH.txt";
  string xsect_file_th;
  if (model == "DH")
    xsect_file_th = dirXSect + "xsec_DHTheory.txt";
  std::cout<<" debug_1"<<std::endl;

  ifstream xsect_file(xsect_file_th.c_str(), ios::in);
  if (! xsect_file.is_open()) {
    cout << "Failed to open file with xsections: " << xsect_file_th << endl;
  }
  std::cout<<" debug_2"<<std::endl;
  float mH, CS;
  vector<float> v_mhxs, v_xs, v_toterrh, v_toterrl;
  //  while (!xsect_file.eof()) {
  while (xsect_file.good()) {
    xsect_file >> mH >> CS;
    std::cout<<" debug_3"<<std::endl;
    v_mhxs.push_back(mH);
    std::cout<<" debug_4"<<std::endl;
    v_xs.push_back(CS);//*BRZZ2l2q (multyply by BRZZ2l2q only if exp rates in cards are for process X->ZZ->2l2q !)
    
    std::cout<<" mH = "<<mH 
	     <<" CS = "<<CS
	     <<std::endl;
    //unavailable theory errors for graviton

    float tot_err_p = 0.0;
    float tot_err_m = 0.0;

    v_toterrh.push_back(1.0 + (tot_err_p));
    v_toterrl.push_back(1.0 - (tot_err_m));
  }
  cout << "Size of theory xsects vector" << v_mhxs.size() << endl;
  xsect_file.close();
  ///////////////////////////
  // END THEORY INPUT PART //
  ///////////////////////////

  
  /// Here we multiply the limits in terms of signal strength by the cross-section.
  /// There are also some hooks to exclude sick mass points.
  
  double mass[nXm], obs_lim_cls[nXm];
  double medianD[nXm];
  double up68err[nXm], down68err[nXm], up95err[nXm], down95err[nXm];
  double xs[nXm], xs_uperr[nXm], xs_downerr[nXm];
  double xs10[nXm], xs10_uperr[nXm], xs10_downerr[nXm];
  int nMassEff = 0;
  
  for (int im = 0; im < nXm; im++) {
    
    std::cout<<" im = "<<im<<"   "<<v_xs.at(im)<<std::endl;
    
    double fl_xs = double(v_xs.at(im)); //*1000.0
    std::cout<<" debug 0 "<<std::endl;

    double fl_xs10 = 0;//double(v_xs10.at(ind)); //*1000.0
    // fl_xs = (fl_xs);
    //fl_xs10 = (fl_xs10);
    
    std::cout<<" Xmass = "<<Xmass[im]<<std::endl;
    
    mass[nMassEff] = Xmass[im];
    
    /// This is the part where we multiply the limits in terms of signal strength
    /// by the cross-section, in order to have limits in picobarns.
    //std::cerr << mass[nMassEff] << ":" << v_obs.at(im) << std::endl;
    
    //    std::cout<<" v_obs.at = "<<v_obs.at(im)<<std::endl;
    std::cout<<" fl_xs = "<<fl_xs<<std::endl;
    
    //    obs_lim_cls[nMassEff] = v_obs.at(im) * fl_xs;
    
    std::cout<<" debug 1 "<<std::endl;
    medianD[nMassEff] = v_median.at(im) * fl_xs;
    up68err[nMassEff] = (v_68h.at(im) - v_median.at(im)) * fl_xs;
    down68err[nMassEff] = (v_median.at(im) - v_68l.at(im)) * fl_xs;
    
    //scale factor 100 for making the xsect visible
    xs[nMassEff] = fl_xs; //*100.0;
    xs_uperr[nMassEff] = double(v_toterrh.at(im)) * xs[nMassEff] - xs[nMassEff];
    xs_downerr[nMassEff] =  xs[nMassEff] - double(v_toterrl.at(im)) * xs[nMassEff];
    
    std::cout<<" debug 2 "<<std::endl;
    xs10[nMassEff] = fl_xs10; //*100.0;
    xs10_uperr[nMassEff] = double(v_toterrh.at(im)) * xs10[nMassEff] - xs10[nMassEff];
    xs10_downerr[nMassEff] =  xs10[nMassEff] - double(v_toterrl.at(im)) * xs10[nMassEff];
    
      up95err[nMassEff] = (v_95h.at(im) - v_median.at(im)) * fl_xs;
      down95err[nMassEff] = (v_median.at(im) - v_95l.at(im)) * fl_xs;
    
      //if(obs) cout<<"fl_xs:"<<fl_xs<<" v_obs"<<v_obs.at(im)<<" obs_lim_cls: "<<obs_lim_cls[nMassEff]  <<medianD[nMassEff] <<" mass: "<<mass[nMassEff]<<endl;
 
      nMassEff++;
    
  }//end loop over im (mass points)



  /// The TGraphs themselves.

  //cout<<"Working on TGraph"<<endl;
  TGraphAsymmErrors *grobslim_cls;
  //  if(obs){
  //grobslim_cls = new TGraphAsymmErrors(nMassEff, mass, obs_lim_cls);
  //grobslim_cls->SetName("LimitObservedCLs");
    //}
  TGraphAsymmErrors *grmedian_cls = new TGraphAsymmErrors(nMassEff, mass, medianD);
  grmedian_cls->SetName("LimitExpectedCLs");
  TGraphAsymmErrors *gr68_cls = new TGraphAsymmErrors(nMassEff, mass, medianD, 0, 0, down68err, up68err);
  gr68_cls->SetName("Limit68CLs");
  TGraphAsymmErrors *gr95_cls = new TGraphAsymmErrors(nMassEff, mass, medianD, 0, 0, down95err, up95err);
  gr95_cls->SetName("Limit95CLs");

  // TGraphAsymmErrors *grthSM=new TGraphAsymmErrors(nMassEff1,mass1,xs,0,0,0,0);//xs_downerr,xs_uperr);
  TGraph *grthSM=new TGraph(nMassEff,mass,xs);//xs_downerr,xs_uperr);
  grthSM->SetName("SMXSection");


  // TGraphAsymmErrors *grthSM10=new TGraphAsymmErrors(nMassEff1,mass1,xs10,0,0,0,0);
  TGraph *grthSM10=new TGraph(nMassEff,mass,xs10);
  grthSM10->SetName("SMXSection_2nd");
  
  double fr_left;
  double fr_down;
  double fr_right;
  double fr_up;
  
  if (model == "DH"){
    fr_left = 190.0;
    //fr_down = 0.00001;
    fr_down = 0.1;
    fr_right = 1500.0;
    //fr_up = 5;
    fr_up = 10000.0;
  }

  TCanvas *cMCMC = new TCanvas("c_lim_Asymptotic", "canvas with limits for Asymptotic CLs", 630, 600);
  cMCMC->cd();
  cMCMC->SetGridx(1);
  cMCMC->SetGridy(1);
  // draw a frame to define the range

  TH1F *hr = cMCMC->DrawFrame(fr_left, fr_down, fr_right, fr_up, "");
  TString VV = "ZH";
  
  hr->SetXTitle("M_{A} [GeV]");
  //  hr->SetYTitle("#sigma_{95%} [pb]"); // #rightarrow 2l2q
  hr->SetYTitle("#sigma_{obs} / #sigma_{th} (95% C.L.)");
  hr->SetMinimum(fr_down);
  hr->SetMaximum(fr_up);

  gr95_cls->SetFillColor(kYellow);
  gr95_cls->SetFillStyle(1001);//solid
  gr95_cls->SetLineStyle(kDashed);
  gr95_cls->SetLineWidth(3);
  gr95_cls->GetXaxis()->SetTitle("M_{V'} [GeV]");
  gr95_cls->GetYaxis()->SetTitle("#sigma_{95%} #times BR(V' #rightarrow " + VV + ") [pb]"); // #rightarrow 2l2q
  gr95_cls->GetXaxis()->SetRangeUser(fr_left, fr_right);

  gr95_cls->Draw("3");
  //  gr95_cls->SetMinimum(0.00001);
  //gr95_cls->SetMaximum(1000.0);
  
  //grmedian_cls->SetMinimum(0.00001);
  //grmedian_cls->SetMaximum(1000.0);
  
  gr68_cls->SetFillColor(kGreen);
  gr68_cls->SetFillStyle(1001);//solid
  gr68_cls->SetLineStyle(kDashed);
  gr68_cls->SetLineWidth(3);
  gr68_cls->Draw("3same");
  grmedian_cls->GetXaxis()->SetTitle("M_{V'} [GeV]");
  grmedian_cls->GetYaxis()->SetTitle("#sigma_{95%} #times BR(V' #rightarrow " + VV + ") [pb]"); // #rightarrow 2l2q
  grmedian_cls->SetMarkerStyle(24);//25=hollow squre
  grmedian_cls->SetMarkerColor(kBlack);
  grmedian_cls->SetLineStyle(2);
  grmedian_cls->SetLineWidth(3);

  //  if(obs){
  // grobslim_cls->SetMarkerColor(kBlack);
  // grobslim_cls->SetMarkerStyle(21);//24=hollow circle
  // grobslim_cls->SetMarkerSize(1.0);
  // grobslim_cls->SetLineStyle(1);
  // grobslim_cls->SetLineWidth(3);
    //}
  grthSM->SetLineColor(kRed);
  grthSM->SetLineWidth(2);
  grthSM->SetLineStyle(kSolid);
  grthSM->SetFillColor(kRed);
  grthSM->SetFillStyle(3344);

  grthSM10->SetLineColor(kRed);
  grthSM10->SetLineWidth(2);
  grthSM10->SetLineStyle(1);
  grthSM10->SetLineStyle(kDashed);
  grthSM10->SetFillColor(kRed);
  grthSM10->SetFillStyle(3344);

  grthSM->Draw("L3");
  grmedian_cls->Draw("L");
  // observed limit
  
  /*
  TFile *fUnMPlus=new TFile("AsymptoticCLs_UnmatchedPlus_TGraph.root","READ");
  TGraph *grobs_ump=(TGraph*)fUnMPlus->Get("LimitObservedCLs");
  TGraph *grmedian_ump=(TGraph*)fUnMPlus->Get("LimitExpectedCLs");
  grobs_ump->SetName("LimitObs_UnmatchedPlus");
  grmedian_ump->SetName("LimitExp_UnmatchedPlus");
  grobs_ump->SetMarkerColor(kBlue);
  grobs_ump->SetLineColor(kBlue);
  grobs_ump->SetMarkerStyle(25);
  grmedian_ump->SetMarkerColor(kBlue);
  grmedian_ump->SetLineColor(kBlue);
  grmedian_ump->SetMarkerStyle(25);
  grobs_ump->Draw("P");
  grmedian_ump->Draw("L");
  */

  //draw grid on top of limits
  gStyle->SetOptStat(0);
  TH1D* postGrid = new TH1D("postGrid", "", 1, fr_left, fr_right);
  postGrid->GetYaxis()->SetRangeUser(fr_down, fr_up);
  postGrid->Draw("AXIGSAME");

  //more graphics

  TLegend *leg = new TLegend(.20, .60, .70, .92);
  //   TLegend *leg = new TLegend(.35,.71,.90,.90);
  leg->SetFillColor(0);
  leg->SetLineColor(0);
  leg->SetShadowColor(0);
  leg->SetTextFont(42);
  leg->SetTextSize(0.03);
  //   leg->SetBorderMode(0);
  if (model == "DH"){
    leg->SetHeader("darkHiggs, Zp #rightarrow DM + hs(WW)");
    leg->AddEntry((TObject*)0, "m_{hs} = " + mhs + " GeV, m_{#chi} = " + mDM + " GeV", "");
  }
  //if(obs) leg->AddEntry(grobslim_cls, "Frequentist CL_{S} Observed", "LP"); 
  leg->AddEntry(gr68_cls, "Frequentist CL_{S}  Expected #pm 1#sigma", "LF");
  leg->AddEntry(gr95_cls, "Frequentist CL_{S}  Expected #pm 2#sigma", "LF");
  leg->AddEntry(grthSM, "#sigma_{TH}", "L");
//    leg->AddEntry(grthSM, "#sigma_{TH} x BR(Z' #rightarrow " + VV + "), #tilde{k}=0.50", "L"); // #rightarrow 2l2q
//    leg->AddEntry(grthSM10, "#sigma_{TH} x BR(Z' #rightarrow " + VV + "), #tilde{k}=0.20", "L"); // #rightarrow 2l2q
  leg->Draw();

    TLatex * latex = new TLatex();
    latex->SetNDC();
    latex->SetTextSize(0.04);
    latex->SetTextAlign(31);
    latex->SetTextAlign(11); // align left
    latex->DrawLatex(0.18, 0.96, "CMS preliminary");
    latex->DrawLatex(0.60, 0.96, Form("%.1f fb^{-1} at #sqrt{s} = 13 TeV", intLumi));
  

  // cMCMC->RedrawAxis("");
  gPad->RedrawAxis("");
  // hr->GetYaxis()->DrawClone();
  cMCMC->Update();
  TString fnam;
  //string outputname="shape2d";
  //string outputname="shape1d";
  //string outputname="counting";

  gPad->SetLogy();
  if (model == "Zbar"){
    gPad->SetLogx();
    hr->GetXaxis()->SetNdivisions(10,20,40);
  }
  //TString varName = variable;
  fnam = "ExclusionPlot" + model + "_mhs_" + mhs + "_mx_" + mDM  + ".png";
  //  sprintf(fnam, "MonoHCombined_12fbInv_%s_Asymptotic_log.png", outputdir.data());
  cMCMC->SaveAs(fnam);
  fnam = "ExclusionPlot" + model + "_mhs_" + mhs + "_mx_" + mDM  + ".pdf";
  cMCMC->SaveAs(fnam);
  fnam = "ExclusionPlot" + model + "_mhs_" + mhs + "_mx_" + mDM  + ".root";
  cMCMC->SaveAs(fnam);
  /*
    sprintf(fnam, "XZHllbb_%s_Asymptotic.root",outputdir.data() );
    cMCMC->SaveAs(fnam);
    sprintf(fnam, "XZHllbb_%s_Asymptotic.eps", outputdir.data());
    cMCMC->SaveAs(fnam);
    sprintf(fnam, "XZHllbb_%s_Asymptotic.png", outputdir.data());
    cMCMC->SaveAs(fnam);
    sprintf(fnam, "XZHllbb_%s_Asymptotic.pdf", outputdir.data());
    cMCMC->SaveAs(fnam);
    gPad->SetLogy();
    sprintf(fnam, "XZHllbb_%s_Asymptotic_log.eps", outputdir.data());
    cMCMC->SaveAs(fnam);
    sprintf(fnam, "XZHllbb_%s_Asymptotic_log.png", outputdir.data());
    cMCMC->SaveAs(fnam);
    sprintf(fnam, "XZHllbb_%s_Asymptotic_log.pdf", outputdir.data());
    cMCMC->SaveAs(fnam);
  */

  cMCMC->Draw();

  fout->cd();
  grmedian_cls->Write();
  fout->Close();

  //Building Table of yields

  TString tableName = "";
  tableName = "ExclusionPlot" + model + "_mhs_" + mhs + "_mx_" + mDM  + ".tex";

  ofstream tableFile(tableName, ios::out);

  tableFile<<"\\begin{table*}[h!]"<<endl;
  tableFile<<"\\begin{center}"<<endl;
  tableFile<<"\\begin{small}"<<endl;
  tableFile<<"\\begin{tabular}{cccc}"<<endl;
  tableFile<<"\\hline"<<endl;
  tableFile<<"\\hline"<<endl;
  tableFile<<"\\multicolumn{2}{c}{Mass point} & \\multicolumn{2}{c}{Luminosity} \\\\"<<endl;
  tableFile<<"\\hline"<<endl;
  if (model == "DH")
    tableFile<<"m$_{hs}$ [GeV]  & m$_{\\chi}$ [GeV]  & m$_{Z'}$ &  Limit.  \\\\"<<endl;
  tableFile<<"\\hline"<<endl;
  for (int i = 0; i < nXm; ++i){
    if (model == "DH")
      tableFile<< mhs << " & " << mDM << " & " <<massDH[i]<<" & "<<v_median.at(i) <<" \\\\"<<endl;
  }
  tableFile<<"\\hline"<<endl;
  tableFile<<"\\end{tabular}"<<endl;
  tableFile<<"\\caption{Table of limits extracted with the mT(l2+MET) variable for DH model with 35.9~$\\ifb$}"<<endl;
  tableFile<<"\\label{tab::limits_DH_2016}"<<endl;
  tableFile<<"\\end{small}"<<endl;
  tableFile<<"\\end{center}"<<endl;
  tableFile<<"\\end{table*}"<<endl;
  tableFile.close();


}//end main

void setFPStyle()
{
  gStyle->SetPadBorderMode(0);
  gStyle->SetFrameBorderMode(0);
  gStyle->SetPadBottomMargin(0.12);
  gStyle->SetPadLeftMargin(0.12);
  gStyle->SetCanvasColor(kWhite);
  gStyle->SetCanvasDefH(600); //Height of canvas
  gStyle->SetCanvasDefW(600); //Width of canvas
  gStyle->SetCanvasDefX(0);   //Position on screen
  gStyle->SetCanvasDefY(0);

  gStyle->SetPadTopMargin(0.05);
  gStyle->SetPadBottomMargin(0.15);//0.13);
  gStyle->SetPadLeftMargin(0.15);//0.16);
  gStyle->SetPadRightMargin(0.05);//0.02);

  // For the Pad:
  gStyle->SetPadBorderMode(0);
  // gStyle->SetPadBorderSize(Width_t size = 1);
  gStyle->SetPadColor(kWhite);
  gStyle->SetPadGridX(false);
  gStyle->SetPadGridY(false);
  gStyle->SetGridColor(0);
  gStyle->SetGridStyle(3);
  gStyle->SetGridWidth(1);

  // For the Frame:
  gStyle->SetFrameBorderMode(0);
  gStyle->SetFrameBorderSize(1);
  gStyle->SetFrameFillColor(0);
  gStyle->SetFrameFillStyle(0);
  gStyle->SetFrameLineColor(1);
  gStyle->SetFrameLineStyle(1);
  gStyle->SetFrameLineWidth(1);

  gStyle->SetAxisColor(1, "XYZ");
  gStyle->SetStripDecimals(kTRUE);
  gStyle->SetTickLength(0.03, "XYZ");
  gStyle->SetNdivisions(605, "XYZ");
  gStyle->SetPadTickX(1);  // To get tick marks on the opposite side of the frame
  gStyle->SetPadTickY(1);
  gStyle->SetGridColor(0);
  gStyle->SetGridStyle(3);
  gStyle->SetGridWidth(1);


  gStyle->SetTitleColor(1, "XYZ");
  gStyle->SetTitleFont(42, "XYZ");
  gStyle->SetTitleSize(0.05, "XYZ");
  // gStyle->SetTitleXSize(Float_t size = 0.02); // Another way to set the size?
  // gStyle->SetTitleYSize(Float_t size = 0.02);
  gStyle->SetTitleXOffset(1.15);//0.9);
  gStyle->SetTitleYOffset(1.3); // => 1.15 if exponents
  gStyle->SetLabelColor(1, "XYZ");
  gStyle->SetLabelFont(42, "XYZ");
  gStyle->SetLabelOffset(0.007, "XYZ");
  gStyle->SetLabelSize(0.045, "XYZ");

  gStyle->SetPadBorderMode(0);
  gStyle->SetFrameBorderMode(0);
  gStyle->SetTitleTextColor(1);
  gStyle->SetTitleFillColor(10);
  gStyle->SetTitleFontSize(0.05);
}


