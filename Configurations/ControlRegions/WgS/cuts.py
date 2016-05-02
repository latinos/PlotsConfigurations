# cuts

#cuts = {}
  
supercut = 'std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>5 \
         && std_vector_lepton_pt[2]>5 \
'

         #&& metPfType1 < 50 \

         #&& std_vector_lepton_isTightLepton[0]==1 \



               
#cuts['hww2l2v_13TeV_WgS_mmm']  = ' abs(std_vector_lepton_flavour[0]) == 13 \
                #&& abs(std_vector_lepton_flavour[1]) == 13   \
                #&& abs(std_vector_lepton_flavour[2]) == 13   \
                #&& std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                #&& std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]>0   \
                #'

              
cuts['hww2l2v_13TeV_WgS_mmm_complex']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 13 \
                && abs(std_vector_lepton_flavour[1]) == 13 \
                && abs(std_vector_lepton_flavour[2]) == 13 \
                && (  \
                    (std_vector_lepton_isTightLepton[0]==1  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1   && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0)   \
                 || (std_vector_lepton_isTightLepton[1]==1  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1   && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)   \
                 || (std_vector_lepton_isTightLepton[2]==1  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1   && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)   \
                   )  \
                '

          
cuts['hww2l2v_13TeV_WgS_mxx_complex']  = ' \
                  (  \
                    (std_vector_lepton_isTightLepton[0]==1 && abs(std_vector_lepton_flavour[0]) == 13  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1   && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0)   \
                 || (std_vector_lepton_isTightLepton[1]==1 && abs(std_vector_lepton_flavour[1]) == 13  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1   && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)   \
                 || (std_vector_lepton_isTightLepton[2]==1 && abs(std_vector_lepton_flavour[2]) == 13  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1   && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)   \
                   )  \
                '

         
cuts['hww2l2v_13TeV_WgS_mxx_complex_noid']  = ' \
                  (  \
                    (std_vector_lepton_isTightLepton[0]==1 && abs(std_vector_lepton_flavour[0]) == 13    && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0)   \
                 || (std_vector_lepton_isTightLepton[1]==1 && abs(std_vector_lepton_flavour[1]) == 13    && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)   \
                 || (std_vector_lepton_isTightLepton[2]==1 && abs(std_vector_lepton_flavour[2]) == 13    && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)   \
                   )  \
                '



cuts['hww2l2v_13TeV_WgS_mmm_inclusive']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 13 \
                && abs(std_vector_lepton_flavour[1]) == 13   \
                && abs(std_vector_lepton_flavour[2]) == 13   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                '

               
cuts['hww2l2v_13TeV_WgS_mmm']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 13 \
                && abs(std_vector_lepton_flavour[1]) == 13   \
                && abs(std_vector_lepton_flavour[2]) == 13   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                && std_vector_lepton_pt[1]<30 \
                && std_vector_lepton_pt[2]<15 \
                '

               
cuts['hww2l2v_13TeV_WgS_drll_mmm']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 13 \
                && abs(std_vector_lepton_flavour[1]) == 13   \
                && abs(std_vector_lepton_flavour[2]) == 13   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                && std_vector_lepton_pt[1]<30 \
                && std_vector_lepton_pt[2]<15 \
                && drll<0.2   \
                '


cuts['hww2l2v_13TeV_WgS_mee']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 13 \
                && abs(std_vector_lepton_flavour[1]) == 11   \
                && abs(std_vector_lepton_flavour[2]) == 11   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                && std_vector_lepton_pt[1]<30 \
                && std_vector_lepton_pt[2]<15 \
                '



cuts['hww2l2v_13TeV_WgS_mmm_tt']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 13 \
                && abs(std_vector_lepton_flavour[1]) == 13   \
                && abs(std_vector_lepton_flavour[2]) == 13   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                && std_vector_lepton_isTightLepton[1]==1 \
                '



# 11 = e
# 13 = mu
# 15 = tau

