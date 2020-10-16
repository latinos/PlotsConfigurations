# cuts

# Only electron 
supercut = 'vbs_0_pt > 50 && vbs_1_pt > 30 \
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


cuts["res_sig_dnnhigh"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                '


cuts["res_sig_dnnall"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                '


cuts["boost_sig_dnnhigh"] = 'VBS_category==0 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet > 65 && mjj_vjet < 105 \
                            && bVeto \
                            && DNNoutput_boosted > 0.3 \
                            '


cuts["boost_sig_dnnall"] = 'VBS_category==0 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet > 65 && mjj_vjet < 105 \
                            && bVeto \
                            '


cuts["res_sig_dnnhigh_nohorn"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                && (abs(vbs_0_eta)<2.65  || abs(vbs_0_eta)>3.139 || (Jet_puId[VBS_jets_maxmjj_massWZ[0]] & (1 << 0))==1) \
                                && (abs(vbs_1_eta)<2.65  || abs(vbs_1_eta)>3.139 || (Jet_puId[VBS_jets_maxmjj_massWZ[1]] & (1 << 0))==1) \
                                && (abs(vjet_0_eta)<2.65 || abs(vjet_0_eta)>3.139 || (Jet_puId[V_jets_maxmjj_massWZ[0]] & (1 << 0))==1) \
                                && (abs(vjet_1_eta)<2.65 || abs(vjet_1_eta)>3.139 || (Jet_puId[V_jets_maxmjj_massWZ[1]] & (1 << 0))==1) \
                                '


cuts["res_sig_dnnall_nohorn"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                && (abs(vbs_0_eta)<2.65  || abs(vbs_0_eta)>3.139 || (Jet_puId[VBS_jets_maxmjj_massWZ[0]] & (1 << 0))==1) \
                                && (abs(vbs_1_eta)<2.65  || abs(vbs_1_eta)>3.139 || (Jet_puId[VBS_jets_maxmjj_massWZ[1]] & (1 << 0))==1) \
                                && (abs(vjet_0_eta)<2.65 || abs(vjet_0_eta)>3.139 || (Jet_puId[V_jets_maxmjj_massWZ[0]] & (1 << 0))==1) \
                                && (abs(vjet_1_eta)<2.65 || abs(vjet_1_eta)>3.139 || (Jet_puId[V_jets_maxmjj_massWZ[1]] & (1 << 0))==1) \
                                '


cuts["boost_sig_dnnhigh_nohorn"] = 'VBS_category==0 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet > 65 && mjj_vjet < 105 \
                            && bVeto \
                            && DNNoutput_boosted > 0.3 \
                            && (abs(vbs_0_eta)<2.65  || abs(vbs_0_eta)>3.139 || (Jet_puId[VBS_jets_maxmjj_massWZ[0]] & (1 << 0))==1) \
                            && (abs(vbs_1_eta)<2.65  || abs(vbs_1_eta)>3.139 || (Jet_puId[VBS_jets_maxmjj_massWZ[1]] & (1 << 0))==1) \
                            && (abs(vjet_0_eta)<2.65 || abs(vjet_0_eta)>3.139 || (Jet_puId[V_jets_maxmjj_massWZ[0]] & (1 << 0))==1) \
                            && (abs(vjet_1_eta)<2.65 || abs(vjet_1_eta)>3.139 || (Jet_puId[V_jets_maxmjj_massWZ[1]] & (1 << 0))==1) \
                            '


cuts["boost_sig_dnnall_nohorn"] = 'VBS_category==0 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet > 65 && mjj_vjet < 105 \
                            && bVeto \
                            && (abs(vbs_0_eta)<2.65  || abs(vbs_0_eta)>3.139 || (Jet_puId[VBS_jets_maxmjj_massWZ[0]] & (1 << 0))==1) \
                            && (abs(vbs_1_eta)<2.65  || abs(vbs_1_eta)>3.139 || (Jet_puId[VBS_jets_maxmjj_massWZ[1]] & (1 << 0))==1) \
                            && (abs(vjet_0_eta)<2.65 || abs(vjet_0_eta)>3.139 || (Jet_puId[V_jets_maxmjj_massWZ[0]] & (1 << 0))==1) \
                            && (abs(vjet_1_eta)<2.65 || abs(vjet_1_eta)>3.139 || (Jet_puId[V_jets_maxmjj_massWZ[1]] & (1 << 0))==1) \
                            '