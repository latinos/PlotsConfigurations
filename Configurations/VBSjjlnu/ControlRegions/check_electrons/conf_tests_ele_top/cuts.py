# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
# supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35)\
#              || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
#             && vbs_0_pt > 50 && vbs_1_pt > 30 \
#             && PuppiMET_pt > 30 \
#             && deltaeta_vbs >= 2.5  \
#             && mjj_vbs >= 500 \
#             && Mtw_lep < 185 \
#             '

supercut = ' \
            PuppiMET_pt > 30 && \
             ( ( abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35 && Lepton_pt[1]> 30 ) ||\
               ( abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 && Lepton_pt[1]>35) \
             )'


# #########################################################################
# ###############|----------------------------------|######################
# ###############|          Resolved category       |######################
# ###############|----------------------------------|######################
# #########################################################################

#####################################
##  W-onshell,  bveto --> Signal

#cuts["DY_ee_incl"] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11) && bVeto && mth>60  \
#                            && mll>60 && mll<120'

cuts["top_emOS_incl"] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) &&\
                             !bVeto && mth> 60 && mll > 30 '



cuts["top_emOS_eleloweta"] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) &&\
                                 !bVeto && mth> 60 && mll > 30  \
                           &&   (  (abs(Lepton_pdgId[0])==11  &&  abs(Lepton_eta[0]) <= 2) || (abs(Lepton_pdgId[1])==11  &&  abs(Lepton_eta[1]) <= 2))'



cuts["top_emOS_elehigheta"] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) &&\
                             !bVeto && mth> 60 && mll > 30 \
                            &&   (  (abs(Lepton_pdgId[0])==11  &&  abs(Lepton_eta[0]) > 2) || (abs(Lepton_pdgId[1])==11  &&  abs(Lepton_eta[1]) > 2))'

cuts["top_emOS_elehigheta_pt50"] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) &&\
                             !bVeto && mth> 60 && mll > 30 \
                            &&   (  ( abs(Lepton_pdgId[0])==11  &&  (abs(Lepton_eta[0]) > 2 && Lepton_pt[0]>50) ) || (abs(Lepton_pdgId[1])==11  && ( abs(Lepton_eta[1]) > 2 && Lepton_pt[1]>50)  ))'


cuts["top_emOS_elehigheta_pt75"] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) &&\
                             !bVeto && mth> 60 && mll > 30 \
                            &&   (  ( abs(Lepton_pdgId[0])==11  &&  (abs(Lepton_eta[0]) > 2 && Lepton_pt[0]>75) ) || (abs(Lepton_pdgId[1])==11  && ( abs(Lepton_eta[1]) > 2 && Lepton_pt[1]>75)  ))'


cuts["top_emOS_elehigheta_pt100"] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) &&\
                             !bVeto && mth> 60 && mll > 30 \
                            &&   (  ( abs(Lepton_pdgId[0])==11  &&  (abs(Lepton_eta[0]) > 2 && Lepton_pt[0]>100) ) || (abs(Lepton_pdgId[1])==11  && ( abs(Lepton_eta[1]) > 2 && Lepton_pt[1]>100)  ))'



cuts["top_emOS_elehigheta_lownvtx"] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) &&\
                             !bVeto && mth> 60 && mll > 30 \
                            &&   (  (abs(Lepton_pdgId[0])==11  &&  abs(Lepton_eta[0]) > 2) || (abs(Lepton_pdgId[1])==11  &&  abs(Lepton_eta[1]) > 2))\
                            && PV_npvs< 25'

cuts["top_emOS_elehigheta_highnvtx"] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) &&\
                             !bVeto && mth> 60 && mll > 30 \
                            &&   (  (abs(Lepton_pdgId[0])==11  &&  abs(Lepton_eta[0]) > 2) || (abs(Lepton_pdgId[1])==11  &&  abs(Lepton_eta[1]) > 2))\
                            && PV_npvs >= 25'


cuts["top_emOS_eleloweta_lownvtx"] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) &&\
                                 !bVeto && mth> 60 && mll > 30  \
                           &&   (  (abs(Lepton_pdgId[0])==11  &&  abs(Lepton_eta[0]) <= 2) || (abs(Lepton_pdgId[1])==11  &&  abs(Lepton_eta[1]) <= 2))\
                           && PV_npvs < 25'

cuts["top_emOS_eleloweta_highnvtx"] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) &&\
                                 !bVeto && mth> 60 && mll > 30  \
                           &&   (  (abs(Lepton_pdgId[0])==11  &&  abs(Lepton_eta[0]) <= 2) || (abs(Lepton_pdgId[1])==11  &&  abs(Lepton_eta[1]) <= 2))\
                           && PV_npvs >= 25'
