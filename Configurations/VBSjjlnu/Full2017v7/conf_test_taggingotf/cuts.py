# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35)\
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && Alt$(Lepton_pt[1],0)<=10 && Alt$(Lepton_isLoose[1],1)> 0.5 \
            && vbs_0_pt_OTF > 50 && vbs_1_pt_OTF > 30 \
            && PuppiMET_pt > 30 \
            && deltaeta_vbs_OTF >= 2.5  \
            && mjj_vbs_OTF >= 500 \
            && Mtw_lep_OTF < 185 \
            '


############ 
## Signal

cuts["res_sig_ele"] = 'VBS_category_OTF==1 \
                        && abs(Lepton_pdgId[0])==11 \
                        && vjet_0_pt_OTF > 30 && vjet_1_pt_OTF > 30 \
                        && mjj_vjet_OTF > 65 && mjj_vjet_OTF < 105 \
                        && bVeto \
                        && w_had_pt_OTF < 200 \
                        && veto_fatjet_180 '



cuts["res_sig_mu"] = 'VBS_category_OTF==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt_OTF > 30 && vjet_1_pt_OTF > 30 \
                                && mjj_vjet_OTF > 65 && mjj_vjet_OTF < 105 \
                                && bVeto \
                                && w_had_pt_OTF < 200 \
                                && veto_fatjet_180 \
                                '

cuts["boost_sig_ele"] = 'VBS_category_OTF==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && w_had_pt_OTF >= 200 \
                            && mjj_vjet_OTF > 70 && mjj_vjet_OTF < 115 \
                            && bVeto \
                            '


cuts["boost_sig_mu"] = 'VBS_category_OTF==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && w_had_pt_OTF >= 200 \
                            && mjj_vjet_OTF > 70 && mjj_vjet_OTF < 115 \
                            && bVeto \
                            '


# ###############
# ##### Wjets

cuts["res_wjetcr_ele"] = 'VBS_category_OTF==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt_OTF > 30 && vjet_1_pt_OTF > 30 \
                                && mjj_vjet_OTF> 40 && (mjj_vjet_OTF <= 65 || mjj_vjet_OTF >= 105) \
                                && bVeto \
                                && w_had_pt_OTF < 200 \
                                && veto_fatjet_180 \
                                '



cuts["res_wjetcr_mu"] = 'VBS_category_OTF==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt_OTF > 30 && vjet_1_pt_OTF > 30 \
                                && mjj_vjet_OTF > 40 && (mjj_vjet_OTF <= 65 || mjj_vjet_OTF >= 105) \
                                && bVeto \
                                && w_had_pt_OTF < 200 \
                                && veto_fatjet_180 \
                                '

cuts["boost_wjetcr_ele"] = 'VBS_category_OTF==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && w_had_pt_OTF >= 200 \
                            && mjj_vjet_OTF > 40 && (mjj_vjet_OTF <= 70 || mjj_vjet_OTF >= 115)  \
                            && bVeto \
                            '

cuts["boost_wjetcr_mu"] = 'VBS_category_OTF==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && w_had_pt_OTF >= 200 \
                            && mjj_vjet_OTF > 40 && (mjj_vjet_OTF <= 70 || mjj_vjet_OTF >= 115)  \
                            && bVeto \
                            '



###############
##### Top

### Top Tight region

cuts["res_topcr_ele"] = 'VBS_category_OTF==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt_OTF > 30 && vjet_1_pt_OTF > 30 \
                                && mjj_vjet_OTF > 65 && mjj_vjet_OTF < 105 \
                                && bReqTight \
                                && w_had_pt_OTF < 200 \
                                && veto_fatjet_180 \
                                '

cuts["res_topcr_mu"] = 'VBS_category_OTF==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt_OTF > 30 && vjet_1_pt_OTF > 30 \
                                && mjj_vjet_OTF > 65 && mjj_vjet_OTF < 105 \
                                && bReqTight \
                                && w_had_pt_OTF < 200 \
                                && veto_fatjet_180 \
                                '


# Tight top
cuts["boost_topcr_ele"] = 'VBS_category_OTF==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && w_had_pt_OTF >= 200 \
                            && mjj_vjet_OTF > 70 && mjj_vjet_OTF < 115 \
                            && bReqTight \
                            '


cuts["boost_topcr_mu"] = 'VBS_category_OTF==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && w_had_pt_OTF >= 200 \
                            && mjj_vjet_OTF > 70 && mjj_vjet_OTF < 115 \
                            && bReqTight \
                            '

