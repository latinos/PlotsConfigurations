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


# #########################################################################
# ###############|----------------------------------|######################
# ###############|          Resolved category       |######################
# ###############|----------------------------------|######################
# #########################################################################


cuts["res_wjetcr_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 115) \
                                && bVeto \
                                && w_had_pt < 200 \
                                '

cuts["res_wjetcr_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 115) \
                                && bVeto \
                                && w_had_pt < 200 \
                                '

cuts["res_wjetcr_ele_vetofj"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 115) \
                                && bVeto \
                                && w_had_pt < 200 \
                                && veto_fatjet_180 \
                                '

cuts["res_wjetcr_mu_vetofj"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 115) \
                                && bVeto \
                                && w_had_pt < 200 \
                                && veto_fatjet_180 \
                                '

cuts["res_wjetcr_ele_vetofj_wjet85"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 115) \
                                && bVeto \
                                && w_had_pt < 200 \
                                && veto_fatjet_wjet85 \
                                '

cuts["res_wjetcr_mu_vetofj_wjet85"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 115) \
                                && bVeto \
                                && w_had_pt < 200 \
                                && veto_fatjet_wjet85 \
                                '


cuts["res_wjetcr_ele_vetofj_wjet83"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 115) \
                                && bVeto \
                                && w_had_pt < 200 \
                                && veto_fatjet_wjet83 \
                                '

cuts["res_wjetcr_mu_vetofj_wjet83"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 115) \
                                && bVeto \
                                && w_had_pt < 200 \
                                && veto_fatjet_wjet83 \
                                '
##################################


# ###############################################
# # Wjets

cuts["boost_wjetcr_ele"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet >= 40 && (mjj_vjet <= 65 || mjj_vjet >= 115)  \
                            && bVeto \
                            '

cuts["boost_wjetcr_mu"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet >= 40 && (mjj_vjet <= 65 || mjj_vjet >= 115)  \
                            && bVeto \
                            '



# cuts["boost_wjetcr_ele_fjpt09"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && fatjetpt09 > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             '

# cuts["boost_wjetcr_mu_fjpt09"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && fatjetpt09 > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             '

# cuts["boost_wjetcr_ele_fjpt08"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && fatjetpt08 > 200 \
#                             && mjj_vjet08 >= 40 && (mjj_vjet08 <= 65 || mjj_vjet08 >= 105)  \
#                             && bVeto \
#                             '

# cuts["boost_wjetcr_mu_fjpt08"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && fatjetpt08 > 200 \
#                             && mjj_vjet08 >= 40 && (mjj_vjet08 <= 65 || mjj_vjet08 >= 105)  \
#                             && bVeto \
#                             '

# cuts["boost_wjetcr_ele_fjpt095"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && fatjetpt095 > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             '

# cuts["boost_wjetcr_mu_fjpt095"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && fatjetpt095 > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             '

cuts["boost_wjetcr_ele_fjpt085"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && fatjetpt085 > 200 \
                            && mjj_vjet085 >= 40 && (mjj_vjet085 <= 65 || mjj_vjet085 >= 115)  \
                            && bVeto \
                            '

cuts["boost_wjetcr_mu_fjpt085"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && fatjetpt085 > 200 \
                            && mjj_vjet085 >= 40 && (mjj_vjet085 <= 65 || mjj_vjet085 >= 115)  \
                            && bVeto \
                            '

cuts["boost_wjetcr_ele_fjpt082"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && fatjetpt082 > 200 \
                            && mjj_vjet082 >= 40 && (mjj_vjet082 <= 65 || mjj_vjet082 >= 115)  \
                            && bVeto \
                            '

cuts["boost_wjetcr_mu_fjpt082"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && fatjetpt082 > 200 \
                            && mjj_vjet082 >= 40 && (mjj_vjet082 <= 65 || mjj_vjet082 >= 115)  \
                            && bVeto \
                            '

cuts["boost_wjetcr_ele_fjpt083"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && fatjetpt083 > 200 \
                            && mjj_vjet083 >= 40 && (mjj_vjet083 <= 65 || mjj_vjet083 >= 115)  \
                            && bVeto \
                            '

cuts["boost_wjetcr_mu_fjpt083"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && fatjetpt083 > 200 \
                            && mjj_vjet083 >= 40 && (mjj_vjet083 <= 65 || mjj_vjet083 >= 115)  \
                            && bVeto \
                            '

cuts["boost_wjetcr_ele_fjpt087"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && fatjetpt087 > 200 \
                            && mjj_vjet087 >= 40 && (mjj_vjet087 <= 65 || mjj_vjet087 >= 115)  \
                            && bVeto \
                            '

cuts["boost_wjetcr_mu_fjpt087"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && fatjetpt087 > 200 \
                            && mjj_vjet087 >= 40 && (mjj_vjet087 <= 65 || mjj_vjet087 >= 115)  \
                            && bVeto \
                            '

################
# boosted SR


cuts["boost_sig_ele_fjpt083"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && fatjetpt083 > 200 \
                            && (mjj_vjet083 > 65 && mjj_vjet083 < 115)  \
                            && bVeto \
                            '

cuts["boost_sig_mu_fjpt083"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && fatjetpt083 > 200 \
                            && (mjj_vjet083 > 65 && mjj_vjet083 < 115)  \
                            && bVeto \
                            '

cuts["boost_topcr_ele_fjpt083"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && fatjetpt083 > 200 \
                            && (mjj_vjet083 > 65 && mjj_vjet083 < 115)  \
                            && bReqTight \
                            '

cuts["boost_topcr_mu_fjpt083"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && fatjetpt083 > 200 \
                            && (mjj_vjet083 > 65 && mjj_vjet083 < 115)  \
                            && bReqTight \
                            '


cuts["boost_sig_ele_fjpt085"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && fatjetpt085 > 200 \
                            && (mjj_vjet085 > 65 && mjj_vjet085 < 115)  \
                            && bVeto \
                            '

cuts["boost_sig_mu_fjpt085"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && fatjetpt085 > 200 \
                            && (mjj_vjet085 > 65 && mjj_vjet085 < 115)  \
                            && bVeto \
                            '

cuts["boost_topcr_ele_fjpt085"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && fatjetpt085 > 200 \
                            && (mjj_vjet085 > 65 && mjj_vjet085 < 115)  \
                            && bReqTight \
                            '

cuts["boost_topcr_mu_fjpt085"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && fatjetpt085 > 200 \
                            && (mjj_vjet085 > 65 && mjj_vjet085 < 115)  \
                            && bReqTight \
                            '