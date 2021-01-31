#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TGraph.h"
#include "TFile.h"
#include "TF1.h"
#include "TH2F.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>
#include <map>
#include <vector>

using namespace std;

#ifndef BtagSFNormCorrection_
#define BtagSFNormCorrection_


typedef TTreeReaderValue<Double_t> DoubleValueReader;

class BtagSFNormCorrection : public multidraw::TTreeFunction {
public:
  BtagSFNormCorrection(const char* file, const char* shape);
  ~BtagSFNormCorrection();

  char const* getName() const override { return "BtagSFNormCorrection"; }
  TTreeFunction* clone() const override { return new BtagSFNormCorrection(filename_, shape_); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  TString filename_;
  TString shape_;
  TH1D* histo_res_onshell;
  TH1D* histo_res_offshell;
  TH1D* histo_boost_onshell;
  TH1D* histo_boost_offshell;
  
  DoubleValueReader* nJetsBtaggable{};
  IntValueReader* VBS_category{};
  FloatValueReader* mjj_vjet{};

  float getHistoValue(TH1D*histo, double X){
    double result = 1.;
    double maxX = histo->GetXaxis()->GetBinCenter(histo->GetNbinsX());
    double minX = histo->GetXaxis()->GetBinLowEdge(1);
    if (X > maxX) result = histo->GetBinContent(histo->GetNbinsX());
    else if (X < minX) result = histo->GetBinContent(1);
    else   result = histo->GetBinContent(histo->FindBin(X));
    //std::cout << "min "<<minX <<" max:"<<maxX <<"  X: "<< X << "  result: "<<result <<std::endl;
    return result;
  }

};

BtagSFNormCorrection::BtagSFNormCorrection(const char* file, const char* shape) :
  TTreeFunction(), filename_(file), shape_(shape)
{
  TFile rootfile {file};
  histo_res_onshell = static_cast<TH1D*>(rootfile.Get("historatio_res_onshell_"+shape_));
  histo_res_offshell = static_cast<TH1D*>(rootfile.Get("historatio_res_offshell_"+shape_));
  histo_boost_onshell = static_cast<TH1D*>(rootfile.Get("historatio_boost_onshell_"+shape_));
  histo_boost_offshell = static_cast<TH1D*>(rootfile.Get("historatio_boost_offshell_"+shape_));
  histo_res_onshell->SetDirectory(0);
  histo_res_offshell->SetDirectory(0);
  histo_boost_onshell->SetDirectory(0);
  histo_boost_offshell->SetDirectory(0);
  rootfile.Close();

}

BtagSFNormCorrection::~BtagSFNormCorrection() {
  delete histo_res_onshell;
  delete histo_res_offshell;
  delete histo_boost_onshell;
  delete histo_boost_offshell;
}

double
BtagSFNormCorrection::evaluate(unsigned)
{
  int vbs_cat = *(VBS_category->Get());
  int nJets = static_cast<int>(*(nJetsBtaggable->Get()));
  float mjj =  *(mjj_vjet->Get());

  if (vbs_cat <= 0){
    return 1.;
  }else if (vbs_cat ==0 ){
    if (mjj > 70 && mjj < 115)                       return getHistoValue(histo_boost_onshell, nJets);
    else if( mjj > 40 && (mjj <= 70 || mjj >= 115) ) return getHistoValue(histo_boost_offshell, nJets);
  }else if(vbs_cat ==1){
    if (mjj > 65 && mjj < 105)                       return getHistoValue(histo_res_onshell, nJets);
    else if( mjj > 40 && (mjj <= 65 || mjj >= 105) ) return getHistoValue(histo_res_offshell, nJets);
  }else{
    return 1.;
  }
}

void
BtagSFNormCorrection::bindTree_(multidraw::FunctionLibrary& _library)
{   
  _library.bindBranch( VBS_category, "VBS_category");
  _library.bindBranch( nJetsBtaggable, "nJetsBtag");
  _library.bindBranch( mjj_vjet, "mjj_vjet");
}


#endif
