# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = 'Lepton_pt[0]>30  \
            && vbs_0_pt > 30 && vbs_1_pt > 30 \
            && deltaeta_vbs >= 2  \
            && PuppiMET_pt > 30 \
            && mjj_vbs >=250 \
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

cuts["res_sig_mjjincl_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
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

cuts["res_topcr_mjjincl_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
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

cuts["res_wjetcr_mjjincl_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                '


# cuts["res_wjetcr_mjjincl_mvhigh_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet >= 105 \
#                                 && bVeto \
#                                 '

cuts["res_wjetcr_mjjincl_mvhigh_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet >= 105 \
                                && bVeto \
                                '

# cuts["res_wjetcr_mjjincl_mvlow_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet <= 65  \
#                                 && bVeto \
#                                 '

cuts["res_wjetcr_mjjincl_mvlow_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet <= 65 \
                                && bVeto \
                                '

# cuts["res_wjetcr_mjjincl_mvhigh1_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet >= 105 && mjj_vjet <= 150 \
#                                 && bVeto \
#                                 '

# cuts["res_wjetcr_mjjincl_mvhigh1_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet >= 105 && mjj_vjet <= 150 \
#                                 && bVeto \
#                                 '


# cuts["res_wjetcr_mjjincl_mvhigh2_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 150 \
#                                 && bVeto \
#                                 '

# cuts["res_wjetcr_mjjincl_mvhigh2_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 150 \
#                                 && bVeto \
#                                 '

# cuts["res_wjetcr_mjjincl_mvlow1_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet <= 50  \
#                                 && bVeto \
#                                 '

# cuts["res_wjetcr_mjjincl_mvlow1_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet <= 50  \
#                                 && bVeto \
#                                 '

# cuts["res_wjetcr_mjjincl_mvlow2_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 50 && mjj_vjet <= 65 \
#                                 && bVeto \
#                                 '

# cuts["res_wjetcr_mjjincl_mvlow2_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 50 && mjj_vjet <= 65 \
#                                 && bVeto \
#                                 '

###############################
# Internal and external W+jets regions
# cuts["res_wjetcr_mjjincl_mvint_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && ( (mjj_vjet > 50 && mjj_vjet <=65) || ( mjj_vjet >= 105 && mjj_vjet <= 150 ))  \
#                                 && bVeto \
#                                 '

cuts["res_wjetcr_mjjincl_mvint_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ( (mjj_vjet > 50 && mjj_vjet <=65) || ( mjj_vjet >= 105 && mjj_vjet <= 150 ))  \
                                && bVeto \
                                '

# cuts["res_wjetcr_mjjincl_mvext_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && ( mjj_vjet <= 50 ||  mjj_vjet > 150 ) \
#                                 && bVeto \
#                                 '

cuts["res_wjetcr_mjjincl_mvext_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ( mjj_vjet <= 50 ||  mjj_vjet > 150 ) \
                                && bVeto \
                                '

###########################################
# Check discrepancies in high DNN region

# cuts["res_wjetcr_mjjincl_mvhigh_dnnhigh_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet >= 105 \
#                                 && bVeto \
#                                 && DNNoutput_resolved_v32 > 0.6 \
#                                 '

cuts["res_wjetcr_mjjincl_mvhigh_dnnhigh_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet >= 105 \
                                && bVeto \
                                && DNNoutput_resolved_v32 > 0.6 \
                                '

# cuts["res_wjetcr_mjjincl_mvlow_dnnhigh_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet <= 65  \
#                                 && bVeto \
#                                 && DNNoutput_resolved_v32 > 0.6 \
#                                 '

cuts["res_wjetcr_mjjincl_mvlow_dnnhigh_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet <= 65 \
                                && bVeto \
                                && DNNoutput_resolved_v32 > 0.6 \
                                '