import os
import copy
import inspect

# /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/2016HIPM_v9/WH3l_Mu82_EleUL90

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # WH3l_Mu82_EleUL90
configurations = os.path.dirname(configurations) # 2016HIPM_v9
configurations = os.path.dirname(configurations) # UL
configurations = os.path.dirname(configurations) # WH_chargeAsymmetry
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}
mc     = [skey for skey in samples if skey not in ('Fake', 'DATA', 'Dyemb')]
mc_emb = [skey for skey in samples if skey not in ('Fake', 'DATA')]

# LepCut2l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight80x
eleWP = 'mvaFall17V2Iso_WP90'
muWP  = 'cut_Tight80x'

aliases['LepWPCut'] = {
    'expr': 'LepCut3l__ele_mvaFall17V2Iso_WP90__mu_cut_Tight80x*\
     ( ((abs(Lepton_pdgId[0])==13 && Muon_mvaTTH[Lepton_muonIdx[0]]>0.82) || (abs(Lepton_pdgId[0])==11 && Lepton_mvaTTH_UL[0]>0.90)) \
    && ((abs(Lepton_pdgId[1])==13 && Muon_mvaTTH[Lepton_muonIdx[1]]>0.82) || (abs(Lepton_pdgId[1])==11 && Lepton_mvaTTH_UL[1]>0.90)) \
    && ((abs(Lepton_pdgId[2])==13 && Muon_mvaTTH[Lepton_muonIdx[2]]>0.82) || (abs(Lepton_pdgId[2])==11 && Lepton_mvaTTH_UL[2]>0.90)) )',
    'samples': mc +  ['DATA']
}

# Lepton SF (not considering the ttHMVA discriminant)
aliases['LepWPSF'] = {
    'expr': 'LepSF3l__ele_' + eleWP + '__mu_' + muWP,
    'samples': mc
}

# ttHMVA SFs and uncertainties
aliases['LepWPttHMVASF'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/ttHMVASF.C+' % configurations],
    'class'      : 'ttHMVASF',
    'args'       : ("2016HIPM", 3, "all", "nominal"),
    'samples'    : mc_emb
}

aliases['LepWPttHMVASFEleUp'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/ttHMVASF.C+' % configurations],
    'class'      : 'ttHMVASF',
    'args'       : ("2016HIPM", 3, "all", "eleUp"),
    'samples'    : mc_emb
}

aliases['LepWPttHMVASFEleDown'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/ttHMVASF.C+' % configurations],
    'class'      : 'ttHMVASF',
    'args'       : ("2016HIPM", 3, "all", "eleDown"),
    'samples'    : mc_emb
}

aliases['LepWPttHMVASFMuUp'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/ttHMVASF.C+' % configurations],
    'class'      : 'ttHMVASF',
    'args'       : ("2016HIPM", 3, "all", "muUp"),
    'samples'    : mc_emb
}

aliases['LepWPttHMVASFMuDown'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/ttHMVASF.C+' % configurations],
    'class'      : 'ttHMVASF',
    'args'       : ("2016HIPM", 3, "all", "muDown"),
    'samples'    : mc_emb
}

# Fake leptons transfer factor
aliases['fakeW'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'nominal', 3, "std"),
    'samples'    : ['Fake']
}

# And variations - already divided by central values in formulas !
aliases['fakeWEleUp'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'EleUp', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWEleDown'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'EleDown', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWMuUp'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'MuUp', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWMuDown'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'MuDown', 3, "std"),
    'samples'    : ['Fake']
}

aliases['fakeWStatEleUp'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'StatEleUp', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWStatEleDown'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'StatEleDown', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWStatMuUp'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'StatMuUp', 3, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWStatMuDown'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/fake_rate_reader.C+' % configurations],
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'StatMuDown', 3, "std"),
    'samples'    : ['Fake']
}

# No jet with pt > 30 GeV
aliases['zeroJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) < 30.'
}

aliases['oneJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) > 30. && Alt$(CleanJet_pt[1], 0) < 30.'
}

aliases['multiJet'] = {
    'expr': 'Alt$(CleanJet_pt[1], 0) > 30.'
}

##########################################################################################
# b tagging WPs: https://twiki.cern.ch/twiki/bin/view/CMS/BtagRecommendation106XUL16preVFP
##########################################################################################

# DeepB = DeepCSV
bWP_loose_deepB  = '0.2027'
bWP_medium_deepB = '0.6001' 
bWP_tight_deepB  = '0.8819'

# DeepFlavB = DeepJet
bWP_loose_deepFlavB  = '0.0508'
bWP_medium_deepFlavB = '0.2598'
bWP_tight_deepFlavB  = '0.6502'

# Actual algo and WP definition. BE CONSISTENT!!
bAlgo = 'DeepB'          # ['DeepB','DeepFlavB']
bWP   = bWP_medium_deepB # [bWP_loose_deepB, bWP_loose_deepFlavB]
bSF   = 'deepcsv'        # ['deepcsv','deepjet']

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

for shift in ['jesAbsolute', 'jesAbsolute_2016', 'jesBBEC1', 'jesBBEC1_2016', 'jesEC2', 'jesEC2_2016', 'jesFlavorQCD', 'jesHF', 'jesHF_2016', 'jesRelativeBal', 'jesRelativeSample_2016', 'lf', 'hf', 'lfstats1', 'lfstats2', 'hfstats1', 'hfstats2', 'cferr1', 'cferr2']:

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
    'samples': 'WgS'
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass < 0 || Gen_ZGstar_mass > 4',
    'samples': 'WZ'
}

# gen-matching to prompt only (GenLepMatch3l matches to *any* gen lepton)
aliases['PromptGenLepMatch3l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1]*Lepton_promptgenmatched[2], 0)',
    'samples': mc
}

aliases['Top_pTrw'] = {
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) + (topGenPt * antitopGenPt <= 0.)',
    'samples': ['top']
}


##### DY Z pT reweighting
aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'CountGenJet',
    'samples': mc
}

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
    'expr': ' * '.join(['SFweight3l', 'LepWPCut', 'LepWPSF','PrefireWeight','Jet_PUIDSF_loose', 'btagSF','LepWPttHMVASF']),
    'samples': mc
}

# variations
aliases['SFweightEleUp'] = {
    'expr': 'LepSF3l__ele_'+eleWP+'__Up',
    'samples': mc_emb
}
aliases['SFweightEleDown'] = {
    'expr': 'LepSF3l__ele_'+eleWP+'__Do',
    'samples': mc_emb
}
aliases['SFweightMuUp'] = {
    'expr': 'LepSF3l__mu_'+muWP+'__Up',
    'samples': mc_emb
}
aliases['SFweightMuDown'] = {
    'expr': 'LepSF3l__mu_'+muWP+'__Do',
    'samples': mc_emb
}

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

### BDT on-the-fly

# Default trainings in AN-22-120_v1
aliases['BDT_WH3l_OSSF_v9'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/BDT_WH3l_OSSF_v9.C+' % configurations],
    'class' : 'BDT_WH3l_OSSF_v9',
    'args'  : ('BDTG4F07', '%s/WH_chargeAsymmetry/UL/data/BDT/2016HIPM/WH3l/OSSF/weights_old/TMVAClassification_BDTG4F07.weights.xml' % configurations),
}

aliases['BDT_WH3l_SSSF_v9'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/BDT_WH3l_SSSF_v9.C+' % configurations],
    'class' : 'BDT_WH3l_SSSF_v9',
    'args'  : ('BDTG4SK01_1000Trees_02baggingfraction', '%s/WH_chargeAsymmetry/UL/data/BDT/2016HIPM/WH3l/SSSF/weights_old/TMVAClassification_BDTG4SK01_1000Trees_02baggingfraction.weights.xml' % configurations),
}

# Considering Top and Z+jets (DY) as sources of fake leptons
aliases['BDT_WH3l_OSSF_new_v9'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/BDT_WH3l_OSSF_v9.C+' % configurations],
    'class' : 'BDT_WH3l_OSSF_v9',
    'args'  : ('BDTG4C3', '%s/WH_chargeAsymmetry/UL/data/BDT/2016HIPM/WH3l/OSSF/weights/TMVAClassification_BDTG4C3.weights.xml' % configurations),
}

aliases['BDT_WH3l_SSSF_new_v9'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/BDT_WH3l_SSSF_v9.C+' % configurations],
    'class' : 'BDT_WH3l_SSSF_v9',
    'args'  : ('BDTG4SK01_05shrinkage', '%s/WH_chargeAsymmetry/UL/data/BDT/2016HIPM/WH3l/SSSF/weights/TMVAClassification_BDTG4SK01_05shrinkage.weights.xml' % configurations),
}

# Considering Top and Z+jets (DY) as sources of fake leptons and weights
aliases['BDT_WH3l_OSSF_weight_v9'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/BDT_WH3l_OSSF_v9.C+' % configurations],
    'class' : 'BDT_WH3l_OSSF_v9',
    'args'  : ('BDTG4F07', '%s/WH_chargeAsymmetry/UL/2016HIPM_v9/BDTconfig_WH3l/dataset_OSSF_weight/weights/TMVAClassification_BDTG4F07.weights.xml' % configurations),
}

aliases['BDT_WH3l_SSSF_weight_v9'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/BDT_WH3l_SSSF_v9.C+' % configurations],
    'class' : 'BDT_WH3l_SSSF_v9',
    'args'  : ('BDTG4SK01', '%s/WH_chargeAsymmetry/UL/2016HIPM_v9/BDTconfig_WH3l/dataset_SSSF_weight/weights/TMVAClassification_BDTG4SK01_1000Trees.weights.xml' % configurations),
}

# Considering Top and Z+jets (DY) as sources of fake leptons and weights. Trained using Full Run 2 dataset
aliases['BDT_WH3l_OSSF_weight_FullRun2_v9'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/BDT_WH3l_OSSF_v9.C+' % configurations],
    'class' : 'BDT_WH3l_OSSF_v9',
    'args'  : ('BDTG4F07', '%s/WH_chargeAsymmetry/UL/FullRun2/BDTconfig_WH3l/dataset_OSSF_weight/weights/TMVAClassification_BDTG4F07.weights.xml' % configurations),
}

# aliases['BDT_WH3l_SSSF_weight_FullRun2_v9'] = {
#     'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/BDT_WH3l_SSSF_v9.C+' % configurations],
#     'class' : 'BDT_WH3l_SSSF_v9',
#     'args'  : ('BDTG4SK01', '%s/%s/WH_chargeAsymmetry/UL/FullRun2/BDTconfig_WH3l/dataset_SSSF_weight/weights/TMVAClassification_BDTG4SK01.weights.xml' % configurations),
# }

# WHSS training needed for WZ control region. 
# WJets and Semileptonic Top are considered as fake.
aliases['BDT_WHSS_TopSemileptonic_v9'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/BDT_WHSS_TopSemileptonic_v9.C+' % configurations],
    'class': 'BDT_WHSS_TopSemileptonic_v9',
    'args' : ('BDTG_6', '%s/WH_chargeAsymmetry/UL/data/BDT/2016HIPM/WHSS/weights/TMVAClassification_BDTG_6.weights.xml' % configurations),
}

# WHSS training needed for WZ control region. 
# WJets and Semileptonic Top are considered as fake. Properly applying events weights
aliases['BDT_WHSS_TopSemileptonic_weight_v9'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/BDT_WHSS_TopSemileptonic_v9.C+' % configurations],
    'class': 'BDT_WHSS_TopSemileptonic_v9',
    'args' : ('BDTG_5', '%s/WH_chargeAsymmetry/UL/2016HIPM_v9/BDTconfig_WHSS/dataset_WHSS_weight/weights/TMVAClassification_BDTG_5.weights.xml' % configurations), # provisional address
}

# WHSS training needed for WZ control region. 
# WJets and Semileptonic Top are considered as fake. 
# Properly applying events weights. Trained using the four eras of Run 2 merged together.
aliases['BDT_WHSS_TopSemileptonic_weight_FullRun2_v9'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/BDT_WHSS_TopSemileptonic_v9.C+' % configurations],
    'class': 'BDT_WHSS_TopSemileptonic_v9',
    'args' : ('BDTG_5', '%s/WH_chargeAsymmetry/UL/FullRun2/BDTconfig_WHSS/datasetWHSS_weight/weights/TMVAClassification_BDTG_5.weights.xml' % configurations), # provisional address
}


# Fix METFilter_DATA definition: Flag_ecalBadCalibFilter is removed since it is not needed in 2016
aliases['METFilter_DATA_fix'] = {
    'expr' : 'Flag_goodVertices*Flag_globalSuperTightHalo2016Filter*Flag_HBHENoiseFilter*Flag_HBHENoiseIsoFilter*Flag_EcalDeadCellTriggerPrimitiveFilter*Flag_BadPFMuonFilter*Flag_BadPFMuonDzFilter*Flag_eeBadScFilter',
    'samples': ['DATA','Fake']
}
