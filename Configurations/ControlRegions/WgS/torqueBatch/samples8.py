
# Htautau
samples['H_htt']  = {      'name': ['07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_GluGluHToTauTau_M125.root',
                                    '07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight/latino_VBFHToTauTau_M125.root'
                                    #'latino_HWminusJ_HToTauTau_M125.root',
                                    #'latino_HWplusJ_HToTauTau_M125.root',
                                    #'latino_HZJ_HToTauTau_M125.root'
                                    ],      
                           'weight' : 'puW*baseW*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',         
                           'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
                  }

