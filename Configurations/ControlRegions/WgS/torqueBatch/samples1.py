# samples

#samples = {}

samples['DY']  = {    'name': [
                            #'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-10to50ext3.root',
                            #
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-10to50.root',
                            '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part0.root',
                            '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part1.root',
                            '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part2.root',
                            '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part3.root',
                            '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0000__part4.root',
                            '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part0.root',
                            '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part1.root',
                            '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part2.root',
                            '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part3.root',
                            '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0001__part4.root',
                            '07Jun2016_spring16_mAODv2/MCWgStarsel__hadd__EpTCorr/latino_DYJetsToLL_M-50_0002__part0.root',
                            ],    
                      #'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      'weight' : 'baseW*puW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*GEN_weight_SM/abs(GEN_weight_SM)',  
                   }

