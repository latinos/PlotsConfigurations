#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>

#include "TFile.h"
#include "TH2D.h"
#include "TString.h"
#include "TVector2.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include "Math/GenVector/VectorUtil.h"

#include <iostream>
using namespace ROOT::Math;

std::pair<int,int> maxMjjPair(vector<PtEtaPhiMVector> vectors){
    std::pair<int,int> current_max;
    // if (debug_) std::cout << "  - VBS jets" << std::endl;
    double maxMjj = -1.;
    for (int i=0; i< vectors.size()-1; ++i){
        for (int k=i+1; k<vectors.size() ; ++k){
            double mass = (vectors.at(i) + vectors.at(k)).M();
            // if (debug_) std::cout << "  - "<< i << "," << k<< " mass: "<< mass << std::endl;
            if (mass > maxMjj){
                maxMjj = mass;
                current_max = {i, k};
            }
        }
    }
    return current_max;
}

class ReweightGenLevel : public multidraw::TTreeFunction {
public:
  ReweightGenLevel(const char * weights_file, const char * histo_name );
  ~ReweightGenLevel(){delete _weights;};

  char const* getName() const override { return "ReweightGenLevel"; }
  TTreeFunction* clone() const override { return new ReweightGenLevel(_weights_file.Data(), _histo_name.Data()); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;
  

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  TString _weights_file;
  TString _histo_name; 
  TH2D* _weights;
  
  UIntValueReader* nGenPart{};
  IntArrayReader* GenPart_status{};
  IntArrayReader* GenPart_statusFlags{};
  IntArrayReader* GenPart_pdgId{};
  FloatArrayReader* GenPart_pt{};
  FloatArrayReader* GenPart_eta{};
  FloatArrayReader* GenPart_phi{};
  UIntValueReader* nGenJet{};
  FloatArrayReader* GenJet_pt{};
  FloatArrayReader* GenJet_eta{};
  FloatArrayReader* GenJet_phi{};
  FloatArrayReader* GenJet_mass{};
};

ReweightGenLevel::ReweightGenLevel(const char * weights_file,const char * histo_name ) :
  TTreeFunction(), _weights_file(weights_file), _histo_name(histo_name)
{
  TFile file {weights_file};
  file.GetObject(histo_name, _weights);
  _weights->SetDirectory(0);
  file.Close();
}

double
ReweightGenLevel::evaluate(unsigned)
{

  PtEtaPhiMVector lep;
  bool has_elemu = false;
  for (int i= 0; i<*(nGenPart->Get()); i++){
    int pdgid =  abs(GenPart_pdgId->At(i));
    if( GenPart_status->At(i)==1 && (GenPart_statusFlags->At(i) & 1)==1 && ( pdgid==11 || pdgid == 13)){
      has_elemu = true;
      lep = {GenPart_pt->At(i),GenPart_eta->At(i),GenPart_phi->At(i),0.};
    }
  }

  // If lepton pt < 10 or tau return weight=1
  if (!has_elemu || lep.Pt() < 10) return 1.0;

  vector<PtEtaPhiMVector> good_jets;
  unsigned nJ{*nGenJet->Get()};
  for (unsigned iJ{0}; iJ != nJ; ++iJ) {
    if (GenJet_pt->At(iJ) < 30.)  continue;

    PtEtaPhiMVector jet {GenJet_pt->At(iJ), GenJet_eta->At(iJ), GenJet_phi->At(iJ), GenJet_mass->At(iJ)};
    if (VectorUtil::DeltaR(jet.Vect(), lep.Vect()) > 0.4){
      good_jets.push_back(jet);
    }
  }

  int njets = good_jets.size();
  if(njets < 2) return 1.0;
  // Now we have a list of cleaned GenJets with at least 30 GeV of Pt and we need to take the max mjj pair
  std::pair<int,int> vbs_jets = maxMjjPair(good_jets);

  float vbs1pt = good_jets[vbs_jets.second].Pt();

  float maxNjets = _weights->GetXaxis()->GetBinCenter(_weights->GetNbinsX());
  float maxpt = _weights->GetYaxis()->GetBinCenter(_weights->GetNbinsY());
  
  if (vbs1pt > maxpt) vbs1pt = maxpt;
  if (njets > maxNjets) njets = maxNjets;
  
  double weight =  _weights->GetBinContent(_weights->FindBin(njets, vbs1pt));
  // std::cout << "njets " << njets << " vbs1pt "<< vbs1pt << " weight: "<< weight << std::endl;
  return weight;
}

void
ReweightGenLevel::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nGenPart, "nGenPart");
  _library.bindBranch(GenPart_status, "GenPart_status"),
  _library.bindBranch(GenPart_statusFlags, "GenPart_statusFlags");
  _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
  _library.bindBranch(GenPart_pt, "GenPart_pt");
  _library.bindBranch(GenPart_eta, "GenPart_eta");
  _library.bindBranch(GenPart_phi, "GenPart_phi");
  _library.bindBranch(nGenJet, "nGenJet");
  _library.bindBranch(GenJet_pt, "GenJet_pt");
  _library.bindBranch(GenJet_eta, "GenJet_eta");
  _library.bindBranch(GenJet_phi, "GenJet_phi");
  _library.bindBranch(GenJet_mass, "GenJet_mass");
}

