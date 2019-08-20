# cuts

supercut = 'Lepton_pt[0]>20 && Lepton_pt[1]>13 && Lepton_pt[2]>8'


cuts['mee']  = ' abs(Lepton_pdgId[0])==13 && Lepton_pdgId[1]*Lepton_pdgId[2]==-11*11   \
                 && Electron_lostHits[Lepton_electronIdx[1]]>=2 \
                 && Electron_lostHits[Lepton_electronIdx[1]] == Electron_lostHits[Lepton_electronIdx[2]]\
               '

cuts['emm']  = ' abs(Lepton_pdgId[0])==11 && Lepton_pdgId[1]*Lepton_pdgId[2]==-13*13   \
                 && Muon_lostHits[Lepton_muonIdx[1]]>=2 \
                 && Muon_lostHits[Lepton_muonIdx[1]] == Muon_lostHits[Lepton_muonIdx[2]]\
               '
cuts['eee']  = ' abs(Lepton_pdgId[0])==11 && Lepton_pdgId[1]*Lepton_pdgId[2]==-11*11   \
                 && Electron_lostHits[Lepton_electronIdx[1]]>=2 \
                 && Electron_lostHits[Lepton_electronIdx[1]] == Electron_lostHits[Lepton_electronIdx[2]]\
               '

cuts['mmm']  = ' abs(Lepton_pdgId[0])==13 && Lepton_pdgId[1]*Lepton_pdgId[2]==-13*13   \
                 && Muon_lostHits[Lepton_muonIdx[1]]>=2 \
                 && Muon_lostHits[Lepton_muonIdx[1]] == Muon_lostHits[Lepton_muonIdx[2]]\
               '
'''
cuts['Zee0j']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                   && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
                   && mll>80 && mll<100 \
                   && ( Jet_pt[0] < 30 ) \
                 '

cuts['Zmm0j']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                   && mll>80 && mll<100 \
                   && ( Jet_pt[0] < 30 ) \
                 '

cuts['Zee1j']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                   && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
                   && mll>80 && mll<100 \
                   && ( Jet_pt[0] >= 30 ) \
                   && ( Jet_pt[1] < 30 ) \
                 '

cuts['Zmm1j']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                   && mll>80 && mll<100 \
                   && ( Jet_pt[0] >= 30 ) \
                   && ( Jet_pt[1] < 30 ) \
                 '
'''
