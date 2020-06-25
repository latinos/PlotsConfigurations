# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35 ) \
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) )   \
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


##################################
# Woff shell, bveto ---> WJet region



cuts["res_wjetcr_mjjincl_mvint_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ( (mjj_vjet > 50 && mjj_vjet <=65) || ( mjj_vjet >= 105 && mjj_vjet <= 150 ))  \
                                && bVeto \
                                '

cuts["res_wjetcr_mjjincl_mvext_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ( mjj_vjet <= 50 ||  mjj_vjet > 150 ) \
                                && bVeto \
                                '


cuts["res_wjetcr_mjjincl_mvint_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ( (mjj_vjet > 50 && mjj_vjet <=65) || ( mjj_vjet >= 105 && mjj_vjet <= 150 ))  \
                                && bVeto \
                                '

cuts["res_wjetcr_mjjincl_mvext_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ( mjj_vjet <= 50 ||  mjj_vjet > 150 ) \
                                && bVeto \
#                                 '

##########################################
#Check discrepancies in high DNN region


cuts["res_wjetcr_mjjincl_mvint_dnnhigh_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && bVeto \
                                && ( (mjj_vjet > 50 && mjj_vjet <=65) || ( mjj_vjet >= 105 && mjj_vjet <= 150 ))  \
                                && DNNoutput_resolved > 0.5 \
                                '

cuts["res_wjetcr_mjjincl_mvext_dnnhigh_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && bVeto \
                                && ( mjj_vjet <= 50 ||  mjj_vjet > 150 ) \
                                && DNNoutput_resolved > 0.5 \
                                '


cuts["res_wjetcr_mjjincl_mvint_dnnhigh_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && bVeto \
                                && ( (mjj_vjet > 50 && mjj_vjet <=65) || ( mjj_vjet >= 105 && mjj_vjet <= 150 ))  \
                                && DNNoutput_resolved > 0.5 \
                                '

cuts["res_wjetcr_mjjincl_mvext_dnnhigh_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && bVeto \
                                && ( mjj_vjet <= 50 ||  mjj_vjet > 150 ) \
                                && DNNoutput_resolved > 0.5 \
                                '