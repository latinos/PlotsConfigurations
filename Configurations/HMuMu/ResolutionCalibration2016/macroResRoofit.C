/*

############################################ DY MC ############################################

-----------------------------------------Barrel-Barrel-----------------------------------------
root -l 'macroResRoofit.C("rootFileZpt_hmm/plots_Zpt_hmm.root","hmm_13TeV_DY_BB_30_45/mll/histo_DY","DCB")'
root -l 'macroResRoofit.C("rootFileZpt_hmm/plots_Zpt_hmm.root","hmm_13TeV_DY_BB_45_52/mll/histo_DY","DCB")'
root -l 'macroResRoofit.C("rootFileZpt_hmm/plots_Zpt_hmm.root","hmm_13TeV_DY_BB_52_62/mll/histo_DY","voigt")'
root -l 'macroResRoofit.C("rootFileZpt_hmm/plots_Zpt_hmm.root","hmm_13TeV_DY_BB_62_200/mll/histo_DY","voigt")'


 */

#ifndef __CINT__
#include "RooGlobalFunc.h"
#endif
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooGaussian.h"
#include "TCanvas.h"
#include "RooPlot.h"
#include "TAxis.h"

#include "RooDCBShape.cxx"

using namespace RooFit ;

float mZ     =  91.1876;
float gammaZ =   2.4952;
float xmin   =  80.0000;
float xmax   = 100.0000;

void macroResRoofit(TString filename   = "rootFileZpt_hmm/plots_Zpt_hmm.root",
		    TString inputHisto = "hmm_13TeV_DY_BO_62_200/mll/histo_DY",
		    TString fitFunc    = "voigt"
		    ){

  // Histogram rootFile
  TFile* f = new TFile(filename);

  //Histogram to fit
  TH1F* histo = (TH1F*) f -> Get(inputHisto);

  // Declare observable x
  RooRealVar x("x","x",xmin,xmax);

  // Histogram in roofit: need to associate it to observable 'x'
  RooDataHist rhisto("rhisto","rhisto",x,Import(*histo)) ;

  // Make plot of histogram showing Poisson error bars (RooFit default)
  RooPlot* frame = x.frame(Title("Invariant mass with Poisson error bars"));
  rhisto.plotOn(frame); 


  // S e t u p   m o d e l 
  // ---------------------

  // Declare also observables mean,sigma with associated name, title, initial value and allowed range
  RooRealVar mean("mean","mean of voigtian",mZ,xmin,xmax) ;
  RooRealVar width("width","width of B-W in voigtian",gammaZ,gammaZ-0.1,gammaZ+0.1);
  RooRealVar sigma("sigma","sigma of gaussian in voigtian",gammaZ,1.0,10.0);

  // Build voigtian p.d.f in terms of x, mean, width, and sigma
  RooVoigtian voigtian("voigt","gaussian PDF",x,mean,width,sigma);  

  // Declare also observable c with initial value and allowed range
  RooRealVar c("c","exp parameter",-1,-10.0,10.0);

  // Build exponential p.d.f in terms of x and c
  RooExponential exp ("exp", "exp", x, c);
  //exp.plotOn(frame);

  // Declare also observables alpha and n with initial values and allowed range
  RooRealVar alpha("alpha","gauss-power law connection point",gammaZ,-50.,50.);//mZ,mZ-5*gammaZ,mZ+5*gammaZ);
  RooRealVar n("n","crystal ball exponent",1,-50,50);

  // Build crystal ball p.d.f in terms of x, mean, sigma, alpha, and n
  RooCBShape CB("CB", "CB", x, mean, sigma, alpha, n);

  // Declare also observables alphaL, alphaR, nL, and nR with initial values and allowed range
  RooRealVar alphaL("alphaL","left gauss-power law connection point",mZ-gammaZ,mZ-10*gammaZ,mZ);
  RooRealVar nL("nL","left crystal ball exponent",30,0,50);
  RooRealVar alphaR("alphaR","right gauss-power law connection point",mZ+gammaZ,mZ,mZ+10*gammaZ);
  RooRealVar nR("nR","right crystal ball exponent",30,0,50);

  // Build double-sided crystal ball p.d.f in terms of x, mean, sigma, alpha, and n
  RooDCBShape DCB("DCB", "DCB", x, mean, sigma, alphaL, alphaR, nL, nR);
  //DCB.plotOn(frame,LineColor(kRed));

  // Build Breit-Wigner p.d.f in terms of x, mean, width
  RooBreitWigner BW("BW", "BW", x, mean, width);
  //BW.plotOn(frame,LineColor(kBlack));


  // ### Convolutions #########################################
  // #########################################################

  // // Construct observable
  // RooRealVar t("t","t",xmin,xmax) ;

  // Set #bins to be used for FFT sampling to 10000
  x.setBins(10000,"cache") ; 

  // Construct BW (x) CB --> Breit-Wigner (x) Crystal-Ball
  RooFFTConvPdf BWxCB("BWxCB","BW(x)CB",x,BW,CB) ;
  //BWxCB.plotOn(frame,LineColor(kGreen));

  // Construct BW (x) DCB --> Breit-Wigner (x) Double-Sided Crystal-Ball
  RooFFTConvPdf BWxDCB("BWxDCB","BW(x)DCB",x,BW,DCB) ;
  //BWxDCB.plotOn(frame,LineColor(kOrange));

  // #########################################################

  //

  // ### Sums ################################################
  // #########################################################

  // ### Voigtian + exponential
  // Expected signal fraction
  RooRealVar sigfrac("sigfrac","fraction of signal",0.8,0.,1.);
  // Add voigtian (signal) and exp (background)
  RooAddPdf voigt_and_exp("voigt_and_exp","voigtian+exp",RooArgList(voigtian,exp),sigfrac);

  // ### BWxCB + exponential
  // Expected signal fraction
  RooRealVar sigfracBWxCB("sigfrac","fraction of signal",0.8,0.,1.);
  // Add BWxCB (signal) and exp (background)
  RooAddPdf BWxCB_and_exp("BWxCB_and_exp","BWxCB+exp",RooArgList(BWxCB,exp),sigfracBWxCB);

  // ### BWxDCB + exponential
  // Expected signal fraction
  RooRealVar sigfracBWxDCB("sigfrac","fraction of signal",0.8,0.,1.);
  // Add BWxCB (signal) and exp (background)
  RooAddPdf BWxDCB_and_exp("BWxDCB_and_exp","BWxDCB+exp",RooArgList(BWxDCB,exp),sigfracBWxDCB);

  // ### DCB + exponential
  // Expected signal fraction
  RooRealVar sigfracDCB("sigfrac","fraction of signal",0.95,0.,1.);
  // Add BWxCB (signal) and exp (background)
  RooAddPdf DCB_and_exp("DCB_and_exp","DCB+exp",RooArgList(DCB,exp),sigfracDCB);
  //DCB_and_exp.plotOn(frame,LineColor(kPink));

  // #########################################################


  if (fitFunc == "voigt"){
    // "voigt":
    // signal     = voigtian 
    // background = erf x exp  (for the moment, just exp)
    // use this when pT1 > 52 GeV
    voigt_and_exp.fitTo(rhisto);
    voigt_and_exp.plotOn(frame);

    // Print values of mean and sigma (that now reflect fitted values and errors)
    mean.Print();
    sigma.Print();
    width.Print();
    c.Print();
    //
    sigfrac.Print();
  }
  else if (fitFunc == "DCB"){
    // "DCB":
    // signal     = double crystal ball (x) Breit-Wigner 
    // background = exp
    // use this when pT1 < 52 GeV
    BWxDCB_and_exp.fitTo(rhisto);
    BWxDCB_and_exp.plotOn(frame);

    // Print values of mean and sigma (that now reflect fitted values and errors)
    mean.Print();
    sigma.Print();
    width.Print();
    c.Print();
    alphaL.Print();
    nL.Print();
    alphaR.Print();
    nR.Print();
    //    
    sigfrac.Print();
  }
  else if (fitFunc == "test"){
    // Customize this for testing
    DCB_and_exp.fitTo(rhisto);
    DCB_and_exp.plotOn(frame);
  }
  else {
    cout<<"You select an unknown fitting function"<<endl;
    return;
  }
  
  // Draw all frames on a canvas
  TCanvas* c1 = new TCanvas("c1","c1",800,800);
  c1->cd(); 
  gPad->SetLeftMargin(0.15); 
  frame->GetYaxis()->SetTitleOffset(1.6); 
  frame->Draw();
  

}


