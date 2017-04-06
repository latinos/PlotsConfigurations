#samples = {}

samples['DY']  = {    'name': [
                            'latino_DYJetsToLL_M-10to50.root',
#                            'latino_DYJetsToLL_M-10to50ext3.root',
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
                      'weight' : 'metFilter*(0.95 - 0.1*TMath::Erf((gen_ptll-14)/8.8))*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'isData': ['0', '0'],      
                      'weights': [  '0.238112'
#                                  , '0.238112'
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

samples['top'] = {   'name': [
                           '../../../../../l/lusanche/latino_top_dnn.root'
                          ],
                       'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',    #   weight/cut 
                       'weights' :  [
                          '(DNNdiscriminator > 0.6)'
                          ],
                      }
             
samples['WW']  = {    'name': [
                                  'latino_WWTo2L2Nu.root'
                                ],      
                      'weight' : 'nllW*puW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      'weights': ['0.00619058124769'] ,           
                  }

# HWW 

samples['qqH_hww']  = {    'name': [
                               '../../../../../l/lusanche/latino_VBFHToWWTo2L2Nu_M125_dnn.root'
                               ],
                           'weight' : 'puW*baseW*effTrigW*bPogSF*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',                          
                           'weights' :  [
                               '(DNNdiscriminator > 0.6)'
                               ],
                  }

samples['DATA']  = {   'name': [
                                #
                                ##
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_MuonEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../           
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_MuonEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../         
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_MuonEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_DoubleEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016B_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../         
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_MuonEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_SingleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_DoubleEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../
                                #../../../../../../../../../../            
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_MuonEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_SingleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_DoubleEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../            
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_MuonEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_SingleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_DoubleEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016C_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../            
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016D_PromptReco_MuonEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016D_PromptReco_DoubleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016D_PromptReco_SingleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016D_PromptReco_DoubleEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016D_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../            
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016D_PromptReco_MuonEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016D_PromptReco_DoubleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016D_PromptReco_SingleMuon.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016D_PromptReco_DoubleEG.root', 
                                '../../../../../l/lusanche/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__wwSel/latino_Run2016D_PromptReco_SingleElectron.root', 
                                #
                                #
                                ] ,     
                       #'weight' : 'trigger',
                       'weight' : '1',
                       #'weight' : 'std_vector_trigger[1]',
                       'weights' : [
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #
                                   'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   '!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   #                         
                         ],

                       'isData': ['all'],                            
                  }
