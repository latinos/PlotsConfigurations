#cuts

#cuts = {}

_tmp = [
    'Lepton_pt[0] > 25. && Lepton_pt[1] > 20.',
    '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10)',
    '(Lepton_pdgId[0]*Lepton_pdgId[1]) < 0',
    'abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5',
    'mll > 20.',
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || PuppiMET_pt > 50.)',
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll < 76 || mll > 106))'
]
supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

## Top blinded region
_tmp = [
    'bReq && Alt$(CleanJet_pt[1], 0) >= 30.'
]
addcut('topCR_ll_2j', _tmp)

_tmp = [
    'bReq && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11) && Alt$(CleanJet_pt[1], 0) >= 30.',
]
addcut('topCR_ee_2j', _tmp)

_tmp = [
    'bReq && (Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13) && Alt$(CleanJet_pt[1], 0) >= 30.',
]
addcut('topCR_mm_2j', _tmp)

_tmp = [
    'bReq && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && Alt$(CleanJet_pt[1], 0) >= 30.',
]
addcut('topCR_df_2j', _tmp)


## Top blinded region with exactly 1 bjet
_tmp = [
    'bReq && Alt$(CleanJet_pt[1], 0) >= 30. && nbJet == 1'
]
addcut('topCR_ll_2j_1bj', _tmp)

_tmp = [
    'bReq && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11) && Alt$(CleanJet_pt[1], 0) >= 30. && nbJet == 1',
]
addcut('topCR_ee_2j_1bj', _tmp)

_tmp = [
    'bReq && (Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13) && Alt$(CleanJet_pt[1], 0) >= 30. && nbJet == 1',
]
addcut('topCR_mm_2j_1bj', _tmp)

_tmp = [
    'bReq && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && Alt$(CleanJet_pt[1], 0) >= 30. && nbJet == 1',
]
addcut('topCR_df_2j_1bj', _tmp)


## Top blinded region with exactly 2 b-jets
_tmp = [
    'bReq && Alt$(CleanJet_pt[1], 0) >= 30. && nbJet >= 2'
]
addcut('topCR_ll_2j_2bj', _tmp)

_tmp = [
    'bReq && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11) && Alt$(CleanJet_pt[1], 0) >= 30. && nbJet >= 2',
]
addcut('topCR_ee_2j_2bj', _tmp)

_tmp = [
    'bReq && (Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13) && Alt$(CleanJet_pt[1], 0) >= 30. && nbJet >= 2',
]
addcut('topCR_mm_2j_2bj', _tmp)

_tmp = [
    'bReq && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && Alt$(CleanJet_pt[1], 0) >= 30. && nbJet >= 2',
]
addcut('topCR_df_2j_2bj', _tmp)
