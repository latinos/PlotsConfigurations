super_cut = [ 
#    'nLeptonGen>=1',
    '1.',
]

supercut = ' && '.join(super_cut)

def combinecut(cut_list):
    comb_cut = []
    for cut in cut_list:
        comb_cut.extend(cut)
    return comb_cut

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

#tk_jets   = ['(abs(CleanJet_eta[HM_idx_j1]) < 2.4 && abs(CleanJet_eta[HM_idx_j2]) < 2.4)']
#lep_kin   = ['((GenDressedLepton_pt[0]>20. && abs(GenDressedLepton_pdgId[0])==13) || (GenDressedLepton_pt[0]>20. && abs(GenDressedLepton_pdgId[0])==11)) &&  Sum$(GenJetAK8_pt>180)>0']
lep_kin   = ['((GenDressedLepton_pt[0]>20. && abs(GenDressedLepton_pdgId[0])==13) || (GenDressedLepton_pt[0]>20. && abs(GenDressedLepton_pdgId[0])==11))']
fat_kin   = ['boos_kfac[0]']
nofat_kin   = ['no_boo[0]']
#clean_j   = ['MHlnjj_m_jj > -1', 'Sum$(CleanJet_pt>30.)>=2']

#SC       = super_cut
#LEP      = combinecut([super_cut, lep_kin])
#JET      = combinecut([super_cut, clean_j, lep_kin])
NOM      = combinecut([super_cut, lep_kin, fat_kin])
opp      = combinecut([super_cut, lep_kin, nofat_kin])
#NTK      = combinecut([super_cut, clean_j, lep_kin])

## Inclusive
#addcut('SC'   , combinecut([SC  ]))
#addcut('LEP'  , combinecut([LEP  ]))
#addcut('JET'  , combinecut([JET  ]))
addcut('NOM'  , combinecut([NOM  ]))
addcut('OPP'  , combinecut([opp  ]))
#clean_j   = ['Sum$(CleanJet_pt>30.)>=2', 'MHlnjj_m_jj > -1']

#SC       = super_cut
#LEP      = combinecut([super_cut, lep_kin])
#JET      = combinecut([super_cut, clean_j, lep_kin])
#NOM      = combinecut([super_cut, lep_kin])
#NTK      = combinecut([super_cut, clean_j, lep_kin])

## Inclusive
#addcut('SC'   , combinecut([SC  ]))
#addcut('LEP'  , combinecut([LEP  ]))
#addcut('JET'  , combinecut([JET  ]))
#addcut('NOM'  , combinecut([NOM  ]))
#addcut('NTK'  , combinecut([NTK  ]))

## Analysis regions to check heal
#mt_lmet      = ['mtw1 > 80']
#mt_lmet_I    = ['mtw1 < 30']
#met          = ['PuppiMET_pt > 60']
#met_I        = ['PuppiMET_pt < 30']
#dphi_l_jj    = ['MHlnjj_dphi_jjVl < 1.8']
#dphi_ljj_met = ['MHlnjj_dphi_ljjVmet > 2.']
#dr_l_jj      = ['MHlnjj_dr_jjVl < 3.']
#pt_ljj       = ['MHlnjj_pt_ljj > 60']
#pt_ljj_I     = ['MHlnjj_pt_ljj < 60']
#veto_1l      = ['Alt$(Lepton_pt[1],0)<10.']
#veto_1l_I    = ['(nLepton>=2 && Lepton_pt[1] > 20)']
#veto_b       = ['bVeto']
#veto_b_I     = ['bReq']
#m_jj         = ['(MHlnjj_m_jj > 65. && MHlnjj_m_jj < 105.)']
#m_jj_I       = ['(MHlnjj_m_jj < 65. || MHlnjj_m_jj > 105.)']
#
#SR       = combinecut([super_cut, clean_j, lep_kin, tk_jets, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b  , veto_1l  ])
#SB       = combinecut([super_cut, clean_j, lep_kin, tk_jets, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj_I, veto_b  , veto_1l  ])
#SBi      = combinecut([super_cut, clean_j, lep_kin, tk_jets, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj          , veto_b  , veto_1l  ])
#SBii     = combinecut([super_cut, clean_j, lep_kin, tk_jets, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj                    , veto_1l  ])
#TCR      = combinecut([super_cut, clean_j, lep_kin, tk_jets, mt_lmet  , met  , dphi_l_jj, dphi_ljj_met, dr_l_jj, pt_ljj  , m_jj  , veto_b_I, veto_1l  ])

#addcut('SR'  , combinecut([SR  ]))
#addcut('SB'  , combinecut([SB  ]))
#addcut('SBi' , combinecut([SBi ]))
#addcut('SBii', combinecut([SBii]))