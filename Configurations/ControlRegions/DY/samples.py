# samples

#samples = {}
    
#   puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)

samples['DY']  = {    'name': ['latino_DYJetsToLL_M-50.root', 'latino_DYJetsToLL_M-10to50.root'],     #   file name    
                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'isData': ['0', '0'],                                  
                  }

#samples['Wjets']  = {    'name': ['latino_WJetsToLNu.root'],     #   file name    
                      #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      ##'isData': ['0'],                             
                  #}


# data driven
samples['Fake']  = {    'name': [
                       '../fake/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_DoubleEG.root',
                       '../fake/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_DoubleMuon.root',
                       '../fake/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_MuonEG.root',
                       '../fake/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_SingleElectron.root',
                       '../fake/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_SingleMuon.root',
                       '../fake/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_DoubleEG_0716pb.root',
                       '../fake/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_DoubleMuon_0716pb.root',
                       '../fake/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_MuonEG_0716pb.root',
                       '../fake/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_SingleElectron_0716pb.root',
                       '../fake/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_SingleMuon_0716pb.root',
                       '../fake/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_DoubleEG_0851pb.root',
                       '../fake/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_DoubleMuon_0851pb.root',
                       '../fake/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_MuonEG_0851pb.root',
                       '../fake/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_SingleElectron_0851pb.root',
                       '../fake/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_SingleMuon_0851pb.root',
                                 ],     
                      'weight' : 'fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2)',              #   weight/cut 
                      'isData': ['all'],                             
                  }

                       



#samples['ttbar'] = {   'name': ['latino_TTTo2L2Nu.root'],           # powheg 
                       #'weight' : 'baseW*puW',                
                       #'weights': ['1']                   
                   #}


#samples['top'] = {   'name': ['latino_TTJets.root',  'latino_ST_tW_antitop.root', 'latino_ST_tW_top.root'],          
                       #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',                
                       #'weights': ['GEN_weight_SM/abs(GEN_weight_SM)', '1', '1'],                   
                       ##'isData': ['0'],                            
                   #}

samples['top'] = {   'name': ['latino_TTTo2L2Nu.root',  'latino_ST_tW_antitop.root', 'latino_ST_tW_top.root'],          
                       'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',                
                       'weights': ['1', '1', '1'],                   
                       #'isData': ['0'],                            
                   }


#samples['ttbar'] = {   'name': ['latino_TTJets.root'],          
                       #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',                
                       #'weights': ['1'],                   
                       ##'isData': ['0'],                            
                   #}

#samples['singletop'] = {   'name': ['latino_ST_t-channel.root', 'latino_ST_tW_antitop.root', 'latino_ST_tW_top.root'],   
                     #'weight' : 'baseW*puW',
                     #'weights': ['puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)', 
                                 #'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',
                                 #'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]'],
                     ##'isData': ['0', '0', '0'],                            
                   #}


samples['WW']  = {    'name': ['latino_WWTo2L2Nu.root'],      
                      #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      'weight' : 'puW*12.178/1965200.*1000.*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['abs(nllW)'] ,           
                      #'weights': ['1.000'] ,           
                      #'isData': ['0'],                            
                  }

samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
                      'weight' : 'puW*1.4/2.0*0.8436/497200*1000*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['abs(nllW)'] ,           
                      #'weights': ['1.000'] ,           
                      #'isData': ['0'],                            
                  }

#samples['ggWW_Interference']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root', 'latino_GluGluWWTo2L2NuHiggs_MCFM.root'],      
                      #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['-1.4', '1.87'] ,           
                  #}


samples['Wg']  = {    'name': ['latino_Wg.root'],      
                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }


samples['VZ']  = {    'name': ['latino_WZTo3LNu.root', 'latino_ZZTo4L.root'],   # , 'latino_ZZTo2L2Nu.root'],      
                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }

#samples['WZ']  = {    'name': ['latino_WZTo3LNu.root'],      
                      #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['1'] ,           
                      ##'isData': ['0'],                            
                  #}


#samples['ZZ']  = {    'name': ['latino_ZZTo4L.root'],      
                      #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['1'] ,           
                      ##'isData': ['0'],                            
                  #}


#samples['VVV'] = {    'name': ['latino_WWZ.root', 'latino_WZZ.root', 'latino_ZZZ.root'],      
samples['VVV'] = {    'name': ['latino_WZZ.root', 'latino_ZZZ.root'],      
                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'isData': ['0'],                            
                  }


# Htautau
#samples['ggH_htt']  = {    'name': ['latino_GluGluHToTauTau_M125.root'],      
                           #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                           #'weights': ['1']            
                  #}

#samples['qqH_htt']  = {    'name': ['latino_VBFHToTauTau_M125.root'],      
                           #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                           #'weights': ['1']            
                  #}

#samples['WH_htt']  = {    'name': ['latino_HWminusJ_HToTauTau_M125.root', 'latino_HWplusJ_HToTauTau_M125.root'],      
                           #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  #}

#samples['ZH_htt']  = {    'name': ['latino_HZJ_HToTauTau_M125.root'],      
                           #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  #}

samples['H_htt']  = {      'name': ['latino_GluGluHToTauTau_M125.root', 'latino_VBFHToTauTau_M125.root','latino_HWminusJ_HToTauTau_M125.root', 'latino_HWplusJ_HToTauTau_M125.root', 'latino_HZJ_HToTauTau_M125.root' ],      
                           'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                           'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
                  }



# HWW 
#samples['H_hww']  = {    'name': ['latino_GluGluHToWWTo2L2Nu_M125.root', 'latino_VBFHToWWTo2L2Nu_M125.root', 'latino_HWminusJ_HToWW_M125.root', 'latino_HWplusJ_HToWW_M125.root', 'latino_HZJ_HToWW_M125.root'],      
                           #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                           #'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)']            
                  #}


samples['ggH_hww']  = {    'name': ['latino_GluGluHToWWTo2L2Nu_M125.root'],      
                           'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                           'weights': ['1']            
                  }

samples['qqH_hww']  = {    'name': ['latino_VBFHToWWTo2L2Nu_M125.root'],      
                           'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                           'weights': ['1']            
                  }

samples['WH_hww']  = {    'name': ['latino_HWminusJ_HToWW_M125.root', 'latino_HWplusJ_HToWW_M125.root'],      
                           'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }

samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],      
                           'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }



###########################################
###########################################
###########################################

#samples['DATA']  = {   'name': ['latino_DATA.root', 
                               #],      
                       #'weight' : 'trigger',
                       #'isData': ['all'],                            
                  #}

samples['DATA']  = {   'name': [
                                '../../Moriond/data/21OctBis_Run2015D_05Oct2015/latino_Run2015D_05Oct2015_DoubleEG.root',
                                '../../Moriond/data/21OctBis_Run2015D_05Oct2015/latino_Run2015D_05Oct2015_DoubleMuon.root',
                                '../../Moriond/data/21OctBis_Run2015D_05Oct2015/latino_Run2015D_05Oct2015_MuonEG.root',
                                '../../Moriond/data/21OctBis_Run2015D_05Oct2015/latino_Run2015D_05Oct2015_SingleElectron.root',
                                '../../Moriond/data/21OctBis_Run2015D_05Oct2015/latino_Run2015D_05Oct2015_SingleMuon.root',
                                '../../Moriond/data/21OctBis_Run2015D_PromptReco_0716pb/latino_Run2915D_PromptReco_DoubleEG_0716pb.root',
                                '../../Moriond/data/21OctBis_Run2015D_PromptReco_0716pb/latino_Run2915D_PromptReco_DoubleMuon_0716pb.root',
                                '../../Moriond/data/21OctBis_Run2015D_PromptReco_0716pb/latino_Run2915D_PromptReco_MuonEG_0716pb.root',
                                '../../Moriond/data/21OctBis_Run2015D_PromptReco_0716pb/latino_Run2915D_PromptReco_SingleElectron_0716pb.root',
                                '../../Moriond/data/21OctBis_Run2015D_PromptReco_0716pb/latino_Run2915D_PromptReco_SingleMuon_0716pb.root',
                                '../../Moriond/data/21OctBis_Run2015D_PromptReco_0851pb/latino_Run2915D_PromptReco_DoubleEG_0851pb.root',
                                '../../Moriond/data/21OctBis_Run2015D_PromptReco_0851pb/latino_Run2915D_PromptReco_DoubleMuon_0851pb.root',
                                '../../Moriond/data/21OctBis_Run2015D_PromptReco_0851pb/latino_Run2915D_PromptReco_MuonEG_0851pb.root',
                                '../../Moriond/data/21OctBis_Run2015D_PromptReco_0851pb/latino_Run2915D_PromptReco_SingleElectron_0851pb.root',
                                '../../Moriond/data/21OctBis_Run2015D_PromptReco_0851pb/latino_Run2915D_PromptReco_SingleMuon_0851pb.root',
                                ] ,     
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



# Fake

 
# mkdir /media/data/amassiro/LatinoTrees/21Oct_25ns_MC/fake/21OctBis_Run2015D_05Oct2015/
# mkdir /media/data/amassiro/LatinoTrees/21Oct_25ns_MC/fake/21OctBis_Run2015D_PromptReco_0716pb/
# mkdir /media/data/amassiro/LatinoTrees/21Oct_25ns_MC/fake/21OctBis_Run2015D_PromptReco_0851pb/
  
# scp -r amassiro@lxplus003:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/    /media/data/amassiro/LatinoTrees/21Oct_25ns_MC/fake/21OctBis_Run2015D_05Oct2015/
# scp -r amassiro@lxplus003:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/   /media/data/amassiro/LatinoTrees/21Oct_25ns_MC/fake/21OctBis_Run2015D_PromptReco_0716pb/
# scp -r amassiro@lxplus003:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/   /media/data/amassiro/LatinoTrees/21Oct_25ns_MC/fake/21OctBis_Run2015D_PromptReco_0851pb/
  
# fakeW2l0j
  
# fakeW2l0jUp
# fakeW2l0jDown
  
# fakeW2l0jstatUp
# fakeW2l0jstatDown






# scp  amassiro@lxplus0083.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ZZTo2L2Nu.root  /media/data/amassiro/LatinoTrees/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/
# scp  amassiro@lxplus0083.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__JESdo/latino_ZZTo2L2Nu.root  /media/data/amassiro/LatinoTrees/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__JESdo/
# scp  amassiro@lxplus0083.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__JESup/latino_ZZTo2L2Nu.root  /media/data/amassiro/LatinoTrees/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__JESup/






