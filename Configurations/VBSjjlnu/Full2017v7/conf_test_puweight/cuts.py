# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>38)\
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && Alt$(Lepton_pt[1],0)<=10 && Alt$(Lepton_isLoose[1],1)> 0.5 \
            '


### Top Tight region

cuts["res_topcr_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                '

cuts["res_topcr_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                '



