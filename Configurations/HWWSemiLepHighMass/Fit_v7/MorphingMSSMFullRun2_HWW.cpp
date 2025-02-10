#include <string>
#include <map>
#include <set>
#include <iostream>
#include <utility>
#include <vector>
#include <cstdlib>
#include "boost/algorithm/string/predicate.hpp"
#include "boost/program_options.hpp"
#include "boost/lexical_cast.hpp"
#include "boost/regex.hpp"
#include "CombineHarvester/CombineTools/interface/CombineHarvester.h"
#include "CombineHarvester/CombineTools/interface/Observation.h"
#include "CombineHarvester/CombineTools/interface/Process.h"
#include "CombineHarvester/CombineTools/interface/Utilities.h"
#include "CombineHarvester/CombineTools/interface/CardWriter.h"
#include "CombineHarvester/CombineTools/interface/Systematics.h"
#include "CombineHarvester/CombineTools/interface/BinByBin.h"
#include "CombineHarvester/CombineTools/interface/Algorithm.h"
#include "CombineHarvester/CombineTools/interface/AutoRebin.h"
#include "CombineHarvester/CombineTools/interface/ValidationTools.h"
#include "CombineHarvester/CombinePdfs/interface/MorphFunctions.h"
#include "CombineHarvester/CombinePdfs/interface/CMSHistFuncFactory.h"
#include "CombineHarvester/HWW/interface/HwwSystematics_MSSMRun2.h"
#include "RooWorkspace.h"
#include "RooRealVar.h"
#include "TH2.h"
#include "TF1.h"

using namespace std;
using boost::starts_with;
namespace po = boost::program_options;


bool BinIsControlRegion(ch::Object const* obj)
{
    return ( (obj->channel().find("dy") != std::string::npos) || (obj->channel().find("top") != std::string::npos) || (obj->channel().find("sb") != std::string::npos) );
}

bool BinIsNotControlRegion(ch::Object const* obj)
{
    return !BinIsControlRegion(obj);
}

bool BinIsSBIcontribution(ch::Object const* obj)
{
    return ( (obj->process().find("ggH_hww") != std::string::npos) || (obj->process().find("qqH_hww") != std::string::npos) || (obj->process().find("ggWW") != std::string::npos) || (obj->process().find("qqWWqq") != std::string::npos) );
}
bool BinIsNotSBIcontribution(ch::Object const* obj)
{
    return !BinIsSBIcontribution(obj);
}


int main(int argc, char** argv) {
  // First define the location of the "auxiliaries" directory where we can
  // source the input files containing the datacard shapes
  string SM125= "";
  string mass = "mH"; // Should be "MH" for model independent
  string output_folder = "FullRun2";
  string model = "_RelW002"; // Width model = "_RelW002"
  string shapedir = "2021_10_18_Final_RelW0.02"; //To confirm: when doing other widths, only need to change these two options
  bool auto_rebin = true; // Changed to only merge 0 content bins (which exists in notag category)
  bool manual_rebin = false;
  bool real_data = false; // Blind analysis
  bool real_data_CR = false; // Blind analysis
  bool do_morphing = true;
  string onlyMass="750"; // If do_morphing is false, signal is only this mass
  bool check_neg_bins = false;
  bool do_bbb = true;
  bool poisson_bbb = false;
  bool remove0yields = true;
  bool lnNforshapesinCR = true;
  bool lnNforscaleshapes = true;
  bool lnNforscaleshapesSBI = true;
  bool combcard_only = true;
  bool highindep = false; // High mass cuts
  bool do2018 = false; // -
  bool do2017 = false; // - Only works properly with one of these at a time (I think). For FullRun2 combine all outputs of these
  bool do2016 = false; // -
  bool do2018semi = false; // -
  bool do2017semi = false; // - Semi-leptonic final state (needs updates)
  bool do2016semi = false; // -
  bool DNNdiscrim = true; // Using DNN mass discriminator
  po::variables_map vm;
  po::options_description config("configuration");
  config.add_options()
    ("SM125,h", po::value<string>(&SM125)->default_value(SM125))
    ("mass,m", po::value<string>(&mass)->default_value(mass))
    ("output_folder", po::value<string>(&output_folder)->default_value(output_folder))
    ("model", po::value<string>(&model)->default_value(model))
    ("shapedir", po::value<string>(&shapedir)->default_value(shapedir))
    ("auto_rebin", po::value<bool>(&auto_rebin)->default_value(auto_rebin))
    ("manual_rebin", po::value<bool>(&manual_rebin)->default_value(manual_rebin))
    ("real_data", po::value<bool>(&real_data)->default_value(real_data))
    ("real_data_CR", po::value<bool>(&real_data_CR)->default_value(real_data_CR))
    ("do_morphing", po::value<bool>(&do_morphing)->default_value(do_morphing))
    ("onlyMass", po::value<string>(&onlyMass)->default_value(onlyMass))
    ("check_neg_bins", po::value<bool>(&check_neg_bins)->default_value(check_neg_bins))
    ("do_bbb", po::value<bool>(&do_bbb)->default_value(do_bbb))
    ("poisson_bbb", po::value<bool>(&poisson_bbb)->default_value(poisson_bbb))
    ("remove0yields", po::value<bool>(&remove0yields)->default_value(remove0yields))
    ("lnNforshapesinCR", po::value<bool>(&lnNforshapesinCR)->default_value(lnNforshapesinCR))
    ("lnNforscaleshapes", po::value<bool>(&lnNforscaleshapes)->default_value(lnNforscaleshapes))
    ("lnNforscaleshapesSBI", po::value<bool>(&lnNforscaleshapesSBI)->default_value(lnNforscaleshapesSBI))
    ("combcard_only", po::value<bool>(&combcard_only)->default_value(combcard_only))
    ("highindep", po::value<bool>(&highindep)->default_value(highindep))
    ("do2018", po::value<bool>(&do2018)->default_value(do2018))
    ("do2017", po::value<bool>(&do2017)->default_value(do2017))
    ("do2016", po::value<bool>(&do2016)->default_value(do2016))
    ("do2018semi", po::value<bool>(&do2018semi)->default_value(do2018semi))
    ("do2017semi", po::value<bool>(&do2017semi)->default_value(do2017semi))
    ("do2016semi", po::value<bool>(&do2016semi)->default_value(do2016semi))
    ("DNNdiscrim", po::value<bool>(&DNNdiscrim)->default_value(DNNdiscrim));
  po::store(po::command_line_parser(argc, argv).options(config).run(), vm);
  po::notify(vm);

  typedef vector<string> VString;
  typedef vector<pair<int, string>> Categories;
  std::map<string, string> input_dir;
  string thisyear;
  shapedir = "/afs/cern.ch/user/g/gbardell/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/Fit_v7/"+shapedir+"/";

  if (do2018){
    thisyear = "2018";
    input_dir["em8"]  =     shapedir+"plots_Full2018_em_new.root";
    input_dir["em8_top"]  = input_dir["em8"];
    input_dir["em8_dy"]  =  input_dir["em8"];
    input_dir["ee8"]  =     shapedir+"plots_Full2018_ee_new.root";
    input_dir["ee8_top"]  = input_dir["ee8"];
    input_dir["ee8_dy"]  =  input_dir["ee8"];
    input_dir["mm8"]  =     shapedir+"plots_Full2018_mm_new.root";
    input_dir["mm8_top"]  = input_dir["mm8"];
    input_dir["mm8_dy"]  =  input_dir["mm8"];
  }
  if (do2017){
    thisyear = "2017";
    input_dir["em7"]  =     shapedir+"plots_Full2017_em_new.root";
    input_dir["em7_top"]  = input_dir["em7"];
    input_dir["em7_dy"]  =  input_dir["em7"];
    input_dir["ee7"]  =     shapedir+"plots_Full2017_ee_new.root";
    input_dir["ee7_top"]  = input_dir["ee7"];
    input_dir["ee7_dy"]  =  input_dir["ee7"];
    input_dir["mm7"]  =     shapedir+"plots_Full2017_mm_new.root";
    input_dir["mm7_top"]  = input_dir["mm7"];
    input_dir["mm7_dy"]  =  input_dir["mm7"];
  }
  if (do2016){
    thisyear = "2016";
    input_dir["em6"]  =     shapedir+"plots_Full2016_em_new.root";
    input_dir["em6_top"]  = input_dir["em6"];
    input_dir["em6_dy"]  =  input_dir["em6"];
    input_dir["ee6"]  =     shapedir+"plots_Full2016_ee_new.root";
    input_dir["ee6_top"]  = input_dir["ee6"];
    input_dir["ee6_dy"]  =  input_dir["ee6"];
    input_dir["mm6"]  =     shapedir+"plots_Full2016_mm_new.root";
    input_dir["mm6_top"]  = input_dir["mm6"];
    input_dir["mm6_dy"]  =  input_dir["mm6"];
  }

  if (do2018semi){
    thisyear = "2018";
    input_dir["lqq8_resol"]  =     shapedir+"plots_hm_2018_Fit_test_FakeUnc.root";
    input_dir["lqq8_resol_top"]  = input_dir["lqq8_resol"];
    input_dir["lqq8_resol_sb"]  =  input_dir["lqq8_resol"];
    input_dir["lqq8_boost"]  =     input_dir["lqq8_resol"];
    input_dir["lqq8_boost_top"]  = input_dir["lqq8_resol"];
    input_dir["lqq8_boost_sb"]  =  input_dir["lqq8_resol"];
  }
  if (do2017semi){
    thisyear = "2017";
    input_dir["lqq7_resol"]  =     shapedir+"plots_hm_2017_Fit_SRCR_wDeepTag_corrMSF_FakeUnc.root";
    input_dir["lqq7_resol_top"]  = input_dir["lqq7_resol"];
    input_dir["lqq7_resol_sb"]  =  input_dir["lqq7_resol"];
    input_dir["lqq7_boost"]  =     input_dir["lqq7_resol"];
    input_dir["lqq7_boost_top"]  = input_dir["lqq7_resol"];
    input_dir["lqq7_boost_sb"]  =  input_dir["lqq7_resol"];
  }
  if (do2016semi){
    thisyear = "2016";
    input_dir["lqq6_resol"]  =     shapedir+"plots_hm_2016_Fit_Test_update_FakeUnc.root";
    input_dir["lqq6_resol_top"]  = input_dir["lqq6_resol"];
    input_dir["lqq6_resol_sb"]  =  input_dir["lqq6_resol"];
    input_dir["lqq6_boost"]  =     input_dir["lqq6_resol"];
    input_dir["lqq6_boost_top"]  = input_dir["lqq6_resol"];
    input_dir["lqq6_boost_sb"]  =  input_dir["lqq6_resol"];
  }

  VString chns;

  for (std::map<string, string>::iterator it=input_dir.begin(); it!=input_dir.end(); ++it){
    chns.push_back(it->first);
  }

  RooRealVar mH(mass.c_str(), mass.c_str(), 115., 5000.);
  mH.setConstant(true);

  map<string, VString> bkg_procs;
  VString SM_procs = {"ggH_hww", "qqH_hww", "SM"};

  for (std::map<string, string>::iterator it=input_dir.begin(); it!=input_dir.end(); ++it){
    if(it->first.find("qq") != std::string::npos){ //Semilep
      //bkg_procs[it->first] = {"DY", "VVV", "VZ", "Vg", "WW", "WWewk", "VgS_H", "VgS_L", "ggWW", "qqWWqq", "WW2J", "top", "Wjets", "QCD"};
      bkg_procs[it->first] = {"DY", "FAKE_mu_barrel_neg", "FAKE_mu_barrel_pos", "FAKE_mu_endcap_neg", "FAKE_mu_endcap_pos", "FAKE_el_barrel_neg", "FAKE_el_barrel_pos", "FAKE_el_endcap_neg", "FAKE_el_endcap_pos", "VVV", "VZ","WWewk","VBF_V", "Vg", "VgS_H", "VgS_L", "WH_htt", "WH_hww", "WW", "Wjets", "ZH_htt", "ZH_hww", "ggH_htt", "ggWW", "qqH_htt", "qqWWqq", "top"};
      SM_procs = {"ggH_hww", "qqH_hww"};
    }else if(it->first.find("em") != std::string::npos){ //Dilep em
      bkg_procs[it->first] = {"DY", "Fake_of", "VV", "WW", "WWewk", "ggWW", "qqWWqq", "WW2J", "top"};//"Fake_em", "Fake_me",
    }else if(it->first.find("ee") != std::string::npos){ //Dilep ee
      bkg_procs[it->first] = {"DY", "Fake_ee", "VV", "WW", "WWewk", "ggWW", "qqWWqq", "WW2J", "top"};
    }else if(it->first.find("mm") != std::string::npos){ //Dilep mm
      bkg_procs[it->first] = {"DY", "Fake_mm", "VV", "WW", "WWewk", "ggWW", "qqWWqq", "WW2J", "top"};
    }
  }

  // Create an empty CombineHarvester instance that will hold all of the
  // datacard configuration and histograms etc.
  ch::CombineHarvester cb;
  // Uncomment this next line to see a *lot* of debug information
  // cb.SetVerbosity(3);

  map<string,Categories> cats;
  if (!highindep){

  for(auto year: std::vector<std::string> {"8", "7", "6"}){ // Regular Di-leptonic categories
  cats["em"+year+"_13TeV"] = {
    {6, "em_ggh"},
    {7, "em_vbf"},
    {8, "em_notag"},
    };
  cats["em"+year+"_top_13TeV"] = {
    {10, "em_top_ggh"},
    {11, "em_top_vbf"},
    {12, "em_top_notag"},
    };
  cats["em"+year+"_dy_13TeV"] = {
    {13, "em_dy_ggh"},
    {14, "em_dy_vbf"},
    {15, "em_dy_notag"},
    };
  cats["ee"+year+"_13TeV"] = {
    {6, "ee_ggh"},
    {7, "ee_vbf"},
    {8, "ee_notag"},
    };
  cats["ee"+year+"_top_13TeV"] = {
    {10, "ee_top_ggh"},
    {11, "ee_top_vbf"},
    {12, "ee_top_notag"},
    };
  cats["ee"+year+"_dy_13TeV"] = {
    {13, "ee_dy_ggh"},
    {14, "ee_dy_vbf"},
    {15, "ee_dy_notag"},
    };
  cats["mm"+year+"_13TeV"] = {
    {6, "mm_ggh"},
    {7, "mm_vbf"},
    {8, "mm_notag"},
    };
  cats["mm"+year+"_top_13TeV"] = {
    {10, "mm_top_ggh"},
    {11, "mm_top_vbf"},
    {12, "mm_top_notag"},
    };
  cats["mm"+year+"_dy_13TeV"] = {
    {13, "mm_dy_ggh"},
    {14, "mm_dy_vbf"},
    {15, "mm_dy_notag"},
    };
  }

  }else{ // High mass Di-leptonic categories

  for(auto year: std::vector<std::string> {"8", "7", "6"}){
  cats["em"+year+"_13TeV"] = {
    {6, "em_highggh"},
    {7, "em_highvbf"},
    {8, "em_highnotag"},
    };
  cats["em"+year+"_top_13TeV"] = {
    {10, "em_top_ggh"},
    {11, "em_top_vbf"},
    {12, "em_top_notag"},
    };
  cats["em"+year+"_dy_13TeV"] = {
    {13, "em_dy_ggh"},
    {14, "em_dy_vbf"},
    {15, "em_dy_notag"},
    };
  cats["ee"+year+"_13TeV"] = {
    {6, "ee_highggh"},
    {7, "ee_highvbf"},
    {8, "ee_highnotag"},
    };
  cats["ee"+year+"_top_13TeV"] = {
    {10, "ee_top_ggh"},
    {11, "ee_top_vbf"},
    {12, "ee_top_notag"},
    };
  cats["ee"+year+"_dy_13TeV"] = {
    {13, "ee_dy_ggh"},
    {14, "ee_dy_vbf"},
    {15, "ee_dy_notag"},
    };
  cats["mm"+year+"_13TeV"] = {
    {6, "mm_highggh"},
    {7, "mm_highvbf"},
    {8, "mm_highnotag"},
    };
  cats["mm"+year+"_top_13TeV"] = {
    {10, "mm_top_ggh"},
    {11, "mm_top_vbf"},
    {12, "mm_top_notag"},
    };
  cats["mm"+year+"_dy_13TeV"] = {
    {13, "mm_dy_ggh"},
    {14, "mm_dy_vbf"},
    {15, "mm_dy_notag"},
    };
  }

  }

  for(auto year: std::vector<std::string> {"8", "7", "6"}){ // Semi-leptonic categories
  cats["lqq"+year+"_resol_13TeV"] = {
    {6, "ResolvedSR_isGGH"},
    {7, "ResolvedSR_isVBF"},
    {8, "ResolvedSR_isBKG"},
    };
  cats["lqq"+year+"_resol_top_13TeV"] = {
    {10, "ResolvedTopCR"},
    };
  cats["lqq"+year+"_resol_sb_13TeV"] = {
    {11, "ResolvedSB"},
    };
  cats["lqq"+year+"_boost_13TeV"] = {
    {6, "BoostedSR_isGGH"},
    {7, "BoostedSR_isVBF"},
    {8, "BoostedSR_isBKG"},
    };
  cats["lqq"+year+"_boost_top_13TeV"] = {
    {10, "BoostedTopCR"},
    };
  cats["lqq"+year+"_boost_sb_13TeV"] = {
    {11, "BoostedSB"},
    };
  }

  map<string, VString> masses;
  VString allmasses;

  for (std::map<string, string>::iterator it=input_dir.begin(); it!=input_dir.end(); ++it){
    if(!do_morphing){ // Single mass no morphing
      masses[it->first] = {onlyMass};
    //}else if(it->first.find("qq") != std::string::npos && it->first.find("bs") != std::string::npos){ // Semi-leptonic boosted
    //  masses[it->first] = {"400", "450", "500", "550", "600", "650", "700", "750", "800", "900", "1000", "1500", "2000", "2500", "3000", "4000", "5000"};
    //}else if(it->first.find("qq") != std::string::npos && it->first.find("bs") == std::string::npos){ // Semi-leptonic resolved
    //  masses[it->first] = {"115", "120", "124", "125", "126", "130", "135", "140", "145", "150", "155", "160", "165", "170", "175", "180", "190", "200", "210", "230", "250", "270", "300", "350", "400", "450", "500", "550", "600"};
    }else if(it->first.find("lqq") != std::string::npos){ // New Semi-leptonic (uses whole mass range for both resolved and boosted)
      masses[it->first] = {"115", "120", "124", "125", "126", "130", "135", "140", "145", "150", "155", "160", "165", "170", "175", "180", "190", "200", "210", "230", "250", "270", "300", "350","400", "450", "500", "550", "600", "650", "700", "750", "800", "900", "1000", "1500", "2000", "2500", "3000", "4000", "5000"};
    }else{ // Di-leptonic
      masses[it->first] = {"115", "120", "124", "125", "126", "130", "135", "140", "145", "150", "155", "160", "165", "170", "175", "180", "190", "200", "210", "230", "250", "270", "300", "350", "400", "450", "500", "550", "600", "650", "700", "750", "800", "900", "1000", "1500", "2000", "2500", "3000", "4000", "5000"};
    }
    allmasses = masses[it->first];
  }


  map<string, VString> signal_types = {
    {"ggH", {"ggH_HWW", "ggH_HWWSBI"}},
    {"qqH", {"qqH_HWW", "qqH_HWWSBI"}}
  };

  for(auto chn : chns){
    cb.AddObservations({"*"}, {"hww"}, {"13TeV"}, {chn}, cats[chn+"_13TeV"]);

    cb.AddProcesses({"*"}, {"hww"}, {"13TeV"}, {chn}, bkg_procs[chn], cats[chn+"_13TeV"], false);

    cb.AddProcesses(masses[chn], {"hww"}, {"13TeV"}, {chn}, signal_types["ggH"], cats[chn+"_13TeV"], true);
    cb.AddProcesses(masses[chn], {"hww"}, {"13TeV"}, {chn}, signal_types["qqH"], cats[chn+"_13TeV"], true);
    cb.AddProcesses({"*"}, {"hww"}, {"13TeV"}, {chn}, SM_procs, cats[chn+"_13TeV"], false);
  }


  ch::AddMSSMFullRun2Systematics(cb, highindep, DNNdiscrim, model);

  for (string chn : chns) {

    if(chn.find("lqq") != std::string::npos){ // Semi-leptonic
      std::cout << "Channel" << chn << std::endl;
      std::string discrim = "mass_HIGGS_Res";
      bool AddToDiscrim = true;
      if (chn.find("boost") != std::string::npos){
        discrim = "mass_HIGGS_FAT_fit";
        AddToDiscrim = false;
        if (highindep){
          discrim = "mass_HIGGS_Boo";
          AddToDiscrim = true;
        }
      }
      if (chn.find("top") != std::string::npos || chn.find("sb") != std::string::npos){
        discrim = "events";
        AddToDiscrim = false;
      }

      std::string H = "_";
      if (highindep && chn.find("boost") != std::string::npos && !(chn.find("top") != std::string::npos || chn.find("sb") != std::string::npos)) H = "_H";

      for (string b : cb.bin_set()) {
      std::string discrim2 = discrim;
      if (AddToDiscrim) discrim2 = discrim2+b.substr(b.find("is")+2);

      cb.cp().channel({chn}).bin({b}).backgrounds().ExtractShapes(
          input_dir[chn],
          "incl_$BIN"+H+"/"+discrim2+"/histo_$PROCESS",
          "incl_$BIN"+H+"/"+discrim2+"/histo_$PROCESS_$SYSTEMATIC");

      cb.cp().channel({chn}).bin({b}).process({"ggH_HWW"}).ExtractShapes(
          input_dir[chn],
          "incl_$BIN"+H+"/"+discrim2+"/histo_GGH_$MASS"+model,
          "incl_$BIN"+H+"/"+discrim2+"/histo_GGH_$MASS"+model+"_$SYSTEMATIC");
      cb.cp().channel({chn}).bin({b}).process({"ggH_HWWSBI"}).ExtractShapes(
          input_dir[chn],
          "incl_$BIN"+H+"/"+discrim2+"/histo_GGHSBI_$MASS"+model,
          "incl_$BIN"+H+"/"+discrim2+"/histo_GGHSBI_$MASS"+model+"_$SYSTEMATIC");
      cb.cp().channel({chn}).bin({b}).process({"qqH_HWW"}).ExtractShapes(
          input_dir[chn],
          "incl_$BIN"+H+"/"+discrim2+"/histo_QQH_$MASS"+model,
          "incl_$BIN"+H+"/"+discrim2+"/histo_QQH_$MASS"+model+"_$SYSTEMATIC");
      cb.cp().channel({chn}).bin({b}).process({"qqH_HWWSBI"}).ExtractShapes(
          input_dir[chn],
          "incl_$BIN"+H+"/"+discrim2+"/histo_QQHSBI_$MASS"+model,
          "incl_$BIN"+H+"/"+discrim2+"/histo_QQHSBI_$MASS"+model+"_$SYSTEMATIC");

      }

    }else{ // Di-leptonic

      std::string discrim = "events";
      if( chn.find("top") == std::string::npos && chn.find("dy") == std::string::npos ){
        discrim = "mTi_binning";
        if (highindep) discrim = "mTi_highbinning";
        if (DNNdiscrim) discrim = "DNN_mth_binning";
        if (DNNdiscrim && highindep) discrim = "DNN_mth_highbinning";
      }

      cb.cp().channel({chn}).backgrounds().ExtractShapes(
          input_dir[chn],
          "hww2l2v_13TeV_$BIN/"+discrim+"/histo_$PROCESS",
          "hww2l2v_13TeV_$BIN/"+discrim+"/histo_$PROCESS_$SYSTEMATIC");

      cb.cp().channel({chn}).process({"ggH_HWW"}).ExtractShapes(
          input_dir[chn],
          "hww2l2v_13TeV_$BIN/"+discrim+"/histo_GGH_$MASS"+model,
          "hww2l2v_13TeV_$BIN/"+discrim+"/histo_GGH_$MASS"+model+"_$SYSTEMATIC");
      cb.cp().channel({chn}).process({"ggH_HWWSBI"}).ExtractShapes(
          input_dir[chn],
          "hww2l2v_13TeV_$BIN/"+discrim+"/histo_GGHSBI_$MASS"+model,
          "hww2l2v_13TeV_$BIN/"+discrim+"/histo_GGHSBI_$MASS"+model+"_$SYSTEMATIC");
      cb.cp().channel({chn}).process({"qqH_HWW"}).ExtractShapes(
          input_dir[chn],
          "hww2l2v_13TeV_$BIN/"+discrim+"/histo_QQH_$MASS"+model,
          "hww2l2v_13TeV_$BIN/"+discrim+"/histo_QQH_$MASS"+model+"_$SYSTEMATIC");
      cb.cp().channel({chn}).process({"qqH_HWWSBI"}).ExtractShapes(
          input_dir[chn],
          "hww2l2v_13TeV_$BIN/"+discrim+"/histo_QQHSBI_$MASS"+model,
          "hww2l2v_13TeV_$BIN/"+discrim+"/histo_QQHSBI_$MASS"+model+"_$SYSTEMATIC");

    }

  }


 if (remove0yields){
  //Now delete processes with 0 yield
  cb.FilterProcs([&](ch::Process *p) {
   bool null_yield = !(p->rate() > 0.) && !(p->signal()); // Don't remove ANY signal (even in CR), otherwise problem if low/high edge mass missing
   if (null_yield){
      std::cout << "[Null yield] Removing process with null yield: \n ";
      std::cout << ch::Process::PrintHeader << *p << "\n";
      cb.FilterSysts([&](ch::Systematic *s){
        bool remove_syst = (MatchingProcess(*p,*s));
        return remove_syst;
     });
   }
   return null_yield;
  });
 }

  //Remove systematics that lead to Bogus norms
/*
bool IsCompletelyZero(TH1 const* h) {
  double content = 0.0;
  for (int i = 1; i <= h->GetNbinsX(); ++i) {
    content = content + h->GetBinContent(i);
  }
  bool itszero = false;
  if (content <= 0.0){itszero = true;}
  return itszero;
}
*/
  std::cout << "[Zero Content] Doing this step now..." << "\n";

  cb.FilterSysts([&](ch::Systematic *s){
    //std::cout << "checking " << s->bin() << "," << s->process() << "," << s->name() << "\n";
    bool remove_syst = (s->type() == "shape");
    if (remove_syst){remove_syst = (s->process().find("HWW") == std::string::npos);} // Don't remove empty systematics from my signal -> Important because it won't work if it removes systematics for only SOME mass points
    if (remove_syst){remove_syst = (ch::IsCompletelyZero(s->shape_u()) || ch::IsCompletelyZero(s->shape_d()));}
    if (remove_syst){std::cout << "[Zero Content] Removing shape syst " << s->bin() << "," << s->process() << "," << s->name() << "\n";}
    return remove_syst;
  });

  // ... but if signal systematic is bad (0 content), then fix it!
/*
void SymmetrizeSystematic(TH1 const *hnom, TH1 *hsysgood, TH1 *hsysbad) {
  for (int i = 1; i <= hnom->GetNbinsX(); ++i) {
    hsysbad->SetBinContent(i, hnom->GetBinContent(i) + (hnom->GetBinContent(i) - hsysgood->GetBinContent(i)));
  }
}
*/
  cb.ForEachSyst([&](ch::Systematic *s) {
    if (s->type().find("shape") == std::string::npos) return;
    if (ch::IsCompletelyZero(s->shape_u()) || ch::IsCompletelyZero(s->shape_d())) {

      cb.ForEachProc([&](ch::Process *p) {
        if (MatchingProcess(*p,*s) && !ch::IsCompletelyZero(p->shape())){
          std::cout << "[Null bins] Fixing null bins for syst" << s->bin()
                << "," << s->process() << "," << s->name() << "\n";
          std::cout << "[Null bins] Before:\n";
          s->shape_u()->Print("range");
          s->shape_d()->Print("range");
          p->shape()->Print("range");
          auto newhist_u = s->ClonedShapeU();
          auto newhist_d = s->ClonedShapeD();
          auto newhist = p->ClonedShape();
          std::cout << "[Null bins] Values Up/Down:" << s->value_u() << " , " << s->value_d() << "\n";
          if (!ch::IsCompletelyZero(s->shape_u()) && ch::IsCompletelyZero(s->shape_d())) {
            std::cout << "[Null bins] Up good, Down bad:\n";
            ch::SymmetrizeSystematic(p->shape(), newhist_u.get(), newhist_d.get());
            s->set_shapes(std::move(newhist_u), std::move(newhist_d), nullptr);
            s->set_value_d(1.0/s->value_u());
          }else if (ch::IsCompletelyZero(s->shape_u()) && !ch::IsCompletelyZero(s->shape_d())) {
            std::cout << "[Null bins] Up bad, Down good:\n";
            ch::SymmetrizeSystematic(p->shape(), newhist_d.get(), newhist_u.get());
            s->set_shapes(std::move(newhist_u), std::move(newhist_d), nullptr);
            s->set_value_u(1.0/s->value_d());
          }else if (ch::IsCompletelyZero(s->shape_u()) && ch::IsCompletelyZero(s->shape_d())) {
            std::cout << "[Null bins] Up bad, Down bad:\n";
            auto newhist2 = p->ClonedShape();
            s->set_shapes(std::move(newhist), std::move(newhist2), nullptr);
            s->set_value_u(1.0);
            s->set_value_d(1.0);
          }
          std::cout << "[Null bins] After:\n";
          s->shape_u()->Print("range");
          s->shape_d()->Print("range");
          std::cout << "[Null bins] Values Up/Down:" << s->value_u() << " , " << s->value_d() << "\n";
        }
      });

    }
  });


  if (lnNforshapesinCR){ // Convert any shapes in the CRs to lnN, but NOT signal shapes, because those still change with the mass:
    cb.cp().FilterSysts(BinIsNotControlRegion).syst_type({"shape"}).ForEachSyst([](ch::Systematic *sys) {
      bool NotSigSyst = (sys->process().find("HWW") == std::string::npos);
      if (NotSigSyst){sys->set_type("lnN");}
    });
  }

  if (lnNforscaleshapes && lnNforscaleshapesSBI){
    cb.cp().syst_type({"shape"}).ForEachSyst([](ch::Systematic *sys) {
      bool NotSigSyst = (sys->name().find("_scale") != std::string::npos) || (sys->name().find("_res_") != std::string::npos) || (sys->name().find("_PU") != std::string::npos); // Change only scale uncertainties, jet resolution and PU
      if (NotSigSyst){NotSigSyst = (sys->name().find("scale_METRes") == std::string::npos);} // Don't change for DY recoil uncertainty, because has no effect otherwise because rateParam
      if (NotSigSyst){sys->set_type("lnN");}
    });
  }
  if (lnNforscaleshapes && !lnNforscaleshapesSBI){
    cb.cp().syst_type({"shape"}).ForEachSyst([](ch::Systematic *sys) {
      bool NotSigSyst = (sys->process().find("HWW") == std::string::npos); // Ignore signal
      if (NotSigSyst){NotSigSyst = (sys->name().find("_scale") != std::string::npos) || (sys->name().find("_res") != std::string::npos) || (sys->name().find("_PU") != std::string::npos);} // Change only scale uncertainties, jet resolution and PU
      if (NotSigSyst){NotSigSyst = (sys->name().find("scale_METRes") == std::string::npos);} // Don't change for DY recoil uncertainty, because has no effect otherwise because rateParam
      if (NotSigSyst){NotSigSyst = ((sys->process().find("ggH_hww") == std::string::npos) && (sys->process().find("ggWW") == std::string::npos) && (sys->process().find("qqH_hww") == std::string::npos) && (sys->process().find("qqWWqq") == std::string::npos));} // Also don't change parts of SBI
      if (NotSigSyst){sys->set_type("lnN");}
    });
  }

  // Replacing observation with the sum of the backgrounds (asimov) - nice to ensure blinding
  if(!real_data){
      for (auto b : cb.cp().FilterAll(BinIsControlRegion).bin_set()) {
          std::cout << " - Replacing data with asimov in bin " << b << "\n";
          cb.cp().bin({b}).ForEachObs([&](ch::Observation *obs) {
            obs->set_shape(cb.cp().bin({b}).backgrounds().GetShape(), true);
          });
        }
  }
  if(!real_data_CR){
      for (auto b : cb.cp().FilterAll(BinIsNotControlRegion).bin_set()) {
          std::cout << " - Replacing data with asimov in bin " << b << "\n";
          cb.cp().bin({b}).ForEachObs([&](ch::Observation *obs) {
            obs->set_shape(cb.cp().bin({b}).backgrounds().GetShape(), true);
          });
        }
  }

  // Rebinning
  // --------------------
  // Keep track of shapes before and after rebinning for comparison
  // and for checking the effect of negative bin contents
  auto bins = cb.cp().bin_set();
  std::map<std::string, TH1F> before_rebin;
  std::map<std::string, TH1F> after_rebin;
  std::map<std::string, TH1F> after_rebin_neg;
  if (check_neg_bins) {
    for (auto b : bins) {
      before_rebin[b] = cb.cp().bin({b}).backgrounds().GetShape();
    }
  }

  //auto rebin = ch::AutoRebin()
  //  .SetBinThreshold(0.0)
  //  .SetBinUncertFraction(0.3)
  //  .SetRebinMode(1)
  //  .SetPerformRebin(auto_rebin)
  //  .SetVerbosity(1);
  //rebin.Rebin(cb, cb);

  vector<double> binning;
  //if (highindep ){
  //  //Currently used for Di-leptonic: [0,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,2750,3000,3500]
  //  binning = {0,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,2750,3000,3500};
  //}else{
  //  //Currently used for Di-leptonic: [0,150,175,200,225,250,280,320,360,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,2750,3000,3500]
  ////  binning = {0,150,175,200,225,250,280,320,360,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,2750,3000,3500};
  //  binning = {0,150,175,200,225,250,280,320,360,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,2750,3000,3500};
  //}
  if(manual_rebin && (do2016semi || do2017semi || do2018semi ) ){
    for(auto b : cb.cp().FilterAll(BinIsControlRegion).bin_set()) {
      if( highindep && (b == "BoostedSR_isVBF")){
      //binning = {0, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1150, 1350, 1400, 1450, 1500, 1600, 1700, 1800, 2000, 2600, 3400, 5000};
      binning = {0, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1150, 1350, 1400, 1500, 1600, 1700, 1800, 2000, 2600, 3400, 5000};
      std::cout << "Rebinning by hand for bin: " << b <<  std::endl;
      cb.cp().bin({b}).VariableRebin(binning);
    }else if (highindep && (b == "BoostedSR_isGGH")){
      binning = {0, 250, 350,500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1600, 1700, 1800, 2000, 2200, 2400, 2600, 3000, 5000};
      std::cout << "Rebinning by hand for bin: " << b <<  std::endl;
      cb.cp().bin({b}).VariableRebin(binning);
    }else if (!highindep && (b == "BoostedSR_isGGH")){
      binning = {0, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1700, 2000, 3000 };
      std::cout << "Rebinning by hand for bin: " << b <<  std::endl;
      cb.cp().bin({b}).VariableRebin(binning);
    }else if (b == "ResolvedSR_isVBF"){
      binning = {0, 150, 200, 260, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1300, 1500, 1700, 3000};
      std::cout << "Rebinning by hand for bin: " << b <<  std::endl;
      cb.cp().bin({b}).VariableRebin(binning);
   }
 }
}
  if (check_neg_bins) {
    for (auto b : bins) {
      after_rebin[b] = cb.cp().bin({b}).backgrounds().GetShape();
      // std::cout << "Bin: " << b << " (before)\n";
      // before_rebin[b].Print("range");
      // std::cout << "Bin: " << b << " (after)\n";
      // after_rebin[b].Print("range");
      for (auto p : cb.cp().bin({b}).backgrounds().process_set()) {
        TH1F proc_hist;
        cb.cp().bin({b}).process({p}).ForEachProc([&](ch::Process *proc) {
          proc_hist = proc->ShapeAsTH1F();
          proc_hist.Scale(proc->no_norm_rate());
          for (int i = 1; i <= proc_hist.GetNbinsX(); ++i) {
            if (proc_hist.GetBinContent(i) < 0.) {
              std::cout << p << " bin " << i << ": " << proc_hist.GetBinContent(i) << "\n";
            }
          }
        });
        if (after_rebin_neg.count(b)) {
          after_rebin_neg[b].Add(&proc_hist);
        } else {
          after_rebin_neg[b] = proc_hist;
        }
      }
      std::cout << "Bin: " << b << "\n";
      for (int i = 1; i <= after_rebin[b].GetNbinsX(); ++i) {
        double offset = after_rebin[b].GetBinContent(i) - after_rebin_neg[b].GetBinContent(i);
        double offset_by_yield = offset / after_rebin[b].GetBinContent(i);
        double offset_by_err = offset / after_rebin[b].GetBinError(i);
        printf("%-2i offset %-10.4f tot %-10.4f err %-10.4f off/tot %-10.4f off/err %-10.4f\n", i , offset, after_rebin[b].GetBinContent(i), after_rebin[b].GetBinError(i), offset_by_yield, offset_by_err);
      }
    }
  }

  // At this point we can fix the negative bins
  std::cout << "Fixing negative bins\n";
  cb.ForEachProc([](ch::Process *p) {
    if (ch::HasNegativeBins(p->shape())) {
      std::cout << "[Negative bins] Fixing negative bins for " << p->channel() << "," << p->bin()
                << "," << p->process() << "\n";
      std::cout << "[Negative bins] Before:\n";
      p->shape()->Print("range");
      auto newhist = p->ClonedShape();
      ch::ZeroNegativeBins(newhist.get());
      p->set_shape(std::move(newhist), false);
      std::cout << "[Negative bins] After:\n";
      p->shape()->Print("range");
    }
  });

  cb.ForEachSyst([](ch::Systematic *s) {
    if (s->type().find("shape") == std::string::npos) return;
    if (ch::HasNegativeBins(s->shape_u()) || ch::HasNegativeBins(s->shape_d())) {
      std::cout << "[Negative bins] Fixing negative bins for syst" << s->bin()
                << "," << s->process() << "," << s->name() << "\n";
      /*std::cout << "[Negative bins] Before:\n";
      s->shape_u()->Print("range");
      s->shape_d()->Print("range");*/
      auto newhist_u = s->ClonedShapeU();
      auto newhist_d = s->ClonedShapeD();
      ch::ZeroNegativeBins(newhist_u.get());
      ch::ZeroNegativeBins(newhist_d.get());
      s->set_shapes(std::move(newhist_u), std::move(newhist_d), nullptr);
      /*std::cout << "[Negative bins] After:\n";
      s->shape_u()->Print("range");
      s->shape_d()->Print("range");*/
    }
  });

if (do_bbb){
  cout << "Generating bbb uncertainties..." << "\n";
  auto bbb = ch::BinByBinFactory()
    .SetPattern("CMS_$ANALYSIS_$BIN_"+thisyear+"_$PROCESS_bin_$#")
    .SetAddThreshold(0.)
    .SetMergeThreshold(0.5)
    .SetFixNorm(false)
    .SetPoissonErrors(poisson_bbb);
  for (auto chn : chns) {
    if (chn.find("dy") != std::string::npos  or chn.find("top") != std::string::npos  or chn.find("sb") != std::string::npos) {
      continue;
    }
    std::cout << " - Doing bbb for channel " << chn << "\n";
    bbb.MergeAndAdd(cb.cp().channel({chn}).backgrounds(), cb);
  }
  cout << " done\n";
}

  ch::SetStandardBinNames(cb);

  RooWorkspace ws("hww", "hww");
  string demoname = "hww_mssm_demo_"+output_folder+".root";
  TFile demo(demoname.c_str(), "RECREATE");

  map<string, RooAbsReal *> mass_var = {
    {"ggH_HWW", &mH},
    {"qqH_HWW", &mH},
    {"ggH_HWWSBI", &mH},
    {"qqH_HWWSBI", &mH}
  };


  if (do_morphing) {
    auto bins = cb.bin_set();
    for (auto b : bins) {
      std::cout << "Bin:" << b << "\n";
      auto procs = cb.cp().bin({b}).process(ch::JoinStr({signal_types["ggH"], signal_types["qqH"]})).process_set();
      for (auto p : procs) {
        std::cout << "Process:" << p << "\n";
        ch::BuildRooMorphing(ws, cb, b, p, *(mass_var[p]),
                             "norm", true, false, false, &demo); // Middle bool is verbose
      }
    }
    demo.Close();
    cb.AddWorkspace(ws);
    cb.cp().process(ch::JoinStr({signal_types["ggH"], signal_types["qqH"]})).ExtractPdfs(cb, "hww", "$BIN_$PROCESS_morph");
  }

 // Write out datacards. Naming convention important for rest of workflow. We
 // make one directory per chn-cat, one per chn and cmb. In this code we only
 // store the individual datacards for each directory to be combined later, but
 // note that it's also possible to write out the full combined card with CH <- this TODO
  string output_prefix = "output_RELW002_FakeRate_wLepCut/";
  string root_suffix = "";
  if (do2016){root_suffix = root_suffix + "16";}
  if (do2017){root_suffix = root_suffix + "17";}
  if (do2018){root_suffix = root_suffix + "18";}
  if (do2016semi){root_suffix = root_suffix + "semi16";}
  if (do2017semi){root_suffix = root_suffix + "semi17";}
  if (do2018semi){root_suffix = root_suffix + "semi18";}
  if(output_folder.compare(0,1,"/") == 0) output_prefix="";
  ch::CardWriter writer(output_prefix + output_folder + "/$TAG/$BIN.txt",
                        output_prefix + output_folder + "/$TAG/hww_input"+root_suffix+".root");
  ch::CardWriter writercmb(output_prefix + output_folder + "/$TAG/combined.txt",
                           output_prefix + output_folder + "/$TAG/hww_input"+root_suffix+".root");
  // We're not using mass as an identifier - which we need to tell the CardWriter
  // otherwise it will see "*" as the mass value for every object and skip it
  writer.SetWildcardMasses({});
  writercmb.SetWildcardMasses({});
  writer.SetVerbosity(1);
  writercmb.SetVerbosity(1);

  writer.WriteCards("cmb", cb);
  writercmb.WriteCards("cmb", cb);

  string finalstate = "";
  if (!combcard_only){
    for (auto chn : chns) {
      if (chn.find("dy") != std::string::npos  or chn.find("top") != std::string::npos  or chn.find("sb") != std::string::npos) {
        continue;
      }
      if (do2016 or do2017 or do2018){ // Di-leptonic only
        // Add per channel-category
        writer.WriteCards("hww_"+chn+"_ggF_13TeV", cb.cp().channel({chn,chn+"_dy",chn+"_top"}).attr({"ggh"},"njet"));
        writer.WriteCards("hww_"+chn+"_VBF_13TeV", cb.cp().channel({chn,chn+"_dy",chn+"_top"}).attr({"vbf"},"njet"));
        writer.WriteCards("hww_"+chn+"_notag_13TeV", cb.cp().channel({chn,chn+"_dy",chn+"_top"}).attr({"notag"},"njet"));
        // Add per channel
        if (chn.find("ee") != std::string::npos){finalstate = "ee";}
        if (chn.find("em") != std::string::npos){finalstate = "em";}
        if (chn.find("mm") != std::string::npos){finalstate = "mm";}
        writer.WriteCards("hww_"+chn+"_13TeV", cb.cp().channel({chn,chn+"_dy",chn+"_top"}).attr({finalstate},"decay"));
        writercmb.WriteCards("hww_"+chn+"_ggF_13TeV", cb.cp().channel({chn,chn+"_dy",chn+"_top"}).attr({"ggh"},"njet"));
        writercmb.WriteCards("hww_"+chn+"_VBF_13TeV", cb.cp().channel({chn,chn+"_dy",chn+"_top"}).attr({"vbf"},"njet"));
        writercmb.WriteCards("hww_"+chn+"_notag_13TeV", cb.cp().channel({chn,chn+"_dy",chn+"_top"}).attr({"notag"},"njet"));
        writercmb.WriteCards("hww_"+chn+"_13TeV", cb.cp().channel({chn,chn+"_dy",chn+"_top"}).attr({finalstate},"decay"));
      }else{
        writer.WriteCards("hww_"+chn+"_isGGH_13TeV", cb.cp().channel({chn}).attr({"isGGH"},"categ"));
        writer.WriteCards("hww_"+chn+"_isVBF_13TeV", cb.cp().channel({chn}).attr({"isVBF"},"categ"));
        writer.WriteCards("hww_"+chn+"_isBKG_13TeV", cb.cp().channel({chn}).attr({"isBKG"},"categ"));
        writer.WriteCards("hww_"+chn+"_isGGH_13TeV", cb.cp().channel({chn+"_top",chn+"_sb"}));
        writer.WriteCards("hww_"+chn+"_isVBF_13TeV", cb.cp().channel({chn+"_top",chn+"_sb"}));
        writer.WriteCards("hww_"+chn+"_isBKG_13TeV", cb.cp().channel({chn+"_top",chn+"_sb"}));
        writercmb.WriteCards("hww_"+chn+"_isGGH_13TeV", cb.cp().channel({chn}).attr({"isGGH"},"categ"));
        writercmb.WriteCards("hww_"+chn+"_isVBF_13TeV", cb.cp().channel({chn}).attr({"isVBF"},"categ"));
        writercmb.WriteCards("hww_"+chn+"_isBKG_13TeV", cb.cp().channel({chn}).attr({"isBKG"},"categ"));
        writercmb.WriteCards("hww_"+chn+"_isGGH_13TeV", cb.cp().channel({chn+"_top",chn+"_sb"}));
        writercmb.WriteCards("hww_"+chn+"_isVBF_13TeV", cb.cp().channel({chn+"_top",chn+"_sb"}));
        writercmb.WriteCards("hww_"+chn+"_isBKG_13TeV", cb.cp().channel({chn+"_top",chn+"_sb"}));
      }

    }
    // Add per category
    if (do2016 or do2017 or do2018){ // Di-leptonic only
      writer.WriteCards("hww_ggF_13TeV", cb.cp().attr({"ggh"},"njet"));
      writer.WriteCards("hww_VBF_13TeV", cb.cp().attr({"vbf"},"njet"));
      writer.WriteCards("hww_notag_13TeV", cb.cp().attr({"notag"},"njet"));
      writercmb.WriteCards("hww_ggF_13TeV", cb.cp().attr({"ggh"},"njet"));
      writercmb.WriteCards("hww_VBF_13TeV", cb.cp().attr({"vbf"},"njet"));
      writercmb.WriteCards("hww_notag_13TeV", cb.cp().attr({"notag"},"njet"));
    }else{
      writer.WriteCards("hww_boosted_13TeV", cb.cp().attr({"boosted"},"whad"));
      writer.WriteCards("hww_resolved_13TeV", cb.cp().attr({"resolved"},"whad"));
      writercmb.WriteCards("hww_boosted_13TeV", cb.cp().attr({"boosted"},"whad"));
      writercmb.WriteCards("hww_resolved_13TeV", cb.cp().attr({"resolved"},"whad"));
    }
    // Add per year
    writer.WriteCards("hww_2018_13TeV", cb.cp().attr({"2k18"},"year"));
    writer.WriteCards("hww_2017_13TeV", cb.cp().attr({"2k17"},"year"));
    writer.WriteCards("hww_2016_13TeV", cb.cp().attr({"2k16"},"year"));
    writercmb.WriteCards("hww_2018_13TeV", cb.cp().attr({"2k18"},"year"));
    writercmb.WriteCards("hww_2017_13TeV", cb.cp().attr({"2k17"},"year"));
    writercmb.WriteCards("hww_2016_13TeV", cb.cp().attr({"2k16"},"year"));
    // Add per analysis
    writer.WriteCards("hww2l2nu_13TeV", cb.cp().attr({"dilep"},"analysis"));
    writer.WriteCards("hwwlnuqq_13TeV", cb.cp().attr({"semilep"},"analysis"));
    writercmb.WriteCards("hww2l2nu_13TeV", cb.cp().attr({"dilep"},"analysis"));
    writercmb.WriteCards("hwwlnuqq_13TeV", cb.cp().attr({"semilep"},"analysis"));
  }

  // NEED to split boosed/resolved too
  // bos+res is either full comb, or semilep only


  cb.PrintAll();
  cout << " done\n";

  //if(!do_morphing){
  //  cout << "Running Validation... \n";
  //  ch::ValidateCards(cb, "ValidateCards_"+root_suffix+"_"+onlyMass+".json", 0.1, 0.001);
  //}
  //for(auto valmass : allmasses){
  //  cb.SetMass??
  //  ch::ValidateCards(cb, "ValidateCards_"+root_suffix+"_"+valmass+".json", 0.1, 0.001);
  //}

}
