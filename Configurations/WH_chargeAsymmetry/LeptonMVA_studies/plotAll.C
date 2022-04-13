/*

Macro originally put together by Pietro Vischia.
To cope with changes in TMVA (factory and dataloader) some functions were
updated, according to: https://github.com/root-project/root/blob/master/tmva/tmvagui/

                                                                                                                                                                                                                                            -
-- To produce plots ----                                                                                                                                                                                                                     

root -l -b -q 'plotAll.C("training_nanoAOD_v9","UL20_mu_TTH-like_2016_preVFP","plots_LeptonMVA_muon_2016_preVFP","dataset")' 
root -l -b -q 'plotAll.C("training_nanoAOD_v9","UL20_mu_TTH-like_2016","plots_LeptonMVA_muon_2016","dataset")' 
root -l -b -q 'plotAll.C("training_nanoAOD_v9","UL20_mu_TTH-like_2017","plots_LeptonMVA_muon_2017","dataset")' 
root -l -b -q 'plotAll.C("training_nanoAOD_v9","UL20_mu_TTH-like_2018","plots_LeptonMVA_muon_2018","dataset")' 

*/


using namespace TMVA;

#include "TLegend.h"
#include "TText.h"
#include "TH2.h"
#include <TH1.h>

#include "TMVA/Factory.h"
#include "TMVA/Tools.h"
#include "TMVA/TMVAGui.h"
#include "TMVA/tmvaglob.h"
#include "TMVA/Types.h"

 

//#include "StatisticsTesting-2.0.2/packages/StatisticsTesting/include/CramerVonMisesBinnedComparisonAlgorithm.h"

namespace MY
{
  class ELHISTO : public TH1{
    
  public:
    Double_t myKolmogorovTest(const TH1* acca2, Option_t *option="") const
    {
      //printf("myKolmogorovTest");
      
      MY::ELHISTO* h2 = (MY::ELHISTO*) acca2;
      TString opt = option;
      opt.ToUpper();
      
      Double_t prob = 0;
      ELHISTO *h1 = (ELHISTO*)this;

      //printf("myKolmogorovTest: acquired histos");
      if (h2 == 0) return 0;
      const TAxis *axis1 = h1->GetXaxis();
      const TAxis *axis2 = h2->GetXaxis();
      Int_t ncx1   = axis1->GetNbins();
      Int_t ncx2   = axis2->GetNbins();
      
      // Check consistency of dimensions
      if (h1->GetDimension() != 1 || h2->GetDimension() != 1) {
        Error("KolmogorovTest","Histograms must be 1-D\n");
        return 0;
      }
      
      // Check consistency in number of channels
      if (ncx1 != ncx2) {
        Error("KolmogorovTest","Number of channels is different, %d and %d\n",ncx1,ncx2);
        return 0;
      }
      
      // empty the buffer. Probably we could add as an unbinned test
      if (fBuffer) ((TH1*)this)->BufferEmpty();
      
      // Check consistency in channel edges
      Double_t difprec = 1e-5;
      Double_t diff1 = TMath::Abs(axis1->GetXmin() - axis2->GetXmin());
      Double_t diff2 = TMath::Abs(axis1->GetXmax() - axis2->GetXmax());
      if (diff1 > difprec || diff2 > difprec) {
        Error("KolmogorovTest","histograms with different binning");
        return 0;
    }
      
      Bool_t afunc1 = kFALSE;
      Bool_t afunc2 = kFALSE;
      Double_t sum1 = 0, sum2 = 0;
      Double_t ew1, ew2, w1 = 0, w2 = 0;
      Int_t bin;
      Int_t ifirst = 1;
      Int_t ilast = ncx1;
      //printf("myKolmogorovTest: starting to compute integral of bins");
      // integral of all bins (use underflow/overflow if option)
      if (opt.Contains("U")) ifirst = 0;
      if (opt.Contains("O")) ilast = ncx1 +1;
      for (bin = ifirst; bin <= ilast; bin++) {
        sum1 += h1->RetrieveBinContent(bin);
        sum2 += h2->RetrieveBinContent(bin);
        ew1   = h1->GetBinError(bin);
        ew2   = h2->GetBinError(bin);
        w1   += ew1*ew1;
        w2   += ew2*ew2;
      }
      //printf("myKolmogorovTest: finished computing integral of bins");
      if (sum1 == 0) {
        Error("KolmogorovTest","Histogram1 %s integral is zero\n",h1->GetName());
        return 0;
      }
      if (sum2 == 0) {
        Error("KolmogorovTest","Histogram2 %s integral is zero\n",h2->GetName());
        return 0;
      }
      
      // calculate the effective entries.
      // the case when errors are zero (w1 == 0 or w2 ==0) are equivalent to
      // compare to a function. In that case the rescaling is done only on sqrt(esum2) or sqrt(esum1)
      Double_t esum1 = 0, esum2 = 0;
      if (w1 > 0)
        esum1 = sum1 * sum1 / w1;
      else
        afunc1 = kTRUE;    // use later for calculating z
      
      if (w2 > 0)
        esum2 = sum2 * sum2 / w2;
      else
        afunc2 = kTRUE;    // use later for calculating z
      
      if (afunc2 && afunc1) {
        Error("KolmogorovTest","Errors are zero for both histograms\n");
        return 0;
      }
      
      
      Double_t s1 = 1/sum1;
      Double_t s2 = 1/sum2;
      
      // Find largest difference for Kolmogorov Test
      Double_t dfmax =0, rsum1 = 0, rsum2 = 0;
      
      for (bin=ifirst;bin<=ilast;bin++) {
        rsum1 += s1*h1->RetrieveBinContent(bin);
        rsum2 += s2*h2->RetrieveBinContent(bin);
        dfmax = TMath::Max(dfmax,TMath::Abs(rsum1-rsum2));
      }
      
      // Get Kolmogorov probability
      Double_t z, prb1=0, prb2=0, prb3=0;
      
      // case h1 is exact (has zero errors)
      if  (afunc1)
        z = dfmax*TMath::Sqrt(esum2);
      // case h2 has zero errors
      else if (afunc2)
        z = dfmax*TMath::Sqrt(esum1);
      else
        // for comparison between two data sets
        z = dfmax*TMath::Sqrt(esum1*esum2/(esum1+esum2));
      
      prob = TMath::KolmogorovProb(z);
      
      // option N to combine normalization makes sense if both afunc1 and afunc2 are false
      if (opt.Contains("N") && !(afunc1 || afunc2 ) ) {
        // Combine probabilities for shape and normalization,
        prb1 = prob;
        
        Double_t d12    = esum1-esum2;
        Double_t chi2   = d12*d12/(esum1+esum2);
        prb2 = TMath::Prob(chi2,1);
        // see Eadie et al., section 11.6.2
        if (prob > 0 && prb2 > 0) prob *= prb2*(1-TMath::Log(prob*prb2));
      else                      prob = 0;
      }
      // X option. Pseudo-experiments post-processor to determine KS probability
      const Int_t nEXPT = 1000;
      if (opt.Contains("X") && !(afunc1 || afunc2 ) ) {
        Double_t dSEXPT;
        TH1 *hExpt = (TH1*)(gDirectory ? gDirectory->CloneObject(this,kFALSE) : gROOT->CloneObject(this,kFALSE));
        // make nEXPT experiments (this should be a parameter)
        prb3 = 0;
        for (Int_t i=0; i < nEXPT; i++) {
          hExpt->Reset();
          printf("FILLING RANDOM...");
          hExpt->FillRandom(h1,(Int_t)esum2);
          printf(" DONE\n");
          dSEXPT = myKolmogorovTest(hExpt,"M");
          if (dSEXPT>dfmax) prb3 += 1.0;
        }
        prb3 /= (Double_t)nEXPT;
        delete hExpt;
      }
      
      // debug printout
      if (opt.Contains("D")) {
        printf(" Kolmo Prob  h1 = %s, sum bin content =%g  effective entries =%g\n",h1->GetName(),sum1,esum1);
        printf(" Kolmo Prob  h2 = %s, sum bin content =%g  effective entries =%g\n",h2->GetName(),sum2,esum2);
        printf(" Kolmo Prob     = %g, Max Dist = %g\n",prob,dfmax);
        if (opt.Contains("N"))
          printf(" Kolmo Prob     = %f for shape alone, =%f for normalisation alone\n",prb1,prb2);
        if (opt.Contains("X"))
          printf(" Kolmo Prob     = %f with %d pseudo-experiments\n",prb3,nEXPT);
      }
      // This numerical error condition should never occur:
      if (TMath::Abs(rsum1-1) > 0.002) Warning("KolmogorovTest","Numerical problems with h1=%s\n",h1->GetName());
      if (TMath::Abs(rsum2-1) > 0.002) Warning("KolmogorovTest","Numerical problems with h2=%s\n",h2->GetName());
    
      if(opt.Contains("M"))      return dfmax;
      else if(opt.Contains("X")) return prb3;
      else                       return prob;
    }
  };
  

  void bdtcontrolplots(TString dataset, 
		       TDirectory *bdtdir,
		       TString outdir = "plots"
		       ) {

    const Int_t nPlots = 6;

    Int_t width  = 900;
    Int_t height = 600;
    char cn[100], cn2[100];
    const TString titName = bdtdir->GetName();
    sprintf( cn, "cv_%s", titName.Data() );
    TCanvas *c = new TCanvas( cn,  Form( "%s Control Plots", titName.Data() ),
			      width, height ); 
    c->Divide(3,2);

    TString hname[nPlots]={"BoostMonitor","BoostWeight","BoostWeightVsTree","ErrFractHist","NodesBeforePruning",titName+"_FOMvsIterFrame"};

    Bool_t BoostMonitorIsDone=kFALSE;

    for (Int_t i=0; i<nPlots; i++){
      Int_t color = 4; 
      c->cd(i+1);
      TH1 *h = (TH1*) bdtdir->Get(hname[i]);
      
      if (h){
	h->SetMaximum(h->GetMaximum()*1.3);
	h->SetMinimum( 0 );
	h->SetMarkerColor(color);
	h->SetMarkerSize( 0.7 );
	h->SetMarkerStyle( 24 );
	h->SetLineWidth(1);
	h->SetLineColor(color);
	if(hname[i]=="NodesBeforePruning")h->SetTitle("Nodes before/after pruning");
	h->Draw();
	if(hname[i]=="NodesBeforePruning"){
	  TH1 *h2 = (TH1*) bdtdir->Get("NodesAfterPruning");
	  h2->SetLineWidth(1);
	  h2->SetLineColor(2);
	  h2->Draw("same");
	}
	if(hname[i]=="BoostMonitor"){ // a plot only available in case DoBoostMontior option has bee set
	  TGraph *g = (TGraph*) bdtdir->Get("BoostMonitorGraph");
	  g->Draw("LP*");
	  BoostMonitorIsDone = kTRUE;
	}
	if(hname[i]==titName+"_FOMvsIterFrame"){ // a plot only available in case DoBoostMontior option has bee set
	  TGraph *g = (TGraph*) bdtdir->Get(titName+"_FOMvsIter");
	  g->Draw();
	}
	c->Update();
      }
    }
   
   
    TCanvas *c2 = NULL;
    if (BoostMonitorIsDone){
      sprintf( cn2, "cv2_%s", titName.Data() );
      c2 = new TCanvas( cn2,  Form( "%s BoostWeights", titName.Data() ),
                        1200, 1200 ); 
      c2->Divide(5,5);
      Int_t ipad=1;
      
      TIter keys( bdtdir->GetListOfKeys() );
      TKey *key;
      //      gDirectory->ls();
      while ( (key = (TKey*)keys.Next()) && ipad < 26) {
	TObject *obj=key->ReadObj();
	if (obj->IsA()->InheritsFrom(TH1::Class())){   
	  TH1F *hx = (TH1F*)obj;
	  TString hhname_(Form("%s",obj->GetTitle()));
	  if (hhname_.Contains("BoostWeightsInTreeB")){ 
	    c2->cd(ipad++);
	    hx->SetLineColor(4);
	    hx->Draw();
	    hhname_.ReplaceAll("TreeB","TreeS");
	    bdtdir->GetObject(hhname_.Data(),hx);
	    if (hx) {
	      hx->SetLineColor(2);
	      hx->Draw("same");
	    }
	  }
	  c2->Update();
	}
      }
               
    }

    // write to file
    TString fname = Form("%s/%s_ControlPlots", outdir.Data(), titName.Data() );
    cout << "Saving plot into: " << fname << endl;
    TMVAGlob::imgconv( c, fname );
   
    if (c2){
      fname = Form( "%s/%s_ControlPlots2", outdir.Data(), titName.Data() );
      TMVAGlob::imgconv( c2, fname );
    }

    TCanvas *c3 = NULL;
    if (BoostMonitorIsDone){
      sprintf( cn2, "cv3_%s", titName.Data() );
      c3 = new TCanvas( cn2,  Form( "%s Variables", titName.Data() ),
                        1200, 1200 ); 
      c3->Divide(5,5);
      Int_t ipad=1;
      
      TIter keys( bdtdir->GetListOfKeys() );
      TKey *key;
      //      gDirectory->ls();
      while ( (key = (TKey*)keys.Next()) && ipad < 26) {
	TObject *obj=key->ReadObj();
	if (obj->IsA()->InheritsFrom(TH1::Class())){   
	  TH1F *hx = (TH1F*)obj;
	  TString hname_(Form("%s",obj->GetTitle()));
	  if (hname_.Contains("SigVar0AtTree")){ 
	    c3->cd(ipad++);
	    hx->SetLineColor(4);
	    hx->Draw();
	    hname_.ReplaceAll("Sig","Bkg");
	    bdtdir->GetObject(hname_.Data(),hx);
	    if (hx) {
	      hx->SetLineColor(2);
	      hx->Draw("same");
	    }
	  }
	  c3->Update();
	}
      }          
    }
  }

    void BDTControlPlots(TString dataset, 
		       TString fin , 
		       TString methodName = "Method_BDT",
		       TString out_dir = "plots",
		       Bool_t useTMVAStyle = true
		       ){
    
    // set style and remove existing canvas'
    TMVAGlob::Initialize( useTMVAStyle );
  
    // checks if file with name "fin" is already open, and if not opens one
    TFile* file = TMVAGlob::OpenFile( fin );  
   
    if (file == NULL) {
      cout << "Problems with input file, tried to open " << fin << " but somehow did not succeed .." << endl;
      return;
    }

    // get all titles of the method BDT
    TList titles;
    //TString methodName = "Method_BDT";
    UInt_t ninst = TMVAGlob::GetListOfTitles(methodName,titles,file->GetDirectory(dataset.Data()));
    if (ninst==0) {
      cout << "Could not locate directory 'Method_BDT' in file " << fin << endl;
      return;
    }
    // loop over all titles
    TIter keyIter(&titles);
    TDirectory *bdtdir;
    TKey *key;
    while ((key = TMVAGlob::NextKey(keyIter,"TDirectory"))) {
      bdtdir = (TDirectory *)key->ReadObj();
      MY::bdtcontrolplots(dataset, bdtdir, out_dir );
    }
  }


  void mvas(TString  dataset, 
	    TString  fin, 
	    HistType htype, 
	    TString  out_dir = "plot",
	    Bool_t   useTMVAStyle=kFALSE )
  {
    
    cout << "Starting MVAs" << endl;
    gSystem->Load("libTMVA.so");  

    // set style and remove existing canvas'
    TMVAGlob::Initialize( useTMVAStyle );
    
    // switches
    const Bool_t Save_Images = kTRUE;
    
    // checks if file with name "fin" is already open, and if not opens one
    TFile* file = TMVAGlob::OpenFile( fin );  
    //file -> cd("dataset");

    TDirectoryFile* current_folder = (TDirectoryFile*) file->Get(dataset); 

    // define Canvas layout here!
    const Int_t width = 600;   // size of canvas
    
    // this defines how many canvases we need
    TCanvas *c = 0;
    
    // counter variables
    Int_t countCanvas = 0;
    
    // search for the right histograms in full list of keys
    TIter next(current_folder->GetListOfKeys());
    TKey *key(0);   
    while ((key = (TKey*)next())) {
      
      cout << "key = " << key->GetName() << endl;

      if (!TString(key->GetName()).BeginsWith("Method_")) continue;
      if (!gROOT->GetClass(key->GetClassName())->InheritsFrom("TDirectory")) continue;
      
      TString methodName;
      TMVAGlob::GetMethodName(methodName, key);
      
      TDirectory* mDir = (TDirectory*)key->ReadObj();
      
      TIter keyIt(mDir->GetListOfKeys());
      TKey *titkey;
      while ((titkey = (TKey*)keyIt())) {
        
        if (!gROOT->GetClass(titkey->GetClassName())->InheritsFrom("TDirectory")) continue;
        
        TDirectory *titDir = (TDirectory *)titkey->ReadObj();
        TString methodTitle;
        TMVAGlob::GetMethodTitle(methodTitle,titDir);
        
        std::cout << "--- Found directory for method: " << methodName << "::" << methodTitle << std::flush;
        TString hname = "MVA_" + methodTitle;
        if      (htype == kProbaType  ) hname += "_Proba";
         else if (htype == kRarityType ) hname += "_Rarity";
        MY::ELHISTO* sig = (MY::ELHISTO*) dynamic_cast<TH1*>(titDir->Get( hname + "_S" ));
        MY::ELHISTO* bgd = (MY::ELHISTO*) dynamic_cast<TH1*>(titDir->Get( hname + "_B" ));
        
        if (sig==0 || bgd==0) {
          if     (htype == kMVAType)     
               cout << ":\t mva distribution not available (this is normal for Cut classifier)" << endl;
          else if(htype == kProbaType)   
            cout << ":\t probability distribution not available" << endl;
          else if(htype == kRarityType)  
            cout << ":\t rarity distribution not available" << endl;
          else if(htype == kCompareType) 
            cout << ":\t overtraining check not available" << endl;
          else cout << endl;
          continue;
        }
        
        cout << " containing " << hname << "_S/_B" << endl;
         // chop off useless stuff
        sig->SetTitle( Form("TMVA response for classifier: %s", methodTitle.Data()) );
        if      (htype == kProbaType) 
          sig->SetTitle( Form("TMVA probability for classifier: %s", methodTitle.Data()) );
        else if (htype == kRarityType) 
          sig->SetTitle( Form("TMVA Rarity for classifier: %s", methodTitle.Data()) );
        else if (htype == kCompareType) 
          sig->SetTitle( Form("TMVA overtraining check for classifier: %s", methodTitle.Data()) );
        
        // create new canvas
        TString ctitle = ((htype == kMVAType) ? 
                          Form("TMVA response %s",methodTitle.Data()) : 
                          (htype == kProbaType) ? 
                          Form("TMVA probability %s",methodTitle.Data()) :
                          (htype == kCompareType) ? 
                          Form("TMVA comparison %s",methodTitle.Data()) :
                          Form("TMVA Rarity %s",methodTitle.Data()));
        
        c = new TCanvas( Form("canvas%d", countCanvas+1), ctitle, 
                         countCanvas*50+200, countCanvas*20, width, (Int_t)width*0.78 ); 
        
        // set the histogram style
        TMVAGlob::SetSignalAndBackgroundStyle( sig, bgd );
        
        // // Rebin the histograms, to avoid negative weights issues in the GoF test
        // cout << "Signal bins: " << sig->GetNbinsX() << endl;
        // cout << "Background bins: " << bgd->GetNbinsX() << endl;
        // 
        //sig->Rebin(2);
        //bgd->Rebin(2);

        // normalise both signal and background
        TMVAGlob::NormalizeHists( sig, bgd );
        
        // frame limits (choose judicuous x range)
        Float_t nrms = 10;
        cout << "--- Mean and RMS (S): " << sig->GetMean() << ", " << sig->GetRMS() << endl;
        cout << "--- Mean and RMS (B): " << bgd->GetMean() << ", " << bgd->GetRMS() << endl;
        Float_t xmin = TMath::Max( TMath::Min(sig->GetMean() - nrms*sig->GetRMS(), 
                                              bgd->GetMean() - nrms*bgd->GetRMS() ),
                                   sig->GetXaxis()->GetXmin() );
        Float_t xmax = TMath::Min( TMath::Max(sig->GetMean() + nrms*sig->GetRMS(), 
                                              bgd->GetMean() + nrms*bgd->GetRMS() ),
                                   sig->GetXaxis()->GetXmax() );
        Float_t ymin = 0;
        Float_t maxMult = (htype == kCompareType) ? 1.3 : 1.2;
        Float_t ymax = TMath::Max( sig->GetMaximum(), bgd->GetMaximum() )*maxMult;
        
        // build a frame
        Int_t nb = 500;
        TString hFrameName(TString("frame") + methodTitle);
        TObject *o = gROOT->FindObject(hFrameName);
        if(o) delete o;
        TH2F* frame = new TH2F( hFrameName, sig->GetTitle(), 
                                nb, xmin, xmax, nb, ymin, ymax );
        frame->GetXaxis()->SetTitle( methodTitle + ((htype == kMVAType || htype == kCompareType) ? " response" : "") );
        if      (htype == kProbaType  ) frame->GetXaxis()->SetTitle( "Signal probability" );
        else if (htype == kRarityType ) frame->GetXaxis()->SetTitle( "Signal rarity" );
        frame->GetYaxis()->SetTitle("(1/N) dN^{ }/^{ }dx");
        TMVAGlob::SetFrameStyle( frame );
        
         // eventually: draw the frame
        frame->Draw();  
        
        c->GetPad(0)->SetLeftMargin( 0.105 );
        frame->GetYaxis()->SetTitleOffset( 1.2 );
        
        // Draw legend               
        TLegend *legend= new TLegend( c->GetLeftMargin(), 1 - c->GetTopMargin() - 0.12, 
                                      c->GetLeftMargin() + (htype == kCompareType ? 0.40 : 0.3), 1 - c->GetTopMargin() );
        legend->SetFillStyle( 1 );
        legend->AddEntry(sig,TString("Signal")     + ((htype == kCompareType) ? " (test sample)" : ""), "F");
        legend->AddEntry(bgd,TString("Background") + ((htype == kCompareType) ? " (test sample)" : ""), "F");
        legend->SetBorderSize(1);
        legend->SetMargin( (htype == kCompareType ? 0.2 : 0.3) );
        legend->Draw("same");

        // overlay signal and background histograms
        sig->Draw("samehist");
        bgd->Draw("samehist");
        
        if (htype == kCompareType) {
          // if overtraining check, load additional histograms
          TH1* sigOv = 0;
          TH1* bgdOv = 0;

          TString ovname = hname += "_Train";
          sigOv = dynamic_cast<TH1*>(titDir->Get( ovname + "_S" ));
          bgdOv = dynamic_cast<TH1*>(titDir->Get( ovname + "_B" ));
          
          if (sigOv == 0 || bgdOv == 0) {
            cout << "+++ Problem in \"mvas.C\": overtraining check histograms do not exist" << endl;
          }
          else {
            cout << "--- Found comparison histograms for overtraining check" << endl;
            
            TLegend *legend2= new TLegend( 1 - c->GetRightMargin() - 0.42, 1 - c->GetTopMargin() - 0.12,
                                           1 - c->GetRightMargin(), 1 - c->GetTopMargin() );
            legend2->SetFillStyle( 1 );
            legend2->SetBorderSize(1);
            legend2->AddEntry(sigOv,"Signal (training sample)","P");
            legend2->AddEntry(bgdOv,"Background (training sample)","P");
            legend2->SetMargin( 0.1 );
            legend2->Draw("same");
          }

          // // Rebin the histograms, to avoid negative weights issues in the GoF test
          // cout << "Signal bins: " << sigOv->GetNbinsX() << endl;
          // cout << "Background bins: " << bgdOv->GetNbinsX() << endl;
          // 
          // sigOv->Rebin(4);
          // bgdOv->Rebin(4);
          
          // normalise both signal and background
          TMVAGlob::NormalizeHists( sigOv, bgdOv );
          
          Int_t col = sig->GetLineColor();
          sigOv->SetMarkerColor( col );
          sigOv->SetMarkerSize( 0.7 );
          sigOv->SetMarkerStyle( 20 );
          sigOv->SetLineWidth( 1 );
          sigOv->SetLineColor( col );
          sigOv->Draw("e1same");
          
          col = bgd->GetLineColor();
          bgdOv->SetMarkerColor( col );
          bgdOv->SetMarkerSize( 0.7 );
          bgdOv->SetMarkerStyle( 20 );
          bgdOv->SetLineWidth( 1 );
          bgdOv->SetLineColor( col );
          bgdOv->Draw("e1same");
          
          ymax = TMath::Max( ymax, float(TMath::Max( sigOv->GetMaximum(), bgdOv->GetMaximum() )*maxMult ));
          frame->GetYaxis()->SetLimits( 0, ymax );
          
          // for better visibility, plot thinner lines
          sig->SetLineWidth( 1 );
          bgd->SetLineWidth( 1 );
          
          // perform K-S test
          cout << "--- Perform Kolmogorov-Smirnov tests" << endl;
          Double_t kolS = sig->myKolmogorovTest(sigOv/*, "X"*/ );
          Double_t kolB = bgd->myKolmogorovTest(bgdOv/*, "X"*/ );
          //Double_t kolS = sig->Chi2Test( sigOv, "WW" );
          //Double_t kolB = bgd->Chi2Test( bgdOv, "WW" );
          //CramerVonMisesBinnedComparisonAlgorithm cvm();
          //cvm.calculateDistance(sig, bgd);
          
          cout << "--- Goodness of signal (background) consistency: " << kolS << " (" << kolB << ")" << endl;
          
          TString probatext = Form( "Kolmogorov-Smirnov test: signal (background) probability = %5.3g (%5.3g)", kolS, kolB );
          //TString probatext = Form( "Chi2 test: signal (background) probability = %5.3g (%5.3g)", kolS, kolB );
          TText* tt = new TText( 0.12, 0.74, probatext );
          tt->SetNDC(); tt->SetTextSize( 0.032 ); tt->AppendPad(); 
        }

        // redraw axes
        frame->Draw("sameaxis");
        
        // text for overflows
        Int_t    nbin = sig->GetNbinsX();
        Double_t dxu  = sig->GetBinWidth(0);
        Double_t dxo  = sig->GetBinWidth(nbin+1);
        TString uoflow = Form( "U/O-flow (S,B): (%.1f, %.1f)%% / (%.1f, %.1f)%%", 
                               sig->GetBinContent(0)*dxu*100, bgd->GetBinContent(0)*dxu*100,
                               sig->GetBinContent(nbin+1)*dxo*100, bgd->GetBinContent(nbin+1)*dxo*100 );
        TText* t = new TText( 0.975, 0.115, uoflow );
        t->SetNDC();
        t->SetTextSize( 0.030 );
        t->SetTextAngle( 90 );
        t->AppendPad();    
        
        // update canvas
        c->Update();
        
        // save canvas to file
        
        TMVAGlob::plot_logo(1.058);
        if (Save_Images) {
          if      (htype == kMVAType)     
	    TMVAGlob::imgconv( c, Form("%s/mva_%s", out_dir.Data(), methodTitle.Data()) );
          else if (htype == kProbaType) 
	    TMVAGlob::imgconv( c, Form("%s/proba_%s", out_dir.Data(), methodTitle.Data()) ); 
          else if (htype == kCompareType) 
	    TMVAGlob::imgconv( c, Form("%s/overtrain_%s", out_dir.Data(), methodTitle.Data()) ); 
          else  
	    TMVAGlob::imgconv( c, Form("%s/rarity_%s",  out_dir.Data(), methodTitle.Data()) ); 
        }
        countCanvas++;
        
      }
      cout << "";
    }
    cout << "Finishing MVAs" << endl;
  }
  
  void plot_efficiencies( TFile* /*file*/, 
			  Int_t type , 
			  TDirectory* BinDir,
			  TString outdir)
  {
    // input:   - Input file (result from TMVA),
    //          - type = 1 --> plot efficiency(B) versus eff(S)
    //                 = 2 --> plot rejection (B) versus efficiency (S)
    //                 = 3 --> plot 1/eff(B) versus efficiency (S)
    
    Bool_t __PLOT_LOGO__  = kTRUE;
    Bool_t __SAVE_IMAGE__ = kTRUE;
    
    // the coordinates
    Float_t x1 = 0;
    Float_t x2 = 1;
    Float_t y1 = 0;
    Float_t y2 = 0.8;
    
    // reverse order if "rejection"
    if (type == 2) {
      Float_t z = y1;
      y1 = 1 - y2;
      y2 = 1 - z;
      //      cout << "--- type==2: plot background rejection versus signal efficiency" << endl;
    } else if (type == 3) {
      y1 = 0;
      y2 = -1; // will be set to the max found in the histograms
      
    } else {
      //  cout << "--- type==1: plot background efficiency versus signal efficiency" << endl;
    }
    // create canvas
    TCanvas* c = new TCanvas( "c", "the canvas", 200, 0, 650, 500 );
    
    // global style settings
    c->SetGrid();
    c->SetTicks();
    
    // legend
    Float_t x0L = 0.107,     y0H = 0.899;
    Float_t dxL = 0.457-x0L, dyH = 0.22;
    if (type == 2) {
      x0L = 0.15;
      y0H = 1 - y0H + dyH + 0.07;
    }
    TLegend *legend = new TLegend( x0L, y0H-dyH, x0L+dxL, y0H );
    //legend->SetTextSize( 0.05 );
    legend->SetHeader( "MVA Method:" );
    legend->SetMargin( 0.4 );
    
    TString xtit = "Signal efficiency";
    TString ytit = "Background efficiency";
    if (type == 2) ytit = "Background rejection";
    if (type == 3) ytit = "1/(Background eff.)";
    TString ftit = ytit + " versus " + xtit;
    
    TString hNameRef = "effBvsS";
    if (type == 2) hNameRef = "rejBvsS";
    if (type == 3) hNameRef = "invBeffvsSeff";
    
    
    if (TString(BinDir->GetName()).Contains("multicut")){
      ftit += "  Bin: ";
      ftit += (BinDir->GetTitle());
    }
    
    TList xhists;
    TList xmethods;

    UInt_t xnm = TMVAGlob::GetListOfMethods( xmethods );
    if (xnm==0){
      cout << "ups .. no methods found in to plot ROC curve for ... give up"  << endl;
      return;
    }
    else{
      cout << "Methods found: " << xnm << endl;
    }
    TIter xnext(&xmethods);
    // loop over all methods
    TKey *xkey;
    while ((xkey = (TKey*)xnext())) {
      TDirectory * mDir = (TDirectory*)xkey->ReadObj();
      TList titles;
      UInt_t ninst = TMVAGlob::GetListOfTitles(mDir,titles);
      if (ninst==0) cout << "hmm... sorry, but this printout was supposed to be only to keep the compiler quite.. never supposed to happen :(" << endl;
      TIter nextTitle(&titles);
      TKey *titkey;
      TDirectory *titDir;
      while ((titkey = TMVAGlob::NextKey(nextTitle,"TDirectory"))) {
        titDir = (TDirectory *)titkey->ReadObj();
        TString methodTitle;
        TMVAGlob::GetMethodTitle(methodTitle,titDir);
        TIter nextKey( titDir->GetListOfKeys() );
        TKey *hkey2;
        while ((hkey2 = TMVAGlob::NextKey(nextKey,"TH1"))) {
          TH1 *h = (TH1*)hkey2->ReadObj();
          TString hname = h->GetName();
          if (hname.Contains( hNameRef ) && hname.BeginsWith( "MVA_" )) {
            if (type==3 && h->GetMaximum() > y2) y2 = h->GetMaximum()*1.1;
          }
        }
      }
    }
    
    
    // draw empty frame
    if(gROOT->FindObject("frame")!=0) gROOT->FindObject("frame")->Delete();
    TH2F* frame = new TH2F( "frame", ftit, 500, x1, x2, 500, y1, y2 );
    frame->GetXaxis()->SetTitle( xtit );
    frame->GetYaxis()->SetTitle( ytit );
    TMVAGlob::SetFrameStyle( frame, 1.0 );
    
    frame->Draw();
    
    Int_t color = 1;
    Int_t nmva  = 0;
    TKey *key;
    
    TList hists;
    TList methods;
    UInt_t nm = TMVAGlob::GetListOfMethods( methods );
    if (nm==0){
      cout << "ups .. no methods found in to plot ROC curve for ... give up"  << endl;
      return;
    }
    //   TIter next(file->GetListOfKeys());
    TIter next(&methods);
    
    // loop over all methods
    while ((key = (TKey*)next())) {
      TDirectory * mDir = (TDirectory*)key->ReadObj();
      TList titles;
      UInt_t ninst = TMVAGlob::GetListOfTitles(mDir,titles);
      if (ninst==0) cout << "hmm...  sorry, but this printout was supposed to be only to keep the compiler quite.. never supposed to happen :(" << endl;
      TIter nextTitle(&titles);
      TKey *titkey;
      TDirectory *titDir;
      while ((titkey = TMVAGlob::NextKey(nextTitle,"TDirectory"))) {
        titDir = (TDirectory *)titkey->ReadObj();
        TString methodTitle;
        TMVAGlob::GetMethodTitle(methodTitle,titDir);
        TIter nextKey( titDir->GetListOfKeys() );
        TKey *hkey2;
        while ((hkey2 = TMVAGlob::NextKey(nextKey,"TH1"))) {
          TH1 *h = (TH1*)hkey2->ReadObj();
          TString hname = h->GetName();
          if (hname.Contains( hNameRef ) && hname.BeginsWith( "MVA_" )) {
            h->SetLineWidth(3);
            h->SetLineColor(color);
            color++; if (color == 5 || color == 10 || color == 11) color++;
            h->Draw("csame");
            hists.Add(h);
            nmva++;
          }
        }
      }
    }
    
    while (hists.GetSize()) {
      TListIter hIt(&hists);
      TH1* hist(0);
      Double_t largestInt=-1;
      TH1* histWithLargestInt(0);
      while ((hist = (TH1*)hIt())!=0) {
        Double_t integral = hist->Integral(1,hist->FindBin(0.9999));
        cout << "integral: " << integral << endl;
        if (integral>largestInt) {
          largestInt = integral;
          histWithLargestInt = hist;
        }
      }
      if (histWithLargestInt == 0) {
        cout << "ERROR - unknown hist \"histWithLargestInt\" --> serious problem in ROOT file" << endl;
        break;
      }
      legend->AddEntry(histWithLargestInt,Form("%s (integral: %.3f)", (TString(histWithLargestInt->GetTitle()).ReplaceAll("MVA_","")).Data(), (histWithLargestInt->Integral()/100.)),"l");
      hists.Remove(histWithLargestInt);
    }
    
    // rescale legend box size
    // current box size has been tuned for 3 MVAs + 1 title
    if (type == 1) {
      dyH *= (1.0 + Float_t(nmva - 3.0)/4.0);
      legend->SetY1( y0H - dyH );
    }
    else {
      dyH *= (Float_t(TMath::Min(10,nmva) - 3.0)/4.0);
      legend->SetY2( y0H + dyH);
    }
    
    // redraw axes
    frame->Draw("sameaxis");
    legend->Draw("same");
    
    // ============================================================
    
    if (__PLOT_LOGO__) TMVAGlob::plot_logo();
    
    // ============================================================
    
    c->Update();
    
    TString fname = outdir + "/" + hNameRef;
    if (TString(BinDir->GetName()).Contains("multicut")){
      TString fprepend(BinDir->GetName());
      fprepend.ReplaceAll("multicutMVA_","");
      fname = outdir + "/" + fprepend + "_" + hNameRef;
    }
    if (__SAVE_IMAGE__) TMVAGlob::imgconv( c, fname );
    
    return;
  }
  
  void efficiencies(TString dataset,
		    TString fin , 
		    TString out_dir = "plots",
		    Int_t   type = 2, 
		    Bool_t  useTMVAStyle = kFALSE )
  {
     // argument: type = 1 --> plot efficiency(B) versus eff(S)
     //           type = 2 --> plot rejection (B) versus efficiency (S)
  
    cout << "Starting efficiencies" << endl;
    
     // set style and remove existing canvas'
     TMVAGlob::Initialize( useTMVAStyle );
  
     // checks if file with name "fin" is already open, and if not opens one
     TFile *file = (TFile*)gROOT->GetListOfFiles()->FindObject(fin);
     if (!file || !file->IsOpen()) {
           file = new TFile(fin);
     }
  
     file -> cd(dataset);

     plot_efficiencies(file, type, gDirectory, out_dir);
  
     cout << "Finishing efficiencies" << endl;
     
     return;
  }
  

  void correlations(TString dataset, 
		    TString fin , 
		    TString out_dir,
		    Bool_t  isRegression = false , 
		    Bool_t  /* greyScale */ = false, 
		    Bool_t  useTMVAStyle = true )
  {

    // set style and remove existing canvas'
    TMVAGlob::Initialize( useTMVAStyle );

    // checks if file with name "fin" is already open, and if not opens one
    TFile* file = TMVAGlob::OpenFile( fin );  

    // signal and background or regression problem
    Int_t ncls = (isRegression ? 1 : 2 );
    TString hName[2] = { "CorrelationMatrixS", "CorrelationMatrixB" };
    if (isRegression) hName[0]= "CorrelationMatrix";
    const Int_t width = 600;
    for (Int_t ic=0; ic<ncls; ic++) {

      TH2* h2 = dynamic_cast<TH2*> (file->GetDirectory(dataset.Data())->Get( hName[ic] ));
      if(!h2) {
	cout << "Did not find histogram " << hName[ic] << " in " << fin << endl;
	continue;
      }

      TCanvas* c = new TCanvas( hName[ic], 
                                Form("Correlations between MVA input variables (%s)", 
                                     (isRegression ? "" : (ic==0 ? "signal" : "background"))), 
                                ic*(width+5)+200, 0, width, width ); 
      Float_t newMargin1 = 0.13;
      Float_t newMargin2 = 0.15;
      if (gConfig().fVariablePlotting.fUsePaperStyle) newMargin2 = 0.13;

      c->SetGrid();
      c->SetTicks();
      c->SetLeftMargin  ( newMargin2 );
      c->SetBottomMargin( newMargin2 );
      c->SetRightMargin ( newMargin1 );
      c->SetTopMargin   ( newMargin1 );
      gStyle->SetPalette( 1, 0 );


      gStyle->SetPaintTextFormat( "3g" );

      h2->SetMarkerSize( 1.5 );
      h2->SetMarkerColor( 0 );
      Float_t labelSize = 0.040;
      h2->GetXaxis()->SetLabelSize( labelSize );
      h2->GetYaxis()->SetLabelSize( labelSize );
      h2->LabelsOption( "d" );
      h2->SetLabelOffset( 0.011 );// label offset on x axis    

      h2->Draw("colz"); // color pads   
      c->Update();

      // modify properties of paletteAxis
      TPaletteAxis* paletteAxis = (TPaletteAxis*)h2->GetListOfFunctions()->FindObject( "palette" );
      paletteAxis->SetLabelSize( 0.03 );
      paletteAxis->SetX1NDC( paletteAxis->GetX1NDC() + 0.02 );

      h2->Draw("textsame");  // add text

      // add comment    
      TText* t = new TText( 0.53, 0.88, "Linear correlation coefficients in %" );
      t->SetNDC();
      t->SetTextSize( 0.026 );
      t->AppendPad();    

      // TMVAGlob::plot_logo( );
      c->Update();

      TString fname = out_dir + "/";
      fname += hName[ic];
      TMVAGlob::imgconv( c, fname );
    }
  }

  void variables(TString dataset, 
		 TString fin, 
		 TString dirName = "" , 
		 TString title = "" ,
		 TString out_dir = "plots",
		 Bool_t  isRegression = false, 
		 Bool_t  useTMVAStyle = true 
		 ){
    
    TString outfname = dirName;
    outfname.ToLower(); 
    outfname.ReplaceAll( "input", ""  );

    // set style and remove existing canvas'
    TMVAGlob::Initialize( useTMVAStyle );

    // obtain shorter histogram title 
    TString htitle = title; 
    htitle.ReplaceAll("variables ","variable");
    htitle.ReplaceAll("and target(s)","");
    htitle.ReplaceAll("(training sample)","");

    // checks if file with name "fin" is already open, and if not opens one
    TFile* file = TMVAGlob::OpenFile( fin );

    TDirectory* dir = (TDirectory*)file->GetDirectory(dataset.Data())->Get(dirName );
    if (dir==0) {
      cout << "No information about " << title << " available in directory " << dirName << " of file " << fin << endl;
      return;
    }
    dir->cd();

    // how many plots are in the directory?
    Int_t noPlots = TMVAGlob::GetNumberOfInputVariables( dir ) +
      TMVAGlob::GetNumberOfTargets( dir );

    // define Canvas layout here!
    // default setting
    Int_t xPad;  // no of plots in x
    Int_t yPad;  // no of plots in y
    Int_t width; // size of canvas
    Int_t height;
    switch (noPlots) {
    case 1:
      xPad = 1; yPad = 1; width = 550; height = 0.90*width; break;
    case 2:
      xPad = 2; yPad = 1; width = 600; height = 0.50*width; break;
    case 3:
      xPad = 3; yPad = 1; width = 900; height = 0.4*width; break;
    case 4:
      xPad = 2; yPad = 2; width = 600; height = width; break;
    default:
      xPad = 3; yPad = 2; width = 800; height = 0.55*width; break;
    }

    Int_t noPadPerCanv = xPad * yPad ;

    // counter variables
    Int_t countCanvas = 0;
    Int_t countPad    = 0;

    // loop over all objects in directory
    TCanvas* canv = 0;
    TKey*    key  = 0;
    Bool_t   createNewFig = kFALSE;
    TIter next(dir->GetListOfKeys());
    while ((key = (TKey*)next())) {
      if (key->GetCycle() != 1) continue;

      if (!TString(key->GetName()).Contains("__Signal") && 
          !(isRegression && TString(key->GetName()).Contains("__Regression"))) continue;

      // make sure, that we only look at histograms
      TClass *cl = gROOT->GetClass(key->GetClassName());
      if (!cl->InheritsFrom("TH1")) continue;
      TH1 *sig = (TH1*)key->ReadObj();
      TString hname(sig->GetName());

      // create new canvas
      if (countPad%noPadPerCanv==0) {
	++countCanvas;
	canv = new TCanvas( Form("canvas%d", countCanvas), title,
			    countCanvas*50+50, countCanvas*20, width, height );
	canv->Divide(xPad,yPad);
	canv->Draw();
      }

      TPad* cPad = (TPad*)canv->cd(countPad++%noPadPerCanv+1);
      
      // find the corredponding backgrouns histo
      TString bgname = hname;
      bgname.ReplaceAll("__Signal","__Background");
      TH1 *bgd = (TH1*)dir->Get(bgname);
      if (bgd == NULL) {
	cout << "ERROR!!! couldn't find background histo for" << hname << endl;
	return;
      }

      // this is set but not stored during plot creation in MVA_Factory
      TMVAGlob::SetSignalAndBackgroundStyle( sig, (isRegression ? 0 : bgd) );            

      sig->SetTitle( TString( htitle ) + ": " + sig->GetTitle() );
      TMVAGlob::SetFrameStyle( sig, 1.2 );

      // normalise both signal and background
      if (!isRegression) TMVAGlob::NormalizeHists( sig, bgd );
      else {
	// change histogram title for target
	TString nme = sig->GetName();
	if (nme.Contains( "_target" )) {
	  TString tit = sig->GetTitle();
	  sig->SetTitle( tit.ReplaceAll("Input variable", "Regression target" ) );
	}
      }

      // finally plot and overlay
      Float_t sc = 1.1;
      if (countPad == 1) sc = 1.3;
      sig->SetMaximum( TMath::Max( sig->GetMaximum(), bgd->GetMaximum() )*sc );
      sig->Draw( "hist" );
      cPad->SetLeftMargin( 0.17 );

      sig->GetYaxis()->SetTitleOffset( 1.70 );
      if (!isRegression) {
	bgd->Draw("histsame");
	TString ytit = TString("(1/N) ") + sig->GetYaxis()->GetTitle();
	sig->GetYaxis()->SetTitle( ytit ); // histograms are normalised
      }

      // Draw legend
      if (countPad == 1 && !isRegression) {
	TLegend *legend= new TLegend( cPad->GetLeftMargin(), 
				      1-cPad->GetTopMargin()-.15, 
				      cPad->GetLeftMargin()+.4, 
				      1-cPad->GetTopMargin() );
	legend->SetFillStyle(1);
	legend->AddEntry(sig,"Signal","F");
	legend->AddEntry(bgd,"Background","F");
	legend->SetBorderSize(1);
	legend->SetMargin( 0.3 );
	legend->Draw("same");
      } 

      // redraw axes
      sig->Draw("sameaxis");

      // text for overflows
      Int_t    nbin = sig->GetNbinsX();
      Double_t dxu  = sig->GetBinWidth(0);
      Double_t dxo  = sig->GetBinWidth(nbin+1);
      TString uoflow = "";
      if (isRegression) {
	uoflow = Form( "U/O-flow: %.1f%% / %.1f%%", 
		       sig->GetBinContent(0)*dxu*100, sig->GetBinContent(nbin+1)*dxo*100 );
      }
      else {
	uoflow = Form( "U/O-flow (S,B): (%.1f, %.1f)%% / (%.1f, %.1f)%%", 
		       sig->GetBinContent(0)*dxu*100, bgd->GetBinContent(0)*dxu*100,
		       sig->GetBinContent(nbin+1)*dxo*100, bgd->GetBinContent(nbin+1)*dxo*100 );
      }
  
      TText* t = new TText( 0.98, 0.14, uoflow );
      t->SetNDC();
      t->SetTextSize( 0.040 );
      t->SetTextAngle( 90 );
      t->AppendPad();    

      // save canvas to file
      if (countPad%noPadPerCanv==0) {
	TString fname = Form( "%s/%s_c%i", out_dir.Data(), outfname.Data(), countCanvas );
	TMVAGlob::plot_logo();
	TMVAGlob::imgconv( canv, fname );
	createNewFig = kFALSE;
      }
      else {
	createNewFig = kTRUE;
      }
    }
   
    if (createNewFig) {
      TString fname = Form( "%s/%s_c%i", out_dir.Data(), outfname.Data(), countCanvas );
      TMVAGlob::plot_logo();
      TMVAGlob::imgconv( canv, fname );
      createNewFig = kFALSE;
    }

    return;
  }

}
  
/* File strucure:

   TDirectoryFile* dataset dataset
     KEY: TH2F CorrelationMatrixS - Correlation Matrix (signal)
     KEY: TH2F CorrelationMatrixB - Correlation Matrix (background)
     KEY: TDirectoryFile InputVariables_Id - InputVariables_Id
     KEY: TDirectoryFile Method_BDTG - Directory for all BDT methods
     KEY: TTree TestTree - TestTree
     KEY: TTree TrainTree - TrainTree

*/

void plotAll(TString input_folder  = "", 
	     TString input_file    = "",
	     TString output_dir    = "plots",
	     TString input_dataset = "dataset"
	     ){

  // Create output directory
  TString mkdir = "mkdir -p " + output_dir;
  gSystem -> Exec(mkdir);
  TString copy_cmd = "cp /afs/cern.ch/user/n/ntrevisa/public/utils/index.php " + output_dir;
  gSystem -> Exec(copy_cmd);
  copy_cmd = "cp /work/ntrevisa/index.php " + output_dir;
  gSystem -> Exec(copy_cmd);

  vector<TString> inputs;
  inputs.push_back(input_folder);

  vector<TString> configurations;
  configurations.push_back(input_file);    

  for(auto& dir : inputs)
    {
      TString dataset("TrainTree");
      dataset="TestTree";
      dataset="Method_BDT";
      //dataset="BDTMitFisher";
      dataset="";
      
      for(auto& conf : configurations)
        {
	  // MVAs
          MY::mvas(input_dataset, Form("%s/%s.root", dir.Data(), conf.Data())  , TMVA::kCompareType, output_dir);
          
	  // Efficiencies
          MY::efficiencies(input_dataset, Form("%s/%s.root", dir.Data(), conf.Data()), output_dir);
          
	  // Correlations 
	  // From: https://github.com/root-project/root/blob/master/tmva/tmvagui/src/correlations.cxx
          MY::correlations(input_dataset, Form("%s/%s.root", dir.Data(), conf.Data()), output_dir);
          
	  // Variables
          MY::variables(input_dataset, Form("%s/%s.root", dir.Data(), conf.Data()), "InputVariables_Id", "", output_dir);
          
	  // BDT control plots
	  // From: https://github.com/root-project/root/blob/master/tmva/tmvagui/src/BDTControlPlots.cxx
          MY::BDTControlPlots(input_dataset, Form("%s/%s.root", dir.Data(), conf.Data()), "Method_BDTG", output_dir);

          
        } // End loop on configurations
    } // End loop on input dirs

  gApplication->Terminate();
}
