# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '1'


############ 
## Signal

cuts['inclusive'] = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35)\
                      || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
                      && Alt$(Lepton_pt[1],0)<=10 && Alt$(Lepton_isLoose[1],1)> 0.5 \
                    '