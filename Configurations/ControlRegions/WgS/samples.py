# samples

#samples = {}

samples['Wg']  = {    'name': [
                              #'../../../../../j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MC__WgStarsel__hadd/latino_Wg_AMCNLOFXFX.root'
                              'latino_Wg_AMCNLOFXFX.root'
                              ],      
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)   \
                                  * !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                                  #*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
                                  #*(std_vector_leptonGen_pt[2]<10)',          
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



samples['DY']  = {    'name': [
                            'latino_DYJetsToLL_M-10to50.root',
                            'latino_DYJetsToLL_M-10to50ext3.root',
                            #
                            'latino_DYJetsToLL_M-50_0000__part0.root',
                            'latino_DYJetsToLL_M-50_0000__part1.root',
                            'latino_DYJetsToLL_M-50_0000__part2.root',
                            #'latino_DYJetsToLL_M-50_0000__part3.root',
                            'latino_DYJetsToLL_M-50_0000__part4.root',
                            'latino_DYJetsToLL_M-50_0001__part0.root',
                            'latino_DYJetsToLL_M-50_0001__part1.root',
                            'latino_DYJetsToLL_M-50_0001__part2.root',
                            #'latino_DYJetsToLL_M-50_0001__part3.root',
                            #'latino_DYJetsToLL_M-50_0001__part4.root',
                            'latino_DYJetsToLL_M-50_0002__part0.root'
                            #
                            ],    
                      'weight' : 'metFilter*(0.95 - 0.1*TMath::Erf((gen_ptll-14)/8.8))*puW*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'isData': ['0', '0'],      
                      'weights': [  '0.238112'
                                  , '0.238112'
                                  , '0.317273040011*11/8'
                                  , '0.317273040011*11/8'
                                  , '0.317273040011*11/8'
                                  #, '0.317273040011'
                                  , '0.317273040011*11/8'
                                  , '0.317273040011*11/8'
                                  , '0.317273040011*11/8'
                                  , '0.317273040011*11/8'
                                  #, '0.317273040011'
                                  #, '0.317273040011'
                                  , '0.317273040011*11/8'
                                  ] ,           
                  }





###########################################
###########################################
###########################################

samples['DATA']  = {   'name': [
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/WgStarsel__hadd/latino_Run2015D_16Dec2015_DoubleMuon.root',
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/WgStarsel__hadd/latino_Run2015D_16Dec2015_SingleElectron.root',
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/WgStarsel__hadd/latino_Run2015D_16Dec2015_SingleMuon.root',
                                #'latino_Run2015C_16Dec2015_SingleMuon.root',
                                #'latino_Run2015D_16Dec2015_SingleMuon.root',
                                'latino_Run2015D_16Dec2015_SingleElectron.root',
                                'latino_Run2015C_16Dec2015_SingleElectron.root',
                                ] ,     
                       'weight' : '(std_vector_trigger[1])',
                       #'weight' : '(std_vector_trigger[15]) || (std_vector_trigger[1])',
                       #'weight' : '(std_vector_trigger[15])',
                       #'weight' : '(std_vector_trigger[15]||std_vector_trigger[16]||std_vector_trigger[17])',
                       'isData': ['all'],                            
                  }




