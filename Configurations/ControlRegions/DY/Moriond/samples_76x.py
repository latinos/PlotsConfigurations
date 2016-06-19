# samples

#samples = {}
    
#   puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)

samples['DY']  = {    'name': [
                                #'22Jan_25ns_mAODv2_MC/MCl2loose__hadd__l2tight/latino_DYJetsToLL_M-50.root', 
                                '22Jan_25ns_mAODv2_MC/MCl2loose__hadd__l2tight/latino_DYJetsToLL_M-50_0000__part0.root',
                                '22Jan_25ns_mAODv2_MC/MCl2loose__hadd__l2tight/latino_DYJetsToLL_M-50_0000__part1.root',
                                '22Jan_25ns_mAODv2_MC/MCl2loose__hadd__l2tight/latino_DYJetsToLL_M-50_0000__part2.root',
                                '22Jan_25ns_mAODv2_MC/MCl2loose__hadd__l2tight/latino_DYJetsToLL_M-50_0000__part3.root',
                                '22Jan_25ns_mAODv2_MC/MCl2loose__hadd__l2tight/latino_DYJetsToLL_M-50_0000__part4.root',
                                '22Jan_25ns_mAODv2_MC/MCl2loose__hadd__l2tight/latino_DYJetsToLL_M-50_0001__part0.root',
                                '22Jan_25ns_mAODv2_MC/MCl2loose__hadd__l2tight/latino_DYJetsToLL_M-50_0001__part1.root',
                                '22Jan_25ns_mAODv2_MC/MCl2loose__hadd__l2tight/latino_DYJetsToLL_M-50_0001__part2.root',
                                '22Jan_25ns_mAODv2_MC/MCl2loose__hadd__l2tight/latino_DYJetsToLL_M-50_0001__part3.root',
                                '22Jan_25ns_mAODv2_MC/MCl2loose__hadd__l2tight/latino_DYJetsToLL_M-50_0001__part4.root',
                                '22Jan_25ns_mAODv2_MC/MCl2loose__hadd__l2tight/latino_DYJetsToLL_M-50_0002__part0.root',
                                '22Jan_25ns_mAODv2_MC/MCl2loose__hadd__l2tight/latino_DYJetsToLL_M-10to50.root'
                              ],     #   file name    
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',              #   weight/cut 
                      #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'isData': ['0', '0'],                                  
                  }

#samples['Wjets']  = {    'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/_WJetsToLNu.root'],     #   file name    
                      #'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      ##'isData': ['0'],                             
                  #}


# data driven
#samples['Fake']  = {    'name': [
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_DoubleEG.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_DoubleMuon.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_MuonEG.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_SingleElectron.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_SingleMuon.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_DoubleEG_0716pb.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_DoubleMuon_0716pb.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_MuonEG_0716pb.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_SingleElectron_0716pb.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_SingleMuon_0716pb.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_DoubleEG_0851pb.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_DoubleMuon_0851pb.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_MuonEG_0851pb.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_SingleElectron_0851pb.root',
#                       'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_SingleMuon_0851pb.root',
#                                 ],     
#                      'weight' : 'fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2)',              #   weight/cut 
#                      'isData': ['1'],                             
#                  }



#samples['top'] = {   'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_TTTo2L2Nu.root',  'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ST_tW_antitop.root', 'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ST_tW_top.root'],          
#                       'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',                
#                       'weights': ['1', '1', '1'],                   
#                       #'isData': ['0'],                            
#                   }


#samples['WW']  = {    'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_WWTo2L2Nu.root'],      
#                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
#                      #'weights': ['abs(nllW)'] ,           
#                      #'weights': ['1.000'] ,           
                      #'isData': ['0'],                            
#                  }

#samples['ggWW']  = {    'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_GluGluWWTo2L2Nu_MCFM.root'],      
#                      'weight' : 'puW*0.8436/497200*1000*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
#                      #'weights': ['abs(nllW)'] ,           
#                      #'weights': ['1.000'] ,           
#                      #'isData': ['0'],                            
#                  }
#

#samples['Wg']  = {    'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_Wg.root'],      
#                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
#                      #'weights': ['1'] ,           
#                      #'isData': ['0'],                            
#                  }


#samples['VZ']  = {    'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_WZTo3LNu.root', 'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ZZTo4L.root'],      
#                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
#                      #'weights': ['1'] ,           
#                      #'isData': ['0'],                            
#                  }

#samples['VVV'] = {    'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_WZZ.root', 'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_ZZZ.root'],      
#                      'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
#                      #'isData': ['0'],                            
#                  }


#samples['H_htt']  = {      'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_GluGluHToTauTau_M125.root', 'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_VBFHToTauTau_M125.root','eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_HWminusJ_HToTauTau_M125.root', 'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_HWplusJ_HToTauTau_M125.root', 'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_HZJ_HToTauTau_M125.root' ],      
#                           'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
#                           'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
#                  }



#samples['ggH_hww']  = {    'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_GluGluHToWWTo2L2Nu_M125.root'],      
#                           'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
#                           'weights': ['1']            
#                  }

#samples['qqH_hww']  = {    'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_VBFHToWWTo2L2Nu_M125.root'],      
#                           'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
#                           'weights': ['1']            
#                  }

#samples['WH_hww']  = {    'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_HWminusJ_HToWW_M125.root', 'eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_HWplusJ_HToWW_M125.root'],      
#                           'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
#                  }
#
#samples['ZH_hww']  = {    'name': ['eosuser/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/latino_HZJ_HToWW_M125.root'],      
#                           'weight' : 'puW*baseW*bPogSF*bTPSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
#                  }


samples['DATA']  = {   'name': [
                                # Run C
                                '22Jan_Run2015C_16Dec2015/l2loose__hadd__l2tight/latino_Run2015C_16Dec2015_DoubleEG.root',
                                '22Jan_Run2015C_16Dec2015/l2loose__hadd__l2tight/latino_Run2015C_16Dec2015_DoubleMuon.root',
                                '22Jan_Run2015C_16Dec2015/l2loose__hadd__l2tight/latino_Run2015C_16Dec2015_MuonEG.root',
                                '22Jan_Run2015C_16Dec2015/l2loose__hadd__l2tight/latino_Run2015C_16Dec2015_SingleElectron.root',
                                '22Jan_Run2015C_16Dec2015/l2loose__hadd__l2tight/latino_Run2015C_16Dec2015_SingleMuon.root ',
                                # Run D
                                '22Jan_Run2015D_16Dec2015/l2loose__hadd__l2tight/latino_Run2015D_16Dec2015_DoubleEG.root',
                                '22Jan_Run2015D_16Dec2015/l2loose__hadd__l2tight/latino_Run2015D_16Dec2015_DoubleMuon.root',
                                '22Jan_Run2015D_16Dec2015/l2loose__hadd__l2tight/latino_Run2015D_16Dec2015_MuonEG.root',
                                '22Jan_Run2015D_16Dec2015/l2loose__hadd__l2tight/latino_Run2015D_16Dec2015_SingleElectron.root',
                                '22Jan_Run2015D_16Dec2015/l2loose__hadd__l2tight/latino_Run2015D_16Dec2015_SingleMuon.root ',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_DoubleEG.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_DoubleMuon.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_MuonEG.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_SingleElectron.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_05Oct2015/l2sel__hadd/latino_Run2015D_05Oct2015_SingleMuon.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd/latino_Run2915D_PromptReco_DoubleEG_0716pb.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd/latino_Run2915D_PromptReco_DoubleMuon_0716pb.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd/latino_Run2915D_PromptReco_MuonEG_0716pb.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd/latino_Run2915D_PromptReco_SingleElectron_0716pb.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd/latino_Run2915D_PromptReco_SingleMuon_0716pb.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd/latino_Run2915D_PromptReco_DoubleEG_0851pb.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd/latino_Run2915D_PromptReco_DoubleMuon_0851pb.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd/latino_Run2915D_PromptReco_MuonEG_0851pb.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd/latino_Run2915D_PromptReco_SingleElectron_0851pb.root',
                                #'eosuser/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd/latino_Run2915D_PromptReco_SingleMuon_0851pb.root',
                                ] ,     
                       'weight' : 'trigger',
                       'isData': ['all'],                            
                  }
