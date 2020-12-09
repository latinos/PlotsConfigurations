super_cut = [ 
    '(nLepton>=1 && Alt$(Lepton_pt[1],0)<10.)',
    # SingleMuon trigger: IsoMu27, SingleElectron trigger: Ele35_WPTight_Gsf
    '((Lepton_pt[0]>27. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>35. && abs(Lepton_pdgId[0])==11))',
    #'PuppiMET_pt > 50.',
    'Sum$(CleanJet_pt>30.)>=2',
    'MHlnjj_m_jj > -1', # Require 2 good CleanJets (pt > 30; abs(eta) < 4.7; Jet_jetId >= 2; pujetid == 'custom')
    # Additional cuts
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

#hMET     = ['PuppiMET_pt > 50']
#lMET     = ['PuppiMET_pt < 50']
is_el    = ['abs(Lepton_pdgId[0])==11']
is_mu    = ['abs(Lepton_pdgId[0])==13']
bVeto    = ['bVeto']
IbVeto   = ['bReq']
WhadM    = ['MHlnjj_m_jj > 65. && MHlnjj_m_jj < 105.']
#IWhadM   = ['(MHlnjj_m_jj < 65. || MHlnjj_m_jj > 105.)']
IWhadM   = ['(MHlnjj_m_jj < 65. || MHlnjj_m_jj > 105.) && MHlnjj_m_jj > 40. && MHlnjj_m_jj < 250.']
#idx_j    = ['MHlnjj_m_jj > -1']     # Require 2 good CleanJets (pt > 30; abs(eta) < 4.7; Jet_jetId >= 2; pujetid == 'custom')
#mt       = ['MHlnjj_mt_lmet > 25']
#Imt      = ['MHlnjj_mt_lmet < 25']
QCDf     = ['MHlnjj_mt_lmet > 50', 'MHlnjj_dphi_ljjVmet > 2.', 'PuppiMET_pt > 50']
IQCDf    = ['MHlnjj_mt_lmet < 50', 'MHlnjj_dphi_ljjVmet < 2.', 'PuppiMET_pt < 50']

mt_lmet      = ['mtw1 > 80']
met          = ['PuppiMET_pt > 60']
dphi_l_jj    = ['MHlnjj_dphi_jjVl < 1.8']
dphi_ljj_met = ['MHlnjj_dphi_ljjVmet > 2.']
dr_l_jj      = ['MHlnjj_dr_jjVl < 3.']
pt_ljj       = ['MHlnjj_pt_ljj > 60']
pt_ljj_I     = ['MHlnjj_pt_ljj < 60']
bVeto        = ['bVeto']
bVeto_I      = ['bReq']
m_jj         = ['(MHlnjj_m_jj > 65. && MHlnjj_m_jj < 105.)']
m_jj_I       = ['(MHlnjj_m_jj < 65. || MHlnjj_m_jj > 105.)']

SC       = super_cut
SR       = combinecut([super_cut, mt_lmet, met, dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj , m_jj  , bVeto  ])
CR       = combinecut([super_cut, mt_lmet, met, dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj_I, m_jj  , bVeto  ])
SB       = combinecut([super_cut, mt_lmet, met, dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj , m_jj_I, bVeto  ])
TCR      = combinecut([super_cut, mt_lmet, met, dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj , m_jj  , bVeto_I])
#SB       = combinecut([QCDf , bVeto , IWhadM, super_cut])
#TCR      = combinecut([QCDf , IbVeto, WhadM , super_cut])
#QCR      = combinecut([IQCDf, bVeto , super_cut])
##QCR      = combinecut([Imt, bVeto , WhadM , idx_j, super_cut])
##QCR      = combinecut([Imt, bVeto , idx_j, super_cut])

# Electron
addcut('ElCh_SC' , combinecut([is_el, SC]))
addcut('ElCh_SR' , combinecut([is_el, SR]))
addcut('ElCh_CR' , combinecut([is_el, CR]))
addcut('ElCh_SB' , combinecut([is_el, SB]))
addcut('ElCh_TCR', combinecut([is_el, TCR]))
#addcut('ElCh_QCR', combinecut([is_el, QCR]))

# Muon
addcut('MuCh_SC'  , combinecut([is_mu, SC]))
addcut('MuCh_SR'  , combinecut([is_mu, SR]))
addcut('MuCh_CR'  , combinecut([is_mu, CR]))
addcut('MuCh_SB'  , combinecut([is_mu, SB]))
addcut('MuCh_TCR' , combinecut([is_mu, TCR]))
#addcut('MuCh_QCR' , combinecut([is_mu, QCR]))

#addcut('SSR_el', combinecut([is_el, SR, phi_jj, phi_lmet]))
#addcut('SSR_mu', combinecut([is_mu, SR, phi_jj, phi_lmet]))



