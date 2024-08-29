# cuts

_tmp = [
    '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)',
    'Lepton_pt[0]>25.',
    'Lepton_pt[1]>20.',
    '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
    'abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5',
    'mll>20.',
    'PuppiMET_pt > 20.',
    'ptll > 30.',
    'mth > 60.',
] ##mth > 60 to kill onshell - selections cross-reference dnn_ntuplemaker.py cuts

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

_tmp = [
    'zeroJet',
    'bVeto', 
    'dnnScore_ggH_OFF_0j > .5',
       ]
addcut('SR_ggH_OFF_0j', _tmp)

_tmp = [
    'zeroJet',
    'bVeto', 
    'dnnScore_ggH_ON_0j > .5',
       ]
addcut('CR_ggH_ON_0j', _tmp)

_tmp = [
    'zeroJet',
    'bVeto',
    'dnnScore_WW_0j > .5',
       ]
addcut('WWCR_0j', _tmp)

_tmp = [
    'zeroJet',
    '(bReq || (!bVeto && zeroJet))',
    'dnnScore_top_0j > .5',
       ]
addcut('topCR_0j', _tmp)

