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

class QglVarsMorphing : public multidraw::TTreeFunction {
public:
  QglVarsMorphing(const char * type, const char * file,  const char * do_morph,
                    const char * morph_loweta_gluon_pt0, const char * morph_loweta_gluon_pt1,
                    const char * morph_higheta_gluon_pt0, const char * morph_higheta_gluon_pt1,
                    const char * morph_loweta_quark_pt0, const char * morph_loweta_quark_pt1, 
                    const char * morph_higheta_quark_pt0, const char * morph_higheta_quark_pt1);
  QglVarsMorphing(unsigned type, const char * file, const char * do_morph,
                    const char * morph_loweta_gluon_pt0, const char * morph_loweta_gluon_pt1,
                    const char * morph_higheta_gluon_pt0, const char * morph_higheta_gluon_pt1,
                    const char * morph_loweta_quark_pt0, const char * morph_loweta_quark_pt1, 
                    const char * morph_higheta_quark_pt0, const char * morph_higheta_quark_pt1);
  char const* getName() const override { return "QglVarsMorphing"; }
  TTreeFunction* clone() const override { return new QglVarsMorphing(returnVar_, file_.c_str(), do_morph_.c_str(),
                                                morph_loweta_gluon_pt0_.c_str(), morph_loweta_gluon_pt1_.c_str(),
                                                morph_higheta_gluon_pt0_.c_str(),morph_higheta_gluon_pt1_.c_str(),
                                                morph_loweta_quark_pt0_.c_str(),morph_loweta_quark_pt1_.c_str(),
                                                morph_higheta_quark_pt0_.c_str(),morph_higheta_quark_pt1_.c_str()); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  enum ReturnType {
      vbs_0_qgl_res, vbs_1_qgl_res, vjet_0_qgl_res, vjet_1_qgl_res, 
      vbs_0_qgl_boost, vbs_1_qgl_boost, 
      vbs_0_qglmorphed_res, vbs_1_qglmorphed_res, vjet_0_qglmorphed_res, vjet_1_qglmorphed_res, 
      vbs_0_qglmorphed_boost, vbs_1_qglmorphed_boost, 
      vbs_0_partfl_res, vbs_1_partfl_res, vjet_0_partfl_res, vjet_1_partfl_res, 
      vbs_0_partfl_boost, vbs_1_partfl_boost,
      nVarTypes
  };


  void bindTree_(multidraw::FunctionLibrary&) override;

  unsigned returnVar_{nVarTypes};
  string file_;
  string do_morph_;
  static bool do_morph_gluon_loweta_pt0;
  static bool do_morph_gluon_loweta_pt1;
  static bool do_morph_gluon_higheta_pt0;
  static bool do_morph_gluon_higheta_pt1;
  static bool do_morph_quark_loweta_pt0;
  static bool do_morph_quark_loweta_pt1;
  static bool do_morph_quark_higheta_pt0;
  static bool do_morph_quark_higheta_pt1;
  string morph_higheta_gluon_pt0_;
  string morph_loweta_gluon_pt0_;
  string morph_higheta_quark_pt0_;
  string morph_loweta_quark_pt0_;
  string morph_higheta_gluon_pt1_;
  string morph_loweta_gluon_pt1_;
  string morph_higheta_quark_pt1_;
  string morph_loweta_quark_pt1_;
  static std::map<std::string, TGraph*> morphing_functions;
  
  static bool isRunningOnData;
 
  UIntValueReader* run{};
  UIntValueReader* luminosityBlock{};
  ULong64ValueReader* event{}; 

  static std::tuple<UInt_t, UInt_t, ULong64_t> currentEvent;

  static IntValueReader * VBS_category;
  static IntArrayReader*  VBS_jets_res;
  static IntArrayReader*  VBS_jets_boost;
  static IntArrayReader*  V_jets_res;
  static IntArrayReader*  CleanJet_jetIdx;
  static FloatArrayReader*  CleanJet_eta;
  static FloatArrayReader*  CleanJet_pt;
  static FloatArrayReader* Jet_qgl;
  static IntArrayReader* Jet_partonFlavour;

  static std::array<double, nVarTypes> returnValues;

  static void setValues(UInt_t, UInt_t, ULong64_t);
  static float getMorphedGluon(float x, float eta, float pt);
  static float getMorphedQuark(float x, float eta, float pt);
};

std::tuple<UInt_t, UInt_t, ULong64_t> QglVarsMorphing::currentEvent{};
IntValueReader * QglVarsMorphing::VBS_category{};
IntArrayReader* QglVarsMorphing::VBS_jets_res{};
IntArrayReader* QglVarsMorphing::VBS_jets_boost{};
IntArrayReader* QglVarsMorphing::V_jets_res{};
IntArrayReader* QglVarsMorphing::CleanJet_jetIdx{};
FloatArrayReader* QglVarsMorphing::CleanJet_eta{};
FloatArrayReader* QglVarsMorphing::CleanJet_pt{};
IntArrayReader* QglVarsMorphing::Jet_partonFlavour{};
FloatArrayReader* QglVarsMorphing::Jet_qgl{};
std::map<std::string, TGraph*> QglVarsMorphing::morphing_functions{};
bool QglVarsMorphing::isRunningOnData{false};
bool QglVarsMorphing::do_morph_gluon_loweta_pt0{false};
bool QglVarsMorphing::do_morph_gluon_higheta_pt0{false};
bool QglVarsMorphing::do_morph_quark_loweta_pt0{false};
bool QglVarsMorphing::do_morph_quark_higheta_pt0{false};
bool QglVarsMorphing::do_morph_gluon_loweta_pt1{false};
bool QglVarsMorphing::do_morph_gluon_higheta_pt1{false};
bool QglVarsMorphing::do_morph_quark_loweta_pt1{false};
bool QglVarsMorphing::do_morph_quark_higheta_pt1{false};

std::array<double, QglVarsMorphing::nVarTypes> QglVarsMorphing::returnValues{};

QglVarsMorphing::QglVarsMorphing(char const* _type,   const char * file, const char * do_morph,
                    const char * morph_loweta_gluon_pt0, const char * morph_loweta_gluon_pt1,
                    const char * morph_higheta_gluon_pt0, const char * morph_higheta_gluon_pt1,
                    const char * morph_loweta_quark_pt0, const char * morph_loweta_quark_pt1, 
                    const char * morph_higheta_quark_pt0, const char * morph_higheta_quark_pt1)
                    :
  TTreeFunction(), file_(file),  do_morph_(do_morph),
  morph_loweta_gluon_pt0_(morph_loweta_gluon_pt0),morph_loweta_gluon_pt1_(morph_loweta_gluon_pt1),
  morph_higheta_gluon_pt0_(morph_higheta_gluon_pt0),morph_higheta_gluon_pt1_(morph_higheta_gluon_pt1),
  morph_loweta_quark_pt0_(morph_loweta_quark_pt0),morph_loweta_quark_pt1_(morph_loweta_quark_pt1),
  morph_higheta_quark_pt0_(morph_higheta_quark_pt0),morph_higheta_quark_pt1_(morph_higheta_quark_pt1)
{
  std::string type(_type);
  if (type ==  "vbs_0_qgl_res")
    returnVar_ = vbs_0_qgl_res;
  else if (type == "vbs_1_qgl_res")
    returnVar_ = vbs_1_qgl_res;
  else if (type == "vjet_0_qgl_res")
    returnVar_ = vjet_0_qgl_res;
  else if (type == "vjet_1_qgl_res")
    returnVar_ = vjet_1_qgl_res;
  else if (type == "vbs_0_qgl_boost")
    returnVar_ = vbs_0_qgl_boost;
  else if (type == "vbs_1_qgl_boost")
    returnVar_ = vbs_1_qgl_boost;
  
  else if (type ==  "vbs_0_qglmorphed_res")
    returnVar_ = vbs_0_qglmorphed_res;
  else if (type == "vbs_1_qglmorphed_res")
    returnVar_ = vbs_1_qglmorphed_res;
  else if (type == "vjet_0_qglmorphed_res")
    returnVar_ = vjet_0_qglmorphed_res;
  else if (type == "vjet_1_qglmorphed_res")
    returnVar_ = vjet_1_qglmorphed_res;
  else if (type == "vbs_0_qglmorphed_boost")
    returnVar_ = vbs_0_qglmorphed_boost;
  else if (type == "vbs_1_qglmorphed_boost")
    returnVar_ = vbs_1_qglmorphed_boost;
  
  else if (type ==  "vbs_0_partfl_res")
    returnVar_ = vbs_0_partfl_res;
  else if (type == "vbs_1_partfl_res")
    returnVar_ = vbs_1_partfl_res;
  else if (type == "vjet_0_partfl_res")
    returnVar_ = vjet_0_partfl_res;
  else if (type == "vjet_1_partfl_res")
    returnVar_ = vjet_1_partfl_res;
  else if (type == "vbs_0_partfl_boost")
    returnVar_ = vbs_0_partfl_boost;
  else if (type == "vbs_1_partfl_boost")
    returnVar_ = vbs_1_partfl_boost;
  else
    throw std::runtime_error("unknown return type " + type);
  
  int do_morph_flags = std::stoi(do_morph_,0,2);
  QglVarsMorphing::do_morph_gluon_loweta_pt0 = do_morph_flags & 1;
  QglVarsMorphing::do_morph_gluon_loweta_pt1 = do_morph_flags >>1 & 1;
  QglVarsMorphing::do_morph_gluon_higheta_pt0 = do_morph_flags >> 2 & 1;
  QglVarsMorphing::do_morph_gluon_higheta_pt1 = do_morph_flags >> 3 & 1;
  QglVarsMorphing::do_morph_quark_loweta_pt0 = do_morph_flags >> 4 & 1;
  QglVarsMorphing::do_morph_quark_loweta_pt1 = do_morph_flags >> 5 & 1;
  QglVarsMorphing::do_morph_quark_higheta_pt0 = do_morph_flags >> 6 & 1;
  QglVarsMorphing::do_morph_quark_higheta_pt1 = do_morph_flags >> 7 & 1;
  
  TFile rfile {file, "READ"};
  QglVarsMorphing::morphing_functions["gluon_loweta_pt0"] = (TGraph*) rfile.Get(morph_loweta_gluon_pt0);
  QglVarsMorphing::morphing_functions["gluon_loweta_pt1"] = (TGraph*) rfile.Get(morph_loweta_gluon_pt1);
  QglVarsMorphing::morphing_functions["gluon_higheta_pt0"] = (TGraph*) rfile.Get(morph_higheta_gluon_pt0);
  QglVarsMorphing::morphing_functions["gluon_higheta_pt1"] = (TGraph*) rfile.Get(morph_higheta_gluon_pt1);
  QglVarsMorphing::morphing_functions["quark_loweta_pt0"] = (TGraph*) rfile.Get(morph_loweta_quark_pt0);
  QglVarsMorphing::morphing_functions["quark_loweta_pt1"] = (TGraph*) rfile.Get(morph_loweta_quark_pt1);
  QglVarsMorphing::morphing_functions["quark_higheta_pt0"] = (TGraph*) rfile.Get(morph_higheta_quark_pt0);
  QglVarsMorphing::morphing_functions["quark_higheta_pt1"] = (TGraph*) rfile.Get(morph_higheta_quark_pt1);
  rfile.Close();
}


QglVarsMorphing::QglVarsMorphing(unsigned type,const char * file, const char * do_morph,
                    const char * morph_loweta_gluon_pt0, const char * morph_loweta_gluon_pt1,
                    const char * morph_higheta_gluon_pt0, const char * morph_higheta_gluon_pt1,
                    const char * morph_loweta_quark_pt0, const char * morph_loweta_quark_pt1, 
                    const char * morph_higheta_quark_pt0, const char * morph_higheta_quark_pt1 ) :
  TTreeFunction(),
  returnVar_(type),file_(file),  do_morph_(do_morph),
  morph_loweta_gluon_pt0_(morph_loweta_gluon_pt0),morph_loweta_gluon_pt1_(morph_loweta_gluon_pt1),
  morph_higheta_gluon_pt0_(morph_higheta_gluon_pt0),morph_higheta_gluon_pt1_(morph_higheta_gluon_pt1),
  morph_loweta_quark_pt0_(morph_loweta_quark_pt0),morph_loweta_quark_pt1_(morph_loweta_quark_pt1),
  morph_higheta_quark_pt0_(morph_higheta_quark_pt0),morph_higheta_quark_pt1_(morph_higheta_quark_pt1)
  {

    // Read the binary flag
    int do_morph_flags = std::stoi(do_morph_,0,2);
    QglVarsMorphing::do_morph_gluon_loweta_pt0 = do_morph_flags & 1;
    QglVarsMorphing::do_morph_gluon_loweta_pt1 = do_morph_flags >>1 & 1;
    QglVarsMorphing::do_morph_gluon_higheta_pt0 = do_morph_flags >> 2 & 1;
    QglVarsMorphing::do_morph_gluon_higheta_pt1 = do_morph_flags >> 3 & 1;
    QglVarsMorphing::do_morph_quark_loweta_pt0 = do_morph_flags >> 4 & 1;
    QglVarsMorphing::do_morph_quark_loweta_pt1 = do_morph_flags >> 5 & 1;
    QglVarsMorphing::do_morph_quark_higheta_pt0 = do_morph_flags >> 6 & 1;
    QglVarsMorphing::do_morph_quark_higheta_pt1 = do_morph_flags >> 7 & 1;
   
    TFile rfile {file, "READ"};
    QglVarsMorphing::morphing_functions["gluon_loweta_pt0"] = (TGraph*) rfile.Get(morph_loweta_gluon_pt0);
    QglVarsMorphing::morphing_functions["gluon_loweta_pt1"] = (TGraph*) rfile.Get(morph_loweta_gluon_pt1);
    QglVarsMorphing::morphing_functions["gluon_higheta_pt0"] = (TGraph*) rfile.Get(morph_higheta_gluon_pt0);
    QglVarsMorphing::morphing_functions["gluon_higheta_pt1"] = (TGraph*) rfile.Get(morph_higheta_gluon_pt1);
    QglVarsMorphing::morphing_functions["quark_loweta_pt0"] = (TGraph*) rfile.Get(morph_loweta_quark_pt0);
    QglVarsMorphing::morphing_functions["quark_loweta_pt1"] = (TGraph*) rfile.Get(morph_loweta_quark_pt1);
    QglVarsMorphing::morphing_functions["quark_higheta_pt0"] = (TGraph*) rfile.Get(morph_higheta_quark_pt0);
    QglVarsMorphing::morphing_functions["quark_higheta_pt1"] = (TGraph*) rfile.Get(morph_higheta_quark_pt1);
    rfile.Close();
  }



void
QglVarsMorphing::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(run, "run");
    _library.bindBranch(luminosityBlock, "luminosityBlock");
    _library.bindBranch(event, "event");

    _library.bindBranch(VBS_category, "VBS_category");
    _library.bindBranch(Jet_qgl, "Jet_qgl");
    _library.bindBranch(VBS_jets_res, "VBS_jets_maxmjj_massWZ");
    _library.bindBranch(V_jets_res, "V_jets_maxmjj_massWZ");
    _library.bindBranch(VBS_jets_boost, "VBS_jets_maxmjj");
    _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
    _library.bindBranch(CleanJet_eta, "CleanJet_eta");
    _library.bindBranch(CleanJet_pt, "CleanJet_pt");

    QglVarsMorphing::isRunningOnData = isRunningSample("Run");
    if (!QglVarsMorphing::isRunningOnData){
      //exclude Data and fakes
       _library.bindBranch(Jet_partonFlavour, "Jet_partonFlavour");
    }
  
    currentEvent = std::make_tuple(0, 0, 0);

    _library.addDestructorCallback([]() {
                                     VBS_category=nullptr;
                                     Jet_qgl =nullptr;
                                     V_jets_res=nullptr;
                                    VBS_jets_res= nullptr;
                                    VBS_jets_boost=nullptr;
                                    CleanJet_jetIdx=nullptr;
                                    CleanJet_eta =nullptr;
                                    CleanJet_pt= nullptr;
                                    Jet_partonFlavour =nullptr;
                                    morphing_functions.clear();
                                   });
}

double
QglVarsMorphing::evaluate(unsigned)
{
  setValues(*run->Get(), *luminosityBlock->Get(), *event->Get());
  return returnValues[returnVar_];
}

float QglVarsMorphing::getMorphedGluon(float x, float eta, float pt){
  if (x<= 0.) return x;
  if (x>= 1.) return x;
  float y = x;
  if (abs(eta)<3 && pt < 75  && QglVarsMorphing::do_morph_gluon_loweta_pt0) 
          y =  QglVarsMorphing::morphing_functions["gluon_loweta_pt0"]->Eval(x);
  if (abs(eta)<3 && pt >= 75  && QglVarsMorphing::do_morph_gluon_loweta_pt1) 
          y =  QglVarsMorphing::morphing_functions["gluon_loweta_pt1"]->Eval(x);
  if (abs(eta)>=3 && pt < 75  && QglVarsMorphing::do_morph_gluon_higheta_pt0) 
          y =  QglVarsMorphing::morphing_functions["gluon_higheta_pt0"]->Eval(x);
  if (abs(eta)>=3 && pt >= 75  && QglVarsMorphing::do_morph_gluon_higheta_pt1) 
          y =  QglVarsMorphing::morphing_functions["gluon_higheta_pt1"]->Eval(x);
  if (y<0) return 0.;
  if (y>1.) return 1.;
  return y;
}

float QglVarsMorphing::getMorphedQuark(float x, float eta, float pt){
  if (x<= 0.) return x;
  if (x>= 1.) return x;
  float y = x ;
  if (abs(eta)<3 && pt < 75  && QglVarsMorphing::do_morph_quark_loweta_pt0) 
          y =  QglVarsMorphing::morphing_functions["quark_loweta_pt0"]->Eval(x);
  if (abs(eta)<3 && pt >= 75  && QglVarsMorphing::do_morph_quark_loweta_pt1) 
          y =  QglVarsMorphing::morphing_functions["quark_loweta_pt1"]->Eval(x);
  if (abs(eta)>=3 && pt < 75  && QglVarsMorphing::do_morph_quark_higheta_pt0) 
          y =  QglVarsMorphing::morphing_functions["quark_higheta_pt0"]->Eval(x);
  if (abs(eta)>=3 && pt >= 75  && QglVarsMorphing::do_morph_quark_higheta_pt1) 
          y =  QglVarsMorphing::morphing_functions["quark_higheta_pt1"]->Eval(x);
  if (y<0) return 0.;
  if (y>1.) return 1.;
  return y;
}


/*static*/
void
QglVarsMorphing::setValues(UInt_t _run, UInt_t _luminosityBlock, ULong64_t _event)
{

  if (std::get<0>(currentEvent) == _run && \
      std::get<1>(currentEvent) == _luminosityBlock && \
      std::get<2>(currentEvent) == _event)
    return;

  currentEvent = std::make_tuple(_run, _luminosityBlock, _event);


   int category = *(VBS_category->Get());
    if (category ==0){
      
      //boosted
      returnValues[vbs_0_qgl_boost] = Jet_qgl->At(CleanJet_jetIdx->At(VBS_jets_boost->At(0)));
      returnValues[vbs_1_qgl_boost] = Jet_qgl->At(CleanJet_jetIdx->At(VBS_jets_boost->At(1)));
      returnValues[vbs_0_qgl_res] = -1;
      returnValues[vbs_1_qgl_res] = -1;
      returnValues[vjet_0_qgl_res] = -1;
      returnValues[vjet_1_qgl_res] = -1;

      if (!QglVarsMorphing::isRunningOnData){
        returnValues[vbs_0_partfl_boost] = Jet_partonFlavour->At(CleanJet_jetIdx->At(VBS_jets_boost->At(0)));
        returnValues[vbs_1_partfl_boost] = Jet_partonFlavour->At(CleanJet_jetIdx->At(VBS_jets_boost->At(1)));
        returnValues[vbs_0_partfl_res] = 0;
        returnValues[vbs_1_partfl_res] = 0;
        returnValues[vjet_0_partfl_res] = 0;
        returnValues[vjet_1_partfl_res] = 0;

        returnValues[vbs_0_qglmorphed_boost] = returnValues[vbs_0_partfl_boost]==21 ?  
                                                          getMorphedGluon(returnValues[vbs_0_qgl_boost], CleanJet_eta->At(VBS_jets_boost->At(0)),CleanJet_pt->At(VBS_jets_boost->At(0))) : 
                                                          getMorphedQuark(returnValues[vbs_0_qgl_boost], CleanJet_eta->At(VBS_jets_boost->At(0)),CleanJet_pt->At(VBS_jets_boost->At(0)));
        returnValues[vbs_1_qglmorphed_boost] = returnValues[vbs_1_partfl_boost]==21 ?  
                                                          getMorphedGluon(returnValues[vbs_1_qgl_boost], CleanJet_eta->At(VBS_jets_boost->At(1)),CleanJet_pt->At(VBS_jets_boost->At(1))):  
                                                          getMorphedQuark(returnValues[vbs_1_qgl_boost], CleanJet_eta->At(VBS_jets_boost->At(1)),CleanJet_pt->At(VBS_jets_boost->At(1)));
        returnValues[vbs_0_qglmorphed_res] = -1;
        returnValues[vbs_1_qglmorphed_res] = -1;
        returnValues[vjet_0_qglmorphed_res] = -1;
        returnValues[vjet_1_qglmorphed_res] = -1;


      }else{

        returnValues[vbs_0_partfl_boost] = 0;
        returnValues[vbs_1_partfl_boost] = 0;
        returnValues[vbs_0_partfl_res] = 0;
        returnValues[vbs_1_partfl_res] = 0;
        returnValues[vjet_0_partfl_res] = 0;
        returnValues[vjet_1_partfl_res] = 0;

        returnValues[vbs_0_qglmorphed_boost] = returnValues[vbs_0_qgl_boost];
        returnValues[vbs_1_qglmorphed_boost] = returnValues[vbs_1_qgl_boost];
        returnValues[vbs_0_qglmorphed_res] = -1;
        returnValues[vbs_1_qglmorphed_res] = -1;
        returnValues[vjet_0_qglmorphed_res] = -1;
        returnValues[vjet_1_qglmorphed_res] = -1;
      }


    }else if(category == 1){
      returnValues[vbs_0_qgl_boost] = -1;
      returnValues[vbs_1_qgl_boost] = -1;
      returnValues[vbs_0_qgl_res] = Jet_qgl->At(CleanJet_jetIdx->At(VBS_jets_res->At(0)));
      returnValues[vbs_1_qgl_res] = Jet_qgl->At(CleanJet_jetIdx->At(VBS_jets_res->At(1)));
      returnValues[vjet_0_qgl_res] = Jet_qgl->At(CleanJet_jetIdx->At(V_jets_res->At(0)));
      returnValues[vjet_1_qgl_res] = Jet_qgl->At(CleanJet_jetIdx->At(V_jets_res->At(1)));


      if (!QglVarsMorphing::isRunningOnData){

        returnValues[vbs_0_partfl_boost] = 0;
        returnValues[vbs_1_partfl_boost] = 0;
        returnValues[vbs_0_partfl_res] = Jet_partonFlavour->At(CleanJet_jetIdx->At(VBS_jets_res->At(0)));
        returnValues[vbs_1_partfl_res] = Jet_partonFlavour->At(CleanJet_jetIdx->At(VBS_jets_res->At(1)));
        returnValues[vjet_0_partfl_res] = Jet_partonFlavour->At(CleanJet_jetIdx->At(V_jets_res->At(0)));
        returnValues[vjet_1_partfl_res] = Jet_partonFlavour->At(CleanJet_jetIdx->At(V_jets_res->At(1)));

        returnValues[vbs_0_qglmorphed_boost] = -1;
        returnValues[vbs_1_qglmorphed_boost] = -1;
        returnValues[vbs_0_qglmorphed_res] = returnValues[vbs_0_partfl_res]==21 ?  
                                              getMorphedGluon(returnValues[vbs_0_qgl_res], CleanJet_eta->At(VBS_jets_res->At(0)),CleanJet_pt->At(VBS_jets_res->At(0))) : 
                                              getMorphedQuark(returnValues[vbs_0_qgl_res], CleanJet_eta->At(VBS_jets_res->At(0)),CleanJet_pt->At(VBS_jets_res->At(0)));
        returnValues[vbs_1_qglmorphed_res] = returnValues[vbs_1_partfl_res]==21 ?  
                                              getMorphedGluon(returnValues[vbs_1_qgl_res], CleanJet_eta->At(VBS_jets_res->At(1)),CleanJet_pt->At(VBS_jets_res->At(1))) : 
                                              getMorphedQuark(returnValues[vbs_1_qgl_res], CleanJet_eta->At(VBS_jets_res->At(1)),CleanJet_pt->At(VBS_jets_res->At(1)));
        returnValues[vjet_0_qglmorphed_res] = returnValues[vjet_0_partfl_res]==21 ?  
                                              getMorphedGluon(returnValues[vjet_0_qgl_res], CleanJet_eta->At(V_jets_res->At(0)),CleanJet_pt->At(V_jets_res->At(0))) :
                                              getMorphedQuark(returnValues[vjet_0_qgl_res], CleanJet_eta->At(V_jets_res->At(0)),CleanJet_pt->At(V_jets_res->At(0)));
        returnValues[vjet_1_qglmorphed_res] = returnValues[vjet_1_partfl_res]==21 ?  
                                              getMorphedGluon(returnValues[vjet_1_qgl_res], CleanJet_eta->At(V_jets_res->At(1)),CleanJet_pt->At(V_jets_res->At(1))) : 
                                              getMorphedQuark(returnValues[vjet_1_qgl_res], CleanJet_eta->At(V_jets_res->At(1)),CleanJet_pt->At(V_jets_res->At(1)));
      }else{
         returnValues[vbs_0_partfl_boost] = 0;
        returnValues[vbs_1_partfl_boost] = 0;
        returnValues[vbs_0_partfl_res] = 0;
        returnValues[vbs_1_partfl_res] = 0;
        returnValues[vjet_0_partfl_res] = 0;
        returnValues[vjet_1_partfl_res] = 0;

        returnValues[vbs_0_qglmorphed_boost] = -1;
        returnValues[vbs_1_qglmorphed_boost] = -1;
        returnValues[vbs_0_qglmorphed_res] =  returnValues[vbs_0_qgl_res];
        returnValues[vbs_1_qglmorphed_res] =  returnValues[vbs_1_qgl_res];
        returnValues[vjet_0_qglmorphed_res] = returnValues[vjet_0_qgl_res]; 
        returnValues[vjet_1_qglmorphed_res] = returnValues[vjet_1_qgl_res];
      }

      //cout << returnValues[vbs_0_partfl_res] << "  > " <<  returnValues[vbs_0_qgl_res] << " morphed -> " <<  returnValues[vbs_0_qglmorphed_res]  <<endl;
    }
    
    else{
      returnValues[vbs_0_qgl_boost] = -1;
      returnValues[vbs_1_qgl_boost] = -1;
      returnValues[vbs_0_qgl_res] = -1;
      returnValues[vbs_1_qgl_res] = -1;
      returnValues[vjet_0_qgl_res] = -1;
      returnValues[vjet_1_qgl_res] = -1;

      returnValues[vbs_0_qglmorphed_boost] = -1;
      returnValues[vbs_1_qglmorphed_boost] = -1;
      returnValues[vbs_0_qglmorphed_res] = -1;
      returnValues[vbs_1_qglmorphed_res] = -1;
      returnValues[vjet_0_qglmorphed_res] = -1;
      returnValues[vjet_1_qglmorphed_res] = -1;

      returnValues[vbs_0_partfl_boost] = 0;
      returnValues[vbs_1_partfl_boost] = 0;
      returnValues[vbs_0_partfl_res] = 0;
      returnValues[vbs_1_partfl_res] = 0;
      returnValues[vjet_0_partfl_res] = 0;
      returnValues[vjet_1_partfl_res] = 0;
    }


}




   
