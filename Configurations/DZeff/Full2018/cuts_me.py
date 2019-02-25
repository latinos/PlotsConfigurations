# cuts

supercut = ' mll > 12 \
             && Lepton_pt[0]>20 && Lepton_pt[1]>10 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
             && run >= 278273 \
             && mll > 60 \
               '               

cuts['eu_den'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL \
               '

cuts['ue_den'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL \
               '

cuts['eu_num'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && (HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL && HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ) \
               '

cuts['ue_num'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && (HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ) \
               '
