# cuts

_tmp = [ 
     'ptll>30.',
     'mll>20.',
     'Lepton_pt[0]>25.',
     'Lepton_pt[1]>20.',
     '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
     'fabs(Lepton_eta[0])<2.5 && fabs(Lepton_eta[1])<2.5',
     'Sum$(abs(CleanJet_eta)>2.5) == 0',
     'PuppiMET_pt>20.',
     'mpmet>20.',
       ]

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)



_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
     'fabs(mll - 91.1876) > 15.',
     'Alt$(CleanJet_pt[0],0)<30',
     bVeto,
       ]

addcut('DY_0j_mm_out', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
     'fabs(mll - 91.1876) > 15.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     bVeto,
       ]

addcut('DY_1j_mm_out', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
     'fabs(mll - 91.1876) > 15.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
     bVeto,
       ]

addcut('DY_2j_mm_out', _tmp)


_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
     'fabs(mll - 91.1876) > 15.',
     'Alt$(CleanJet_pt[0],0)<30',
     bVeto,
       ]

addcut('DY_0j_ee_out', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
     'fabs(mll - 91.1876) > 15.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     bVeto,
       ]

addcut('DY_1j_ee_out', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
     'fabs(mll - 91.1876) > 15.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
     bVeto,
       ]

addcut('DY_2j_ee_out', _tmp)



_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
     'fabs(mll - 91.1876) > 15.',
     bVeto,
       ]

addcut('DY_Incl_mm_out', _tmp)


_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
     'fabs(mll - 91.1876) > 15.',
     bVeto,
       ]

addcut('DY_Incl_ee_out', _tmp)




#--------------------------------------------------------------------------------------------

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
     'fabs(mll - 91.1876) < 15.',
     'Alt$(CleanJet_pt[0],0)<30',
      bVeto,
       ]

addcut('DY_0j_mm_in', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
     'fabs(mll - 91.1876) < 15.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     bVeto,
       ]

addcut('DY_1j_mm_in', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
     'fabs(mll - 91.1876) < 15.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
     bVeto,
       ]

addcut('DY_2j_mm_in', _tmp)


_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
     'fabs(mll - 91.1876) < 15.',
     'Alt$(CleanJet_pt[0],0)<30',
      bVeto,
       ]

addcut('DY_0j_ee_in', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
     'fabs(mll - 91.1876) < 15.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)<30',
     bVeto,
       ]

addcut('DY_1j_ee_in', _tmp)


_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
     'fabs(mll - 91.1876) < 15.',
     'Alt$(CleanJet_pt[0],0)>30',
     'Alt$(CleanJet_pt[1],0)>30',
     'Alt$(CleanJet_pt[2],0)<30',
     bVeto,
       ]

addcut('DY_2j_ee_in', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13',
     'fabs(mll - 91.1876) < 15.',
     bVeto,
       ]

addcut('DY_Incl_mm_in', _tmp)


_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11',
     'fabs(mll - 91.1876) < 15.',
     bVeto,
       ]

addcut('DY_Incl_ee_in', _tmp)


