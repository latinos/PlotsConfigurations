 # cuts


_tmp = [ 
     'mll>20.',
     'Lepton_pt[0]>25.',
     'Lepton_pt[1]>20.',
     '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
     'fabs(Lepton_eta[0])<2.5 && fabs(Lepton_eta[1])<2.5',
     'MET_pt > 20.',
     'Sum$(abs(CleanJet_eta)>2.5) == 0',
       ]

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)


# Jet_btagDeepB

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)<30',
     bVeto,
       ]

addcut('WW_0j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
      bVeto,
       ]

addcut('WW_1j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)<30',
     bVeto,
       ]

addcut('SS_0j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     bVeto,
        ]

addcut('SS_1j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)<30',
     '!'+bVeto,
       ]

addcut('Top_0j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll > 30.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     '!'+bVeto,
       ]

addcut('Top_1j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll < 30.',
     'mll<80.',
     'Alt$(CleanJet_pt[0],0)<30',
     bVeto,
       ]

addcut('DY_0j_em', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'ptll < 30.',
     'mll<80.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     bVeto,
        ]

addcut('DY_1j_em', _tmp)

