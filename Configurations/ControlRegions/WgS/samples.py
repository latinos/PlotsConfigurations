## samples
#
##samples = {}
## baseW from Jasper
##samples['DY10to50']  = {    'name': [
##                            '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-10to50.root',
##                            ],    
##                      #'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
##                      'weight' : '0.829752445221*puW*GEN_weight_SM/abs(GEN_weight_SM)',  
##                      #'weight' : '0.829752445221*puW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*GEN_weight_SM/abs(GEN_weight_SM)',  
##                   }
##
samples['DY']  = {    'name': [
                            #'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-10to50ext3.root',
                            #
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-10to50.root',
                            '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part0.root',
                            '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part1.root',
                            '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part2.root',
                            '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part3.root',
                            '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part4.root',
                            '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part0.root',
                            '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part1.root',
                            '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part2.root',
                            '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part3.root',
                            '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part4.root',
                            '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0002__part0.root',
                            ],    
                      #'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      #'weight' : 'puW*GEN_weight_SM/abs(GEN_weight_SM)',  
                      'weight' : 'puW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*GEN_weight_SM/abs(GEN_weight_SM)',  
		      'weights' : [
			'0.829752445221',
			'0.318902641535',
			'0.318902641535',
			'0.318902641535',
			'0.318902641535',
			'0.318902641535',
			'0.318902641535',
			'0.318902641535',
			'0.318902641535',
			'0.318902641535',
			'0.318902641535',
			'0.318902641535',
			]
                   }

##
##### data driven
samples['Fake']  = {    'name': [
                      #
		       #'/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleEG.root',
		       #'/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_MuonEG.root',
		       #'/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleMuon.root',
		       '/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleMuon.root',
		       #'/Fakes4fb2016/05Jul2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleElectron.root',
		       #'/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleEG.root',
		       #'/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_MuonEG.root',
		       #'/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleMuon.root',
		       '/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_DoubleMuon.root',
		       #'/Fakes4fb2016/21Jun2016_Run2016B_PromptReco/latino_DD_Run2016B_PromptReco_SingleElectron.root',
                      #
                       ],     
                      #'weight' : 'trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      'weight' : '(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      'isData': ['all'],                             
                  }

           
samples['top'] = {   'name': [
                           #'latino_TTJets.root',
                          #'latino_TTTo2L2Nu.root', 
                           '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_TTTo2L2Nu_ext1__part0.root',
                           '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_TTTo2L2Nu_ext1__part1.root',
                           '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_TTTo2L2Nu_ext1__part2.root',
                           '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_TTTo2L2Nu_ext1__part3.root',
                           '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_TTTo2L2Nu_ext1__part4.root',
                           '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_ST_tW_antitop.root',
                           '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_ST_tW_top.root'
                          ],          
                       'weight' : '0.0043711992912*puW*GEN_weight_SM/abs(GEN_weight_SM)',    #   weight/cut 
                   }

#samples['WJetsLNu'] = {   'name': [
#                           '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_WJetsToLNu.root'
#                          ],          
#                       'weight' : 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)',    #   weight/cut 
#                   }
#
#
samples['WW']  = {    'name': [
                                  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_WWTo2L2Nu.root'
                                ],      
                      'weight' : 'nllW*puW*baseW*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      #'weights': ['abs(nllW)'] ,           
                  }

#
#samples['ggWW']  = {    'name': ['/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_GluGluWWTo2L2Nu_MCFM.root'],      
#                      'weight' : 'puW*baseW',          
#                      #'weights': ['abs(nllW)'] ,           
#                      #'weights': ['1.000'] ,           
#                      'isData': ['0'],                            
#                  }
#
#
#
## during tree production: 1.4 k-factor has been applied to both samples
## ggWW sample: k = 1.4 +/- 15%
## ggWW interference: k = 1.87 +/- 25%
#
#

samples['Vg']  = {    'name': ['/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_Wg_MADGRAPHMLM.root'],      
                     'weight' : 'puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)\
                                 * !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                                ##*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
                     #'weights': ['1'] ,           
                     'isData': ['0'],                            
                 }


#
samples['WgSEE']  = {    'name': [
                             '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WgStarLNuEE.root', 
                             ],      
                      'weight' : 'puW*baseW*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                      #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      'weights': ['1','1'] ,           
                  }

samples['WgSMuMu']  = {    'name': [
                             '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WgStarLNuMuMu.root'
                             ],      
                      'weight' : 'puW*baseW*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
                      #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      'weights': ['1','1'] ,           
                  }

# 
# Wg* scale factor is
#
# 1.98 +/- 0.54    in mumumu
# 2.0  +/- 0.5     in emumu
#
#


#
samples['WZ3LNu']  = {    'name': [
                          #'latino_WZ.root', 
                          '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo3LNu.root', 
                          #'/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_WZ.root', 
                         ], 
                      'weight' : 'puW*baseW',          
                      #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }


samples['WZ2Q']  = {    'name': [
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part0.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part1.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part2.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part3.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part4.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part5.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part6.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part7.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part8.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part9.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part10.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part11.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part12.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part13.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part14.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part15.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part16.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part17.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part18.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part19.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part20.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part21.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part22.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part23.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part24.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part25.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part26.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part27.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part28.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part29.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part30.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part31.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part32.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part33.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part34.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part35.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part36.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part37.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part38.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part39.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part40.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part41.root',
			  '/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/latino_WZTo2L2Q__part42.root',
                         ], 
                      'weight' : 'puW*baseW',          
                      #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }

samples['ZZ']  = {    'name': [
                          #'latino_ZZ.root', # ---> replaced by inclusive samples
                          #'latino_ZZTo2L2Q.root'
                          '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_ZZTo2L2Nu.root',
                          '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_ZZTo2L2Q__part0.root',
                          '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_ZZTo2L2Q__part1.root',
                          '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_ZZTo2L2Q__part3.root',
                          
                          #'latino_ZZTo4L.root'
                         ], 
                      'weight' : 'puW*baseW',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }



samples['VVV'] = {    'name': [
                         '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_WZZ.root', 
                         '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_ZZZ.root',
                         '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_WWW.root',
                         '/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_WWZ.root',
                         ],      
                     'weight' : 'puW*baseW*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                     #'isData': ['0'],                            
                 }

##
### Htautau
##samples['H_htt']  = {      'name': ['/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_GluGluHToTauTau_M125.root',
##                                    '/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_VBFHToTauTau_M125.root'
##                                    #'latino_HWminusJ_HToTauTau_M125.root',
##                                    #'latino_HWplusJ_HToTauTau_M125.root',
##                                    #'latino_HZJ_HToTauTau_M125.root'
##                                    ],      
##                           'weight' : 'puW*baseW*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',         
##                           'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
##                  }
##
##
##
### HWW 
##
##samples['ggH_hww']  = {    'name': [
##                               '/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_GluGluHToWWTo2L2NuPowheg_M125.root'
##                               ],      
##                           'weight' : 'puW*baseW*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
##                  }
##
##samples['qqH_hww']  = {    'name': [
##                               #'latino_VBFHToWWTo2L2Nu_M125.root'
##                               '/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_VBFHToWWTo2L2Nu_alternative_M125.root'
##                               ],      
##                           'weight' : 'puW*baseW*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
##                  }
##
##samples['ggZH_hww']  = {    'name': [
##                               '/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_ggZH_HToWW_M120.root',   # ---> FIXME: to be replaced with 125!
##                               ],      
##                           'weight' : 'puW*baseW*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
##                  }
##
##
###samples['WH_hww']  = {    'name': [
##                             #'latino_HWminusJ_HToWW_M125.root',
##                             #'latino_HWplusJ_HToWW_M125.root'
##                             #],      
##                           #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
##                  #}
##
###samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],      
##                           #'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
##                  #}
##
#

###########################################
###########################################
###########################################


samples['DATA']  = {   'name': [
#                                #
                                #'/21Jun2016_Run2016B_PromptReco/WgStarsel__hadd__EpTCorr/latino_Run2016B_PromptReco_SingleMuon.root', # 2.79/fb
                                '/21Jun2016_Run2016B_PromptReco/WgStarsel__hadd__EpTCorr/latino_Run2016B_PromptReco_DoubleMuon.root', # 2.79/fb
                                #'/21Jun2016_Run2016B_PromptReco/WgStarsel__hadd__EpTCorr/latino_Run2016B_PromptReco_SingleElectron.root', # 2.79/fb
				#'/05Jul2016_Run2016B_PromptReco/WgStarsel__hadd__EpTCorr/latino_Run2016B_PromptReco_SingleMuon.root', # 1.55/fb
				'/05Jul2016_Run2016B_PromptReco/WgStarsel__hadd__EpTCorr/latino_Run2016B_PromptReco_DoubleMuon.root', # 1.55/fb
				#'/05Jul2016_Run2016B_PromptReco/WgStarsel__hadd__EpTCorr/latino_Run2016B_PromptReco_SingleElectron.root', # 1.55/fb

#                                #
                                ] ,     
                       #'weight' : 'trigger',
                       'weight' : '1',
                       #'weight' : 'std_vector_trigger[1]',
                       'isData': ['all'],                            
                  }

