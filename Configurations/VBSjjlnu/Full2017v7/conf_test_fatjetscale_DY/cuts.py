# cuts

supercut = 'mll>60 && mll<120 && Lepton_pt[0]>25 && Lepton_pt[1]>13 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5'


cuts['Zee_cleanfatjet']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11) && nCleanFatJet >= 1'

cuts['Zmm_cleanfatjet']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13) && nCleanFatJet >= 1'


cuts['Zee_wjetslike']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11) && nCleanFatJet >= 1 && \
                        Alt$(CleanFatJet_pt[0], -99) >= 200 && \
                        Alt$(CleanFatJet_mass[0], -99)  > 40 && \
                        (Alt$(CleanFatJet_mass[0], -99) <= 70 || Alt$(CleanFatJet_mass[0], -99) >= 115)'

cuts['Zmm_wjetslike']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13) && nCleanFatJet >= 1 && \
                        Alt$(CleanFatJet_pt[0], -99) >= 200 && \
                        Alt$(CleanFatJet_mass[0], -99)  > 40 && \
                        (Alt$(CleanFatJet_mass[0], -99) <= 70 || Alt$(CleanFatJet_mass[0], -99) >= 115)'                       
