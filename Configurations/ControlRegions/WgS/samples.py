# samples

#samples = {}

samples['Wg']  = {    'name': [
                              #'../../../../../j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MC__WgStarsel__hadd/latino_Wg_AMCNLOFXFX.root'
                              'latino_Wg_AMCNLOFXFX.root'
                              ],      
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)   \
                                  *(std_vector_leptonGen_pt[2]<10)',          
                                  #',          
                      'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }



#samples['WgS']  = {    'name': ['latino_WgStarLNuEE.root', 'latino_WgStarLNuMuMu.root'],      
                      #'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',
                      #'weights': ['1','1'] ,           
                  #}


samples['WgSee']  = {    'name': ['latino_WgStarLNuEE.root'],      
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',
                      'weights': ['1'] ,           
                  }


samples['WgSmm']  = {    'name': ['latino_WgStarLNuMuMu.root'],      
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',
                      'weights': ['1'] ,           
                  }

samples['VZ']  = {    'name': [
                          #'../../../../../j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MC__WgStarsel__hadd/latino_WZTo3LNu.root', 
                          'latino_WZTo3LNu.root', 
                          #'latino_ZZ.root',  ---> replaced by inclusive samples
                          #'latino_ZZTo2L2Nu.root', #  ---->  NEEDED FIXME
                          #'latino_ZZTo2L2Q.root'
                          #'latino_ZZTo4L.root'
                         ], 
                      'weight' : 'puW*baseW',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }


###########################################
###########################################
###########################################

samples['DATA']  = {   'name': [
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/WgStarsel__hadd/latino_Run2015D_16Dec2015_DoubleMuon.root',
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/WgStarsel__hadd/latino_Run2015D_16Dec2015_SingleElectron.root',
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/WgStarsel__hadd/latino_Run2015D_16Dec2015_SingleMuon.root',
                                'latino_Run2015D_16Dec2015_SingleMuon.root',
                                ] ,     
                       'weight' : '(std_vector_trigger[15])',
                       #'weight' : '(std_vector_trigger[15]||std_vector_trigger[16]||std_vector_trigger[17])',
                       'isData': ['all'],                            
                  }




