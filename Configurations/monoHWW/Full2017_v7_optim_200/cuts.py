# cuts



_tmp = [ 
     'mll>12.',
     'Lepton_pt[0]>25.',
     'Lepton_pt[1]>20.',
     '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
     'PuppiMET_pt > 20.',
     'mpmet > 20.',
     'ptll > 30.',
       ]

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)



# _tmp = [
#     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
# #    'bVeto',
#        ]

# addcut('Supercut', _tmp)

# Jet_btagDeepB

_tmp = [
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
    'mth > 50.',
    'mll < 119.',
    'drll < 1.32',
    'bVeto',
       ]

addcut('SR_Incl', _tmp)

_tmp = [
    'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
    'mth > 50.',
    'mll < 119.',
    'drll < 1.32',
    'bVeto',
       ]

addcut('SS_Incl', _tmp)



_tmp = [
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
    'mth < 50.',
    'mll < 119.',
    'drll < 1.32',
    'bVeto',
       ]

addcut('DYttCR_Incl', _tmp)


_tmp = [
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
    'mth > 50.',
    'mll > 119.',
    'drll < 1.32',
    'bVeto',
       ]

addcut('WWCR1_Incl', _tmp)


_tmp = [
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
    'mth > 50.',
    'mll < 119.',
    'drll > 1.32',
    'bVeto',
       ]

addcut('WWCR2_Incl', _tmp)


_tmp = [
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
    'mth > 50.',
    'mll > 119.',
    'drll > 1.32',
    'bVeto',
       ]

addcut('WWCR3_Incl', _tmp)

# _tmp = [
#     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
#     'mth > 50.',
#     'mll > 119.',
#     'drll < 1.32',
#     'bVeto',
#     'zeroJet',
#        ]

# addcut('WWCR_0j', _tmp)


_tmp = [
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
    'mth > 50.',
    'mll < 119.',
    'drll < 1.32',
    '(bReq || (!bVeto && zeroJet))',
       ]

addcut('TopCR_Incl', _tmp)

