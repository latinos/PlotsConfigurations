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
                      'weight' : 'baseW*puW/10.481*12.718',          
                      #'weights': ['abs(nllW)'] ,           
                      'weights': ['1.000'] ,           
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
                      'weights': ['1']            
                  }



###########################################
###########################################
###########################################

samples['DATA']  = {   'name': ['latino_DATA.root', 
                               ],      
                       'weight' : 'trigger',
                       'isData': ['1'],                            
                  }

# /tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd
# /tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd
# /tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd


# scp -r  amassiro@lxplus0083.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd/ 21OctBis_Run2015D_05Oct2015
# scp -r  amassiro@lxplus0083.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd/ 21OctBis_Run2015D_PromptReco_0716pb
# scp -r  amassiro@lxplus0083.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd/ 21OctBis_Run2015D_PromptReco_0851pb
# /media/data/amassiro/LatinoTrees/Moriond/data/
 

#samples['DATA']  = {   'name': [
#'21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_DoubleEG.root',
#'21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_DoubleMuon.root',
#'21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_MuonEG.root',
#'21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_SingleElectron.root',
#'21Oct_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_SingleMuon.root',
#'21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_DoubleEG.root',
#'21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_DoubleMuon.root',
#'21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_MuonEG.root',
#'21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_SingleElectron.root',
#'21Oct_Run2015D_PromptReco/l2sel__hadd/latino_Run2015D_PromptReco_25ns_SingleMuon.root'
                               #],      
                       #'weight' : 'trigger',
                       #'isData': ['1'],
                  #}





