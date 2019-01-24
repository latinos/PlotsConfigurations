 # cuts


_tmp = [ 
     'mll>20.',
     'Lepton_pt[0]>25.',
     'Lepton_pt[1]>20.',
     '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
     'abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4',
     'MET_pt > 20.',
       ]

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)


# Jet_btagDeepB

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)>20.',
     'Alt$(CleanJet_pt[0],100)<30.',
      bVeto,
       ]

addcut('WW_0j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)>30.',
     'Alt$(CleanJet_pt[1],0)>20.',
     'Alt$(CleanJet_pt[1],100)<30.',
      bVeto,
       ]

addcut('WW_1j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)>20.',
     'Alt$(CleanJet_pt[0],100)<30.',
     bVeto,
       ]

addcut('SS_0j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)>30.',
     'Alt$(CleanJet_pt[1],0)>20.',
     'Alt$(CleanJet_pt[1],100)<30.',
     bVeto,
        ]

addcut('SS_1j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)>20.',
     'Alt$(CleanJet_pt[0],100)<30.',
     '!'+bVeto,
       ]

addcut('Top_0j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)>30.',
     'Alt$(CleanJet_pt[1],0)>20.',
     'Alt$(CleanJet_pt[1],100)<30.',
     '!'+bVeto,
       ]

addcut('Top_1j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll < 30.',
     'mll<80.',
     'Alt$(CleanJet_pt[0],0)>20.',
     'Alt$(CleanJet_pt[0],100)<30.',
     bVeto,
       ]

addcut('DY_0j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll < 30.',
     'mll<80.',
     'Alt$(CleanJet_pt[0],0)>30.',
     'Alt$(CleanJet_pt[1],0)>20.',
     'Alt$(CleanJet_pt[1],100)<30.',
     bVeto,
        ]

addcut('DY_1j_em', _tmp)

