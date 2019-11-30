# cuts

### TO DO LIST: ###
# Remove !isWFat from https://github.com/latinos/LatinoAnalysis/blob/80d20d1499c6810c55156722541308a3460a3b44/NanoGardener/python/modules/HMlnjjVars.py#L227
# Check why there are Whad_mass = 0. events even when applying the suppercut

_tmp = [ 
    '(nLepton>=1 && Alt$(Lepton_pt[1],0)<10.)',
    '(Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 || Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5)',
    '((Lepton_pt[0]>30. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>38. && abs(Lepton_pdgId[0])==11))',
    'PuppiMET_pt > 30.',
    'Sum$(CleanJet_pt>30.)>=2',
]

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)


_tmp = [
    'abs(Lepton_pdgId[0])==11',
]

addcut('Supercut_Control_ele', _tmp)


_tmp = [
    'abs(Lepton_pdgId[0])==13',
]

addcut('Supercut_Control_mu', _tmp)


_tmp = [
    'abs(Lepton_pdgId[0])==11',
    'bVeto',
    'Whad_mass > 65. && Whad_mass < 105.'
]

addcut('Resolved_SR_ele', _tmp)


_tmp = [
    'abs(Lepton_pdgId[0])==13',
    'bVeto',
    'Whad_mass > 65. && Whad_mass < 105.'
]

addcut('Resolved_SR_mu', _tmp)



_tmp = [
    'abs(Lepton_pdgId[0])==11',
    'bReq',
    'Whad_mass > 65. && Whad_mass < 105.'
]

addcut('Resolved_TopCR_ele', _tmp)


_tmp = [
    'abs(Lepton_pdgId[0])==13',
    'bReq',
    'Whad_mass > 65. && Whad_mass < 105.'
]

addcut('Resolved_TopCR_mu', _tmp)



_tmp = [
    'abs(Lepton_pdgId[0])==11',
    'bVeto',
    'Whad_mass < 65. || Whad_mass > 105.',
    'Whad_mass > 0.' 
]

addcut('Resolved_SB_ele', _tmp)


_tmp = [
    'abs(Lepton_pdgId[0])==13',
    'bVeto',
    'Whad_mass < 65. || Whad_mass > 105.',
    'Whad_mass > 0.'
]

addcut('Resolved_SB_mu', _tmp)




