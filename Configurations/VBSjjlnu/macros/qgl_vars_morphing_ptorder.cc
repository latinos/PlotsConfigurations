#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TFile.h"
#include "TGraph.h"
#include "TVector2.h"
#include "TSystem.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>

namespace multidraw {
  extern thread_local TTree* currentTree;
}


int isRunningSample(TString targetSample){
  TString currentSampleName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
  if ( currentSampleName.Contains(targetSample)) {
      return 1;
  }
  else return 0;
}

class QglVarsMorphingPtOrder : public multidraw::TTreeFunction {
public:
  QglVarsMorphingPtOrder(const char * type, const char * file,  const char * do_morph,
                    const char * morph_higheta_gluon ,const char * morph_loweta_gluon,
                    const char * morph_higheta_quark ,const char * morph_loweta_quark);
  QglVarsMorphingPtOrder(unsigned type, const char * file, const char * do_morph,
                    const char * morph_higheta_gluon ,const char * morph_loweta_gluon,
                    const char * morph_higheta_quark ,const char * morph_loweta_quark);
  char const* getName() const override { return "QglVarsMorphingPtOrder"; }
  TTreeFunction* clone() const override { return new QglVarsMorphingPtOrder(returnVar_, file_.c_str(), do_morph_.c_str(),
                                                morph_higheta_gluon_.c_str(),morph_loweta_gluon_.c_str(),
                                                morph_higheta_quark_.c_str(),morph_loweta_quark_.c_str() ); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  enum ReturnType {
      j0_qgl, j1_qgl,j2_qgl, j3_qgl, 
      j0_qglmorphed, j1_qglmorphed,j2_qglmorphed, j3_qglmorphed, 
      nVarTypes
  };


  void bindTree_(multidraw::FunctionLibrary&) override;

  unsigned returnVar_{nVarTypes};
  string file_;
  string do_morph_;
  static bool do_morph_gluon_loweta;
  static bool do_morph_gluon_higheta;
  static bool do_morph_quark_loweta;
  static bool do_morph_quark_higheta;
  string morph_higheta_gluon_;
  string morph_loweta_gluon_;
  string morph_higheta_quark_;
  string morph_loweta_quark_;
  static TGraph* morphing_function_higheta_gluon_;
  static TGraph* morphing_function_loweta_gluon_;
  static TGraph* morphing_function_higheta_quark_;
  static TGraph* morphing_function_loweta_quark_;

   static bool isRunningOnData;
 
  UIntValueReader* run{};
  UIntValueReader* luminosityBlock{};
  ULong64ValueReader* event{}; 

  static std::tuple<UInt_t, UInt_t, ULong64_t> currentEvent;

  static UIntValueReader*  nCleanJet;
  static IntArrayReader*  CleanJet_jetIdx;
  static FloatArrayReader*  CleanJet_eta;
  static FloatArrayReader* Jet_qgl;
  static IntArrayReader* Jet_partonFlavour;

  static std::array<double, nVarTypes> returnValues;

  static void setValues(UInt_t, UInt_t, ULong64_t);
  static float getMorphedGluon(float x, float eta);
  static float getMorphedQuark(float x, float eta);
};

std::tuple<UInt_t, UInt_t, ULong64_t> QglVarsMorphingPtOrder::currentEvent{};

UIntValueReader* QglVarsMorphingPtOrder::nCleanJet{};
IntArrayReader* QglVarsMorphingPtOrder::CleanJet_jetIdx{};
FloatArrayReader* QglVarsMorphingPtOrder::CleanJet_eta{};
IntArrayReader* QglVarsMorphingPtOrder::Jet_partonFlavour{};
FloatArrayReader* QglVarsMorphingPtOrder::Jet_qgl{};
TGraph* QglVarsMorphingPtOrder::morphing_function_higheta_gluon_{};
TGraph* QglVarsMorphingPtOrder::morphing_function_loweta_gluon_{};
TGraph* QglVarsMorphingPtOrder::morphing_function_higheta_quark_{};
TGraph* QglVarsMorphingPtOrder::morphing_function_loweta_quark_{};
bool QglVarsMorphingPtOrder::isRunningOnData{false};
bool QglVarsMorphingPtOrder::do_morph_gluon_loweta{false};
bool QglVarsMorphingPtOrder::do_morph_gluon_higheta{false};
bool QglVarsMorphingPtOrder::do_morph_quark_loweta{false};
bool QglVarsMorphingPtOrder::do_morph_quark_higheta{false};


std::array<double, QglVarsMorphingPtOrder::nVarTypes> QglVarsMorphingPtOrder::returnValues{};

QglVarsMorphingPtOrder::QglVarsMorphingPtOrder(char const* _type,   const char * file, const char * do_morph,
                    const char * morph_higheta_gluon ,const char * morph_loweta_gluon,
                    const char * morph_higheta_quark ,const char * morph_loweta_quark  ) :
  TTreeFunction(), file_(file),  do_morph_(do_morph),
  morph_higheta_gluon_(morph_higheta_gluon),morph_loweta_gluon_(morph_loweta_gluon),
  morph_higheta_quark_(morph_higheta_quark),morph_loweta_quark_(morph_loweta_quark)
{
  std::string type(_type);
  if (type ==  "j0_qgl")
    returnVar_ = j0_qgl;
  else if (type == "j1_qgl")
    returnVar_ = j1_qgl;
  else if (type == "j2_qgl")
    returnVar_ =j2_qgl;
  else if (type == "j3_qgl")
    returnVar_ = j3_qgl;
  
  else if (type ==  "j0_qglmorphed")
    returnVar_ = j0_qglmorphed;
  else if (type == "j1_qglmorphed")
    returnVar_ = j1_qglmorphed;
  else if (type == "j2_qglmorphed")
    returnVar_ = j2_qglmorphed;
  else if (type == "j3_qglmorphed")
    returnVar_ = j3_qglmorphed;
  
  else
    throw std::runtime_error("unknown return type " + type);
  
  // Read the binary flag
  int do_morph_flags = std::stoi(do_morph_,0,2);
  QglVarsMorphingPtOrder::do_morph_gluon_loweta = do_morph_flags & 1;
  QglVarsMorphingPtOrder::do_morph_gluon_higheta = do_morph_flags >> 1 & 1;
  QglVarsMorphingPtOrder::do_morph_quark_loweta = do_morph_flags >> 2 & 1;
  QglVarsMorphingPtOrder::do_morph_quark_higheta = do_morph_flags >> 3 & 1;

  TFile rfile {file, "READ"};
  QglVarsMorphingPtOrder::morphing_function_higheta_gluon_ =  (TGraph*) rfile.Get(morph_higheta_gluon);
  QglVarsMorphingPtOrder::morphing_function_loweta_gluon_ =  (TGraph*) rfile.Get(morph_loweta_gluon);
  QglVarsMorphingPtOrder::morphing_function_higheta_quark_ =  (TGraph*) rfile.Get(morph_higheta_quark);
  QglVarsMorphingPtOrder::morphing_function_loweta_quark_ =  (TGraph*) rfile.Get(morph_loweta_quark);
  rfile.Close();

}


QglVarsMorphingPtOrder::QglVarsMorphingPtOrder(unsigned type,const char * file, const char * do_morph,
                    const char * morph_higheta_gluon ,const char * morph_loweta_gluon,
                    const char * morph_higheta_quark ,const char * morph_loweta_quark ) :
  TTreeFunction(),
  returnVar_(type),file_(file),  do_morph_(do_morph),
  morph_higheta_gluon_(morph_higheta_gluon),morph_loweta_gluon_(morph_loweta_gluon),
  morph_higheta_quark_(morph_higheta_quark),morph_loweta_quark_(morph_loweta_quark)
  {
    // Read the binary flag
    int do_morph_flags = std::stoi(do_morph_,0,2);
    QglVarsMorphingPtOrder::do_morph_gluon_loweta = do_morph_flags & 1;
    QglVarsMorphingPtOrder::do_morph_gluon_higheta = do_morph_flags >> 1 & 1;
    QglVarsMorphingPtOrder::do_morph_quark_loweta = do_morph_flags >> 2 & 1;
    QglVarsMorphingPtOrder::do_morph_quark_higheta = do_morph_flags >> 3 & 1;
   
    TFile rfile {file, "READ"};
    QglVarsMorphingPtOrder::morphing_function_higheta_gluon_ =  (TGraph*) rfile.Get(morph_higheta_gluon);
    QglVarsMorphingPtOrder::morphing_function_loweta_gluon_ =  (TGraph*) rfile.Get(morph_loweta_gluon);
    QglVarsMorphingPtOrder::morphing_function_higheta_quark_ =  (TGraph*) rfile.Get(morph_higheta_quark);
    QglVarsMorphingPtOrder::morphing_function_loweta_quark_ =  (TGraph*) rfile.Get(morph_loweta_quark);
    rfile.Close();

  }


double
QglVarsMorphingPtOrder::evaluate(unsigned)
{
  setValues(*run->Get(), *luminosityBlock->Get(), *event->Get());
  return returnValues[returnVar_];
}



void
QglVarsMorphingPtOrder::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(run, "run");
    _library.bindBranch(luminosityBlock, "luminosityBlock");
    _library.bindBranch(event, "event");

    _library.bindBranch(nCleanJet, "nCleanJet");
    _library.bindBranch(Jet_qgl, "Jet_qgl");
    _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
    _library.bindBranch(CleanJet_eta, "CleanJet_eta");

    QglVarsMorphingPtOrder::isRunningOnData = isRunningSample("Run");
    if (!QglVarsMorphingPtOrder::isRunningOnData){
      //exclude Data and fakes
       _library.bindBranch(Jet_partonFlavour, "Jet_partonFlavour");
    }
  
    currentEvent = std::make_tuple(0, 0, 0);

    _library.addDestructorCallback([]() {
                                     
                                     Jet_qgl =nullptr;
                                     nCleanJet = nullptr;
                                    CleanJet_jetIdx=nullptr;
                                    CleanJet_eta =nullptr;
                                    Jet_partonFlavour =nullptr;
                                   });
}

float QglVarsMorphingPtOrder::getMorphedGluon(float x, float eta){
  if (x<= 0.) return x;
  if (x>= 1.) return x;
  float y = x;
  if (abs(eta)<3 && QglVarsMorphingPtOrder::do_morph_gluon_loweta)    y = QglVarsMorphingPtOrder::morphing_function_loweta_gluon_->Eval(x);
  if (abs(eta)>=3 && QglVarsMorphingPtOrder::do_morph_gluon_higheta)  y =  QglVarsMorphingPtOrder::morphing_function_higheta_gluon_->Eval(x);
  if (y<0) return 0.;
  if (y>1.) return 1.;
  return y;
}

float QglVarsMorphingPtOrder::getMorphedQuark(float x, float eta){
  if (x<= 0.) return x;
  if (x>= 1.) return x;
  float y = x ;
  if (abs(eta)<3 && QglVarsMorphingPtOrder::do_morph_quark_loweta)    y =  QglVarsMorphingPtOrder::morphing_function_loweta_quark_->Eval(x);
  if (abs(eta)>=3 && QglVarsMorphingPtOrder::do_morph_quark_higheta)  y =  QglVarsMorphingPtOrder::morphing_function_higheta_quark_->Eval(x);
  if (y<0) return 0.;
  if (y>1.) return 1.;
  return y;
}

/*static*/
void
QglVarsMorphingPtOrder::setValues(UInt_t _run, UInt_t _luminosityBlock, ULong64_t _event)
{

  if (std::get<0>(currentEvent) == _run && \
      std::get<1>(currentEvent) == _luminosityBlock && \
      std::get<2>(currentEvent) == _event)
    return;

  currentEvent = std::make_tuple(_run, _luminosityBlock, _event);

  uint njets = *(nCleanJet->Get());

  if (njets >0){
    returnValues[j0_qgl] = Jet_qgl->At(CleanJet_jetIdx->At(0));
    if (!QglVarsMorphingPtOrder::isRunningOnData){
      int pfl = Jet_partonFlavour->At(CleanJet_jetIdx->At(0));
      returnValues[j0_qglmorphed] = pfl==21 ?  getMorphedGluon(returnValues[j0_qgl], CleanJet_eta->At(0)) : getMorphedQuark(returnValues[j0_qgl], CleanJet_eta->At(0));
    }else{
      returnValues[j0_qglmorphed] = returnValues[j0_qgl];
    }
  }else{
    returnValues[j0_qgl] = -1;
    returnValues[j0_qglmorphed] = -1;
  }

  if (njets >1){
    returnValues[j1_qgl] = Jet_qgl->At(CleanJet_jetIdx->At(1));
    if (!QglVarsMorphingPtOrder::isRunningOnData){
      int pfl = Jet_partonFlavour->At(CleanJet_jetIdx->At(1));
      returnValues[j1_qglmorphed] = pfl==21 ?  getMorphedGluon(returnValues[j1_qgl], CleanJet_eta->At(1)) : getMorphedQuark(returnValues[j1_qgl], CleanJet_eta->At(1));
    }else{
      returnValues[j1_qglmorphed] = returnValues[j1_qgl];
    }
  }else{
    returnValues[j1_qgl] = -1;
    returnValues[j1_qglmorphed] = -1;
  }
  if (njets >2){
    returnValues[j2_qgl] = Jet_qgl->At(CleanJet_jetIdx->At(2));
    if (!QglVarsMorphingPtOrder::isRunningOnData){
      int pfl = Jet_partonFlavour->At(CleanJet_jetIdx->At(2));
      returnValues[j2_qglmorphed] = pfl==21 ?  getMorphedGluon(returnValues[j2_qgl], CleanJet_eta->At(2)) : getMorphedQuark(returnValues[j2_qgl], CleanJet_eta->At(2));
    }else{
      returnValues[j2_qglmorphed] = returnValues[j2_qgl];
    }
  }else{
    returnValues[j2_qgl] = -1;
    returnValues[j2_qglmorphed] = -1;
  }
  if (njets >3){
    returnValues[j3_qgl] = Jet_qgl->At(CleanJet_jetIdx->At(3));
    if (!QglVarsMorphingPtOrder::isRunningOnData){
      int pfl = Jet_partonFlavour->At(CleanJet_jetIdx->At(3));
      returnValues[j3_qglmorphed] = pfl==21 ?  getMorphedGluon(returnValues[j3_qgl], CleanJet_eta->At(3)) : getMorphedQuark(returnValues[j3_qgl], CleanJet_eta->At(3));
    }else{
      returnValues[j3_qglmorphed] = returnValues[j3_qgl];
    }
  }else{
    returnValues[j3_qgl] = -1;
    returnValues[j3_qglmorphed] = -1;
  }


}




   
