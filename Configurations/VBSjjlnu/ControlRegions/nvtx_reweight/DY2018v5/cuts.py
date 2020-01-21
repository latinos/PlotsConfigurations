# cuts

supercut = 'mll>60 && Lepton_pt[0]>20 && Lepton_pt[1]>10 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5'

## DY selections
cuts['Zee']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
                 && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
                 && mll>60 && mll<120 \
               '

cuts['Zmm']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                 && mll>60 && mll<120 \
               '

# cuts['Zee_jpt50']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && Lepton_pt[0]>25 && Lepton_pt[1]>13 \
#                  && mll>60 && mll<120 \
#                  && nCleanJet>=1 \
#                  && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 50) \
#                '

# cuts['Zmm_jpt50']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 \
#                  && nCleanJet>=1 \
#                 && (abs(CleanJet_eta[0]) < 2.5 || abs(CleanJet_eta[0]) > 3.2 || CleanJet_pt[0] > 50) \
              #  '
#####################
# Fixing cut

# cuts['Zee_fixed']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
#                  && mll>60 && mll<120 && CleanJet_pt[0]>20\
#                  && (abs(CleanJet_eta[0]) > 3 || abs(CleanJet_eta[0]) < 2.5 || \
#                    CleanJet_pt[0] > 30 || Jet_neHEF[CleanJet_jetIdx[0]] < 0.2)\
#                 '

# cuts['Zmm_fixed']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
#                  && mll>60 && mll<120 && CleanJet_pt[0]>20\
#                  && (abs(CleanJet_eta[0]) > 3 || abs(CleanJet_eta[0]) < 2.5 || \
#                    CleanJet_pt[0] > 30 || Jet_neHEF[CleanJet_jetIdx[0]] < 0.2)\
#                 '