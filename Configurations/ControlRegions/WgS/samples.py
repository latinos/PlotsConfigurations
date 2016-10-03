# samples

#samples = {}



samples['DY']  = {    'name': [
                             '../MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-10to50.root',
                             '../MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part0.root',
                             '../MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part1.root',
                             '../MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part2.root',
                             '../MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part3.root',
                             '../MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part4.root',
                             '../MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part0.root',
                             '../MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part1.root',
                             '../MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part2.root',
                             '../MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part3.root',
                             '../MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part4.root',
                             '../MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0002__part0.root',
                            ],    
                      'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                      #'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                   }

#

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



samples['ggH_hww']  = {    'name': [
                               'latino_GluGluHToWWTo2L2NuPowheg_M125.root'
                               ],      
                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  }

samples['qqH_hww']  = {    'name': [
                               #'latino_VBFHToWWTo2L2Nu_M125.root'
                               'latino_VBFHToWWTo2L2Nu_alternative_M125.root'
                               ],      
                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  }

samples['ggZH_hww']  = {    'name': [
                               'latino_ggZH_HToWW_M125.root',
                               ],      
                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  }


samples['WH_hww']  = {    'name': [
                             'latino_HWminusJ_HToWW_M125.root',
                             'latino_HWplusJ_HToWW_M125.root'
                             ],      
                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }

samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],      
                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }



samples['DATA']  = {   'name': [
                 ##
                 #'std_vector_trigger[8]  || std_vector_trigger[6]',           MuEG
                 #'std_vector_trigger[13] || std_vector_trigger[11]',          DoubleMu
                 #'std_vector_trigger[42] || std_vector_trigger[43]',          SingleMu
                 #'std_vector_trigger[46]',                                    DoubleEle
                 #'std_vector_trigger[47] || std_vector_trigger[56]',          SingleEle
                 #
                 '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                 '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                 '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                 '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                 '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                 #../../../../../../../../../../           
                 '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                 '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                 '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                 '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                 '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                 #../../../../../../../../../../         
                 '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                 '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                 '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                 '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                 '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                 #../../../../../../../../../../         
                 '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
                 '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
                 '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
                 '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
                 '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
                 #../../../../../../../../../../         
                 #
      '../../../HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
      '../../../HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
      '../../../HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
      '../../../HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
      '../../../HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../            
      '../../../HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
      '../../../HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
      '../../../HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
      '../../../HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
      '../../../HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../            
      '../../../HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_MuonEG.root', 
      '../../../HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleMuon.root', 
      '../../../HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleMuon.root', 
      '../../../HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleEG.root', 
      '../../../HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../            
      '../../../HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_MuonEG.root', 
      '../../../HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleMuon.root', 
      '../../../HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleMuon.root', 
      '../../../HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleEG.root', 
      '../../../HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleElectron.root', 
      #
              #

                 #
                 ],
                 #'weight' : 'trigger',
                 'weight' : '1',
                 #'weight' : 'std_vector_trigger[1]',
                 'weights' : [
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
              #
              'std_vector_trigger[8]  || std_vector_trigger[6]',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
              #
              'std_vector_trigger[8]  || std_vector_trigger[6]',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
              #
              'std_vector_trigger[8]  || std_vector_trigger[6]',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
              #
              'std_vector_trigger[8]  || std_vector_trigger[6]',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
              '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
                       #
		       ],
                 'isData': ['all'],
		 }



#samples['Wjets']  = {    'name': ['latino_WJetsToLNu.root'],     #   file name    
#                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
#                      #'isData': ['0'],                             
#                  }



samples['Fake']  = {    'name': [
      '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_MuonEG.root', 
      '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_DoubleMuon.root', 
      '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_SingleMuon.root', 
      '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_DoubleEG.root', 
      '../../../HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../           
      '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_MuonEG.root', 
      '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_DoubleMuon.root', 
      '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_SingleMuon.root', 
      '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_DoubleEG.root', 
      '../../../HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../         
      '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_MuonEG.root', 
      '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_DoubleMuon.root', 
      '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_SingleMuon.root', 
      '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_DoubleEG.root', 
      '../../../HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../         
      '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_MuonEG.root', 
      '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_SingleMuon.root', 
      '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_DoubleMuon.root', 
      '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_DoubleEG.root', 
      '../../../HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../         
      '../../../HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_MuonEG.root', 
      '../../../HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_DoubleMuon.root', 
      '../../../HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_SingleMuon.root', 
      '../../../HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_DoubleEG.root', 
      '../../../HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../            
      '../../../HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_MuonEG.root', 
      '../../../HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_DoubleMuon.root', 
      '../../../HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_SingleMuon.root', 
      '../../../HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_DoubleEG.root', 
      '../../../HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016C_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../            
      '../../../HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016D_PromptReco_MuonEG.root', 
      '../../../HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016D_PromptReco_DoubleMuon.root', 
      '../../../HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016D_PromptReco_SingleMuon.root', 
      '../../../HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016D_PromptReco_DoubleEG.root', 
      '../../../HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016D_PromptReco_SingleElectron.root', 
      #../../../../../../../../../../            
      '../../../HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016D_PromptReco_MuonEG.root', 
      '../../../HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016D_PromptReco_DoubleMuon.root', 
      '../../../HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016D_PromptReco_SingleMuon.root', 
      '../../../HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016D_PromptReco_DoubleEG.root', 
      '../../../HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb/latino_Run2016D_PromptReco_SingleElectron.root', 
                       #
                       #
		       ],
                 'isData': ['all'],
                      #'weight' : 'trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
		 'weight' : '(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                 'weights' : [
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
                       'std_vector_trigger[8]  || std_vector_trigger[6]',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                       '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[47] || std_vector_trigger[56])',
                       #
                       #
		       ],
                 'isData': ['all'],
		 }

             
samples['top'] = {   'name': [
                           #'latino_TTJets.root',
                           'latino_TTTo2L2Nu_ext1__part0.root',
                           'latino_TTTo2L2Nu_ext1__part1.root',
                           'latino_TTTo2L2Nu_ext1__part2.root',
                           'latino_TTTo2L2Nu_ext1__part3.root',
                           'latino_TTTo2L2Nu_ext1__part4.root',
                           'latino_TTTo2L2Nu_ext1__part5.root',
                           'latino_TTTo2L2Nu_ext1__part6.root',
                           'latino_TTTo2L2Nu_ext1__part7.root',
                           'latino_TTTo2L2Nu_ext1__part8.root',
                           'latino_TTTo2L2Nu_ext1__part9.root',
                           #
                           'latino_ST_tW_antitop.root',
                           'latino_ST_tW_top.root'
                          ],          
                       'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',    #   weight/cut 
                       #'weights' :  [
                          #'0.0043711992912',
                          #'0.0043711992912',
                          #'0.0043711992912',
                          #'0.0043711992912',
                          #'0.0043711992912',
                          #'0.0043711992912',
                          #'0.0043711992912',
                          #'0.0043711992912',
                          #'0.0043711992912',
                          #'0.0043711992912',
##
                          #'baseW',
                          #'baseW',
##                   
                       #]
                      }
           
             
samples['WW']  = {    'name': [
                                  'latino_WWTo2L2Nu.root'
                                ],      
                      'weight' : 'nllW*puW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      'weights': ['0.00619058124769'] ,           
                  }

samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
                      'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['abs(nllW)'] ,           
                      #'weights': ['1.000'] ,           
                      'isData': ['0'],                            
                  }


samples['Vg']  = {    'name': ['../MCWgStarsel__hadd__EpTCorr/latino_Wg_MADGRAPHMLM.root'],      
                      'weight' : 'puW*GEN_weight_SM/abs(GEN_weight_SM)\
                                  * !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                                 #*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
                      'weights': ['0.0684952181745'] ,           
                      #'isData': ['0'],                            
                  }



samples['WgSee']  = {    'name': [
                             '../MCWgStarsel__hadd__EpTCorr/latino_WgStarLNuEE.root', 
                             ],      
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',
                      #'weight' : '1.4*puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      'weights': ['1'] ,           
                  }
samples['WgSmm']  = {    'name': [
                             '../MCWgStarsel__hadd__EpTCorr/latino_WgStarLNuMuMu.root'
                             ],      
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',
                      #'weight' : '1.4*puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      'weights': ['1'] ,           
                  }


samples['WZ3L']  = {    'name': [
                          #'latino_WZ.root', 
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo3LNu.root', 
                         ], 
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'isData': ['0'],                            
                  }

samples['WZ3Lmllmin01']  = {    'name': [
                          '../MCWgStarsel__hadd__EpTCorr/latino_WZTo3LNu_mllmin01.root', 
                         ], 
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      #'isData': ['0'],                            
                  }

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

samples['ZZ']  = {    'name': [
                          #'latino_ZZ.root', # ---> replaced by exclusive samples
                          'latino_ZZTo2L2Nu.root',   # 
                          #'latino_ZZTo2L2Q.root'
                          'latino_ZZTo2L2Q__part0.root',
                          'latino_ZZTo2L2Q__part1.root',
                          'latino_ZZTo2L2Q__part2.root',
                          'latino_ZZTo2L2Q__part3.root',
                          #
                          #'latino_ZZTo4L.root'
                         ], 
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
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

