# cuts

supercut = ' mll > 12 \
             && Lepton_pt[0]>20 && Lepton_pt[1]>10 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
             && (abs(Lepton_pdgId[0]) == 13 || Lepton_pt[0] > 25 )  \
             && (abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1] > 13 )  \
             && (run >= 297020 && run <= 299329 )  \
               '               

cuts['ee_den'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
             && fabs(91.1876 - mll) < 15  \
             && HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL == 1 \
               '
               
cuts['uu_den'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
             && fabs(91.1876 - mll) < 15  \
             && HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL == 1 \
               '

#cuts['eu_den'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
#             && mll > 60 \
#             && HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL == 1 \
#               '

#cuts['ue_den'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
#             && mll > 60 \
#             && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL == 1 \
#               '

cuts['ee_num'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
             && fabs(91.1876 - mll) < 15  \
             && (HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL == 1 && HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ == 1 ) \
               '

cuts['uu_num'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
             && fabs(91.1876 - mll) < 15  \
             && (HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL == 1 && HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8 == 1 ) \
               '

#cuts['eu_num'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
#             && mll > 60 \
#             && (HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL == 1 && HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ == 1 ) \
#               '

#cuts['ue_num'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
#             && mll > 60 \
#             && (HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL == 1 && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ == 1 ) \
#               '

cuts['uu_m_den'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
             && (HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ == 1 ) \
               '

cuts['uu_m_num'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
             && (HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ == 1  && HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8 == 1 ) \
               '
