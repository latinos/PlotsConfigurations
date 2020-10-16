#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <tuple>

class Sip3dcut : public multidraw::TTreeFunction {
public:
  Sip3dcut();

  char const* getName() const override { return "Sip3dcut"; }
  TTreeFunction* clone() const override { return new Sip3dcut(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  

  void bindTree_(multidraw::FunctionLibrary&) override;
    
  IntArrayReader*  Lepton_eleIdx{};
  FloatArrayReader* Electron_sip3d{};
  FloatArrayReader* Lepton_eta{};
  
};

Sip3dcut::Sip3dcut() :
  TTreeFunction(){}


double
Sip3dcut::evaluate(unsigned)
{
   float lepton_eta = Lepton_eta->At(0);
   if (abs(lepton_eta) < 1.49) return 1;
   else{

       int ele_index = Lepton_eleIdx->At(0);

       if (ele_index == -1) return 1.; // it is a muon

       float sip3d = Electron_sip3d->At(ele_index);
       if (sip3d <  -2.22222*abs(lepton_eta) + 6.3333 ) return 1.;
       else return 0.;
   }
}

void
Sip3dcut::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(Lepton_eleIdx, "Lepton_electronIdx");
    _library.bindBranch(Lepton_eta, "Lepton_eta");
    _library.bindBranch(Electron_sip3d, "Electron_sip3d");
   
}
