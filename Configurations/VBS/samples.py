# samples

#samples = {}

# only for ee with charge flip
samples['DY']  = {    'name': [
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
                            ],    
                      'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF_CMVAT*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == -11*11)*chFlipProba',  
                    }

samples['lep_TT']  = {    'name': [
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
                            ],    
                      'weight' : 'puW*baseW*bPogSF_CMVAT*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) == -11*11)*chFlipProba',  
                    }

# data driven
samples['Fake']  = {    'name': [
                      #
                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_MuonEG.root', 
                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_SingleMuon.root', 
                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_DoubleEG.root', 
                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../           
                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_MuonEG.root', 
                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_SingleMuon.root', 
                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_DoubleEG.root', 
                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../         
                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_MuonEG.root', 
                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_SingleMuon.root', 
                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_DoubleEG.root', 
                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016B_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../         
                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_MuonEG.root', 
                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_SingleMuon.root', 
                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_DoubleEG.root', 
                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../
                                #../../../../../../../../../../            
                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_MuonEG.root', 
                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_SingleMuon.root', 
                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_DoubleEG.root', 
                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../            
                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_MuonEG.root', 
                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_SingleMuon.root', 
                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_DoubleEG.root', 
                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016C_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../            
                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016D_PromptReco_MuonEG.root', 
                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016D_PromptReco_DoubleMuon.root', 
                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016D_PromptReco_SingleMuon.root', 
                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016D_PromptReco_DoubleEG.root', 
                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016D_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../            
                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016D_PromptReco_MuonEG.root', 
                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016D_PromptReco_DoubleMuon.root', 
                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016D_PromptReco_SingleMuon.root', 
                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016D_PromptReco_DoubleEG.root', 
                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__vbsSel/latino_Run2016D_PromptReco_SingleElectron.root', 
                                #
                       #               
                       ],     
                      #'weight' : 'trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      #'weight' : '2.6/0.8*trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      #'weight' : '4.0/0.8*trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      'weight' : 'fakeW2l2j*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',              #   weight/cut 
                      'isData': ['all'],
                       'weights' : [
                                   #
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
                                   #
                                   ],
                      
                  }


samples['Wg']  = {    'name': ['latino_WGJJ.root'],      
                      'weight' : 'puW*baseW*bPogSF_CMVAT*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',                          
                  }


samples['WZ']  = {    'name': [
                          'latino_WLLJJToLNu_M-4to60_EWK_QCD.root', 
                          'latino_WLLJJToLNu_M-60_EWK_QCD.root', 
                         ], 
                      'weight' : 'puW*baseW*bPogSF_CMVAT*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',                                  
                  }

samples['WpWpJJ']  = {  'name': [
                            'latino_WpWpJJ_EWK_QCD.root', 
                            ], 
                        'weight' : 'puW*baseW*bPogSF_CMVAT*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)*((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',                                  
                  }

#samples['VVV'] = {    'name': [
                          #'latino_WZZ.root', 
                          #'latino_ZZZ.root',
                          #'latino_WWW.root',
                          #'latino_WWZ.root',
                          #],      
                      #'weight' : 'puW*baseW*effTrigW*bPogSF_CMVAT*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      ##'isData': ['0'],                            
                  #}


###########################################
###########################################
###########################################


samples['DATA']  = {   'name': [
                                #
                                ##
                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_MuonEG.root', 
                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_SingleMuon.root', 
                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_DoubleEG.root', 
                                '../../21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../           
                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_MuonEG.root', 
                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_SingleMuon.root', 
                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_DoubleEG.root', 
                                '../../05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../         
                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_MuonEG.root', 
                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_SingleMuon.root', 
                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_DoubleEG.root', 
                                '../../08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016B_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../         
                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_MuonEG.root', 
                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_SingleMuon.root', 
                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_DoubleEG.root', 
                                '../../08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../
                                #../../../../../../../../../../            
                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_MuonEG.root', 
                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_SingleMuon.root', 
                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_DoubleEG.root', 
                                '../../11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../            
                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_MuonEG.root', 
                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_SingleMuon.root', 
                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_DoubleEG.root', 
                                '../../15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016C_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../            
                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016D_PromptReco_MuonEG.root', 
                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016D_PromptReco_DoubleMuon.root', 
                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016D_PromptReco_SingleMuon.root', 
                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016D_PromptReco_DoubleEG.root', 
                                '../../15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016D_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../            
                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016D_PromptReco_MuonEG.root', 
                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016D_PromptReco_DoubleMuon.root', 
                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016D_PromptReco_SingleMuon.root', 
                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016D_PromptReco_DoubleEG.root', 
                                '../../26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__l2tight__vbsSel/latino_Run2016D_PromptReco_SingleElectron.root', 
                                #
                                #
                                ] ,     
                       #'weight' : 'trigger',
                       'weight' : '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1]) > 0)',
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






