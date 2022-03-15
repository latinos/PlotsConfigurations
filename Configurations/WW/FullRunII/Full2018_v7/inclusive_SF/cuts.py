# cuts

_tmp = [ 
    '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11 || Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
    'Lepton_pt[0]>25.',
    'Lepton_pt[1]>20.',
    '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
    'abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5',
    'mll>20.',
    'ptll>30.',
    'PuppiMET_pt > 20.',
    'mpmet > 20',
]

supercut = ' && '.join(_tmp)


def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

_tmp = [
    'zeroJet',
    'ZVeto',
    'bVeto',
       ]
addcut('SR_SF_0j', _tmp)


_tmp = [
    'oneJet',
    'ZVeto',
    'bVeto',
       ]
addcut('SR_SF_1j', _tmp)


_tmp = [
    'multiJet',
    'ZVeto',
    'bVeto',
       ]
addcut('SR_SF_2j', _tmp)


_tmp = [
    'zeroJet',
    'ZVeto',
    '((zeroJet && !bVeto) || bReq)',
       ]
addcut('topCR_SF_0j', _tmp)


_tmp = [
    'oneJet',
    'ZVeto',
    '((zeroJet && !bVeto) || bReq)',
       ]
addcut('topCR_SF_1j', _tmp)


_tmp = [
    'multiJet',
    'ZVeto',
    '((zeroJet && !bVeto) || bReq)',
       ]
addcut('topCR_SF_2j', _tmp)



