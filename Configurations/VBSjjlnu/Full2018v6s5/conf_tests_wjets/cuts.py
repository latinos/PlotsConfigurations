# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35)\
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            '


#########################################################################
###############|----------------------------------|######################
###############|          Resolved category       |######################
###############|----------------------------------|######################
#########################################################################

#####################################
##  W-onshell, bveto --> Signal

cuts["wjets_inclus"] = 'vjet_0_pt > 30 && vjet_1_pt > 30 \
                        && vbs_0_pt > 50 && vbs_1_pt > 30 \
                        && bVeto \
                        && whad_pt < 200 \
                        && PuppiMET_pt > 30 \
                        && deltaeta_vbs >= 2.5  \
                        && mjj_vbs >= 500 \
                        && Mtw_lep < 185 \
                        '
