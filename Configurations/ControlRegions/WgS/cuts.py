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
supercut = 'std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>8 \
         && std_vector_lepton_pt[2]>8 \
         && abs(std_vector_lepton_eta[0])<2.1    \
         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
'

#supercut = 'std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>8 && std_vector_lepton_pt[2]>8 \
#         && abs(std_vector_lepton_eta[0])<2.1    \
#    '
#
         #&& metPfType1 < 50 \

         #&& std_vector_lepton_isTightLepton[0]==1 \



cuts['0j_mmm_TGGmpmetGenMat_minimiNoJpsi']  = ' std_vector_lepton_isTightMuon[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13  && abs(std_vector_lepton_flavour[2]) == 13  && abs(  TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) -3.1) > 0.1 && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1'

cuts['0j_mmm_TGGmpmetGenMat_minimiNoJpsi_new']  = ' std_vector_lepton_isTightMuon[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0])*abs(std_vector_lepton_flavour[1])*abs(std_vector_lepton_flavour[2]) == 13*13*13 && mllWgSt > 0 && abs(  mllWgSt -3.1) > 0.1 && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1'

cuts['0j_emm_TGGmpmetGenMat_minimiNoJpsi']  = ' std_vector_lepton_isTightLepton[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0])*abs(std_vector_lepton_flavour[1])*abs(std_vector_lepton_flavour[2])==11*13*13  && abs(  TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) -3.1) > 0.1 && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1'

cuts['0j_emm_TGGmpmetGenMat_minimiNoJpsi_new']  = ' std_vector_lepton_isTightLepton[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0])*abs(std_vector_lepton_flavour[1])*abs(std_vector_lepton_flavour[2]) == 11*13*13 && mllWgSt > 0 && abs(  mllWgSt -3.1) > 0.1 && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1'
cuts['0j_eem_TGGmpmetGenMat_minimiNoJpsi']  = ' std_vector_lepton_isTightLepton[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0])*abs(std_vector_lepton_flavour[1])*abs(std_vector_lepton_flavour[2])==11*11*13  && abs(  TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) -3.1) > 0.1 && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1'

cuts['0j_eem_TGGmpmetGenMat_minimiNoJpsi_new']  = ' std_vector_lepton_isTightLepton[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0])*abs(std_vector_lepton_flavour[1])*abs(std_vector_lepton_flavour[2]) == 11*11*13 && mllWgSt > 0 && abs(  mllWgSt -3.1) > 0.1 && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1'
cuts['0j_eee_TGGmpmetGenMat_minimiNoJpsi']  = ' std_vector_lepton_isTightLepton[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0])*abs(std_vector_lepton_flavour[1])*abs(std_vector_lepton_flavour[2])==11*11*11  && abs(  TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) -3.1) > 0.1 && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1'

cuts['0j_eee_TGGmpmetGenMat_minimiNoJpsi_new']  = ' std_vector_lepton_isTightLepton[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0])*abs(std_vector_lepton_flavour[1])*abs(std_vector_lepton_flavour[2]) == 11*11*11 && mllWgSt > 0 && abs(  mllWgSt -3.1) > 0.1 && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1'


