import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2017_v6
configurations = os.path.dirname(configurations) # ggH
configurations = os.path.dirname(configurations) # Configurations
configurations = os.path.dirname(configurations)
#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

eleWP='mvaFall17V1Iso_WP90'
muWP='cut_Tight_HWWW'
newMuWP='cut_Tight_HWWW_tthmva_80'

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP+'*( (abs(Lepton_pdgId[0])==11 || Muon_mvaTTH[Lepton_muonIdx[0]]>0.8) && (abs(Lepton_pdgId[1])==11 || Muon_mvaTTH[Lepton_muonIdx[1]]>0.8) )',
    'samples': mc + ['DATA']
}

aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
    'samples': 'VgS'
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': 'VgS'
}

# Fake leptons transfer factor
aliases['fakeW'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP,
    'samples': ['Fake']
}
# And variations - already divided by central values in formulas !
aliases['fakeWEleUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_EleUp',
    'samples': ['Fake']
}
aliases['fakeWEleDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_EleDown',
    'samples': ['Fake']
}
aliases['fakeWMuUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_MuUp',
    'samples': ['Fake']
}
aliases['fakeWMuDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_MuDown',
    'samples': ['Fake']
}
aliases['fakeWStatEleUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_statEleUp',
    'samples': ['Fake']
}
aliases['fakeWStatEleDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_statEleDown',
    'samples': ['Fake']
}
aliases['fakeWStatMuUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_statMuUp',
    'samples': ['Fake']
}
aliases['fakeWStatMuDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_statMuDown',
    'samples': ['Fake']
}

# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}

aliases['Top_pTrw'] = {
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPt) * TMath::Exp(0.0615 - 0.0005 * antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)',
    'samples': ['top']
}

# Jet bins
# using Alt$(CleanJet_pt[n], 0) instead of Sum$(CleanJet_pt >= 30) because jet pt ordering is not strictly followed in JES-varied samples

# No jet with pt > 30 GeV
aliases['zeroJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) < 30.'
}

aliases['oneJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) > 30.'
}

aliases['multiJet'] = {
    'expr': 'Alt$(CleanJet_pt[1], 0) > 30.'
}

puidSFSource = '%s/src/LatinoAnalysis/NanoGardener/python/data/JetPUID_effcyandSF.root' % os.getenv('CMSSW_BASE')

aliases['PUJetIdSF'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/patches/pujetidsf_event.cc+' % configurations
    ],
    'class': 'PUJetIdEventSF',
    'args': (puidSFSource, '2017', 'loose'),
    'samples': mc
}

############################################
### Total SFs, i.e. ttHMVA+old lepton SFs ###
#############################################

aliases['ttHMVA_SF_2l'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                           'class': 'compute_SF',
                           'args' : ('2017', 2, 'total_SF'),
                           'samples': mc
                          }

# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2l', 'ttHMVA_SF_2l', 'LepWPCut', 'PrefireWeight','PUJetIdSF']),
    'samples': mc
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

###########################################################
### Up/Down variations for single leptons in order of Pt ###
############################################################

aliases['ttHMVA_SF_Up_0'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                             'class': 'compute_SF',
                             'args' : ('2017', 2, 'single_SF_up', 0),
                             'samples': mc
                            }

aliases['ttHMVA_SF_Up_1'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                             'class': 'compute_SF',
                             'args' : ('2017', 2, 'single_SF_up', 1),
                             'samples': mc
                            }

aliases['ttHMVA_SF_Down_0'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                               'class': 'compute_SF',
                               'args' : ('2017', 2, 'single_SF_down', 0),
                               'samples': mc
                              }

aliases['ttHMVA_SF_Down_1'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                               'class': 'compute_SF',
                               'args' : ('2017', 2, 'single_SF_down', 1),
                               'samples': mc
                              }

aliases['ttHMVA_2l_mu_SF_Up'] = {'expr' : '(ttHMVA_SF_Up_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                           (ttHMVA_SF_Up_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11))',
                                 'samples': mc
                                }

aliases['ttHMVA_2l_mu_SF_Down'] = {'expr' : '(ttHMVA_SF_Down_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                             (ttHMVA_SF_Down_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11))',
                                   'samples': mc
                                  }

