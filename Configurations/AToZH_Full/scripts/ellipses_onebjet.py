import os
import re
import numpy as np
import scipy.integrate as integrate
from scipy.stats.distributions import chi2
import json
import utils
from utils import Ellipse, CHANNEL_ID_MAP, REGION_ID_MAP
import uproot


#can put the whole thing in a for looping over masses? add masses to the json dictionary
myfile = uproot.open("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL17_106x_nAODv9_Full2017v9/MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9/nanoLatino_AToZHToLLTTbar_MA-900_MH-400__part0.root")
Events = myfile["Events"]
zpt = Events["ZH3l_pTZ"].array()
dm = Events["AZH_mA_minus_mH_onebjet"].array() #defined only in SR

################# weights ############################

XSWeight = Events["XSWeight"].array()
SFweight3l = Events["SFweight3l"].array()
LepSF = Events["LepSF3l__ele_mvaFall17V2Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80"].array()
LepCut = Events["LepCut3l__ele_mvaFall17V2Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80"].array()
Prefire = Events["PrefireWeight"].array()
JetPUIDSF = Events["Jet_PUIDSF_loose"].array()
JetID = Events["Jet_jetId"].array()
Jet_JetID = (JetID >= 2)*(np.log(JetPUIDSF)) 
Jet_PUIDSF = np.exp(Jet_JetID.sum())

CleanJet_pt = Events["CleanJet_pt"].array()
CleanJeteta = abs(Events["CleanJet_eta"].array())
Jet_btagSF_deepcsv_shape = Events["Jet_btagSF_deepcsv_shape"].array()
CleanJet_jetIdx = Events["CleanJet_jetIdx"].array()
Jet_btagSF = Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]

btag = np.log(((CleanJet_pt>30) & (CleanJeteta<2.5))*(Jet_btagSF_deepcsv_shape[CleanJet_jetIdx])+1*((CleanJet_pt<30) | (CleanJeteta>2.5)))
btagSF = np.exp((btag.sum()))  #array([1.47603836, 0.66089104, 0.86333407, ..., 1.42880052, 0.97982071, 0.97606693]) - same as directly doing array.prod() without the log and the exp

SFweight = SFweight3l*LepSF*LepCut*Prefire*Jet_PUIDSF*btagSF

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
Jet_btagDeepB = Events["Jet_btagDeepB"].array()
bReq = ((CleanJet_pt>30) & (CleanJeteta<2.5) & ((Jet_btagDeepB[CleanJet_jetIdx])>0.4941)).sum() #counts no. of true elements in each array of the jagged array

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
    print(mean_x, mean_y, width, height, angle, n_std)
    lines =  "mA"+" "+"mH"+" "+str(mean_x)+" "+str(mean_y)+" "+str(width)+" "+str(height)+" "+str(angle)+" "+str(n_std)+"\n"
    line.append(lines)


def _compute_ellipses():
    binning_map = {"stddevs_ellipses" : np.array([0.5, 1, 1.5, 2, 2.5, 3]), "ptz_cuts" : np.linspace(0, 800, 14), "dm_cuts": np.linspace(80, 1000, 3), }
    ellipses = []
    for n_std in binning_map["stddevs_ellipses"]:
          ell = _fit_ellipse(ptz_cuts, dm_cuts, weights_cuts, n_std)

ellipses = _compute_ellipses()
outfile = open('ellipse_onebjet.txt', 'w')
outfile.writelines(line)
outfile.close()
