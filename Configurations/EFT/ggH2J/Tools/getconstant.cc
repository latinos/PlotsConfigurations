#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TFile.h"
#include "TString.h"
#include "TGraph.h"

#include <string>
#include <unordered_map>
#include <iostream>

#include "TLorentzVector.h"
#include <fstream>
#include <vector>
#include "TSpline.h"


class getconstant {
public:
  //! constructor
  getconstant();
  
  virtual ~getconstant() {}
  
  std::vector<float> CforHM(float mass);

  TString loc = "/afs/cern.ch/work/d/dmoran/private/ProductionL/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/EFT/ggH2J/Tools/constants";

  TFile* f_DjjVBF = TFile::Open(""+loc+"/SmoothKDConstant_m4l_DjjVBF_13TeV.root","read");
  TSpline3 *DjjVBF = (TSpline3*)f_DjjVBF->Get("sp_gr_varReco_Constant_Smooth");

  TFile* f_DjjWH = TFile::Open(""+loc+"/SmoothKDConstant_m4l_DjjWH_13TeV.root","read");
  TSpline3 *DjjWH = (TSpline3*)f_DjjWH->Get("sp_gr_varReco_Constant_Smooth");

  TFile* f_DjjZH = TFile::Open(""+loc+"/SmoothKDConstant_m4l_DjjZH_13TeV.root","read");
  TSpline3 *DjjZH = (TSpline3*)f_DjjZH->Get("sp_gr_varReco_Constant_Smooth");


  TFile* f_Dg4VBF = TFile::Open(""+loc+"/gConstant_VBF_g4.root","read");
  TSpline3 *Dg4VBF = (TSpline3*)f_Dg4VBF->Get("sp_tgfinal_VBF_SM_over_tgfinal_VBF_g4");

  TFile* f_Dg4WH = TFile::Open(""+loc+"/gConstant_WH_g4.root","read");
  TSpline3 *Dg4WH = (TSpline3*)f_Dg4WH->Get("sp_tgfinal_WH_SM_over_tgfinal_WH_g4");

  TFile* f_Dg4ZH = TFile::Open(""+loc+"/gConstant_ZH_g4.root","read");
  TSpline3 *Dg4ZH = (TSpline3*)f_Dg4ZH->Get("sp_tgfinal_ZH_SM_over_tgfinal_ZH_g4");

  TFile* f_Dg4VH = TFile::Open(""+loc+"/gConstant_VH_g4.root","read");
  TSpline3 *Dg4VH = (TSpline3*)f_Dg4VH->Get("sp_tgfinal_ZH_SM_plus_tgfinal_WH_SM_over_tgfinal_ZH_g4_plus_tgfinal_WH_g4");

  TFile* f_Dg2VBF = TFile::Open(""+loc+"/gConstant_VBF_g2.root","read");
  TSpline3 *Dg2VBF = (TSpline3*)f_Dg2VBF->Get("sp_tgfinal_VBF_SM_over_tgfinal_VBF_g2");

  TFile* f_Dg2WH = TFile::Open(""+loc+"/gConstant_WH_g2.root","read");
  TSpline3 *Dg2WH = (TSpline3*)f_Dg2WH->Get("sp_tgfinal_WH_SM_over_tgfinal_WH_g2");

  TFile* f_Dg2ZH = TFile::Open(""+loc+"/gConstant_ZH_g2.root","read");
  TSpline3 *Dg2ZH = (TSpline3*)f_Dg2ZH->Get("sp_tgfinal_ZH_SM_over_tgfinal_ZH_g2");

  TFile* f_Dg2VH = TFile::Open(""+loc+"/gConstant_VH_g2.root","read");
  TSpline3 *Dg2VH = (TSpline3*)f_Dg2VH->Get("sp_tgfinal_ZH_SM_plus_tgfinal_WH_SM_over_tgfinal_ZH_g2_plus_tgfinal_WH_g2");
         
  TFile* f_DL1VBF = TFile::Open(""+loc+"/gConstant_VBF_L1.root","read");
  TSpline3 *DL1VBF = (TSpline3*)f_DL1VBF->Get("sp_tgfinal_VBF_SM_over_tgfinal_VBF_L1");

  TFile* f_DL1WH = TFile::Open(""+loc+"/gConstant_WH_L1.root","read");
  TSpline3 *DL1WH = (TSpline3*)f_DL1WH->Get("sp_tgfinal_WH_SM_over_tgfinal_WH_L1");

  TFile* f_DL1ZH = TFile::Open(""+loc+"/gConstant_ZH_L1.root","read");
  TSpline3 *DL1ZH = (TSpline3*)f_DL1ZH->Get("sp_tgfinal_ZH_SM_over_tgfinal_ZH_L1");

  TFile* f_DLZgVBF = TFile::Open(""+loc+"/gConstant_VBF_L1Zgs.root","read");
  TSpline3 *DLZgVBF = (TSpline3*)f_DLZgVBF->Get("sp_tgfinal_VBF_SM_photoncut_over_tgfinal_VBF_L1Zgs");

  TFile* f_DLZgZH = TFile::Open(""+loc+"/gConstant_ZH_L1Zgs.root","read");
  TSpline3 *DLZgZH = (TSpline3*)f_DLZgZH->Get("sp_tgfinal_ZH_SM_photoncut_over_tgfinal_ZH_L1Zgs");

};


getconstant::getconstant() { 

}


std::vector<float> getconstant::CforHM(float mass){

  std::vector<float> result;

  if(mass<0)mass=0;
  if(mass>12000)mass=12000;

  float cVBF = DjjVBF->Eval(mass);
  result.push_back(cVBF);
  float cWH  = DjjWH->Eval(mass);
  result.push_back(cWH);
  float cZH  = DjjZH->Eval(mass);
  result.push_back(cZH);

  float g4VBF = Dg4VBF->Eval(mass);
  result.push_back(g4VBF);
  float g4WH  = Dg4WH->Eval(mass);
  result.push_back(g4WH);
  float g4ZH  = Dg4ZH->Eval(mass);
  result.push_back(g4ZH);
  float g4VH  = Dg4VH->Eval(mass);
  result.push_back(g4VH);

  float g2VBF = Dg2VBF->Eval(mass);
  result.push_back(g2VBF);
  float g2WH  = Dg2WH->Eval(mass);
  result.push_back(g2WH);
  float g2ZH  = Dg2ZH->Eval(mass);
  result.push_back(g2ZH);
  float g2VH  = Dg2VH->Eval(mass);
  result.push_back(g2VH);

  float L1VBF = DL1VBF->Eval(mass);
  result.push_back(L1VBF);
  float L1WH  = DL1WH->Eval(mass);
  result.push_back(L1WH);
  float L1ZH  = DL1ZH->Eval(mass);
  result.push_back(L1ZH);

  float LZgVBF = DLZgVBF->Eval(mass);
  result.push_back(LZgVBF);
  float LZgZH  = DLZgZH->Eval(mass);
  result.push_back(LZgZH);

  return result;
}


class GetConstant : public multidraw::TTreeFunction {
public:
  GetConstant(char const* name);

  char const* getName() const override { return "GetConstant"; }
  TTreeFunction* clone() const override { return new GetConstant(name_.c_str()); }

  void beginEvent(long long) override;
  unsigned getNdata() override;
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  std::string name_;
  unsigned vindex;

  // this is horrible
  static long long currentEntry;
  static FloatValueReader* hm;

  static void setValues(long long);

  static getconstant worker;
  static std::vector<float> constants;
};

long long GetConstant::currentEntry{-2};
FloatValueReader* GetConstant::hm{};

getconstant GetConstant::worker{};
std::vector<float> GetConstant::constants{};

GetConstant::GetConstant(char const* name) :
  TTreeFunction(),
  name_{name}
{

 std::map<std::string, unsigned> con_index = {
     {"CVBF",0},{"CWH",1},{"CZH",2},
     {"G4VBF",3},{"G4WH",4},{"G4ZH",5},{"G4VH",6},
     {"G2VBF",7},{"G2WH",8},{"G2ZH",9},{"G2VH",10},
     {"L1VBF",11},{"L1WH",12},{"L1ZH",13},
     {"LZgVBF",14},{"LZgZH",15}
 };

 if(con_index.count(name_)>0) vindex = con_index.find(name_)->second;
 else std::cerr <<"Error : "+name_+" is not defined!" <<std::endl;

}

void
GetConstant::beginEvent(long long _iEntry)
{
  setValues(_iEntry);
}

unsigned
GetConstant::getNdata()
{
  return 1;
}

double
GetConstant::evaluate(unsigned)
{

  return constants.at(vindex);
}

void
GetConstant::bindTree_(multidraw::FunctionLibrary& _library)
{
  if (currentEntry == -2) {
    currentEntry = -1;
    _library.bindBranch(hm, "hm");
   
    _library.addDestructorCallback([]() {
        currentEntry = -2;
        hm = nullptr;
      });
  }
}

void
GetConstant::setValues(long long _iEntry)
{
  if (_iEntry == currentEntry)
    return;

  currentEntry = _iEntry;

  float m(*hm->Get());
  constants = worker.CforHM(m);

}



