import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2016_nanoAODv4_CR
configurations = os.path.dirname(configurations) # ggH
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

#mc = [skey for skey in samples if skey not in ('Fakes', 'DATA')]
mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]


bAlgo = 'DeepB'
bWP = '0.1241'

eleWP_old='mvaFall17V1Iso_WP90'
muWP_old='cut_Tight_HWWW'

eleWP = 'mvaFall17V1Iso_WP90_tthmva_70'
muWP = 'cut_Tight_HWWW_tthmva_80'

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW*( (abs(Lepton_pdgId[0])==11 || Muon_mvaTTH[Lepton_muonIdx[0]]>0.8) && (abs(Lepton_pdgId[1])==11 || Muon_mvaTTH[Lepton_muonIdx[1]]>0.8) && (abs(Lepton_pdgId[0])==13 || Electron_mvaTTH[Lepton_electronIdx[0]]>0.70) && (abs(Lepton_pdgId[1])==13 || Electron_mvaTTH[Lepton_electronIdx[1]]>0.70))',
    'samples': mc + ['DATA']
}

aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
    'samples': 'WgS'
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': 'WZ'
}

aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}

aliases['fakeW'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP,
    'samples': ['Fake']
}

# And variations - already divided by central values in formulas !
aliases['fakeWEleUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleUp',
    'samples': ['Fake']
}   
aliases['fakeWEleDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleDown',
    'samples': ['Fake']
}   
aliases['fakeWMuUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuUp',
    'samples': ['Fake']
}   
aliases['fakeWMuDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuDown',
    'samples': ['Fake']
}   
aliases['fakeWStatEleUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleUp',
    'samples': ['Fake']
}
aliases['fakeWStatEleDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleDown',
    'samples': ['Fake']
}
aliases['fakeWStatMuUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuUp',
    'samples': ['Fake']
}
aliases['fakeWStatMuDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuDown',
    'samples': ['Fake']
}

# variations
aliases['SFweightEleUp'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__Up',
    'samples': mc
}
aliases['SFweightEleDown'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__Do',
    'samples': mc
}
aliases['SFweightMuUp'] = {
    'expr': 'LepSF2l__mu_'+muWP+'__Up',
    'samples': mc
}
aliases['SFweightMuDown'] = {
    'expr': 'LepSF2l__mu_'+muWP+'__Do',
    'samples': mc
}

# No jet with pt > 30 GeV
aliases['zeroJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) < 30.'
}

# ==1 jet with pt > 30 GeV
aliases['oneJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) >= 30. && Alt$(CleanJet_pt[1], 0) < 30.'
}

# ==2 jets with pt > 30 GeV
aliases['twoJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) >= 30. && Alt$(CleanJet_pt[1], 0) >= 30. && Alt$(CleanJet_pt[2], 0) < 30.'
}

# >=2 jets with pt > 30 GeV
aliases['twoJetOrMore'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) >= 30. && Alt$(CleanJet_pt[1], 0) >= 30.'
}


aliases['bVeto'] = {
    'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1241) == 0'
}

aliases['bReq'] = {
    'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1241) >= 1'
}

aliases['btag0'] = {
    'expr': 'zeroJet && !bVeto'
}

aliases['btag1'] = {
    'expr': 'oneJet && bReq'
}

aliases['btag2'] = {
    'expr': 'twoJet && bReq'
}

aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btag0SF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && CleanJet_pt<30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || CleanJet_pt>30 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btagnSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx] + (CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btagSF'] = {
    'expr': 'bVetoSF*bVeto',
    'samples': mc
}

for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:

    for targ in ['bVeto', 'bReq']:
        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_shape', 'btagSF_shape_up_%s' % shift)

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_shape', 'btagSF_shape_down_%s' % shift)

    aliases['btagSF%sup' % shift] = {
        'expr': aliases['btagSF']['expr'].replace('SF', 'SF' + shift + 'up'),
        'samples': mc
    }

    aliases['btagSF%sdown' % shift] = {
        'expr': aliases['btagSF']['expr'].replace('SF', 'SF' + shift + 'down'),
        'samples': mc
    }

# PostProcessing did not create (anti)topGenPt for ST samples with _ext1
lastcopy = (1 << 13)

aliases['isTTbar'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 2' % lastcopy,
    'samples': ['top']
}

aliases['isSingleTop'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 1' % lastcopy,
    'samples': ['top']
}

aliases['topGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == 6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
    'samples': ['top']
}

aliases['antitopGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == -6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
    'samples': ['top']
}

aliases['Top_pTrw'] = {
    'expr': 'isTTbar * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPtOTF) * TMath::Exp(0.0615 - 0.0005 * antitopGenPtOTF))) + isSingleTop',
    'samples': ['top']
}

aliases['ZH3l_dphilmetjj_test'] = {
    'linesToAdd': [
        '.L %s/src/PlotsConfigurations/Configurations/ZH3l/scripts/ZH3l_patch.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'ZH3l_patch',
    'args': ("dphilmetjj")
}

aliases['ZH3l_dphilmetj_test'] = {
    'class': 'ZH3l_patch',
    'args': ("dphilmetj")
}

# PU jet Id SF

puidSFSource = '%s/src/LatinoAnalysis/NanoGardener/python/data/JetPUID_effcyandSF.root' % os.getenv('CMSSW_BASE')

aliases['PUJetIdSF'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/patches/pujetidsf_event.cc+' % configurations
    ],
    'class': 'PUJetIdEventSF',
    'args': (puidSFSource, '2018', 'loose'),
    'samples': mc
}

# data/MC scale factors
#aliases['SFweight'] = {
#    'expr': ' * '.join(['SFweight2l', 'LepSF2l__ele_' + eleWP_old + '__mu_' + muWP_old, 'LepWPCut', 'btagSF','PUJetIdSF']),
#    'samples': mc
#}
# variations
aliases['SFweightEleUp'] = {
    'expr': 'LepSF2l__ele_'+eleWP_old+'__Up',
    'samples': mc
}
aliases['SFweightEleDown'] = {
    'expr': 'LepSF2l__ele_'+eleWP_old+'__Do',
    'samples': mc
}
aliases['SFweightMuUp'] = {
    'expr': 'LepSF2l__mu_'+muWP_old+'__Up',
    'samples': mc
}
aliases['SFweightMuDown'] = {
    'expr': 'LepSF2l__mu_'+muWP_old+'__Do',
    'samples': mc
}

#############################################
### Total SFs, i.e. ttHMVA+old lepton SFs ###
#############################################

aliases['ttHMVA_SF_2l'] = {'linesToAdd': ['.L %s/patches/compute_SF_BETA.C+' % configurations],
                           'class': 'compute_SF',
                           'args' : ('2018', 2, 'total_SF'),
                           'samples': mc
                          }


############################################################
### Up/Down variations for single leptons in order of Pt ###
############################################################

aliases['ttHMVA_SF_Up_0'] = {'linesToAdd': ['.L %s/patches/compute_SF_BETA.C+' % configurations],
                             'class': 'compute_SF',
                             'args' : ('2018', 4, 'single_SF_up', 0),
                             'samples': mc
                            }

aliases['ttHMVA_SF_Up_1'] = {'linesToAdd': ['.L %s/patches/compute_SF_BETA.C+' % configurations],
                             'class': 'compute_SF',
                             'args' : ('2018', 4, 'single_SF_up', 1),
                             'samples': mc
                            }

aliases['ttHMVA_SF_Down_0'] = {'linesToAdd': ['.L %s/patches/compute_SF_BETA.C+' % configurations],
                               'class': 'compute_SF',
                               'args' : ('2018', 4, 'single_SF_down', 0),
                               'samples': mc
                              }

aliases['ttHMVA_SF_Down_1'] = {'linesToAdd': ['.L %s/patches/compute_SF_BETA.C+' % configurations],
                               'class': 'compute_SF',
                               'args' : ('2018', 4, 'single_SF_down', 1),
                               'samples': mc
                              }

##############################################################################
### Up/Down variations for electrons, i.e. LepSF2l__ele_'+eleWP+'__Up/Down ###
##############################################################################

aliases['ttHMVA_2l_ele_SF_Up'] = {'expr' : '(ttHMVA_SF_Up_0*(TMath::Abs(Lepton_pdgId[0]) == 11) + (TMath::Abs(Lepton_pdgId[0]) == 13)) *\
                                            (ttHMVA_SF_Up_1*(TMath::Abs(Lepton_pdgId[1]) == 11) + (TMath::Abs(Lepton_pdgId[1]) == 13))',
                                  'samples': mc
                                 }

aliases['ttHMVA_2l_ele_SF_Down'] = {'expr' : '(ttHMVA_SF_Down_0*(TMath::Abs(Lepton_pdgId[0]) == 11) + (TMath::Abs(Lepton_pdgId[0]) == 13)) *\
                                              (ttHMVA_SF_Down_1*(TMath::Abs(Lepton_pdgId[1]) == 11) + (TMath::Abs(Lepton_pdgId[1]) == 13))',
                                  'samples': mc
                                   }

########################################################################
### Up/Down variations for muons, i.e. LepSF2l__mu_'+muWP+'__Up/Down ###
########################################################################

aliases['ttHMVA_2l_mu_SF_Up'] = {'expr' : '(ttHMVA_SF_Up_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                           (ttHMVA_SF_Up_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11))',
                                  'samples': mc
                                }

aliases['ttHMVA_2l_mu_SF_Down'] = {'expr' : '(ttHMVA_SF_Down_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                             (ttHMVA_SF_Down_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11))',
                                  'samples': mc
                                  }

# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2l', 'ttHMVA_SF_2l', 'LepWPCut', 'btagSF','PUJetIdSF']),
    'samples': mc
}
