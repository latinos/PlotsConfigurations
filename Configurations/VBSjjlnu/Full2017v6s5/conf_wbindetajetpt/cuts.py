# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut =  '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>38 && abs(Lepton_eta[0])<=1.5 ) \
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && vbs_0_pt > 50 && vbs_1_pt > 30 \
            && deltaeta_vbs >= 2  \
            && PuppiMET_pt > 30 \
            && mjj_vbs >=250 \
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


cuts["res_sig_mjjincl_dnnhigh_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && DNNoutput_resolved > 0.5 \
                                '

cuts["boost_sig_mjjincl_dnnhigh_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && DNNoutput_boosted > 0.5 \
                                '

##################################
# Won-shell, btag ---> top region


cuts["res_topcr_mjjincl_dnnhigh_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && DNNoutput_resolved > 0.5 \
                                '


cuts["boost_topcr_mjjincl_dnnhigh_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && DNNoutput_boosted > 0.5 \
                                '

###########################################
# Check discrepancies in high DNN region

cuts["res_wjetcr_mjjincl_dnnhigh_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && bVeto \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && DNNoutput_resolved > 0.5 \
                                '

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

#############################################
# boosted
cuts["boost_wjetcr_mjjincl_dnnhigh_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 200 \
                                && bVeto \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && DNNoutput_boosted > 0.5 \
                                '

cuts["boost_wjetcr_mjjincl_mvint_dnnhigh_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 200 \
                                && bVeto \
                                && ( (mjj_vjet > 50 && mjj_vjet <=65) || ( mjj_vjet >= 105 && mjj_vjet <= 150 ))  \
                                && DNNoutput_boosted > 0.5 \
                                '

cuts["boost_wjetcr_mjjincl_mvext_dnnhigh_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 200 \
                                && bVeto \
                                && ( mjj_vjet <= 50 ||  mjj_vjet > 150 ) \
                                && DNNoutput_boosted > 0.5 \
                                '
