# samples

#samples = {}

samples['DY']  = {    'name': [
                            'latino_DYJetsToLL_M-10to50.root',
                            'latino_DYJetsToLL_M-10to50ext3.root',
                            #
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
                            'latino_DYJetsToLL_M-50_0002__part0.root'
                            #
                            ],    
                      'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)   \
                                   * ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                                   * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                               ',              #   weight/cut 
                      #'isData': ['0', '0'],      
                      'weights': [  '0.238112'
                                  , '0.238112'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  ] ,           
                  }


# 0.238112 for DY-10-50
# baseW for DY-50
# 
#  22Jan_25ns_mAODv2_MC DYJetsToLL_M-10to50 : {'nEvt': '22460679.0', 'nTot': '30868739.0', 'nPos': '26664709.0', 'baseW': '0.828559100996', 'nNeg': '4204030.0', 'xs': '18610.0'}
#  22Jan_25ns_mAODv2_MC DYJetsToLL_M-10to50ext3 : {'nEvt': '55695668.0', 'nTot': '76530604.0', 'nPos': '66113136.0', 'baseW': '0.334137297716', 'nNeg': '10417468.0', 'xs': '18610.0'}
#  18610 / (26664709.0 - 4204030.0) * 1000  = 0.828559
#  18610 / (26664709.0 - 4204030.0 + 66113136.0 - 10417468.0) * 1000 = 0.238112
#


#samples['Wjets']  = {    'name': ['latino_WJetsToLNu.root'],     #   file name    
                      #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      ##'isData': ['0'],                             
                  #}


# data driven
samples['Fake']  = {    'name': [
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/25FebNewFa/latino_DD_Run2015C_16Dec2015_DoubleEG.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/25FebNewFa/latino_DD_Run2015C_16Dec2015_DoubleMuon.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/25FebNewFa/latino_DD_Run2015C_16Dec2015_MuonEG.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/25FebNewFa/latino_DD_Run2015C_16Dec2015_SingleElectron.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/25FebNewFa/latino_DD_Run2015C_16Dec2015_SingleMuon.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/25FebNewFa/latino_DD_Run2015D_16Dec2015_DoubleEG.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/25FebNewFa/latino_DD_Run2015D_16Dec2015_DoubleMuon.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/25FebNewFa/latino_DD_Run2015D_16Dec2015_MuonEG.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/25FebNewFa/latino_DD_Run2015D_16Dec2015_SingleElectron.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/25FebNewFa/latino_DD_Run2015D_16Dec2015_SingleMuon.root'
                       #
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015C_16Dec2015_DoubleEG.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015C_16Dec2015_DoubleMuon.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015C_16Dec2015_MuonEG.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015C_16Dec2015_SingleElectron.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015C_16Dec2015_SingleMuon.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015D_16Dec2015_DoubleEG.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015D_16Dec2015_DoubleMuon.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015D_16Dec2015_MuonEG.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015D_16Dec2015_SingleElectron.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015D_16Dec2015_SingleMuon.root'


                                 ],     
                      'weight' : 'trigger*(0.8*fakeW2l0j*(njet==0)+0.8*fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      'isData': ['all'],                             
                  }

             

samples['top'] = {   'name': [
                          'latino_TTTo2L2Nu.root', 
                          'latino_ST_tW_antitop.root',
                          'latino_ST_tW_top.root'
                          ],          
                       'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]   \
                                   * ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                                   * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                               ',                
                   }


samples['WW']  = {    'name': [
                                  'latino_WWTo2L2Nu.root'
                                ],      
                      'weight' : 'nllW*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]   \
                                   * ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                                   * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                               ',          
                      #'weights': ['abs(nllW)'] ,           
                  }


samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]   \
                                   * ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                                   * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                               ',          
                      'weights': ['abs(nllW)'] ,           
                      'weights': ['1.000'] ,           
                      'isData': ['0'],                            
                  }

#samples['ggWW_Int']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root', 'latino_GluGluWWTo2L2NuHiggs_MCFM.root'],      
                      #'weight' : '1.87*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['-1./1.4', '1/1.4'] ,           
                  #}

# during tree production: 1.4 k-factor has been applied to both samples
# ggWW sample: k = 1.4 +/- 15%
# ggWW interference: k = 1.87 +/- 25%



samples['Wg']  = {    'name': ['latino_Wg_AMCNLOFXFX.root'],      
                      'weight' : '1.2*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)   \
                                   * ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                                   * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                               ',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }


samples['VZ']  = {    'name': [
                          'latino_WZTo3LNu.root', 
                          #'latino_ZZ.root',  ---> replaced by inclusive samples
                          'latino_ZZTo2L2Nu.root',
                          #'latino_ZZTo2L2Q.root'
                          'latino_ZZTo4L.root'
                         ], 
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]   \
                                   * ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                                   * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                               ',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }


samples['VVV'] = {    'name': [
                          'latino_WZZ.root', 
                          #'latino_ZZZ.root'
                          #'latino_WWW.root'
                          #'latino_WWZ.root'
                          ],      
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)   \
                                   * ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                                   * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                               ',          
                      #'isData': ['0'],                            
                  }


# Htautau
samples['H_htt']  = {      'name': ['latino_GluGluHToTauTau_M125.root',
                                    'latino_VBFHToTauTau_M125.root',
                                    'latino_HWminusJ_HToTauTau_M125.root',
                                    'latino_HWplusJ_HToTauTau_M125.root',
                                    'latino_HZJ_HToTauTau_M125.root'
                                    ],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]   \
                                   * ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                                   * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                               ',         
                           'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
                  }



# HWW 

samples['ggH_hww']  = {    'name': [
                               'latino_GluGluHToWWTo2L2NuPowheg_M125.root'
                               #'latino_GluGluHToWWTo2L2Nu_M125.root'
                               #'latino_GluGluHToWWTo2L2Nu_alternative_M125.root'  --> 500k events
                               ],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]   \
                                   * ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                                   * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                               ',          
                  }

samples['qqH_hww']  = {    'name': ['latino_VBFHToWWTo2L2Nu_M125.root'],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]   \
                                   * ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                                   * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                               ',          
                  }

samples['ggZH_hww']  = {    'name': [
                               'latino_ggZH_HToWW_M125.root',
                               ],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]   \
                                   * ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                                   * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                               ',          
                  }


samples['WH_hww']  = {    'name': ['latino_HWminusJ_HToWW_M125.root', 'latino_HWplusJ_HToWW_M125.root'],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)   \
                                   * ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                                   * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                               ',          
                  }

samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],      
                           'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)   \
                                   * ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0]))  \
                                   * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1]))  \
                               ',          
                  }



###########################################
###########################################
###########################################

samples['DATA']  = {   'name': [
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_DoubleEG.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_DoubleMuon.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_MuonEG.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_SingleElectron.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_SingleMuon.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_DoubleEG.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_DoubleMuon.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_MuonEG.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_SingleElectron.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_SingleMuon.root',
                                ] ,     
                       'weight' : 'trigger',
                       'isData': ['all'],                            
                  }



