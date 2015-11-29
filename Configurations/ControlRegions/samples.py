# samples

#samples = {}
    
#                    

samples['DY']  = {    'name': ['latino_DYJetsToLL_M-50.root', 'latino_DYJetsToLL_M-10to50.root'],     #   file name    
                      'weight' : 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                  }

samples['Wjets']  = {    'name': ['latino_WJetsToLNu.root'],     #   file name    
                      'weight' : 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                  }

samples['ttbar'] = {   'name': ['latino_TTTo2L2Nu.root'],          
                       'weight' : 'baseW*puW',                
                       'weights': ['GEN_weight_SM/abs(GEN_weight_SM) / 0.331907'],           
                       'weights': ['1']                   
                   }

samples['top'] = {   'name': ['latino_ST_t-channel.root'],   
                       'weight' : 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)',                
                   }


samples['WW']  = {    'name': ['latino_WWTo2L2Nu.root'],      
                      'weight' : 'baseW*puW/10.481*12.718',          
                      'weights': ['1']            
                  }

samples['WZ']  = {    'name': ['latino_WZTo3LNu.root'],      
                      'weight' : 'baseW*puW',          
                      'weights': ['1']            
                  }

samples['ggH']  = {    'name': ['latino_GluGluHToWWTo2L2Nu_M125.root'],      
                      'weight' : 'baseW*puW',          
                      'weights': ['1']            
                  }




###########################################
###########################################
###########################################


samples['DATA']  = {   'name': ['../l2sel/DATA.root', 
                               ],      
                       'weight' : 'trigger',
                  }





