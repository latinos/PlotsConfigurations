# samples

#samples = {}

#samples['DY']  = {    'name': [
#                            'latino_DYJetsToLL_M-10to50.root',
#                            'latino_DYJetsToLL_M-10to50ext3.root',
                            #
 ##                           'latino_DYJetsToLL_M-50_0000__part0.root',
 #                           'latino_DYJetsToLL_M-50_0000__part1.root',
 #                           'latino_DYJetsToLL_M-50_0000__part2.root',
 #                           'latino_DYJetsToLL_M-50_0000__part3.root',
 #                           'latino_DYJetsToLL_M-50_0000__part4.root',
 #                           'latino_DYJetsToLL_M-50_0001__part0.root',
 #                           'latino_DYJetsToLL_M-50_0001__part1.root',
 #                           'latino_DYJetsToLL_M-50_0001__part2.root',
 #                           'latino_DYJetsToLL_M-50_0001__part3.root',
 #                           'latino_DYJetsToLL_M-50_0001__part4.root',
 #                           'latino_DYJetsToLL_M-50_0002__part0.root'
                           
  #                          ],    
  #                    'weight' : 'metFilter*(0.95 - 0.1*TMath::Erf((gen_ptll-14)/8.8))*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'isData': ['0', '0'],      
   #                   'weights': [  '0.238112'
   ##                               , '0.238112'
    #                              , '0.317273040011'
    #                              , '0.317273040011'
    #                              , '0.317273040011'
    #                              , '0.317273040011'
   #                               , '0.317273040011'
   #                               , '0.317273040011'
   #                               , '0.317273040011'
   #                               , '0.317273040011'
   #                               , '0.317273040011'
   #                               , '0.317273040011'
   #                               , '0.317273040011'
    #                              ] ,           
    #              }


# 0.238112 for DY-10-50
# baseW for DY-50
# 
#  22Jan_25ns_mAODv2_MC DYJetsToLL_M-10to50 : {'nEvt': '22460679.0', 'nTot': '30868739.0', 'nPos': '26664709.0', 'baseW': '0.828559100996', 'nNeg': '4204030.0', 'xs': '18610.0'}
#  22Jan_25ns_mAODv2_MC DYJetsToLL_M-10to50ext3 : {'nEvt': '55695668.0', 'nTot': '76530604.0', 'nPos': '66113136.0', 'baseW': '0.334137297716', 'nNeg': '10417468.0', 'xs': '18610.0'}
#  18610 / (26664709.0 - 4204030.0) * 1000  = 0.828559
#  18610 / (26664709.0 - 4204030.0 + 66113136.0 - 10417468.0) * 1000 = 0.238112
#


#samples['Wjets']  = {    'name': ['latino_WJetsToLNu.root'],     #   file name    
                      #'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      ##'isData': ['0'],                             
                  #}



# data driven
samples['Fake']  = {    'name': [
#                       '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_DoubleEG.root',
#                       '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_DoubleMuon.root',
#                       '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_MuonEG.root',
#                       '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_SingleElectron.root',
#                       '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2016B_PromptReco_SingleMuon.root'
                        '../../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleEG.root',
                        '../../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleMuon.root',
                        '../../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_MuonEG.root',
                        '../../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleMuon.root',
                        '../../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleElectron.root',
                        '../../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleEG.root',
                        '../../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleMuon.root',
                        '../../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_MuonEG.root',
                        '../../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleMuon.root',
                        '../../../../../../../../../../../eos/user/a/amassiro/HWW2015/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleElectron.root'

                                ],     
                     'weight' : 'trigger*fakeW3l',              #   weight/cut 
                     #'weight' : 'fakeW3l',              #   weight/cut 
#                  #   'weight' : '0.8*metFilter*trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                     'isData': ['all'],                             
                 }

             

#samples['top'] = {   'name': [
#                          'latino_TTJets.root', 
#                          'latino_ST_tW_antitop.root',
#                          'latino_ST_tW_top.root'
#                          ],          
#                       'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',                
#                   }


samples['Vg']  = {    'name': ['latino_Zg.root'],      
                      'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]',
 #                     'weights': ['1'] ,           
                      'isData': ['0'],                            
                  }


samples['WW']  = {    'name': [
                                  'latino_WWTo2L2Nu.root',
                                  'latino_GluGluWWTo2L2Nu_MCFM.root'
                                ],      
                      'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]', 
                      #'weights': ['abs(nllW)'] ,           
                  }


#samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
#                      'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
#                      'weights': ['1.000'] ,           
#                      'isData': ['0'],                            
#                  }

#samples['Vg']  = {    'name': ['latino_Wg_AMCNLOFXFX.root'],      
#                      'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*GEN_weight_SM/abs(GEN_weight_SM)\
 #                                 * !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
 #                                #*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
 #                     'weights': ['1'] ,           
                      #'isData': ['0'],                            
 #                 }



#samples['VgS']  = {    'name': ['latino_WgStarLNuEE.root', 'latino_WgStarLNuMuMu.root'],      
#                      'weight' : 'metFilter*2.0*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)',
#                      'weights': ['1','1'] ,           
#                  }

# 
# Wg* scale factor is
#
# 1.98 +/- 0.54    in mumumu
# 2.0  +/- 0.5     in emumu
#
#


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
#samples['WH_htt']  = {      'name': ['latino_HWminusJ_HToTauTau_M125.root',
#                                    'latino_HWplusJ_HToTauTau_M125.root',
#                                    'latino_HZJ_HToTauTau_M125.root'
#                                    ],      
#                           'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]',         
#                           'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
#                  }



# HWW 

samples['ggZH_hww']  = {    'name': [
                               'latino_ggZH_HToWW_M125.root',
                               ],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]',          
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
                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleMuon.root',
                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleMuon.root',
                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../../../../../../../../../../eos/user/j/jlauwers/HWW2015/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__vh3lSel/latino_Run2016B_PromptReco_DoubleMuon.root'
                                ] ,     
                       'weight' : 'trigger',
              #         'weight' : 'std_vector_trigger[43]', #single mu PD
 #                      'weight' : 'std_vector_trigger[0]', #single ele PD
                       'isData': ['all'],                            
                  }




