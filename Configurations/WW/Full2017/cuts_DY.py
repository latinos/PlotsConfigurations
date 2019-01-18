 # cuts


_tmp = [ 
     'ptll>30',
     'Lepton_pt[0]>25.',
     'Lepton_pt[1]>20.',
     '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
     'abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4',
       ]

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)


_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
     'abs(mll - 91.1876) < 15.',
     'Alt$(CleanJet_pt[0],0)>20.',
     'Alt$(CleanJet_pt[0],100)<30.',
     bVeto,
       ]

addcut('DY_0j_mm_noMET', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
     'abs(mll - 91.1876) < 15.',
     'Alt$(CleanJet_pt[0],0)>30.',
     'Alt$(CleanJet_pt[1],0)>20.',
     'Alt$(CleanJet_pt[1],100)<30.',
     bVeto,
       ]

addcut('DY_1j_mm_noMET', _tmp)


_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
     'abs(mll - 91.1876) < 15.',
     'Alt$(CleanJet_pt[0],0)>20.',
     'Alt$(CleanJet_pt[0],100)<30.',
     bVeto,
       ]

addcut('DY_0j_ee_noMET', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
     'abs(mll - 91.1876) < 15.',
     'Alt$(CleanJet_pt[0],0)>30.',
     'Alt$(CleanJet_pt[1],0)>20.',
     'Alt$(CleanJet_pt[1],100)<30.',
     bVeto,
       ]

addcut('DY_1j_ee_noMET', _tmp)


_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
     'abs(mll - 91.1876) < 15.',
     bVeto,
       ]

addcut('DY_Incl_mm_noMET', _tmp)


_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
     'abs(mll - 91.1876) < 15.',
     bVeto,
       ]

addcut('DY_Incl_ee_noMET', _tmp)
