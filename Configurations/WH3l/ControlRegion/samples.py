# samples

#samples = {}


# data driven
samples['Fake']  = {    'name': [
                                '../../21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleMuon.root',
                                '../../21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleMuon.root',
                                '../../05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleMuon.root',
                                '../../08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_DoubleEG.root',
                                '../../08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_DoubleMuon.root',
                                '../../08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_SingleMuon.root',
                                '../../08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_SingleElectron.root',  
                                '../../08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_Run2016C_PromptReco_MuonEG.root'
                                ],
                     'weight' : 'trigger*fakeW3l',              #   weight/cut 
                     #'weight' : 'fakeW3l',              #   weight/cut 
#                  #   'weight' : '0.8*metFilter*trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                     'isData': ['all'],                             
                 }

             


samples['Vg']  = {    'name': ['latino_Zg.root'],      
                      'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]',
 #                     'weights': ['1'] ,           
                      'isData': ['0'],                            
                  }


#samples['WW']  = {    'name': [
#                                  'latino_WWTo2L2Nu.root',
#                                  'latino_GluGluWWTo2L2Nu_MCFM.root'
#                                ],      
#                      'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]', 
#                      #'weights': ['abs(nllW)'] ,           
#                  }


samples['ZZ']  = {    'name': [
                          'latino_ZZ.root'
                         ],
                      'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]',
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }

samples['WZ']  = {    'name': [
                          'latino_WZTo3LNu.root'
         #                 'latino_WZ.root'
                         ],
                      'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]',
#                      'weights': ['0.002214825'] ,           
                      #'isData': ['0'],                            
                  }


samples['VVV'] = {    'name': [
                          'latino_WZZ.root', 
                          'latino_ZZZ.root',
                          'latino_WWW.root',
                          'latino_WWZ.root'
                          ],      
                      'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'isData': ['0'],                            
                  }


# Htautau
samples['WH_htt']  = {      'name': ['latino_HWminusJ_HToTauTau_M125.root',
                                    'latino_HWplusJ_HToTauTau_M125.root',
                                    'latino_HZJ_HToTauTau_M125.root'
                                    ],      
                           'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)',         
##                           'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
                  }



# HWW 

samples['ggZH_hww']  = {    'name': [
                               'latino_ggZH_HToWW_M125.root',
                               ],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }


samples['WH_hww']  = {    'name': ['latino_HWminusJ_HToWW_M125.root', 'latino_HWplusJ_HToWW_M125.root'],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }

samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }


###########################################
###########################################
###########################################

samples['DATA']  = {   'name': [
#                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleEG.root',
#                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleMuon.root',
#                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_MuonEG.root',
#                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleElectron.root',
#                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleMuon.root',
#                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleMuon.root',
#                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleEG.root',
#                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_MuonEG.root',
#                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleElectron.root',
#                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleMuon.root'

                                '../../21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleMuon.root',
                                '../../21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleMuon.root',
                                '../../05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleMuon.root',
                                '../../08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016C_PromptReco_DoubleEG.root',
                                '../../08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016C_PromptReco_DoubleMuon.root',
                                '../../08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016C_PromptReco_SingleMuon.root',
                                '../../08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016C_PromptReco_SingleElectron.root',
                                '../../08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016C_PromptReco_MuonEG.root'

                                ] ,     
                       'weight' : 'trigger',
              #         'weight' : 'std_vector_trigger[43]', #single mu PD
 #                      'weight' : 'std_vector_trigger[0]', #single ele PD
                       'isData': ['all'],                            
                  }




