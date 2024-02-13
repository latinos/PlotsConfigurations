import os
import copy
import inspect

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ControlRegions/ttHMVAUL/Full2017_v9

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2017_v9
configurations = os.path.dirname(configurations) # ttHMVAUL
configurations = os.path.dirname(configurations) # ControlRegions
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}
mc     = [skey for skey in samples if skey not in ('Fake', 'DATA', 'Dyemb')]
mc_emb = [skey for skey in samples if skey not in ('Fake', 'DATA')]

# LepCut2l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight_HWWW_tthmva_80
eleWP = 'mvaFall17V2Iso_WP90'
muWP  = 'cut_Tight_HWWW_tthmva_80'

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc_emb + ['DATA']
}

aliases['LepWPSF'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc_emb
}

# Fake leptons transfer factor
aliases['fakeW'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP,
    'samples': ['Fake']
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

####################################################################################
# b tagging WPs: https://twiki.cern.ch/twiki/bin/view/CMS/BtagRecommendation106XUL18
####################################################################################

# DeepB = DeepCSV
bWP_loose_deepB  = '0.1355'
bWP_medium_deepB = '0.4506' 
bWP_tight_deepB  = '0.7738'

# DeepFlavB = DeepJet
bWP_loose_deepFlavB  = '0.0532'
bWP_medium_deepFlavB = '0.3040'
bWP_tight_deepFlavB  = '0.7476'

# Actual algo and WP definition. BE CONSISTENT!!
bAlgo = 'DeepB' # ['DeepB','DeepFlavB']
bWP   = bWP_loose_deepB
bSF   = 'deepcsv' # ['deepcsv','deepjet']

# b veto
aliases['bVeto'] = {
    'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btag{}[CleanJet_jetIdx] > {}) == 0'.format(bAlgo, bWP)
}

aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_{}_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))'.format(bSF),
    'samples': mc
}

# At least one b-tagged jet
aliases['bReq'] = {
    'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btag{}[CleanJet_jetIdx] > {}) >= 1'.format(bAlgo, bWP)
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_{}_shape[CleanJet_jetIdx]+1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))'.format(bSF),
    'samples': mc
}

# Top control region
aliases['topcr'] = {
    'expr': 'mtw2>30 && mll>50 && ((zeroJet && !bVeto) || bReq)'
}

# WW control region
aliases['wwcr'] = {
    'expr': 'mth>60 && mtw2>30 && mll>100 && bVeto'
}

# Overall b tag SF
aliases['btagSF'] = {
    'expr': '(bVeto || (topcr && zeroJet))*bVetoSF + (topcr && !zeroJet)*bReqSF',
    'samples': mc
}

for shift in ['jes', 'lf', 'hf', 'lfstats1', 'lfstats2', 'hfstats1', 'hfstats2', 'cferr1', 'cferr2']:
    for targ in ['bVeto', 'bReq']:
        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_{}_shape'.format(bSF), 'btagSF_{}_shape_up_{}'.format(bSF, shift))

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_{}_shape'.format(bSF), 'btagSF_{}_shape_down_{}'.format(bSF, shift))

    aliases['btagSF%sup' % shift] = {
        'expr': aliases['btagSF']['expr'].replace('SF', 'SF' + shift + 'up'),
        'samples': mc
    }

    aliases['btagSF%sdown' % shift] = {
        'expr': aliases['btagSF']['expr'].replace('SF', 'SF' + shift + 'down'),
        'samples': mc
    }

####################################################################################
# End of b tagging pippone
####################################################################################


aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 4',
    'samples': 'VgS'
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass < 0 || Gen_ZGstar_mass > 4',
    'samples': 'VgS'
}

# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}

aliases['Top_pTrw'] = {
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) + (topGenPt * antitopGenPt <= 0.)',
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

# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2l', 'LepWPCut', 'LepWPSF','Jet_PUIDSF_loose', 'btagSF']),
    'samples': mc
}

# Variables for ttHMVA UL
aliases['Ele_pfRelIso_1'] = {
    'expr': 'Lepton_electronIdx[0] >= 0 ? Electron_pfRelIso03_all[Lepton_electronIdx[0]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}
aliases['Ele_pfRelIso_2'] = {
    'expr': 'Lepton_electronIdx[1] >= 0 ? Electron_pfRelIso03_all[Lepton_electronIdx[1]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}

aliases['Ele_miniPFRelIso_chg_1'] = {
    'expr': 'Lepton_electronIdx[0] >= 0 ? Electron_miniPFRelIso_chg[Lepton_electronIdx[0]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}
aliases['Ele_miniPFRelIso_chg_2'] = {
    'expr': 'Lepton_electronIdx[1] >= 0 ? Electron_miniPFRelIso_chg[Lepton_electronIdx[1]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}

aliases['Ele_miniRelIsoNeutral_1'] = {
    'expr': 'Lepton_electronIdx[0] >= 0 ? Electron_miniPFRelIso_all[Lepton_electronIdx[0]] - Electron_miniPFRelIso_chg[Lepton_electronIdx[0]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}
aliases['Ele_miniRelIsoNeutral_2'] = {
    'expr': 'Lepton_electronIdx[1] >= 0 ? Electron_miniPFRelIso_all[Lepton_electronIdx[1]] - Electron_miniPFRelIso_chg[Lepton_electronIdx[1]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}

aliases['Ele_jetNDauCharged_1'] = {
    'expr': 'Lepton_electronIdx[0] >= 0 ? Electron_jetNDauCharged[Lepton_electronIdx[0]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}
aliases['Ele_jetNDauCharged_2'] = {
    'expr': 'Lepton_electronIdx[1] >= 0 ? Electron_jetNDauCharged[Lepton_electronIdx[1]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}

aliases['Ele_jetPtRelv2_1'] = {
    'expr': 'Lepton_electronIdx[0] >= 0 ? Electron_jetPtRelv2[Lepton_electronIdx[0]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}
aliases['Ele_jetPtRelv2_2'] = {
    'expr': 'Lepton_electronIdx[1] >= 0 ? Electron_jetPtRelv2[Lepton_electronIdx[1]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}

# aliases['Ele_jetBTagDeepFlavB_1'] = {
#     'expr': 'Lepton_electronIdx[0] >= 0 ? Electron_jetIdx[Lepton_electronIdx[0]] > -1 ? Jet_btagDeepFlavB[Electron_jetIdx[Lepton_electronIdx[0]]] : 0 : -9999',
#     'samples': mc_emb + ['DATA','Fake']
# }
# aliases['Ele_jetBTagDeepFlavB_2'] = {
#     'expr': 'Lepton_electronIdx[1] >= 0 ? Electron_jetIdx[Lepton_electronIdx[1]] > -1 ? Jet_btagDeepFlavB[Electron_jetIdx[Lepton_electronIdx[1]]] : 0 : -9999',
#     'samples': mc_emb + ['DATA','Fake']
# }

aliases['Ele_jetBTagDeepFlavB_1'] = {
    'expr': 'Alt$(Jet_btagDeepFlavB[0],-9999.)',
    'samples': mc_emb + ['DATA','Fake']
}
aliases['Ele_jetBTagDeepFlavB_2'] = {
    'expr': 'Alt$(Jet_btagDeepFlavB[1],-9999.)',
    'samples': mc_emb + ['DATA','Fake']
}

aliases['Ele_sip3d_1'] = {
    'expr': 'Lepton_electronIdx[0] >= 0 ? Electron_sip3d[Lepton_electronIdx[0]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}
aliases['Ele_sip3d_2'] = {
    'expr': 'Lepton_electronIdx[1] >= 0 ? Electron_sip3d[Lepton_electronIdx[1]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}

aliases['Ele_dxy_1'] = {
    'expr': 'Lepton_electronIdx[0] >= 0 ? Electron_dxy[Lepton_electronIdx[0]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}
aliases['Ele_dxy_2'] = {
    'expr': 'Lepton_electronIdx[1] >= 0 ? Electron_dxy[Lepton_electronIdx[1]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}

aliases['Ele_dz_1'] = {
    'expr': 'Lepton_electronIdx[0] >= 0 ? Electron_dz[Lepton_electronIdx[0]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}
aliases['Ele_dz_2'] = {
    'expr': 'Lepton_electronIdx[1] >= 0 ? Electron_dz[Lepton_electronIdx[1]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}

aliases['Ele_mvaFall17V2noIso_1'] = {
    'expr': 'Lepton_electronIdx[0] >= 0 ? Electron_mvaFall17V2noIso[Lepton_electronIdx[0]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}
aliases['Ele_mvaFall17V2noIso_2'] = {
    'expr': 'Lepton_electronIdx[1] >= 0 ? Electron_mvaFall17V2noIso[Lepton_electronIdx[1]] : -9999',
    'samples': mc_emb + ['DATA','Fake']
}

# aliases[''] = {
#     'expr': '',
#     'samples': mc_emb + ['DATA','Fake']
# }
