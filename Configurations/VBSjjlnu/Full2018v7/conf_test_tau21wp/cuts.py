# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35)\
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && Alt$(Lepton_pt[1],0)<=10 && Alt$(Lepton_isLoose[1],1)> 0.5 \
            && PuppiMET_pt > 30 \
            '


############ 
## Signal

cuts["incl"] = 'nFatJet>=1 && Alt$(FatJet_pt_nom[0],-1)> 200 && Alt$(abs(FatJet_eta[0]),999) < 2.4'

cuts["masscut"] = 'nFatJet>=1 && Alt$(FatJet_pt_nom[0],-1)> 200 && Alt$(abs(FatJet_eta[0]),999) < 2.4 \
                     && Alt$( FatJet_msoftdrop_nom[0] ,-1 )> 40 && Alt$( FatJet_msoftdrop_nom[0] ,-1 ) < 250 '
