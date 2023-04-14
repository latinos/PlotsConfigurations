#super_cut = [ 
#    'nLepton >= 1',
#    # SingleMuon trigger: IsoMu24 or IsoTkMu24, SingleElectron trigger: Ele27_WPTight_Gsf or HLT_Ele25_eta2p1_WPTight_Gsf
#    '((Lepton_pt[0]>24. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>25. && abs(Lepton_pdgId[0])==11))',
#    'mtw1 < 30.',
#    'PuppiMET_pt < 30',
#    'two_jet_FAKE[0]',
#    'resolvedSignalWMass[0]',
#    'bVeto[0]',
#]
#
#supercut = ' && '.join(super_cut)
#
#def combinecut(cut_list):
#    comb_cut = []
#    for cut in cut_list:
#        comb_cut.extend(cut)
#    return comb_cut
#
#def addcut(name, exprs):
#    cuts[name] = ' && '.join(exprs)
#
#is_el    = ['abs(Lepton_pdgId[0])==11']
#is_mu    = ['abs(Lepton_pdgId[0])==13']
##tight    = ['WPTight[0] > 0.5']
#
#Jet_Et   = 35
#
#pass_jet = ['PassJet_Et'+str(Jet_Et)+' > 0.5']
#
## Electron
#addcut('ElCh_JetEt'+str(Jet_Et)+'_loose' , combinecut([super_cut, pass_jet, is_el]))
#addcut('ElCh_loose' , combinecut([super_cut, is_el]))
##addcut('ElCh_JetEt'+str(Jet_Et)+'_tight' , combinecut([super_cut, pass_jet, is_el, tight]))
#
## Muon
#addcut('MuCh_JetEt'+str(Jet_Et)+'_loose' , combinecut([super_cut, pass_jet, is_mu]))
#addcut('MuCh_loose' , combinecut([super_cut, is_mu]))
##addcut('MuCh_JetEt'+str(Jet_Et)+'_tight' , combinecut([super_cut, pass_jet, is_mu, tight]))


super_cut = [ 
    'nLepton>=1',
    # SingleMuon trigger: IsoMu24 or IsoTkMu24, SingleElectron trigger: Ele27_WPTight_Gsf or HLT_Ele25_eta2p1_WPTight_Gsf
    '((Lepton_pt[0]>27. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>35. && abs(Lepton_pdgId[0])==11))',
#    '!hole_ex[0]',
    'Sum$(CleanJet_pt>30.)>=2',
]#    ' resolved_nocut == 1', # Require 2 good CleanJets (pt > 30; abs(eta) < 4.7; Jet_jetId >= 2; pujetid == 'custom')
 #   'MHlnjj_m_jj > -1', # Require 2 good CleanJets (pt > 30; abs(eta) < 4.7; Jet_jetId >= 2; pujetid == 'custom')
#]

supercut = ' && '.join(super_cut)

super_cut_2 = [ 
    'nLepton>=1',
    # SingleMuon trigger: IsoMu24 or IsoTkMu24, SingleElectron trigger: Ele27_WPTight_Gsf or HLT_Ele25_eta2p1_WPTight_Gsf
    '((Lepton_pt[0]>27. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>35. && abs(Lepton_pdgId[0])==11))',
    '!hole_ex[0]',
    'Sum$(CleanJet_pt>30.)>=2',
]#    ' resolved_nocut == 1', # Require 2 good CleanJets (pt > 30; abs(eta) < 4.7; Jet_jetId >= 2; pujetid == 'custom')
 #   'MHlnjj_m_jj > -1', # Require 2 good CleanJets (pt > 30; abs(eta) < 4.7; Jet_jetId >= 2; pujetid == 'custom')
#]

supercut_2 = ' && '.join(super_cut_2)
def combinecut(cut_list):
    comb_cut = []
    for cut in cut_list:
        comb_cut.extend(cut)
    return comb_cut

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

is_el    = ['abs(Lepton_pdgId[0])==11']
is_mu    = ['abs(Lepton_pdgId[0])==13']
#is_el_ho    = ['abs(Lepton_pdgId[0])==11 && !hole_ex[0]']
#is_mu_ho    = ['abs(Lepton_pdgId[0])==13 && !hole_ex[0]']

#veto_1l      = ['Alt$(Lepton_pt[1],0)<10.']
#veto_1l_I    = ['(nLepton>=2 && Lepton_pt[1] > 20)']
mt_lmet      = ['mtw1 > 80']
mt_lmet_I    = ['mtw1 < 30']
met          = ['PuppiMET_pt > 30']
met_I        = ['PuppiMET_pt < 30']
#dphi_l_jj    = ['MHlnjj_dphi_jjVl < 1.8']
#dphi_ljj_met = ['MHlnjj_dphi_ljjVmet > 2.']
#dr_l_jj      = ['MHlnjj_dr_jjVl < 3.']
#pt_ljj       = ['MHlnjj_pt_ljj > 60']
#pt_ljj_I     = ['MHlnjj_pt_ljj < 60']
veto_1l      = ['Alt$(Lepton_pt[1],0)<10.']
veto_1l_I    = ['(nLepton>=2 && Lepton_pt[1] > 20)']
veto_b       = ['bVeto']
veto_b_I     = ['bReq']
no_boo 	     = ['!boosted_nocut_tau_up']
m_jj         = ['( HM_Whad_mass > 65. && HM_Whad_mass < 105.)']
two_jet_res  = ['two_jet_res']
m_jj_I       = ['(HM_Whad_mass < 65. || HM_Whad_mass > 105.)']
#hole       = ['!hole_ex[0]']

#SC       = super_cut
#SR       = combinecut([super_cut, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b  , veto_1l  ])
#CR       = combinecut([super_cut, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj_I, veto_b  , veto_1l  ])
#SB       = combinecut([super_cut, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj_I, veto_b  , veto_1l  ])
#TCR      = combinecut([super_cut, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b_I, veto_1l  ])
#DYCR     = combinecut([super_cut, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b  , veto_1l_I])
#QER      = combinecut([super_cut, mt_lmet_I, met_I, dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b  , veto_1l  ])


SC       = super_cut
SR       = combinecut([super_cut, mt_lmet  , met  , m_jj, veto_b  , veto_1l  ])
CR       = combinecut([super_cut, mt_lmet  , met  , m_jj, veto_b  , veto_1l  ])
SB       = combinecut([super_cut, mt_lmet  , met  , m_jj, veto_b  , veto_1l  ])
TCR      = combinecut([super_cut, mt_lmet  , met  , m_jj, veto_b_I, veto_1l  ])
#QER      = combinecut([super_cut, m_jj, met, veto_b, mt_lmet_I, veto_1l ])
#QER_met   = combinecut([super_cut, m_jj, veto_b  , veto_1l, met])
QER      = combinecut([super_cut, m_jj, met_I, veto_b, veto_1l ])
QER_imet      = combinecut([super_cut, m_jj, met_I, mt_lmet_I,veto_b, veto_1l ])
QER_ho      = combinecut([super_cut_2, m_jj, met_I, veto_b, mt_lmet_I, veto_1l ])

## Electron
#addcut('ElCh_SC'  , combinecut([is_el, SC  ]))
#addcut('ElCh_SR'  , combinecut([is_el, SR  ]))
##addcut('ElCh_CR'  , combinecut([is_el, CR  ]))
#addcut('ElCh_SB'  , combinecut([is_el, SB  ]))
#addcut('ElCh_TCR' , combinecut([is_el, TCR ]))
##addcut('ElCh_DYCR', combinecut([is_el, DYCR]))
#addcut('ElCh_QER' , combinecut([is_el, QER]))
addcut('ElCh_QER_mt' , combinecut([is_el, QER_imet]))
#addcut('ElCh_QER_ho' , combinecut([is_el, QER_ho]))
#addcut('ElCh_QER_met' , combinecut([is_el, QER_met]))

## Muon
#addcut('MuCh_SC'  , combinecut([is_mu, SC  ]))
#addcut('MuCh_SR'  , combinecut([is_mu, SR  ]))
##addcut('MuCh_CR'  , combinecut([is_mu, CR  ]))
#addcut('MuCh_SB'  , combinecut([is_mu, SB  ]))
#addcut('MuCh_TCR' , combinecut([is_mu, TCR ]))
##addcut('MuCh_DYCR', combinecut([is_mu, DYCR]))
#addcut('MuCh_QER' , combinecut([is_mu, QER]))
addcut('MuCh_QER_mt' , combinecut([is_mu, QER_imet]))
#addcut('MuCh_QER_ho' , combinecut([is_mu, QER_ho]))
#addcut('MuCh_QER_met' , combinecut([is_mu, QER_met]))

## Inclusive
#addcut('InCh_SC'  , combinecut([SC  ]))
#addcut('InCh_SR'  , combinecut([SR  ]))
##addcut('InCh_CR'  , combinecut([CR  ]))
#addcut('InCh_SB'  , combinecut([SB  ]))
#addcut('InCh_TCR' , combinecut([TCR ]))
##addcut('InCh_DYCR', combinecut([DYCR]))uaddcut('InCh_QER' , combinecut([QER ]))
#addcut('InCh_QER' , combinecut([QER]))
addcut('InCh_QER' , combinecut([QER_imet]))
#addcut('InCh_QER_met' , combinecut([QER_met]))
#addcut('InCh_QER_ho' , combinecut([QER_ho]))
#addcut('InCh_QER_ho' , combinecut([QER, is_el_ho || is_mu_ho]))
#addcut('InCh_QER_two_met' , combinecut([QER_two_met ]))
#addcut('InCh_QER_no' , combinecut([QER_no ]))

# Mjj fit channel
#addcut('Mjj_CR'  , combinecut([CR]))

