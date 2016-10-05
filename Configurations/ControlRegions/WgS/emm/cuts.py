# cuts

#cuts = {}
  
supercut = 'std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>6 \
         && std_vector_lepton_pt[2]>6 \
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

         #&& metPfType1 < 50 \

         #&& std_vector_lepton_isTightLepton[0]==1 \



               
              
#cuts['hww2l2v_13TeV_WgS_mmm_complex_JPsi']  = ' \
                   #abs(std_vector_lepton_flavour[0]) == 13 \
                #&& abs(std_vector_lepton_flavour[1]) == 13 \
                #&& abs(std_vector_lepton_flavour[2]) == 13 \
                #&& (  \
                    #(std_vector_lepton_isTightLepton[0]==1  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1   && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0)   \
                 #|| (std_vector_lepton_isTightLepton[1]==1  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1   && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)   \
                 #|| (std_vector_lepton_isTightLepton[2]==1  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1   && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)   \
                   #)  \
                #&& (min( min(  mllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
                               #, mllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
                             #) , mll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
                             #)) <3.3 && \
                             #min( min(  mllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
                               #, mllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
                             #) , mll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) ) > 2.9\
                #'

            

                               



              
#cuts['hww2l2v_13TeV_WgS_mmm_complex']  = ' \
                   #abs(std_vector_lepton_flavour[0]) == 13 \
                #&& abs(std_vector_lepton_flavour[1]) == 13 \
                #&& abs(std_vector_lepton_flavour[2]) == 13 \
                #&& (  \
                    #(std_vector_lepton_isTightLepton[0]==1  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1   && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0)   \
                 #|| (std_vector_lepton_isTightLepton[1]==1  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1   && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)   \
                 #|| (std_vector_lepton_isTightLepton[2]==1  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1   && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)   \
                   #)  \
                #'

          
#cuts['hww2l2v_13TeV_WgS_mxx_complex']  = ' \
                  #(  \
                    #(std_vector_lepton_isTightLepton[0]==1 && abs(std_vector_lepton_flavour[0]) == 13  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1   && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0)   \
                 #|| (std_vector_lepton_isTightLepton[1]==1 && abs(std_vector_lepton_flavour[1]) == 13  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1   && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)   \
                 #|| (std_vector_lepton_isTightLepton[2]==1 && abs(std_vector_lepton_flavour[2]) == 13  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1   && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)   \
                   #)  \
                #'

         
#cuts['hww2l2v_13TeV_WgS_mxx_complex_noid']  = ' \
                  #(  \
                    #(std_vector_lepton_isTightLepton[0]==1 && abs(std_vector_lepton_flavour[0]) == 13    && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0)   \
                 #|| (std_vector_lepton_isTightLepton[1]==1 && abs(std_vector_lepton_flavour[1]) == 13    && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)   \
                 #|| (std_vector_lepton_isTightLepton[2]==1 && abs(std_vector_lepton_flavour[2]) == 13    && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)   \
                   #)  \
                #'



#cuts['hww2l2v_13TeV_WgS_mmm_inclusive']  = ' \
                   #abs(std_vector_lepton_flavour[0]) == 13 \
                #&& abs(std_vector_lepton_flavour[1]) == 13   \
                #&& abs(std_vector_lepton_flavour[2]) == 13   \
                #&& std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                #'

               
#cuts['hww2l2v_13TeV_WgS_mmm']  = ' \
                   #abs(std_vector_lepton_flavour[0]) == 13 \
                #&& abs(std_vector_lepton_flavour[1]) == 13   \
                #&& abs(std_vector_lepton_flavour[2]) == 13   \
                #&& std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                #&& std_vector_lepton_pt[1]<30 \
                #&& std_vector_lepton_pt[2]<15 \
                #'

               
#cuts['hww2l2v_13TeV_WgS_drll_mmm']  = ' \
                   #abs(std_vector_lepton_flavour[0]) == 13 \
                #&& abs(std_vector_lepton_flavour[1]) == 13   \
                #&& abs(std_vector_lepton_flavour[2]) == 13   \
                #&& std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                #&& std_vector_lepton_pt[1]<30 \
                #&& std_vector_lepton_pt[2]<15 \
                #&& drll<0.2   \
                #'


#cuts['hww2l2v_13TeV_WgS_mee']  = ' \
                   #abs(std_vector_lepton_flavour[0]) == 13 \
                #&& abs(std_vector_lepton_flavour[1]) == 11   \
                #&& abs(std_vector_lepton_flavour[2]) == 11   \
                #&& std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                #&& std_vector_lepton_pt[1]<30 \
                #&& std_vector_lepton_pt[2]<15 \
                #'



cuts['hww2l2v_13TeV_WgS_emm']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 11 \
                && abs(std_vector_lepton_flavour[1]) == 13   \
                && abs(std_vector_lepton_flavour[2]) == 13   \
                && std_vector_lepton_pt[3] < 0   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                '

                #&& std_vector_lepton_pt[1]<30 \
                #&& std_vector_lepton_pt[2]<15 \

cuts['hww2l2v_13TeV_WgS_emm_tll']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 11 \
                && abs(std_vector_lepton_flavour[1]) == 13   \
                && abs(std_vector_lepton_flavour[2]) == 13   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                && std_vector_lepton_pt[3] < 0   \
                && std_vector_lepton_isTightLepton[0]==1 \
                && std_vector_lepton_isWgsLepton[1]==1 \
                && std_vector_lepton_isWgsLepton[2]==1 \
                '


cuts['hww2l2v_13TeV_WgS_emm_tll_cutmtw1']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 11 \
                && abs(std_vector_lepton_flavour[1]) == 13   \
                && abs(std_vector_lepton_flavour[2]) == 13   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                && std_vector_lepton_pt[3] < 0   \
                && std_vector_lepton_isTightLepton[0]==1 \
                && std_vector_lepton_isWgsLepton[1]==1 \
                && std_vector_lepton_isWgsLepton[2]==1 \
                && (mllTwoThree < 2.5 || mllTwoThree > 3.5) \
                && mtw1 > 45 \
                '


cuts['hww2l2v_13TeV_WgS_emm_tll_cutmtw1_cutpt23_cutandcount']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 11 \
                && abs(std_vector_lepton_flavour[1]) == 13   \
                && abs(std_vector_lepton_flavour[2]) == 13   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                && std_vector_lepton_pt[3] < 0   \
                && std_vector_lepton_pt[1] < 50   \
                && std_vector_lepton_pt[2] < 20   \
                && std_vector_lepton_isTightLepton[0]==1 \
                && std_vector_lepton_isWgsLepton[1]==1 \
                && std_vector_lepton_isWgsLepton[2]==1 \
                && (mllTwoThree < 2.5 || mllTwoThree > 3.5) \
                && mtw1 > 45 \
                && metPfType1 > 25 \
                && mllTwoThree<2  \
                '



cuts['hww2l2v_13TeV_WgS_emm_tll_cutmtw1_cutpt23']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 11 \
                && abs(std_vector_lepton_flavour[1]) == 13   \
                && abs(std_vector_lepton_flavour[2]) == 13   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                && std_vector_lepton_pt[3] < 10   \
                && std_vector_lepton_pt[1] < 50   \
                && std_vector_lepton_pt[2] < 20   \
                && std_vector_lepton_isTightLepton[0]==1 \
                && std_vector_lepton_isWgsLepton[1]==1 \
                && std_vector_lepton_isWgsLepton[2]==1 \
                && (mllTwoThree < 2.5 || mllTwoThree > 3.5) \
                && mtw1 > 45 \
                && metPfType1 > 25 \
                '


cuts['hww2l2v_13TeV_WgS_emm_cutmet']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 11 \
                && abs(std_vector_lepton_flavour[1]) == 13   \
                && abs(std_vector_lepton_flavour[2]) == 13   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                && std_vector_lepton_pt[3] < 0   \
                && (mllTwoThree < 2.5 || mllTwoThree > 3.5) \
                && metPfType1>20   \
                '




cuts['hww2l2v_13TeV_WgS_emm_drandmll']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 11 \
                && abs(std_vector_lepton_flavour[1]) == 13   \
                && abs(std_vector_lepton_flavour[2]) == 13   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                && std_vector_lepton_pt[3] < 0   \
                && (mllTwoThree < 2.5 || mllTwoThree > 3.5) \
                && drllTwoThree < 1 \
                '



# suppress DY further

cuts['hww2l2v_13TeV_WgS_emm_tll_cutmtw1_cutpt23_withmpmetcut']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 11 \
                && abs(std_vector_lepton_flavour[1]) == 13   \
                && abs(std_vector_lepton_flavour[2]) == 13   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                && std_vector_lepton_pt[3] < 10   \
                && std_vector_lepton_pt[1] < 40   \
                && std_vector_lepton_pt[2] < 20   \
                && std_vector_lepton_isTightLepton[0]==1 \
                && std_vector_lepton_isWgsLepton[1]==1 \
                && std_vector_lepton_isWgsLepton[2]==1 \
                && (mllTwoThree < 2.2 || mllTwoThree > 3.8) \
                && metPfType1 > 25 \
                && mpmet > 30 \
                '



cuts['hww2l2v_13TeV_WgS_emm_tll_cutmtw1_cutpt23_withmpmetcut_controRegionPlots']  = ' \
                   abs(std_vector_lepton_flavour[0]) == 11 \
                && abs(std_vector_lepton_flavour[1]) == 13   \
                && abs(std_vector_lepton_flavour[2]) == 13   \
                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                && std_vector_lepton_pt[3] < 10   \
                && std_vector_lepton_pt[1] < 40   \
                && std_vector_lepton_pt[2] < 20   \
                && std_vector_lepton_isTightLepton[0]==1 \
                && std_vector_lepton_isWgsLepton[1]==1 \
                && std_vector_lepton_isWgsLepton[2]==1 \
                && (mllTwoThree < 2.2 || mllTwoThree > 3.8) \
                && metPfType1 > 25 \
                && mpmet > 30 \
                && mllTwoThree < 4 \
                '
                

 
                
                #&& mtw1 > 45 \



#cuts['hww2l2v_13TeV_WgS_mmm_tt']  = ' \
                   #abs(std_vector_lepton_flavour[0]) == 13 \
                #&& abs(std_vector_lepton_flavour[1]) == 13   \
                #&& abs(std_vector_lepton_flavour[2]) == 13   \
                #&& std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
                #&& std_vector_lepton_isTightLepton[1]==1 \
                #'






# 11 = e
# 13 = mu
# 15 = tau
