# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35)\
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


##################################
# Woff shell, bveto ---> WJet region


cuts["res_wjetcr_dnnhigh_mvint_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ( (mjj_vjet > 50 && mjj_vjet <=65) || ( mjj_vjet >= 105 && mjj_vjet <= 150 ))  \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                '

cuts["res_wjetcr_dnnhigh_mvext_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ( mjj_vjet <= 50 ||  mjj_vjet > 150 ) \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                 '

cuts["res_wjetcr_dnnhigh_mvint_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ( (mjj_vjet > 50 && mjj_vjet <=65) || ( mjj_vjet >= 105 && mjj_vjet <= 150 ))  \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                '

cuts["res_wjetcr_dnnhigh_mvext_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && ( mjj_vjet <= 50 ||  mjj_vjet > 150 ) \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                 '

#########################################################################
###############|----------------------------------|######################
###############|          Boosted category       |######################
###############|----------------------------------|######################
#########################################################################


###############################################
# Wjets



cuts["boost_wjetcr_dnnhigh_mvint_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && ( (mjj_vjet > 63 && mjj_vjet <=65) || ( mjj_vjet >= 105 && mjj_vjet <= 150 ))  \
                                && bVeto \
                                && vjet_0_pt > 200 \
                                && DNNoutput_boosted > 0.3 \
                                '

cuts["boost_wjetcr_dnnhigh_mvext_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && mjj_vjet > 60 && ( mjj_vjet <= 63 ||  mjj_vjet > 150 ) \
                                && bVeto \
                                && vjet_0_pt > 200 \
                                && DNNoutput_boosted > 0.3 \
                                '

cuts["boost_wjetcr_dnnhigh_mvint_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && ( (mjj_vjet > 63 && mjj_vjet <=65) || ( mjj_vjet >= 105 && mjj_vjet <= 150 ))  \
                                && bVeto \
                                && vjet_0_pt > 200 \
                                && DNNoutput_boosted > 0.3 \
                                '

cuts["boost_wjetcr_dnnhigh_mvext_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && mjj_vjet > 60 && ( mjj_vjet <= 63 ||  mjj_vjet > 150 ) \
                                && bVeto \
                                && vjet_0_pt > 200 \
                                && DNNoutput_boosted > 0.3 \
                                '
