import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018_v7
configurations = os.path.dirname(configurations) # BDTconfig
configurations = os.path.dirname(configurations) # WH3l
configurations = os.path.dirname(configurations) # WH_chargeAsymmetry
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

eleWP = 'mvaFall17V1Iso_WP90'
muWP = 'cut_Tight_HWWW'

aliases['LepWPCut'] = {
    'expr': 'LepCut3l__ele_'+eleWP+'__mu_'+muWP+'*(((abs(Lepton_pdgId[0])==13 && Muon_mvaTTH[Lepton_muonIdx[0]]>0.8) || (abs(Lepton_pdgId[0])==11 && Electron_mvaTTH[Lepton_electronIdx[0]]>0.7)) && ((abs(Lepton_pdgId[1])==13 && Muon_mvaTTH[Lepton_muonIdx[1]]>0.8) || (abs(Lepton_pdgId[1])==11 && Electron_mvaTTH[Lepton_electronIdx[1]]>0.7)) && ((abs(Lepton_pdgId[2])==13 && Muon_mvaTTH[Lepton_muonIdx[2]]>0.8) || (abs(Lepton_pdgId[2])==11 && Electron_mvaTTH[Lepton_electronIdx[2]]>0.7)))',
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
eleFWP = 'mvaFall17V1Iso_WP90_tthmva_70'
muFWP = 'cut_Tight_HWWW_tthmva_80'

# gen-matching to prompt only (GenLepMatch3l matches to *any* gen lepton)
aliases['PromptGenLepMatch3l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1]*Lepton_promptgenmatched[2], 0)',
    'samples': mc
}

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'CountGenJet',
    'samples': mc
}


#######################
### SFs for tthMVA  ###
#######################

# aliases['bVetoSF'] = {
#     'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))',
#     'samples': mc
# }

# aliases['bVeto'] = {
#     'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.4184) == 0'
# }

# aliases['btagSF'] = {
#     'expr': 'bVetoSF*bVeto',
#     'samples': mc
# }

aliases['ttHMVA_SF_3l'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/patches/compute_SF_BETA.C+' % os.getenv('CMSSW_BASE')],
    'class': 'compute_SF',
    'args' : ('2018', 3, 'total_SF'),
    'samples': mc
}

aliases['SFweight3l_noTrigg'] = {
    'expr': ' * '.join(['puWeight','Alt$(Lepton_RecoSF[0],0)','Alt$(Lepton_RecoSF[1],0)','Alt$(Lepton_RecoSF[2],0)','EMTFbug_veto']),
    'samples': mc
}

# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight3l_noTrigg', 'ttHMVA_SF_3l' , 'LepWPCut']),
    # 'expr': ' * '.join(['SFweight3l_noTrigg', 'ttHMVA_SF_3l' , 'LepWPCut', 'btagSF']),
    'samples': mc
}


