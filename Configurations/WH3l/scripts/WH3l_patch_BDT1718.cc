// vim: set sw=4 sts=4 fdm=syntax fdl=0 fdn=2 et:
#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <string>
#include <cmath>
#include <memory>
#include <sys/stat.h>

#include "TMVA/Reader.h"
#include "TSystem.h"
#include "Math/Vector4D.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/VectorUtil.h"

using PtEtaPhiMVector = ROOT::Math::PtEtaPhiMVector;

class WH3l_patch_BDT1718 : public multidraw::TTreeFunction 
{
    public:

        WH3l_patch_BDT1718(const char* variable_);
        static constexpr int BIGNUMBER{9999};
        static constexpr double Z_MASS{91.1876};

        char const* getName() const override { return "WH3l_patch_BDT1718"; }
        TTreeFunction* clone() const override { return new WH3l_patch_BDT1718(variable.c_str()); }
        unsigned getNdata() override { return 1; }
        double evaluate(unsigned) override;
        double getValue(std::string); 

        // Frequently used patchers and utility functions could be `static inline` to boost.
        bool WH3l_isOK();
        static inline float bVeto(FloatArrayReader* ,int);

        static inline double get_mOSll(PtEtaPhiMVector const&, int const&, PtEtaPhiMVector const&, int const&);
        static inline double get_ptOSll(PtEtaPhiMVector const&, int const&, PtEtaPhiMVector const&, int const&);
        static inline double get_drOSll(PtEtaPhiMVector const&, int const&, PtEtaPhiMVector const&, int const&);
        static inline double get_mtlmet(PtEtaPhiMVector const&, PtEtaPhiMVector const&);
        static inline double get_dphilmet(PtEtaPhiMVector const&, PtEtaPhiMVector const&);
        static inline double get_ptlll(PtEtaPhiMVector const&, PtEtaPhiMVector const&, PtEtaPhiMVector const&);
        static inline double get_mlll(PtEtaPhiMVector const&, PtEtaPhiMVector const&, PtEtaPhiMVector const&);
        static inline double get_ZVeto(std::vector<PtEtaPhiMVector>, std::vector<int>);
        static inline double get_dphilllmet(PtEtaPhiMVector const&, PtEtaPhiMVector const&, PtEtaPhiMVector const&, PtEtaPhiMVector const&);
        static inline double get_ptWWW(PtEtaPhiMVector const&, PtEtaPhiMVector const&, PtEtaPhiMVector const&, PtEtaPhiMVector const&);
        static inline double get_mtWWW(PtEtaPhiMVector const&, PtEtaPhiMVector const&, PtEtaPhiMVector const&, PtEtaPhiMVector const&);

        // More complex patchers
        friend class AbsTMVAResultReader;

        void initMvaReader_BDTGOSSF(std::unique_ptr<TMVA::Reader> &, const char*, const char*);
        void initMvaReader_BDTGSSSF(std::unique_ptr<TMVA::Reader> &, const char*, const char*);
        void updateMvaVariable_BDTGOSSF();
        void updateMvaVariable_BDTGSSSF();

        std::unique_ptr<TMVA::Reader> mvaReader_BDTGOSSF2016{new TMVA::Reader()};
        double get_BDTGOSSF2016();

        std::unique_ptr<TMVA::Reader> mvaReader_BDTGOSSF1718{new TMVA::Reader()};
        double get_BDTGOSSF1718();

        std::unique_ptr<TMVA::Reader> mvaReader_BDTGSSSF2016{new TMVA::Reader()};
        double get_BDTGSSSF2016();

        std::unique_ptr<TMVA::Reader> mvaReader_BDTGSSSF1718{new TMVA::Reader()};
        double get_BDTGSSSF1718();

    protected:
        void bindTree_(multidraw::FunctionLibrary&) override;
        std::string variable;

        // Variables to be bind to TMVA::Reader
        float loc_WH3l_dphilllmet;
        float loc_WH3l_mOSll_min;
        float loc_WH3l_ptOSll_min;
        float loc_WH3l_drOSll_min;
        float loc_Jet_btagDeepB_0  ,loc_Jet_btagDeepB_1;
        float loc_WH3l_ZVeto     ;
        float loc_WH3l_ptlll     ;
        float loc_WH3l_mtlmet_0  ;
        float loc_WH3l_mtlmet_1  ;
        float loc_WH3l_mtlmet_2  ;
        float loc_WH3l_dphilmet_0;
        float loc_WH3l_dphilmet_1;
        float loc_WH3l_dphilmet_2;
        float loc_WH3l_ptWWW     ;
        float loc_WH3l_mtWWW     ;
        float loc_WH3l_mlll      ;
        float loc_PuppiMET_pt    ;
        float loc_Lepton_pt_0, loc_Lepton_pt_1, loc_Lepton_pt_2;
        float loc_WH3l_mOSll_0,loc_WH3l_mOSll_1;

        UIntValueReader*  nLepton;
        FloatArrayReader* Lepton_pt;
        FloatArrayReader* Lepton_eta;
        FloatArrayReader* Lepton_phi;
        IntArrayReader*   Lepton_pdgId;
        FloatValueReader* PuppiMET_pt;
        FloatValueReader* PuppiMET_phi;
        IntArrayReader*   CleanJet_jetIdx;
        FloatArrayReader* Jet_btagDeepB;

        PtEtaPhiMVector Lep[3];
        PtEtaPhiMVector MET;
};

WH3l_patch_BDT1718::WH3l_patch_BDT1718(const char* variable_) :
    TTreeFunction(),
    variable{variable_}
{
    initMvaReader_BDTGOSSF(mvaReader_BDTGOSSF2016   , "BDTG4F07","/afs/cern.ch/user/p/pyu/public/HWWAnalysis/FullRunII06Apr_v6/TMVAClassification_2016OSSF.weights.xml");
    initMvaReader_BDTGOSSF(mvaReader_BDTGOSSF1718   , "BDTG4F07D31C2","/afs/cern.ch/user/p/pyu/public/HWWAnalysis/FullRunII06Apr_v6/TMVAClassification_2017OSSF.weights.xml");
    initMvaReader_BDTGSSSF(mvaReader_BDTGSSSF2016   , "BDTGC10D4C10S1","/afs/cern.ch/user/p/pyu/public/HWWAnalysis/FullRunII06Apr_v6/TMVAClassification_2016SSSF.weights.xml");
    initMvaReader_BDTGSSSF(mvaReader_BDTGSSSF1718   , "BDTGC10D4C10S1","/afs/cern.ch/user/p/pyu/public/HWWAnalysis/FullRunII06Apr_v6/TMVAClassification_2017SSSF.weights.xml");
}

void
WH3l_patch_BDT1718::bindTree_(multidraw::FunctionLibrary& _library)
{
    _library.bindBranch(nLepton         , "nLepton");
    _library.bindBranch(Lepton_pt       , "Lepton_pt");
    _library.bindBranch(Lepton_eta      , "Lepton_eta");
    _library.bindBranch(Lepton_phi      , "Lepton_phi");
    _library.bindBranch(Lepton_pdgId    , "Lepton_pdgId");
    _library.bindBranch(PuppiMET_pt     , "PuppiMET_pt");
    _library.bindBranch(PuppiMET_phi    , "PuppiMET_phi");
    _library.bindBranch(CleanJet_jetIdx , "CleanJet_jetIdx");
    _library.bindBranch(Jet_btagDeepB   , "Jet_btagDeepB");
}

bool
WH3l_patch_BDT1718::WH3l_isOK()
{
    unsigned nLep{*nLepton->Get()};
    //Require an event with 3 leptons and chlll = 1
    if (nLep<3) return false;
    return true;
}

double
WH3l_patch_BDT1718::evaluate(unsigned)
{
    if (!WH3l_isOK()) return -BIGNUMBER;

    Lep[0].SetCoordinates(Lepton_pt->At(0),Lepton_eta->At(0),Lepton_phi->At(0),0.);
    Lep[1].SetCoordinates(Lepton_pt->At(1),Lepton_eta->At(1),Lepton_phi->At(1),0.);
    Lep[2].SetCoordinates(Lepton_pt->At(2),Lepton_eta->At(2),Lepton_phi->At(2),0.);
    MET.SetCoordinates(*PuppiMET_pt->Get(),0,*PuppiMET_phi->Get(),0);

    return getValue(variable);
}

inline float 
WH3l_patch_BDT1718::bVeto(FloatArrayReader* Jet_btagDeepB, int CleanJet_jetIdx)
{
    //WH3l_patch_BDT1718::bVeto(float* Jet_btagDeepB, int CleanJet_jetIdx){
    if (CleanJet_jetIdx >=0)
        return Jet_btagDeepB->At(CleanJet_jetIdx);
    else
        return -2;
}

double WH3l_patch_BDT1718::get_mOSll(
         PtEtaPhiMVector const& iLep, int const& iLepPdgId,
         PtEtaPhiMVector const& jLep, int const& jLepPdgId)
{
    if (iLepPdgId * jLepPdgId < 0){
        return std::fabs((iLep+jLep).M());
    }else{
        return -WH3l_patch_BDT1718::BIGNUMBER;
    }
}

inline double WH3l_patch_BDT1718::get_ptOSll(
        PtEtaPhiMVector const& iLep, int const& iLepPdgId,
        PtEtaPhiMVector const& jLep, int const& jLepPdgId)
{
    if (iLepPdgId * jLepPdgId < 0){
        return std::fabs((iLep+jLep).Pt());
    }else{
        return -WH3l_patch_BDT1718::BIGNUMBER;
    }
}

inline double WH3l_patch_BDT1718::get_drOSll(
         PtEtaPhiMVector const& iLep, int const& iLepPdgId,
         PtEtaPhiMVector const& jLep, int const& jLepPdgId)
{
    if (iLepPdgId * jLepPdgId < 0){
        return std::fabs(ROOT::Math::VectorUtil::DeltaR(iLep, jLep));
    }else{
        return -WH3l_patch_BDT1718::BIGNUMBER;
    }
}

inline double WH3l_patch_BDT1718::get_ZVeto(
         std::vector<PtEtaPhiMVector> lep, std::vector<int > lepPdgId)
{
    float minmllDiffToZ = WH3l_patch_BDT1718::BIGNUMBER;
    if (lep.size() >= 3 && lep.size() == lepPdgId.size()){
        for (int iL = 0; iL < 2; iL++){
            for (int jL = iL+1; jL < 3; jL++){
                if (lepPdgId.at(iL) + lepPdgId.at(jL) == 0){
                    float mllDiffToZ = std::fabs((lep[iL]+lep[jL]).M()-WH3l_patch_BDT1718::Z_MASS);
                    if (mllDiffToZ < minmllDiffToZ){
                        minmllDiffToZ = mllDiffToZ;
                    }
                }
            }
        }
    }
    return minmllDiffToZ != WH3l_patch_BDT1718::BIGNUMBER ? minmllDiffToZ : -WH3l_patch_BDT1718::BIGNUMBER;
}

inline double WH3l_patch_BDT1718::get_ptlll(
         PtEtaPhiMVector const& iLep,
         PtEtaPhiMVector const& jLep,
         PtEtaPhiMVector const& kLep)
{
    return (iLep+jLep+kLep).Pt();
}

inline double WH3l_patch_BDT1718::get_mlll(
         PtEtaPhiMVector const& iLep,
         PtEtaPhiMVector const& jLep,
         PtEtaPhiMVector const& kLep)
{
    return (iLep+jLep+kLep).M();
}

inline double WH3l_patch_BDT1718::get_mtlmet(
         PtEtaPhiMVector const& lep,
         PtEtaPhiMVector const& met)
{
    return sqrt(2 * lep.Pt() * met.Pt() * (1. - cos(std::fabs(ROOT::Math::VectorUtil::DeltaPhi(lep, met)))));
}

inline double WH3l_patch_BDT1718::get_dphilmet(
         PtEtaPhiMVector const& lep,
         PtEtaPhiMVector const& met)
{
    return std::fabs(ROOT::Math::VectorUtil::DeltaPhi(lep, met));
}

inline double WH3l_patch_BDT1718::get_ptWWW(
         PtEtaPhiMVector const& iLep,
         PtEtaPhiMVector const& jLep,
         PtEtaPhiMVector const& kLep,
         PtEtaPhiMVector const& met)
{
    return (iLep+jLep+kLep+met).Pt();
}

inline double WH3l_patch_BDT1718::get_mtWWW(
         PtEtaPhiMVector const& iLep,
         PtEtaPhiMVector const& jLep,
         PtEtaPhiMVector const& kLep,
         PtEtaPhiMVector const& met)
{
    return sqrt( 2. * (iLep+jLep+kLep).Pt() * met.Pt() * ( 1. - cos(std::fabs(ROOT::Math::VectorUtil::DeltaPhi(iLep+jLep+kLep, met)))));
}

inline double WH3l_patch_BDT1718::get_dphilllmet(
         PtEtaPhiMVector const& iLep,
         PtEtaPhiMVector const& jLep,
         PtEtaPhiMVector const& kLep,
         PtEtaPhiMVector const& met)
{
    return  std::fabs(ROOT::Math::VectorUtil::DeltaPhi(iLep+jLep+kLep,met));
}

double
WH3l_patch_BDT1718::getValue(std::string variableName)
{
    if (variableName == "dphilllmet"){
        return get_dphilllmet(Lep[0], Lep[1], Lep[2], MET);
    }
    else if (variableName == "mOSll0"){
        return get_mOSll(Lep[0], Lepton_pdgId->At(0), Lep[1], Lepton_pdgId->At(1));
    }
    else if (variableName == "mOSll1"){
        return get_mOSll(Lep[0], Lepton_pdgId->At(0), Lep[2], Lepton_pdgId->At(2));
    }
    else if (variableName == "mOSllmin"){
        float minmOSll = std::min({ std::fabs(get_mOSll(Lep[0], Lepton_pdgId->At(0), Lep[1], Lepton_pdgId->At(1))),
                                    std::fabs(get_mOSll(Lep[0], Lepton_pdgId->At(0), Lep[2], Lepton_pdgId->At(2))), 
                                    std::fabs(get_mOSll(Lep[1], Lepton_pdgId->At(1), Lep[2], Lepton_pdgId->At(2)))});
        return minmOSll != BIGNUMBER ? minmOSll : -BIGNUMBER;
    }
    else if (variableName == "ptOSllmin"){
        float minptOSll = std::min({std::fabs(get_ptOSll(Lep[0], Lepton_pdgId->At(0), Lep[1], Lepton_pdgId->At(1))),
                                    std::fabs(get_ptOSll(Lep[0], Lepton_pdgId->At(0), Lep[2], Lepton_pdgId->At(2))), 
                                    std::fabs(get_ptOSll(Lep[1], Lepton_pdgId->At(1), Lep[2], Lepton_pdgId->At(2)))});
        return minptOSll != BIGNUMBER ? minptOSll : -BIGNUMBER;
    }
    else if (variableName == "drOSllmin"){
        float mindrOSll = std::min({std::fabs(get_drOSll(Lep[0], Lepton_pdgId->At(0), Lep[1], Lepton_pdgId->At(1))),
                                    std::fabs(get_drOSll(Lep[0], Lepton_pdgId->At(0), Lep[2], Lepton_pdgId->At(2))),
                                    std::fabs(get_drOSll(Lep[1], Lepton_pdgId->At(1), Lep[2], Lepton_pdgId->At(2)))});
        return mindrOSll != BIGNUMBER ? mindrOSll : -BIGNUMBER;
    }
    else if (variableName == "ZVeto"){
        return get_ZVeto({Lep[0], Lep[1], Lep[2]}, {Lepton_pdgId->At(0), Lepton_pdgId->At(1), Lepton_pdgId->At(2)});
    }
    else if (variableName == "ptlll"){
        return get_ptlll(Lep[0], Lep[1], Lep[2]);
    }
    else if (variableName == "mtlmet0"){
        return get_mtlmet(Lep[0], MET);
    }
    else if (variableName == "mtlmet1"){
        return get_mtlmet(Lep[1], MET);
    }
    else if (variableName == "mtlmet2"){
        return get_mtlmet(Lep[2], MET);
    }
    else if (variableName == "dphilmet0"){
        return get_dphilmet(Lep[0], MET);
    }
    else if (variableName == "dphilmet1"){
        return get_dphilmet(Lep[1], MET);
    }
    else if (variableName == "dphilmet2"){
        return get_dphilmet(Lep[2], MET);
    }
    else if (variableName == "mlll"){
        return get_mlll(Lep[0], Lep[1], Lep[2]);
    }
    else if (variableName == "ptWWW"){
        return get_ptWWW(Lep[0], Lep[1], Lep[2], MET);
    }
    else if (variableName == "mtWWW"){
        return get_mtWWW(Lep[0], Lep[1], Lep[2], MET);
    }
    else if (variableName == "BDT_OSSF2016"){
        return get_BDTGOSSF2016();
    }
    else if (variableName == "BDT_OSSF1718"){
        return get_BDTGOSSF1718();
    }
    else if (variableName == "BDT_SSSF2016"){
        return get_BDTGSSSF2016();
    }
    else if (variableName == "BDT_SSSF1718"){
        return get_BDTGSSSF1718();
    }
    else {
        std::cout << "Invalid variable!!!" << std::endl;
        return -BIGNUMBER;
    }
}

void
WH3l_patch_BDT1718::initMvaReader_BDTGSSSF(std::unique_ptr<TMVA::Reader>& reader, const char *mvaMethodTag, const char* mvaResultXML)
{
    reader->AddVariable("WH3l_dphilllmet",                                 &loc_WH3l_dphilllmet);
    reader->AddVariable("MinIf$(WH3l_mOSll[],WH3l_mOSll[Iteration$]>0)",   &loc_WH3l_mOSll_min);
    reader->AddVariable("MinIf$(WH3l_ptOSll[],WH3l_ptOSll[Iteration$]>0)", &loc_WH3l_ptOSll_min);
    reader->AddVariable("MinIf$(WH3l_drOSll[],WH3l_drOSll[Iteration$]>0)", &loc_WH3l_drOSll_min);
    reader->AddVariable("Alt$(Jet_btagDeepB[CleanJet_jetIdx[0]],-2)",      &loc_Jet_btagDeepB_0);
    reader->AddVariable("Alt$(Jet_btagDeepB[CleanJet_jetIdx[1]],-2)",      &loc_Jet_btagDeepB_1);
    reader->AddVariable("WH3l_dphilmet[0]",                                &loc_WH3l_dphilmet_0);
    reader->AddVariable("WH3l_dphilmet[1]",                                &loc_WH3l_dphilmet_1);
    reader->AddVariable("WH3l_dphilmet[2]",                                &loc_WH3l_dphilmet_2);
    reader->AddVariable("PuppiMET_pt",                                     &loc_PuppiMET_pt);
    reader->AddVariable("Alt$(Lepton_pt[0],0)",                            &loc_Lepton_pt_0);
    reader->AddVariable("Alt$(Lepton_pt[1],0)",                            &loc_Lepton_pt_1);
    reader->AddVariable("Alt$(Lepton_pt[2],0)",                            &loc_Lepton_pt_2);
    reader->AddVariable("WH3l_mOSll[0]",&loc_WH3l_mOSll_0);
    reader->AddVariable("WH3l_mOSll[1]",&loc_WH3l_mOSll_1);

    reader->BookMVA(mvaMethodTag, mvaResultXML);
}

void WH3l_patch_BDT1718::updateMvaVariable_BDTGSSSF()
{
    loc_WH3l_dphilllmet = getValue("dphilllmet") ;
    loc_WH3l_mOSll_min  = getValue("mOSllmin")   ;
    loc_WH3l_ptOSll_min = getValue("ptOSllmin")  ;
    loc_WH3l_drOSll_min = getValue("drOSllmin")  ;
    loc_Jet_btagDeepB_0 = bVeto(Jet_btagDeepB, CleanJet_jetIdx->At(0));
    loc_Jet_btagDeepB_1 = bVeto(Jet_btagDeepB, CleanJet_jetIdx->At(1));
    loc_WH3l_dphilmet_0 = getValue("dphilmet0")  ;
    loc_WH3l_dphilmet_1 = getValue("dphilmet1")  ;
    loc_WH3l_dphilmet_2 = getValue("dphilmet2")  ;
    loc_PuppiMET_pt     = *PuppiMET_pt->Get();
    loc_Lepton_pt_0     = Lepton_pt->At(0);
    loc_Lepton_pt_1     = Lepton_pt->At(1);
    loc_Lepton_pt_2     = Lepton_pt->At(2);
    loc_WH3l_mOSll_0    = getValue("mOSll0");
    loc_WH3l_mOSll_1    = getValue("mOSll1");
}

void
WH3l_patch_BDT1718::initMvaReader_BDTGOSSF(std::unique_ptr<TMVA::Reader>& reader, const char *mvaMethodTag, const char* mvaResultXML)
{
    reader->AddVariable("WH3l_dphilllmet",                                 & loc_WH3l_dphilllmet);
    reader->AddVariable("MinIf$(WH3l_mOSll[],WH3l_mOSll[Iteration$]>0)",   & loc_WH3l_mOSll_min);
    reader->AddVariable("MinIf$(WH3l_ptOSll[],WH3l_ptOSll[Iteration$]>0)", & loc_WH3l_ptOSll_min);
    reader->AddVariable("MinIf$(WH3l_drOSll[],WH3l_drOSll[Iteration$]>0)", & loc_WH3l_drOSll_min);
    reader->AddVariable("WH3l_ZVeto",                                      & loc_WH3l_ZVeto);
    reader->AddVariable("WH3l_ptlll",                                      & loc_WH3l_ptlll);
    reader->AddVariable("WH3l_mtlmet[0]",                                  & loc_WH3l_mtlmet_0);
    reader->AddVariable("WH3l_mtlmet[1]",                                  & loc_WH3l_mtlmet_1);
    reader->AddVariable("WH3l_mtlmet[2]",                                  & loc_WH3l_mtlmet_2);
    reader->AddVariable("WH3l_dphilmet[0]",                                & loc_WH3l_dphilmet_0);
    reader->AddVariable("WH3l_dphilmet[1]",                                & loc_WH3l_dphilmet_1);
    reader->AddVariable("WH3l_dphilmet[2]",                                & loc_WH3l_dphilmet_2);
    reader->AddVariable("WH3l_ptWWW",                                      & loc_WH3l_ptWWW);
    reader->AddVariable("WH3l_mtWWW",                                      & loc_WH3l_mtWWW);
    reader->AddVariable("WH3l_mlll",                                       & loc_WH3l_mlll);
    reader->AddVariable("PuppiMET_pt",                                     & loc_PuppiMET_pt);
    reader->AddVariable("Alt$(Lepton_pt[0],0)",                            & loc_Lepton_pt_0);
    reader->AddVariable("Alt$(Lepton_pt[1],0)",                            & loc_Lepton_pt_1);
    reader->AddVariable("Alt$(Lepton_pt[2],0)",                            & loc_Lepton_pt_2);

    reader->BookMVA(mvaMethodTag, mvaResultXML);
}

void WH3l_patch_BDT1718::updateMvaVariable_BDTGOSSF()
{
    loc_WH3l_dphilllmet = getValue("dphilllmet") ;
    loc_WH3l_mOSll_min  = getValue("mOSllmin")   ;
    loc_WH3l_ptOSll_min = getValue("ptOSllmin")  ;
    loc_WH3l_drOSll_min = getValue("drOSllmin")  ;
    loc_WH3l_ZVeto      = getValue("ZVeto")      ;
    loc_WH3l_ptlll      = getValue("ptlll")      ;
    loc_WH3l_mtlmet_0   = getValue("mtlmet0")    ;
    loc_WH3l_mtlmet_1   = getValue("mtlmet1")    ;
    loc_WH3l_mtlmet_2   = getValue("mtlmet2")    ;
    loc_WH3l_dphilmet_0 = getValue("dphilmet0")  ;
    loc_WH3l_dphilmet_1 = getValue("dphilmet1")  ;
    loc_WH3l_dphilmet_2 = getValue("dphilmet2")  ;
    loc_WH3l_ptWWW      = getValue("ptWWW")      ;
    loc_WH3l_mtWWW      = getValue("mtWWW")      ;
    loc_WH3l_mlll       = getValue("mlll")       ;
    loc_PuppiMET_pt     = *PuppiMET_pt->Get();
    loc_Lepton_pt_0     = Lepton_pt->At(0);
    loc_Lepton_pt_1     = Lepton_pt->At(1);
    loc_Lepton_pt_2     = Lepton_pt->At(2);
}

double
WH3l_patch_BDT1718::get_BDTGOSSF2016()
{
    updateMvaVariable_BDTGOSSF();
    return mvaReader_BDTGOSSF2016->EvaluateMVA("BDTG4F07");
}

double
WH3l_patch_BDT1718::get_BDTGOSSF1718()
{
    updateMvaVariable_BDTGOSSF();
    return mvaReader_BDTGOSSF1718->EvaluateMVA("BDTG4F07D31C2");
}

double
WH3l_patch_BDT1718::get_BDTGSSSF2016()
{
    updateMvaVariable_BDTGSSSF();
    return mvaReader_BDTGSSSF2016->EvaluateMVA("BDTGC10D4C10S1");
}
double
WH3l_patch_BDT1718::get_BDTGSSSF1718()
{
    updateMvaVariable_BDTGSSSF();
    return mvaReader_BDTGSSSF1718->EvaluateMVA("BDTGC10D4C10S1");
}
