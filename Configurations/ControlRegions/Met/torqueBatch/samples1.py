# samples

#samples = {}


#samples['DYnoFix']  = {    'name': [
#                            #'latino_DYJetsToLL_M-10to50.root',
#                            #'latino_DYJetsToLL_M-10to50ext3.root',
#                            #
#                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
#                            'latino_DYJetsToLL_M-10to50.root',
#                            'latino_DYJetsToLL_M-50_0000__part0.root',
#                            'latino_DYJetsToLL_M-50_0000__part1.root',
#                            'latino_DYJetsToLL_M-50_0000__part2.root',
#                            'latino_DYJetsToLL_M-50_0000__part3.root',
#                            'latino_DYJetsToLL_M-50_0000__part4.root',
#                            'latino_DYJetsToLL_M-50_0001__part0.root',
#                            'latino_DYJetsToLL_M-50_0001__part1.root',
#                            'latino_DYJetsToLL_M-50_0001__part2.root',
#                            'latino_DYJetsToLL_M-50_0001__part3.root',
#                            'latino_DYJetsToLL_M-50_0001__part4.root',
#                            'latino_DYJetsToLL_M-50_0002__part0.root',
#                            ],    
#                      #'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
#                      'weight' : 'baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
#                   }
#

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
                      #'weight' : 'baseW*bPogSF*puW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*((abs(std_vector_lepton_flavour[0]) == 11 ) + (abs(std_vector_lepton_flavour[0]) == 13 ) * (0.992739 + 0.00152678 * std_vector_lepton_eta[0] + 0.00402821 * std_vector_lepton_eta[0]*std_vector_lepton_eta[0] -0.000557167 * std_vector_lepton_eta[0]*std_vector_lepton_eta[0]*std_vector_lepton_eta[0] - 0.00133539 *std_vector_lepton_eta[0]*std_vector_lepton_eta[0]*std_vector_lepton_eta[0]*std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) == 11 ) + (abs(std_vector_lepton_flavour[1]) == 13 ) * (0.992739 + 0.00152678 * std_vector_lepton_eta[1] + 0.00402821 * std_vector_lepton_eta[1]*std_vector_lepton_eta[1] -0.000557167 * std_vector_lepton_eta[1]*std_vector_lepton_eta[1]*std_vector_lepton_eta[1] - 0.00133539 *std_vector_lepton_eta[1]*std_vector_lepton_eta[1]*std_vector_lepton_eta[1]*std_vector_lepton_eta[1]))*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                      'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                      #'weight' : 'puW*baseW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-12.5151)/5.51582)))*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[0]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',  
                   }


# samples

#samples = {}



#samples['DY']  = {    'name': [
#                            #'latino_DYJetsToLL_M-10to50.root',
#                            #'latino_DYJetsToLL_M-10to50ext3.root',
#                            #
#                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
#                            'latino_DYJetsToLL_M-10to50.root',
#                            'latino_DYJetsToLL_M-50_0000__part0.root',
#                            'latino_DYJetsToLL_M-50_0000__part1.root',
#                            'latino_DYJetsToLL_M-50_0000__part2.root',
#                            'latino_DYJetsToLL_M-50_0000__part3.root',
#                            'latino_DYJetsToLL_M-50_0000__part4.root',
#                            'latino_DYJetsToLL_M-50_0001__part0.root',
#                            'latino_DYJetsToLL_M-50_0001__part1.root',
#                            'latino_DYJetsToLL_M-50_0001__part2.root',
#                            'latino_DYJetsToLL_M-50_0001__part3.root',
#                            'latino_DYJetsToLL_M-50_0001__part4.root',
#                            'latino_DYJetsToLL_M-50_0002__part0.root',
#                            ],    
#                      #'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
#                      'weight' : 'baseW*puW*(1.08683 * (0.95 - 0.0657370*TMath::Erf((x-12.5151)/5.51582)))*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
#                   }
#
#
