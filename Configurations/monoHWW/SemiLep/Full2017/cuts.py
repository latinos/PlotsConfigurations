# cuts

_tmp = [ 
    '(nLepton>=1 && Alt$(Lepton_pt[1],0)<10.)',
    '(Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 || Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5)'
    '((Lepton_pt[0]>30. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>38. && abs(Lepton_pdgId[0])==11))',
    'PuppiMET_pt > 30.',
    'Sum$(CleanJet_pt>30.)>=2',
]

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)


_tmp = [
    'bVeto',
]

addcut('Supercut_Control', _tmp)



_tmp = [
    'bVeto',
    'fabs(Whad_mass - 80.4) < 15.'
]

addcut('Resolved_SR', _tmp)



_tmp = [
    'bReq',
    'fabs(Whad_mass - 80.4) < 15.'
]

addcut('Resolved_TopCR', _tmp)



_tmp = [
    'bVeto',
    'fabs(Whad_mass - 80.4) > 15.',
    'Whad_mass > 0.'
]

addcut('Resolved_SB', _tmp)



_tmp = [
    'bReq',
    'fabs(Whad_mass - 80.4) > 15.',
    'Whad_mass > 0.'
]

addcut('Resolved_SB_Top', _tmp)



