super_cut = [ 
    '(nLepton>=1 && Alt$(Lepton_pt[1],0)<10.)',
    # SingleMuon trigger: IsoMu27, SingleElectron trigger: Ele35_WPTight_Gsf
    '((Lepton_pt[0]>27. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>35. && abs(Lepton_pdgId[0])==11))',
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
bVeto    = ['bVeto']
IbVeto   = ['bReq']
#QCDf    = ['mtw1 > 20', 'PuppiMET_pt > 20']
IQCDf    = ['mtw1 < 20', 'PuppiMET_pt < 20']
mtw      = ['mtw1 > 50']
mtwH     = ['mtw1 > 50', 'PuppiMET_pt > 50']

SC       = super_cut
FCR      = combinecut([IQCDf, super_cut])
MTW      = combinecut([mtw, super_cut])
NoB      = combinecut([ bVeto, mtwH, super_cut])
YeB      = combinecut([IbVeto, mtwH, super_cut])

# Electron
addcut('ElCh_SC' , combinecut([is_el, SC]))
addcut('ElCh_FCR', combinecut([is_el, FCR]))
addcut('ElCh_MTW', combinecut([is_el, MTW]))
addcut('ElCh_NoB', combinecut([is_el, NoB]))
addcut('ElCh_YeB', combinecut([is_el, YeB]))

# Muon
addcut('MuCh_SC'  , combinecut([is_mu, SC]))
addcut('MuCh_FCR' , combinecut([is_mu, FCR]))
addcut('MuCh_MTW' , combinecut([is_mu, MTW]))
addcut('MuCh_NoB' , combinecut([is_mu, NoB]))
addcut('MuCh_YeB' , combinecut([is_mu, YeB]))

