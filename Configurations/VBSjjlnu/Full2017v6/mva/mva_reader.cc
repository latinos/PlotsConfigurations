#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluator.hh"

#include "TMath.h"

#include <cmath>
#include <string>
#include <iostream>

using namespace std;
using namespace NNEvaluation;

class MVAReader : public multidraw::TTreeFunction {
public:
  
  MVAReader(string model_path, string configs_path);

  char const* getName() const override { return "MVAReader"; }
  // TTreeFunction* clone() const override { return new MVAReader(file_ele, file_mu); }
  TTreeFunction* clone() const override { return new MVAReader(model_path, configs_path); }

  string model_path;
  string configs_path;
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  DNNEvaluator* dnn_tensorflow;

  IntValueReader*  nvtx{};
  IntArrayReader*  Lepton_pdgId{};

};

MVAReader::MVAReader(string model_path, string configs_path):
    model_path(model_path), configs_path(configs_path)
{
    dnn_tensorflow = new DNNEvaluator(model_path, configs_path);

}


double
MVAReader::evaluate(unsigned)
{
  
}

void
MVAReader::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch( nvtx, "PV_npvsGood");
    _library.bindBranch( Lepton_pdgId, "Lepton_pdgId");
}

