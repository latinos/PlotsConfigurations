
#samples['Vg']  = {    'name': ['latino_Wg_AMCNLOFXFX.root'],      
                      #'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)\
                                  #* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                                 ##*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
                      #'weights': ['1'] ,           
                      ##'isData': ['0'],                            
                  #}



samples['WgSEE']  = {    'name': [
                             '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_WgStarLNuEE.root', 
                             ],      
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',
                      'weights': ['1','1'] ,           
                  }

samples['WgSMuMu']  = {    'name': [
                             '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_WgStarLNuMuMu.root'
                             ],      
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',
                      'weights': ['1','1'] ,           
                  }
                      #'weight' : 'puW*baseW*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
# 
# Wg* scale factor is
#
# 1.98 +/- 0.54    in mumumu
# 2.0  +/- 0.5     in emumu
#
#

