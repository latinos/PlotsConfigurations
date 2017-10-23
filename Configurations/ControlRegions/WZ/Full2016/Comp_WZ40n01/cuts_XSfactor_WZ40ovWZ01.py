# cuts

#cuts = {}
  
#supercut = 'mpmet >25'
#supercut = 'std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>8 && std_vector_lepton_pt[2]>8 \
#         && abs(std_vector_lepton_eta[0])<2.1 && abs(std_vector_lepton_eta[1])<2.1  && abs(std_vector_lepton_eta[2])<2.1  \
#'
###################
#
#supercut = 'std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>8 \
#         && std_vector_lepton_pt[2]>8 \
#         && abs(std_vector_lepton_eta[0])<2.1    \
#         && ( std_vector_jet_pt[0] < 30 ) \
#         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#'
######################
#supercut = 'std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>8 \
#         && std_vector_lepton_pt[2]>8 \
#         && abs(std_vector_lepton_eta[0])<2.1    \
#         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#'

supercut = 'std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>8 && std_vector_lepton_pt[2]>8 \
    '
#supercut = 'std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>8 && std_vector_lepton_pt[2]>8 \
#         && abs(std_vector_lepton_eta[0])<2.1    \
#    '
#
         #&& metPfType1 < 50 \

         #&& std_vector_lepton_isTightLepton[0]==1 \



cuts['mmm']   = 'abs(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]) == 13*13*13  && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1'
cuts['mmm_0j']= 'abs(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]) == 13*13*13  && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1 && std_vector_jet_pt[0] < 30 '
cuts['mmm_1j']= 'abs(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]) == 13*13*13  && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30'
cuts['mmm_2j']= 'abs(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]) == 13*13*13  && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30'


cuts['emm']   = 'abs(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]) == 11*13*13  && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1'
cuts['emmGenZ0']   = 'Gen_ZGstar_MomId==23 && abs(std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]) == 11*13*13  && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1'
cuts['GenZ0']= 'Gen_ZGstar_MomId==23'
cuts['GenZ0_LepGenMatch']= 'Gen_ZGstar_MomId==23 && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1'

