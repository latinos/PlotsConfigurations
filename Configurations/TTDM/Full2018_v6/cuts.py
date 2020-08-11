# cuts

supercut = '1'
cuts['mainCR_ll']  = '1'
cuts['mainCR_ee']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)'
cuts['mainCR_mm']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)'
cuts['mainCR_df']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)'

cuts['dyCR_ll'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (PuppiMET_pt > 50. && (mll > 76 && mll < 106)))'
cuts['dyCR_ee'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (PuppiMET_pt > 50. && (mll > 76 && mll < 106))) && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)'
cuts['dyCR_mm'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (PuppiMET_pt > 50. && (mll > 76 && mll < 106))) && (Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)'
cuts['dyCR_df'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (PuppiMET_pt > 50. && (mll > 76 && mll < 106))) && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)'

#cuts['Zee']  = {
#   'expr' : '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)',
#   'categories' : {
#      '0j' : 'zeroJet',
#      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
#      '2j' : 'multiJet',
#   }
#}
#
#cuts['Zmm']  = {
#   'expr' : '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)',
#   'categories' : {
#      '0j' : 'zeroJet',
#      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
#      '2j' : 'multiJet',
#   }
#}



