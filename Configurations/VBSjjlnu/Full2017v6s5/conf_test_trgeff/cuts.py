# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py

# Veto on second lepton, no cut on first lepton (tight requirement in samples)
supercut = 'Alt$(Lepton_pt[1],0)<=10 && Alt$(Lepton_isLoose[1],1)> 0.5 \
                && (  Alt$(Lepton_isTightElectron_mvaFall17V1Iso_WP90[1], 0) < 0.5 \
                && Alt$(Lepton_isTightMuon_cut_Tight_HWWW[1],0) < 0.5 )\
            && Alt$(CleanJet_pt[3], 0)>30 \
            && PuppiMET_pt > 30 \
            && Sum$(abs(CleanJet_eta)<2.65  || abs(CleanJet_eta)>3.139 || (Jet_puId[CleanJet_jetIdx] & (1 << 0))==1 )>=4  \
            '


#########################################################################
###############|----------------------------------|######################
###############|          Resolved category       |######################
###############|----------------------------------|######################
#########################################################################

#####################################
##  W-onshell, bveto --> Signal


cuts["res_sig_ele"] = 'abs(Lepton_pdgId[0])==11 \
                    && bVeto \
                    '



cuts["res_sig_mu"] = 'abs(Lepton_pdgId[0])==13 \
                    && bVeto \
                    '




###############################################
#Top


### Top Tight region


cuts["res_topcr_ele"] = 'abs(Lepton_pdgId[0])==11 \
                                && bReqTight \
                                '

cuts["res_topcr_mu"] = 'abs(Lepton_pdgId[0])==13 \
                                && bReqTight \
                                '
