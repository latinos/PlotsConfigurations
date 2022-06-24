# cuts

supercut = ' mll > 12 \
             && Alt$(Lepton_pt[0],0)>23 && Alt$(Lepton_pt[1],0)>12 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
             && (abs(Alt$(Lepton_pdgId[0],0)) == 13 || Alt$(Lepton_pt[0],0) > 25 )  \
             && (abs(Alt$(Lepton_pdgId[1],0)) == 13 || Alt$(Lepton_pt[1],0) > 13 )  \
               '

cuts['ee_den'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
             && fabs(91.1876 - mll) < 15  \
             && HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL \
               '

cuts['uu_den'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
             && fabs(91.1876 - mll) < 15  \
             && HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL \
               '

cuts['eu_den'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && mll > 60 \
             && HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL \
               '

cuts['ue_den'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && mll > 60 \
             && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL \
               '

cuts['ee_num'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
             && fabs(91.1876 - mll) < 15  \
             && (HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL && HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ) \
               '

cuts['uu_num'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
             && fabs(91.1876 - mll) < 15  \
             && (HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL && HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8) \
               '

cuts['eu_num'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && mll > 60 \
             && (HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL && HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ) \
               '

cuts['ue_num'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && mll > 60 \
             && (HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ) \
               '

