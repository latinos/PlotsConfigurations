#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>
#include <map>

#include "TVector2.h"
#include "TString.h"
#include "TFile.h"
#include "TH2.h"
#include "TH2F.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#include <iostream>

class WeightReader : public multidraw::TTreeFunction {
public:
  WeightReader(char const* fileName, char const* histName);

  char const* getName() const override { return "WeightReader"; }
  TTreeFunction* clone() const override { return new WeightReader(fileName_.Data(), histName_.Data()); }
  
  void beginEvent(long long) override;
  unsigned getNdata() override { return weightReader.size(); }
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  IntArrayReader*   Lepton_pdgId{};
  IntArrayReader*   Lepton_electronIdx{};
  FloatArrayReader* Electron_deltaEtaSC{};


  std::vector<double> weightReader{};
  void setValues();
  double GetBinContent4Weight(TH1* hist, double valx, double sys);
  double GetBinContent4Weight(TH2* hist, double valx, double valy, double sys);

  TString fileName_{};
  TString histName_{};

  TFile* rootFile{};
  TH2F* histWeightReader{};


};


void
WeightReader::beginEvent(long long _iEntry)
{
  setValues();
}


WeightReader::WeightReader(char const* fileName, char const* histName) :
  TTreeFunction(),
  fileName_{fileName},
  histName_{histName}
{
  // read Weight, from txt file.
  // list up lepton Weights (RECO, ID, Trigger) on the txt file.
  // read Weights in map<TString, TH2D>

  rootFile = new TFile(fileName_);
  histWeightReader = (TH2F*)rootFile->Get(histName_);
}


double
WeightReader::evaluate(unsigned iJ)
{
  // weightReader[0] : central, weightReader[1] : up, weightReader[2] : down
  return weightReader[iJ];
}


void
WeightReader::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
  _library.bindBranch(Lepton_electronIdx, "Lepton_electronIdx");
  _library.bindBranch(Electron_deltaEtaSC, "Electron_deltaEtaSC");
}


void
WeightReader::setValues()
{

  weightReader.clear();
  double lepEta{Lepton_eta->At(0)}; //TODO will use scEta for electron
  double lepPt{Lepton_pt->At(0)};
  int lepEleIdx{Lepton_electronIdx->At(0)};
  if(lepEleIdx>=0){
    double lepDeltaEta=Electron_deltaEtaSC->At(lepEleIdx);
    double lepSCEta=lepEta+lepDeltaEta;
    weightReader.push_back(this->GetBinContent4Weight(histWeightReader, lepSCEta, lepPt, 0));
  }else{
    weightReader.push_back(1.);
  }
  //TODO push back up/down systematic

}


double WeightReader::GetBinContent4Weight(TH2* hist, double valx, double valy, double sys){
  double xmin=hist->GetXaxis()->GetXmin();
  double xmax=hist->GetXaxis()->GetXmax();
  double ymin=hist->GetYaxis()->GetXmin();
  double ymax=hist->GetYaxis()->GetXmax();
  if(xmin>=0) valx=fabs(valx);
  if(valx<xmin) valx=xmin+0.001;
  if(valx>xmax) valx=xmax-0.001;
  if(ymin>=0) valy=fabs(valy);
  if(valy<ymin) valy=ymin+0.001;
  if(valy>ymax) valy=ymax-0.001;
  return hist->GetBinContent(hist->FindBin(valx,valy))+sys*hist->GetBinError(hist->FindBin(valx,valy));
}
    
double WeightReader::GetBinContent4Weight(TH1* hist, double valx, double sys){
  double xmin=hist->GetXaxis()->GetXmin();
  double xmax=hist->GetXaxis()->GetXmax();
  if(xmin>=0) valx=fabs(valx);
  if(valx<xmin) valx=xmin+0.001;
  if(valx>xmax) valx=xmax-0.001;
  return hist->GetBinContent(hist->FindBin(valx)) + sys*hist->GetBinError(hist->FindBin(valx));
}

