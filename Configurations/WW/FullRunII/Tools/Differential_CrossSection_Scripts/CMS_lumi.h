#include "TPad.h"
#include "TLatex.h"
#include "TLine.h"
#include "TBox.h"
#include "TASImage.h"

//
// Global variables
//

TString cmsText     = "CMS";
float cmsTextFont   = 61;  // default is helvetic-bold

bool writeExtraText = false;
TString extraText   = "Preliminary";
float extraTextFont = 52;  // default is helvetica-italics

// text sizes and text offsets with respect to the top frame
// in unit of the top margin size
float lumiTextSize     = 0.6;
//float lumiTextOffset   = 0.2; // 0.45; // 0.2 sometimes
float cmsTextSize      = 1.05;
float cmsTextOffset    = 0.1;  // only used in outOfFrame version

float relPosX    = 0.045;
float relPosY    = 0.035;
float relExtraDY = 1.2;

// ratio of "CMS" and extra text size
float extraOverCmsTextSize  = 0.76;

TString lumi_13TeV_2016 = "35.9 fb^{-1}";
TString lumi_13TeV_2017 = "41.5 fb^{-1}";
TString lumi_13TeV_2018 = "60.0 fb^{-1}";
TString lumi_13TeV_Run3 = "138 fb^{-1}";
TString lumi_13TeV_2019 = "137 fb^{-1}";
TString lumi_13TeV_20220 = "8.1 fb^{-1}";
TString lumi_13TeV_20221 = "26.7 fb^{-1}";
TString lumi_13TeV_2022  = "34.8 fb^{-1}";
TString lumi_13TeV_20230 = "17.6 fb^{-1}";
TString lumi_13TeV_20231 = "9.5 fb^{-1}";
TString lumi_13TeV_2023  = "27.1 fb^{-1}";
TString lumi_13TeV_2027  = "171 fb^{-1}";
TString lumi_13TeV_VBFG = "130 fb^{-1}";
TString lumi_14TeV_HLLHC = "3000 fb^{-1}";
TString lumi_8TeV       = "19.4 fb^{-1}";
TString lumi_7TeV       = "4.9 fb^{-1}";
TString lumi_sqrtS      = "";

bool drawLogo      = false;

void CMS_lumi( TPad* pad, int iPeriod=3, int iPosX=10, double lumiTextOffset = 0.2);
