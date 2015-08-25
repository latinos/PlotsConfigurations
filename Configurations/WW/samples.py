# samples

#samples = {}
    
#                    
samples['DY']  = {    'name': ['../../50ns/05Aug2015/latino_DYJetsToLL_M-50.root', 'latino_DYJetsToLL_M-10to50.root'],     #   file name    
                      'weight' : 'baseW',              #   weight/cut 
                      'weights': ['GEN_weight_SM/abs(GEN_weight_SM) / 0.66998', 'GEN_weight_SM/abs(GEN_weight_SM) / 0.72760']                       #   additional cuts file dependent
                      #'weights': ['0.66998', '0.72760'] ,                      #   additional cuts file dependent
                  }

#samples['ttbar'] = {   'name': ['latino_TTJets.root'],         #   file name    
                       #'weight' : 'baseW',                     #   weight/cut 
                       ##'weights': ['0.33166']             #   additional cuts file dependent --> e.g. from +/- weights in MC
                       #'weights': ['GEN_weight_SM/abs(GEN_weight_SM) * 0.33166']             #   additional cuts file dependent --> e.g. from +/- weights in MC
                   #}


samples['Wjets']  = {    'name': ['latino_WJetsToLNu.root'],     #   file name    
                      'weight' : 'baseW',              #   weight/cut 
                      'weights': ['GEN_weight_SM/abs(GEN_weight_SM) / 0.68394']                       #   additional cuts file dependent
                  }


samples['ttbar'] = {   'name': ['latino_TT.root'],         #   file name    
                       'weight' : 'baseW',                 #   weight/cut 
                       #'weights': ['0.33166']             #   additional cuts file dependent --> e.g. from +/- weights in MC
                       'weights': ['1']                    #   additional cuts file dependent --> e.g. from +/- weights in MC
                   }


samples['WW']  = {    'name': ['../../50ns/latino_WWTo2L2Nu.root'],      
                      'weight' : 'baseW',          
                      'weights': ['1']            
                  }

samples['WZ']  = {    'name': ['latino_WZ.root'],      
                      'weight' : '0.02302',          
                      'weights': ['1']            
                  }

samples['ZZ']  = {    'name': ['latino_ZZ.root'],      
                      'weight' : '0.01036',          
                      'weights': ['1']            
                  }



samples['ggH']  = {    'name': ['latino_GluGluHToWWTo2L2Nu_M120.root'],      
                      'weight' : 'baseW',          
                      'weights': ['1']            
                  }




###########################################
###########################################
###########################################


samples['DATA']  = {   'name': ['../../data/latino_DoubleEG.root', 
                                '../../data/latino_DoubleMuon.root',
                                '../../data/latino_SingleElectron.root',
                                '../../data/latino_SingleMu.root',
                                '../../data/latino_MuonEG.root'],      
                       'weight' : 'trigger',
                  }

#samples['DATA']  = {   'name': ['dataB/latino_DoubleEG.root', 'dataB/latino_MuonEG.root', 'dataB/latino_SingleElectron.root', 'dataB/latino_SingleMu.root'],      
                       #'weight' : 'trigger',          
                  #}



# --inputDir=/media/data/amassiro/LatinoTrees/50ns/




