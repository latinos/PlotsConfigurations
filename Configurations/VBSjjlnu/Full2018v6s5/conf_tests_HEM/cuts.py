# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35)\
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && deltaeta_vbs >= 2.5  \
            && Mtw_lep < 185 \
            '


# ## Same names for data
# cuts["res_wjetcr_mu_incl_corrHEM"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && whad_pt < 200 \
#                                 && vbs_0_pt > 50 && vbs_1_pt > 30 \
#                                 && PuppiMET_pt > 30 \
#                                 && mjj_vbs >= 500 \
#                                '

# cuts["res_wjetcr_ele_incl_corrHEM"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && whad_pt < 200 \
#                                 && vbs_0_pt > 50 && vbs_1_pt > 30 \
#                                 && PuppiMET_pt > 30 \
#                                 && mjj_vbs >= 500 \
#                                 '

cuts["res_wjetcr_mu_incl"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && vbs_0_pt > 50 && vbs_1_pt > 30 \
                                && PuppiMET_pt > 30 \
                                && mjj_vbs >= 500 \
                               '

cuts["res_wjetcr_ele_incl"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && vbs_0_pt > 50 && vbs_1_pt > 30 \
                                && PuppiMET_pt > 30 \
                                && mjj_vbs >= 500 \
                                '


cuts["res_wjetcr_mu_incl_corrHEM"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt_corrHEM > 30 && vjet_1_pt_corrHEM > 30 \
                                && (mjj_vjet_corrHEM <= 65 || mjj_vjet_corrHEM >= 105) \
                                && bVeto \
                                && whad_pt_corrHEM < 200 \
                                && vbs_0_pt_corrHEM > 50 && vbs_1_pt_corrHEM > 30 \
                                && PuppiMET_pt_corrHEM > 30 \
                                && mjj_vbs_corrHEM >= 500 \
                               '

cuts["res_wjetcr_ele_incl_corrHEM"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt_corrHEM > 30 && vjet_1_pt_corrHEM > 30 \
                                && (mjj_vjet_corrHEM <= 65 || mjj_vjet_corrHEM >= 105) \
                                && bVeto \
                                && whad_pt_corrHEM < 200 \
                                && vbs_0_pt_corrHEM > 50 && vbs_1_pt_corrHEM > 30 \
                                && PuppiMET_pt_corrHEM > 30 \
                                && mjj_vbs_corrHEM >= 500 \
                                '

# cuts["boost_wjetcr_ele_incl_corrHEM"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             && vbs_0_pt > 50 && vbs_1_pt > 30 \
#                             && PuppiMET_pt > 30 \
#                             && mjj_vbs >= 500 \
#                             '

# cuts["boost_wjetcr_ele_incl_corrHEM"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && vjet_0_pt > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             && vbs_0_pt > 50 && vbs_1_pt > 30 \
#                             && PuppiMET_pt > 30 \
#                             && mjj_vbs >= 500 \
#                             '

cuts["boost_wjetcr_ele_incl"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && vjet_0_pt > 200 \
                            && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
                            && bVeto \
                            && vbs_0_pt > 50 && vbs_1_pt > 30 \
                            && PuppiMET_pt > 30 \
                            && mjj_vbs >= 500 \
                            '

cuts["boost_wjetcr_ele_incl"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && vjet_0_pt > 200 \
                            && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
                            && bVeto \
                            && vbs_0_pt > 50 && vbs_1_pt > 30 \
                            && PuppiMET_pt > 30 \
                            && mjj_vbs >= 500 \
                            '


cuts["boost_wjetcr_ele_incl_corrHEM"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && vjet_0_pt > 200 \
                            && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
                            && bVeto \
                            && vbs_0_pt_corrHEM > 50 && vbs_1_pt_corrHEM > 30 \
                            && PuppiMET_pt_corrHEM > 30 \
                            && mjj_vbs_corrHEM >= 500 \
                            '

cuts["boost_wjetcr_ele_incl_corrHEM"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && vjet_0_pt > 200 \
                            && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
                            && bVeto \
                            && vbs_0_pt_corrHEM > 50 && vbs_1_pt_corrHEM > 30 \
                            && PuppiMET_pt_corrHEM > 30 \
                            && mjj_vbs_corrHEM >= 500 \
                            '
