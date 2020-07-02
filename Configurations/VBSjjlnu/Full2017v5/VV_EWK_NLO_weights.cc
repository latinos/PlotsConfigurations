#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TGraph.h"
#include "TFile.h"
#include "TF1.h"
#include "TH2F.h"
#include "TVector2.h"
#include "TSystem.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>
#include <map>

using namespace std;

class VV_EWKcorrection : public multidraw::TTreeFunction {
public:
  VV_EWKcorrection(char * file, int type);

  char const* getName() const override { return "VV_EWKcorrection"; }
  TTreeFunction* clone() const override { return new VV_EWKcorrection(weights_file,type); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  char * weights_file;
  int type;
  
  qq2vvEWKcorrections * corr_obj;

  FloatArrayReader* LHEPart_pt{};
  FloatArrayReader* LHEPart_eta{};
  FloatArrayReader* LHEPart_phi{};
  IntArrayReader*   LHEPart_pdgId{};
  FloatValueReader* Generator_x1{};
  FloatValueReader* Generator_x2{};
  IntValueReader*   Generator_id1{};
  IntValueReader*   Generator_id2{};

};

VV_EWKcorrection::VV_EWKcorrection(char * file, int type) :
  TTreeFunction(), weights_file(file), type(type)
{
  // Load Graph for correction
  corr_obj = new qq2vvEWKcorrections(file);

}


double
VV_EWKcorrection::evaluate(unsigned)
{
  float ewknloW = -1;
  float ewknloWuncertainty = -1;

  // Since in nanoAOD no V are saved, since not in status 1, 
  //   reconstruct Z and W from its decays.
  //   Only leptonic decays are considered, but if needed it can be extended

  /////////////////////////////////
  // type = 1  -->  WW
  if (type == 1){

    float ptl1 = -1;
    float ptv1 = -1;
    float etal1 = -1;
    float etav1 = -1; 
    float phil1 = -1; 
    float phiv1 = -1;
    float ptl2 = -1;
    float ptv2 = -1;
    float etal2 = -1;
    float etav2 = -1; 
    float phil2 = -1; 
    float phiv2 = -1;
    int idl1 = -1;
    int idv1 = -1;
    int idl2 = -1;
    int idv2 = -1;

    for (int ip = 0; ip < LHEPart_pt->GetSize(); ip++){
      int pdgid = abs(LHEPart_pdgId->At(ip));

      if (pdgid == 11 || pdgid == 13  || pdgid == 15){
        if (ptl1 == -1){
          ptl1 = LHEPart_pt->At(ip);
          etal1 = LHEPart_eta->At(ip);
          phil1 = LHEPart_phi->At(ip);
          idl1 =  LHEPart_pdgId->At(ip);
        }
        else if (ptl2 == -1){
          ptl2 = LHEPart_pt->At(ip);
          etal2 = LHEPart_eta->At(ip);
          phil2 = LHEPart_phi->At(ip);
          idl2 =  LHEPart_pdgId->At(ip);
        }
      }
      if (pdgid == 12 || pdgid == 14  || pdgid == 16){
        if (ptv1 == -1){
          ptv1 = LHEPart_pt->At(ip);
          etav1 = LHEPart_eta->At(ip);
          phiv1 = LHEPart_phi->At(ip);
          idv1 =  LHEPart_pdgId->At(ip);
        }
        else if (ptv2 == -1){
          ptv2 = LHEPart_pt->At(ip);
          etav2 = LHEPart_eta->At(ip);
          phiv2 = LHEPart_phi->At(ip);
          idv2 =  LHEPart_pdgId->At(ip);
        }
      }
    }

    int id1 = Generator_id1;
    int id2 = Generator_id2;
    float x1 = Generator_x1;
    float x2 = Generator_x2;

    // if for any reason I was not able to assign the leptons, set the weight to -2 --> it can be followed up later
    if (ptl1 == -1 || ptv1 == -1 || ptl2 == -1 || ptv2 == -1){
      ewknloW = -2;
    } else{
      ewknloW = corr_obj->getqq2WWEWKCorr(ptl1, etal1, phil1, idl1, ptl2, 
                    etal2, phil2, idl2, ptv1, etav1, phiv1, ptv2, etav2, phiv2, x1, x2, id1, id2);
    }
  }

  ////////////////////////////////7
  // type= 2  --> WZ

  if (type == 2){ 
    float ptl1 = -1;
    float ptl2 = -1;
    float ptl3 = -1;
    float etal1 = -1;
    float etal2 = -1; 
    float etal3 = -1;
    float phil1 = -1; 
    float phil2 = -1;
    float phil3 = -1;
    float ptv1 = -1;
    float etav1 = -1;
    float phiv1 = -1;
    int idl1 = -1;
    int idl2 = -1;
    int idl3 = -1;
    int idv1 = -1;

    for (int ip = 0; ip < LHEPart_pt->GetSize(); ip++){
      int pdgid = abs(LHEPart_pdgId->At(ip));

      if (pdgid == 11 || pdgid == 13  || pdgid == 15){
        if (ptl1 == -1){
          ptl1 = LHEPart_pt->At(ip);
          etal1 = LHEPart_eta->At(ip);
          phil1 = LHEPart_phi->At(ip);
          idl1 =  LHEPart_pdgId->At(ip);
        }
        else if (ptl2 == -1){
          ptl2 = LHEPart_pt->At(ip);
          etal2 = LHEPart_eta->At(ip);
          phil2 = LHEPart_phi->At(ip);
          idl2 =  LHEPart_pdgId->At(ip);
        }else if (ptl3 == -1){
          ptl3 = LHEPart_pt->At(ip);
          etal3 = LHEPart_eta->At(ip);
          phil3 = LHEPart_phi->At(ip);
          idl3 =  LHEPart_pdgId->At(ip);
        }
      }

      if (pdgid == 12 || pdgid == 14  || pdgid == 16){
        if (ptv1 == -1){
          ptv1 = LHEPart_pt->At(ip);
          etav1 = LHEPart_eta->At(ip);
          phiv1 = LHEPart_phi->At(ip);
          idv1 =  LHEPart_pdgId->At(ip);
        }
      }


    }

    if (ptl1 == -1 || ptl2 == -1){
      ewknloW = -2;
    }else{
      TLorentzVector l1;
      TLorentzVector l2;
      l1.SetPtEtaPhiM(ptl1, etal1, phil1, 0); // everything massless ... at these energies! ... maybe the tau?
      l2.SetPtEtaPhiM(ptl2, etal2, phil2, 0);

      float vpt = (l1+l2).Pt();
      ewknloW = 1.;

      if (vpt > 0. and vpt < 35.){
        vpt = 35.;
      }
      if (vpt > 2000.){
        vpt = 2000.;
      }
      if (vpt > 0){
        ewknloW = graph_corr->Eval(vpt);
      }
    }
  }

  ////////////////////////////////////////////////
  // type == 3 ---> Zvv
  if (type == 3){
    float ptl1 = -1;
    float ptl2 = -1;
    float etal1 = -1;
    float etal2 = -1; 
    float phil1 = -1; 
    float phil2 = -1;
    int idl1 = -1;
    int idl2 = -1;

    for (int ip = 0; ip < LHEPart_pt->GetSize(); ip++){
      int pdgid = abs(LHEPart_pdgId->At(ip));

      // Taking neutrinos
      if (pdgid == 12 || pdgid == 14  || pdgid == 16){
        if (ptl1 == -1){
          ptl1 = LHEPart_pt->At(ip);
          etal1 = LHEPart_eta->At(ip);
          phil1 = LHEPart_phi->At(ip);
          idl1 =  LHEPart_pdgId->At(ip);
        }
      }else if (ptl2 == -1){
        ptl2 = LHEPart_pt->At(ip);
        etal2 = LHEPart_eta->At(ip);
        phil2 = LHEPart_phi->At(ip);
        idl2 =  LHEPart_pdgId->At(ip);
      }
    }

    if (ptl1 == -1 || ptl2 == -1){
      ewknloW = -2;
    }else{
      TLorentzVector l1;
      TLorentzVector l2;
      l1.SetPtEtaPhiM(ptl1, etal1, phil1, 0); // everything massless ... at these energies! ... maybe the tau?
      l2.SetPtEtaPhiM(ptl2, etal2, phil2, 0);

      float vpt = (l1+l2).Pt();
      ewknloW = 1.;

      if (vpt > 0. and vpt < 35.){
        vpt = 35.;
      }
      if (vpt > 2000.){
        vpt = 2000.;
      }
      if (vpt > 0){
        ewknloW = graph_corr->Eval(vpt);
      }
    }
  }

  return ewknloW;
}

void
VV_EWKcorrection::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(LHEPart_pt, "LHEPart_pt");
    _library.bindBranch(LHEPart_eta, "LHEPart_eta");
    _library.bindBranch(LHEPart_phi, "LHEPart_phi");
    _library.bindBranch(LHEPart_pdgId, "LHEPart_pdgId");
    _library.bindBranch(Generator_x1, "Generator_x1");
    _library.bindBranch(Generator_x2, "Generator_x2");
    _library.bindBranch(Generator_id1, "Generator_id1");
    _library.bindBranch(Generator_id2, "Generator_id2");
}

