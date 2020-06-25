# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = 'Lepton_pt[0]>30  \
            && vbs_0_pt > 30 && vbs_1_pt > 30 \
            && deltaeta_vbs >= 2  \
            && PuppiMET_pt > 30 \
            && (abs(vbs_0_eta) <2.5 || abs(vbs_0_eta) > 3.2)\
            && (abs(vbs_1_eta) <2.5 || abs(vbs_1_eta) > 3.2)\
            && (abs(vjet_0_eta) <2.5 || abs(vjet_0_eta) > 3.2)\
            && (abs(vjet_1_eta) <2.5 || abs(vjet_1_eta) > 3.2)\
            '


#########################################################################
###############|----------------------------------|######################
###############|          Resolved category       |######################
###############|----------------------------------|######################
#########################################################################

#####################################
##  W-onshell, bveto --> Signal

cuts["res_sig_mjjincl_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

# cuts["res_sig_mjjincl_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 && mjj_vbs >=250 \
#                                 '

cuts["res_sig_mjjlow_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && mjj_vbs >=250  && mjj_vbs < 400  \
                                '

# cuts["res_sig_mjjlow_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 && mjj_vbs >=250  && mjj_vbs < 400  \
#                                 '


cuts["res_sig_mjjhigh_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && mjj_vbs >= 400 \
                                '

# cuts["res_sig_mjjhigh_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 && mjj_vbs >= 400  \
#                                 '


##################################
# Won-shell, btag ---> top region


cuts["res_topcr_mjjincl_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && mjj_vbs >=250 \
                                '

# cuts["res_topcr_mjjincl_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReq \
#                                 && mjj_vbs >=250 \
#                                 '

cuts["res_topcr_mjjlow_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && mjj_vbs >=250  && mjj_vbs < 400  \
                                '

# cuts["res_topcr_mjjlow_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReq \
#                                 && mjj_vbs >=250  && mjj_vbs < 400  \
#                                 '


cuts["res_topcr_mjjhigh_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && mjj_vbs >= 400 \
                                '

# cuts["res_topcr_mjjhigh_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReq \
#                                 && mjj_vbs >= 400  \
#                                 '



##################################
# Woff shell, bveto ---> WJet region


cuts["res_wjetcr_mjjincl_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

# cuts["res_wjetcr_mjjincl_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && mjj_vbs >=250 \
#                                 '


cuts["res_wjetcr_mjjlow_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && mjj_vbs >=250  && mjj_vbs < 400  \
                                '

# cuts["res_wjetcr_mjjlow_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && mjj_vbs >=250  && mjj_vbs < 400  \
#                                 '


cuts["res_wjetcr_mjjhigh_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && mjj_vbs >= 400 \
                                '

# cuts["res_wjetcr_mjjhigh_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && mjj_vbs >= 400  \
#                                 '



#########################################################################
###############|----------------------------------|######################
###############|          Boosted category        |######################
###############|----------------------------------|######################
#########################################################################

#####################################
# ##  W-onshell, bveto --> Signal

# cuts["boost_sig_mjjincl_ele"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && Lepton_pt[0] >= 40 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 && mjj_vbs >=250 \
#                                 '

# cuts["boost_sig_mjjincl_mu"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 && mjj_vbs >=250 \
#                                 '

# cuts["boost_sig_mjjlow_ele"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && Lepton_pt[0] >= 40 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 && mjj_vbs >=250  && mjj_vbs < 400  \
#                                 '

# cuts["boost_sig_mjjlow_mu"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 && mjj_vbs >=250  && mjj_vbs < 400  \
#                                 '


# cuts["boost_sig_mjjhigh_ele"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && Lepton_pt[0] >= 40 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 && mjj_vbs >= 400 \
#                                 '

# cuts["boost_sig_mjjhigh_mu"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 && mjj_vbs >= 400  \
#                                 '


# # ##################################
# # # Won-shell, btag ---> top region


# cuts["boost_topcr_mjjincl_ele"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && Lepton_pt[0] >= 40 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReq \
#                                 && mjj_vbs >=250 \
#                                 '

# cuts["boost_topcr_mjjincl_mu"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReq \
#                                 && mjj_vbs >=250 \
#                                 '

# cuts["boost_topcr_mjjlow_ele"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && Lepton_pt[0] >= 40 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReq \
#                                 && mjj_vbs >=250  && mjj_vbs < 400  \
#                                 '

# cuts["boost_topcr_mjjlow_mu"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReq \
#                                 && mjj_vbs >=250  && mjj_vbs < 400  \
#                                 '


# cuts["boost_topcr_mjjhigh_ele"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && Lepton_pt[0] >= 40 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReq \
#                                 && mjj_vbs >= 400 \
#                                 '

# cuts["boost_topcr_mjjhigh_mu"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 200 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReq \
#                                 && mjj_vbs >= 400  \
#                                 '



# # ##################################
# # # Woff shell, bveto ---> WJet region


# cuts["boost_wjetcr_mjjincl_ele"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && Lepton_pt[0] >= 40 \
#                                 && vjet_0_pt > 200 \
#                                 && ( mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && mjj_vbs >=250 \
#                                 '

# cuts["boost_wjetcr_mjjincl_mu"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 200 \
#                                 && ( mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && mjj_vbs >=250 \
#                                 '

# cuts["boost_wjetcr_mjjlow_ele"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && Lepton_pt[0] >= 40 \
#                                 && vjet_0_pt > 200 \
#                                 && ( mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && mjj_vbs >=250  && mjj_vbs < 400  \
#                                 '

# cuts["boost_wjetcr_mjjlow_mu"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 200 \
#                                 && ( mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && mjj_vbs >=250  && mjj_vbs < 400  \
#                                 '


# cuts["boost_wjetcr_mjjhigh_ele"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && Lepton_pt[0] >= 40 \
#                                 && vjet_0_pt > 200 \
#                                 && ( mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && mjj_vbs >= 400 \
#                                 '

# cuts["boost_wjetcr_mjjhigh_mu"] = 'VBS_category==0 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && Lepton_pt[0] >= 30 \
#                                 && vjet_0_pt > 200 \
#                                 && ( mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && mjj_vbs >= 400  \
#                                 '

