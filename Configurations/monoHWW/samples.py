# samples

#samples = {}
    
#
#samples['Wjets']  = {    'name': ['latino_WJetsToLNu.root'],     #   file name    
                      #'weight' : 'baseW',              #   weight/cut 
                      #'weights': ['GEN_weight_SM/abs(GEN_weight_SM) * 0.68394']                       #   additional cuts file dependent
                  #}


samples['WW']  = {    'name': ['latino_WWTo2L2Nu.root'],      
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

samples['monoH']  = { 'name': ['latino_Higgs_hzpzp_nohdecay_ww_1000GeV.root'],      
                      'weight' : '0.0000309352332',          
                      'weights': ['10000'] 
                  }




###########################################
###########################################
###########################################


#samples['DATA']  = {   'name': ['../../data/latino_DoubleEG.root', 
                                #'../../data/latino_DoubleMuon.root',
                                #'../../data/latino_SingleElectron.root',
                                #'../../data/latino_SingleMu.root',
                                #'../../data/latino_MuonEG.root'],      
                       #'weight' : 'trigger',          
                  #}






