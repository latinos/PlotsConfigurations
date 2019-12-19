# cuts
# Looking at events with no fat jets and 4 paired jets with >= 30GeV
# MET > 30 GeV already applied : to be fixed

supercut = '(nLepton==1 && Lepton_pt[0]>30'

cuts["ele_pt30"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 \
                        && (CleanJet_pt[0] > '

cuts["mu_pt30"] =  'abs(Lepton_pdgId[0])==13  \
                        && Lepton_pt[0] >= 30 '

cuts["ele_pt40"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 \
                        && CleanJet_pt[3] >= 40'

cuts["ele_pt50"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 \
                        && CleanJet_pt[3] >= 50'

cuts["ele_pt60"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 \
                        && CleanJet_pt[3] >= 60'

cuts["ele_pt80"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 \
                        && CleanJet_pt[3] >= 80'

cuts["ele_pt100"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 \
                        && CleanJet_pt[3] >= 100'

cuts["ele_pt150"] = 'abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 \
                        && CleanJet_pt[3] >= 150'

cuts["mu_pt40"] = 'abs(Lepton_pdgId[0])==13 \
                        && Lepton_pt[0] >= 30 \
                        && CleanJet_pt[3] >= 40'

cuts["mu_pt50"] = 'abs(Lepton_pdgId[0])==13 \
                        && Lepton_pt[0] >= 30 \
                        && CleanJet_pt[3] >= 50'

cuts["mu_pt60"] = 'abs(Lepton_pdgId[0])==13 \
                        && Lepton_pt[0] >= 30 \
                        && CleanJet_pt[3] >= 60'

cuts["mu_pt80"] = 'abs(Lepton_pdgId[0])==31 \
                        && Lepton_pt[0] >= 30 \
                        && CleanJet_pt[3] >= 80'
                        
cuts["mu_pt100"] = 'abs(Lepton_pdgId[0])==31 \
                        && Lepton_pt[0] >= 30 \
                        && CleanJet_pt[3] >= 100'

cuts["mu_pt150"] = 'abs(Lepton_pdgId[0])==31 \
                        && Lepton_pt[0] >= 30 \
                        && CleanJet_pt[3] >= 150'