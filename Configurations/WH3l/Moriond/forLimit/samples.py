# samples

#samples = {}

# data driven
samples['Fake']  = {    'name': [
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW__l3kin/latino_DD_Run2015C_16Dec2015_DoubleEG.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW__l3kin/latino_DD_Run2015C_16Dec2015_DoubleMuon.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW__l3kin/latino_DD_Run2015C_16Dec2015_MuonEG.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW__l3kin/latino_DD_Run2015C_16Dec2015_SingleElectron.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW__l3kin/latino_DD_Run2015C_16Dec2015_SingleMuon.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW__l3kin/latino_DD_Run2015D_16Dec2015_DoubleEG.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW__l3kin/latino_DD_Run2015D_16Dec2015_DoubleMuon.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW__l3kin/latino_DD_Run2015D_16Dec2015_MuonEG.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW__l3kin/latino_DD_Run2015D_16Dec2015_SingleElectron.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW__l3kin/latino_DD_Run2015D_16Dec2015_SingleMuon.root'
                                 ],     
                      'weight' : 'metFilter*trigger*fakeW3l',              #   weight/cut 
                      'isData': ['all'],                             
                  }

             

samples['Vg']  = {    'name': ['latino_Zg.root'],      
                      'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*GEN_weight_SM/abs(GEN_weight_SM)',
 #                     'weights': ['1'] ,           
                      'isData': ['0'],                            
                  }


samples['WW']  = {    'name': [
                                  'latino_WWTo2L2Nu.root'
                                ],      
                      'weight' : 'metFilter*nllW*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      #'weights': ['abs(nllW)'] ,           
                  }


#samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
#                      'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
#                      'weights': ['1.000'] ,           
#                      'isData': ['0'],                            
#                  }


samples['ZZ']  = {    'name': [
                          'latino_ZZ.root'
                         ],
                      'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }

samples['WZ']  = {    'name': [
                          'latino_WZTo3LNu.root'
                         ],
                      'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }


samples['VVV'] = {    'name': [
                          'latino_WZZ.root', 
                          #'latino_ZZZ.root'
                          'latino_WWW.root',
                          'latino_WWZ.root'
                          ],      
                      'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'isData': ['0'],                            
                  }


# Htautau
samples['WH_htt']  = {      'name': [#'latino_GluGluHToTauTau_M125.root',
#                                    'latino_VBFHToTauTau_M125.root',
                                    'latino_HWminusJ_HToTauTau_M125.root',
                                    'latino_HWplusJ_HToTauTau_M125.root',
                                    'latino_HZJ_HToTauTau_M125.root'
                                    ],      
                           'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]',         
                           'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
                  }



# HWW 


samples['ggZH_hww']  = {    'name': [
                               'latino_ggZH_HToWW_M125.root',
                               ],      
                           'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]',          
                  }

samples['WH_hww']  = {    'name': ['latino_HWminusJ_HToWW_M125.root', 'latino_HWplusJ_HToWW_M125.root'],      
                           'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }

samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],      
                           'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW3l*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_idisoW[2]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*std_vector_lepton_genmatched[2]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }


###########################################

samples['DATA']  = {   'name': [
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__vh3lSel__l3kin/latino_Run2015C_16Dec2015_DoubleEG.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__vh3lSel__l3kin/latino_Run2015C_16Dec2015_DoubleMuon.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__vh3lSel__l3kin/latino_Run2015C_16Dec2015_MuonEG.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__vh3lSel__l3kin/latino_Run2015C_16Dec2015_SingleElectron.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__vh3lSel__l3kin/latino_Run2015C_16Dec2015_SingleMuon.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__vh3lSel__l3kin/latino_Run2015D_16Dec2015_DoubleEG.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__vh3lSel__l3kin/latino_Run2015D_16Dec2015_DoubleMuon.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__vh3lSel__l3kin/latino_Run2015D_16Dec2015_MuonEG.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__vh3lSel__l3kin/latino_Run2015D_16Dec2015_SingleElectron.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__vh3lSel__l3kin/latino_Run2015D_16Dec2015_SingleMuon.root',
                                ] ,     
                       'weight' : 'trigger*metFilter',
                       'isData': ['all'],                            
                  }




