# cuts
# Looking at events with no fat jets and 4 paired jets with >= 30GeV
# MET > 30 GeV already applied : to be fixed

supercut = 'Lepton_pt[0]>30 \
            && Alt$(Lepton_pt[1],0)<=10 && Alt$(Lepton_isLoose[1],1)>0.5\
            && ( Alt$(Lepton_isTightElectron_mvaFall17V1Iso_WP90[1], 0) < 0.5 \
                && Alt$(Lepton_isTightMuon_cut_Tight_HWWW[1],0) < 0.5 ) \
            && VBS_category ==1    \
            && vbs_pt_low >= 30    \
            && vjet_pt_low >= 30    \
           '


# No associated jets in the horn
#cuts["lowen_ele_tightVBS"] = 'abs(Lepton_pdgId[0])==11 \
#                                && Lepton_pt[0] >= 40   \
#                                && mjj_vbs >=600    \
#                                && deltaeta_vbs >= 3.5  \
#                                && PuppiMET_pt > 30 \
#                                && bVeto \
#                                && mjj_vjet > 65 && mjj_vjet < 105 \
#                                '

#cuts["lowen_mu_tightVBS"] = 'abs(Lepton_pdgId[0])==13 \
#                         && Lepton_pt[0] >= 30    \
#                         && mjj_vbs >=600    \
#                         && deltaeta_vbs >= 3.5  \
#                         && PuppiMET_pt > 30 \
#                         && bVeto \
#                         && mjj_vjet > 65 && mjj_vjet < 105 \
#                        '

cuts["lowen_ele_topCR"] = 'abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40   \
                                && mjj_vbs >=600    \
                                && deltaeta_vbs >= 3.5  \
                                && PuppiMET_pt > 30 \
                                && !bVeto \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                '

cuts["lowen_mu_topCR"] = 'abs(Lepton_pdgId[0])==13 \
                         && Lepton_pt[0] >= 30    \
                         && mjj_vbs >=600    \
                         && deltaeta_vbs >= 3.5  \
                         && PuppiMET_pt > 30 \
                         && !bVeto \
                         && mjj_vjet > 65 && mjj_vjet < 105 \
                        '

cuts["lowen_ele_WjetsCR"] = 'abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40   \
                                && mjj_vbs >=600    \
                                && deltaeta_vbs >= 3.5  \
                                && PuppiMET_pt > 30 \
                                && bVeto \
                                && ( mjj_vjet < 65 || mjj_vjet > 105 300 ) \
                                '

cuts["lowen_mu_WjetsCR"] = 'abs(Lepton_pdgId[0])==13 \
                         && Lepton_pt[0] >= 30    \
                         && mjj_vbs >=600    \
                         && deltaeta_vbs >= 3.5  \
                         && PuppiMET_pt > 30 \
                         && bVeto \
                         && ( mjj_vjet < 65 || mjj_vjet > 105 ) \
                        '

