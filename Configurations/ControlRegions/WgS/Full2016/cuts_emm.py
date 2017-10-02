# cuts

#cuts = {}
  
supercut = 'std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>8 \
         && std_vector_lepton_pt[2]>8 \
'


#
         #&& metPfType1 < 50 \

         #&& std_vector_lepton_isTightLepton[0]==1 \




cuts['emm_TGGmpmet_NoJpsi']  = ' std_vector_electron_isTightLepton_cut_WP_Tight80X[0] > 0.5 && std_vector_lepton_isWgsLepton[1] > 0.5 && std_vector_lepton_isWgsLepton[2] > 0.5 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]) == 13*13 && mllWgSt > 0 && abs(  mllWgSt -3.1) > 0.1 '


# 11 = e
# 13 = mu
# 15 = tau
