# samples

#samples = {}

samples['DY']  = {    'name': [
                            #'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-10to50ext3.root',
                            #
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
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
                      #'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      #'weight' : 'puW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      'weight' : 'baseW*puW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                      #'weights' :  [
                        #'0.829752445221',
                        ##
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',
                        #'0.318902641535',                        
                        #]
                   }



#samples['Wjets']  = {    'name': ['latino_WJetsToLNu.root'],     #   file name    
                      #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      ##'isData': ['0'],                             
                  #}
             
samples['tttbar'] = {   'name': [
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
                          ],          
                       'weight' : 'baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',    #   weight/cut 
                      }

samples['singletop'] = {   'name': [
                          'latino_ST_tW_antitop.root',
                          'latino_ST_tW_top.root'
                          ],
                       'weight' : 'baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',    #   weight/cut 
                   } 




             
samples['WW']  = {    'name': [
                                  'latino_WWTo2L2Nu.root'
                                ],      
                      'weight' : 'nllW*puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  }


samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
                      'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]',          
                      #'weights': ['abs(nllW)'] ,           
                      #'weights': ['1.000'] ,           
                      #'isData': ['0'],                            
                  }



# during tree production: 1.4 k-factor has been applied to both samples
# ggWW sample: k = 1.4 +/- 15%
# ggWW interference: k = 1.87 +/- 25%



#samples['Vg']  = {    'name': ['latino_Wg_AMCNLOFXFX.root'],      
                      #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)\
                                  #* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                                 ##*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
                      #'weights': ['1'] ,           
                      ##'isData': ['0'],                            
                  #}



samples['VgS']  = {    'name': [
                             'latino_WgStarLNuEE.root', 
                             'latino_WgStarLNuMuMu.root'
                             ],      
                      'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      'weights': ['1','1'] ,           
                  }

# 
# Wg* scale factor is
#
# 1.98 +/- 0.54    in mumumu
# 2.0  +/- 0.5     in emumu
#
#





#samples['VZ']  = {    'name': [
                          ##'latino_WZ.root', 
                          #'latino_WZTo3LNu.root', 
                          ##'latino_ZZ.root', # ---> replaced by inclusive samples
                          ##'latino_ZZTo2L2Nu.root',   # ----> FIXME to be restored
                          ##'latino_ZZTo2L2Q.root'
                          #'latino_WZTo2L2Q__part0.root',
                          #'latino_WZTo2L2Q__part1.root',
                          #'latino_WZTo2L2Q__part10.root',
                          #'latino_WZTo2L2Q__part11.root',
                          #'latino_WZTo2L2Q__part12.root',
                          #'latino_WZTo2L2Q__part13.root',
                          #'latino_WZTo2L2Q__part14.root',
                          #'latino_WZTo2L2Q__part15.root',
                          #'latino_WZTo2L2Q__part16.root',
                          #'latino_WZTo2L2Q__part17.root',
                          #'latino_WZTo2L2Q__part18.root',
                          #'latino_WZTo2L2Q__part19.root',
                          #'latino_WZTo2L2Q__part2.root',
                          #'latino_WZTo2L2Q__part20.root',
                          #'latino_WZTo2L2Q__part21.root',
                          #'latino_WZTo2L2Q__part22.root',
                          #'latino_WZTo2L2Q__part23.root',
                          #'latino_WZTo2L2Q__part24.root',
                          #'latino_WZTo2L2Q__part25.root',
                          #'latino_WZTo2L2Q__part26.root',
                          #'latino_WZTo2L2Q__part27.root',
                          #'latino_WZTo2L2Q__part28.root',
                          #'latino_WZTo2L2Q__part29.root',
                          #'latino_WZTo2L2Q__part3.root',
                          #'latino_WZTo2L2Q__part30.root',
                          #'latino_WZTo2L2Q__part31.root',
                          #'latino_WZTo2L2Q__part32.root',
                          #'latino_WZTo2L2Q__part33.root',
                          #'latino_WZTo2L2Q__part34.root',
                          #'latino_WZTo2L2Q__part35.root',
                          #'latino_WZTo2L2Q__part36.root',
                          #'latino_WZTo2L2Q__part37.root',
                          #'latino_WZTo2L2Q__part38.root',
                          #'latino_WZTo2L2Q__part39.root',
                          #'latino_WZTo2L2Q__part4.root',
                          #'latino_WZTo2L2Q__part40.root',
                          #'latino_WZTo2L2Q__part41.root',
                          #'latino_WZTo2L2Q__part42.root',
                          #'latino_WZTo2L2Q__part5.root',
                          #'latino_WZTo2L2Q__part6.root',
                          #'latino_WZTo2L2Q__part7.root',
                          #'latino_WZTo2L2Q__part8.root',
                          #'latino_WZTo2L2Q__part9.root',                          
                          ##
                          #'latino_ZZTo2L2Q__part0.root',
                          #'latino_ZZTo2L2Q__part1.root',
                          #'latino_ZZTo2L2Q__part2.root',
                          #'latino_ZZTo2L2Q__part3.root',
                          ##
                          ##'latino_ZZTo4L.root'
                         #], 
                      #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      ##'weights': ['1'] ,           
                      ##'isData': ['0'],                            
                  #}



#samples['VVV'] = {    'name': [
                          #'latino_WZZ.root', 
                          #'latino_ZZZ.root',
                          #'latino_WWW.root',
                          #'latino_WWZ.root',
                          #],      
                      #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      ##'isData': ['0'],                            
                  #}


# Htautau
#samples['H_htt']  = {      'name': ['latino_GluGluHToTauTau_M125.root',
#                                    'latino_VBFHToTauTau_M125.root'
#                                    #'latino_HWminusJ_HToTauTau_M125.root',
#                                    #'latino_HWplusJ_HToTauTau_M125.root',
#                                    #'latino_HZJ_HToTauTau_M125.root'
#                                    ],      
#                           'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',         
#                           'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
#                  }
#
#
#
## HWW 
#
#samples['ggH_hww']  = {    'name': [
#                               'latino_GluGluHToWWTo2L2NuPowheg_M125.root'
#                               ],      
#                           'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
#                  }
#
#samples['qqH_hww']  = {    'name': [
#                               #'latino_VBFHToWWTo2L2Nu_M125.root'
#                               'latino_VBFHToWWTo2L2Nu_alternative_M125.root'
#                               ],      
#                           'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
#                  }
#
#samples['ggZH_hww']  = {    'name': [
#                               'latino_ggZH_HToWW_M120.root',   # ---> FIXME: to be replaced with 125!
#                               ],      
#                           'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
#                  }


#samples['WH_hww']  = {    'name': [
                             #'latino_HWminusJ_HToWW_M125.root',
                             #'latino_HWplusJ_HToWW_M125.root'
                             #],      
                           #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  #}

#samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],      
                           #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  #}



###########################################
###########################################
###########################################


samples['DATA']  = {   'name': [
                                #
                                #
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../           
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../         
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_DoubleEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../         
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../
                                #../../../../../../../../../../            
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../            
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_MuonEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_DoubleEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016C_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../            
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_MuonEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleElectron.root', 
                                #../../../../../../../../../../            
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_MuonEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleMuon.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_DoubleEG.root', 
                                '../../../../../../../../../../eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__l2tight/latino_Run2016D_PromptReco_SingleElectron.root', 
                                #
                                #
                                ] ,     
                      'weight' : '1',
                      'weights' : [
                                   #                             "HLT_Ele27_eta2p1_WPLoose_Gsf_v*",                                    # 0
                                   #'',                          "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_v*",                 # 8
                                   #'',                          "HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_v*",                  # 6
                                   #'',                          "HLT_Ele27_WPLoose_Gsf_v*",                                           # 47
                                   #'',                          "HLT_Ele45_WPLoose_Gsf_v*",                                           # 56
                                   #'',                          "HLT_IsoTkMu22_v*",                                                   # 42
                                   #'',                          "HLT_IsoMu22_v*",                                                     # 43
                                   #'',                          "HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_v*",                       # 46
                                   #'',                          "HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_v*",                              # 13
                                   #'',                          "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_v*",                                # 11
                                   #'',
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',           MuEG
                                   #'std_vector_trigger[13] || std_vector_trigger[11]',          DoubleMu
                                   #'std_vector_trigger[42] || std_vector_trigger[43]',          SingleMu
                                   #'std_vector_trigger[46]',                                    DoubleEle
                                   #'std_vector_trigger[0] || std_vector_trigger[56]',          SingleEle
                                   #'',
                                   #  if(pdType == MuEG) { return ( passesMuEGData_ );
                                   #  } else if(pdType == DoubleMuon) { return ( !passesMuEGData_ && passesDoubleMuData_ );
                                   #  } else if(pdType == SingleMuon) { return ( !passesMuEGData_ && !passesDoubleMuData_ && passesSingleMuData_ );
                                   #  } else if(pdType == DoubleEG  ) { return ( !passesMuEGData_ && !passesDoubleMuData_ && !passesSingleMuData_ && passesDoubleElData_ );
                                   #  } else if(pdType == SingleElectron) { return ( !passesMuEGData_ && !passesDoubleMuData_ && !passesSingleMuData_ && !passesDoubleElData_ && passesSingleElData_ );
                                   #  } else if(pdType == AllEmbed) { return ( passesMuEGData_ || passesDoubleMuData_ || passesSingleMuData_ || passesDoubleElData_ || passesSingleElData_ );
                                   #
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
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
                                   
                                    ],
                      'isData': ['all'],                            
                  }






