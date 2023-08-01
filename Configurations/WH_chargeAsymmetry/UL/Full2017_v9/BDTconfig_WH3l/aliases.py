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

# LepCut2l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight_HWWW
eleWP = 'mvaFall17V2Iso_WP90'
muWP  = 'cut_Tight_HWWW'

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight_HWWW*\
     ( ((abs(Lepton_pdgId[0])==13 && Muon_mvaTTH[Lepton_muonIdx[0]]>0.82) || (abs(Lepton_pdgId[0])==11 && Lepton_mvaTTH_UL[0]>0.90)) \
    && ((abs(Lepton_pdgId[1])==13 && Muon_mvaTTH[Lepton_muonIdx[1]]>0.82) || (abs(Lepton_pdgId[1])==11 && Lepton_mvaTTH_UL[1]>0.90)) \
    && ((abs(Lepton_pdgId[2])==13 && Muon_mvaTTH[Lepton_muonIdx[2]]>0.82) || (abs(Lepton_pdgId[2])==11 && Lepton_mvaTTH_UL[2]>0.90)) )',
    'samples': mc_emb + ['DATA']
}

# Lepton SF (not considering the ttHMVA discriminant)
aliases['LepWPSF'] = {
    'expr': 'LepSF3l__ele_' + eleWP + '__mu_' + muWP,
    'samples': mc
}

# ttHMVA SFs
aliases['LepWPttHMVASF'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/ttHMVASF.C+' % configurations],
    'class'      : 'ttHMVASF',
    'args'       : ("2018", 3, "all", "nominal"),
    'samples'    : mc_emb
}

aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
    'samples': 'VgS'
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': 'VgS'
}

# gen-matching to prompt only (GenLepMatch3l matches to *any* gen lepton)
aliases['PromptGenLepMatch3l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1]*Lepton_promptgenmatched[2], 0)',
    'samples': mc
}

# aliases['nCleanGenJet'] = {
#     'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')
#     ],
#     'class': 'CountGenJet',
#     'samples': mc
# }


# #######################
# ### SFs for tthMVA  ###
# #######################

# aliases['ttHMVA_SF_3l'] = {
#     'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/patches/compute_SF_BETA.C+' % os.getenv('CMSSW_BASE')],
#     'class': 'compute_SF',
#     'args' : ('2018', 3, 'total_SF'),
#     'samples': mc
# }

# aliases['SFweight3l_noTrigg'] = {
#     'expr': ' * '.join(['puWeight','Alt$(Lepton_RecoSF[0],0)','Alt$(Lepton_RecoSF[1],0)','Alt$(Lepton_RecoSF[2],0)','EMTFbug_veto']),
#     'samples': mc
# }

# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight3l', 'LepWPCut', 'LepWPSF', 'Jet_PUIDSF_loose', 'LepWPttHMVASF']),
    'samples': mc
}


