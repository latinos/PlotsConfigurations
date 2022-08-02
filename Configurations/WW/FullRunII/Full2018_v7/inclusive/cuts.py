

# cuts

_tmp = [ 
    '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)',
    'Lepton_pt[0]>25.',
    'Lepton_pt[1]>20.',
    '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
    'abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5',
    'mll>20.',
    'PuppiMET_pt > 20.',
    'mpmet > 20',
]

supercut = ' && '.join(_tmp)


def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)


_tmp = [
    'ptll>30.',
    'zeroJet',
    'bVeto',
       ]
addcut('SR_DF_0j', _tmp)


_tmp = [
    'ptll>30.',
    'oneJet',
    'bVeto',
       ]
addcut('SR_DF_1j', _tmp)


_tmp = [
    'ptll>30.',
    'multiJet',
    'bVeto',
       ]
addcut('SR_DF_2j', _tmp)


_tmp = [
    'ptll>30.',
    'zeroJet',
    '((zeroJet && !bVeto) || bReq)',
       ]
addcut('topCR_DF_0j', _tmp)


_tmp = [
    'ptll>30.',
    'oneJet',
    '((zeroJet && !bVeto) || bReq)',
       ]
addcut('topCR_DF_1j', _tmp)


_tmp = [
    'ptll>30.',
    'multiJet',
    '((zeroJet && !bVeto) || bReq)',
       ]
addcut('topCR_DF_2j', _tmp)


_tmp = [
    'zeroJet',
    'bVeto',
    'ptll < 30.',
    'mll < 80.',
       ]
addcut('DYCR_DF_0j', _tmp)


_tmp = [
    'oneJet',
    'bVeto',
    'ptll < 30.',
    'mll < 80.',
       ]
addcut('DYCR_DF_1j', _tmp)


_tmp = [
    'multiJet',
    'bVeto',
    'ptll < 30.',
    'mll < 80.',
       ]
addcut('DYCR_DF_2j', _tmp)


