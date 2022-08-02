#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>
#include "TH2F.h"
#include "TFile.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#ifndef kFactor2DRecUnc_HH
#define kFactor2DRecUnc_HH

class kFactor2DRecUnc : public multidraw::TTreeFunction {
public:
  kFactor2DRecUnc(TString file_name, TString tgraph_name); 

  char const* getName() const override { return "kFactor2DRecUnc"; }
  TTreeFunction* clone() const override { 
      return new kFactor2DRecUnc(n_file, n_graph); 
  }

  unsigned getNdata() override { return 4; } // nominal, stat_up, stat_do, jetsel
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;
  void beginEvent(long long) override;

  ROOT::Math::PtEtaPhiMVector getRecoilLVector();

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  bool decendsFromX(int girl, int granny);

  TString n_file;
  TString n_graph;

  ROOT::Math::PtEtaPhiMVector recoil;

  UIntValueReader* nGenPart;
  FloatArrayReader* GenPart_pt;
  FloatArrayReader* GenPart_eta;
  FloatArrayReader* GenPart_phi;
  FloatArrayReader* GenPart_mass;
  IntArrayReader* GenPart_pdgId;
  IntArrayReader* GenPart_genPartIdxMother;
  IntArrayReader* GenPart_statusFlags;

  TH2F* Wpt_map_nom;
  TH2F* Wpt_map_stat_up;
  TH2F* Wpt_map_stat_do;
  TH2F* Wpt_map_jetsel;
  std::array<float,4> outputValues;

  float Xmax;
  float Xmin;
  float Ymax;
  float Ymin;
};

kFactor2DRecUnc::kFactor2DRecUnc(TString file_name, TString tgraph_name) :
    n_file(file_name),
    n_graph(tgraph_name),
    TTreeFunction()
{
    std::cout << "kFactor2DRecUnc constructor" << std::endl;
    TFile* src_file = new TFile(TString(std::getenv("CMSSW_BASE"))+"/src/" + n_file);
    Wpt_map_nom     = (TH2F*)src_file->Get(n_graph+"_nom");
    Wpt_map_stat_up = (TH2F*)src_file->Get(n_graph+"_stat_up");
    Wpt_map_stat_do = (TH2F*)src_file->Get(n_graph+"_stat_do");
    Wpt_map_jetsel  = (TH2F*)src_file->Get(n_graph+"_jetsel");
    Wpt_map_nom     ->SetDirectory(0);
    Wpt_map_stat_up ->SetDirectory(0);
    Wpt_map_stat_do ->SetDirectory(0);
    Wpt_map_jetsel  ->SetDirectory(0);
    src_file->Close();

    Xmin = Wpt_map_nom->GetXaxis()->GetXmin();
    Xmax = Wpt_map_nom->GetXaxis()->GetXmax() - 0.001;
    Ymin = Wpt_map_nom->GetYaxis()->GetXmin();
    Ymax = Wpt_map_nom->GetYaxis()->GetXmax() - 0.001;

}

bool
kFactor2DRecUnc::decendsFromX(int girl, int granny)
{
    int mum = GenPart_genPartIdxMother->At(girl);
    //cout << " -- decendsFromX: girl=" << girl << ", mum= " << mum << ", granny=" << granny << "mum==-1: "<< (mum == -1) << endl;
    if (mum == granny) {
        //cout << " mum == granny" << endl;
        return true;
    } else if (mum == -1) {
        //cout << " mum == -1" << endl;
        return false;
    } else {
        decendsFromX(mum, granny);
    }
    
}

//double
//kFactor2DRecUnc::evaluate(unsigned)
void
kFactor2DRecUnc::beginEvent(long long _iEntry)
{
    //cout << "---------- New Event ----------" << endl;  
    unsigned nGen{*nGenPart->Get()};

    // Find Hard proc mums: all gen parts with mum index 0
    // Find Gen W and gen Lep, Neut
    //cout << "Start filling HardProcMums" << endl; 
    float lep_pt{0.}, lep_eta{0.}, lep_phi{0.};
    float nu_pt{0.}, nu_eta{0.}, nu_phi{0.};
    float W_pt{0.};
    bool hasW = false;
    int Widx = -1;
    int Lidx = -1;
    int Nidx = -1;
    std::vector<int> HardProcMums;
    for (unsigned iGen{0}; iGen != nGen; ++iGen){
        int mumIdx = GenPart_genPartIdxMother->At(iGen);
        int pdgId = std::abs(GenPart_pdgId->At(iGen));
        int sFlag = GenPart_statusFlags->At(iGen);
        int idx = (int) iGen;

        if (mumIdx == 0) {
            //cout << " -- Fill: " << idx << endl;
            HardProcMums.push_back(idx);
        } 

        // W

        // Look for lepton, sFlag == 8449 => isLastCopy & fromHardProcess & isPrompt and nothing else
        if (((pdgId == 11) || (pdgId == 13) || (pdgId == 15)) && (sFlag == 8449)){
            lep_pt  = GenPart_pt->At(iGen);
            lep_eta = GenPart_eta->At(iGen);
            lep_phi = GenPart_phi->At(iGen);
            Lidx = (int) iGen;
            //cout << "-- Found lepton: pdgId=" << pdgId << ", statusFlags= " << sFlag << endl;
        }
        // Look for neutrino, sFlag == 8449 => isLastCopy & fromHardProcess & isPrompt and nothing else
        if (((pdgId == 12) || (pdgId == 14) || (pdgId == 16)) && (sFlag == 8449)){
            nu_pt  = GenPart_pt->At(iGen);
            nu_eta = GenPart_eta->At(iGen);
            nu_phi = GenPart_phi->At(iGen);
            Nidx = (int) iGen;
            //cout << "-- Found neutrino: pdgId=" << pdgId << ", statusFlags= " << sFlag << endl;
        }
        // Look for W directly 1<<13 => isLastCopy
        if ((pdgId == 24) && (sFlag & 1<<13)){
            W_pt = GenPart_pt->At(iGen);
            hasW = true;
            Widx = (int) iGen;
            //cout << "-- Found W: pdgId=" << pdgId << ", statusFlags= " << sFlag << endl;
        }

        
    }
    //cout << "Done filling, size: " << HardProcMums.size() << ", has W: " << hasW << endl;

    // Find Hard proc parts: all gen parts decending from Hard proc mums with isLastCopy and fromHardProces
    std::vector<int> HardProcParts;

    for (unsigned iGen{0}; iGen != nGen; ++iGen){
        int pdgId = std::abs(GenPart_pdgId->At(iGen));
        int sFlag = GenPart_statusFlags->At(iGen);
        int mum = GenPart_genPartIdxMother->At(iGen);

        // Test output
        //cout << " - Part " << iGen << ", PdgId " << pdgId << ", Status " << sFlag << ", Mum " << mum; 

        // HARD PROC

        // isLastCopy && fromHardProces
        if ((sFlag & 1<<13) && (sFlag & 1<<8)) {
            int girl = (int) iGen;

            // Skip W Decendants
            if (hasW && decendsFromX(girl, Widx)) {
                //cout << "" << endl;
                continue;
            }

            // Is hard proc mum?
            if (mum == 0) {
                HardProcParts.push_back((int) iGen);
                //cout << ", Decends from HP mum 0";  
            } else {
                // Decends from hard proc mum?
                for (unsigned iHP=0; iHP < HardProcMums.size(); iHP++) {
                    //cout << " -- HardProc Mum: "<< iHP << ", " << HardProcMums[iHP] << ", " << HardProcMums.size() << endl;
                    if (decendsFromX(girl, HardProcMums[iHP])) {
                       HardProcParts.push_back((int) iGen);
                       //cout << ", Decends from HP mum " << HardProcMums[iHP]; 
                       break; 
                    }
                }
            }
        }
        //cout << "" << endl;
    }
    //cout << "Loop finished" << endl;

    //cout << "Sum HP" << endl;
    // Sum all hard proc parts
    ROOT::Math::PtEtaPhiMVector hard_proc;
    for (unsigned iHP=0; iHP < HardProcParts.size(); iHP++) {
        //cout << " - HP: " << iHP << ", idx=" << HardProcParts[iHP] << endl;
        ROOT::Math::PtEtaPhiMVector part {
            GenPart_pt->At(HardProcParts[iHP]),
            GenPart_eta->At(HardProcParts[iHP]),
            GenPart_phi->At(HardProcParts[iHP]),
            GenPart_mass->At(HardProcParts[iHP])
        };
        hard_proc += part;
    }
    //cout << " - HP: mass=" << hard_proc.M() << ", pt=" << hard_proc.Pt()  << endl;
    
    //cout << "Get W vec, idx=" << Widx  << endl;
    // Get W 4 vec
    ROOT::Math::PtEtaPhiMVector w;
    if (hasW) {
        ROOT::Math::PtEtaPhiMVector w_tmp{
            GenPart_pt->At(Widx),
            GenPart_eta->At(Widx),
            GenPart_phi->At(Widx),
            GenPart_mass->At(Widx)
        };
        //cout << " W props: pt=" << GenPart_pt->At(Widx) << endl;
        w = w_tmp;
    } else {
        ROOT::Math::PtEtaPhiMVector lep{
          lep_pt, lep_eta, lep_phi, 0 // at these energies everything is massless...
        };
        ROOT::Math::PtEtaPhiMVector nu{
          nu_pt, nu_eta, nu_phi, 0
        };
        w = lep + nu;
    }
    //cout << " - W: mass=" << w.M() << ", pt=" << w.Pt() << ", x-check " << W_pt  << endl;

    //cout << "Calc recoil" << endl;
    // Finally get recoil
    recoil = hard_proc - w;
    //cout << " - recoil: mass=" << recoil.M() << ", pt=" << recoil.Pt()  << endl;

    float R_m = recoil.M();

    // Correct edges
    if (R_m > Xmax) R_m = Xmax;
    else if (R_m < Xmin) R_m = Xmin;
    //if (drjj > 4.9) drjj = 4.9;
    if (W_pt < Ymin) W_pt = Ymin;
    else if (W_pt > Ymax) W_pt = Ymax;


    // Get values from the graphs
    std::array<float,4> output { 1.,1.,1.,1.};
    output[0] = Wpt_map_nom    ->GetBinContent(Wpt_map_nom    ->FindBin(R_m, W_pt)); 
    output[1] = Wpt_map_stat_up->GetBinContent(Wpt_map_stat_up->FindBin(R_m, W_pt)); 
    output[2] = Wpt_map_stat_do->GetBinContent(Wpt_map_stat_do->FindBin(R_m, W_pt)); 
    output[3] = Wpt_map_jetsel ->GetBinContent(Wpt_map_jetsel ->FindBin(R_m, W_pt)); 

    //cout << "Rec mass = " << R_m << ", W pt = " << W_pt << endl;
    //cout << "SF: nom = " << output[0] << ", stat up = " << output[1] << ", stat do = " << output[2] << ", jet sel = " << output[3] << endl;
    if (output[0] == 0.) {
        cout << "Rec mass = " << R_m << ", W pt = " << W_pt << endl;
        cout << "SF: nom = " << output[0] << ", stat up = " << output[1] << ", stat do = " << output[2] << ", jet sel = " << output[3] << endl;
    }

    outputValues = output;
}

double
kFactor2DRecUnc::evaluate(unsigned idx)
{
  return outputValues[idx];
}

void
kFactor2DRecUnc::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nGenPart, "nGenPart");
  _library.bindBranch(GenPart_pt, "GenPart_pt");
  _library.bindBranch(GenPart_eta, "GenPart_eta");
  _library.bindBranch(GenPart_phi, "GenPart_phi");
  _library.bindBranch(GenPart_mass, "GenPart_mass");
  _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
  _library.bindBranch(GenPart_genPartIdxMother, "GenPart_genPartIdxMother");
  _library.bindBranch(GenPart_statusFlags, "GenPart_statusFlags");
}
#endif
