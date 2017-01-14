## samples


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
                      #'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*GEN_weight_SM/abs(GEN_weight_SM)',  
                    }




# during tree production: 1.4 k-factor has been applied to both samples
# ggWW sample: k = 1.4 +/- 15%
# ggWW interference: k = 1.87 +/- 25%



samples['Wg']  = {    'name': ['latino_Wg_MADGRAPHMLM.root'],      
                      'weight' : 'puW*GEN_weight_SM/abs(GEN_weight_SM)\
                                  * !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                                 #*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
                      'weights': ['0.0684952181745'] ,           
                      #'isData': ['0'],                            
                  }



#samples['WgS']  = {    'name': [
                             #'latino_WZTo3LNu_mllmin01.root', 
                             #],      
                      #'weight' : '(Gen_ZGstar_mass<4 && Gen_ZGstar_mass>0)*puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',
                  #}



samples['WgSee']  = {    'name': [
                             'latino_WgStarLNuEE.root', 
                             ],      
                      'weight' : '1.4*puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',
                  }



samples['WgSmm']  = {    'name': [
                             'latino_WgStarLNuMuMu.root'
                             ],      
                      'weight' : '1.4*puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',
                  }



# 
# Wg* scale factor is
#
# X.X  +/- X.X     in mumumu
# 1.4  +/- 0.4     in emumu
#
#





samples['VZ']  = {    'name': [
                          #'latino_WZ.root', 
                          'latino_WZTo3LNu.root', 
                          #'latino_ZZ.root', # ---> replaced by exclusive samples
                          #'latino_ZZTo2L2Nu.root',   # 
                          #'latino_ZZTo2L2Q.root'
                          'latino_WZTo2L2Q__part0.root',
                          'latino_WZTo2L2Q__part1.root',
                          'latino_WZTo2L2Q__part10.root',
                          'latino_WZTo2L2Q__part11.root',
                          'latino_WZTo2L2Q__part12.root',
                          'latino_WZTo2L2Q__part13.root',
                          'latino_WZTo2L2Q__part14.root',
                          'latino_WZTo2L2Q__part15.root',
                          'latino_WZTo2L2Q__part16.root',
                          'latino_WZTo2L2Q__part17.root',
                          'latino_WZTo2L2Q__part18.root',
                          'latino_WZTo2L2Q__part19.root',
                          'latino_WZTo2L2Q__part2.root',
                          'latino_WZTo2L2Q__part20.root',
                          'latino_WZTo2L2Q__part21.root',
                          'latino_WZTo2L2Q__part22.root',
                          'latino_WZTo2L2Q__part23.root',
                          'latino_WZTo2L2Q__part24.root',
                          'latino_WZTo2L2Q__part25.root',
                          'latino_WZTo2L2Q__part26.root',
                          'latino_WZTo2L2Q__part27.root',
                          'latino_WZTo2L2Q__part28.root',
                          'latino_WZTo2L2Q__part29.root',
                          'latino_WZTo2L2Q__part3.root',
                          'latino_WZTo2L2Q__part30.root',
                          'latino_WZTo2L2Q__part31.root',
                          'latino_WZTo2L2Q__part32.root',
                          'latino_WZTo2L2Q__part33.root',
                          'latino_WZTo2L2Q__part34.root',
                          'latino_WZTo2L2Q__part35.root',
                          'latino_WZTo2L2Q__part36.root',
                          'latino_WZTo2L2Q__part37.root',
                          'latino_WZTo2L2Q__part38.root',
                          'latino_WZTo2L2Q__part39.root',
                          'latino_WZTo2L2Q__part4.root',
                          'latino_WZTo2L2Q__part40.root',
                          'latino_WZTo2L2Q__part41.root',
                          'latino_WZTo2L2Q__part42.root',
                          'latino_WZTo2L2Q__part5.root',
                          'latino_WZTo2L2Q__part6.root',
                          'latino_WZTo2L2Q__part7.root',
                          'latino_WZTo2L2Q__part8.root',
                          'latino_WZTo2L2Q__part9.root',                          
                          #
                          #'latino_ZZTo2L2Q__part0.root',
                          #'latino_ZZTo2L2Q__part1.root',
                          #'latino_ZZTo2L2Q__part2.root',
                          #'latino_ZZTo2L2Q__part3.root',
                          #
                          #'latino_ZZTo4L.root'
                         ], 
                      'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }



###########################################
###########################################
###########################################


samples['DATA']  = {   'name': [
                     #
                     ##
                     '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/21Jun2016_v2_Run2016B_PromptReco_repro/WgStarsel__hadd__EpTCorr/latino_Run2016B_PromptReco_SingleElectron.root', 
                     #../../../../../../../../../../           
                     '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/05Jul2016_Run2016B_PromptReco_repro/WgStarsel__hadd__EpTCorr/latino_Run2016B_PromptReco_SingleElectron.root', 
                     #../../../../../../../../../../         
                     '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016B_PromptReco_repro/WgStarsel__hadd__EpTCorr/latino_Run2016B_PromptReco_SingleElectron.root', 
                     #../../../../../../../../../../         
                     '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016C_PromptReco_repro/WgStarsel__hadd__EpTCorr/latino_Run2016C_PromptReco_SingleElectron.root', 
                     #../../../../../../../../../../
                     #../../../../../../../../../../            
                     '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/11Jul2016_Run2016C_PromptReco_repro/WgStarsel__hadd__ICHEPjson__EpTCorr/latino_Run2016C_PromptReco_SingleElectron.root', 
                     #../../../../../../../../../../            
                     '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/15Jul2016_Run2016C_PromptReco_repro/WgStarsel__hadd__ICHEPjson__EpTCorr/latino_Run2016C_PromptReco_SingleElectron.root', 
                     #../../../../../../../../../../            
                     '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/15Jul2016_Run2016D_PromptReco_repro/WgStarsel__hadd__ICHEPjson__EpTCorr/latino_Run2016D_PromptReco_SingleElectron.root', 
                     #../../../../../../../../../../            
                     '../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/26Jul2016_Run2016D_PromptReco_repro/WgStarsel__hadd__ICHEPjson__EpTCorr/latino_Run2016D_PromptReco_SingleElectron.root', 
                     #
                     #
                                ] ,     
                       #'weight' : 'trigger',
                       #'weight' : '1',
                       'weight' : 'std_vector_trigger[0]',
                       #'weights' : [
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##
                                   #'std_vector_trigger[8]  || std_vector_trigger[6]',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) &&  (std_vector_trigger[13] || std_vector_trigger[11])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) &&  (std_vector_trigger[42] || std_vector_trigger[43])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) &&  (std_vector_trigger[46])',
                                   #'!(std_vector_trigger[8]  || std_vector_trigger[6]) && !(std_vector_trigger[13] || std_vector_trigger[11]) && !(std_vector_trigger[42] || std_vector_trigger[43]) && !(std_vector_trigger[46])  && (std_vector_trigger[0] || std_vector_trigger[56])',
                                   ##                         
                         #],

                       'isData': ['all'],                            
                  }





























