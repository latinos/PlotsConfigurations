 # cuts

_tmp = [ 
     'mll>20.',
     'Lepton_pt[0]>25.',
     'Lepton_pt[1]>20.',
     '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
     'abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5',
     ]

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

#Synchronisation
_tmp = [
    'ptll>30.',
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
    'fabs(mll - 91.1876) > 15.',
    'Sum$(abs(CleanJet_eta)>2.5) == 0',
    bVeto,
    ]

addcut('Control_Synch_DY_Incl_mm_out', _tmp)

#Inclusive
_tmp = [
    '1'
     ]

addcut('Control_inclusive_ll', _tmp)

_tmp = [
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11'
     ]

addcut('Control_inclusive_ee', _tmp)

_tmp = [
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13'
     ]

addcut('Control_inclusive_mm', _tmp)

_tmp = [
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13'
     ]

addcut('Control_inclusive_of', _tmp)

# DY Control region
_tmp = [
    'Sum$(abs(CleanJet_eta)>2.5) == 0',
     'Alt$(CleanJet_pt[0],0)>30.',
     'Alt$(CleanJet_pt[1],0)>30.',
     'PuppiMET_pt < 50.',
     'mll>60.',
     'mll<120.'
     ]

addcut('Control_DY_ll', _tmp)

_tmp = [
    'Sum$(abs(CleanJet_eta)>2.5) == 0',
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
     'Alt$(CleanJet_pt[0],0)>30.',
     'Alt$(CleanJet_pt[1],0)>30.',
     'PuppiMET_pt < 50.',
     'mll>60.',
     'mll<120.'
     ]

addcut('Control_DY_ee', _tmp)

_tmp = [
    'Sum$(abs(CleanJet_eta)>2.5) == 0',
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
    'Alt$(CleanJet_pt[0],0)>30.',
    'Alt$(CleanJet_pt[1],0)>30.',
    'PuppiMET_pt < 50.',
    'mll>60.',
    'mll<120.'
    ]

addcut('Control_DY_mm', _tmp)

_tmp = [
         'Sum$(abs(CleanJet_eta)>2.5) == 0', 
         'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
         'Alt$(CleanJet_pt[0],0)>30.',
         'Alt$(CleanJet_pt[1],0)>30.',
         'PuppiMET_pt < 50.',
         'mll>60.',
         'mll<120.'
         ]

addcut('Control_DY_of', _tmp)

#_tmp = [
#     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11 || Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
#     'Alt$(CleanJet_pt[0],0)>30.',
#     'Alt$(CleanJet_pt[1],0)>30.',
#     'PuppiMET_pt < 50.',
#     'mll>60.',
#     'mll<120.'
#     ]

#addcut('Control_DY_sf', _tmp)

#Top control region
_tmp = [
         'Sum$(abs(CleanJet_eta)>2.5) == 0',
         'Alt$(CleanJet_pt[0],0)>30.',
         'Alt$(CleanJet_pt[1],0)>30.',
         'PuppiMET_pt > 50.',
         'mll < 76. || mll > 106.',
         bOne
     ]

addcut('Control_Top_ll', _tmp)

_tmp = [
    'Sum$(abs(CleanJet_eta)>2.5) == 0',
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
    'Alt$(CleanJet_pt[0],0)>30.',
    'Alt$(CleanJet_pt[1],0)>30.',
    'PuppiMET_pt > 50.',
    'mll < 76. || mll > 106.',
    bOne
    ]

addcut('Control_Top_ee', _tmp)

_tmp = [
    'Sum$(abs(CleanJet_eta)>2.5) == 0',
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
    'Alt$(CleanJet_pt[0],0)>30.',
    'Alt$(CleanJet_pt[1],0)>30.',
    'PuppiMET_pt > 50.',
    'mll < 76. || mll > 106.',
    bOne
    ]

addcut('Control_Top_mm', _tmp)

#_tmp = [
#     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
#     'Alt$(CleanJet_pt[0],0)>30.',
#     'Alt$(CleanJet_pt[1],0)>30.',
#     'PuppiMET_pt > 50.',
#     'mll < 76. || mll > 106.',
#     bOne
#     ]

#addcut('Control_Top_of', _tmp)
