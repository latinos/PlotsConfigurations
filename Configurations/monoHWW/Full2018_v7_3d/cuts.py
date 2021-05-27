# cuts

_tmp = [ 
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
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


_tmp = [
    'mth > 50.',
    'drll < 1.0',
    'bVeto',
       ]

addcut('SR_Incl_drll1', _tmp)


_tmp = [
    'mth > 50.',
    'drll > 1.0',
    'drll < 1.5',
    'bVeto',
       ]

addcut('SR_Incl_drll2', _tmp)


_tmp = [
    'mth > 50.',
    'drll > 1.5',
    'drll < 2.5',
    'bVeto',
       ]

addcut('SR_Incl_drll3', _tmp)

# # _tmp = [
# #     'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
# #     'mth > 50.',
# #     'drll < 1.5',
# #     'bVeto',
# #        ]

# # addcut('SS_Incl', _tmp)


_tmp = [
    'mth < 50.',
    'drll < 2.5',
    'bVeto',
       ]

addcut('DYttCR_Incl', _tmp)


_tmp = [
    'mth > 50.',
    'drll > 2.5',
    'bVeto',
       ]

addcut('WWCR_Incl', _tmp)


_tmp = [
    'mth > 50.',
    'drll < 2.5',
    '(bReq || (!bVeto && zeroJet))',
       ]

addcut('TopCR_Incl', _tmp)

