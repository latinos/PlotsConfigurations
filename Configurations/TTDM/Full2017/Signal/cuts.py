 # cuts


_tmp = [ 
     'mll>20.',
     'Lepton_pt[0]>25.',
     'Lepton_pt[1]>20.',
     '(nLepton>=2 && Alt$(Lepton_pt[2],0)<10.)',
     'abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4',
     'abs(CleanJet_pt[0]>30? CleanJet_eta[0]:0) < 2.4'
     ]

supercut = ' && '.join(_tmp)

def addcut(name, exprs):
    cuts[name] = ' && '.join(exprs)

#Signal region

_tmp = [
    '1'
     ]

addcut('Control_inclusive_ll', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'Alt$(CleanJet_pt[0],0)>30.',
     'Alt$(CleanJet_pt[1],0)>30.',
     'PuppiMET_pt > 50.',
     '(mll < 76. || mll > 106.)',
     bOne
     ]

addcut('Signal_Top_df', _tmp)

_tmp = [
     'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
     'Alt$(CleanJet_pt[0],0)>30.',
     'Alt$(CleanJet_pt[1],0)>30.',
     'PuppiMET_pt > 50.',
     '(mll < 76. || mll > 106.)'
     ]

addcut('Signal_Top_df_nobTag', _tmp)
