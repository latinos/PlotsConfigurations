import os
import re
import sys
import numpy as np
import scipy.integrate as integrate
from scipy.stats.distributions import chi2
import json
import utils
from utils import Ellipse, CHANNEL_ID_MAP, REGION_ID_MAP
import uproot
import ROOT
mass_point = sys.argv[1]
MA = str(re.findall(r"\d+", mass_point)[0])
MH = str(re.findall(r"\d+", mass_point)[1])
print("\n\nmass point : ({},{})".format(MA,MH))

YEARS = ["2018", "2017", "2016noHIPM", "2016HIPM"]


LUMI_DICT = {
    "2018"      : 59.74,
    "2017"      : 41.53,
    "2016noHIPM": 16.81,
    "2016HIPM"  : 19.52,

}

EOS_PATH = {
    "2018":"Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9",
    "2017":"Summer20UL17_106x_nAODv9_Full2017v9/MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9",
    "2016noHIPM":"Summer20UL16_106x_nAODv9_noHIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9",
    "2016HIPM":"Summer20UL16_106x_nAODv9_HIPM_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9",
}

WP="M"

BTAGWP_DICT={
    "2018"      : 0.2783,
    "2017"      : 0.3040,
    "2016noHIPM": 0.2489,
    "2016HIPM"  : 0.2598,
}

BTAGSF_FORMULAS = {
    "2018":{
        "lf": (lambda pt: 1.46818+(-0.00104385*pt)+(8.01998e-07*pt*pt)+(-2.02643/pt)),
        "hf": (lambda pt: 0.764066+(0.00814871*np.log(pt+19.0)*np.log(pt+18.0)*(3.0-(0.399988*np.log(pt+18.0))))),
        },
    "2017":{
        "lf": (lambda pt: 1.35875+(-0.000916722*pt)+(6.33425e-07*pt*pt)+(-2.07301/pt)),
        "hf": (lambda pt: 0.921635+(0.000860807*np.log(pt+19.0)*np.log(pt+18.0)*(3-(0.139373*np.log(pt+18))))), 
        },
    "2016HIPM":{
        "lf": (lambda pt: 1.33806+(0.000233452*pt)+(9.35591e-09*pt*pt)+(2.43996/pt)), 
        "hf": (lambda pt: 0.999371*(1.0+(-0.000161133*pt))/(1.0+(-7.92031e-05*pt))),
        },
    "2016noHIPM":{
        "lf": (lambda pt: 0.452033+(0.000974984*pt)+(-4.12462e-07*pt*pt)+(9.68473/pt)),
        "hf": (lambda pt: 0.927444+(0.00257499*np.log(pt+19.0)*np.log(pt+18.0)*(3.0-(0.459693*np.log(pt+18.0))))),
        },
    }

def _compute_btagsf(year,jf,pt):
    flav = "hf" if jf in [4,5] else "lf"
    return BTAGSF_FORMULAS[year][flav](pt)


print("reading muon tth mva sf histograms...")
#get muon tth mva sf histogram
h_SF_mu = {}
for year in YEARS:
    mu_rootfile = ROOT.TFile(os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/muon_ttHMVA_SF/"+year+"/NUM_TightHWW_ISO_tthmva_DEN_TightHWW_ISO_eta_pt.root")
    h_SF_mu[year] = mu_rootfile.Get("NUM_TightHWW_ISO_tthmva_DEN_TightHWW_ISO_eta_pt").Clone()
    h_SF_mu[year].SetDirectory(0)
    mu_rootfile.Close()

print("making electron tth mva sf histograms...")
# Create electron tth mva sf histogram
xbins = np.array([-2.5, -2.0, -1.566, -1.442, -0.8, 0.0, 0.8, 1.442, 1.566, 2.0, 2.5])
ybins = np.array([10.0, 15.0, 20.0, 35.0, 50.0, 90.0, 150.0, 500.0])
h_SF_ele = {}
for year in YEARS:
    h_SF_ele[year] = ROOT.TH2D("h_SF_ele_"+year, "h_SF_ele_"+year, len(xbins) - 1, xbins, len(ybins) - 1, ybins)
    h_SF_ele[year].SetDirectory(0)
    # scrape values from electron txt file
    ele_sf_file_path = os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/electron_ttHMVA_UL_SF/"+year+"/egammaEffi.txt"
    lines = np.zeros((70,14))
    with open(ele_sf_file_path, 'r') as ele_sf_file:
        i = 0
        for line in ele_sf_file:
            j = 0
            parts = line.strip().split()
            for part in parts:
                num = float(part)
                lines[i][j] = num
                j += 1
            i += 1
    #fill 2D histogram with sf values
    for iBinX in range (1,h_SF_ele[year].GetNbinsX()+1):
        for iBinY in range (1,h_SF_ele[year].GetNbinsY()+1):
            eta = h_SF_ele[year].GetXaxis().GetBinCenter(iBinX)
            pt =  h_SF_ele[year].GetYaxis().GetBinCenter(iBinY)
            
            for i in range (70):
                if eta >= lines[i][0] and eta <= lines[i][1] and pt >= lines[i][2] and pt <= lines[i][3]:
                    data = lines[i][4]
                    mc = lines[i][7]
                    if mc != 0:
                        sf = data/mc
                    else: 
                        sf = 1
                    h_SF_ele[year].SetBinContent(iBinX, iBinY, sf)

print("reading btag efficiencies...")
btagEff = {}
for year in YEARS:
    btagEff_tmp = np.zeros((135,6))
    with open(year+"_ttZ_btagEff_deepjet_M_ptetabin.txt", 'r') as btagEff_file:
        i = 0
        for line in btagEff_file:
            parts = line.strip().split()
            btagEff_tmp[i][0] = int(parts[0])
            btagEff_tmp[i][1] = float(parts[1])
            btagEff_tmp[i][2] = float(parts[2])
            btagEff_tmp[i][3] = float(parts[3])
            btagEff_tmp[i][4] = float(parts[4])
            btagEff_tmp[i][5] = float(parts[5])
            i += 1
    btagEff[year] = btagEff_tmp
#print(btagEff)

LepWP_DICT = {
    "2018": {
        "lepsf":   "LepSF3l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight_HWWW",
        "lepcut": "LepCut3l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight_HWWW",
    },
    "2017": {
        "lepsf":   "LepSF3l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight_HWWW",
        "lepcut": "LepCut3l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight_HWWW",
    },
    "2016noHIPM": {
        "lepsf":   "LepSF3l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight80x",
        "lepcut": "LepCut3l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight80x",
    },
    "2016HIPM": {
        "lepsf":   "LepSF3l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight80x",
        "lepcut": "LepCut3l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight80x",
    },
}

#can put the whole thing in a for looping over masses? add masses to the json dictionary

ptz_cuts = {}
dm_cuts = {}
weights_cuts = {}
for year in YEARS:
    print("\n\nyear : {}".format(year))
    myfile = uproot.open("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/"+EOS_PATH[year]+"/nanoLatino_AToZHToLLTTbar_MA-"+MA+"_MH-"+MH+"__part0.root")
    Events = myfile["Events"]
    zpt = Events["ZH3l_pTZ"].array()
    dm__deprecated = Events["AZH_mA_minus_mH"].array() #defined only in SR

################# weights ############################
    XSWeight = Events["XSWeight"].array()
    SFweight3l = Events["SFweight3l"].array()
    
    LepSF = Events[LepWP_DICT[year]["lepsf"]].array()
    LepCut3l = Events[LepWP_DICT[year]["lepcut"]].array()

    Lepton_pt = Events["Lepton_pt"].array()
    Lepton_eta = Events["Lepton_eta"].array()
    Lepton_phi = Events["Lepton_phi"].array()
    Lepton_pdgId = Events["Lepton_pdgId"].array()
    nLepton = Events["nLepton"].array()
    Muon_mvaTTH = Events["Muon_mvaTTH"].array()
    Lepton_muonIdx = Events["Lepton_muonIdx"].array()
    Lepton_mvaTTH_UL = Events["Lepton_mvaTTH_UL"].array()
    tthmvasf = []
    lepcut = []
    print("computing tthmva sf...")
    for i in range(len(nLepton)) :
        lepcut_temp = 0
        if nLepton[i] >=3 :
            lepcut_temp = LepCut3l[i]           
            SF_vect = []
            for j in range(3):
                eta_temp, pt_temp = Lepton_eta[i][j], Lepton_pt[i][j]
                tempval = 0
                
                # Get electron SF
                if abs(Lepton_pdgId[i][j]) == 11:
                    lepcut_temp *= Lepton_mvaTTH_UL[i][j]>0.90
                    if ((abs(Lepton_eta[i][j]) <= 1.556) and (abs(Lepton_eta[i][j]) >= 1.4442)):
                        lepcut_temp = 0
                    eta_temp = min(max(eta_temp, -2.5), 2.49) #keep eta within (-2.5,2.49)
                    pt_temp = min(max(pt_temp, 15.0), 499.0) #keep pt within (15.0,499.0)
   
                    SF_vect.append(h_SF_ele[year].GetBinContent(h_SF_ele[year].FindBin(eta_temp, pt_temp)))

                # Get muon SF and uncertainty
                elif abs(Lepton_pdgId[i][j]) == 13:
                    lepcut_temp *= Muon_mvaTTH[i][Lepton_muonIdx[i][j]] > 0.82
                    eta_temp = min(max(eta_temp, -2.4), 2.39) #keep eta within (-2.4,2.39)
                    pt_temp = min(max(pt_temp, 10.1), 119.9) #keep pt within (10.1,119.9)

                    SF_vect.append(h_SF_mu[year].GetBinContent(h_SF_mu[year].FindBin(eta_temp, pt_temp)))

                else:
                    lepcut_temp = 0
                    SF_vect.append(0)

            SF = 1.0
            for sf in SF_vect:
                SF *= sf
            tthmvasf.append(SF)
            lepcut.append(lepcut_temp)

        else:
            lepcut.append(0)
            tthmvasf.append(0)

    LepCut = np.array(lepcut)
    ttHMVAULSF = np.array(tthmvasf)


    JetPUIDSF = Events["Jet_PUIDSF_loose"].array()
    JetID = Events["Jet_jetId"].array()
    Jet_JetID = (JetID >= 2)*(np.log(JetPUIDSF)) 
    Jet_PUIDSF = np.exp(Jet_JetID.sum())

    CleanJet_pt = Events["CleanJet_pt"].array()
    CleanJet_eta = Events["CleanJet_eta"].array()
    CleanJeteta = abs(CleanJet_eta)
    CleanJet_phi = Events["CleanJet_phi"].array()
    Jet_btagDeepFlavB = Events["Jet_btagDeepFlavB"].array()
    CleanJet_jetIdx = Events["CleanJet_jetIdx"].array()
    Jet_hadronFlavour = Events["Jet_hadronFlavour"].array()
    Jet_pt = Events["Jet_pt"].array()
    Jet_eta = Events["Jet_eta"].array()
    Jet_btagSF_deepjet_shape = Events["Jet_btagSF_deepjet_shape"].array()
   
    print("computing btag sf...")
    btag = []
    for i in range(len(CleanJet_pt)):
        btagperevent_Num = 1.0
        btagperevent_Den = 1.0
        for j in range(len(CleanJet_pt[i])):
            eta = CleanJet_eta[i][j]
            pt = CleanJet_pt[i][j]
            if (pt > 1000):
                pt = 999.999
            idx = CleanJet_jetIdx[i][j]
            disc = Jet_btagDeepFlavB[i][idx]
            jf = Jet_hadronFlavour[i][idx]
            eff = 0
            sf = 0

            if (pt > 30 and abs(eta) < 2.5):# and not eff == 1.0):
                for row in btagEff[year]:
                    if (int(row[0])==jf and pt > float(row[1]) and pt <= float(row[2]) and eta > float(row[3]) and eta <= float(row[4])):
                        eff = float(row[5])

                sf = _compute_btagsf(year,jf,pt)
                if (disc > BTAGWP_DICT[year]):
                    btagperevent_Num += np.log(sf * eff)
                    btagperevent_Den += np.log(     eff)
                else:
                    btagperevent_Num += np.log(1.0-(sf*eff))
                    btagperevent_Den += np.log(1.0-(   eff))

                if (sf == 0 or eff == 0): print(i,j,pt,eta,idx,disc,sf,eff)
        btagperevent = np.exp(btagperevent_Num) / np.exp(btagperevent_Den)
        btag.append(btagperevent)
    btagSF = np.array(btag)        

    SFweight = SFweight3l*LepSF*LepCut*Jet_PUIDSF*btagSF*ttHMVAULSF

    Lepton_promptgenmatched = Events["Lepton_promptgenmatched"].array()
    length = [len(x) for x in Lepton_promptgenmatched]
    PromptGenMatch3l = []
    for i in range(len(Lepton_promptgenmatched)):
        if length[i] >=3: 
            PromptGenMatch3l.append(Lepton_promptgenmatched[i][0]*Lepton_promptgenmatched[i][1]*Lepton_promptgenmatched[i][2])
        else:
            PromptGenMatch3l.append(0)

    PromptGenMatched3l = np.array(PromptGenMatch3l)

    METFilter_MC = Events["METFilter_MC"].array()

    weights = XSWeight*SFweight*PromptGenMatched3l*METFilter_MC
    
    if year == "2018":
        print("year : "+year+"...adding HEMveto sf...")
        hole_veto_lepton = []
        for i in range(len(Lepton_pt)):
            is_veto = False
            for j in range(len(Lepton_pt[i])):
                if ( ((Lepton_eta[i][j] >= -3.0) and (Lepton_eta[i][j] < -1.3)) and ((Lepton_phi[i][j] >= -1.57) and (Lepton_phi[i][j] < -0.87)) and (abs(Lepton_pdgId[i][j])==11)):
                    is_veto = True
                    break
            if is_veto:
                hole_veto_lepton.append(1)
            else:
                hole_veto_lepton.append(0)
        hole_veto_lepton = np.array(hole_veto_lepton)

        hole_veto_jet = []
        for i in range(len(CleanJet_pt)):
            is_veto = False
            for j in range(len(CleanJet_pt[i])):
                if ( ((CleanJet_eta[i][j] >= -3.0) and (CleanJet_eta[i][j] < -1.3)) and ((CleanJet_phi[i][j] >= -1.57) and (CleanJet_phi[i][j] < -0.87)) ):
                    is_veto = True
                    break
            if is_veto:
                hole_veto_jet.append(1)
            else:
                hole_veto_jet.append(0)
        hole_veto_jet = np.array(hole_veto_jet)
        
        HEMvetoSF = [(1.0-0.64844705699) if (hole_veto_lepton[i] != 0) or (hole_veto_jet[i] != 0) else 1.0 for i in range(len(Lepton_pt))]
        weights *= HEMvetoSF
    else:
        print("year : "+year+"...adding prefire weights...")
        Prefire = Events["PrefireWeight"].array()
        weights *= Prefire

########## cuts########################

########### supercut ####################
    GenPart_pdgId = Events["GenPart_pdgId"].array()
    genAReq = (GenPart_pdgId==36).sum()

    WH3l = Events["WH3l_mOSll"].array()
    WH3l_abs = abs(WH3l)
    WH3l_min = [min(x) if min(x)>12 else 0 for x in WH3l_abs]
    WH3l_min_array = np.array(WH3l_min)

    Lepton_pt = Events["Lepton_pt"].array()
    nLepton = Events["nLepton"].array()
    Lepton_pt0 = [Lepton_pt[i][0] if nLepton[i]>0 else 0 for i in range(len(Lepton_pt))]
    Lepton_pt0_array = np.array(Lepton_pt0)

    Lepton_pt1 = [Lepton_pt[i][1] if nLepton[i]>1 else 0 for i in range(len(Lepton_pt))]
    Lepton_pt1_array = np.array(Lepton_pt1)

    Lepton_pt2 = [Lepton_pt[i][2] if nLepton[i]>2 else 0 for i in range(len(Lepton_pt))]
    Lepton_pt2_array = np.array(Lepton_pt2)

    Lepton_pt3 = [Lepton_pt[i][3] if nLepton[i]>3 else 0 for i in range(len(Lepton_pt))]
    Lepton_pt3_array = np.array(Lepton_pt3)

    WH3l_chlll = Events["WH3l_chlll"].array()
    WH3l_chlll_abs = abs(WH3l_chlll)

    supercut = (WH3l_min_array>0) & (Lepton_pt0_array>25) & (Lepton_pt1_array>20) & (Lepton_pt2_array>15) & (Lepton_pt3_array<10) & (abs(WH3l_chlll)==1) & (genAReq != 0)#5538 out of 24969 events survive

    preselection = supercut
####################### SR cuts ################################################################

    Wmass = 80.4
    Zmass = 91.1876
    TopMassLeptonic_true = 168.7
    TopMassHadronic_true = 163
    sigmaleptonic = 26.64
    sigmahadronic = 37.73

    PuppiMET_pt = Events["PuppiMET_pt"].array()
    PuppiMET_phi = Events["PuppiMET_phi"].array()
    
    
    print("doing SR cuts...")
    deltam = []
    for i in range(len(Lepton_pt)):
        if (len(Lepton_pt[i]) < 3):
            dm_tmp = -9999.0
        else:
            xLepton = -1
            minmllDiffToZ = 9999.0
            for iL in range(2):
                for jL in range(1,3):
                    if (Lepton_pdgId[i][iL] + Lepton_pdgId[i][jL] == 0):
                        temp1 = ROOT.TLorentzVector()
                        temp2 = ROOT.TLorentzVector()
                        temp1.SetPtEtaPhiM(Lepton_pt[i][iL],Lepton_eta[i][iL],Lepton_phi[i][iL],0.0)
                        temp2.SetPtEtaPhiM(Lepton_pt[i][jL],Lepton_eta[i][jL],Lepton_phi[i][jL],0.0)
                        mllDiffToZ = abs((temp1+temp2).M()-91.1876)
                        if (mllDiffToZ < minmllDiffToZ):
                            xLepton = 3-iL-jL
                            minmllDiffToZ = mllDiffToZ
                            ZLepton1 = temp1
                            ZLepton2 = temp2

            if (xLepton == -1):
                dm_tmp=-9999.9
            else: 

                METpt = PuppiMET_pt[i]
                METphi = PuppiMET_phi[i]
                XLepton = ROOT.TLorentzVector()
                XLepton.SetPtEtaPhiM(Lepton_pt[i][xLepton],Lepton_eta[i][xLepton],Lepton_phi[i][xLepton], 0.0)
                MET = ROOT.TLorentzVector()
                MET.SetPtEtaPhiM(METpt,0,METphi,0)
                Zeta = 0.5* pow(Wmass, 2) + MET.Pt() *  XLepton.Pt() *(np.cos(np.abs(ROOT.Math.VectorUtil.DeltaPhi(XLepton,MET))))
                A = (pow(Zeta,2)* pow(XLepton.Pz(), 2) / pow(XLepton.Pt(), 4) - (pow(MET.Pt(), 2)*pow(XLepton.E(), 2) - pow(Zeta, 2)) / pow(XLepton.Pt(), 2))
                if (A > 0):
                    A = np.sqrt(A)
                else: 
                    A = 0 

                Pznu1 = ((Zeta * XLepton.Pz())/pow(XLepton.Pt(), 2)) + A
                Pznu2 = ((Zeta * XLepton.Pz())/pow(XLepton.Pt(), 2)) - A
                Enu1 = np.sqrt(pow(MET.Pt(), 2) + pow(Pznu1, 2))
                Enu2 = np.sqrt(pow(MET.Pt(), 2) + pow(Pznu2, 2))  
                AZH_Neutrino1 = ROOT.TLorentzVector() 
                AZH_Neutrino1.SetPxPyPzE(MET.Px(), MET.Py(), Pznu1, Enu1)
                AZH_Neutrino2 = ROOT.TLorentzVector()                                                                                        
                AZH_Neutrino2.SetPxPyPzE(MET.Px(), MET.Py(), Pznu2, Enu2) 

                AZH_bJet_4vecId = []
                CleanJet_4vecId = []   
                for j in range(len(CleanJet_pt[i])): 
                    if (CleanJet_pt[i][j] > 30 and abs(CleanJet_eta[i][j]) < 4.7): 
                        jj = ROOT.TLorentzVector()
                        jj.SetPtEtaPhiM(CleanJet_pt[i][j], CleanJet_eta[i][j], CleanJet_phi[i][j], 0)
                        CleanJet_4vecId.append(jj)
                        if (Jet_btagDeepFlavB[i][int(CleanJet_jetIdx[i][j])] > BTAGWP_DICT[year]): AZH_bJet_4vecId.append(jj)
            
                ChisqMin = 9999
                WJet1_best_onebjet = ROOT.TLorentzVector()
                WJet2_best_onebjet = ROOT.TLorentzVector()
                bJetHadronic_best_onebjet = ROOT.TLorentzVector()
                bJetLeptonic_best_onebjet = ROOT.TLorentzVector()
                AZH_Neutrino_best_onebjet = ROOT.TLorentzVector()
                Neutrinos = {AZH_Neutrino1, AZH_Neutrino2}
                if (len(AZH_bJet_4vecId)==1):
                    for Neutrino in Neutrinos:
                        ibJet2 = 0 
                        WJets = []
                        for ij in range(len(CleanJet_4vecId)): 
                            if((CleanJet_4vecId[ij] != AZH_bJet_4vecId[0]) and ((Jet_btagDeepFlavB[i][CleanJet_jetIdx[i][ij]])>(Jet_btagDeepFlavB[i][CleanJet_jetIdx[i][ibJet2]]))):
                                ibJet2 = ij
                        bJetPair = np.array([AZH_bJet_4vecId[0], CleanJet_4vecId[ibJet2]])
                        for iw in range(len(CleanJet_4vecId)):
                            if((CleanJet_4vecId[iw] != AZH_bJet_4vecId[0]) and (CleanJet_4vecId[iw] != CleanJet_4vecId[ibJet2])):
                                WJets.append(CleanJet_4vecId[iw])
                        for k in range(2):
                            for iWJet1 in range(len(WJets)):
                                for iWJet2 in range(1,len(WJets)):
                                    WJet1_onebjet = WJets[iWJet1]
                                    WJet2_onebjet = WJets[iWJet2]
                                    bJetHadronic_onebjet = bJetPair[k]
                                    bJetLeptonic_onebjet = bJetPair[1-k]
                                    WMassLeptonic_onebjet = (XLepton + Neutrino).M()
                                    WMassHadronic_onebjet = (WJet1_onebjet + WJet2_onebjet).M()
                                    TopMassLeptonic_onebjet = (XLepton + Neutrino + bJetLeptonic_onebjet).M()
                                    TopMassHadronic_onebjet = (WJet1_onebjet + WJet2_onebjet + bJetHadronic_onebjet).M()
                                    Chisq_onebjet = pow((TopMassLeptonic_onebjet-TopMassLeptonic_true)/sigmaleptonic,2) + pow((TopMassHadronic_onebjet-TopMassHadronic_true)/sigmahadronic, 2)
                                    if(Chisq_onebjet < ChisqMin): 
                                        ChisqMin = Chisq_onebjet
                                        WJet1_best_onebjet = WJet1_onebjet
                                        WJet2_best_onebjet = WJet2_onebjet
                                        bJetHadronic_best_onebjet = bJetHadronic_onebjet
                                        bJetLeptonic_best_onebjet = bJetLeptonic_onebjet
                                        AZH_Neutrino_best_onebjet = Neutrino


                dm_tmp = (XLepton + AZH_Neutrino_best_onebjet + bJetLeptonic_best_onebjet + bJetHadronic_best_onebjet + WJet1_best_onebjet + WJet2_best_onebjet + ZLepton1 + ZLepton2).M() \
                       - (XLepton + AZH_Neutrino_best_onebjet + bJetLeptonic_best_onebjet + bJetHadronic_best_onebjet + WJet1_best_onebjet + WJet2_best_onebjet).M();
        deltam.append(dm_tmp)
    deltaM = np.array(deltam)

    zmass_cut = Events["WH3l_ZVeto"].array()
    MET = Events["PuppiMET_pt"].array()

#CleanJet_pt = Events["CleanJet_pt"].array()
    nCleanJet = np.array([len(x) for x in CleanJet_pt])

    CleanJet_pt0 = np.array([CleanJet_pt[i][0] if nCleanJet[i]>0 else 0 for i in range(len(CleanJet_pt))])
    CleanJet_pt1 = np.array([CleanJet_pt[i][1] if nCleanJet[i]>1 else 0 for i in range(len(CleanJet_pt))])
    CleanJet_pt2 = np.array([CleanJet_pt[i][2] if nCleanJet[i]>2 else 0 for i in range(len(CleanJet_pt))])
    CleanJet_pt3 = np.array([CleanJet_pt[i][3] if nCleanJet[i]>3 else 0 for i in range(len(CleanJet_pt))])
    bReq = ((CleanJet_pt>30) & (CleanJeteta<2.5) & ((Jet_btagDeepFlavB[CleanJet_jetIdx])>BTAGWP_DICT[year])).sum() #counts no. of true elements in each array of the jagged array

    SR_cut = ((zmass_cut<25) & (MET>40) & (CleanJet_pt0>30) & (CleanJet_pt1>30) & (CleanJet_pt2>30) & (CleanJet_pt3>30) & (bReq==1))

    ptz_cuts[year] = zpt[supercut&SR_cut]
    dm_cuts[year] = deltaM[supercut&SR_cut]
    weights_cuts[year] = weights[supercut&SR_cut]
    
    print("DONE")
    print("sum of weights = {}".format(sum(weights_cuts[year])))
    
    print("scaling to lumi of {}".format(LUMI_DICT[year]))
    weights_cuts[year] *= LUMI_DICT[year]
    print("sum of weights (lumiscale)  = {}".format(sum(weights_cuts[year])))
#################################################################################################
    
bins = None
line = []

def _fit_ellipse(xi, yi, wi, n_std):
    x = np.concatenate(list(np.array(xi[year]) for year in YEARS))
    y = np.concatenate(list(np.array(yi[year]) for year in YEARS))
    w = np.concatenate(list(np.array(wi[year]) for year in YEARS))
    #w_pos = np.concatenate(list(np.array(wi[year]) - min(wi[year]) if min(wi[year]) < 0 else wi[year] for year in YEARS)) 
    w_pos = (w - min(w)) if min(w) < 0 else w
    assert x.size == y.size == w.size, "x and y must be the same size"

    mean_x = utils.weighted_median(x, w)
    mean_y = utils.weighted_median(y, w)

    cov = np.cov(x, y, aweights=w_pos)
    vals, vecs = np.linalg.eigh(cov)
    angle = np.degrees(np.arctan2(*vecs[::-1, 0]))
    z = integrate.quad(utils.normal_distribution, -n_std, n_std)[0]
    width, height = 2 * np.sqrt(vals * chi2.ppf(z, df=2))
   # print(pairs[b][0], pairs[b][1], mean_x, mean_y, width, height, angle, n_std)
    lines =  MA+" "+MH+" "+str(mean_x)+" "+str(mean_y)+" "+str(width)+" "+str(height)+" "+str(angle)+" "+str(n_std)+"\n"
    #print(lines)
    line.append(lines)
#        print(line)

def _compute_ellipses():
    binning_map = {"stddevs_ellipses" : np.array([0.5, 1, 1.5, 2, 2.5, 3]), "ptz_cuts" : np.linspace(0, 800, 14), "dm_cuts": np.linspace(80, 1000, 3), }
    ellipses = []
    for n_std in binning_map["stddevs_ellipses"]:
         ell = _fit_ellipse(ptz_cuts, dm_cuts, weights_cuts, n_std)

ellipses = _compute_ellipses()
print(line)
outfile = open("condor_ellipses_onebjet_FullRunII/MA-{}_MH-{}_ellipse_onebjet_FullRunII.txt".format(MA,MH), 'a')
outfile.writelines(line)
outfile.close()
