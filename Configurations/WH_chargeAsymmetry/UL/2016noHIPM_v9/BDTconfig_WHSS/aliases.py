import os
import copy
import inspect

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/2016noHIPM_v9/BDTconfig_WHSS

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # BDTconfig_WHSS
configurations = os.path.dirname(configurations) # 2016noHIPM_v9
configurations = os.path.dirname(configurations) # UL
configurations = os.path.dirname(configurations) # WH_chargeAsymmetry
configurations = os.path.dirname(configurations) # Configurations


# aliases = {}
mc     = [skey for skey in samples if skey not in ('Fake', 'DATA', 'Dyemb')]
mc_emb = [skey for skey in samples if skey not in ('Fake', 'DATA')]


# LepCut2l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight_HWWW
eleWP = 'mvaFall17V2Iso_WP90'
muWP  = 'cut_Tight80x'

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight80x*\
     ( ((abs(Lepton_pdgId[0])==13 && Muon_mvaTTH[Lepton_muonIdx[0]]>0.82) || (abs(Lepton_pdgId[0])==11 && Lepton_mvaTTH_UL[0]>0.90)) \
    && ((abs(Lepton_pdgId[1])==13 && Muon_mvaTTH[Lepton_muonIdx[1]]>0.82) || (abs(Lepton_pdgId[1])==11 && Lepton_mvaTTH_UL[1]>0.90)) )',
    'samples': mc_emb + ['DATA']
}

# Standard leptons SFs
aliases['LepWPSF'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc_emb
}

# ttHMVA SFs
aliases['LepWPttHMVASF'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/ttHMVASF.C+' % configurations],
    'class'      : 'ttHMVASF',
    'args'       : ("2016noHIPM", 2, "all", "nominal"),
    'samples'    : mc_emb
}

# No jet with pt > 30 GeV
aliases['zeroJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) < 30.'
}

# aliases['oneJet'] = {
#     'expr': 'Alt$(CleanJet_pt[0], 0) > 30.'
# }

# aliases['multiJet'] = {
#     'expr': 'Alt$(CleanJet_pt[1], 0) > 30.'
# }

# ####################################################################################
# # b tagging WPs: https://twiki.cern.ch/twiki/bin/view/CMS/BtagRecommendation106XUL18
# ####################################################################################

# # DeepB = DeepCSV
# bWP_loose_deepB  = '0.1208'
# bWP_medium_deepB = '0.4168' 
# bWP_tight_deepB  = '0.7665'

# # DeepFlavB = DeepJet
# bWP_loose_deepFlavB  = '0.0490'
# bWP_medium_deepFlavB = '0.2783'
# bWP_tight_deepFlavB  = '0.7100'

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

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass < 0 || Gen_ZGstar_mass > 4',
    'samples': 'WZ'
}


# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}


# # PostProcessing did not create (anti)topGenPt for ST samples with _ext1
# lastcopy = (1 << 13)

# aliases['isTTbar'] = {
#     'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 2' % lastcopy,
#     'samples': ['top']
# }

# aliases['isSingleTop'] = {
#     'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 1' % lastcopy,
#     'samples': ['top']
# }

# aliases['Top_pTrw'] = {
#     'expr': 'isTTbar * (topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) + (topGenPt * antitopGenPt <= 0.)',
#     'samples': ['top']
# }


# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2l', 'LepWPCut', 'LepWPSF','Jet_PUIDSF_loose', 'LepWPttHMVASF']),
    'samples': mc
}
