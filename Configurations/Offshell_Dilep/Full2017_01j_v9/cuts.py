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
##not using supercuts
supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)
#0jet
# _tmp = [
#     'zeroJet',
#        ]
# addcut('supercut_0j', _tmp)
##SR
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

#1jet
# _tmp = [
#     'oneJet',
#        ]
# addcut('supercut_1j', _tmp)
##SR
_tmp = [
    'oneJet',
    'bVeto', 
    'dnnScore_ggH_OFF_1j > .5',
       ]
addcut('SR_ggH_OFF_1j', _tmp)

_tmp = [
    'oneJet',
    'bVeto', 
    'dnnScore_ggH_ON_1j > .5',
       ]
addcut('CR_ggH_ON_1j', _tmp)

_tmp = [
    'oneJet',
    'bVeto',
    'dnnScore_WW_1j > .5',
    'dnnScore_top_1j < .1',
       ]
addcut('WWCR_1j', _tmp)

_tmp = [
    'oneJet',
    '(bReq || (!bVeto && zeroJet))',
    'dnnScore_top_1j > .5',
       ]
addcut('topCR_1j', _tmp)
