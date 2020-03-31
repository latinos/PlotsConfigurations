# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py


#####
#  N.B Cut of vbs_0_pt changed to 50 GeV
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35 ) \
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && vbs_0_pt > 50 && vbs_1_pt > 30 \
            && PuppiMET_pt > 30 \
            && deltaeta_vbs >= 2.5  \
            && mjj_vbs >= 500 \
            && Mtw_lep < 185 \
            '


#########################################################################
###############|----------------------------------|######################
###############|          Resolved category       |######################
###############|----------------------------------|######################
#########################################################################

#####################################
##  W-onshell, bveto --> Signal


# cuts["res_sig_mjjincl_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 '

# cuts["res_sig_mjjincl_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 '

cuts["res_sig_testcut_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && whad_pt < 200 \
                                && bVeto \
                            '


cuts["res_sig_testcut_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && whad_pt < 200 \
                                && bVeto \
                                '

##################################
# Won-shell, btag ---> top region


# cuts["res_topcr_mjjincl_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReq \
#                                 '

# cuts["res_topcr_mjjincl_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReq \
#                                 '

cuts["res_topcr_testcut_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && whad_pt < 200 \
                                && bReq \
                            '


cuts["res_topcr_testcut_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && whad_pt < 200 \
                                && bReq \
                            '

##################################
# Woff shell, bveto ---> WJet region


# cuts["res_wjetcr_mjjincl_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 '

# cuts["res_wjetcr_mjjincl_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 '

cuts["res_wjetcr_testcut_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && whad_pt < 200 \
                                && bVeto \
                            '


cuts["res_wjetcr_testcut_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && whad_pt < 200 \
                                && bVeto \
                            '


#########################################################################
###############|----------------------------------|######################
###############|          Boosted category       |######################
###############|----------------------------------|######################
#########################################################################


# cuts["boost_sig_mjjincl_ele"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 '

# cuts["boost_sig_mjjincl_mu"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 '

cuts["boost_sig_testcut_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                '


cuts["boost_sig_testcut_mu"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                            '


###############################################
# Wjets

# cuts["boost_wjetcr_mjjincl_ele"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 200 \
#                                 && ( mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 '

# cuts["boost_wjetcr_mjjincl_mu"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 200 \
#                                 && ( mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 '


cuts["boost_wjetcr_testcut_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 200 \
                                && ( mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                '


cuts["boost_wjetcr_testcut_mu"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 200 \
                                && ( mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                            '

###############################################
#Top

# cuts["boost_topcr_mjjincl_ele"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReq \
#                                 '

# cuts["boost_topcr_mjjincl_mu"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReq \
#                                 '


cuts["boost_topcr_testcut_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                '


cuts["boost_topcr_testcut_mu"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                            '