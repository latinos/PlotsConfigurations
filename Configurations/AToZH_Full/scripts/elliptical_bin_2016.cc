#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include <string>
#include <cmath>
#include <math.h>
//only works when we use the AZH_patch.cc for mA-mH -- is defined as float in l3kin
////////////////////////////////
// Putting ellipse class here //
////////////////////////////////

class Ellipse {
public:
  Ellipse() {}; //default constructor to make arrays work
  Ellipse(float mean_x_, float mean_y_, float width_, float height_, float angle_, int n_std_);
  bool is_point_included(float x, float y);

protected:
  float mean_x;
  float mean_y;
  float width;
  float height;
  float angle;
  int n_std;
};

Ellipse::Ellipse(float mean_x_, float mean_y_, float width_, float height_, float angle_, int n_std_):
  mean_x{mean_x_},
  mean_y{mean_y_},
  width{width_},
  height{height_},
  angle{angle_},
  n_std{n_std_}
{}

bool Ellipse::is_point_included(float x, float y){
  float rad_angle = (M_PI / 180.0) * angle;
  float semi_w = width / 2;
  float semi_h = height / 2;
  float cos = std::cos(rad_angle);
  float sin = std::sin(rad_angle);
  float n1 = std::pow(cos * (x - mean_x) + sin * (y - mean_y),2);
  float n2 = std::pow(sin * (x - mean_x) - cos * (y - mean_y),2);
  float v = n1 / (semi_w * semi_w) + n2 / (semi_h * semi_h);
  return (v < 1.);
}

//////////////////////////
// End of Ellipse class //
//////////////////////////

class elliptical_bin_2016 : public multidraw::TTreeFunction {
public:
  elliptical_bin_2016(const float mA_, const float mH_, const bool isonebjet_);
  char const* getName() const override { return "elliptical_bin_2016"; }
  TTreeFunction* clone() const override { return new elliptical_bin_2016(mA, mH, isonebjet); }
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  TTreeReaderValue<double>* AZH_mA_minus_mH_patch;
  TTreeReaderValue<double>* AZH_mA_minus_mH_onebjet_patch;
  FloatValueReader* ZH3l_pTZ;
  float mA;
  float mH;
  bool isonebjet;
  Ellipse ellipses[6];
};

elliptical_bin_2016::elliptical_bin_2016(const float mA_, const float mH_, const bool isonebjet_) :
  TTreeFunction(), mA{mA_}, mH{mH_}, isonebjet{isonebjet_}
{
  // Load in the ellipse json at initialization
  // Assumptions made:
  // - All ellipses will be stored in the same .txt file
  // - Each mA, mH point will have 6 ellipses, corresponding to 6 consecutive lines in the .txt file
  std::string cmssw_base = std::getenv("CMSSW_BASE");
  std::string filename;
  if (isonebjet) filename = cmssw_base + "/src/PlotsConfigurations/Configurations/AToZH_Full/scripts/ellipse_onebjet_16HIPM.txt"; //TEMP update with correct filename
  else           filename = cmssw_base + "/src/PlotsConfigurations/Configurations/AToZH_Full/scripts/ellipse_breq_16HIPM.txt";
  std::ifstream ifs(filename);

  std::string line;
  int iline = 0;
  while(getline(ifs, line)){
    std::istringstream strm(line);
    float mAtmp, mHtmp;
    strm >> mAtmp;
    strm >> mHtmp;
    if (mAtmp == mA && mHtmp == mH){
      float par[6];
      for (int i = 0; i < 6; i++){
	strm >> par[i];
      }
      Ellipse ell(par[0], par[1], par[2], par[3], par[4], par[5]);
      ellipses[iline] = ell;
      iline++;
    }
  }
  ifs.close();
}

double elliptical_bin_2016::evaluate(unsigned){
  double dM;
  if (isonebjet) dM = *AZH_mA_minus_mH_onebjet_patch->Get();
  else           dM = *AZH_mA_minus_mH_patch->Get();
  float ptZ{*ZH3l_pTZ->Get()};
  for (int i = 0; i < 6; i++){
    if (ellipses[i].is_point_included(ptZ,dM)){
      return i;
    }
  }
  return 6;
}

void elliptical_bin_2016::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(AZH_mA_minus_mH_patch,   "AZH_mA_minus_mH_patch");
  _library.bindBranch(AZH_mA_minus_mH_onebjet_patch, "AZH_mA_minus_mH_onebjet_patch");
  _library.bindBranch(ZH3l_pTZ,                "ZH3l_pTZ");
}

