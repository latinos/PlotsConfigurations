# samples

#samples = {}
    
#                    
samples['DY']  = {   'name': ['latino_DYJetsToLL.root', '../25ns/latino_DYJetsToLL1050.root'],     #   file name    
                      'weight' : 'baseW',              #   weight/cut 
                      #'weight' : 'baseW*GEN_weight_SM',              #   weight/cut 
                      'weights': ['-', '-']                       #   additional cuts file dependent
                  }

samples['ttbar'] = {   'name': ['latino_TTJets.root'],         #   file name    
                       'weight' : 'baseW',                     #   weight/cut 
                       'weights': ['1']                        #   additional cuts file dependent
                   }

samples['WW']  = {   'name': ['latino_WWTo2L2Nu.root'],      
                      'weight' : 'baseW',          
                      'weights': ['1']            
                  }

samples['WZ']  = {   'name': ['latino_WZ.root'],      
                      'weight' : 'baseW',          
                      'weights': ['1']            
                  }

samples['ZZ']  = {   'name': ['latino_ZZ.root'],      
                      'weight' : 'baseW',          
                      'weights': ['1']            
                  }


samples['DATA']  = {   'name': ['dataB/latino_DoubleEG.root', 'dataB/latino_MuonEG.root', 'dataB/latino_SingleElectron.root', 'dataB/latino_SingleMu.root'],      
                       'weight' : 'trigger',          
                  }



# --inputDir=/media/data/amassiro/LatinoTrees/50ns/

