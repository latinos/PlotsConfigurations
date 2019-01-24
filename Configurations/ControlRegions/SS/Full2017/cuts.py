# cuts

#cuts = {}

_tmp = [
    'Lepton_pt[0] > 25. && Lepton_pt[1] > 10.',
    '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10)',
    'abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4',
    'mll > 12.',
    'MET_pt > 20.',
    'ptll > 30.',
    'Lepton_pdgId[0] * Lepton_pdgId[1] > 0'
]
supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)
  
### OF
_tmp = [
    'Lepton_pdgId[0] * Lepton_pdgId[1] ==11*13',
    'mth > 60.',
    'Alt$(CleanJet_pt[0],0)>20',
    'Alt$(CleanJet_pt[0],100)<30'
]
addcut('hww2l2v_13TeV_ss_of0j', _tmp)

_tmp = [
    'Lepton_pdgId[0] * Lepton_pdgId[1] ==11*13',
    'mth > 60.',
    'Alt$(CleanJet_pt[0],0)>30',
    'Alt$(CleanJet_pt[1],0)>20',
    'Alt$(CleanJet_pt[1],100)<30'
]
addcut('hww2l2v_13TeV_ss_of1j', _tmp)

_tmp = [
    'Lepton_pdgId[0] * Lepton_pdgId[1] ==11*13',
    'mth > 60.',
    'Alt$(CleanJet_pt[0],0)>30',
    'Alt$(CleanJet_pt[1],0)>30'
]
addcut('hww2l2v_13TeV_ss_of2j', _tmp)

### em
_tmp = [
    '(Lepton_pdgId[0] == 11 || Lepton_pdgId[0] == -11)',
    '(Lepton_pdgId[1] == 13 || Lepton_pdgId[1] == -13)',
    'mth > 60.',
    'Alt$(CleanJet_pt[0],0)>20',
    'Alt$(CleanJet_pt[0],100)<30'
]
addcut('hww2l2v_13TeV_ss_em0j', _tmp)

_tmp = [
    '(Lepton_pdgId[0] == 11 || Lepton_pdgId[0] == -11)',
    '(Lepton_pdgId[1] == 13 || Lepton_pdgId[1] == -13)',
    'mth > 60.',
    'Alt$(CleanJet_pt[0],0)>30',
    'Alt$(CleanJet_pt[1],0)>20',
    'Alt$(CleanJet_pt[1],100)<30'
]
addcut('hww2l2v_13TeV_ss_em1j', _tmp)

_tmp = [
    '(Lepton_pdgId[0] == 11 || Lepton_pdgId[0] == -11)',
    '(Lepton_pdgId[1] == 13 || Lepton_pdgId[1] == -13)',
    'mth > 60.',
    'Alt$(CleanJet_pt[0],0)>30',
    'Alt$(CleanJet_pt[1],0)>30'
]
addcut('hww2l2v_13TeV_ss_em2j', _tmp)

### me
_tmp = [
    '(Lepton_pdgId[0] == 13 || Lepton_pdgId[0] == -13)',
    '(Lepton_pdgId[1] == 11 || Lepton_pdgId[1] == -11)',
    'mth > 60.',
    'Alt$(CleanJet_pt[0],0)>20',
    'Alt$(CleanJet_pt[0],100)<30'
]
addcut('hww2l2v_13TeV_ss_em0j', _tmp)

_tmp = [
    '(Lepton_pdgId[0] == 13 || Lepton_pdgId[0] == -13)',
    '(Lepton_pdgId[1] == 11 || Lepton_pdgId[1] == -11)',
    'mth > 60.',
    'Alt$(CleanJet_pt[0],0)>30',
    'Alt$(CleanJet_pt[1],0)>20',
    'Alt$(CleanJet_pt[1],100)<30'
]
addcut('hww2l2v_13TeV_ss_em1j', _tmp)

_tmp = [
    '(Lepton_pdgId[0] == 13 || Lepton_pdgId[0] == -13)',
    '(Lepton_pdgId[1] == 11 || Lepton_pdgId[1] == -11)',
    'mth > 60.',
    'Alt$(CleanJet_pt[0],0)>30',
    'Alt$(CleanJet_pt[1],0)>30'
]
addcut('hww2l2v_13TeV_ss_em2j', _tmp)

### ee
_tmp = [
    'Lepton_pdgId[0] * Lepton_pdgId[1] ==11*11',
    '(abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1]>13)',
    'mth > 60.',
    'fabs(mll-91.2) > 20.',
    'Alt$(CleanJet_pt[0],0)>20',
    'Alt$(CleanJet_pt[0],100)<30'
]
addcut('hww2l2v_13TeV_ss_ee0j', _tmp)

_tmp = [
    'Lepton_pdgId[0] * Lepton_pdgId[1] ==11*11',
    '(abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1]>13)',
    'mth > 60.',
    'fabs(mll-91.2) > 20.',
    'Alt$(CleanJet_pt[0],0)>30',
    'Alt$(CleanJet_pt[1],0)>20',
    'Alt$(CleanJet_pt[1],100)<30'
]
addcut('hww2l2v_13TeV_ss_ee1j', _tmp)

_tmp = [
    'Lepton_pdgId[0] * Lepton_pdgId[1] ==11*11',
    '(abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1]>13)',
    'mth > 60.',
    'fabs(mll-91.2) > 20.',
    'Alt$(CleanJet_pt[0],0)>30',
    'Alt$(CleanJet_pt[1],0)>30',
    'Alt$(CleanJet_pt[2],0)>20',
]
addcut('hww2l2v_13TeV_ss_ee2j', _tmp)

### mm
_tmp = [
    'Lepton_pdgId[0] * Lepton_pdgId[1] ==13*13',
    '(abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1]>13)',
    'mth > 60.',
    'fabs(mll-91.2) > 20.',
    'Alt$(CleanJet_pt[0],0)>20',
    'Alt$(CleanJet_pt[0],100)<30'
]
addcut('hww2l2v_13TeV_ss_mm0j', _tmp)

_tmp = [
    'Lepton_pdgId[0] * Lepton_pdgId[1] ==13*13',
    '(abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1]>13)',
    'mth > 60.',
    'fabs(mll-91.2) > 20.',
    'Alt$(CleanJet_pt[0],0)>30',
    'Alt$(CleanJet_pt[1],0)>20',
    'Alt$(CleanJet_pt[1],100)<30'
]
addcut('hww2l2v_13TeV_ss_mm1j', _tmp)

_tmp = [
    'Lepton_pdgId[0] * Lepton_pdgId[1] ==13*13',
    '(abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1]>13)',
    'mth > 60.',
    'fabs(mll-91.2) > 20.',
    'Alt$(CleanJet_pt[0],0)>30',
    'Alt$(CleanJet_pt[1],0)>30',
    'Alt$(CleanJet_pt[2],0)>20',
]
addcut('hww2l2v_13TeV_ss_mm2j', _tmp)
