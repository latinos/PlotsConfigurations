# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35)\
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && Alt$(Lepton_pt[1],0)<=10 && Alt$(Lepton_isLoose[1],1)> 0.5 \
            && vbs_0_pt > 50 && vbs_1_pt > 30 \
            && PuppiMET_pt > 30 \
            && deltaeta_vbs >= 2.5  \
            && mjj_vbs >= 500 \
            && Mtw_lep < 185 \
            '


############ 
## Signal


###############
# ##### Wjets

# cuts["res_wjetcr_ele_bin1"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 && w_lep_pt < 100 \
#                                 '


# cuts["res_wjetcr_ele_bin2"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 && w_lep_pt >= 100 && w_lep_pt < 200 \
#                                 '

# cuts["res_wjetcr_ele_bin3"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 && w_lep_pt >= 200 && w_lep_pt < 300 \
#                                 '

# cuts["res_wjetcr_ele_bin4"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 && w_lep_pt >= 300 && w_lep_pt < 400 \
#                                 '

# cuts["res_wjetcr_ele_bin5"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 && w_lep_pt >= 400 && w_lep_pt < 500 \
#                                 '

# cuts["res_wjetcr_ele_bin6"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 && w_lep_pt >= 500 \
#                                 '

# ###############3

# cuts["res_wjetcr_mu_bin1"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 && w_lep_pt < 100 \
#                                 '


# cuts["res_wjetcr_mu_bin2"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 && w_lep_pt >= 100 && w_lep_pt < 200 \
#                                 '

# cuts["res_wjetcr_mu_bin3"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 && w_lep_pt >= 200 && w_lep_pt < 300 \
#                                 '

# cuts["res_wjetcr_mu_bin4"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 && w_lep_pt >= 300 && w_lep_pt < 400 \
#                                 '

# cuts["res_wjetcr_mu_bin5"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 && w_lep_pt >= 400 && w_lep_pt < 500 \
#                                 '

# cuts["res_wjetcr_mu_bin6"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 && w_lep_pt >= 500 \
#                                 '

############################################3

cuts["boost_wjetcr_mu_bin1"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                             && w_had_pt >= 200 \
                            && mjj_vjet > 40 && (mjj_vjet <= 70 || mjj_vjet >= 115)  \
                            && bVeto \
                            && w_lep_pt < 75 \
                            '

cuts["boost_wjetcr_mu_bin2"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                             && w_had_pt >= 200 \
                            && mjj_vjet > 40 && (mjj_vjet <= 70 || mjj_vjet >= 115)  \
                            && bVeto \
                            && w_lep_pt >= 75 && w_lep_pt < 150 \
                            '

cuts["boost_wjetcr_mu_bin3"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                             && w_had_pt >= 200 \
                            && mjj_vjet > 40 && (mjj_vjet <= 70 || mjj_vjet >= 115)  \
                            && bVeto \
                            && w_lep_pt >= 150 && w_lep_pt < 250 \
                            '


cuts["boost_wjetcr_mu_bin4"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                             && w_had_pt >= 200 \
                            && mjj_vjet > 40 && (mjj_vjet <= 70 || mjj_vjet >= 115)  \
                            && bVeto \
                             && w_lep_pt >= 250 && w_lep_pt < 400 \
                            '

cuts["boost_wjetcr_mu_bin5"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                             && w_had_pt >= 200 \
                            && mjj_vjet > 40 && (mjj_vjet <= 70 || mjj_vjet >= 115)  \
                            && bVeto \
                            && w_lep_pt >= 400 \
                            '