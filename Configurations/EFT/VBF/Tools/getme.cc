
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


class getme {
public:
  //! constructor
  getme();
  
  virtual ~getme() {}
  
  std::vector<float> CalcACMEs(string AC, float PMix, float PBSM, float PSM, float DMix, float DBSM, float DSM, std::string s);

  float CalcMEg1gi(float PMix, float PBSM, float PSM, float DMix, float DBSM, float DSM, float g1, float gi, string Sig);

  const std::map<std::string, float> cons = {
    {"VBF_H0M",  0.29797}, 
    {"ZH_H0M",   0.14405 }, 
    {"WH_H0M",   0.12361 }, 
    {"GGH_H0M",  1.76132 }, 
    {"GGHjj_H0M", 1.0062 }, 
    {"VBF_H0PH", 0.27196}, 
    {"ZH_H0PH",  0.11248 }, 
    {"WH_H0PH",  0.09989}, 
    {"GGH_H0PH", 1.133582 }, 
    {"VBF_H0L1", -2158.213}, 
    {"ZH_H0L1",  -517.788}, 
    {"WH_H0L1",  -525.274}, 
    {"GGH_H0L1", -13752.22 },
    {"VBF_H0LZg", -4091.051456694223},
    {"ZH_H0LZg", -642.9534550379002}
  };

};

namespace multidraw {
  extern thread_local TTree* currentTree;
}

getme::getme() { 

}

float getme::CalcMEg1gi(float PMix, float PBSM, float PSM, float DMix, float DBSM, float DSM, float g1, float gi, string Sig){

  float PME = 1;
  float DME = 1;

  // This is more for bookkeeping to remember what MEs are considered where
 
  if(Sig=="GGHjj"){ 

   PME = (PMix-PSM-PBSM)*g1*gi + PSM*pow(g1,2) + PBSM*pow(gi,2);

  }else if(Sig=="GGH"){

   DME = (DMix-DSM-DBSM)*g1*gi + DSM*pow(g1,2) + DBSM*pow(gi,2);

  }else{ 

   PME = (PMix-PSM-PBSM)*g1*gi + PSM*pow(g1,2) + PBSM*pow(gi,2);
   DME = (DMix-DSM-DBSM)*g1*gi + DSM*pow(g1,2) + DBSM*pow(gi,2);

  }

  float ME = PME*DME;

  return ME;

}

std::vector<float> getme::CalcACMEs(string AC, float PMix, float PBSM, float PSM, float DMix, float DBSM, float DSM, std::string Sig){

  std::vector<float> MixMEs;

  float g = cons.find(Sig+"_"+AC)->second;
  float scale = 1;
  if(AC=="H0L1" || AC=="H0LZg") scale=-10000; 

  // BSM Pure Sample ME --> Remember no pure H0LZg for HWW 
  float ME_PS = CalcMEg1gi(PMix, PBSM, PSM, DMix, DBSM, DSM, 0, 1, Sig);
  MixMEs.push_back(ME_PS);

  // Mixture MEs
  float ME_M0 = CalcMEg1gi(PMix, PBSM, PSM, DMix, DBSM, DSM, 0, 1*scale, Sig);
  MixMEs.push_back(ME_M0);

  float ME_M1 = CalcMEg1gi(PMix, PBSM, PSM, DMix, DBSM, DSM, 1, 0.25*scale, Sig);
  MixMEs.push_back(ME_M1);

  float ME_M2 = CalcMEg1gi(PMix, PBSM, PSM, DMix, DBSM, DSM, 1, 0.5*scale, Sig);
  MixMEs.push_back(ME_M2);

  float ME_M3 = CalcMEg1gi(PMix, PBSM, PSM, DMix, DBSM, DSM, 1, 0.75*scale, Sig);
  MixMEs.push_back(ME_M3);

  //f05 mixture sample MEs
  float ME_f05 = CalcMEg1gi(PMix, PBSM, PSM, DMix, DBSM, DSM, 1, g, Sig);
  MixMEs.push_back(ME_f05);

  return MixMEs; 

}


class GetME : public multidraw::TTreeFunction {
public:
  GetME(char const* name);

  char const* getName() const override { return "GetME"; }
  TTreeFunction* clone() const override { return new GetME(name_.c_str()); }

  void beginEvent(long long) override;
  unsigned getNdata() override;
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  std::string name_;
  unsigned vindex;

  static long long currentEntry;

  static FloatValueReader* gen_dme_hsm;
  static FloatValueReader* gen_dme_hm;
  static FloatValueReader* gen_dme_hp;
  static FloatValueReader* gen_dme_hl;
  static FloatValueReader* gen_dme_mixhm;
  static FloatValueReader* gen_dme_mixhp;
  static FloatValueReader* gen_dme_mixhl;
  static FloatValueReader* gen_dme_eft_hm;
  static FloatValueReader* gen_dme_eft_hp;
  static FloatValueReader* gen_dme_eft_hl;
  static FloatValueReader* gen_dme_eft_mixhm;
  static FloatValueReader* gen_dme_eft_mixhp;
  static FloatValueReader* gen_dme_eft_mixhl;

  static FloatValueReader* gen_pme_hsm;
  static FloatValueReader* gen_pme_hm;
  static FloatValueReader* gen_pme_hp;
  static FloatValueReader* gen_pme_hl;
  static FloatValueReader* gen_pme_hlzg;
  static FloatValueReader* gen_pme_mixhm;
  static FloatValueReader* gen_pme_mixhp;
  static FloatValueReader* gen_pme_mixhl;
  static FloatValueReader* gen_pme_mixhlzg;
  static FloatValueReader* gen_pme_eft_hm;
  static FloatValueReader* gen_pme_eft_hp;
  static FloatValueReader* gen_pme_eft_hl;
  static FloatValueReader* gen_pme_eft_mixhm;
  static FloatValueReader* gen_pme_eft_mixhp;
  static FloatValueReader* gen_pme_eft_mixhl;


  static std::string SignalType;

  static void setValues(long long);

  static getme worker;
  static std::vector<float>  MEs;
};

long long GetME::currentEntry{-2};

std::string GetME::SignalType{};

FloatValueReader* GetME::gen_dme_hsm{};
FloatValueReader* GetME::gen_dme_hm{};
FloatValueReader* GetME::gen_dme_hp{};
FloatValueReader* GetME::gen_dme_hl{};
FloatValueReader* GetME::gen_dme_mixhm{};
FloatValueReader* GetME::gen_dme_mixhp{};
FloatValueReader* GetME::gen_dme_mixhl{};
FloatValueReader* GetME::gen_dme_eft_hm{};
FloatValueReader* GetME::gen_dme_eft_hp{};
FloatValueReader* GetME::gen_dme_eft_hl{};
FloatValueReader* GetME::gen_dme_eft_mixhm{};
FloatValueReader* GetME::gen_dme_eft_mixhp{};
FloatValueReader* GetME::gen_dme_eft_mixhl{};

FloatValueReader* GetME::gen_pme_hsm{};
FloatValueReader* GetME::gen_pme_hm{};
FloatValueReader* GetME::gen_pme_hp{};
FloatValueReader* GetME::gen_pme_hl{};
FloatValueReader* GetME::gen_pme_hlzg{};
FloatValueReader* GetME::gen_pme_mixhm{};
FloatValueReader* GetME::gen_pme_mixhp{};
FloatValueReader* GetME::gen_pme_mixhl{};
FloatValueReader* GetME::gen_pme_mixhlzg{};
FloatValueReader* GetME::gen_pme_eft_hm{};
FloatValueReader* GetME::gen_pme_eft_hp{};
FloatValueReader* GetME::gen_pme_eft_hl{};
FloatValueReader* GetME::gen_pme_eft_mixhm{};
FloatValueReader* GetME::gen_pme_eft_mixhp{};
FloatValueReader* GetME::gen_pme_eft_mixhl{};

getme GetME::worker{};
std::vector<float> GetME::MEs{};

GetME::GetME(char const* name) :
  TTreeFunction(),
  name_{name}
 {

  std::map<std::string, unsigned> me_index = {
     {"ME_H0PM",0},
     {"ME_H0M",1},{"ME_H0M_M0",2},{"ME_H0M_M1",3},{"ME_H0M_M2",4},{"ME_H0M_M3",5},{"ME_H0Mf05",6},
     {"ME_H0PH",7},{"ME_H0PH_M0",8},{"ME_H0PH_M1",9},{"ME_H0PH_M2",10},{"ME_H0PH_M3",11},{"ME_H0PHf05",12},
     {"ME_H0L1",13},{"ME_H0L1_M0",14},{"ME_H0L1_M1",15},{"ME_H0L1_M2",16},{"ME_H0L1_M3",17},{"ME_H0L1f05",18},
     {"ME_H0LZg",19},{"ME_H0LZg_M0",20},{"ME_H0LZg_M1",21},{"ME_H0LZg_M2",22},{"ME_H0LZg_M3",23},{"ME_H0LZgf05",24},
     {"ME_EFTH0M",25},{"ME_EFTH0M_M0",26},{"ME_EFTH0M_M1",27},{"ME_EFTH0M_M2",28},{"ME_EFTH0M_M3",29},{"ME_EFTH0Mf05",30},
     {"ME_EFTH0PH",31},{"ME_EFTH0PH_M0",32},{"ME_EFTH0PH_M1",33},{"ME_EFTH0PH_M2",34},{"ME_EFTH0PH_M3",35},{"ME_EFTH0PHf05",36},
     {"ME_EFTH0L1",37},{"ME_EFTH0L1_M0",38},{"ME_EFTH0L1_M1",39},{"ME_EFTH0L1_M2",40},{"ME_EFTH0L1_M3",41},{"ME_EFTH0L1f05",42},
  };

  if(me_index.count(name_)>0) vindex = me_index.find(name_)->second;
  else std::cerr <<"Error : "+name_+" is not defined!" <<std::endl;

}
void
GetME::beginEvent(long long _iEntry)
{
  setValues(_iEntry);
}

unsigned
GetME::getNdata()
{
  return 1;
}

double
GetME::evaluate(unsigned)
{
  return MEs.at(vindex);
}

void
GetME::bindTree_(multidraw::FunctionLibrary& _library)
{
  if (currentEntry == -2) {
    currentEntry = -1;

    TString currentSampleName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
    if      ( currentSampleName.Contains("VBF_H0"))  SignalType = "VBF"; 
    else if ( currentSampleName.Contains("WH_H0"))   SignalType = "WH"; 
    else if ( currentSampleName.Contains("ZH_H0"))   SignalType = "ZH"; 
    else if ( currentSampleName.Contains("GGHjj_H0"))SignalType = "GGHjj"; 
    else if ( currentSampleName.Contains("_H0"))     SignalType = "GGH"; 

    if (SignalType == "GGHjj"){ // Hgg vertex
    
     _library.bindBranch(gen_pme_hsm,   "gen_pme_hsm");
     _library.bindBranch(gen_pme_hm,    "gen_pme_hm");
     _library.bindBranch(gen_pme_mixhm, "gen_pme_mixhm");

    }else{ // HVV vertex

     _library.bindBranch(gen_dme_hsm,   "gen_dme_hsm");
     _library.bindBranch(gen_dme_hm,    "gen_dme_hm");
     _library.bindBranch(gen_dme_hp,    "gen_dme_hp");
     _library.bindBranch(gen_dme_hl,    "gen_dme_hl");
     _library.bindBranch(gen_dme_mixhm, "gen_dme_mixhm");
     _library.bindBranch(gen_dme_mixhp, "gen_dme_mixhp");
     _library.bindBranch(gen_dme_mixhl, "gen_dme_mixhl");
     _library.bindBranch(gen_dme_eft_hm,    "gen_dme_eft_hm");
     _library.bindBranch(gen_dme_eft_hp,    "gen_dme_eft_hp");
     _library.bindBranch(gen_dme_eft_hl,    "gen_dme_eft_hl");
     _library.bindBranch(gen_dme_eft_mixhm, "gen_dme_eft_mixhm");
     _library.bindBranch(gen_dme_eft_mixhp, "gen_dme_eft_mixhp");
     _library.bindBranch(gen_dme_eft_mixhl, "gen_dme_eft_mixhl");

     if (SignalType != "GGH"){

      _library.bindBranch(gen_pme_hsm,   "gen_pme_hsm");
      _library.bindBranch(gen_pme_hm,    "gen_pme_hm");
      _library.bindBranch(gen_pme_hp,    "gen_pme_hp");
      _library.bindBranch(gen_pme_hl,    "gen_pme_hl");
      _library.bindBranch(gen_pme_hlzg,  "gen_pme_hlzg");
      _library.bindBranch(gen_pme_mixhm, "gen_pme_mixhm");
      _library.bindBranch(gen_pme_mixhp, "gen_pme_mixhp");
      _library.bindBranch(gen_pme_mixhl, "gen_pme_mixhl");
      _library.bindBranch(gen_pme_mixhlzg,"gen_pme_mixhlzg");
      _library.bindBranch(gen_pme_eft_hm,    "gen_pme_eft_hm");
      _library.bindBranch(gen_pme_eft_hp,    "gen_pme_eft_hp");
      _library.bindBranch(gen_pme_eft_hl,    "gen_pme_eft_hl");
      _library.bindBranch(gen_pme_eft_mixhm, "gen_pme_eft_mixhm");
      _library.bindBranch(gen_pme_eft_mixhp, "gen_pme_eft_mixhp");
      _library.bindBranch(gen_pme_eft_mixhl, "gen_pme_eft_mixhl");

     }
    }
   
    _library.addDestructorCallback([]() {
        currentEntry = -2;

        gen_dme_hsm     = nullptr;
        gen_dme_hm      = nullptr;
        gen_dme_hp      = nullptr;
        gen_dme_hl      = nullptr;
        gen_dme_mixhm   = nullptr;
        gen_dme_mixhp   = nullptr;
        gen_dme_mixhl   = nullptr;
        gen_dme_eft_hm      = nullptr;
        gen_dme_eft_hp      = nullptr;
        gen_dme_eft_hl      = nullptr;
        gen_dme_eft_mixhm   = nullptr;
        gen_dme_eft_mixhp   = nullptr;
        gen_dme_eft_mixhl   = nullptr;

        gen_pme_hsm     = nullptr;
        gen_pme_hm      = nullptr;
        gen_pme_hp      = nullptr;
        gen_pme_hl      = nullptr;
	gen_pme_hlzg    = nullptr;
        gen_pme_mixhm   = nullptr;
        gen_pme_mixhp   = nullptr;
        gen_pme_mixhl   = nullptr;
	gen_pme_mixhlzg = nullptr;
        gen_pme_eft_hm      = nullptr;
        gen_pme_eft_hp      = nullptr;
        gen_pme_eft_hl      = nullptr;
        gen_pme_eft_mixhm   = nullptr;
        gen_pme_eft_mixhp   = nullptr;
        gen_pme_eft_mixhl   = nullptr;

      });
  }
}

void
GetME::setValues(long long _iEntry)
{
  if (_iEntry == currentEntry)
    return;

  currentEntry = _iEntry;

  float dme_hsm     = -999;
  float dme_hm      = -999;
  float dme_hp      = -999;
  float dme_hl      = -999;
  float dme_mixhm   = -999;
  float dme_mixhp   = -999;
  float dme_mixhl   = -999;
  float dme_eft_hm      = -999;
  float dme_eft_hp      = -999;
  float dme_eft_hl      = -999;
  float dme_eft_mixhm   = -999;
  float dme_eft_mixhp   = -999;
  float dme_eft_mixhl   = -999;

  float pme_hsm     = -999;
  float pme_hm      = -999;
  float pme_hp      = -999;
  float pme_hl      = -999;
  float pme_hlzg    = -999;
  float pme_mixhm   = -999;
  float pme_mixhp   = -999;
  float pme_mixhl   = -999;
  float pme_mixhlzg = -999;
  float pme_eft_hm      = -999;
  float pme_eft_hp      = -999;
  float pme_eft_hl      = -999;
  float pme_eft_mixhm   = -999;
  float pme_eft_mixhp   = -999;
  float pme_eft_mixhl   = -999;

  if (SignalType == "GGHjj"){ // Hgg vertex

   pme_hsm   = *gen_pme_hsm ->Get();
   pme_hm    = *gen_pme_hm ->Get();
   pme_mixhm = *gen_pme_mixhm ->Get();
  
  }else{ //HVV vertex

   dme_hsm   = *gen_dme_hsm ->Get();
   dme_hm    = *gen_dme_hm ->Get();
   dme_hp    = *gen_dme_hp ->Get();
   dme_hl    = *gen_dme_hl ->Get();
   dme_mixhm = *gen_dme_mixhm ->Get();
   dme_mixhp = *gen_dme_mixhp ->Get();
   dme_mixhl = *gen_dme_mixhl ->Get();
   dme_eft_hm    = *gen_dme_eft_hm ->Get();
   dme_eft_hp    = *gen_dme_eft_hp ->Get();
   dme_eft_hl    = *gen_dme_eft_hl ->Get();
   dme_eft_mixhm = *gen_dme_eft_mixhm ->Get();
   dme_eft_mixhp = *gen_dme_eft_mixhp ->Get();
   dme_eft_mixhl = *gen_dme_eft_mixhl ->Get();
 
   if (SignalType != "GGH"){

    pme_hsm     = *gen_pme_hsm->Get();
    pme_hm      = *gen_pme_hm->Get();
    pme_hp      = *gen_pme_hp->Get();
    pme_hl      = *gen_pme_hl->Get();
    pme_hlzg    = *gen_pme_hlzg->Get();
    pme_mixhm   = *gen_pme_mixhm->Get();
    pme_mixhp   = *gen_pme_mixhp->Get();
    pme_mixhl   = *gen_pme_mixhl->Get();
    pme_mixhlzg = *gen_pme_mixhlzg->Get();
    pme_eft_hm      = *gen_pme_eft_hm->Get();
    pme_eft_hp      = *gen_pme_eft_hp->Get();
    pme_eft_hl      = *gen_pme_eft_hl->Get();
    pme_eft_mixhm   = *gen_pme_eft_mixhm->Get();
    pme_eft_mixhp   = *gen_pme_eft_mixhp->Get();
    pme_eft_mixhl   = *gen_pme_eft_mixhl->Get();

   }

  }

  std::vector<float> result;

  float MEH0PM  = worker.CalcMEg1gi(pme_hsm, 0, pme_hsm, dme_hsm, 0, dme_hsm, 1, 0, SignalType);
  result.push_back(MEH0PM);

  std::vector<float> MEH0M = worker.CalcACMEs("H0M", pme_mixhm, pme_hm, pme_hsm, dme_mixhm, dme_hm, dme_hsm, SignalType);
  result.insert(result.end(), MEH0M.begin(), MEH0M.end());

  std::vector<float> MEH0PH = worker.CalcACMEs("H0PH", pme_mixhp, pme_hp, pme_hsm, dme_mixhp, dme_hp, dme_hsm, SignalType);
  result.insert(result.end(), MEH0PH.begin(), MEH0PH.end());

  std::vector<float> MEH0L1 = worker.CalcACMEs("H0L1", pme_mixhl, pme_hl, pme_hsm, dme_mixhl, dme_hl, dme_hsm, SignalType);
  result.insert(result.end(), MEH0L1.begin(), MEH0L1.end());

  std::vector<float> MEH0LZg = worker.CalcACMEs("H0LZg", pme_mixhlzg, pme_hlzg, pme_hsm, dme_hsm, 0, dme_hsm, SignalType);
  result.insert(result.end(), MEH0LZg.begin(), MEH0LZg.end());

  std::vector<float> EFT_MEH0M = worker.CalcACMEs("H0M", pme_eft_mixhm, pme_eft_hm, pme_hsm, dme_eft_mixhm, dme_eft_hm, dme_hsm, SignalType);
  result.insert(result.end(), EFT_MEH0M.begin(), EFT_MEH0M.end());

  std::vector<float> EFT_MEH0PH = worker.CalcACMEs("H0PH", pme_eft_mixhp, pme_eft_hp, pme_hsm, dme_eft_mixhp, dme_eft_hp, dme_hsm, SignalType);
  result.insert(result.end(), EFT_MEH0PH.begin(), EFT_MEH0PH.end());

  std::vector<float> EFT_MEH0L1 = worker.CalcACMEs("H0L1", pme_eft_mixhl, pme_eft_hl, pme_hsm, dme_eft_mixhl, dme_eft_hl, dme_hsm, SignalType);
  result.insert(result.end(), EFT_MEH0L1.begin(), EFT_MEH0L1.end());

  MEs = result;
  
  if(isnan(MEH0PM)){ 
   std::cout<<"ME is nan? - Should check this! "<< std::endl;
   std::fill(MEs.begin(), MEs.end(), 1);
  }

}


