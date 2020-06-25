from WPandCut2017 import *
ALGO_=ALGO+"_"
_ALGO="_"+ALGO
_ALGO_="_"+ALGO+"_"



JetBranches=[
    "Jet_pt_nom",
]

WlepBranches=[
    "Wlep_nom_pt",
    "Wlep_nom_eta",
    "Wlep_nom_phi",
    "Wlep_nom_mass",
    "Wlep_nom_Mt",
    "Wlep_nom_E",
    #"Wlep_nom_bigmass",
    #"Wlep_nom_bigE",
    "Wlepbig_nom_E",
    "Wlepbig_nom_pz",
    "Wlepbig_nom_mass",
    "METtype_nom_pz1",
    "METtype_nom_pz2",
    "METtype_nom_px",
    "METtype_nom_py",
    "METtype_nom_E",
    "METtype_nom_pz",
    "METtype_nom_big_E",
    "METtype_nom_big_pz",
]
WBranches=[
    "isBoost_"+WTAG+"_nom",
    "WtaggerFatjet_"+WTAG+"_nom_pt",
    "WtaggerFatjet_"+WTAG+"_nom_eta",
    "WtaggerFatjet_"+WTAG+"_nom_phi",
    "WtaggerFatjet_"+WTAG+"_nom_mass",
    "WtaggerFatjet_"+WTAG+"_nom_tau21ddt",
    "WtaggerFatjet_"+WTAG+"_nom__fjetIdx",
]
WjjBranches=[
    "isResol"+_ALGO_+"nom",
    "Whad"+_ALGO_+"nom_pt",
    "Whad"+_ALGO_+"nom_eta",
    "Whad"+_ALGO_+"nom_phi",
    "Whad"+_ALGO_+"nom_mass",
    "Whad"+_ALGO_+"nom_cjidx1",
    "Whad"+_ALGO_+"nom_cjidx2",
]
suffix=WTAG+"_nom"
_suffix="_"+suffix
_suffix_="_"+suffix+"_"
HMBoostBranches=[
    'lnJ'+_suffix_+'pt',
    'lnJ'+_suffix_+'mass',
    'lnJ'+_suffix_+'minPtWOverM',
    'lnJ'+_suffix_+'maxPtWOverM',
    'lnJ'+_suffix_+'widx',
    'BJetBoost'+_suffix_+'cjidx',
    'nBJetBoost'+_suffix,
    'BJetBstNotVBF'+_suffix_+'cjidx',
    'nBJetBstNotVBF'+_suffix,
    'AddJetBoost'+_suffix_+"cjidx",
    'AddJetBoost'+_suffix_+"pt",
    'AddJetBoost'+_suffix_+"eta",
    'AddJetBoost'+_suffix_+"phi",
    'AddJetBoost'+_suffix_+"mass",
    'nAddBoost'+_suffix,
    'isBoostSR'+_suffix,
    'isBoostSB'+_suffix,
    'isVBF_Boost'+_suffix,
    'VBFjjBoost_mjj'+_suffix,
    'VBFjjBoost_dEta'+_suffix,
    'max_mjj_Boost'+_suffix,
    'dEta_of_max_mjj_Boost'+_suffix,
    'VBFjjBoost_cjidx1'+_suffix,
    'VBFjjBoost_cjidx2'+_suffix,
]


##Mela
for M in MELA_MASS_BOOST:
    M=str(M)
    HMBoostBranches.append("meP"+M+"_Bst_ggf_S"+_suffix)
    HMBoostBranches.append("meP"+M+"_Bst_ggf_B"+_suffix)
    
suffix=ALGO_+"nom"
_suffix="_"+suffix
_suffix_="_"+suffix+"_"


HMResolBranches=[
    'lnjj'+_suffix_+'pt',
    'lnjj'+_suffix_+'mass',
    'lnjj'+_suffix_+'minPtWOverM',
    'lnjj'+_suffix_+'maxPtWOverM',
    'lnjj'+_suffix_+'Mt',
    'AddJetResol'+_suffix_+'cjidx',
    'nAddResol'+_suffix,
    'AddJetResol'+_suffix_+'pt',
    'AddJetResol'+_suffix_+'eta',
    'AddJetResol'+_suffix_+'phi',
    'AddJetResol'+_suffix_+'mass',
    'isResolSR'+_suffix,
    'isResolSB'+_suffix,
    'isVBF_Resol'+_suffix,
    'BJetResol'+_suffix_+'cjidx',
    'BJetResNotVBF'+_suffix_+'cjidx',
    'nBJetResol'+_suffix,
    'VBFjjResol_dEta'+_suffix,
    'VBFjjResol_mjj'+_suffix,
    'VBFjjResol_dEta'+_suffix,
    'max_mjj_Resol'+_suffix,
    'dEta_of_max_mjj_Resol'+_suffix,
    'VBFjjResol_cjidx1'+_suffix,
    'VBFjjResol_cjidx2'+_suffix,
]

for M in MELA_MASS_RESOL:
    M=str(M)
    HMResolBranches.append("meP"+M+"_Res_ggf_S"+_suffix)
    HMResolBranches.append("meP"+M+"_Res_ggf_B"+_suffix)
