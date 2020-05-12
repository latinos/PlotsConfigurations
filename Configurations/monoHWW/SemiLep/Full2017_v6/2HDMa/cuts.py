#super_cut = [ 
#    '(nLepton>=1 && Alt$(Lepton_pt[1],0)<10.)',
#    '(Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 || Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5)',
#    '((Lepton_pt[0]>30. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>30. && abs(Lepton_pdgId[0])==11))',
#    'PuppiMET_pt > 50.',
#    'Sum$(CleanJet_pt>30.)>=2',
#]
super_cut = [ 
    '(nLepton>=1 && Alt$(Lepton_pt[1],0)<10.)',
    'LepWPCut[0]',
    # SingleMuon trigger: IsoMu27, SingleElectron trigger: Ele35_WPTight_Gsf
    '((Lepton_pt[0]>28. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>36. && abs(Lepton_pdgId[0])==11))',
    'PuppiMET_pt > 50.',
    'Sum$(CleanJet_pt>30.)>=2',
]

#_tmp = [ 
#    '(nLepton>=1 && Alt$(Lepton_pt[1],0)<10.)',
#    '(Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 || Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5)',
#    '((Lepton_pt[0]>30. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>30. && abs(Lepton_pdgId[0])==11))',
#    'PuppiMET_pt > 50.',
#    'Sum$(CleanJet_pt>30.)>=2',
#]

supercut = ' && '.join(super_cut)

def combinecut(cut_list):
    comb_cut = []
    for cut in cut_list:
        comb_cut.extend(cut)
    return comb_cut

def addcut(name, exprs):
    print(cuts)
    cuts[name] = ' && '.join(exprs)
    print(cuts)

is_el    = ['abs(Lepton_pdgId[0])==11']
is_mu    = ['abs(Lepton_pdgId[0])==13']
bVeto    = ['bVeto']
IbVeto   = ['bReq']
#WhadM    = ['Whad_mass > 65. && Whad_mass < 105.']
#IWhadM   = ['(Whad_mass < 65. || Whad_mass > 105.)']
#WhadM    = ['Alt$(Whad_mass, HM_Whad_mass) > 65. && Alt$(Whad_mass, HM_Whad_mass) < 105.']
#IWhadM   = ['(Alt$(Whad_mass, HM_Whad_mass) < 65. || Alt$(Whad_mass, HM_Whad_mass) > 105.)']
WhadM    = ['MHlnjj_m_jj > 65. && MHlnjj_m_jj < 105.']
IWhadM   = ['(MHlnjj_m_jj < 65. || MHlnjj_m_jj > 105.)']
#idx_j    = ['Alt$(HM_idx_j1, idx_j1) > -0.5']
#idx_j    = ['1 > -0.5']
idx_j    = ['MHlnjj_m_jj > -1']     # Require 2 good CleanJets (pt > 30; abs(eta) < 4.7; Jet_jetId >= 2; pujetid == 'custom')
phi_jj   = ['MHlnjj_dphi_jVj < 2.0']
phi_lmet = ['MHlnjj_dphi_lVmet > 1.5']
SC       = super_cut
SR       = combinecut([bVeto , WhadM , idx_j, super_cut])
SB       = combinecut([bVeto , IWhadM, idx_j, super_cut])
TCR      = combinecut([IbVeto, WhadM , idx_j, super_cut])

# Electron
addcut('ElCh_SC' , combinecut([is_el, SC]))
addcut('ElCh_SR' , combinecut([is_el, SR]))
addcut('ElCh_SB' , combinecut([is_el, SB]))
addcut('ElCh_TCR', combinecut([is_el, TCR]))

# Muon
addcut('MuCh_SC'  , combinecut([is_mu, SC]))
addcut('MuCh_SR'  , combinecut([is_mu, SR]))
addcut('MuCh_SB'  , combinecut([is_mu, SB]))
addcut('MuCh_TCR' , combinecut([is_mu, TCR]))

#addcut('SSR_el', combinecut([is_el, SR, phi_jj, phi_lmet]))
#addcut('SSR_mu', combinecut([is_mu, SR, phi_jj, phi_lmet]))



