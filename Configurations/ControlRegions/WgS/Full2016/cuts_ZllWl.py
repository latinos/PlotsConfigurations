# cuts

#cuts = {}
  
supercut = 'std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>8 && std_vector_lepton_pt[2]>8 && std_vector_lepton_isWgsLepton[0]>0.5 && std_vector_lepton_isWgsLepton[1]>0.5 && std_vector_lepton_isWgsLepton[2]>0.5 \
          '


#
         #&& metPfType1 < 50 \

         #&& std_vector_lepton_isTightLepton[0]==1 \



#cuts['ZTommWTom_mpmet']  = ' mpmet > 25 \
#                            && fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])==13*13*13 && fabs( mllWgSt - 3.1) > 0.1 '
#
#cuts['ZTommWToe_mpmet']  = ' mpmet > 25  \
#                            && fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*11 && fabs( mllWgSt - 3.1) > 0.1 '
#
cuts['ZTomm_mpmet']  = '  mpmet > 25  \
                          && ((fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*13) || (fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*11)) && fabs( mllWgSt - 3.1) > 0.1 '


cuts['ZTomm_mpmet_Zpeak']  = '  mpmet > 25  \
                          && ((fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*13) || (fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*11)) && fabs( mllWgSt - 91.2) < 10. '

cuts['ZTomm_mpmet_WgSt']  = '  mpmet > 25  \
                          && ((fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*13) || (fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*11)) && fabs( mllWgSt - 3.1) > 0.1 && mllWgSt < 4. && mllWgSt >0.'


cuts['ZTomm_mpmet_WgSt_gt0p1']  = '  mpmet > 25  \
                          && ((fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*13) || (fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*11)) && fabs( mllWgSt - 3.1) > 0.1 && mllWgSt < 4. && mllWgSt >0.1'
#cuts['ZToeeWTomu_mpmet']  = ' mpmet > 25 \
#                          && fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 11*11*13 && fabs( mllWgSt - 3.1) > 0.1 '
#
#cuts['ZToeeWToe_mpmet']  = ' mpmet > 25 \
#                          && fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 11*11*11 && fabs( mllWgSt - 3.1) > 0.1 '
#
#cuts['ZToee_mpmet']  = ' mpmet > 25 \
#                      && ((fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 11*11*13) || (fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 11*11*11)) && fabs( mllWgSt - 3.1) > 0.1 '


#cuts['ZTommWTom_metPfType1']  = ' metPfType1 > 25 \
#              && fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*13 && fabs( mllWgSt - 3.1) > 0.1 '
#
#cuts['ZTommWToe_metPfType1']  = '  metPfType1 > 25 \
#              && fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*11 && fabs( mllWgSt - 3.1) > 0.1 '
#
cuts['ZTomm_metPfType1']  = ' metPfType1 > 25 \
              && ((fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*13) || (fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*11)) && fabs( mllWgSt - 3.1) > 0.1 '

#cuts['ZToeeWTomu_metPfType1']  = ' metPfType1 > 25 \
#              && fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 11*11*13 && fabs( mllWgSt - 3.1) > 0.1 '
#
#cuts['ZToeeWToe_metPfType1']  = ' metPfType1 > 25 \
#              && fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 11*11*11 && fabs( mllWgSt - 3.1) > 0.1 '
#
#cuts['ZToee_metPfType1']  = ' metPfType1 > 25 \
#              && ((fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 11*11*13) || (fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 11*11*11)) && fabs( mllWgSt - 3.1) > 0.1 '


# 11 = e
# 13 = mu
# 15 = tau
