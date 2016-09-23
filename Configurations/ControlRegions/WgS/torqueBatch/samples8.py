# samples

#samples = {}


#samples['Wg']  = {    'name': ['latino_Wg_AMCNLOFXFX.root'],      
                      #'weight' : '1.2*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      ##'weights': ['1'] ,           
                      ##'isData': ['0'],                            
                  #}

samples['Vg']  = {    'name': ['../MCWgStarsel__hadd__EpTCorr/latino_Wg_MADGRAPHMLM.root'],      
                      'weight' : 'puW*GEN_weight_SM/abs(GEN_weight_SM)\
                                  * !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                                 #*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
                      'weights': ['0.0684952181745'] ,           
                      #'isData': ['0'],                            
                  }



samples['VgS']  = {    'name': [
                             '../MCWgStarsel__hadd__EpTCorr/latino_WgStarLNuEE.root', 
                             '../MCWgStarsel__hadd__EpTCorr/latino_WgStarLNuMuMu.root'
                             ],      
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',
                      #'weight' : '1.4*puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      'weights': ['1','1'] ,           
                  }

