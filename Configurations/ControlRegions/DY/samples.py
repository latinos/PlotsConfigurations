# samples

#samples = {}
    
#                    

samples['DY']  = {    'name': ['21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_DYJetsToLL_M-50.root', '21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_DYJetsToLL_M-10to50.root'],     #   file name    
                      'weight' : 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      'isData': ['0', '0'],                                  
                  }

samples['Wjets']  = {    'name': ['21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_WJetsToLNu.root'],     #   file name    
                      'weight' : 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'isData': ['0'],                             
                  }


#samples['ttbar'] = {   'name': ['21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_TTTo2L2Nu.root'],           # powheg 
                       #'weight' : 'baseW*puW',                
                       #'weights': ['1']                   
                   #}

samples['ttbar'] = {   'name': ['21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_TTJets.root'],          
                       'weight' : 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)',                
                       'weights': ['1'],                   
                       'isData': ['0'],                            
                   }

samples['top'] = {   'name': ['21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_ST_t-channel.root', '21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_ST_tW_antitop.root', '21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_ST_tW_top.root'],   
                     'weight' : 'baseW*puW',
                     'weights': ['GEN_weight_SM/abs(GEN_weight_SM)', '1', '1'],
                     'isData': ['0', '0', '0'],                            
                   }


samples['WW']  = {    'name': ['21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_WWTo2L2Nu.root'],      
                      'weight' : 'baseW*puW/10.481*12.718',          
                      'weights': ['abs(nllW)'] ,           
                      'isData': ['0'],                            
                  }

samples['WZ']  = {    'name': ['21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_WZTo3LNu.root'],      
                      'weight' : 'baseW*puW',          
                      'weights': ['1'] ,           
                      'isData': ['0'],                            
                  }

#samples['VVV'] = {    'name': ['21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_WWZ.root', '21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_WZZ.root', '21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_ZZZ.root'],      
samples['VVV'] = {    'name': ['21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_WZZ.root', '21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_ZZZ.root'],      
                      'weight' : 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)',          
                      'isData': ['0'],                            
                  }

samples['ggH']  = {    'name': ['21Oct_25ns_MC/mcwghtcount__MC__l2sel__hadd/latino_GluGluHToWWTo2L2Nu_M125.root'],      
                      'weight' : 'baseW*puW',          
                      'weights': ['1']            
                  }



###########################################
###########################################
###########################################


samples['DATA']  = {   'name': [
'21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_DoubleEG.root',
'21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_DoubleMuon.root',
'21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_MuonEG.root',
'21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_SingleElectron.root',
'21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_SingleMuon.root',
'21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_DoubleEG.root',
'21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_DoubleMuon.root',
'21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_MuonEG.root',
'21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_SingleElectron.root',
'21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_SingleMuon.root'
                               ],      
                       'weight' : 'trigger',
                       'isData': ['1'],
                  }





