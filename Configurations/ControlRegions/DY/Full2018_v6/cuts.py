# cuts

supercut = 'mll>60 && mll<120 && Lepton_pt[0]>25 && Lepton_pt[1]>13 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5'

cuts['Zee']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11) '

cuts['Zmm']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13) '

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



