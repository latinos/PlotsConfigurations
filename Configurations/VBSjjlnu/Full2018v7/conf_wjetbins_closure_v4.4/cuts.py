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


###############
# ##### Wjets
# cuts["res_wjetcr_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 '



# cuts["res_wjetcr_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && w_had_pt < 200 \
#                                 && veto_fatjet_180 \
#                                 '


######################

    

cuts["res_wjetcr_ele_mext"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ((mjj_vjet> 40 && mjj_vjet <= 50) || ( mjj_vjet >= 150))  \
                                && bVeto \
                                && w_had_pt < 200 \
                                && veto_fatjet_180 \
                                '

cuts["res_wjetcr_ele_mint"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ((mjj_vjet> 50 && mjj_vjet <= 65) || ( mjj_vjet >= 105 && mjj_vjet < 150 )) \
                                && bVeto \
                                && w_had_pt < 200 \
                                && veto_fatjet_180 \
                                '

cuts["res_wjetcr_mu_mext"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ((mjj_vjet> 40 && mjj_vjet <= 50) || ( mjj_vjet >= 150))  \
                                && bVeto \
                                && w_had_pt < 200 \
                                && veto_fatjet_180 \
                                '

cuts["res_wjetcr_mu_mint"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ((mjj_vjet> 50 && mjj_vjet <= 65) || ( mjj_vjet >= 105 && mjj_vjet < 150 )) \
                                && bVeto \
                                && w_had_pt < 200 \
                                && veto_fatjet_180 \
                                '
# ###################################
# ## Boosted


# cuts["boost_wjetcr_ele_mext"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                              && w_had_pt > 200 \
#                             && ((mjj_vjet> 40 && mjj_vjet <= 55) || ( mjj_vjet >= 150 ))  \
#                             && bVeto \
#                             '

# cuts["boost_wjetcr_ele_mint"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                              && w_had_pt > 200 \
#                             && ((mjj_vjet> 55 && mjj_vjet <= 70) || ( mjj_vjet >= 115 && mjj_vjet < 150 )) \
#                             && bVeto \
#                             '


# cuts["boost_wjetcr_mu_mext"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                              && w_had_pt > 200 \
#                             && ((mjj_vjet> 40 && mjj_vjet <= 55) || ( mjj_vjet >= 150 ))  \
#                             && bVeto \
#                             '

# cuts["boost_wjetcr_mu_mint"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                              && w_had_pt > 200 \
#                             && ((mjj_vjet> 55 && mjj_vjet <= 70) || ( mjj_vjet >= 115 && mjj_vjet < 150 )) \
#                             && bVeto \
#                             '

cuts["res_sig_ele"] = 'VBS_category==1 \
                      && abs(Lepton_pdgId[0])==11 \
                      && vjet_0_pt > 30 && vjet_1_pt > 30 \
                      && mjj_vjet > 65 && mjj_vjet < 105 \
                      && bVeto \
                      && w_had_pt < 200 \
                      && veto_fatjet_180 \
                      '


cuts["res_sig_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && w_had_pt < 200 \
                                && veto_fatjet_180 \
                              '