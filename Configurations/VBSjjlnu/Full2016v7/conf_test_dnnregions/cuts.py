# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>30)\
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && Alt$(Lepton_pt[1],0)<=10 && Alt$(Lepton_isLoose[1],1)> 0.5 \
            && vbs_0_pt > 50 && vbs_1_pt > 30 \
            && PuppiMET_pt > 30 \
            && deltaeta_vbs >= 2.5  \
            && mjj_vbs >= 500 \
            && Mtw_lep < 185 \
            '


############ 
## Signal

for ibin in range(5):

    cuts["res_sig_ele_{}".format(ibin+1)] = 'VBS_category==1 \
                                    && abs(Lepton_pdgId[0])==11 \
                                    && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                    && mjj_vjet > 65 && mjj_vjet < 105 \
                                    && bVeto \
                                    && w_had_pt < 200 \
                                    && veto_fatjet_180 \
                                    && DNNoutput_resolved_v1 >= {} && DNNoutput_resolved_v1<{}'.format(0.2 * ibin, 0.2*(ibin+1))



    cuts["res_sig_mu_{}".format(ibin+1)] = 'VBS_category==1 \
                                    && abs(Lepton_pdgId[0])==13 \
                                    && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                    && mjj_vjet > 65 && mjj_vjet < 105 \
                                    && bVeto \
                                    && w_had_pt < 200 \
                                    && veto_fatjet_180 \
                                    && DNNoutput_resolved_v1 >= {} && DNNoutput_resolved_v1<{}'.format(0.2 * ibin, 0.2*(ibin+1))

    
    ###############
    ##### Wjets

    cuts["res_wjetcr_ele_{}".format(ibin+1)] = 'VBS_category==1 \
                                    && abs(Lepton_pdgId[0])==11 \
                                    && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                    && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                    && bVeto \
                                    && w_had_pt < 200 \
                                    && veto_fatjet_180 \
                                    && DNNoutput_resolved_v1 >= {} && DNNoutput_resolved_v1<{}'.format(0.2 * ibin, 0.2*(ibin+1))



    cuts["res_wjetcr_mu_{}".format(ibin+1)] = 'VBS_category==1 \
                                    && abs(Lepton_pdgId[0])==13 \
                                    && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                    && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                    && bVeto \
                                    && w_had_pt < 200 \
                                    && veto_fatjet_180 \
                                    && DNNoutput_resolved_v1 >= {} && DNNoutput_resolved_v1<{}'.format(0.2 * ibin, 0.2*(ibin+1))


    cuts["res_topcr_ele_{}".format(ibin+1)] = 'VBS_category==1 \
                                    && abs(Lepton_pdgId[0])==11 \
                                    && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                    && mjj_vjet > 65 && mjj_vjet < 105 \
                                    && bReqTight \
                                    && w_had_pt < 200 \
                                    && veto_fatjet_180 \
                                    && DNNoutput_resolved_v1 >= {} && DNNoutput_resolved_v1<{}'.format(0.2 * ibin, 0.2*(ibin+1))

    cuts["res_topcr_mu_{}".format(ibin+1)] = 'VBS_category==1 \
                                    && abs(Lepton_pdgId[0])==13 \
                                    && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                    && mjj_vjet > 65 && mjj_vjet < 105 \
                                    && bReqTight \
                                    && w_had_pt < 200 \
                                    && veto_fatjet_180 \
                                    && DNNoutput_resolved_v1 >= {} && DNNoutput_resolved_v1<{}'.format(0.2 * ibin, 0.2*(ibin+1))


boost_bins = [0,0.2,0.4,0.65,1]
for ibin in range(4):
    cuts["boost_sig_ele_{}".format(ibin+1)] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && w_had_pt >= 200 \
                                && mjj_vjet > 70 && mjj_vjet < 115 \
                                && bVeto \
                                && DNNoutput_boosted >= {} && DNNoutput_boosted<{}'.format(boost_bins[ibin], boost_bins[ibin+1])


    cuts["boost_sig_mu_{}".format(ibin+1)] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==13 \
                                && w_had_pt >= 200 \
                                && mjj_vjet > 70 && mjj_vjet < 115 \
                                && bVeto \
                                && DNNoutput_boosted >= {} && DNNoutput_boosted<{}'.format(boost_bins[ibin], boost_bins[ibin+1])


    cuts["boost_wjetcr_ele_{}".format(ibin+1)] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && w_had_pt >= 200 \
                                && mjj_vjet > 40 && (mjj_vjet <= 70 || mjj_vjet >= 115)  \
                                && bVeto \
                                && DNNoutput_boosted >= {} && DNNoutput_boosted<{}'.format(boost_bins[ibin], boost_bins[ibin+1])

    cuts["boost_wjetcr_mu_{}".format(ibin+1)] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==13 \
                                && w_had_pt >= 200 \
                                && mjj_vjet > 40 && (mjj_vjet <= 70 || mjj_vjet >= 115)  \
                                && bVeto \
                                && DNNoutput_boosted >= {} && DNNoutput_boosted<{}'.format(boost_bins[ibin], boost_bins[ibin+1])


    # Tight top
    cuts["boost_topcr_ele_{}".format(ibin+1)] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && w_had_pt >= 200 \
                                && mjj_vjet > 70 && mjj_vjet < 115 \
                                && bReqTight \
                                && DNNoutput_boosted >= {} && DNNoutput_boosted<{}'.format(boost_bins[ibin], boost_bins[ibin+1])


    cuts["boost_topcr_mu_{}".format(ibin+1)] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==13 \
                                && w_had_pt >= 200 \
                                && mjj_vjet > 70 && mjj_vjet < 115 \
                                && bReqTight \
                                && DNNoutput_boosted >= {} && DNNoutput_boosted<{}'.format(boost_bins[ibin], boost_bins[ibin+1])

