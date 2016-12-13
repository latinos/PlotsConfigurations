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


#cuts['hww2l2v_13TeV_of0j_noMpmet']  = ' std_vector_lepton_isTightMuon[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1  && abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13  && abs(std_vector_lepton_flavour[2]) == 13  && abs(  TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) -3.1) > 0.1 &&   TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000)  < 0.5 '
#
#cuts['hww2l2v_13TeV_of0j_mpmet']  = ' std_vector_lepton_isTightMuon[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13  && abs(std_vector_lepton_flavour[2]) == 13  && abs(  TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) -3.1) > 0.1 &&   TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000)  < 0.5 '
# Norminal Cut
cuts['0j_mmm_TGGmpmet_minimiNoJpsi']  = ' std_vector_lepton_isTightMuon[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13  && abs(std_vector_lepton_flavour[2]) == 13  && abs(  TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) -3.1) > 0.1 '

cuts['0j_mmm_TGGmpmetGenMat_minimiNoJpsi']  = ' std_vector_lepton_isTightMuon[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13  && abs(std_vector_lepton_flavour[2]) == 13  && abs(  TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) -3.1) > 0.1 && std_vector_lepton_genmatched[0]==1 && std_vector_lepton_genmatched[1]==1 && std_vector_lepton_genmatched[2]==1'

cuts['0j_mmm_TGGpfmet20_minimiNoJpsi']  = ' std_vector_lepton_isTightMuon[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && metPfType1 > 20 && abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13  && abs(std_vector_lepton_flavour[2]) == 13  && abs(  TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) -3.1) > 0.1 '

#cuts['0j_mmm_GGGmpmet_minimiNoJpsi']  = ' std_vector_lepton_isWgsLepton[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13  && abs(std_vector_lepton_flavour[2]) == 13  && abs(  TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) -3.1) > 0.1 '

cuts['0j_mmm_Tmpmet_minimiNoJpsi']  = ' std_vector_lepton_isTightMuon[0]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13  && abs(std_vector_lepton_flavour[2]) == 13  && abs(  TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) -3.1) > 0.1 '

cuts['0j_mmm_Tpfmet20_minimiNoJpsi']  = ' std_vector_lepton_isTightMuon[0]==1 && metPfType1 > 20 && abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13  && abs(std_vector_lepton_flavour[2]) == 13  && abs(  TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) -3.1) > 0.1 '

cuts['0j_mmm_TGGmpmet_TwoThreeNoJpsi']  = ' std_vector_lepton_isTightMuon[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 13 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]==-13*13 && abs( mllTwoThree -3.1) > 0.1 '

#cuts['0j_mmm_GGGmpmet_TwoThreeNoJpsi']  = ' std_vector_lepton_isWgsLepton[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 13 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]==-13*13 && abs( mllTwoThree -3.1) > 0.1 '

cuts['0j_mmm_Tmpmet_TwoThreeNoJpsi']    = ' std_vector_lepton_isTightMuon[0]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 13 && std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] == -13*13  && abs( mllTwoThree -3.1) > 0.1 '


cuts['0j_emm_TGGmpmet_TwoThreeNoJpsi'] = ' std_vector_lepton_isTightLepton[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 11 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]==-13*13  && abs( mllTwoThree -3.1) > 0.1 '

cuts['0j_emm_TGGpfmet20_TwoThreeNoJpsi'] = ' std_vector_lepton_isTightLepton[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && metPfType1 > 20 && abs(std_vector_lepton_flavour[0]) == 11 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]==-13*13  && abs( mllTwoThree -3.1) > 0.1 '

#cuts['0j_emm_GGGmpmet_TwoThreeNoJpsi'] = ' std_vector_lepton_isWgsLepton[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 11 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2] ==-13*13  && abs(  mllTwoThree -3.1) > 0.1 '

cuts['0j_emm_Tmpmet_TwoThreeNoJpsi']   = ' std_vector_lepton_isTightLepton[0]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 11 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2] ==-13*13  && abs( mllTwoThree -3.1) > 0.1 '

cuts['0j_emm_Tpfmet20_TwoThreeNoJpsi']   = ' std_vector_lepton_isTightLepton[0]==1 && metPfType1 > 20 && abs(std_vector_lepton_flavour[0]) == 11 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2] ==-13*13  && abs( mllTwoThree -3.1) > 0.1 '


cuts['0j_mmm_TGG_noJpsi_mllmin03']  = ' std_vector_lepton_isTightMuon[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && mpmet > 25 && abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13  && abs(std_vector_lepton_flavour[2]) == 13  && abs(  TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000) -3.1) > 0.1 &&   TMath::Min( mll+ (mll<0)*100000 + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*100000 , mllThird + (mllThird < 0)*100000)  > 0.3 '

cuts['0j_mmm_GGG']  = 'std_vector_lepton_isWgsLepton[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13 '

cuts['0j_emm_GGG']  = 'std_vector_lepton_isWgsLepton[0] == 1 && std_vector_lepton_isWgsLepton[1]==1 && std_vector_lepton_isWgsLepton[2]==1 && abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13 '

cuts['mmm']  = 'abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13 '
cuts['emm']  = 'abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13 '

cuts['0j_emm_cutmet_Andrea']  = ' abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13  && std_vector_lepton_pt[3] < 0  && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0 && (mllTwoThree < 2.5 || mllTwoThree > 3.5) && metPfType1>20'
                
                #&& std_vector_lepton_pt[3] < 0  \ 
                #&& std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0 
              
#cuts['hww2l2v_13TeV_WgS_mmm_JPsi_tightPt1']  = 'abs(std_vector_lepton_flavour[0]) == 13  && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13 \
#    && std_vector_lepton_isTightMuon[0]==1  && std_vector_lepton_isWgsLepton[1]==1  && std_vector_lepton_isWgsLepton[2]==1   && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1] > 8 && std_vector_lepton_pt[2] > 8 &&  ( std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1] < 0 ||  std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2] < 0 || std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2] < 0 ) &&  abs(TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000)  -3.1) > 0.1 && TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000)   < 1000 && mpmet >25 ' 


#cuts['hww2l2v_13TeV_WgS_mmm_JPsi_WgsPt1']  = 'abs(std_vector_lepton_flavour[0]) == 13  && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13 \
#    && std_vector_lepton_isWgsLepton[0]==1  && std_vector_lepton_isWgsLepton[1]==1  && std_vector_lepton_isWgsLepton[2]==1   && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1] > 8 && std_vector_lepton_pt[2] > 8 &&  ( std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1] < 0 ||  std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2] < 0 || std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2] < 0 ) &&  abs(TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000)  -3.1) > 0.1 && TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000)   < 1000 && mpmet >25 ' 
#		

#cuts['hww2l2v_13TeV_WgS_mmm_noCut']  = 'abs(std_vector_lepton_flavour[0]) == 13  && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13 \
#    &&  ( std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1] < 0 ||  std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2] < 0 || std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2] < 0 ) ' 
               

#cuts['hww2l2v_13TeV_WgS_mmm_JPsi_noPt']  = 'abs(std_vector_lepton_flavour[0]) == 13  && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13 \
#    && std_vector_lepton_isWgsLepton[0]==1  && std_vector_lepton_isWgsLepton[1]==1  && std_vector_lepton_isWgsLepton[2]==1   &&  ( std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1] < 0 ||  std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2] < 0 || std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2] < 0 ) &&  abs(TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000)  -3.1) > 0.1 && TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000)   < 1000 ' 
##               
              
#cuts['hww2l2v_13TeV_WgS_mmm_JPsi']  = 'abs(std_vector_lepton_flavour[0]) == 13  && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13 \
#    && std_vector_lepton_isWgsLepton[0]==1  && std_vector_lepton_isWgsLepton[1]==1  && std_vector_lepton_isWgsLepton[2]==1   && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1] > 10 && std_vector_lepton_pt[2] > 8 &&  ( std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1] < 0 ||  std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2] < 0 || std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2] < 0 ) &&  abs(TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000)  -3.1) > 0.1 && TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000)   < 1000 && mpmet >25 ' 
#		
##
#cuts['hww2l2v_13TeV_WgS_mmm_JPsi_WgSveto']  = 'abs(std_vector_lepton_flavour[0]) == 13  && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13 \
#    && std_vector_lepton_isWgsLepton[0]==1  && std_vector_lepton_isWgsLepton[1]==1  && std_vector_lepton_isWgsLepton[2]==1   && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1] > 10 && std_vector_lepton_pt[2] > 8 &&  ( std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1] < 0 ||  std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2] < 0 || std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2] < 0 ) &&  abs(TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000)  -3.1) > 0.1 && !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22) && TMath::Min (TMath::Min( mll+ (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000 , mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000 ), mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000)   < 1000 && mpmet >25 ' 
#		
###cuts['hww2l2v_13TeV_WgS_mmm_JPsi_WgammaDoubleCnt']  = ' \
##                   abs(std_vector_lepton_flavour[0]) == 13 \
##                && abs(std_vector_lepton_flavour[1]) == 13 \
##                && abs(std_vector_lepton_flavour[2]) == 13 \
##                && (std_vector_lepton_isWgsLepton[0]==1  && std_vector_lepton_isWgsLepton[1]=1  && std_vector_lepton_isWgsLepton[2]=1   && std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1] > 7 && std_vector_lepton_pt[2] > 5 )   \
##                && ( \
##		     (std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1] < 0) || \
##		     (std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2] < 0) || \
##		     (std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2] < 0)  ) \
##                && (  mim( mll + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0 )*1000, \
##		          mllOneThree + (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[2] > 0 )*1000, \
##		          mllTwoThree + (std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2] > 0 )*1000) \
##	             - 3.09691 > 0.1) \
##		&& !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22)\
##                '
#
#            
#
#               
#              
##cuts['hww2l2v_13TeV_WgS_mmm_complex_JPsi']  = ' \
#                   #abs(std_vector_lepton_flavour[0]) == 13 \
#                #&& abs(std_vector_lepton_flavour[1]) == 13 \
#                #&& abs(std_vector_lepton_flavour[2]) == 13 \
#                #&& (  \
#                    #(std_vector_lepton_isTightLepton[0]==1  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1   && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0)   \
#                 #|| (std_vector_lepton_isTightLepton[1]==1  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1   && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)   \
#                 #|| (std_vector_lepton_isTightLepton[2]==1  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1   && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)   \
#                   #)  \
#                #&& (min( min(  mllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
#                               #, mllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
#                             #) , mll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) \
#                             #)) <3.3 && \
#                             #min( min(  mllTwoThree * (std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[0]==1 && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0) \
#                               #, mllOneThree * (std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[1]==1 && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0) \
#                             #) , mll         * (std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) +  + 1000 * !(std_vector_lepton_isTightLepton[2]==1 && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0) ) > 2.9\
#                #'
#
#            
#
#                               
#
#
#
#              
##cuts['hww2l2v_13TeV_WgS_mmm_complex']  = ' \
#                   #abs(std_vector_lepton_flavour[0]) == 13 \
#                #&& abs(std_vector_lepton_flavour[1]) == 13 \
#                #&& abs(std_vector_lepton_flavour[2]) == 13 \
#                #&& (  \
#                    #(std_vector_lepton_isTightLepton[0]==1  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1   && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0)   \
#                 #|| (std_vector_lepton_isTightLepton[1]==1  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1   && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)   \
#                 #|| (std_vector_lepton_isTightLepton[2]==1  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1   && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)   \
#                   #)  \
#                #'
#
#          
##cuts['hww2l2v_13TeV_WgS_mxx_complex']  = ' \
#                  #(  \
#                    #(std_vector_lepton_isTightLepton[0]==1 && abs(std_vector_lepton_flavour[0]) == 13  && std_vector_lepton_isTightLepton[1]!=1  && std_vector_lepton_isTightLepton[2]!=1   && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0)   \
#                 #|| (std_vector_lepton_isTightLepton[1]==1 && abs(std_vector_lepton_flavour[1]) == 13  && std_vector_lepton_isTightLepton[2]!=1  && std_vector_lepton_isTightLepton[0]!=1   && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)   \
#                 #|| (std_vector_lepton_isTightLepton[2]==1 && abs(std_vector_lepton_flavour[2]) == 13  && std_vector_lepton_isTightLepton[0]!=1  && std_vector_lepton_isTightLepton[1]!=1   && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)   \
#                   #)  \
#                #'
#
#         
##cuts['hww2l2v_13TeV_WgS_mxx_complex_noid']  = ' \
#                  #(  \
#                    #(std_vector_lepton_isTightLepton[0]==1 && abs(std_vector_lepton_flavour[0]) == 13    && std_vector_lepton_pt[0]>30 && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0)   \
#                 #|| (std_vector_lepton_isTightLepton[1]==1 && abs(std_vector_lepton_flavour[1]) == 13    && std_vector_lepton_pt[1]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[2]<0)   \
#                 #|| (std_vector_lepton_isTightLepton[2]==1 && abs(std_vector_lepton_flavour[2]) == 13    && std_vector_lepton_pt[2]>30 && std_vector_lepton_flavour[0]*std_vector_lepton_flavour[1]<0)   \
#                   #)  \
#                #'
#
#
#
##cuts['hww2l2v_13TeV_WgS_mmm_inclusive']  = ' \
#                   #abs(std_vector_lepton_flavour[0]) == 13 \
#                #&& abs(std_vector_lepton_flavour[1]) == 13   \
#                #&& abs(std_vector_lepton_flavour[2]) == 13   \
#                #&& std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
#                #'
#
#               
##cuts['hww2l2v_13TeV_WgS_mmm']  = ' \
#                   #abs(std_vector_lepton_flavour[0]) == 13 \
#                #&& abs(std_vector_lepton_flavour[1]) == 13   \
#                #&& abs(std_vector_lepton_flavour[2]) == 13   \
#                #&& std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
#                #&& std_vector_lepton_pt[1]<30 \
#                #&& std_vector_lepton_pt[2]<15 \
#                #'
#
#               
##cuts['hww2l2v_13TeV_WgS_drll_mmm']  = ' \
#                   #abs(std_vector_lepton_flavour[0]) == 13 \
#                #&& abs(std_vector_lepton_flavour[1]) == 13   \
#                #&& abs(std_vector_lepton_flavour[2]) == 13   \
#                #&& std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
#                #&& std_vector_lepton_pt[1]<30 \
#                #&& std_vector_lepton_pt[2]<15 \
#                #&& drll<0.2   \
#                #'
#
#
##cuts['hww2l2v_13TeV_WgS_mee']  = ' \
#                   #abs(std_vector_lepton_flavour[0]) == 13 \
#                #&& abs(std_vector_lepton_flavour[1]) == 11   \
#                #&& abs(std_vector_lepton_flavour[2]) == 11   \
#                #&& std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
#                #&& std_vector_lepton_pt[1]<30 \
#                #&& std_vector_lepton_pt[2]<15 \
#                #'
#
#
#
#cuts['hww2l2v_13TeV_WgS_emm']  = ' \
#                   abs(std_vector_lepton_flavour[0]) == 11 \
#                && abs(std_vector_lepton_flavour[1]) == 13   \
#                && abs(std_vector_lepton_flavour[2]) == 13   \
#                && std_vector_lepton_pt[3] < 0   \
#                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
#                '
#
#                #&& std_vector_lepton_pt[1]<30 \
#                #&& std_vector_lepton_pt[2]<15 \
#
#cuts['hww2l2v_13TeV_WgS_emm_tll']  = ' \
#                   abs(std_vector_lepton_flavour[0]) == 11 \
#                && abs(std_vector_lepton_flavour[1]) == 13   \
#                && abs(std_vector_lepton_flavour[2]) == 13   \
#                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
#                && std_vector_lepton_pt[3] < 0   \
#                && std_vector_lepton_isTightLepton[0]==1 \
#                && std_vector_lepton_isWgsLepton[1]==1 \
#                && std_vector_lepton_isWgsLepton[2]==1 \
#                '
#
#
#cuts['hww2l2v_13TeV_WgS_emm_tll_cutmtw1']  = ' \
#                   abs(std_vector_lepton_flavour[0]) == 11 \
#                && abs(std_vector_lepton_flavour[1]) == 13   \
#                && abs(std_vector_lepton_flavour[2]) == 13   \
#                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
#                && std_vector_lepton_pt[3] < 0   \
#                && std_vector_lepton_isTightLepton[0]==1 \
#                && std_vector_lepton_isWgsLepton[1]==1 \
#                && std_vector_lepton_isWgsLepton[2]==1 \
#                && (mllTwoThree < 2.5 || mllTwoThree > 3.5) \
#                && mtw1 > 45 \
#                '
#
#
#cuts['hww2l2v_13TeV_WgS_emm_tll_cutmtw1_cutpt23_cutandcount']  = ' \
#                   abs(std_vector_lepton_flavour[0]) == 11 \
#                && abs(std_vector_lepton_flavour[1]) == 13   \
#                && abs(std_vector_lepton_flavour[2]) == 13   \
#                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
#                && std_vector_lepton_pt[3] < 0   \
#                && std_vector_lepton_pt[1] < 50   \
#                && std_vector_lepton_pt[2] < 20   \
#                && std_vector_lepton_isTightLepton[0]==1 \
#                && std_vector_lepton_isWgsLepton[1]==1 \
#                && std_vector_lepton_isWgsLepton[2]==1 \
#                && (mllTwoThree < 2.5 || mllTwoThree > 3.5) \
#                && mtw1 > 45 \
#                && metPfType1 > 25 \
#                && mllTwoThree<2  \
#                '
#
#
#
#cuts['hww2l2v_13TeV_WgS_emm_tll_cutmtw1_cutpt23']  = ' \
#                   abs(std_vector_lepton_flavour[0]) == 11 \
#                && abs(std_vector_lepton_flavour[1]) == 13   \
#                && abs(std_vector_lepton_flavour[2]) == 13   \
#                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
#                && std_vector_lepton_pt[3] < 0   \
#                && std_vector_lepton_pt[1] < 50   \
#                && std_vector_lepton_pt[2] < 20   \
#                && std_vector_lepton_isTightLepton[0]==1 \
#                && std_vector_lepton_isWgsLepton[1]==1 \
#                && std_vector_lepton_isWgsLepton[2]==1 \
#                && (mllTwoThree < 2.5 || mllTwoThree > 3.5) \
#                && mtw1 > 45 \
#                && metPfType1 > 25 \
#                '
#
#
#cuts['hww2l2v_13TeV_WgS_emm_cutmet']  = ' \
#                   abs(std_vector_lepton_flavour[0]) == 11 \
#                && abs(std_vector_lepton_flavour[1]) == 13   \
#                && abs(std_vector_lepton_flavour[2]) == 13   \
#                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
#                && std_vector_lepton_pt[3] < 0   \
#                && (mllTwoThree < 2.5 || mllTwoThree > 3.5) \
#                && metPfType1>20   \
#                '
#
#
#
#
#cuts['hww2l2v_13TeV_WgS_emm_drandmll']  = ' \
#                   abs(std_vector_lepton_flavour[0]) == 11 \
#                && abs(std_vector_lepton_flavour[1]) == 13   \
#                && abs(std_vector_lepton_flavour[2]) == 13   \
#                && std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
#                && std_vector_lepton_pt[3] < 0   \
#                && (mllTwoThree < 2.5 || mllTwoThree > 3.5) \
#                && drllTwoThree < 1 \
#                '
#
#
#
##cuts['hww2l2v_13TeV_WgS_mmm_tt']  = ' \
#                   #abs(std_vector_lepton_flavour[0]) == 13 \
#                #&& abs(std_vector_lepton_flavour[1]) == 13   \
#                #&& abs(std_vector_lepton_flavour[2]) == 13   \
#                #&& std_vector_lepton_flavour[1]*std_vector_lepton_flavour[2]<0   \
#                #&& std_vector_lepton_isTightLepton[1]==1 \
#                #'
#
#
#
#
#
#
## 11 = e
## 13 = mu
## 15 = tau
#
