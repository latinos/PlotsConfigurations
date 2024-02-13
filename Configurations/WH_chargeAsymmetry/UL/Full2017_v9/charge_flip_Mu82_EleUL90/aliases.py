import os
import copy
import inspect

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/Full2017_v9/charge_flip_Mu82_EleUL90

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # charge_flip_Mu82_EleUL90
configurations = os.path.dirname(configurations) # Full2017_v9
configurations = os.path.dirname(configurations) # UL
configurations = os.path.dirname(configurations) # WH_chargeAsymmetry
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}
mc     = [skey for skey in samples if skey not in ('Fake', 'DATA', 'Dyemb')]
mc_emb = [skey for skey in samples if skey not in ('Fake', 'DATA')]

# LepCut2l__ele_mvaFall17V2Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80
eleWP = 'mvaFall17V2Iso_WP90_tthmva_70'
muWP  = 'cut_Tight_HWWW_tthmva_80'

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight_HWWW*\
             ( (abs(Lepton_pdgId[0])==11 || Muon_mvaTTH[Lepton_muonIdx[0]]>0.82) && (abs(Lepton_pdgId[1])==11 || Muon_mvaTTH[Lepton_muonIdx[1]]>0.82) \
            && (abs(Lepton_pdgId[0])==13 || Lepton_mvaTTH_UL[0]>0.90)            && (abs(Lepton_pdgId[1])==13 || Lepton_mvaTTH_UL[1]>0.90) )',
    'samples': mc_emb + ['DATA']
}

# # aliases['LepWPCut'] = {
# #     'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP,
# #     'samples': mc_emb + ['DATA']
# # }

aliases['LepWPSF'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc_emb
}

# # Fake leptons transfer factor
# aliases['fakeW'] = {
#     'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
#     'class'      : 'fake_rate_reader',
#     'args'       : ('2017', '90', '82', 0.90, 0.82, 'nominal', 2),
#     'samples'    : ['Fake']
# }
# # aliases['fakeW'] = {
# #     'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP,
# #     'samples': ['Fake']
# # }

# # And variations - already divided by central values in formulas !
# aliases['fakeWEleUp'] = {
#     'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
#     'class'      : 'fake_rate_reader',
#     'args'       : ('2017', '90', '82', 0.90, 0.82, 'EleUp', 2),
#     'samples'    : ['Fake']
# }
# aliases['fakeWEleDown'] = {
#     'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
#     'class'      : 'fake_rate_reader',
#     'args'       : ('2017', '90', '82', 0.90, 0.82, 'EleDown', 2),
#     'samples'    : ['Fake']
# }
# aliases['fakeWMuUp'] = {
#     'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
#     'class'      : 'fake_rate_reader',
#     'args'       : ('2017', '90', '82', 0.90, 0.82, 'MuUp', 2),
#     'samples'    : ['Fake']
# }
# aliases['fakeWMuDown'] = {
#     'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
#     'class'      : 'fake_rate_reader',
#     'args'       : ('2017', '90', '82', 0.90, 0.82, 'MuDown', 2),
#     'samples'    : ['Fake']
# }

# aliases['fakeWStatEleUp'] = {
#     'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
#     'class'      : 'fake_rate_reader',
#     'args'       : ('2017', '90', '82', 0.90, 0.82, 'StatEleUp', 2),
#     'samples'    : ['Fake']
# }
# aliases['fakeWStatEleDown'] = {
#     'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
#     'class'      : 'fake_rate_reader',
#     'args'       : ('2017', '90', '82', 0.90, 0.82, 'StatEleDown', 2),
#     'samples'    : ['Fake']
# }
# aliases['fakeWStatMuUp'] = {
#     'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
#     'class'      : 'fake_rate_reader',
#     'args'       : ('2017', '90', '82', 0.90, 0.82, 'StatMuUp', 2),
#     'samples'    : ['Fake']
# }
# aliases['fakeWStatMuDown'] = {
#     'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
#     'class'      : 'fake_rate_reader',
#     'args'       : ('2017', '90', '82', 0.90, 0.82, 'StatMuDown', 2),
#     'samples'    : ['Fake']
# }

# # # And variations - already divided by central values in formulas !
# # aliases['fakeWEleUp'] = {
# #     'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleUp',
# #     'samples': ['Fake']
# # }
# # aliases['fakeWEleDown'] = {
# #     'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleDown',
# #     'samples': ['Fake']
# # }
# # aliases['fakeWMuUp'] = {
# #     'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuUp',
# #     'samples': ['Fake']
# # }
# # aliases['fakeWMuDown'] = {
# #     'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuDown',
# #     'samples': ['Fake']
# # }
# # aliases['fakeWStatEleUp'] = {
# #     'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleUp',
# #     'samples': ['Fake']
# # }
# # aliases['fakeWStatEleDown'] = {
# #     'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleDown',
# #     'samples': ['Fake']
# # }
# # aliases['fakeWStatMuUp'] = {
# #     'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuUp',
# #     'samples': ['Fake']
# # }
# # aliases['fakeWStatMuDown'] = {
# #     'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuDown',
# #     'samples': ['Fake']
# # }

# # gamma* mass range
# aliases['gstarLow'] = {
#     'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
#     'samples': 'WgS'
# }

# aliases['gstarHigh'] = {
#     'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
#     'samples': 'WZ'
# }

# # No jet with pt > 30 GeV
# aliases['zeroJet'] = {
#     'expr': 'Alt$(CleanJet_pt[0], 0) < 30.'
# }

# aliases['oneJet'] = {
#     'expr': 'Alt$(CleanJet_pt[0], 0) > 30.'
# }

# aliases['multiJet'] = {
#     'expr': 'Alt$(CleanJet_pt[1], 0) > 30.'
# }

# ####################################################################################
# # b tagging WPs: https://twiki.cern.ch/twiki/bin/view/CMS/BtagRecommendation106XUL17
# ####################################################################################

# # DeepB = DeepCSV
# bWP_loose_deepB  = '0.1355'
# bWP_medium_deepB = '0.4506' 
# bWP_tight_deepB  = '0.7738'

# # DeepFlavB = DeepJet
# bWP_loose_deepFlavB  = '0.0532'
# bWP_medium_deepFlavB = '0.3040'
# bWP_tight_deepFlavB  = '0.7476'

# # Actual algo and WP definition. BE CONSISTENT!!
# bAlgo = 'DeepB'         # ['DeepB',        'DeepFlavB'         ]
# bWP   = bWP_loose_deepB # [bWP_loose_deepB, bWP_loose_deepFlavB]
# bSF   = 'deepcsv'       # ['deepcsv',      'deepjet'           ]

# # b veto
# aliases['bVeto'] = {
#     'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btag{}[CleanJet_jetIdx] > {}) == 0'.format(bAlgo, bWP)
# }

# aliases['bVetoSF'] = {
#     'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_{}_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))'.format(bSF),
#     'samples': mc
# }

# # At least one b-tagged jet
# aliases['bReq'] = {
#     'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btag{}[CleanJet_jetIdx] > {}) >= 1'.format(bAlgo, bWP)
# }

# aliases['bReqSF'] = {
#     'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_{}_shape[CleanJet_jetIdx]+1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))'.format(bSF),
#     'samples': mc
# }

# # Top control region
# aliases['topcr'] = {
#     'expr': 'mtw2>30 && mll>50 && ((zeroJet && !bVeto) || bReq)'
# }

# # WW control region
# aliases['wwcr'] = {
#     'expr': 'mth>60 && mtw2>30 && mll>100 && bVeto'
# }

# # Overall b tag SF
# aliases['btagSF'] = {
#     'expr': '(bVeto || (topcr && zeroJet))*bVetoSF + (topcr && !zeroJet)*bReqSF',
#     'samples': mc
# }

# for shift in ['jes', 'lf', 'hf', 'lfstats1', 'lfstats2', 'hfstats1', 'hfstats2', 'cferr1', 'cferr2']:
#     for targ in ['bVeto', 'bReq']:
#         alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
#         alias['expr'] = alias['expr'].replace('btagSF_{}_shape'.format(bSF), 'btagSF_{}_shape_up_{}'.format(bSF, shift))

#         alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
#         alias['expr'] = alias['expr'].replace('btagSF_{}_shape'.format(bSF), 'btagSF_{}_shape_down_{}'.format(bSF, shift))

#     aliases['btagSF%sup' % shift] = {
#         'expr': aliases['btagSF']['expr'].replace('SF', 'SF' + shift + 'up'),
#         'samples': mc
#     }

#     aliases['btagSF%sdown' % shift] = {
#         'expr': aliases['btagSF']['expr'].replace('SF', 'SF' + shift + 'down'),
#         'samples': mc
#     }

# ####################################################################################
# # End of b tagging pippone
# ####################################################################################


# aliases['gstarLow'] = {
#     'expr': 'Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 4',
#     'samples': 'WgS'
# }

# aliases['gstarHigh'] = {
#     'expr': 'Gen_ZGstar_mass < 0 || Gen_ZGstar_mass > 4',
#     'samples': 'WZ'
# }

# aliases['embedtotal'] = {
#     'expr': 'embed_total_mva16',  # wrt. eleWP
#     'samples': 'Dyemb'
# }


# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}

# aliases['Top_pTrw'] = {
#     'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) + (topGenPt * antitopGenPt <= 0.)',
#     'samples': ['top']
# }


# ##### DY Z pT reweighting
# aliases['nCleanGenJet'] = {
#     'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')],
#     'class': 'CountGenJet',
#     'samples': mc
# }

# aliases['getGenZpt_OTF'] = {
#     'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/patches/getGenZpt.cc+' % os.getenv('CMSSW_BASE')],
#     'class': 'getGenZpt',
#     'samples': ['DY']
# }
# handle = open('%s/src/PlotsConfigurations/Configurations/patches/DYrew30.py' % os.getenv('CMSSW_BASE'),'r')
# exec(handle)
# handle.close()
# aliases['DY_NLO_pTllrw'] = {
#     'expr': '('+DYrew['2016']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
#     'samples': ['DY']
# }
# aliases['DY_LO_pTllrw'] = {
#     'expr': '('+DYrew['2016']['LO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
#     'samples': ['DY']
# }


# Jet bins
# using Alt$(CleanJet_pt[n], 0) instead of Sum$(CleanJet_pt >= 30) because jet pt ordering is not strictly followed in JES-varied samples

# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2l', 'LepWPCut', 'LepWPSF','PrefireWeight','Jet_PUIDSF_loose']),
    'samples': mc
}

# # variations
# aliases['SFweightEleUp'] = {
#     'expr': 'LepSF2l__ele_'+eleWP+'__Up',
#     'samples': mc_emb
# }
# aliases['SFweightEleDown'] = {
#     'expr': 'LepSF2l__ele_'+eleWP+'__Do',
#     'samples': mc_emb
# }
# aliases['SFweightMuUp'] = {
#     'expr': 'LepSF2l__mu_'+muWP+'__Up',
#     'samples': mc_emb
# }
# aliases['SFweightMuDown'] = {
#     'expr': 'LepSF2l__mu_'+muWP+'__Do',
#     'samples': mc_emb
# }

# # TriggerSFWeight_2l:TriggerSFWeight_2l_u:TriggerSFWeight_2l_d
# aliases['SFtriggUp'] = {
#     'expr': 'TriggerSFWeight_2l_u/TriggerSFWeight_2l',
#     'samples': mc_emb
# }
# aliases['SFtriggDown'] = {
#     'expr': 'TriggerSFWeight_2l_d/TriggerSFWeight_2l',
#     'samples': mc_emb
# }


# # In WpWmJJ_EWK events, partons [0] and [1] are always the decay products of the first W
# aliases['lhe_mW1'] = {
#     'expr': 'TMath::Sqrt(2. * LHEPart_pt[0] * LHEPart_pt[1] * (TMath::CosH(LHEPart_eta[0] - LHEPart_eta[1]) - TMath::Cos(LHEPart_phi[0] - LHEPart_phi[1])))',
#     'samples': ['WWewk']
# }

# # and [2] [3] are the second W
# aliases['lhe_mW2'] = {
#     'expr': 'TMath::Sqrt(2. * LHEPart_pt[2] * LHEPart_pt[3] * (TMath::CosH(LHEPart_eta[2] - LHEPart_eta[3]) - TMath::Cos(LHEPart_phi[2] - LHEPart_phi[3])))',
#     'samples': ['WWewk']
# }

# ### BDT on-the-fly
# aliases['BDT_SS_v7'] = {
#     'class': 'BDT_v7_noCorrelatedVariables',
#     'linesToAdd' : ['.L %s/WH_chargeAsymmetry/WHSS/Full2018_v7/macros/BDT_v7_noCorrelatedVariables.C+' % configurations],
# }

########################
### Charge misid SFs ###
########################

aliases['ttHMVA_SF_flip_2l'] = {
    'linesToAdd': ['.L %s/WH_chargeAsymmetry/UL/macros/flipper.C+' % configurations],
    'class': 'flipper',
    'args' : ('UL_2017', 2, 'Total_SF', 'false'),
    'samples': ['DY','DY_LO']
}

# aliases['ttHMVA_SF_err_flip_2l'] = {
#     'linesToAdd': ['.L %s/macros/flipper.C+' % configurations],
#     'class': 'flipper',
#     'args' : ('2017', 2, 'Total_SF_err', 'false'),
#     'samples': ['DY','WW','top']
# }

##################################
### Charge misid probabilities ###
##################################

aliases['ttHMVA_eff_flip_2l'] = {
    'linesToAdd': ['.L %s/WH_chargeAsymmetry/UL/macros/flipper_eff.C+' % configurations],
    'class': 'flipper_eff',
    'args' : ('UL_2017', 2, 'Total_SF', 'false'),
    'samples': ['DY','DY_LO']
}

# aliases['ttHMVA_eff_err_flip_2l'] = {
#     'linesToAdd': ['.L %s/macros/flipper_eff.C+' % configurations],
#     'class': 'flipper_eff',
#     'args' : ('2017', 2, 'Total_SF_err'),
#     'samples': ['DY_OS']
# }
