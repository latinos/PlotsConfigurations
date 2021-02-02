super_cut = [ 
    'nLepton == 2',
    'abs(Lepton_pdgId[0])==abs(Lepton_pdgId[1])',  # two leptons with same flavour
    'Lepton_pdgId[0]*Lepton_pdgId[1] < 0',         # lepton and anti lepton
    '(mll > 76 && mll < 106)',                       # mass on Z peak
    'WPTightL1[0] > 0.5',                          # second lepton must be tight
    # SingleMuon trigger: IsoMu27, SingleElectron trigger: Ele35_WPTight_Gsf
    '((Lepton_pt[1] < 23. && abs(Lepton_pdgId[1])==13) || (Lepton_pt[1] < 31. && abs(Lepton_pdgId[0])==11))', # force l[0] to fire trigger
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
tight    = ['WPTightL0[0] > 0.5']

addcut('ElCh_loose', combinecut([super_cut, is_el]))
addcut('MuCh_loose', combinecut([super_cut, is_mu]))
addcut('ElCh_tight', combinecut([super_cut, is_el, tight]))
addcut('MuCh_tight', combinecut([super_cut, is_mu, tight]))


