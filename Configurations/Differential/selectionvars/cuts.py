supercut = 'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13 && Lepton_pt[0]>25 && Lepton_pt[1]>13 && Sum$(Lepton_pt>10) == 2 && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 && bVeto'

cuts['all'] = {'expr': '1'}
