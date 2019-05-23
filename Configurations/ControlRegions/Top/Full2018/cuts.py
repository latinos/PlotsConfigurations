# cuts

 # cuts

_tmp = [ 
    'Lepton_pt[0]>20. && Lepton_pt[1]>13.' ,
    '(abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25)',
    '(abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13)', 
    '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
    'fabs(Lepton_eta[0])<2.5 && fabs(Lepton_eta[1])<2.5',
    'mll>12.',
    'PuppiMET_pt > 20.',
    'ptll > 30.',
    'mth > 60.',
    'Lepton_pdgId[0]*Lepton_pdgId[1] <0',
    ]

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)


_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)<30',
     'btag0',
       ]
addcut('top_0j_df', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     'btag1',
       ]
addcut('top_1j_df', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'Lepton_pt[1]>20', 
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
     'btag2',
       ]
addcut('top_2j_df', _tmp)

