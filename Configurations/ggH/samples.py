# samples

#samples = {}
    
#                    

samples['DY']  = {    'name': ['latino_DYJetsToLL_M-50.root', 'latino_DYJetsToLL_M-10to50.root'],     #   file name    
                      'weight' : 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      'isData': ['0', '0'],                                  
                  }

samples['Wjets']  = {    'name': ['latino_WJetsToLNu.root'],     #   file name    
                      'weight' : 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'isData': ['0'],                             
                  }


#samples['ttbar'] = {   'name': ['latino_TTTo2L2Nu.root'],           # powheg 
                       #'weight' : 'baseW*puW',                
                       #'weights': ['1']                   
                   #}

samples['ttbar'] = {   'name': ['latino_TTJets.root'],          
                       'weight' : 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)',                
                       'weights': ['1'],                   
                       'isData': ['0'],                            
                   }

samples['top'] = {   'name': ['latino_ST_t-channel.root', 'latino_ST_tW_antitop.root', 'latino_ST_tW_top.root'],   
                     'weight' : 'baseW*puW',
                     'weights': ['GEN_weight_SM/abs(GEN_weight_SM)', '1', '1'],
                     'isData': ['0', '0', '0'],                            
                   }


samples['WW']  = {    'name': ['latino_WWTo2L2Nu.root'],      
                      'weight' : 'baseW*puW',          
                      'weights': ['1.137809'] ,           
                      #'weights': ['abs(nllW)*1.137809'] ,           
                      'isData': ['0'],                            
                  }

samples['WZ']  = {    'name': ['latino_WZTo3LNu.root'],      
                      'weight' : 'baseW*puW',          
                      'weights': ['1'] ,           
                      'isData': ['0'],                            
                  }

#samples['VVV'] = {    'name': ['latino_WWZ.root', 'latino_WZZ.root', 'latino_ZZZ.root'],      
samples['VVV'] = {    'name': ['latino_WZZ.root', 'latino_ZZZ.root'],      
                      'weight' : 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)',          
                      'isData': ['0'],                            
                  }

samples['ggH']  = {    'name': ['latino_GluGluHToWWTo2L2Nu_M125.root'],      
                      'weight' : 'baseW*puW',          
                      'weights': ['1'],          
                      'isData': ['0'],                            
                  }




###########################################
###########################################
###########################################


#samples['DATA']  = {   'name': ['../l2sel/DATA.root', 
                               #],      
                       #'weight' : 'trigger',
                       #'isData': ['1'],                            
                  #}

samples['DATA']  = {   'name': ['DATA.root', 
                               ],      
                       'weight' : 'trigger',
                       'isData': ['1'],                            
                  }





