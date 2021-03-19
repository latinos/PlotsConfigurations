super_cut = [ 
    'nLepton>=1',
    # SingleMuon trigger: IsoMu24 or IsoTkMu24, SingleElectron trigger: Ele27_WPTight_Gsf or HLT_Ele25_eta2p1_WPTight_Gsf
    '((Lepton_pt[0]>24. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>25. && abs(Lepton_pdgId[0])==11))',
    'Sum$(CleanJet_pt>30.)>=2',
    'MHlnjj_m_jj > -1', # Require 2 good CleanJets (pt > 30; abs(eta) < 4.7; Jet_jetId >= 2; pujetid == 'custom')
    '(abs(CleanJet_eta[HM_idx_j1]) < 2.4 && abs(CleanJet_eta[HM_idx_j2]) < 2.4)', # Force jets in tracker
]

supercut = ' && '.join(super_cut)

def combinecut(cut_list):
    comb_cut = []
    for cut in cut_list:
        comb_cut.extend(cut)
    return comb_cut

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

is_el    = ['abs(Lepton_pdgId[0])==11']
is_mu    = ['abs(Lepton_pdgId[0])==13']

#veto_1l      = ['Alt$(Lepton_pt[1],0)<10.']
#veto_1l_I    = ['(nLepton>=2 && Lepton_pt[1] > 20)']
mt_lmet_h    = ['mtw1 > 160']
mt_lmet      = ['mtw1 > 80']
mt_lmet_I    = ['mtw1 < 30']
met          = ['PuppiMET_pt > 60']
met_I        = ['PuppiMET_pt < 30']
dphi_l_jj    = ['MHlnjj_dphi_jjVl < 1.8']
dphi_ljj_met = ['MHlnjj_dphi_ljjVmet > 2.']
dr_l_jj      = ['MHlnjj_dr_jjVl < 3.']
pt_ljj       = ['MHlnjj_pt_ljj > 60']
pt_ljj_I     = ['MHlnjj_pt_ljj < 60']
veto_1l      = ['Alt$(Lepton_pt[1],0)<10.']
veto_1l_I    = ['(nLepton>=2 && Lepton_pt[1] > 20)']
veto_b       = ['bVeto']
veto_b_I     = ['bReq']
m_jj         = ['(MHlnjj_m_jj > 65. && MHlnjj_m_jj < 105.)']
m_jj_I       = ['(MHlnjj_m_jj < 65. || MHlnjj_m_jj > 105.)']
m_jj_l       = ['(MHlnjj_m_jj < 65.)']
m_jj_h       = ['(MHlnjj_m_jj > 105.)']
#EEfilter     = ['(Sum$((abs(Jet_eta) > 2.65 && abs(Jet_eta) < 3.139 && Jet_pt < 50. && Jet_pt > 30.)) == 0)']
#EEfilter     = ['!(abs(CleanJet_eta[HM_idx_j1]) > 2.65 && abs(CleanJet_eta[HM_idx_j1]) < 3.139 )',
#                '!(abs(CleanJet_eta[HM_idx_j2]) > 2.65 && abs(CleanJet_eta[HM_idx_j2]) < 3.139 )',
#               ]
#EEfilter2    = ['(Sum$((abs(Jet_eta) > 2.65 && abs(Jet_eta) < 3.139 && Jet_pt > 30.)) == 0)',
#                '(Sum$((abs(CleanJet_eta) > 2.65 && abs(CleanJet_eta) < 3.139 && CleanJet_pt > 30.)) == 0)'
#               ]
EEfilter     = ['(Sum$((abs(CleanJet_eta) > 2.65 && abs(CleanJet_eta) < 3.139 && CleanJet_pt > 30.)) == 0)'
               ]

TKfilter     =[
               '(abs(CleanJet_eta[HM_idx_j1]) < 2.4 && abs(CleanJet_eta[HM_idx_j2]) < 2.4)'
              ]
TKEEfilter   =[
               '(Sum$((abs(CleanJet_eta) > 2.65 && abs(CleanJet_eta) < 3.139 && CleanJet_pt > 30.)) == 0)',
               '(abs(CleanJet_eta[HM_idx_j1]) < 2.4 && abs(CleanJet_eta[HM_idx_j2]) < 2.4)'
              ]

SC       = super_cut
SR       = combinecut([super_cut, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b  , veto_1l  ])
CR       = combinecut([super_cut, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj_I, veto_b  , veto_1l  ])
SB       = combinecut([super_cut, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj_I, veto_b  , veto_1l  ])
SBlow    = combinecut([super_cut, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj_l, veto_b  , veto_1l  ])
SBhigh   = combinecut([super_cut, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj_h, veto_b  , veto_1l  ])
TCR      = combinecut([super_cut, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b_I, veto_1l  ])
DYCR     = combinecut([super_cut, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b  , veto_1l_I]) # empty due to post-proc sel
QER      = combinecut([super_cut, mt_lmet_I, met_I, dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b  , veto_1l  ])

SC       = super_cut
SR_h       = combinecut([super_cut, mt_lmet_h, met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b  , veto_1l  ])
CR_h       = combinecut([super_cut, mt_lmet_h, met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj_I, veto_b  , veto_1l  ])
SB_h       = combinecut([super_cut, mt_lmet_h, met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj_I, veto_b  , veto_1l  ])
TCR_h      = combinecut([super_cut, mt_lmet_h, met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b_I, veto_1l  ])
DYCR_h     = combinecut([super_cut, mt_lmet_h, met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b  , veto_1l_I])
QER_h      = combinecut([super_cut, mt_lmet_I, met_I, dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b  , veto_1l  ])

## Electron
#addcut('ElCh_SC'  , combinecut([is_el, SC  ]))
#addcut('ElCh_SR'  , combinecut([is_el, SR  ]))
##addcut('ElCh_CR'  , combinecut([is_el, CR  ]))
#addcut('ElCh_SB'  , combinecut([is_el, SB  ]))
#addcut('ElCh_TCR' , combinecut([is_el, TCR ]))
##addcut('ElCh_DYCR', combinecut([is_el, DYCR]))
#addcut('ElCh_QER' , combinecut([is_el, QER ]))
#
## Muon
#addcut('MuCh_SC'  , combinecut([is_mu, SC  ]))
#addcut('MuCh_SR'  , combinecut([is_mu, SR  ]))
##addcut('MuCh_CR'  , combinecut([is_mu, CR  ]))
#addcut('MuCh_SB'  , combinecut([is_mu, SB  ]))
#addcut('MuCh_TCR' , combinecut([is_mu, TCR ]))
##addcut('MuCh_DYCR', combinecut([is_mu, DYCR]))
#addcut('MuCh_QER' , combinecut([is_mu, QER ]))

## Inclusive
#addcut('InCh_SC'  , combinecut([SC  ]))
#addcut('InCh_SR'  , combinecut([SR  ]))
##addcut('InCh_CR'  , combinecut([CR  ]))
#addcut('InCh_SB'  , combinecut([SB  ]))
#addcut('InCh_SBlow'  , combinecut([SBlow  ]))
#addcut('InCh_SBhigh'  , combinecut([SBhigh  ]))
#addcut('InCh_TCR' , combinecut([TCR ]))
##addcut('InCh_DYCR', combinecut([DYCR]))
##addcut('InCh_QER' , combinecut([QER ]))
#
#addcut('InCh_SCEE'    , combinecut([EEfilter , SC ]))
#addcut('InCh_SREE'    , combinecut([EEfilter , SR ]))
##addcut('InCh_CR'     , combinecut([EEfilter , CR ]))
#addcut('InCh_SBEE'    , combinecut([EEfilter , SB ]))
#addcut('InCh_SBlowEE' , combinecut([EEfilter , SBlow ]))
#addcut('InCh_SBhighEE', combinecut([EEfilter , SBhigh ]))
#addcut('InCh_TCREE'   , combinecut([EEfilter , TCR ]))
##addcut('InCh_DYCR'   , combinecut([EEfilter , DYCR]))
##addcut('InCh_QEREE'  , combinecut([EEfilter , QER ]))

#addcut('InCh_EEcut_SB'  , combinecut([EEfilter, SB]))
#addcut('InCh_EEcut_TCR' , combinecut([EEfilter, TCR]))
#addcut('InCh_EEcut_SR'  , combinecut([EEfilter, SR]))

#addcut('InCh_EEcut2_SB'  , combinecut([EEfilter2, SB]))
#addcut('InCh_EEcut2_TCR' , combinecut([EEfilter2, TCR]))
#addcut('InCh_EEcut2_SR'  , combinecut([EEfilter2, SR]))

#addcut('InCh_EEcut_SB'  , combinecut([EEfilter, SB]))
#addcut('InCh_EEcut_TCR' , combinecut([EEfilter, TCR]))
#addcut('InCh_EEcut_SR'  , combinecut([EEfilter, SR]))

addcut('InCh_TKcut_SB'  , combinecut([SB]))
addcut('InCh_TKcut_TCR' , combinecut([TCR]))
addcut('InCh_TKcut_SR'  , combinecut([SR]))

#addcut('InCh_TKEEcut_SB'  , combinecut([TKEEfilter, SB]))
#addcut('InCh_TKEEcut_TCR' , combinecut([TKEEfilter, TCR]))
#addcut('InCh_TKEEcut_SR'  , combinecut([TKEEfilter, SR]))

addcut('InCh_TKcut_HighMtw_SB'  , combinecut([SB_h]))
addcut('InCh_TKcut_HighMtw_TCR' , combinecut([TCR_h]))
addcut('InCh_TKcut_HighMtw_SR'  , combinecut([SR_h]))

#addcut('InCh_TKEEcut_HighMtw_SB'  , combinecut([TKEEfilter, SB_h]))
#addcut('InCh_TKEEcut_HighMtw_TCR' , combinecut([TKEEfilter, TCR_h]))
#addcut('InCh_TKEEcut_HighMtw_SR'  , combinecut([TKEEfilter, SR_h]))

#addcut('InCh_SB'  , combinecut([SB]))
#addcut('InCh_TCR' , combinecut([TCR]))
#addcut('InCh_SR'  , combinecut([SR]))

#for idx,run in enumerate(['B', 'C', 'D', 'E', 'F']):
#    runP = idx+1
#    rp_cut = ['run_period == '+str(runP)]
#    addcut('InCh_EEcut_SB_run'+run  , combinecut([rp_cut, EEfilter, SB]))
#    addcut('InCh_EEcut2_SB_run'+run  , combinecut([rp_cut, EEfilter2, SB]))
#    #addcut('InCh_EEcut_SR_run'+run  , combinecut([rp_cut, EEfilter, SR]))
#    #addcut('InCh_EEcut_TCR_run'+run , combinecut([rp_cut, EEfilter, TCR]))
#
#    addcut('InCh_SB_run'+run       , combinecut([rp_cut, SB]))
#    #addcut('InCh_SR_run'+run       , combinecut([rp_cut, SR]))
#    #addcut('InCh_TCR_run'+run       , combinecut([rp_cut, TCR]))


# Mjj fit channel
#addcut('Mjj_CR'  , combinecut([CR]))


