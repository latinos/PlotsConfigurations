#cuts

#cuts = {}

_tmp = [
    'Lepton_pt[0] > 20. && Lepton_pt[1] > 10.',
    '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10)',
    'abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5',
]
supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

## Inclusive region
_tmp = [
    '1'
]
addcut('Inclusive', _tmp)

## DY control regions
_tmp = [
    'mll > 60.',
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)',
    'Lepton_pt[0]>25 && Lepton_pt[1]>13',
    'mll>60 && mll<120',
]
addcut('Control_Zee', _tmp)

_tmp = [
    'mll > 60.',
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*113)',
    'mll>60 && mll<120',
]
addcut('Control_Zmm', _tmp)

_tmp = [
    'mll > 60.',
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)',
    'Lepton_pt[0]>25 && Lepton_pt[1]>13',
    'mll>80 && mll<100',
    'Jet_pt[0] < 30'
]
addcut('Control_Zee0j', _tmp)

_tmp = [
    'mll > 60.',
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*113)',
    'mll>80 && mll<100',
    'Jet_pt[0] < 30'
]
addcut('Control_Zmm0j', _tmp)

_tmp = [
    'mll > 60.',
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)',
    'Lepton_pt[0]>25 && Lepton_pt[1]>13',
    'mll>80 && mll<100',
    'Jet_pt[0] >= 30 && Jet_pt[1] < 30'
]
addcut('Control_Zee1j', _tmp)

_tmp = [
    'mll > 60.',
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*113)',
    'mll>80 && mll<100',
    'Jet_pt[0] >= 30 && Jet_pt[1] < 30'
]
addcut('Control_Zmm1j', _tmp)

## Top control regions
_tmp = [
    'mll>60',
    'Alt$(CleanJet_pt[0],0)>20 && Alt$(CleanJet_pt[0],100)<30',
    'Alt$(CleanJet_pt[1],0)>20 && Alt$(CleanJet_pt[1],100)<30',
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
    'Jet_btagCSVV2[CleanJet_jetIdx[0]] > 0.5803',
    'Jet_btagCSVV2[CleanJet_jetIdx[1]] > 0.5803'
]
addcut('Control_tt0j', _tmp)

_tmp = [
    'mll>60',
    'Alt$(CleanJet_pt[0],0)>30',
    'Alt$(CleanJet_pt[1],0)>20 && Alt$(CleanJet_pt[1],100)<30',
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
    'Jet_btagCSVV2[CleanJet_jetIdx[0]] > 0.5803',
    'Jet_btagCSVV2[CleanJet_jetIdx[1]] > 0.5803'
]
addcut('Control_tt1j', _tmp)

_tmp = [
    'mll>60',
    'Alt$(CleanJet_pt[1],0)>30',
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
    'Jet_btagCSVV2[CleanJet_jetIdx[0]] > 0.5803',
    'Jet_btagCSVV2[CleanJet_jetIdx[1]] > 0.5803'
]
addcut('Control_tt2j', _tmp)

## Signal region
