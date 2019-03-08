# cuts

supercut = ' mll > 12 \
             && Lepton_pt[0]>10 && Lepton_pt[1]>10 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
             && mll > 60 \
               '               

cuts['ue_den_1'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL \
             && PV_npvsGood < 20 \
               '

cuts['ue_den_2'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL \
             && PV_npvsGood >= 20 && PV_npvsGood < 30\
               '

cuts['ue_den_3'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL \
             && PV_npvsGood >= 30 && PV_npvsGood < 40\
               '

cuts['ue_den_4'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL \
             && PV_npvsGood >= 40 && PV_npvsGood < 50\
               '

cuts['ue_den_5'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL \
             && PV_npvsGood >= 50 && PV_npvsGood < 70\
               '

cuts['ue_den_6'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL \
             && PV_npvsGood >= 70 \
               '

cuts['ue_num_1'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && (HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ) \
             && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL \
             && PV_npvsGood < 20 \
               '

cuts['ue_num_2'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && (HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ) \
             && PV_npvsGood >= 20 && PV_npvsGood < 30\
               '

cuts['ue_num_3'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && (HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ) \
             && PV_npvsGood >= 30 && PV_npvsGood < 40\
               '

cuts['ue_num_4'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && (HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ) \
             && PV_npvsGood >= 40 && PV_npvsGood < 50\
               '

cuts['ue_num_5'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && (HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ) \
             && PV_npvsGood >= 50 && PV_npvsGood < 70\
               '

cuts['ue_num_6'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)   \
             && (HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL && HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ) \
             && PV_npvsGood >= 70 \
               '

