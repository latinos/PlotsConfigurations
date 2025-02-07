#include "CombineHarvester/HWW/interface/HwwSystematics_MSSMRun2.h"
#include <vector>
#include <string>
#include "CombineHarvester/CombineTools/interface/Systematics.h"
#include "CombineHarvester/CombineTools/interface/Process.h"
#include "CombineHarvester/CombineTools/interface/Utilities.h"

namespace ch {

using ch::syst::SystMap;
using ch::syst::SystMapAsymm;
using ch::syst::era;
using ch::syst::channel;
using ch::syst::bin_id;
using ch::syst::process;
using ch::syst::mass;
using ch::syst::bin;
using ch::JoinStr;

void AddMSSMFullRun2Systematics(CombineHarvester & cb, bool highmass, bool DNNdiscrim, std::string model) {
  // Create a CombineHarvester clone that only contains the signal
  // categories
  CombineHarvester cb_sig = cb.cp();

  std::vector<std::string> ggH = {"ggH_HWW"};
  std::vector<std::string> qqH = {"qqH_HWW"};
  std::vector<std::string> ggHSBI = {"ggH_HWWSBI"};
  std::vector<std::string> qqHSBI = {"qqH_HWWSBI"};

  std::vector<std::string> runyears = {"6", "7", "8"};

  // Di-leptonic definition only
  cb.cp().bin_id({6,10,13}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("njet","ggh");
  });
  cb.cp().bin_id({7,11,14}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("njet","vbf");
  });
  cb.cp().bin_id({8,12,15}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("njet","notag");
  });
  // Semi-leptonic definition only
  cb.cp().bin_id({6}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("categ","isGGH");
  });
  cb.cp().bin_id({7}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("categ","isVBF");
  });
  cb.cp().bin_id({8}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("categ","isBKG");
  });

  cb.cp().channel({"em8","em8_dy","em8_top", "em7","em7_dy","em7_top", "em6","em6_dy","em6_top"}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("decay","em");
  });
  cb.cp().channel({"ee8","ee8_dy","ee8_top", "ee7","ee7_dy","ee7_top", "ee6","ee6_dy","ee6_top"}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("decay","ee");
  });
  cb.cp().channel({"mm8","mm8_dy","mm8_top", "mm7","mm7_dy","mm7_top", "mm6","mm6_dy","mm6_top"}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("decay","mm");
  });
  //cb.cp().channel({"ee8","ee8_dy","ee8_top", "ee7","ee7_dy","ee7_top", "ee6","ee6_dy","ee6_top", "mm8","mm8_dy","mm8_top", "mm7","mm7_dy","mm7_top", "mm6","mm6_dy","mm6_top"}).ForEachObj([&](ch::Object *obj){
  //    obj->set_attribute("decay","SF");
  //});

  cb.cp().channel({"em8","em8_dy","em8_top", "ee8","ee8_dy","ee8_top", "mm8","mm8_dy","mm8_top", "lqq8_resol","lqq8_resol_top","lqq8_resol_sb", "lqq8_boost","lqq8_boost_top","lqq8_boost_sb"}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("year","2k18");
  });
  cb.cp().channel({"em7","em7_dy","em7_top", "ee7","ee7_dy","ee7_top", "mm7","mm7_dy","mm7_top", "lqq7_resol","lqq7_resol_top","lqq7_resol_sb", "lqq7_boost","lqq7_boost_top","lqq7_boost_sb"}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("year","2k17");
  });
  cb.cp().channel({"em6","em6_dy","em6_top", "ee6","ee6_dy","ee6_top", "mm6","mm6_dy","mm6_top", "lqq6_resol","lqq6_resol_top","lqq6_resol_sb", "lqq6_boost","lqq6_boost_top","lqq6_boost_sb"}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("year","2k16");
  });

  cb.cp().channel({"em8","ee8","mm8", "em7","ee7","mm7", "em6","ee6","mm6", "lqq8_resol","lqq8_boost", "lqq7_resol","lqq7_boost", "lqq6_resol","lqq6_boost"}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("CR","False");
  });
  cb.cp().channel({"em8_dy","em8_top","ee8_dy","ee8_top","mm8_dy","mm8_top", "em7_dy","em7_top","ee7_dy","ee7_top","mm7_dy","mm7_top", "em6_dy","em6_top","ee6_dy","ee6_top","mm6_dy","mm6_top", "lqq8_resol_top","lqq8_resol_sb","lqq8_boost_top","lqq8_boost_sb", "lqq7_resol_top","lqq7_resol_sb","lqq7_boost_top","lqq7_boost_sb", "lqq6_resol_top","lqq6_resol_sb","lqq6_boost_top","lqq6_boost_sb"}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("CR","True");
  });

  cb.cp().channel({"em6","em6_dy","em6_top", "ee6","ee6_dy","ee6_top", "mm6","mm6_dy","mm6_top", "em7","em7_dy","em7_top", "ee7","ee7_dy","ee7_top", "mm7","mm7_dy","mm7_top", "em8","em8_dy","em8_top", "ee8","ee8_dy","ee8_top", "mm8","mm8_dy","mm8_top"}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("analysis","dilep");
  });
  cb.cp().channel({"lqq6_resol","lqq6_resol_top","lqq6_resol_sb", "lqq6_boost","lqq6_boost_top","lqq6_boost_sb", "lqq7_resol","lqq7_resol_top","lqq7_resol_sb", "lqq7_boost","lqq7_boost_top","lqq7_boost_sb", "lqq8_resol","lqq8_resol_top","lqq8_resol_sb", "lqq8_boost","lqq8_boost_top","lqq8_boost_sb"}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("analysis","semilep");
  });

  cb.cp().channel({"lqq6_boost","lqq6_boost_top","lqq6_boost_sb", "lqq7_boost","lqq7_boost_top","lqq7_boost_sb", "lqq8_boost","lqq8_boost_top","lqq8_boost_sb"}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("whad","boosted");
  });
  cb.cp().channel({"lqq6_resol","lqq6_resol_top","lqq6_resol_sb", "lqq7_resol","lqq7_resol_top","lqq7_resol_sb", "lqq8_resol","lqq8_resol_top","lqq8_resol_sb"}).ForEachObj([&](ch::Object *obj){
      obj->set_attribute("whad","resolved");
  });


  std::vector<std::string> SM_procs = {"ggH_hww", "qqH_hww", "SM"};
  std::vector<std::string> SM_procs_semi = {"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_hww", "ggH_htt", "qqH_hww", "qqH_htt"};

  auto signal = Set2Vec(cb.cp().signals().SetFromProcs(
      std::mem_fn(&Process::process)));

  std::vector<std::string> backgrounds = {"DY", "VV", "WW", "WWewk", "ggWW", "qqWWqq", "WW2J", "top"}; // All backgrounds, but without Fakes or Embedding!
  std::vector<std::string> backgrounds_semi = {"DY", "VVV", "VZ", "Vg", "VgS_H", "VgS_L", "WW", "Wjets", "ggWW", "qqWWqq", "top","WWewk","VBF_V"}; // All backgrounds, but without Fakes
  std::vector<std::string> backgrounds_semi_PS = {"DY", "VVV", "VZ", "Vg", "VgS_H", "VgS_L", "WW", "Wjets", "ggWW", "qqWWqq", "top","VBF_V"}; // All backgrounds, but without Fakes


  //////////////////////////////////////////////////
  ////////// QCD+PDF ///////////////////////////////
  //////////////////////////////////////////////////


  // QCD scale uncertainties
  // -----------------------
  // SM Signal: Official YR4 uncertainties (lnN)
  // HM Signal: Same for VBF (lnN), but ggH is binned by njet: Use either Stuart-Tackmann or envelope of event weights (shape)
  // Background: Envelope of event weight, for which weight exist (shape), otherwise ??? (lnN)
  // SBI: Convert lnN of SBI constituents into shape, because different parts have different uncertainties

  // Di-leptonic: Merged SM processes: lnN uncertainties becomes shapes
  cb.cp().process({"SM"}).attr({"dilep"},"analysis").AddSyst(cb, "QCDscale_ggH", "shape", SystMap<>::init(1.00));
  cb.cp().process({"SM"}).attr({"dilep"},"analysis").AddSyst(cb, "QCDscale_qqH", "shape", SystMap<>::init(1.00));
  cb.cp().process({"SM"}).attr({"dilep"},"analysis").AddSyst(cb, "QCDscale_VH", "shape", SystMap<>::init(1.00));
  // Semi-leptonic: Is still split
  cb.cp().process({"ggH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "QCDscale_ggH", "lnN", SystMapAsymm<>::init(0.933,1.046));
  cb.cp().process({"qqH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "QCDscale_qqH", "lnN", SystMapAsymm<>::init(0.997,1.004));
  cb.cp().process({"WH_hww", "WH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "QCDscale_VH", "lnN", SystMapAsymm<>::init(0.993,1.005));
  cb.cp().process({"ZH_hww", "ZH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "QCDscale_VH", "lnN", SystMapAsymm<>::init(0.994,1.005));

  cb.cp().process(JoinStr({ggH, ggHSBI, {"ggH_hww"}})).AddSyst(cb, "QCDscale_ggH", "shape", SystMap<>::init(1.00));
  //cb.cp().process(JoinStr({ggH, ggHSBI, {"ggH_hww"}})).attr({"True"},"CR").AddSyst(cb, "QCDscale_ggH", "lnN", SystMap<>::init(1.000)); // TODO would need to manually get these values
  cb.cp().process(JoinStr({{"ggWW"}})).attr({"False"},"CR").AddSyst(cb, "QCDscale_ggVV", "shape", SystMap<>::init(1.00)); // TODO Missing for SBI
  cb.cp().process(JoinStr({ggHSBI, {"ggWW"}})).attr({"True"},"CR").AddSyst(cb, "QCDscale_ggVV", "lnN", SystMap<>::init(1.150));
  cb.cp().process(JoinStr({qqH, qqHSBI, {"qqH_hww"}})).AddSyst(cb, "QCDscale_qqH", "shape", SystMap<>::init(1.00));
  //cb.cp().process(JoinStr({qqH, qqHSBI, {"qqH_hww"}})).attr({"True"},"CR").AddSyst(cb, "QCDscale_qqH", "lnN", SystMap<>::init(1.000)); // TODO would need to manually get these values
  cb.cp().process(JoinStr({qqHSBI, {"qqWWqq"}})).AddSyst(cb, "QCDscale_VV", "shape", SystMap<>::init(1.00)); // TODO: Only Di-leptonic currently

  //cb.cp().process({"DY"}).AddSyst(cb, "QCDscale_V", "shape", SystMap<>::init(1.00));
  cb.cp().process({"DY"}).attr({"ee"},"decay").AddSyst(cb,"QCDscale_V_ee", "shape", SystMap<>::init(1.00));
  cb.cp().process({"DY"}).attr({"em"},"decay").AddSyst(cb,"QCDscale_V_em", "shape", SystMap<>::init(1.00));
  cb.cp().process({"DY"}).attr({"mm"},"decay").AddSyst(cb,"QCDscale_V_mm", "shape", SystMap<>::init(1.00));
  cb.cp().process({"DY"}).attr({"semilep"},"analysis").AddSyst(cb,"QCDscale_V", "shape", SystMap<>::init(1.00));
  cb.cp().process({"VV", "WW2J"}).attr({"dilep"},"analysis").AddSyst(cb, "QCDscale_VV", "shape", SystMap<>::init(1.00)); // Not available in Semi-leptonic
  cb.cp().process({"WW"}).attr({"semilep"},"analysis").AddSyst(cb, "QCDscale_VV", "shape", SystMap<>::init(1.00)); // TODO: To be included for semilep
  cb.cp().process({"top"}).AddSyst(cb, "QCDscale_ttbar", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WWewk"}).AddSyst(cb, "QCDscale_WWewk", "lnN", SystMap<>::init(1.11));
  //cb.cp().process({"Wjets"}).attr({"semilep"},"analysis").AddSyst(cb, "QCDscale_Wjets", "shape", SystMap<>::init(1.00)); // TODO: Possibly renamed to QCDscale_V?

  // QCD scale acceptance uncertainties
  // -----------------------
  cb.cp().process({"SM"}).attr({"dilep"},"analysis").AddSyst(cb, "QCDscale_ggH_ACCEPT", "shape", SystMap<>::init(1.00));
  cb.cp().process({"ggH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "QCDscale_ggH_ACCEPT", "lnN", SystMap<>::init(1.012));
  cb.cp().process(JoinStr({ggH, ggHSBI, {"ggH_hww", "ggWW"}})).AddSyst(cb, "QCDscale_ggH_ACCEPT", "shape", SystMap<>::init(1.00));
 // cb.cp().process(JoinStr({ggH, ggHSBI})).attr({"True"},"CR").AddSyst(cb, "QCDscale_ggH_ACCEPT", "lnN", SystMap<>::init(1.000)); // TODO would need to manually get these values
  cb.cp().process(JoinStr({{"ggH_hww", "ggWW"}})).attr({"True"},"CR").AddSyst(cb, "QCDscale_ggH_ACCEPT", "lnN", SystMap<>::init(1.012));

  cb.cp().process({"SM"}).attr({"dilep"},"analysis").AddSyst(cb, "QCDscale_qqH_ACCEPT", "shape", SystMap<>::init(1.00));
  cb.cp().process({"qqH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "QCDscale_qqH_ACCEPT", "lnN", SystMap<>::init(1.003));
  cb.cp().process(JoinStr({qqH, qqHSBI, {"qqH_hww", "qqWWqq"}})).AddSyst(cb, "QCDscale_qqH_ACCEPT", "shape", SystMap<>::init(1.00));
  //cb.cp().process(JoinStr({qqH, qqHSBI})).attr({"True"},"CR").AddSyst(cb, "QCDscale_qqH_ACCEPT", "lnN", SystMap<>::init(1.000)); // TODO would need to manually get these values
  cb.cp().process(JoinStr({{"qqH_hww", "qqWWqq"}})).attr({"True"},"CR").AddSyst(cb, "QCDscale_qqH_ACCEPT", "lnN", SystMap<>::init(1.003));

  cb.cp().process({"SM"}).attr({"dilep"},"analysis").AddSyst(cb, "QCDscale_VH_ACCEPT", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WH_hww", "WH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "QCDscale_VH_ACCEPT", "lnN", SystMap<>::init(1.010));
  cb.cp().process({"ZH_hww", "ZH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "QCDscale_VH_ACCEPT", "lnN", SystMap<>::init(1.015));


  // PDF uncertainties
  // -----------------------
  cb.cp().process({"SM"}).attr({"dilep"},"analysis").AddSyst(cb, "pdf_Higgs_gg", "shape", SystMap<>::init(1.00));
  cb.cp().process({"ggH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "pdf_Higgs_gg", "lnN", SystMap<>::init(1.032));
  cb.cp().process(JoinStr({ggH, ggHSBI, {"ggH_hww"}})).AddSyst(cb, "pdf_Higgs_gg", "shape", SystMap<>::init(1.00));

  cb.cp().process(JoinStr({ggHSBI, {"ggWW"}})).AddSyst(cb, "pdf_gg", "shape", SystMap<>::init(1.00)); // TODO Add ggHSBI for Semilep

  cb.cp().process({"SM"}).attr({"dilep"},"analysis").AddSyst(cb, "pdf_Higgs_qqbar", "shape", SystMap<>::init(1.00));
  cb.cp().process({"qqH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "pdf_Higgs_qqbar", "lnN", SystMap<>::init(1.021));
  cb.cp().process({"WH_hww", "WH_htt", "ZH_hww", "ZH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "pdf_Higgs_qqbar", "lnN", SystMap<>::init(1.019));
  cb.cp().process(JoinStr({qqH, qqHSBI, {"qqH_hww"}})).AddSyst(cb, "pdf_Higgs_qqbar", "shape", SystMap<>::init(1.00));

  cb.cp().process({"WWewk"}).AddSyst(cb, "pdf_qqbar", "lnN", SystMap<>::init(1.05));
  cb.cp().process({"VV"}).attr({"dilep"},"analysis").AddSyst(cb, "pdf_qqbar", "shape", SystMap<>::init(1.00));
  cb.cp().process({"VZ", "Vg", "VgS_H", "VgS_L"}).attr({"semilep"},"analysis").AddSyst(cb, "pdf_qqbar", "lnN", SystMap<>::init(1.05));
  //cb.cp().process({"DY"}).attr({"semilep"},"analysis").AddSyst(cb, "pdf_qqbar", "lnN", SystMap<>::init(1.002)); // TODO, Need for Di-lep?
  cb.cp().process(JoinStr({qqHSBI, {"qqWWqq"}})).AddSyst(cb, "pdf_qqbar", "shape", SystMap<>::init(1.00)); // TODO: Add qqHSBI
  //cb.cp().process({"qqWWqq"}).AddSyst(cb, "pdf_qqbar", "shape", SystMap<>::init(1.00)); // TODO: Add qqHSBI
  //cb.cp().process({qqHSBI}).AddSyst(cb, "pdf_qqbar_HWW", "shape", SystMap<>::init(1.00)); // TODO: Add qqHSBI

  // PDF background shape
  // -----------------------
  cb.cp().process({"DY"}).attr({"2k16"},"year").AddSyst(cb,
    "pdf_DY_2016", "shape", SystMap<>::init(1.00));
  cb.cp().process({"top"}).attr({"2k16"},"year").AddSyst(cb,
    "pdf_top_2016", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WW"}).attr({"2k16"},"year").AddSyst(cb,
    "pdf_WW_2016", "shape", SystMap<>::init(1.00));
  cb.cp().process({"Wjets"}).attr({"semilep"},"analysis").attr({"2k16"},"year").AddSyst(cb,
    "pdf_WJets_2016", "shape", SystMap<>::init(1.00));
  for(int ibin=1; ibin<=32; ibin++){
    cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"2k17"},"year").AddSyst(cb,
      "pdf_DY_"+std::to_string(ibin)+"_2017", "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"2k18"},"year").AddSyst(cb,
      "pdf_DY_"+std::to_string(ibin)+"_2018", "shape", SystMap<>::init(1.00));
    cb.cp().process({"top"}).attr({"dilep"},"analysis").attr({"2k17"},"year").AddSyst(cb,
      "pdf_top_"+std::to_string(ibin)+"_2017", "shape", SystMap<>::init(1.00));
    cb.cp().process({"top"}).attr({"dilep"},"analysis").attr({"2k18"},"year").AddSyst(cb,
      "pdf_top_"+std::to_string(ibin)+"_2018", "shape", SystMap<>::init(1.00));
    cb.cp().process({"WW"}).attr({"dilep"},"analysis").attr({"2k17"},"year").AddSyst(cb,
      "pdf_WW_"+std::to_string(ibin)+"_2017", "shape", SystMap<>::init(1.00));
    cb.cp().process({"WW"}).attr({"dilep"},"analysis").attr({"2k18"},"year").AddSyst(cb,
      "pdf_WW_"+std::to_string(ibin)+"_2018", "shape", SystMap<>::init(1.00));

    cb.cp().process({"DY"}).attr({"semilep"},"analysis").attr({"2k17"},"year").AddSyst(cb,
      "pdf_DY_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00)); // TODO: Needs 2017 in name
    cb.cp().process({"DY"}).attr({"semilep"},"analysis").attr({"2k18"},"year").AddSyst(cb,
      "pdf_DY_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00));
    cb.cp().process({"top"}).attr({"semilep"},"analysis").attr({"2k17"},"year").AddSyst(cb,
      "pdf_top_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00)); // TODO: Needs 2017 in name
    cb.cp().process({"top"}).attr({"semilep"},"analysis").attr({"2k18"},"year").AddSyst(cb,
      "pdf_top_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00));
    cb.cp().process({"Wjets"}).attr({"semilep"},"analysis").attr({"2k17"},"year").AddSyst(cb,
      "pdf_Wjets_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00)); // TODO: Needs 2017 in name
    cb.cp().process({"Wjets"}).attr({"semilep"},"analysis").attr({"2k18"},"year").AddSyst(cb,
      "pdf_Wjets_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00));
    cb.cp().process({"WW"}).attr({"semilep"},"analysis").attr({"2k17"},"year").AddSyst(cb,
      "pdf_WW_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00)); // TODO: Needs 2017 in name
    cb.cp().process({"WW"}).attr({"semilep"},"analysis").attr({"2k18"},"year").AddSyst(cb,
      "pdf_WW_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00));
    //cb.cp().process({"DY"}).attr({"semilep"},"analysis").attr({"2k17"},"year").AddSyst(cb,
    //  "hww_pdf_DY_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00)); // TODO: Needs 2017 in name
    //cb.cp().process({"DY"}).attr({"semilep"},"analysis").attr({"2k18"},"year").AddSyst(cb,
    //  "hww_pdf_DY_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00));
    //cb.cp().process({"top"}).attr({"semilep"},"analysis").attr({"2k17"},"year").AddSyst(cb,
    //  "hww_pdf_top_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00)); // TODO: Needs 2017 in name
    //cb.cp().process({"top"}).attr({"semilep"},"analysis").attr({"2k18"},"year").AddSyst(cb,
    //  "hww_pdf_top_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00));
    //cb.cp().process({"Wjets"}).attr({"semilep"},"analysis").attr({"2k17"},"year").AddSyst(cb,
    //  "hww_pdf_Wjets_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00)); // TODO: Needs 2017 in name
    //cb.cp().process({"Wjets"}).attr({"semilep"},"analysis").attr({"2k18"},"year").AddSyst(cb,
    //  "hww_pdf_Wjets_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00));
    //cb.cp().process({"WW"}).attr({"semilep"},"analysis").attr({"2k17"},"year").AddSyst(cb,
    //  "hww_pdf_WW_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00)); // TODO: Needs 2017 in name
    //cb.cp().process({"WW"}).attr({"semilep"},"analysis").attr({"2k18"},"year").AddSyst(cb,
    //  "hww_pdf_WW_eigen"+std::to_string(ibin), "shape", SystMap<>::init(1.00));
  }


  // PDF acceptance uncertainties
  // -----------------------
  cb.cp().process({"SM"}).attr({"dilep"},"analysis").AddSyst(cb, "pdf_Higgs_gg_ACCEPT", "shape", SystMap<>::init(1.00));
  cb.cp().process({"ggH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "pdf_Higgs_gg_ACCEPT", "lnN", SystMap<>::init(1.006));
  cb.cp().process(JoinStr({ggH,ggHSBI,{"ggH_hww"}})).AddSyst(cb, "pdf_Higgs_gg_ACCEPT", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({ggHSBI, {"ggWW"}})).AddSyst(cb, "pdf_gg_ACCEPT", "shape", SystMap<>::init(1.00)); // TODO Add ggHSBI

  cb.cp().process({"SM"}).attr({"dilep"},"analysis").AddSyst(cb, "pdf_Higgs_qqbar_ACCEPT", "shape", SystMap<>::init(1.00));
  cb.cp().process({"qqH_htt", "ZH_hww", "ZH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "pdf_Higgs_qqbar_ACCEPT", "lnN", SystMap<>::init(1.002));
  cb.cp().process({"WH_hww", "WH_htt"}).attr({"semilep"},"analysis").AddSyst(cb, "pdf_Higgs_qqbar_ACCEPT", "lnN", SystMap<>::init(1.003));
  cb.cp().process(JoinStr({qqH,qqHSBI, {"qqH_hww"}})).AddSyst(cb, "pdf_Higgs_qqbar_ACCEPT", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({qqHSBI, {"qqWWqq"}})).AddSyst(cb, "pdf_qqbar_ACCEPT", "shape", SystMap<>::init(1.00)); // TODO Add qqHSBI




  //////////////////////////////////////////////////
  ////////// DILEP /////////////////////////////////
  //////////////////////////////////////////////////

  // Cross-sections and lumi
  // -----------------------
  // Di-leptonic: No DY, Top, WW, WW2J, because using rateparam
  std::vector<std::string> LumiBkg = {"VV", "WWewk", "ggWW", "qqWWqq"};

  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k18"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_2018", "lnN", SystMap<>::init(1.010));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k17"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_2017", "lnN", SystMap<>::init(1.020));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k16"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_2016", "lnN", SystMap<>::init(1.015));

  // Correlated lumi
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k16"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_correlated", "lnN", SystMap<>::init(1.006));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k17"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_correlated", "lnN", SystMap<>::init(1.009));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k18"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_correlated", "lnN", SystMap<>::init(1.020));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k17"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_1718", "lnN", SystMap<>::init(1.006));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k18"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_1718", "lnN", SystMap<>::init(1.002));

  /*cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k18"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_XY", "lnN", SystMap<>::init(1.020));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k18"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_LS", "lnN", SystMap<>::init(1.002));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k18"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_BCC", "lnN", SystMap<>::init(1.002));

  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k17"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_XY", "lnN", SystMap<>::init(1.008));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k17"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_LS", "lnN", SystMap<>::init(1.003));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k17"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_BBD", "lnN", SystMap<>::init(1.004));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k17"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_DB", "lnN", SystMap<>::init(1.005));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k17"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_BCC", "lnN", SystMap<>::init(1.003));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k17"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_GS", "lnN", SystMap<>::init(1.001));

  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k16"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_XY", "lnN", SystMap<>::init(1.009));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k16"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_BBD", "lnN", SystMap<>::init(1.004));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k16"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_DB", "lnN", SystMap<>::init(1.005));
  cb.cp().process(JoinStr({signal, SM_procs, LumiBkg})).attr({"2k16"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_GS", "lnN", SystMap<>::init(1.004));*/


  // WW stuff
  // -----------------------

  cb.cp().process({"WW"}).attr({"ggh"},"njet").attr({"dilep"},"analysis").AddSyst(cb, "CMS_hww_WWqscale_ggh", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WW"}).attr({"vbf"},"njet").attr({"dilep"},"analysis").AddSyst(cb, "CMS_hww_WWqscale_vbf", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WW"}).attr({"notag"},"njet").attr({"dilep"},"analysis").AddSyst(cb, "CMS_hww_WWqscale_notag", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WW"}).attr({"ggh"},"njet").attr({"dilep"},"analysis").AddSyst(cb, "CMS_hww_WWresum_ggh", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WW"}).attr({"vbf"},"njet").attr({"dilep"},"analysis").AddSyst(cb, "CMS_hww_WWresum_vbf", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WW"}).attr({"notag"},"njet").attr({"dilep"},"analysis").AddSyst(cb, "CMS_hww_WWresum_notag", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WW"}).attr({"dilep"},"analysis").AddSyst(cb, "CMS_hww_EWKcorr_WW", "shape", SystMap<>::init(1.00));


  // Top stuff
  // -----------------------

  cb.cp().process({"top"}).attr({"dilep"},"analysis").AddSyst(cb, "singleTopToTTbar", "shape", SystMap<>::init(1.00));
  cb.cp().process({"top"}).attr({"dilep"},"analysis").AddSyst(cb, "CMS_topPtRew", "shape", SystMap<>::init(1.00));


  // DY stuff
  // -----------------------

  for(auto y : runyears){
    /*cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_ZPtRew_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_NLORew_201"+y, "shape", SystMap<>::init(1.00));
    //cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"ee", "mm"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
    //  "CMS_hww_DYrecoil_accept_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"ee", "mm"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_mllRew_201"+y, "shape", SystMap<>::init(1.00));*/

    //cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"em"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
    //  "CMS_DY_ZPtRew_em_201"+y, "shape", SystMap<>::init(1.00)); // NOTE: This does absolutely nothing in em!
    //cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"em"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
    //  "CMS_DY_NLORew_em_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"mm"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_ZPtRew_mm_201"+y, "shape", SystMap<>::init(1.00));
    //cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"mm"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
    //  "CMS_DY_NLORew_mm_201"+y, "shape", SystMap<>::init(1.00));
    //cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"mm"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
    //  "CMS_DY_mllRew_mm_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"ee"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_ZPtRew_ee_201"+y, "shape", SystMap<>::init(1.00));
    //cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"ee"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
    //  "CMS_DY_NLORew_ee_201"+y, "shape", SystMap<>::init(1.00));
    //cb.cp().process({"DY"}).attr({"dilep"},"analysis").attr({"ee"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
    //  "CMS_DY_mllRew_ee_201"+y, "shape", SystMap<>::init(1.00));

   // cb.cp().process({"DY"}).attr({"ggh"},"njet").attr({"dilep"},"analysis").attr({"em"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
   //   "CMS_DY_NLORew_em_ggh_201"+y, "shape", SystMap<>::init(1.00));
   // cb.cp().process({"DY"}).attr({"vbf"},"njet").attr({"dilep"},"analysis").attr({"em"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
   //   "CMS_DY_NLORew_em_vbf_201"+y, "shape", SystMap<>::init(1.00));
   // cb.cp().process({"DY"}).attr({"notag"},"njet").attr({"dilep"},"analysis").attr({"em"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
   //   "CMS_DY_NLORew_em_notag_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"ggh"},"njet").attr({"dilep"},"analysis").attr({"mm"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_NLORew_mm_ggh_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"ggh"},"njet").attr({"dilep"},"analysis").attr({"mm"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_mllRew_mm_ggh_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"ggh"},"njet").attr({"dilep"},"analysis").attr({"ee"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_NLORew_ee_ggh_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"ggh"},"njet").attr({"dilep"},"analysis").attr({"ee"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_mllRew_ee_ggh_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"vbf"},"njet").attr({"dilep"},"analysis").attr({"mm"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_NLORew_mm_vbf_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"vbf"},"njet").attr({"dilep"},"analysis").attr({"mm"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_mllRew_mm_vbf_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"vbf"},"njet").attr({"dilep"},"analysis").attr({"ee"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_NLORew_ee_vbf_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"vbf"},"njet").attr({"dilep"},"analysis").attr({"ee"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_mllRew_ee_vbf_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"notag"},"njet").attr({"dilep"},"analysis").attr({"mm"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_NLORew_mm_notag_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"notag"},"njet").attr({"dilep"},"analysis").attr({"mm"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_mllRew_mm_notag_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"notag"},"njet").attr({"dilep"},"analysis").attr({"ee"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_NLORew_ee_notag_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"notag"},"njet").attr({"dilep"},"analysis").attr({"ee"},"decay").attr({"2k1"+y},"year").AddSyst(cb,
      "CMS_DY_mllRew_ee_notag_201"+y, "shape", SystMap<>::init(1.00));
  }


  // VgS normalization
  // -----------------------
  cb.cp().process({"VV"}).attr({"dilep"},"analysis").AddSyst(cb, "CMS_hww_VgStarScale", "shape", SystMap<>::init(1.00));
  cb.cp().process({"VV"}).attr({"dilep"},"analysis").AddSyst(cb, "CMS_hww_VZScale", "shape", SystMap<>::init(1.00));


  // Electrons
  // -----------------------
  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_eff_e_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_e_201"+y, "shape", SystMap<>::init(1.00));
  }


  // Muons
  // -----------------------
  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_eff_m_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_m_201"+y, "shape", SystMap<>::init(1.00));
  }


  // Jets - Split up
  // -----------------------
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_scale_JESAbsolute", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_scale_JESBBEC1", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_scale_JESEC2", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_scale_JESFlavorQCD", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_scale_JESHF", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_scale_JESRelativeBal", "shape", SystMap<>::init(1.00));

  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_JESAbsolute_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_JESBBEC1_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_JESEC2_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_JESHF_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_JESRelativeSample_201"+y, "shape", SystMap<>::init(1.00));
  }


  // JER
  // -----------------------
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k17"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_res_j_2017", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k18"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_res_j_2018", "shape", SystMap<>::init(1.00));


  // MET
  // -----------------------
  /*for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_201"+y, "shape", SystMap<>::init(1.00));
  }*/
  /*for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"ee"},"decay").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_ee_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"em"},"decay").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_em_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"mm"},"decay").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_mm_201"+y, "shape", SystMap<>::init(1.00));
  }*/

  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"ggh"},"njet").attr({"ee"},"decay").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_ee_ggh_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"ggh"},"njet").attr({"em"},"decay").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_em_ggh_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"ggh"},"njet").attr({"mm"},"decay").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_mm_ggh_201"+y, "shape", SystMap<>::init(1.00));

    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"vbf"},"njet").attr({"ee"},"decay").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_ee_vbf_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"vbf"},"njet").attr({"em"},"decay").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_em_vbf_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"vbf"},"njet").attr({"mm"},"decay").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_mm_vbf_201"+y, "shape", SystMap<>::init(1.00));

    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"notag"},"njet").attr({"ee"},"decay").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_ee_notag_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"notag"},"njet").attr({"em"},"decay").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_em_notag_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"notag"},"njet").attr({"mm"},"decay").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_mm_notag_201"+y, "shape", SystMap<>::init(1.00));
  }

  // MET Recoil for SF DY
  // -----------------------
  for(auto y : runyears){
    //cb.cp().process({"DY"}).attr({"ee", "mm"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
    //  "CMS_scale_METResolution_201"+y, "shape", SystMap<>::init(1.00));
    //cb.cp().process({"DY"}).attr({"ee", "mm"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
    //  "CMS_scale_METResponse_201"+y, "shape", SystMap<>::init(1.00));

    //cb.cp().process({"DY"}).attr({"mm"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
    //  "CMS_scale_METResolution_mm_201"+y, "shape", SystMap<>::init(1.00));
    //cb.cp().process({"DY"}).attr({"mm"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
    //  "CMS_scale_METResponse_mm_201"+y, "shape", SystMap<>::init(1.00));
    //cb.cp().process({"DY"}).attr({"ee"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
    //  "CMS_scale_METResolution_ee_201"+y, "shape", SystMap<>::init(1.00));
    //cb.cp().process({"DY"}).attr({"ee"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
    //  "CMS_scale_METResponse_ee_201"+y, "shape", SystMap<>::init(1.00));

    cb.cp().process({"DY"}).attr({"ggh"},"njet").attr({"mm"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_METResolution_mm_ggh_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"vbf"},"njet").attr({"mm"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_METResolution_mm_vbf_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"notag"},"njet").attr({"mm"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_METResolution_mm_notag_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"ggh"},"njet").attr({"mm"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_METResponse_mm_ggh_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"vbf"},"njet").attr({"mm"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_METResponse_mm_vbf_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"notag"},"njet").attr({"mm"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_METResponse_mm_notag_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"ggh"},"njet").attr({"ee"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_METResolution_ee_ggh_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"vbf"},"njet").attr({"ee"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_METResolution_ee_vbf_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"notag"},"njet").attr({"ee"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_METResolution_ee_notag_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"ggh"},"njet").attr({"ee"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_METResponse_ee_ggh_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"vbf"},"njet").attr({"ee"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_METResponse_ee_vbf_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"DY"}).attr({"notag"},"njet").attr({"ee"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_scale_METResponse_ee_notag_201"+y, "shape", SystMap<>::init(1.00));
  }


  // Fakes
  // -----------------------

  //cb.cp().process({"Fake_em"}).attr({"dilep"},"analysis").AddSyst(cb,
  //  "CMS_fake_syst_em", "lnN", SystMap<>::init(1.30));
  //cb.cp().process({"Fake_me"}).attr({"dilep"},"analysis").AddSyst(cb,
  //  "CMS_fake_syst_me", "lnN", SystMap<>::init(1.30));
  cb.cp().process({"Fake_of"}).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_fake_syst_of", "lnN", SystMap<>::init(1.30));
  cb.cp().process({"Fake_ee"}).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_fake_syst_ee", "lnN", SystMap<>::init(1.30));
  cb.cp().process({"Fake_mm"}).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_fake_syst_mm", "lnN", SystMap<>::init(1.30));

  for(auto y : runyears){
    cb.cp().process({"Fake_of", "Fake_ee"}).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_fake_e_201"+y, "shape", SystMap<>::init(1.00));//"Fake_em", "Fake_me", 
    cb.cp().process({"Fake_of", "Fake_ee"}).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_fake_stat_e_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"Fake_of", "Fake_mm"}).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_fake_m_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"Fake_of", "Fake_mm"}).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_fake_stat_m_201"+y, "shape", SystMap<>::init(1.00));
  }


  // B-tagging
  // -----------------------
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_btag_jes", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_btag_lf", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_btag_hf", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_btag_cferr1", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_btag_cferr2", "shape", SystMap<>::init(1.00));

  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_btag_hfstats1_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_btag_hfstats2_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_btag_lfstats1_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_btag_lfstats2_201"+y, "shape", SystMap<>::init(1.00));
  }


  // Trigger
  // -----------------------
  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_eff_hwwtrigger_201"+y, "shape", SystMap<>::init(1.00));
  }


  // Prefiring
  // -----------------------
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k17"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_eff_prefiring_2017", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k16"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "CMS_eff_prefiring_2016", "shape", SystMap<>::init(1.00));


  // Embedding
  // -----------------------
  for(auto y : runyears){
    cb.cp().process({"DY"}).attr({"em"},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_embed_veto_201"+y, "shape", SystMap<>::init(1.00));
  }


  // PS and UE and PU
  // -----------------------

  cb.cp().process(JoinStr({signal, SM_procs, {"VV", "WWewk", "ggWW", "qqWWqq", "WW2J"}})).attr({"dilep"},"analysis").AddSyst(cb,
    "PS_ISR", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs, {"VV", "WWewk", "ggWW", "qqWWqq", "WW2J"}})).attr({"dilep"},"analysis").AddSyst(cb,
    "PS_FSR", "shape", SystMap<>::init(1.00));
  cb.cp().process({"DY"}).attr({"dilep"},"analysis").AddSyst(cb,
    "PS_ISR_DY", "shape", SystMap<>::init(1.00));
  cb.cp().process({"DY"}).attr({"dilep"},"analysis").AddSyst(cb,
    "PS_FSR_DY", "shape", SystMap<>::init(1.00));
  cb.cp().process({"top"}).attr({"dilep"},"analysis").AddSyst(cb,
    "PS_ISR_top", "shape", SystMap<>::init(1.00));
  cb.cp().process({"top"}).attr({"dilep"},"analysis").AddSyst(cb,
    "PS_FSR_top", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WW"}).attr({"dilep"},"analysis").AddSyst(cb,
    "PS_ISR_WW", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WW"}).attr({"dilep"},"analysis").AddSyst(cb,
    "PS_FSR_WW", "shape", SystMap<>::init(1.00));

  // An overall 1.5% UE uncertainty will cover all the UEup/UEdo variations, and we don't observe any dependency of UE variations on njet
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k18", "2k17"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "UE_CP5", "lnN", SystMap<>::init(1.015));
  cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k16"},"year").attr({"dilep"},"analysis").AddSyst(cb,
    "UE_CUET", "lnN", SystMap<>::init(1.015));

  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, {"DY", "top", "WW", "ggH_hww", "qqH_hww"}})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_PU_201"+y, "shape", SystMap<>::init(1.00));
  }

  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs, backgrounds})).attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_PUID_201"+y, "shape", SystMap<>::init(1.00));
  }


  // CR normalization
  // -----------------------
  cb.cp().process({"DY"}).bin_id({13, 14, 15}).attr({"dilep"},"analysis").AddSyst(cb, "CMS_hww_CRSR_accept_dy", "lnN", SystMap<>::init(1.02));
  cb.cp().process({"top"}).bin_id({10, 11, 12}).attr({"dilep"},"analysis").AddSyst(cb, "CMS_hwwll_CRSR_accept_top", "lnN", SystMap<>::init(1.01));


  // RateParams
  // -----------------------

  // Correlate: DY ee+mm (separate embedded DY), Top/WW ee+em+mm, 2017+18 (separate different Pythia tune in 2016)
  // Decorrelate between ggF, VBF, background categories
  /*std::string correl1, correl3DY;
  for(auto y : runyears){
  for(auto y2 : std::vector<std::string> {"ggh", "vbf", "notag"}){
  for(auto y3 : std::vector<std::string> {"em", "ee", "mm"}){
    correl1 = (y=="6") ? "6" : "718";
    correl3DY = (y3=="em") ? "OF" : "SF";
    cb.cp().process({"DY","DYemb"}).attr({y3},"decay").attr({y2},"njet").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_rateparam_DY_"+correl3DY+"_"+y2+"_201"+correl1, "rateParam", SystMap<>::init(1.00));
    cb.cp().process({"WW","WW2J"}).attr({y3},"decay").attr({y2},"njet").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_rateparam_WW_"+y2+"_201"+correl1, "rateParam", SystMap<>::init(1.00));
//    cb.cp().process({"WW2J"}).attr({y3},"decay").attr({y2},"njet").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
//      "CMS_rateparam_WW2J_"+y2+"_201"+correl1, "rateParam", SystMap<>::init(1.00));
    cb.cp().process({"top"}).attr({y3},"decay").attr({y2},"njet").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_rateparam_TOP_"+y2+"_201"+correl1, "rateParam", SystMap<>::init(1.00));
  }
  }
  }*/

  //Fully uncorrelated rateParams:
  for(auto y : runyears){
  for(auto y2 : std::vector<std::string> {"ggh", "vbf", "notag"}){
  for(auto y3 : std::vector<std::string> {"em", "ee", "mm"}){
    cb.cp().process({"DY"}).attr({y3},"decay").attr({y2},"njet").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_rateparam_DY_"+y3+"_"+y2+"_201"+y, "rateParam", SystMap<>::init(1.00));
    cb.cp().process({"WW","WW2J"}).attr({y3},"decay").attr({y2},"njet").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_rateparam_WW_"+y2+"_201"+y, "rateParam", SystMap<>::init(1.00));//Correlate final states, otherwise too low statistics to be properly constrained
//    cb.cp().process({"WW2J"}).attr({y3},"decay").attr({y2},"njet").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
//      "CMS_rateparam_WW2J_"+y3+"_"+y2+"_"+y, "rateParam", SystMap<>::init(1.00));
    cb.cp().process({"top"}).attr({y3},"decay").attr({y2},"njet").attr({"2k1"+y},"year").attr({"dilep"},"analysis").AddSyst(cb,
      "CMS_rateparam_TOP_"+y3+"_"+y2+"_201"+y, "rateParam", SystMap<>::init(1.00));
  }
  }
  }


  // Need to hard-code number of bins from discriminant!
  int maxbin;
  if(DNNdiscrim){
    if(!highmass){
      maxbin=29;
    }else{
      maxbin=21;
    }
  }else{
    if(!highmass){
      maxbin=28;
    }else{
      maxbin=16;
    }
  }
  for(auto y : runyears){
  for(auto y2 : std::vector<std::string> {"ggh", "vbf", "notag"}){
  for(auto y3 : std::vector<std::string> {"em", "ee", "mm"}){
  for(int ibin=1; ibin<=maxbin; ibin++){

     cb.cp().process(JoinStr({ggH, ggHSBI})).attr({y2},"njet").attr({y3},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").attr({"False"},"CR").AddSyst(cb,
       "CMS_hww_"+y3+"_"+y2+"_201"+y+"_correlbin_GGH"+model+"_"+std::to_string(ibin)+"_stat", "shape", SystMap<>::init(1.00));

     //cb.cp().process(JoinStr({{"ggWW"}, ggHSBI})).attr({y2},"njet").attr({y3},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").attr({"False"},"CR").AddSyst(cb,
     //  "CMS_hww_"+y3+"_"+y2+"_201"+y+"_correlbin_ggWW_"+std::to_string(ibin)+"_stat", "shape", SystMap<>::init(1.00));

     //cb.cp().process(JoinStr({{"ggH_hww"}, ggHSBI})).attr({y2},"njet").attr({y3},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").attr({"False"},"CR").AddSyst(cb,
     //  "CMS_hww_"+y3+"_"+y2+"_201"+y+"_correlbin_ggH_hww_"+std::to_string(ibin)+"_stat", "shape", SystMap<>::init(1.00));

     cb.cp().process(JoinStr({qqH, qqHSBI})).attr({y2},"njet").attr({y3},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").attr({"False"},"CR").AddSyst(cb,
       "CMS_hww_"+y3+"_"+y2+"_201"+y+"_correlbin_QQH"+model+"_"+std::to_string(ibin)+"_stat", "shape", SystMap<>::init(1.00));

     //cb.cp().process(JoinStr({{"qqWWqq"}, qqHSBI})).attr({y2},"njet").attr({y3},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").attr({"False"},"CR").AddSyst(cb,
     //  "CMS_hww_"+y3+"_"+y2+"_201"+y+"_correlbin_qqWWqq_"+std::to_string(ibin)+"_stat", "shape", SystMap<>::init(1.00));

     //cb.cp().process(JoinStr({{"qqH_hww"}, qqHSBI})).attr({y2},"njet").attr({y3},"decay").attr({"2k1"+y},"year").attr({"dilep"},"analysis").attr({"False"},"CR").AddSyst(cb,
     //  "CMS_hww_"+y3+"_"+y2+"_201"+y+"_correlbin_qqH_hww_"+std::to_string(ibin)+"_stat", "shape", SystMap<>::init(1.00));
  }
  }
  }
  }


  //////////////////////////////////////////////////
  ////////// SEMILEP ///////////////////////////////
  //////////////////////////////////////////////////


  // Cross-sections and lumi
  // -----------------------
  // Semi-leptonic: No Top, Wjets, because using rateparam
  std::vector<std::string> LumiBkg_semi = {"DY", "VVV", "VZ", "Vg", "VgS_H", "VgS_L", "WW", "ggWW", "qqWWqq","WWewk","VBF_V"};

  cb.cp().process(JoinStr({signal, SM_procs_semi, LumiBkg_semi})).attr({"2k18"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_2018", "lnN", SystMap<>::init(1.010));
  cb.cp().process(JoinStr({signal, SM_procs_semi, LumiBkg_semi})).attr({"2k17"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_2017", "lnN", SystMap<>::init(1.020));
  cb.cp().process(JoinStr({signal, SM_procs_semi, LumiBkg_semi})).attr({"2k16"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_2016", "lnN", SystMap<>::init(1.015));

  // Correlated lumi
  cb.cp().process(JoinStr({signal, SM_procs_semi, LumiBkg_semi})).attr({"2k16"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_correlated", "lnN", SystMap<>::init(1.006));
  cb.cp().process(JoinStr({signal, SM_procs_semi, LumiBkg_semi})).attr({"2k17"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_correlated", "lnN", SystMap<>::init(1.009));
  cb.cp().process(JoinStr({signal, SM_procs_semi, LumiBkg_semi})).attr({"2k18"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_correlated", "lnN", SystMap<>::init(1.020));
  cb.cp().process(JoinStr({signal, SM_procs_semi, LumiBkg_semi})).attr({"2k17"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_1718", "lnN", SystMap<>::init(1.006));
  cb.cp().process(JoinStr({signal, SM_procs_semi, LumiBkg_semi})).attr({"2k18"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "lumi_13TeV_1718", "lnN", SystMap<>::init(1.002));


  // Tagging
  // -----------------------

  for(auto y : runyears){
    // Note: There's also shapes for this in 2017/16 for resolved, but they're the same as nominal -> Keep for boosted only
    //
    cb.cp().process({"Wjets"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").attr({"boosted"},"whad").AddSyst(cb,
      "Wjets_QCD_NLO_sf_stat_boost_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"Wjets"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").attr({"resolved"},"whad").AddSyst(cb,
      "Wjets_QCD_NLO_sf_stat_resol_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"Wjets"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").attr({"resolved"},"whad").AddSyst(cb,
      "CMS_hww_Wjets_Correction_201"+y, "shape", SystMap<>::init(1.00));
//    cb.cp().process({"top"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").attr({"resolved"},"whad").AddSyst(cb,
//      "CMS_hww_top_Correction_201"+y, "shape", SystMap<>::init(1.00));
//for(auto y2 : std::vector<std::string> {"resolved"}){
//  for(auto y3 : std::vector<std::string> {"isGGH", "isVBF", "isBKG"}){
//  std::string y2fullname = y2=="boosted"?"incl_BoostedSR_"+y3+"_":"incl_ResolvedSR_"+y3+"_";
////  if (highmass && y2=="boosted") y2fullname=y2fullname+"H";
//    cb.cp().process({"top"}).attr({y2},"whad").attr({y3},"categ").attr({"2k1"+y},"year").attr({"semilep"},"analysis").attr({"False"},"CR").AddSyst(cb,
//      "CMS_hww_top_Correction_"+y2fullname+"_201"+y, "shape", SystMap<>::init(1.00));
//}
//}



//    cb.cp().process({"Wjets"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").attr({"resolved"},"whad").AddSyst(cb,
 //     "CMS_hww_Wjets_Correction_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal,{"WW", "ggWW", "qqWWqq", "top", "WH_hww", "ZH_hww", "ggH_hww", "qqH_hww", "WWewk","VBF_V"}})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").attr({"boosted"},"whad").AddSyst(cb,
      "CMS_wtag_eff_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_hww_TagAndProbe_corr_201"+y, "shape", SystMap<>::init(1.00));
    for(auto i : std::vector<std::string> {"1", "2", "3"}){//, "4", "5"}){
    for(auto j : std::vector<std::string> {"1", "2", "3"}){//, "4", "5"}){
      cb.cp().process(JoinStr({signal, {"WW", "ggWW", "qqWWqq", "top", "WH_hww", "ZH_hww", "ggH_hww", "qqH_hww","WWewk","VBF_V"}})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").attr({"boosted"},"whad").AddSyst(cb,
        "CMS_hww_Top_massVsTagger_reweighting_bin_"+i+"_"+j+"201"+y, "shape", SystMap<>::init(1.00));
    }
    }
  }

  // Trigger SEMI stuff 
  
   // cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"semilep"},"analysis").AddSyst(cb,
    //  "TagAndProbe_corr", "shape", SystMap<>::init(1.00));

  // Top stuff
  // -----------------------

  cb.cp().process({"top"}).attr({"semilep"},"analysis").AddSyst(cb, "singleTopToTTbar", "shape", SystMap<>::init(1.00));
  cb.cp().process({"top"}).attr({"semilep"},"analysis").AddSyst(cb, "CMS_topPtRew", "shape", SystMap<>::init(1.00));


  // Wjets QCD scale
  // -----------------------
  cb.cp().process({"Wjets"}).attr({"semilep"},"analysis").attr({"boosted"},"whad").AddSyst(cb, "QCDscale_Wjets_boost", "shape", SystMap<>::init(1.00)); // TODO: Possibly renamed to QCDscale_V?
  cb.cp().process({"Wjets"}).attr({"semilep"},"analysis").attr({"resolved"},"whad").AddSyst(cb, "QCDscale_Wjets_resol", "shape", SystMap<>::init(1.00)); // TODO: Possibly renamed to QCDscale_V?

 // for(auto y : runyears){
 //   cb.cp().process({"Wjets"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
 //     "Wjets_QCD_NLO_sf_stat_201"+y, "shape", SystMap<>::init(1.00));
 // }


  // VgS normalization
  // -----------------------
  cb.cp().process({"VgS_L"}).attr({"semilep"},"analysis").AddSyst(cb, "CMS_hww_VgStarScale", "lnN", SystMap<>::init(1.25));
  cb.cp().process({"VgS_H"}).attr({"semilep"},"analysis").AddSyst(cb, "CMS_hww_VZScale", "lnN", SystMap<>::init(1.16));


  // Electrons
  // -----------------------
  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_eff_e_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, {"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "WW", "qqWWqq", "VZ", "Vg", "VgS_H", "VgS_L", "ggWW", "Wjets", "top"}})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_scale_e_201"+y, "shape", SystMap<>::init(1.00)); // TODO currently missing for interfering backgrouds (ggWW, qqWWqq, ggH_hww, qqH_hww) and SBI
  }


  // Muons
  // -----------------------
  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_eff_m_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal,{"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "WW", "qqWWqq", "VZ", "Vg", "VgS_H", "VgS_L", "ggWW", "Wjets", "top","WWewk","VBF_V"}})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
    //cb.cp().process(JoinStr({signal,{"ggH_HWW", "qqH_HWW"}, {"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "VZ", "Vg", "VgS_H", "VgS_L", "Wjets", "WW", "ggWW", "qqWWqq","top"}})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_scale_m_201"+y, "shape", SystMap<>::init(1.00));  // TODO currently missing for interfering backgrouds (ggWW, qqWWqq, ggH_hww, qqH_hww) and SBI
  }


  // Jets - Split up
  // -----------------------
  cb.cp().process(JoinStr({{"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "Vg", "VgS_H", "VgS_L", "Wjets", "top","VBF_V"}})).attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_scale_JESAbsolute", "shape", SystMap<>::init(1.00)); // TODO All missing for VZ, WW, ggWW, qqWWqq, ggH_hww, qqH_hww and SBI
  cb.cp().process(JoinStr({{"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "Vg", "VgS_H", "VgS_L", "Wjets", "top","VBF_V"}})).attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_scale_JESBBEC1", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({{"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "Vg", "VgS_H", "VgS_L", "Wjets", "top","VBF_V"}})).attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_scale_JESEC2", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({{"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "Vg", "VgS_H", "VgS_L", "Wjets", "top","VBF_V"}})).attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_scale_JESFlavorQCD", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({{"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "Vg", "VgS_H", "VgS_L", "Wjets", "top","VBF_V"}})).attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_scale_JESHF", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({{"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "Vg", "VgS_H", "VgS_L", "Wjets", "top","VBF_V"}})).attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_scale_JESRelativeBal", "shape", SystMap<>::init(1.00));

  for(auto y : runyears){
    cb.cp().process(JoinStr({{"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "Vg", "VgS_H", "VgS_L", "Wjets", "top","VBF_V"}})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_scale_JESAbsolute_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({{"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "Vg", "VgS_H", "VgS_L", "Wjets", "top","VBF_V"}})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_scale_JESBBEC1_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({{"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "Vg", "VgS_H", "VgS_L", "Wjets", "top","VBF_V"}})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_scale_JESEC2_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({{"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "Vg", "VgS_H", "VgS_L", "Wjets", "top","VBF_V"}})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_scale_JESHF_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({{"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "Vg", "VgS_H", "VgS_L", "Wjets", "top","VBF_V"}})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_scale_JESRelativeSample_201"+y, "shape", SystMap<>::init(1.00));
  } // TODO currently missing for signal and interfering backgrouds


  // FatJets
  // -----------------------

  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_scale_fatj_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_res_fatjer_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fatjms_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_res_fatjmr_201"+y, "shape", SystMap<>::init(1.00));
  } // TODO currently missing for signal and interfering backgrouds


  // JER
  // -----------------------
  cb.cp().process(JoinStr({signal, {"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"DY", "VVV", "Vg", "VgS_H", "WW", "qqWWqq", "VZ", "ggWW", "VgS_L", "Wjets","top"}})).attr({"2k17"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_res_j_2017", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi_PS})).attr({"2k18"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_res_j_2018", "shape", SystMap<>::init(1.00));


  // MET
  // -----------------------
  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, {"WH_htt", "WH_hww", "ZH_htt", "ZH_hww", "ggH_htt", "qqH_htt"}, {"WW", "ggWW","qqWWqq","DY", "VVV",  "Vg", "VgS_H", "VgS_L", "Wjets", "top","WWewk","VBF_V"}})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_scale_met_201"+y, "shape", SystMap<>::init(1.00));  // TODO currently missing for VZ, WW, ggWW, qqWWqq, ggH_hww, qqH_hww and SBI
  }


  // Fakes
  // -----------------------

  for(auto y : runyears){
    cb.cp().process({"FAKE_el_barrel_pos"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_syst_El_BarPos_201"+y, "lnN", SystMap<>::init(1.30));
    cb.cp().process({"FAKE_mu_barrel_pos"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_syst_Mu_BarPos_201"+y, "lnN", SystMap<>::init(1.30));

    cb.cp().process({"FAKE_el_endcap_pos"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_syst_El_EndPos_201"+y, "lnN", SystMap<>::init(1.30));
    cb.cp().process({"FAKE_mu_endcap_pos"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_syst_Mu_EndPos_201"+y, "lnN", SystMap<>::init(1.30));

    cb.cp().process({"FAKE_el_endcap_neg"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_syst_El_EndNeg_201"+y, "lnN", SystMap<>::init(1.30));
    cb.cp().process({"FAKE_mu_endcap_neg"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_syst_Mu_Endneg_201"+y, "lnN", SystMap<>::init(1.30));

    cb.cp().process({"FAKE_el_barrel_neg"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_syst_El_BarNeg_201"+y, "lnN", SystMap<>::init(1.30));
    cb.cp().process({"FAKE_mu_barrel_neg"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_syst_Mu_BarNeg_201"+y, "lnN", SystMap<>::init(1.30));

    cb.cp().process({"FAKE_el_barrel_neg"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_e_barrel_neg_stat_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"FAKE_el_barrel_neg"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_e_barrel_neg_recoil_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"FAKE_mu_barrel_neg"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_m_barrel_neg_stat_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"FAKE_mu_barrel_neg"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_m_barrel_neg_recoil_201"+y, "shape", SystMap<>::init(1.00));

    cb.cp().process({"FAKE_el_barrel_pos"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_e_barrel_pos_stat_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"FAKE_el_barrel_pos"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_e_barrel_pos_recoil_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"FAKE_mu_barrel_pos"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_m_barrel_pos_stat_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"FAKE_mu_barrel_pos"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_m_barrel_pos_recoil_201"+y, "shape", SystMap<>::init(1.00));

    cb.cp().process({"FAKE_el_endcap_neg"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_e_endcap_neg_stat_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"FAKE_el_endcap_neg"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_e_endcap_neg_recoil_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"FAKE_mu_endcap_neg"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_m_endcap_neg_stat_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"FAKE_mu_endcap_neg"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_m_endcap_neg_recoil_201"+y, "shape", SystMap<>::init(1.00));

    cb.cp().process({"FAKE_el_endcap_pos"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_e_endcap_pos_stat_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"FAKE_el_endcap_pos"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_e_endcap_pos_recoil_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"FAKE_mu_endcap_pos"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_m_endcap_pos_stat_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process({"FAKE_mu_endcap_pos"}).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_fake_m_endcap_pos_recoil_201"+y, "shape", SystMap<>::init(1.00));

  }


  // B-tagging
  // -----------------------
  cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"semilep"},"analysis").attr({"2k16"},"year").AddSyst(cb,
    "CMS_btag_jes", "shape", SystMap<>::init(1.00)); // TODO Uncorrelated?
  cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_btag_lf", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_btag_hf", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_btag_cferr1", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_btag_cferr2", "shape", SystMap<>::init(1.00));

  cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k17"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_btag_jes_2017", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k18"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_btag_jes_2018", "shape", SystMap<>::init(1.00));
  for(auto y : runyears){
    //cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
    //  "CMS_btag_jes_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_btag_hfstats1_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_btag_hfstats2_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_btag_lfstats1_201"+y, "shape", SystMap<>::init(1.00));
    cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_btag_lfstats2_201"+y, "shape", SystMap<>::init(1.00));
  }


  // Trigger
  // -----------------------
  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_eff_hwwtrigger_201"+y, "shape", SystMap<>::init(1.00));
  }


  // Prefiring
  // -----------------------
  cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k17"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_eff_prefiring_2017", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k16"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "CMS_eff_prefiring_2016", "shape", SystMap<>::init(1.00));


  // Tag and Probe correction
  // -----------------------
 // cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"semilep"},"analysis").AddSyst(cb,
 //   "CMS_hww_TagAndProbe_corr", "shape", SystMap<>::init(1.00));


  // PS and UE and PU
  // -----------------------
  // TODO: Inconsistency between years (this works for 2018, but not 2017):
  cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_ISR", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WWewk"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_WWewk", "shape", SystMap<>::init(1.00));
  cb.cp().process({"VBF_V"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_VBF_V", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WW"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_WW", "shape", SystMap<>::init(1.00));
  cb.cp().process({"top"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_top", "shape", SystMap<>::init(1.00));
  cb.cp().process({"Wjets"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_Wjets", "shape", SystMap<>::init(1.00));
  cb.cp().process({"qqWWqq"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_qqWWqq", "shape", SystMap<>::init(1.00));
  cb.cp().process({"ggH_hww"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_ggH_hww", "shape", SystMap<>::init(1.00));
  cb.cp().process({"qqH_hww"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_qqH_hww", "shape", SystMap<>::init(1.00));
  cb.cp().process({"ZH_hww"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_ZH_hww", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WH_hww"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_WH_hww", "shape", SystMap<>::init(1.00));
  cb.cp().process({"ggWW"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_ggWW", "shape", SystMap<>::init(1.00));
  cb.cp().process({"DY"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_DY", "shape", SystMap<>::init(1.00));
  cb.cp().process({"Vg"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_Vg", "shape", SystMap<>::init(1.00));
  cb.cp().process({"VgS_L"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_VgS_L", "shape", SystMap<>::init(1.00));
  cb.cp().process({"VgS_H"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_VgS_H", "shape", SystMap<>::init(1.00));
  cb.cp().process({"VZ"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_VZ", "shape", SystMap<>::init(1.00));
  cb.cp().process({"VV"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_VV", "shape", SystMap<>::init(1.00));
  cb.cp().process({"ggH_htt"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_ggH_htt", "shape", SystMap<>::init(1.00));
  cb.cp().process({"qqH_htt"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_qqH_htt", "shape", SystMap<>::init(1.00));
  cb.cp().process({"WH_htt"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_WH_htt", "shape", SystMap<>::init(1.00));
  cb.cp().process({"ZH_htt"}).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_ZH_htt", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({ggH, ggHSBI})).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_GGH", "shape", SystMap<>::init(1.00));
  cb.cp().process(JoinStr({qqH, qqHSBI})).attr({"semilep"},"analysis").AddSyst(cb,
    "PS_FSR_QQH", "shape", SystMap<>::init(1.00));
 // cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"semilep"},"analysis").AddSyst(cb,
 //   "PS_FSR", "shape", SystMap<>::init(1.00));

  // An overall 1.5% UE uncertainty will cover all the UEup/UEdo variations, and we don't observe any dependency of UE variations on njet
  cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k18", "2k17"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "UE_CP5", "lnN", SystMap<>::init(1.015));
  cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k16"},"year").attr({"semilep"},"analysis").AddSyst(cb,
    "UE_CUET", "lnN", SystMap<>::init(1.015));

  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, {"DY", "top", "WW", "Wjets", "ggH_hww", "qqH_hww"}})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_PU_201"+y, "shape", SystMap<>::init(1.00));
  }

  for(auto y : runyears){
    cb.cp().process(JoinStr({signal, SM_procs_semi, backgrounds_semi})).attr({"2k1"+y},"year").attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_PUID_201"+y, "shape", SystMap<>::init(1.00));
  }


  // CR normalization
  // -----------------------
  cb.cp().process({"top"}).bin_id({10}).attr({"semilep"},"analysis").AddSyst(cb, "CMS_hwwlqq_CRSR_accept_top", "lnN", SystMap<>::init(1.01));
  cb.cp().process({"Wjets"}).bin_id({11}).attr({"semilep"},"analysis").attr({"resolved"},"whad").AddSyst(cb, "CMS_hww_CRSR_accept_SB", "lnN", SystMap<>::init(1.009));
  cb.cp().process({"Wjets"}).bin_id({11}).attr({"semilep"},"analysis").attr({"boosted"},"whad").AddSyst(cb, "CMS_hww_CRSR_accept_SB", "lnN", SystMap<>::init(1.022));


  // RateParams
  // -----------------------

  for(auto y : runyears){
  for(auto y2 : std::vector<std::string> {"_resol", "_boost"}){
    cb.cp().process({"top"}).channel({"lqq"+y+y2,"lqq"+y+y2+"_top","lqq"+y+y2+"_sb"}).attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_hww_rateparam_TOP_lqq"+y2+"_"+y, "rateParam", SystMap<>::init(1.00));
    cb.cp().process({"Wjets"}).channel({"lqq"+y+y2,"lqq"+y+y2+"_top","lqq"+y+y2+"_sb"}).attr({"semilep"},"analysis").AddSyst(cb,
      "CMS_hww_rateparam_SB_lqq"+y2+"_"+y, "rateParam", SystMap<>::init(1.00));
  }
  }

  // BBB
  // ----------------------

  for(auto y : runyears){
  for(auto y2 : std::vector<std::string> {"resolved", "boosted"}){
  for(auto y3 : std::vector<std::string> {"isGGH", "isVBF", "isBKG"}){
  std::string y2fullname = y2=="boosted"?"incl_BoostedSR_"+y3+"_":"incl_ResolvedSR_"+y3+"_";
  if (y2fullname=="incl_ResolvedSR_isGGH_") maxbin = 21;
  if (y2fullname=="incl_ResolvedSR_isBKG_") maxbin = 22;
  if (y2fullname=="incl_ResolvedSR_isVBF_") maxbin = 24;
  if (y2fullname=="incl_BoostedSR_isGGH_") maxbin = 26;
  if (y2fullname=="incl_BoostedSR_isGGH_") maxbin = 34;
  if (y2fullname=="incl_BoostedSR_isGGH_") maxbin = 21;
  if (highmass && y2=="boosted") y2fullname=y2fullname+"H";
  for(int ibin=1; ibin<=maxbin; ibin++){

     cb.cp().process(JoinStr({ggH, ggHSBI})).attr({y2},"whad").attr({y3},"categ").attr({"2k1"+y},"year").attr({"semilep"},"analysis").attr({"False"},"CR").AddSyst(cb,
       "CMS_hww_"+y2fullname+"_201"+y+"_correlbin_GGH"+model+"_"+std::to_string(ibin)+"_stat", "shape", SystMap<>::init(1.00));

     cb.cp().process(JoinStr({qqH, qqHSBI})).attr({y2},"whad").attr({y3},"categ").attr({"2k1"+y},"year").attr({"semilep"},"analysis").attr({"False"},"CR").AddSyst(cb,
       "CMS_hww_"+y2fullname+"_201"+y+"_correlbin_QQH"+model+"_"+std::to_string(ibin)+"_stat", "shape", SystMap<>::init(1.00));

  }
  }
  }
  } // TODO: Not added yet

}
}
