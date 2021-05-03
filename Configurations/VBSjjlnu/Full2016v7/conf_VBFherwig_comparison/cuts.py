# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>30)\
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && Alt$(Lepton_pt[1],0)<=10 && Alt$(Lepton_isLoose[1],1)> 0.5 \
            && PuppiMET_pt > 30 \
            && Mtw_lep < 185 \
            '


############ 
## Signal


cuts["incl_ele"] = 'abs(Lepton_pdgId[0])==11  '



cuts["incl_mu"] = 'abs(Lepton_pdgId[0])==13'

cuts["res_vbs_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                    && vbs_0_pt > 50 && vbs_1_pt > 30 \
                                && w_had_pt < 200 \
                                && veto_fatjet_180 \
                                '



cuts["res_vbs_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                    && vbs_0_pt > 50 && vbs_1_pt > 30 \
                                && w_had_pt < 200 \
                                && veto_fatjet_180 \
                                '

###############
##### Wjets
