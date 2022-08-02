# cuts

supercut = 'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13 \
         && Lepton_pt[0] > 25. \
         && Lepton_pt[1] > 10. \
         && (abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1] > 13.) \
         && (nLepton >= 2 && Alt$(Lepton_pt[2],0) < 10.) \
         && Alt$(CleanJet_pt[1], 0) > 30. \
         && abs(CleanJet_eta[0]) < 2.5 \
         && abs(CleanJet_eta[1]) < 2.5 \
         && mjj > 65. && mjj < 105. \
         && mll > 12. \
         && detajj < 3.5 \
         && ptll > 30. \
         && PuppiMET_pt > 20.' 


# Signal region

cuts['hww2l2v_13TeV_2j_vh_em'] = 'mth > 60. && mth < 125. \
                               && drll < 2. \
                               && bVeto'

# Top control region

cuts['hww2l2v_13TeV_top_2j_vh_em'] = 'topcr'

# DY control region

cuts['hww2l2v_13TeV_dytt_2j_vh_em'] = 'mth < 60. \
                                    && drll < 2. \
                                    && bVeto     \
                                    && mll > 40. && mll < 80.'
