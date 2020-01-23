# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = 'Lepton_pt[0]>30'


#########################################################################
###############|----------------------------------|######################
###############|          Lowenergy category      |######################
###############|----------------------------------|######################
#########################################################################

cuts["lowen_incl_ele"] = 'VBS_category==1 \
                        && abs(Lepton_pdgId[0])==11 \
                        && Lepton_pt[0] >= 40 \
                        && vbs_0_pt > 30 && vbs_1_pt > 30  \
                        && vjet_0_pt > 30 && vjet_1_pt > 30 \
                        '

cuts["lowen_incl_mu"] =  'VBS_category==1 \
                        && abs(Lepton_pdgId[0])==13 \
                        && Lepton_pt[0] >= 30 \
                        && vbs_0_pt > 30 && vbs_1_pt > 30  \
                        && vjet_0_pt > 30 && vjet_1_pt > 30 \
                        '


cuts["lowen_CR_looseVBS_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && Lepton_pt[0] >= 40 \
                                && vbs_0_pt > 30 && vbs_1_pt > 30  \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vbs >=300    \
                                && deltaeta_vbs >= 2  \
                                && PuppiMET_pt > 30 \
                                && bVeto \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                '

cuts["lowen_CR_looseVBS_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && Lepton_pt[0] >= 30 \
                                && vbs_0_pt > 30 && vbs_1_pt > 30  \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vbs >=300    \
                                && deltaeta_vbs >= 2  \
                                && PuppiMET_pt > 30 \
                                && bVeto \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                '
