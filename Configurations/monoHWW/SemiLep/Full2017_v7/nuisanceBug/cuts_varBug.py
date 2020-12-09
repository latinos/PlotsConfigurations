super_cut = [ 
    '(nLepton>=1 && Alt$(Lepton_pt[1],0)<10.)',
     #SingleMuon trigger: IsoMu27, SingleElectron trigger: Ele35_WPTight_Gsf
    '((Lepton_pt[0]>27. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>35. && abs(Lepton_pdgId[0])==11))',
    'PuppiMET_pt > 50.',
    'Sum$(CleanJet_pt>30.)>=2',
    #'MHlnjj_m_jj > -1', # Require 2 good CleanJets (pt > 30; abs(eta) < 4.7; Jet_jetId >= 2; pujetid == 'custom')
    # #Additional cuts
    #'MHlnjj_dphi_jjVl < 2.',
    #'MHlnjj_dphi_ljjVmet > 2.',
]

supercut = ' && '.join(super_cut)

def combinecut(cut_list):
    comb_cut = []
    for cut in cut_list:
        comb_cut.extend(cut)
    return comb_cut

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

SC        = super_cut
METfilter = ['METFilter_MC > 0.5']
is_el     = ['abs(Lepton_pdgId[0])==11']
is_mu     = ['abs(Lepton_pdgId[0])==13']

# Electron
addcut('ElCh_SC' , combinecut([is_el, SC]))
addcut('ElCh_SC_METfilter' , combinecut([is_el, METfilter, SC]))

# Muon
addcut('MuCh_SC'  , combinecut([is_mu, SC]))
addcut('MuCh_SC_METfilter' , combinecut([is_mu, METfilter, SC]))



