# cuts

supercut = 'Lepton_pt[0]>30 && Lepton_pt[1]>15 && \
         (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5'

## DY selections


# cuts['emSS']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == 11*13)  && abs(Lepton_pdgId[0]) == 11 \
#                 && bVeto && mth> 60 && mll > 30 && (mll <60 || mll > 120)\
#                  '

# cuts['meSS']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == 11*13)  && abs(Lepton_pdgId[0]) == 13 \
#                  && bVeto && mth> 60 && mll > 30 && (mll <60 || mll > 120)\
#                  '

# cuts['eeSS']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == 11*11)  && abs(Lepton_pdgId[0]) == 11 \
#                  && bVeto &&  mth> 60 && mll > 30 && (mll <60 || mll > 120)\
#                  '

# cuts['mmSS']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == 13*13)  && abs(Lepton_pdgId[0]) == 13 \
#                  && bVeto &&  mth> 60 && mll > 30 && (mll <60 || mll > 120)\
#                  '

# cuts['emOS_top']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)  && abs(Lepton_pdgId[0]) == 11 \
#                    &&  !bVeto && mth> 60 && mll > 30 && (mll <60 || mll > 120)'

# cuts['meOS_top']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)  && abs(Lepton_pdgId[0]) == 13 \
#                    && !bVeto && mth> 60 && mll > 30 && (mll <60 || mll > 120)'

# cuts['eeOS_top']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)  && abs(Lepton_pdgId[0]) == 11 \
#                    &&  !bVeto && mth> 60 && mll > 30 && (mll <60 || mll > 120)'

# cuts['mmOS_top']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)  && abs(Lepton_pdgId[0]) == 13 \
#                    && !bVeto && mth> 60 && mll > 30 && (mll <60 || mll > 120)'

cuts['Zee']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)  \
                   &&  bVeto  && mll>60 && mll< 120'

cuts['Zmm']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)  \
                   &&  bVeto  && mll>60 && mll< 120'

cuts['Zee_2j']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)  \
                   &&  bVeto  && mll>60 && mll< 120 && Alt$(CleanJet_pt[1],0)>30'

cuts['Zmm_2j']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
                   &&  bVeto  && mll>60 && mll< 120 && Alt$(CleanJet_pt[1],0)>30'