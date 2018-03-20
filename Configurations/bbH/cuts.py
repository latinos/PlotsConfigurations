# cuts

#cuts = {}
  
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && metPfType1 > 20 \
            && ptll > 30 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
            '


#cuts['hww2l2v_13TeV_of2j_vbf']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                               && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                               && (mth>=60 && mth<125) \
#                               && (njet==2) \
#                               && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
#                               && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                               && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                               && (detajj>3.5 && mjj>400) \
#                               && (std_vector_jet_pt[0]>30 && std_vector_jet_pt[1]>30) \
#                               && '+bVeto+' \
#                               '

cuts['hww2l2v_13TeV_of2j_bbH']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                      && (std_vector_jet_pt[0]>10 && std_vector_jet_pt[1]>10) \
                                      '


cuts['hww2l2v_13TeV_of2j_bbH_step1']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                      && (std_vector_jet_pt[0]>10 && std_vector_jet_pt[1]>10) \
                                      && (std_vector_jet_pt[0]<70 && std_vector_jet_pt[1]<40) \
                                      && mll<90   \
                                      && mth<150  \
                                      && mth>40  \
                                      '


cuts['hww2l2v_13TeV_of2j_bbH_step2']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                      && (std_vector_jet_pt[0]>10 && std_vector_jet_pt[1]>10) \
                                      && (std_vector_jet_pt[0]<70 && std_vector_jet_pt[1]<40) \
                                      && mll<90   \
                                      && mth<150  \
                                      && mth>40  \
                                      && (std_vector_jet_cmvav2[0]*(std_vector_jet_cmvav2[0]>std_vector_jet_cmvav2[1])+std_vector_jet_cmvav2[1]*(std_vector_jet_cmvav2[0]<=std_vector_jet_cmvav2[1])) > -0.9 \
                                      '



#cuts['hww2l2v_13TeV_of2j_bbH_step2']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                      #&& (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                      #&& (std_vector_jet_pt[0]>10 && std_vector_jet_pt[1]>10) \
                                      #&& (std_vector_jet_pt[0]<30 && std_vector_jet_pt[1]<30) \
                                      #&& mll<100  \
                                      #&& mth<150  \
                                      #&& mth>60  \
                                      #&& std_vector_jet_cmvav2[0] > 0.4432  \
                                      #&& std_vector_jet_cmvav2[1] > 0.4432  \
                                      #'

#  tagger['CMVA'] = {}
#  tagger['CMVA']['algo'] = 'cmvav2'
#  tagger['CMVA']['L']    = -0.5884
#  tagger['CMVA']['M']    = 0.4432
#  tagger['CMVA']['T']    = 0.9432


#
# control regions
#




# 11 = e
# 13 = mu
# 15 = tau
