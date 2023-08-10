super_cut = [ 
    'nGenDressedLepton>=1',
 #   'MHlnjj_m_jj > -1', #Here to avoid -1 idex issue
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
lep_kin      = ['(GenDressedLepton_pt[0]>20. && abs(GenDressedLepton_pdgId[0])==13)']
jet_kin      = ['(nCleanGenJet>=2 || Sum$(GenJetAK8_pt>180)>0)']
jet_boosted  = ['(Sum$(GenJetAK8_pt>180)>0)']
jet_resolved = ['(nCleanGenJet>=2)']
jet_resolved_notboosted = ['(nCleanGenJet>=2)', '(Sum$(GenJetAK8_pt>180)==0)']
#clean_j   = ['MHlnjj_m_jj > -1', 'Sum$(CleanJet_pt>30.)>=2']

#SC       = super_cut
#LEP      = combinecut([super_cut, lep_kin])
#JET      = combinecut([super_cut, clean_j, lep_kin])
NOM       = combinecut([super_cut, lep_kin, jet_kin])
BOOSTED   = combinecut([super_cut, lep_kin, jet_boosted])
RESOLVED  = combinecut([super_cut, lep_kin, jet_resolved])
RESOLVED_NOTBOOSTED  = combinecut([super_cut, lep_kin, jet_resolved_notboosted])
#NTK      = combinecut([super_cut, clean_j, lep_kin])

## Inclusive
#addcut('SC'   , combinecut([SC  ]))
#addcut('LEP'  , combinecut([LEP  ]))
#addcut('JET'  , combinecut([JET  ]))
addcut('NOM'  , combinecut([NOM  ]))
addcut('BOOSTED'  , combinecut([BOOSTED  ]))
addcut('RESOLVED'  , combinecut([RESOLVED  ]))
addcut('RESOLVED_NOTBOOSTED'  , combinecut([RESOLVED_NOTBOOSTED  ]))
#addcut('NTK'  , combinecut([NTK  ]))
