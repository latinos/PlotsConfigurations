# samples

#samples = {}
    
#   puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)

samples['DY']  = {    'name': ['latino_DYJetsToLL_M-50.root', 'latino_DYJetsToLL_M-10to50.root'],     #   file name    
                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'isData': ['0', '0'],                                  
                  }

samples['Wjets']  = {    'name': ['latino_WJetsToLNu.root'],     #   file name    
                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'isData': ['0'],                             
                  }


#samples['ttbar'] = {   'name': ['latino_TTTo2L2Nu.root'],           # powheg 
                       #'weight' : 'baseW*puW',                
                       #'weights': ['1']                   
                   #}

samples['ttbar'] = {   'name': ['latino_TTJets.root'],          
                       'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',                
                       'weights': ['1'],                   
                       #'isData': ['0'],                            
                   }

samples['top'] = {   'name': ['latino_ST_t-channel.root', 'latino_ST_tW_antitop.root', 'latino_ST_tW_top.root'],   
                     'weight' : 'baseW*puW',
                     'weights': ['puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)', 
                                 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',
                                 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]'],
                     #'isData': ['0', '0', '0'],                            
                   }


samples['WW']  = {    'name': ['latino_WWTo2L2Nu.root'],      
                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['abs(nllW)'] ,           
                      'weights': ['1.000'] ,           
                      #'isData': ['0'],                            
                  }

samples['WZ']  = {    'name': ['latino_WZTo3LNu.root'],      
                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }

#samples['VVV'] = {    'name': ['latino_WWZ.root', 'latino_WZZ.root', 'latino_ZZZ.root'],      
samples['VVV'] = {    'name': ['latino_WZZ.root', 'latino_ZZZ.root'],      
                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'isData': ['0'],                            
                  }

samples['ggH']  = {    'name': ['latino_GluGluHToWWTo2L2Nu_M125.root'],      
                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      'weights': ['1']            
                  }



###########################################
###########################################
###########################################

samples['DATA']  = {   'name': ['latino_DATA.root', 
                               ],      
                       'weight' : 'trigger',
                       'isData': ['all'],                            
                  }

# /tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd
# /tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd
# /tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd

# hadd /tmp/amassiro/latino_DATA.root /tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd/*.root  /tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd/*.root  /tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd/*.root
# scp amassiro@lxplus003.cern.ch:/tmp/amassiro/latino_DATA.root   /media/data/amassiro/LatinoTrees/Moriond/nominal/
 
# scp -r  amassiro@lxplus0083.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd/ 21OctBis_Run2015D_05Oct2015
# scp -r  amassiro@lxplus0083.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd/ 21OctBis_Run2015D_PromptReco_0716pb
# scp -r  amassiro@lxplus0083.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd/ 21OctBis_Run2015D_PromptReco_0851pb
# /media/data/amassiro/LatinoTrees/Moriond/data/
 
 
# MC 

#   scp -r amassiro@lxplus0002.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/   /media/data/amassiro/LatinoTrees/21Oct_25ns_MC/
#   scp -r amassiro@lxplus0002.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__JESdo/   /media/data/amassiro/LatinoTrees/21Oct_25ns_MC/
#   scp -r amassiro@lxplus0002.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__JESup/   /media/data/amassiro/LatinoTrees/21Oct_25ns_MC/

# scp -r amassiro@lxplus003.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff_*/     /media/data/amassiro/LatinoTrees/21Oct_25ns_MC/









