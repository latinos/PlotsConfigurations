# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = 'Lepton_pt[0]>30  \
            && vbs_0_pt > 30 && vbs_1_pt > 30 \
            && deltaeta_vbs >= 2  \
            && PuppiMET_pt > 30 \
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
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["res_sig_mjjincl_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '


##################################
# Won-shell, btag ---> top region


cuts["res_topcr_mjjincl_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && mjj_vbs >=250 \
                                '

cuts["res_topcr_mjjincl_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && mjj_vbs >=250 \
                                '


##################################
# Woff shell, bveto ---> WJet region


cuts["res_wjetcr_mjjincl_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["res_wjetcr_mjjincl_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["res_wjetcr_mjjincl_mjjvhigh_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet >= 105 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["res_wjetcr_mjjincl_mjjvhigh_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet >= 105 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["res_wjetcr_mjjincl_mjjvlow_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet <= 65  \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["res_wjetcr_mjjincl_mjjvlow_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet <= 65 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["res_wjetcr_mjjincl_mjjvhigh1_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet >= 105 && mjj_vjet <= 200 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["res_wjetcr_mjjincl_mjjvhigh1_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet >= 105 && mjj_vjet <= 200 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '


cuts["res_wjetcr_mjjincl_mjjvhigh2_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 200 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["res_wjetcr_mjjincl_mjjvhigh2_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 200 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["res_wjetcr_mjjincl_mjjvlow1_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet <= 50  \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["res_wjetcr_mjjincl_mjjvlow1_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet <= 50  \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["res_wjetcr_mjjincl_mjjvlow2_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 50 && mjj_vjet <= 65 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["res_wjetcr_mjjincl_mjjvlow2_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 50 && mjj_vjet <= 65 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '


#########################################################################
###############|----------------------------------|######################
###############|          Boosted category        |######################
###############|----------------------------------|######################
#########################################################################

#####################################
##  W-onshell, bveto --> Signal

cuts["boost_sig_mjjincl_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["boost_sig_mjjincl_mu"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '


# ##################################
# # Won-shell, btag ---> top region


cuts["boost_topcr_mjjincl_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && mjj_vbs >=250 \
                                '

cuts["boost_topcr_mjjincl_mu"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && mjj_vbs >=250 \
                                '



# ##################################
# # Woff shell, bveto ---> WJet region


cuts["boost_wjetcr_mjjincl_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 200 \
                                && ( mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '

cuts["boost_wjetcr_mjjincl_mu"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30 \
                                && vjet_0_pt > 200 \
                                && ( mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && mjj_vbs >=250 \
                                '