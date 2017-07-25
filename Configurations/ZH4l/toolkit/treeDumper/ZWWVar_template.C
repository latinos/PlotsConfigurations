#include <TMath.h>
#include <TLorentzVector.h>
#define ZMASS 91.1876
#define PI 3.14159265359
#define kDefault -9999

// Phi ranges in [PI, PI)

class ZWW{
  public:
    //! constructor
    ZWW();
    virtual ~ZWW(){};
    
    //! reset and check
    void reset();
    void isLepOk();
    void isJetOk();
    void isMETOk();
    void isAllOk();

    //! setter
    void setLepton(std::vector<float> pt,
                   std::vector<float> eta,
                   std::vector<float> phi,
                   std::vector<float> flavor,
                   std::vector<float> charge,
                   std::vector<float> id);

    void setJet(std::vector<float> pt,
                std::vector<float> eta,
                std::vector<float> phi,
                std::vector<float> mass,
                std::vector<float> tag);

    void setMET(float met, float phi);

    //! functions
    bool preSelection();
    bool selection();

  private:
    //! variables
        // constants and enum

        // For checker
    bool isAllOk_;
    bool isLepOk_;
    bool isJetOk_;
    bool isMETOk_;

        // For setter
    std::vector<float> lepPt_;
    std::vector<float> lepEta_;
    std::vector<float> lepPhi_;
    std::vector<float> lepFl_;
    std::vector<float> lepCh_;
    std::vector<float> lepId_;
    std::vector<float> jetPt_;
    std::vector<float> jetEta_;
    std::vector<float> jetPhi_;
    std::vector<float> jetM_;
    std::vector<float> jetTag_;
    float met_;
    float metPhi_;

        // Buffer and buffer setter
    std::vector<TLorentzVector> lepVec_;
    std::vector<TLorentzVector> jetVec_;
    void setZ0LepIdx_();
    int z0LepIdx[2];
    TLorentzVector metVec_;

        // Output for public member fcns
    bool outPreSelection_;
};

//! constructor
ZWW::ZWW(){
    reset();
}

    // Reset all private to false/kDefault/null vector/etc.
void ZWW::reset(){
        // For checker
    isAllOk_ = false;
    isLepOk_ = false;
    isJetOk_ = false;
    isMETOk_ = false;

        // For setter
    lepPt_. clear();
    lepEta_.clear();
    lepPhi_.clear();
    lepFl_. clear();
    lepCh_. clear();
    lepId_. clear();
    jetPt_. clear();
    jetEta_.clear();
    jetPhi_.clear();
    jetM_.  clear();
    jetTag_.clear();
    met_    = kDefault;
    metPhi_ = kDefault;

        // Buffer
    lepVec_.clear();
    jetVec_.clear();
    TLorentzVector metVec_.SetXYZM(0.,0.,0.,0.);
    z0LepIdx[0] = kDefault;
    z0LepIdx[1] = kDefault;

        // All other variables
    outPreSelection_    = false;

}

void ZWW::isLepOk(){
    // check the validity of input
}

void ZWW::isJetOk(){
    // check the validity of input
}

void ZWW::isMETOk(){
    if (met_ > 0 && fabs(metPhi_) <PI ){
        isMETOk_ = true;
    }else{
        isMETOk_ = false;
    }
}

void ZWW::isAllOk(){
    isAllOk_ = isLepOk_*isJetOk_*isMETOk_;
}

void ZWW::setLepton(std::vector<float> pt,
                    std::vector<float> eta,
                    std::vector<float> phi,
                    std::vector<float> flavor,
                    std::vector<float> charge,
                    std::vector<float> id){
    lepPt_ = pt;
    lepEta_= eta;
    lepPhi_= phi;
    lepFl_ = flavor;
    lepCh_ = charge;
    lepId_ = id;
    isLepOk();

    if (isLepOk_){
        TLorentzVector buffVec;
        for(int iVec=0; iVec < 4; iVec++){
            buffVec.SetPtEtaPhiM(lepPt_     [iVec],
                                 lepEta_    [iVec],
                                 lepPhi_    [iVec],
                                 0);
            lepVec_.push_back(buffVec);
        }
        setZ0LepIdx_();
    }
}

void WWZ::setJet(std::vector<float> pt,
                 std::vector<float> eta,
                 std::vector<float> phi,
                 std::vector<float> mass,
                 std::vector<float> tag);
{
    jetPt_ = pt;
    jetEta_= eta;
    jetPhi_= phi;
    jetM_  = mass;
    jetTag_= tag;
    isJetOk();

    if (isJetOk_){
        // build buffer here!
    }
}

void WWZ::setMET(float met, float phi){
    met_    = met;
    metPhi_ = phi;
    isMETOk();
}

//! buffer setter
void WWZ::setZ0LepIdx_(){
    z0LepIdx[0] = kDefault;
    z0LepIdx[1] = kDefault;
    if ( isLepOk_ ){
        float buffBias;
        float bestBias = 9999;
        for(int iL=0; iL < 4; iL++){
            for(int jL=iL+1; jL < 4; jL++){
                if (lepCh_[iL] + lepCh_[jL] != 0 )          continue;
                if (fabs(lepFl_[iL]) != fabs(lepFl_[jL]) )  continue;
                buffBias = (lepVec_[iL]+lepVec_[jL]).Mag();
                if ( fabs(buff - ZMASS) < bestBias){
                    bestBias = buffBias;
                    z0LepIdx[0] = iL;
                    z0LepIdx[1] = jL;
                }
            }
        }
    }
}


//! functions

bool WWZ::preSelection(){
    outPreSelection_ = false;
    if ( isAllOk_ ){
        
        if ( lepCh_[0]+lepCh_[1]+lepCh_[2]+lepCh_[3]  == 0 
            && lepId_[4] > 0.5
            && lepPt_[0] > 25
            && lepPt_[1] > 15
            && lepPt_[2] > 10 
            && lepPt_[3] > 10 
            && lepPt_[4] > 10 ){
            outPreSelection_ = true;
        }

        return outPreSelection_;
    }else{
        return false;
    }
}

