import os
import re
import numpy as np
import scipy.integrate as integrate
from scipy.stats.distributions import chi2
import json
import utils
from utils import Ellipse, CHANNEL_ID_MAP, REGION_ID_MAP
import uproot
import ROOT

#get muon tth mva sf histogram
mu_rootfile = ROOT.TFile(os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/muon_ttHMVA_SF/2017/NUM_TightHWW_ISO_tthmva_DEN_TightHWW_ISO_eta_pt.root")
h_SF_mu = mu_rootfile.Get("NUM_TightHWW_ISO_tthmva_DEN_TightHWW_ISO_eta_pt").Clone()
h_SF_mu.SetDirectory(0)
mu_rootfile.Close()

# Create electron tth mva sf histogram
xbins = np.array([-2.5, -2.0, -1.566, -1.442, -0.8, 0.0, 0.8, 1.442, 1.566, 2.0, 2.5])
ybins = np.array([10.0, 15.0, 20.0, 35.0, 50.0, 90.0, 150.0, 500.0])
h_SF_ele = ROOT.TH2D("h_SF_ele", "h_SF_ele", len(xbins) - 1, xbins, len(ybins) - 1, ybins)
h_SF_ele.SetDirectory(0)
# scrape values from electron txt file
ele_sf_file_path = os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/electron_ttHMVA_UL_SF/2017/egammaEffi.txt"
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
for iBinX in range (1,h_SF_ele.GetNbinsX()+1):
    for iBinY in range (1,h_SF_ele.GetNbinsY()+1):
        eta = h_SF_ele.GetXaxis().GetBinCenter(iBinX)
        pt =  h_SF_ele.GetYaxis().GetBinCenter(iBinY)
        
        for i in range (70):
            if eta >= lines[i][0] and eta <= lines[i][1] and pt >= lines[i][2] and pt <= lines[i][3]:
                data = lines[i][4]
                mc = lines[i][7]
                if mc != 0:
                    sf = data/mc
                else: 
                    sf = 1
                h_SF_ele.SetBinContent(iBinX, iBinY, sf)

#can put the whole thing in a for looping over masses? add masses to the json dictionary
with open("signals.txt", 'r') as f:
    pairs = np.array([(int(re.findall(r"\d+", x)[0]), int(re.findall(r"\d+", x)[1])) for x in f])

for b in range(len(pairs)):
    myfile = uproot.open("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL17_106x_nAODv9_Full2017v9/MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9__DMonebjet/nanoLatino_AToZHToLLTTbar_MA-"+str(pairs[b][0])+"_MH-"+str(pairs[b][1])+"__part0.root")
    Events = myfile["Events"]
    zpt = Events["ZH3l_pTZ"].array()
    dm = Events["AZH_mA_minus_mH_onebjet"].array() #defined only in SR

    ################# weights ############################

    XSWeight = Events["XSWeight"].array()
    SFweight3l = Events["SFweight3l"].array()
    LepSF = Events["LepSF3l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight_HWWW"].array()
    LepCut3l = Events["LepCut3l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight_HWWW"].array()

    Lepton_pt = Events["Lepton_pt"].array()
    Lepton_eta = Events["Lepton_eta"].array()
    Lepton_pdgId = Events["Lepton_pdgId"].array()
    nLepton = Events["nLepton"].array()
    Muon_mvaTTH = Events["Muon_mvaTTH"].array()
    Lepton_muonIdx = Events["Lepton_muonIdx"].array()
    Lepton_mvaTTH_UL = Events["Lepton_mvaTTH_UL"].array()
    tthmvasf = []
    lepcut = []
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
                    eta_temp = min(max(eta_temp, -2.5), 2.49) #keep eta within (-2.5,2.49)
                    pt_temp = min(max(pt_temp, 15.0), 499.0) #keep pt within (15.0,499.0)
   
                    SF_vect.append(h_SF_ele.GetBinContent(h_SF_ele.FindBin(eta_temp, pt_temp)))

                # Get muon SF and uncertainty
                elif abs(Lepton_pdgId[i][j]) == 13:
                    lepcut_temp *= Muon_mvaTTH[i][Lepton_muonIdx[i][j]] > 0.82
                    eta_temp = min(max(eta_temp, -2.4), 2.39) #keep eta within (-2.4,2.39)
                    pt_temp = min(max(pt_temp, 10.1), 119.9) #keep pt within (10.1,119.9)

                    SF_vect.append(h_SF_mu.GetBinContent(h_SF_mu.FindBin(eta_temp, pt_temp)))

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


    Prefire = Events["PrefireWeight"].array()
    JetPUIDSF = Events["Jet_PUIDSF_loose"].array()
    JetID = Events["Jet_jetId"].array()
    Jet_JetID = (JetID >= 2)*(np.log(JetPUIDSF)) 
    Jet_PUIDSF = np.exp(Jet_JetID.sum())

    CleanJet_pt = Events["CleanJet_pt"].array()
    CleanJeteta = abs(Events["CleanJet_eta"].array())
    Jet_btagSF_deepjet_shape = Events["Jet_btagSF_deepjet_shape"].array()
    CleanJet_jetIdx = Events["CleanJet_jetIdx"].array()
    Jet_btagSF = Jet_btagSF_deepjet_shape[CleanJet_jetIdx]

    btag = np.log(((CleanJet_pt>30) & (CleanJeteta<2.5))*(Jet_btagSF_deepjet_shape[CleanJet_jetIdx])+1*((CleanJet_pt<30) | (CleanJeteta>2.5)))
    btagSF = np.exp((btag.sum()))  #array([1.47603836, 0.66089104, 0.86333407, ..., 1.42880052, 0.97982071, 0.97606693]) - same as directly doing array.prod() without the log and the exp

    SFweight = SFweight3l*LepSF*LepCut*Jet_PUIDSF*btagSF*ttHMVAULSF*Prefire

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

########## cuts########################

########### supercut ####################
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

    supercut = (WH3l_min_array>0) & (Lepton_pt0_array>25) & (Lepton_pt1_array>20) & (Lepton_pt2_array>15) & (Lepton_pt3_array<10) & (abs(WH3l_chlll)==1) #5538 out of 24969 events survive

    preselection = supercut
####################### SR cuts ################################################################
    zmass_cut = Events["WH3l_ZVeto"].array()
    MET = Events["PuppiMET_pt"].array()

#CleanJet_pt = Events["CleanJet_pt"].array()
    nCleanJet = np.array([len(x) for x in CleanJet_pt])

    CleanJet_pt0 = np.array([CleanJet_pt[i][0] if nCleanJet[i]>0 else 0 for i in range(len(CleanJet_pt))])
    CleanJet_pt1 = np.array([CleanJet_pt[i][1] if nCleanJet[i]>1 else 0 for i in range(len(CleanJet_pt))])
    CleanJet_pt2 = np.array([CleanJet_pt[i][2] if nCleanJet[i]>2 else 0 for i in range(len(CleanJet_pt))])
    CleanJet_pt3 = np.array([CleanJet_pt[i][3] if nCleanJet[i]>3 else 0 for i in range(len(CleanJet_pt))])
    Jet_btagDeepFlavB = Events["Jet_btagDeepFlavB"].array()
    bReq = ((CleanJet_pt>30) & (CleanJeteta<2.5) & ((Jet_btagDeepFlavB[CleanJet_jetIdx])>0.3040)).sum() #counts no. of true elements in each array of the jagged array

    SR_cut = ((zmass_cut<25) & (MET>40) & (CleanJet_pt0>30) & (CleanJet_pt1>30) & (CleanJet_pt2>30) & (CleanJet_pt3>30) & (bReq==1))

    ptz_cuts = zpt[supercut&SR_cut] #958 out of 24969 events survive
    dm_cuts = dm[supercut&SR_cut]
    weights_cuts = weights[supercut&SR_cut]
#################################################################################################
    bins = None
    line = []
    def _fit_ellipse(x, y, w, n_std):
        w_pos = w
        if min(w) < 0:
            w_pos -= min(w)
        assert x.size == y.size == w.size, "x and y must be the same size"

        mean_x = utils.weighted_median(x, w)
        mean_y = utils.weighted_median(y, w)

        cov = np.cov(x, y, aweights=w_pos)
        vals, vecs = np.linalg.eigh(cov)
        angle = np.degrees(np.arctan2(*vecs[::-1, 0]))
        z = integrate.quad(utils.normal_distribution, -n_std, n_std)[0]
        width, height = 2 * np.sqrt(vals * chi2.ppf(z, df=2))
       # print(pairs[b][0], pairs[b][1], mean_x, mean_y, width, height, angle, n_std)
        lines =  str(pairs[b][0])+" "+str(pairs[b][1])+" "+str(mean_x)+" "+str(mean_y)+" "+str(width)+" "+str(height)+" "+str(angle)+" "+str(n_std)+"\n"
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
    outfile = open('ellipse_onebjet.txt', 'a')
    outfile.writelines(line)
    outfile.close()
