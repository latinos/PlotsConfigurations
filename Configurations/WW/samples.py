# samples

#samples = {}
    
#                    
samples['DY']  = {    'name': ['../../50ns/05Aug2015_puW/latino_DYJetsToLL_M-50.root', 'latino_DYJetsToLL_M-10to50.root'],     #   file name    
                      'weight' : 'baseW*puW',              #   weight/cut 
                      'weights': ['GEN_weight_SM/abs(GEN_weight_SM) / 0.670032', 'GEN_weight_SM/abs(GEN_weight_SM) / 0.72760']                       #   additional cuts file dependent
                      #'weights': ['0.66998', '0.72760'] ,                      #   additional cuts file dependent
                  }

#samples['ttbar'] = {   'name': ['latino_TTJets.root'],         #   file name    
                       #'weight' : 'baseW',                     #   weight/cut 
                       ##'weights': ['0.33166']             #   additional cuts file dependent --> e.g. from +/- weights in MC
                       #'weights': ['GEN_weight_SM/abs(GEN_weight_SM) * 0.33166']             #   additional cuts file dependent --> e.g. from +/- weights in MC
                   #}


samples['Wjets']  = {    'name': ['../../50ns/05Aug2015_puW/latino_WJetsToLNu.root'],     #   file name    
                      'weight' : 'baseW*puW',              #   weight/cut 
                      'weights': ['GEN_weight_SM/abs(GEN_weight_SM) / 0.683927 * 61526.7 / 20508.9']                       #   additional cuts file dependent
                  }


#samples['ttbar'] = {   'name': ['latino_TT.root'],         #   file name    
                       #'weight' : 'baseW',                 #   weight/cut 
                       ##'weights': ['0.33166']             #   additional cuts file dependent --> e.g. from +/- weights in MC
                       #'weights': ['1']                    #   additional cuts file dependent --> e.g. from +/- weights in MC
                   #}

samples['ttbar'] = {   'name': ['../../50ns/05Aug2015_puW/latino_TTJets.root'],          
                       'weight' : 'baseW*puW',                
                       'weights': ['GEN_weight_SM/abs(GEN_weight_SM) / 0.331907'],           
                       'weights': ['1']                   
                   }

samples['top'] = {   'name': ['../../50ns/05Aug2015_puW/latino_ST_tW_top.root', '../../50ns/05Aug2015_puW/latino_ST_tW_antitop.root', 'latino_ST_t-channel.root'],   
                       'weight' : 'baseW*puW',                
                       'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM) / 0.215131' ]            
                   }


samples['WW']  = {    'name': ['../../50ns/05Aug2015_puW/latino_WWTo2L2Nu.root'],      
                      'weight' : 'baseW*puW',          
                      'weights': ['1']            
                  }

samples['WZ']  = {    'name': ['../../50ns/05Aug2015_puW/latino_WZ.root'],      
                      'weight' : '0.06630*puW',          
                      'weights': ['1']            
                  }

samples['ZZ']  = {    'name': ['../../50ns/05Aug2015_puW/latino_ZZ.root'],      
                      'weight' : '0.03184*puW',          
                      'weights': ['1']            
                  }



samples['ggH']  = {    'name': ['latino_GluGluHToWWTo2L2Nu_M120.root'],      
                      'weight' : 'baseW*puW',          
                      'weights': ['1']            
                  }




###########################################
###########################################
###########################################


samples['DATA']  = {   'name': ['../../data/latino_DoubleEG.root', 
                                '../../data/latino_DoubleMuon.root',
                                '../../data/latino_SingleElectron.root',
                                '../../data/latino_SingleMuon.root',
                                '../../data/latino_MuonEG.root'],      
                       'weight' : 'trigger',
                  }

#samples['DATA']  = {   'name': ['dataB/latino_DoubleEG.root', 'dataB/latino_MuonEG.root', 'dataB/latino_SingleElectron.root', 'dataB/latino_SingleMu.root'],      
                       #'weight' : 'trigger',          
                  #}



# --inputDir=/media/data/amassiro/LatinoTrees/50ns/




