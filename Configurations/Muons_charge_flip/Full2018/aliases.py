import os
import copy
import inspect

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/Full2018_v9/charge_flip_MuTight

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # charge_flip_MuTight
configurations = os.path.dirname(configurations) # Full2018_v9
configurations = os.path.dirname(configurations) # UL
configurations = os.path.dirname(configurations) # WH_chargeAsymmetry
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}
mc     = [skey for skey in samples if skey not in ('Fake', 'DATA', 'Dyemb')]
mc_emb = [skey for skey in samples if skey not in ('Fake', 'DATA')]

# Trigger selection:
aliases['trigger'] = {
    'expr'    : 'HLT_Mu50 == 1 || HLT_OldMu100 == 1 || HLT_TkMu100 == 1',
    'samples' : ['DY', 'DY_LO', 'DATA']
}

# Muon momentum and transverse momentum corrected by TuneP algorithm
aliases['Muon_tuneP_pT_0'] = {
    'expr'    : 'Alt$(Muon_tunepRelPt[0],0)*Alt$(Muon_pt[0],0)',
    'samples' : ['DY', 'DY_LO', 'DATA']
}

aliases['Muon_tuneP_p_0'] = {
    'expr'    : 'Alt$(Muon_tunepRelPt[0],0)*Alt$(Muon_pt[0],0)/(sin(2*atan(exp(-Alt$(Muon_eta[0],0)))))', # Muon_tunepRelPt[0]*Muon_pt[0]/(sin(2*atan(exp(-Muon_eta[0]))))
    'samples' : ['DY', 'DY_LO', 'DATA']
}

aliases['Muon_tuneP_pT_1'] = {
    'expr'    : 'Alt$(Muon_tunepRelPt[1],0)*Alt$(Muon_pt[1],0)',
    'samples' : ['DY', 'DY_LO', 'DATA']
}

aliases['Muon_tuneP_p_1'] = {
    'expr'    : 'Alt$(Muon_tunepRelPt[1],0)*Alt$(Muon_pt[1],0)/(sin(2*atan(exp(-Alt$(Muon_eta[1],0)))))', # Muon_tunepRelPt[0]*Muon_pt[0]/(sin(2*atan(exp(-Muon_eta[0]))))
    'samples' : ['DY', 'DY_LO', 'DATA']
}

# Relative pT uncertainty
aliases['pt_uncertainty_0'] = {
    'expr'    : 'Muon_tuneP_pT_0 > 0 ? (Muon_ptErr[0]/Muon_tuneP_pT_0) : 100',
    'samples' : ['DY', 'DY_LO', 'DATA']
}

aliases['pt_uncertainty_1'] = {
    'expr'    : 'Muon_tuneP_pT_1 > 0 ? (Muon_ptErr[1]/Muon_tuneP_pT_1) : 100',
    'samples' : ['DY', 'DY_LO', 'DATA']
}

# Tracker isolation (absolute value)
aliases['trk_iso_0'] = {
    'expr'    : '(Alt$(Muon_tkRelIso[0],100))*Muon_tuneP_pT_0',
    'samples' : ['DY', 'DY_LO', 'DATA']
}

# Tracker isolation (absolute value)
aliases['trk_iso_1'] = {
    'expr'    : '(Alt$(Muon_tkRelIso[1],100))*Muon_tuneP_pT_1',
    'samples' : ['DY', 'DY_LO', 'DATA']
}


##############
# R_reco_gen #
##############

aliases['q_over_p_reco_0'] = {
    'expr'    : 'Muon_charge[0]/(Muon_tuneP_p_0)',
    'samples' : ['DY', 'DY_LO', 'DATA']
}

aliases['q_over_p_gen_0'] = {
    'expr'    : 'Muon_genPartIdx[0] > -1 ? (-1)*abs(GenPart_pdgId[Muon_genPartIdx[0]])/(GenPart_pdgId[Muon_genPartIdx[0]]*GenPart_pt[Muon_genPartIdx[0]] / (sin(2*atan(exp(-GenPart_eta[Muon_genPartIdx[0]])))) ) : -9999', # GenPart_pdgId has opposite sign wrt Muon_charge
    'samples' : ['DY', 'DY_LO', 'DATA']
}

aliases['R_reco_gen_0'] = {
    'expr'    : 'q_over_p_gen_0 != -9999 ? (q_over_p_reco_0 - q_over_p_gen_0) / q_over_p_gen_0 : -9999',
    'samples' : ['DY', 'DY_LO', 'DATA']
}


aliases['q_over_p_reco_1'] = {
    'expr'    : 'Muon_charge[1]/(Muon_tuneP_p_1)',
    'samples' : ['DY', 'DY_LO', 'DATA']
}

aliases['q_over_p_gen_1'] = {
    'expr'    : 'Muon_genPartIdx[1] > -1 ? (-1)*abs(GenPart_pdgId[Muon_genPartIdx[1]])/(GenPart_pdgId[Muon_genPartIdx[1]]*GenPart_pt[Muon_genPartIdx[1]] / (sin(2*atan(exp(-GenPart_eta[Muon_genPartIdx[1]])))) ) : -9999', # GenPart_pdgId has opposite sign wrt Muon_charge
    'samples' : ['DY', 'DY_LO', 'DATA']
}

aliases['R_reco_gen_1'] = {
    'expr'    : 'q_over_p_gen_0 != -9999 ? (q_over_p_reco_1 - q_over_p_gen_1) / q_over_p_gen_1 : -9999',
    'samples' : ['DY', 'DY_LO', 'DATA']
}


# LepCut2l__ele_mvaFall17V2Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80
eleWP = 'mvaFall17V2Iso_WP90'
muWP  = 'cut_Tight_HWWW'

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc_emb + ['DATA']
}

aliases['LepWPSF'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc_emb
}

# Muons with low pT uncertainty (less than 30%)
aliases['low_uncertainty'] = {
    'expr'   : '(Lepton_muonIdx[0] > -1 ? Muon_ptErr[0]/Lepton_pt[Lepton_muonIdx[0]] : 1000) < 0.3 \
             && (Lepton_muonIdx[1] > -1 ? Muon_ptErr[1]/Lepton_pt[Lepton_muonIdx[1]] : 1000) < 0.3',
    'samples': mc_emb + ['DATA']
}

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

# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}

# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2l', 'LepWPCut', 'LepWPSF']),
    'samples': mc
}

# ########################
# ### Charge misid SFs ###
# ########################

# aliases['ttHMVA_SF_flip_2l'] = {
#     'linesToAdd': ['.L %s/WH_chargeAsymmetry/UL/Full2018_v9/WHSS_Mu82_EleUL90/DY_OS_CR/macros/flipper.C+' % configurations],
#     'class': 'flipper',
#     'args' : ('UL_2018', 2, 'Total_SF', 'false'),
#     'samples': ['DY','DY_LO']
# }

# # aliases['ttHMVA_SF_err_flip_2l'] = {
# #     'linesToAdd': ['.L %s/macros/flipper.C+' % configurations],
# #     'class': 'flipper',
# #     'args' : ('2018', 2, 'Total_SF_err', 'false'),
# #     'samples': ['DY','WW','top']
# # }

# ##################################
# ### Charge misid probabilities ###
# ##################################

# aliases['ttHMVA_eff_flip_2l'] = {
#     'linesToAdd': ['.L %s/WH_chargeAsymmetry/UL/Full2018_v9/WHSS_Mu82_EleUL90/DY_OS_CR/macros/flipper_eff.C+' % configurations],
#     'class': 'flipper_eff',
#     'args' : ('UL_2018', 2, 'Total_SF', 'false'),
#     'samples': ['DY', 'DY_LO']
# }

# # aliases['ttHMVA_eff_err_flip_2l'] = {
# #     'linesToAdd': ['.L %s/macros/flipper_eff.C+' % configurations],
# #     'class': 'flipper_eff',
# #     'args' : ('2018', 2, 'Total_SF_err'),
# #     'samples': ['DY_OS']
# # }

