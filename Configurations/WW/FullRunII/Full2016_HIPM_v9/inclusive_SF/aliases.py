import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # inclusive
configurations = os.path.dirname(configurations) # Full2016_HIPM_v9
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

eleWP = 'mvaFall17V2Iso_WP90'
muWP = 'cut_Tight80x'

aliases['genptww'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/Tools/wwpt.cc+' % configurations],
    'class': 'WWPT',
    'samples': ['WW']
}

aliases['ptWW_Reweighing'] = {
    'expr': '(1.179620 + -0.005625 * genptww + 0.000043 * genptww * genptww)*(genptww>0 && genptww<180) + 1.0*(genptww>180 || genptww<=0)',
    'samples': ['WW']
}

aliases['ZVeto'] = {
    'expr': '(fabs(91.1876 - mll) > 15)'
}

aliases['BDTOutput_0j_DY'] = {
    'class': 'ww_dy_bdt_0j',
    'linesToAdd' : ['.L %s/WW/FullRunII/Full2018_v9/inclusive_SF/WW_BDT_0j_DY.cc+' % configurations],
}

aliases['BDTOutput_1j_DY'] = {
    'class': 'ww_dy_bdt_1j',
    'linesToAdd' : ['.L %s/WW/FullRunII/Full2018_v9/inclusive_SF/WW_BDT_1j_DY.cc+' % configurations],
}

aliases['BDTOutput_2j_DY'] = {
    'class': 'ww_dy_bdt_2j',
    'linesToAdd' : ['.L %s/WW/FullRunII/Full2018_v9/inclusive_SF/WW_BDT_2j_DY.cc+' % configurations],
}

aliases['zeroJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) < 30.'
}

aliases['oneJet'] = {
    'expr': 'Alt$(CleanJet_pt[0],0) > 30 && Alt$(CleanJet_pt[1],0) < 30'
}

aliases['multiJet'] = {
    'expr': 'Alt$(CleanJet_pt[0],0) > 30 && Alt$(CleanJet_pt[1],0) > 30'
}


aliases['Zpt_0j'] = {
    'expr': '((3.97962 + -0.273798 * ptll + 0.00957402 * ptll * ptll + -0.000166757 * ptll * ptll * ptll + 1.5756e-06 * ptll * ptll * ptll * ptll + -7.64718e-09 * ptll * ptll* ptll* ptll* ptll + 1.48067e-11 * ptll * ptll* ptll* ptll* ptll *ptll) * (ptll > 30. && ptll < 150. && zeroJet) + (1.0) * (ptll > 150. && zeroJet))',
    'samples': ['DY']
}

aliases['Zpt_1j'] = {
    'expr': '((-2.09643 + 0.271657 * ptll + -0.00935567 * ptll * ptll + 0.000159357 * ptll * ptll * ptll + -1.41443e-06 * ptll * ptll * ptll * ptll + 6.26984e-09 * ptll * ptll* ptll* ptll* ptll + -1.09682e-11 * ptll * ptll* ptll* ptll* ptll *ptll) * (ptll > 30. && ptll < 150. && oneJet) + ( -2.56687e-03 * ptll + 1.49175e+00) * (ptll > 150. && oneJet))',
    'samples': ['DY']
}

aliases['Zpt_2j'] = {
    'expr': '((-0.841292 + 0.165919 * ptll + -0.00594878 * ptll * ptll + 0.000105888 * ptll * ptll * ptll + -9.86511e-07 * ptll * ptll * ptll * ptll + 4.61294e-09 * ptll * ptll* ptll* ptll* ptll + -8.55284e-12 * ptll * ptll* ptll* ptll* ptll *ptll) * (ptll > 30. && ptll < 150. && multiJet) + (-1.36366e-03 * ptll + 1.25827e+00) * (ptll > 150. && multiJet))',
    'samples': ['DY']
}

aliases['RinoutSFs_0j'] = {
    'expr': '(1.727 * (abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet && BDTOutput_0j_DY > 0.9) + 1.594 * (abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet && BDTOutput_0j_DY > 0.9) + 1.143 * (abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet && BDTOutput_0j_DY <= 0.9) + 1.083 * (abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet && BDTOutput_0j_DY <= 0.9))',
    'samples': ['DY']
}

aliases['RinoutSFs_1j'] = {
    'expr': '(2.030 * (abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet && BDTOutput_1j_DY > 0.9) + 1.979 * (abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet && BDTOutput_1j_DY > 0.9) + 0.943 * (abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet && BDTOutput_1j_DY <= 0.9) + 0.880 * (abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet && BDTOutput_1j_DY <= 0.9))',
    'samples': ['DY']
}

aliases['RinoutSFs_2j'] = {
    'expr': '(1.474 * (abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet && BDTOutput_2j_DY > 0.9) + 1.466 * (abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet && BDTOutput_2j_DY > 0.9) + 1.068 * (abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet && BDTOutput_2j_DY <= 0.9) + 1.040 * (abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet && BDTOutput_2j_DY <= 0.9))',
    'samples': ['DY']
}


aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP+'*\
     ( ((abs(Lepton_pdgId[0])==13 && Muon_mvaTTH[Lepton_muonIdx[0]]>0.82) || (abs(Lepton_pdgId[0])==11 && Lepton_mvaTTH_UL[0]>0.90)) \
    && ((abs(Lepton_pdgId[1])==13 && Muon_mvaTTH[Lepton_muonIdx[1]]>0.82) || (abs(Lepton_pdgId[1])==11 && Lepton_mvaTTH_UL[1]>0.90)) )',
    'samples': mc + ['DATA']
}

aliases['ttHMVAULSF'] = {
    'linesToAdd' : ['.L %s/WH_chargeAsymmetry/UL/macros/ttHMVASF.C+' % configurations],
    'class'      : 'ttHMVASF',
    'args'       : ("2016HIPM", 2, "all","nominal"),
    'samples'    : mc
}

aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
    'samples': mc
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': mc
}

# Fake leptons transfer factor
aliases['fakeW'] = {
    'linesToAdd' : ['.L %s/WW/FullRunII/Tools/fake_rate_reader.C+' % configurations],
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'nominal', 2, "std"),
    'samples'    : ['Fake']
}

# And variations - already divided by central values in formulas !
aliases['fakeWEleUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'EleUp', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWEleDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'EleDown', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWMuUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'MuUp', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWMuDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'MuDown', 2, "std"),
    'samples'    : ['Fake']
}

aliases['fakeWStatEleUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'StatEleUp', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWStatEleDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'StatEleDown', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWStatMuUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'StatMuUp', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWStatMuDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_HIPM', '90', '82', 0.90, 0.82, 'StatMuDown', 2, "std"),
    'samples'    : ['Fake']
}

# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}

#Note: this is the data-NLO correction recommended by the TOP PAG in most use cases
aliases['Top_pTrw'] = {
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPt) * TMath::Exp(0.0615 - 0.0005 * antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)',
    'samples': ['top']
}

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/Differential/ngenjet.cc+' % configurations],
    'class': 'CountGenJet',
    'samples': mc
}

aliases['fiducial'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/fiducial.cc+' % configurations],
    'class': 'FiducialRegion',
    'samples': mc
}

####################################################################################
# b tagging WPs: https://twiki.cern.ch/twiki/bin/view/CMS/BtagRecommendation106XUL16preVFP
####################################################################################

# DeepB = DeepCSV
bWP_loose_deepB  = '0.2027'
bWP_medium_deepB = '0.6001' 
bWP_tight_deepB  = '0.8819'

# DeepFlavB = DeepJet
bWP_loose_deepFlavB  = '0.0508'
bWP_medium_deepFlavB = '0.2598'
bWP_tight_deepFlavB  = '0.6502'

# Actual algo and WP definition. BE CONSISTENT!!
bAlgo = 'DeepFlavB' # ['DeepB','DeepFlavB']
bWP   = bWP_medium_deepFlavB
bSF   = 'deepjet' # ['deepcsv','deepjet']

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

# CR definitions

aliases['topcr'] = {
    'expr': '((Sum$(CleanJet_pt > 30.) == 0 && !bVeto) || bReq)'
}

# aliases['dycr'] = {
#     'expr': 'mth<60 && mll>40 && mll<80 && bVeto'
# }

# aliases['wwcr'] = {
#     'expr': 'mth>60 && mtw2>30 && mll>100 && bVeto'
# }

# SR definition

aliases['sr'] = {
    'expr': 'bVeto'
}

# Overall b tag SF
aliases['btagSF'] = {
    'expr': '(bVeto || (topcr && Sum$(CleanJet_pt > 30.) == 0))*bVetoSF + (topcr && Sum$(CleanJet_pt > 30.) > 0)*bReqSF',
    'samples': mc
}

for shift in ['jes', 'jesAbsolute', 'jesAbsolute_2016', 'jesBBEC1', 'jesBBEC1_2016', 'jesEC2', 'jesEC2_2016', 'jesFlavorQCD', 'jesHF', 'jesHF_2016', 'jesRelativeBal', 'jesRelativeSample_2016', 'lf', 'hf', 'lfstats1','lfstats2', 'hfstats1', 'hfstats2', 'cferr1', 'cferr2']:
#for shift in ['lf', 'hf', 'lfstats1', 'lfstats2', 'hfstats1', 'hfstats2', 'cferr1', 'cferr2']:
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

aliases['Jet_PUIDSF'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose)))',
  'samples': mc
}

aliases['Jet_PUIDSF_up'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose_up)))',
  'samples': mc
}

aliases['Jet_PUIDSF_down'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose_down)))',
  'samples': mc
}


# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2l','LepWPCut', 'LepSF2l__ele_' + eleWP + '__mu_' + muWP, 'btagSF', 'PrefireWeight', 'Jet_PUIDSF', 'ttHMVAULSF']),
    'samples': mc
}

# ttHMVA, LepSF variations are 1+delta
# Combining uncertainties, we want 1+sqrt(delta1^2+delta2^2)
aliases['ttHMVASFUL_eleUp'] = {
    'class'      : 'ttHMVASF',
    'args'       : ("2016HIPM", 2, "all", "eleUp"),
    'samples'    : mc,
    'nominalOnly': 1
}
aliases['SFweightEleUp'] = {
    'expr': '1+TMath::Sqrt(TMath::Power(LepSF2l__ele_'+eleWP+'__Up-1,2)+TMath::Power(ttHMVASFUL_eleUp-1,2))',
    'samples': mc,
    'nominalOnly': 1
}
aliases['ttHMVAULSF_eleDown'] = {
    'class'      : 'ttHMVASF',
    'args'       : ("2016HIPM", 2, "all", "eleDown"),
    'samples'    : mc,
    'nominalOnly': 1
}
aliases['SFweightEleDown'] = {
    'expr': '1-TMath::Sqrt(TMath::Power(LepSF2l__ele_'+eleWP+'__Do-1,2)+TMath::Power(ttHMVAULSF_eleDown-1,2))',
    'samples': mc,
    'nominalOnly': 1
}
aliases['ttHMVAULSF_muUp'] = {
    'class'      : 'ttHMVASF',
    'args'       : ("2016HIPM", 2, "all", "muUp"),
    'samples'    : mc,
    'nominalOnly': 1
}
aliases['SFweightMuUp'] = {
    'expr': '1+TMath::Sqrt(TMath::Power(LepSF2l__mu_'+muWP+'__Up-1,2)+TMath::Power(ttHMVAULSF_muUp-1,2))',
    'samples': mc,
    'nominalOnly': 1
}
aliases['ttHMVAULSF_muDown'] = {
    'class'      : 'ttHMVASF',
    'args'       : ("2016HIPM", 2, "all", "muDown"),
    'samples'    : mc,
    'nominalOnly': 1
}
aliases['SFweightMuDown'] = {
    'expr': '1-TMath::Sqrt(TMath::Power(LepSF2l__mu_'+muWP+'__Do-1,2)+TMath::Power(ttHMVAULSF_muDown-1,2))',
    'samples': mc,
    'nominalOnly': 1
}

# In WpWmJJ_EWK events, partons [0] and [1] are always the decay products of the first W
aliases['lhe_mW1'] = {
    'expr': 'TMath::Sqrt(2. * LHEPart_pt[0] * LHEPart_pt[1] * (TMath::CosH(LHEPart_eta[0] - LHEPart_eta[1]) - TMath::Cos(LHEPart_phi[0] - LHEPart_phi[1])))',
    'samples': ['WWewk']
}

# and [2] [3] are the second W
aliases['lhe_mW2'] = {
    'expr': 'TMath::Sqrt(2. * LHEPart_pt[2] * LHEPart_pt[3] * (TMath::CosH(LHEPart_eta[2] - LHEPart_eta[3]) - TMath::Cos(LHEPart_phi[2] - LHEPart_phi[3])))',
    'samples': ['WWewk']
}
aliases['B0'] = {
    'expr' : '1',
    'samples' : ['WW','ggWW']
}

aliases['fid'] = {
    'expr' : 'fiducial',
    'samples' : ['WW','ggWW']
}

