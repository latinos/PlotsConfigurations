super_cut = [ 
    'nLepton == 1',
    # SingleMuon trigger: IsoMu27, SingleElectron trigger: Ele35_WPTight_Gsf
    '((Lepton_pt[0]>27. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>35. && abs(Lepton_pdgId[0])==11))',
    'nCleanJet >= 1',
    'PuppiMET_pt < 30',
]

supercut = ' && '.join(super_cut)

def combinecut(cut_list):
    comb_cut = []
    for cut in cut_list:
        comb_cut.extend(cut)
    return comb_cut

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

veto_b   = ['bVeto']
is_el    = ['abs(Lepton_pdgId[0])==11']
is_mu    = ['abs(Lepton_pdgId[0])==13']
tight    = ['WPTight[0] > 0.5']

#for Jet_Et in [10, 15, 20, 25, 30, 35, 40, 45]:
for Jet_Et in [  35]:
    pass_jet = ['PassJet_Et'+str(Jet_Et)+' > 0.5']
    
    # Electron
    addcut('ElCh_JetEt'+str(Jet_Et)+'_loose' , combinecut([super_cut, pass_jet, is_el]))
    addcut('ElCh_JetEt'+str(Jet_Et)+'_tight' , combinecut([super_cut, pass_jet, is_el, tight]))
    
    # Muon
    addcut('MuCh_JetEt'+str(Jet_Et)+'_loose' , combinecut([super_cut, pass_jet, is_mu]))
    addcut('MuCh_JetEt'+str(Jet_Et)+'_tight' , combinecut([super_cut, pass_jet, is_mu, tight]))

