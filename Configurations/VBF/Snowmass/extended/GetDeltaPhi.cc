#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>
#include <iostream>

using namespace std;

class GetDeltaPhi : public multidraw::TTreeFunction{
public:
  GetDeltaPhi();

  char const* getName() const override{
    return "GetDeltaPhi";
  }
  
  TTreeFunction* clone() const override { 
    return new GetDeltaPhi(); 
  }

  unsigned getNdata() override { 
    return 1; 
  }

  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  FloatArrayReader* CleanJet_phi{};
  FloatArrayReader* CleanJet_eta{};
  UIntValueReader*  nCleanJet{};

};

GetDeltaPhi::GetDeltaPhi() :
  TTreeFunction()
{
}

// Function implementation

double GetDeltaPhi::evaluate(unsigned){

  unsigned nJets{*nCleanJet->Get()};

  // cout<<"nJets = "<<nJets<<endl;

  if (nJets > 1){

    double phi1{CleanJet_phi->At(0)};
    double phi2{CleanJet_phi->At(1)};

    double eta1{CleanJet_eta->At(0)};
    double eta2{CleanJet_eta->At(1)};

    double output;

    // Adjust dphijj definition according to
    // https://arxiv.org/pdf/2002.09888.pdf (eq. 47)
    if (eta1 > eta2)       output = phi1 - phi2;
    else if (eta1 <= eta2) output = phi2 - phi1;
    
    // To have delta_phi in (-pi, pi) interval
    // https://root.cern.ch/doc/master/TVector2_8cxx_source.html#l00103
    if (output >  TMath::Pi()) output -= 2*TMath::Pi();
    if (output < -TMath::Pi()) output += 2*TMath::Pi();
    
    // cout<<"DeltaPhi = "<<output<<endl;

    return output;
  }
  else
    return -9999.;
}

void GetDeltaPhi::bindTree_(multidraw::FunctionLibrary& _library){

  _library.bindBranch(CleanJet_phi, "CleanJet_phi");
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(nCleanJet,    "nCleanJet");
}
