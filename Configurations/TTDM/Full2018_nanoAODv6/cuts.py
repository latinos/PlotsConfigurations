#cuts

#cuts = {}

_tmp = [
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || PuppiMET_pt > 50.)',
]
supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

#Main CR
_tmp = [
    'Alt$(CleanJet_pt[1], 0) >= 30.'
]
addcut('mainCR_ll_2j', _tmp)

_tmp = [
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11) && Alt$(CleanJet_pt[1], 0) >= 30.',
]
addcut('mainCR_ee_2j', _tmp)

_tmp = [
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13) && Alt$(CleanJet_pt[1], 0) >= 30.',
]
addcut('mainCR_mm_2j', _tmp)

_tmp = [
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && Alt$(CleanJet_pt[1], 0) >= 30.',
]
addcut('mainCR_df_2j', _tmp)


#DY CR
_tmp = [
    'Alt$(CleanJet_pt[1], 0) >= 30. && (mll > 76 && mll < 106)'
]
addcut('dyCR_ll_2j', _tmp)

_tmp = [
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11) && Alt$(CleanJet_pt[1], 0) >= 30. && (mll > 76 && mll < 106)',
]
addcut('dyCR_ee_2j', _tmp)

_tmp = [
    '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13) && Alt$(CleanJet_pt[1], 0) >= 30. && (mll > 76 && mll < 106)',
]
addcut('dyCR_mm_2j', _tmp)


