//------------------------------------------------------------------------------
//
// With this script the content of the variable LHEScaleWeight is print. For
// most of the samples this array has 9 elements, but due to a bug/feature in
// nanoAOD the length happens to be 8 for DYJetsToTT_MuEle_M-50 in 2017 and
// 2018.
//
//------------------------------------------------------------------------------

#include <vector>


TString treeBaseDir = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano";

TString mcProduction[] = {
  "Summer16_102X_nAODv5_Full2016v6",
  "Fall2017_102X_nAODv5_Full2017v6",
  "Autumn18_102X_nAODv6_Full2018v6"
};

TString mcSteps[] = {
  "MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6",
  "MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6",
  "MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6"
};

TString latino_path;

std::vector<TString> latino_sample;


void checkLHEScaleWeight(Int_t year = 2016)
{
  latino_path = treeBaseDir + "/" + mcProduction[year-2016] + "/" + mcSteps[year-2016];

  latino_sample.push_back("DYJetsToTT_MuEle_M-50");
  latino_sample.push_back("DYJetsToLL_M-10to50-LO");
  latino_sample.push_back("Wg_MADGRAPHMLM");
  latino_sample.push_back("WZTo3LNu_mllmin01");
  latino_sample.push_back("ZZTo2L2Q");
  latino_sample.push_back("WZTo2L2Q");

  if (year == 2017)
    {
      latino_sample.push_back("ZGToLLG");
    }
  else
    {
      latino_sample.push_back("Zg");
    }

  if (year == 2018)
    {
      latino_sample.push_back("ZZTo2L2Nu_ext1");
      latino_sample.push_back("ZZTo4L_ext1");
    }
  else
    {
      latino_sample.push_back("ZZTo2L2Nu");
      latino_sample.push_back("ZZTo4L");
    }


  // Loop
  //----------------------------------------------------------------------------
  for (UInt_t i=0; i<latino_sample.size(); i++) {

    TChain* tree = new TChain("Events", "Events");

    tree->Add(latino_path + "/nanoLatino_" + latino_sample.at(i) + "__part0.root");

    tree->Print("LHEScaleWeight*");
  }
}
