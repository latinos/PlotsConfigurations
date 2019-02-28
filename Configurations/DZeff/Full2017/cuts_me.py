# cuts

supercut = ' mll > 12 \
             && Lepton_pt[0]>10 && Lepton_pt[1]>10 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
             && mll > 60 \
             && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) \
               '               

cuts['ue_den'] = 'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL \
               '

cuts['ue_num'] = '(HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ) \
               '
