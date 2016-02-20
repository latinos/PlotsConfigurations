# samples

#samples = {}

samples['DY']  = {    'name': [
                            'latino_DY2JetsToLL__part0.root',
                            'latino_DY2JetsToLL__part1.root',
                            'latino_DY2JetsToLL__part2.root',
                            'latino_DY2JetsToLL__part3.root',
                            'latino_DY2JetsToLL__part4.root',
                            'latino_DY2JetsToLL__part5.root',
                            'latino_DYJetsToLL_M-10to50.root',
                            'latino_DYJetsToLL_M-50_0000__part0.root',
                            'latino_DYJetsToLL_M-50_0000__part1.root',
                            'latino_DYJetsToLL_M-50_0000__part2.root',
                            'latino_DYJetsToLL_M-50_0000__part3.root',
                            'latino_DYJetsToLL_M-50_0000__part4.root',
                            'latino_DYJetsToLL_M-50_0001__part0.root',
                            'latino_DYJetsToLL_M-50_0001__part1.root',
                            'latino_DYJetsToLL_M-50_0001__part2.root',
                            'latino_DYJetsToLL_M-50_0001__part3.root',
                            'latino_DYJetsToLL_M-50_0001__part4.root',
                            'latino_DYJetsToLL_M-50_0002__part0.root',
                            #
                            'latino_DYJetsToLL_M-10to50.root'
                            ],    
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'isData': ['0', '0'],                                  
                  }




samples['Wjets']  = {    'name': ['latino_WJetsToLNu.root'],     #   file name    
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'isData': ['0'],                             
                  }


# data driven
#samples['Fake']  = {    'name': [
                       #'../fake/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_DoubleEG.root',
                       #'../fake/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_DoubleMuon.root',
                       #'../fake/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_MuonEG.root',
                       #'../fake/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_SingleElectron.root',
                       #'../fake/21OctBis_Run2015D_05Oct2015/l2loose__hadd__fakeW/latino_DD_Run2015D_05Oct2015_SingleMuon.root',
                       #'../fake/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_DoubleEG_0716pb.root',
                       #'../fake/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_DoubleMuon_0716pb.root',
                       #'../fake/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_MuonEG_0716pb.root',
                       #'../fake/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_SingleElectron_0716pb.root',
                       #'../fake/21OctBis_Run2015D_PromptReco_0716pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_SingleMuon_0716pb.root',
                       #'../fake/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_DoubleEG_0851pb.root',
                       #'../fake/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_DoubleMuon_0851pb.root',
                       #'../fake/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_MuonEG_0851pb.root',
                       #'../fake/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_SingleElectron_0851pb.root',
                       #'../fake/21OctBis_Run2015D_PromptReco_0851pb/l2loose__hadd__fakeW/latino_DD_Run2915D_PromptReco_SingleMuon_0851pb.root',
                                 #],     
                      #'weight' : 'fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2)',              #   weight/cut 
                      #'isData': ['all'],                             
                  #}

                       

samples['top'] = {   'name': [
                          'latino_TTTo2L2Nu.root', 
                          'latino_ST_tW_antitop.root',
                          #'latino_ST_tW_top.root'
                          ],          
                       'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',                
                   }


samples['WW']  = {    'name': ['latino_WWTo2L2Nu.root'],      
                      #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      'weight' : 'puW*12.178/1965200.*1000.*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['abs(nllW)'] ,           
                      #'weights': ['1.000'] ,           
                  }

samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      'weights': ['abs(nllW)'] ,           
                      'weights': ['1.000'] ,           
                      'isData': ['0'],                            
                  }

samples['ggWW_Int']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root', 'latino_GluGluWWTo2L2NuHiggs_MCFM.root'],      
                      'weight' : '1.87*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      'weights': ['-1./1.4', '1/1.4'] ,           
                  }

# during tree production: 1.4 k-factor has been applied to both samples
# ggWW sample: k = 1.4 +/- 15%
# ggWW interference: k = 1.87 +/- 25%



samples['Wg']  = {    'name': ['latino_Wg_AMCNLOFXFX.root'],      
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }


samples['VZ']  = {    'name': [
                          'latino_WZTo3LNu.root', 
                          'latino_ZZ.root',
                          #'latino_ZZTo2L2Nu.root'
                          #'latino_ZZTo2L2Q.root'
                          #'latino_ZZTo4L.root'
                         ], 
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }


samples['VVV'] = {    'name': [
                          'latino_WZZ.root', 
                          #'latino_ZZZ.root'
                          #'latino_WWW.root'
                          #'latino_WWZ.root'
                          ],      
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'isData': ['0'],                            
                  }


# Htautau
samples['H_htt']  = {      'name': ['latino_GluGluHToTauTau_M125.root',
                                    'latino_VBFHToTauTau_M125.root',
                                    'latino_HWminusJ_HToTauTau_M125.root',
                                    'latino_HWplusJ_HToTauTau_M125.root',
                                    #'latino_HZJ_HToTauTau_M125.root'
                                    ],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                           'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
                           #'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
                  }



# HWW 

samples['ggH_hww']  = {    'name': [
                               'latino_GluGluHToWWTo2L2NuPowheg_M125.root',
                               #'latino_GluGluHToWWTo2L2Nu_M125.root'
                               ],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                           #'weights': ['1']            
                  }

samples['qqH_hww']  = {    'name': ['latino_VBFHToWWTo2L2Nu_M125.root'],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                           'weights': ['1']            
                  }

samples['ggZH_hww']  = {    'name': [
                               #'latino_ggZH_HToWW_M125.root',
                               'latino_ggZH_HToWW_M130.root'
                               ],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                           ##'weights': ['1']            
                  }


samples['WH_hww']  = {    'name': ['latino_HWminusJ_HToWW_M125.root', 'latino_HWplusJ_HToWW_M125.root'],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }

samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }



###########################################
###########################################
###########################################

samples['DATA']  = {   'name': [
                                '../../22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_DoubleEG.root',
                                '../../22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_DoubleMuon.root',
                                '../../22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_MuonEG.root',
                                '../../22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_SingleElectron.root',
                                '../../22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_SingleMuon.root',
                                '../../22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_DoubleEG.root',
                                '../../22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_DoubleMuon.root',
                                '../../22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_MuonEG.root',
                                '../../22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_SingleElectron.root',
                                '../../22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_SingleMuon.root',
                                ] ,     
                       'weight' : 'trigger',
                       'isData': ['all'],                            
                  }



# scp -r amassiro@lxplus062.cern.ch:/tmp/amassiro/eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight /media/data/amassiro/LatinoTrees/Moriond/
# scp -r amassiro@lxplus062.cern.ch:/tmp/amassiro/eos/user/j/jlauwers/HWW2015/22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight /media/data/amassiro/LatinoTrees/Moriond/22Jan_Run2015C_16Dec2015/
# scp -r amassiro@lxplus062.cern.ch:/tmp/amassiro/eos/user/j/jlauwers/HWW2015/22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight /media/data/amassiro/LatinoTrees/Moriond/22Jan_Run2015D_16Dec2015/





