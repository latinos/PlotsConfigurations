# samples

#samples = {}
samples['WZ2L2Q']  = {    'name': [
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part0.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part1.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part10.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part11.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part12.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part13.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part14.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part15.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part16.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part17.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part18.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part19.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part2.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part20.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part21.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part22.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part23.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part24.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part25.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part26.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part27.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part28.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part29.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part3.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part30.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part31.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part32.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part33.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part34.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part35.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part36.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part37.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part38.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part39.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part4.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part40.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part41.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part42.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part5.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part6.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part7.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part8.root',
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part9.root',                          
                          #
                         ], 
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'isData': ['0'],                            
                  }

samples['VVV'] = {    'name': [
                          'latino_WZZ.root', 
                          'latino_ZZZ.root',
                          'latino_WWW.root',
                          'latino_WWZ.root',
                          ],      
                      'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'weight':'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      #'isData': ['0'],
                  }



## Htautau
samples['H_htt']  = {      'name': ['latino_GluGluHToTauTau_M125.root',
                                    'latino_VBFHToTauTau_M125.root',
                                    #'latino_HWminusJ_HToTauTau_M125.root',
                                    #'latino_HWplusJ_HToTauTau_M125.root',
                                    #'latino_HZJ_HToTauTau_M125.root'
                                    ],      
                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',         
                           'weights': ['1', '1']
                           #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                           #'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
                  }


