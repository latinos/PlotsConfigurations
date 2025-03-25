import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # inclusive
configurations = os.path.dirname(configurations) # Full2018_v9
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations
configurations += '/PlotsConfigurations/Configurations'

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

HWW_OFFSHELL_DNN_PATH0jet = '.L %s/src/PlotsConfigurations/Configurations/Offshell_Dilep/Tools/AddDNNScoresv1_0jet.cc+' % os.getenv('CMSSW_BASE')
HWW_OFFSHELL_DNN_PATH1jet = '.L %s/src/PlotsConfigurations/Configurations/Offshell_Dilep/Tools/AddDNNScoresv1_1jet.cc+' % os.getenv('CMSSW_BASE')

# No jet with pt > 30 GeV
aliases['zeroJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) < 30.'
}

aliases['oneJet'] = {
    'expr': 'Alt$(CleanJet_pt[0],0) > 30. && Alt$(CleanJet_pt[1],0) < 30.'
}

aliases['multiJet'] = {
    'expr': 'Alt$(CleanJet_pt[0],0) > 30. && Alt$(CleanJet_pt[1],0) > 30.'
}


aliases['dnnScore_ggH_OFF_0j'] = {
    'linesToAdd' : [HWW_OFFSHELL_DNN_PATH0jet],
    'class' : 'AddDNNScoresv1_0jet',
    'args': ("ggH_OFF",)
}
aliases['dnnScore_ggH_ON_0j'] = {
    'linesToAdd' : [HWW_OFFSHELL_DNN_PATH0jet],
    'class' : 'AddDNNScoresv1_0jet',
    'args': ("ggH_ON",)
}
aliases['dnnScore_top_0j'] = {
    'linesToAdd' : [HWW_OFFSHELL_DNN_PATH0jet],
    'class' : 'AddDNNScoresv1_0jet',
    'args': ("top",)
}
aliases['dnnScore_WW_0j'] = {
    'linesToAdd' : [HWW_OFFSHELL_DNN_PATH0jet],
    'class' : 'AddDNNScoresv1_0jet',
    'args': ("WW",)
}
# aliases['dnnScore_MAX_0j'] = {
#     'linesToAdd' : [HWW_OFFSHELL_DNN_PATH0jet],
#     'class' : 'AddDNNScoresv1_0jet',
#     'args': ("MAX",)
# }

#1jet

aliases['dnnScore_ggH_OFF_1j'] = {
    'linesToAdd' : [HWW_OFFSHELL_DNN_PATH1jet],
    'class' : 'AddDNNScoresv1_1jet',
    'args': ("ggH_OFF",)
}
aliases['dnnScore_ggH_ON_1j'] = {
    'linesToAdd' : [HWW_OFFSHELL_DNN_PATH1jet],
    'class' : 'AddDNNScoresv1_1jet',
    'args': ("ggH_ON",)
}
aliases['dnnScore_top_1j'] = {
    'linesToAdd' : [HWW_OFFSHELL_DNN_PATH1jet],
    'class' : 'AddDNNScoresv1_1jet',
    'args': ("top",)
}
aliases['dnnScore_WW_1j'] = {
    'linesToAdd' : [HWW_OFFSHELL_DNN_PATH1jet],
    'class' : 'AddDNNScoresv1_1jet',
    'args': ("WW",)
}
# aliases['dnnScore_MAX_1j'] = {
#     'linesToAdd' : [HWW_OFFSHELL_DNN_PATH1jet],
#     'class' : 'AddDNNScoresv1_1jet',
#     'args': ("MAX",)
# }


eleWP = 'mvaFall17V2Iso_WP90'
muWP = 'cut_Tight80x'

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP+'*\
     ( ((abs(Lepton_pdgId[0])==13 && Muon_mvaTTH[Lepton_muonIdx[0]]>0.82) || (abs(Lepton_pdgId[0])==11 && Lepton_mvaTTH_UL[0]>0.90)) \
    && ((abs(Lepton_pdgId[1])==13 && Muon_mvaTTH[Lepton_muonIdx[1]]>0.82) || (abs(Lepton_pdgId[1])==11 && Lepton_mvaTTH_UL[1]>0.90)) )',
    'samples': mc + ['DATA']
}

aliases['ttHMVAULSF'] = {
    'linesToAdd' : ['.L %s/WW/FullRunII/ttHMVASF.C+' % configurations],
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


##### DY Z pT reweighting
##### TEMP this also needs updating
aliases['getGenZpt_OTF'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/patches/getGenZpt.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'getGenZpt',
    'samples': ['DY']
}
handle = open('%s/src/PlotsConfigurations/Configurations/patches/DYrew30.py' % os.getenv('CMSSW_BASE'),'r')
exec(handle)
handle.close()
aliases['DY_NLO_pTllrw'] = {
    'expr': '('+DYrew['2016']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY']
}
aliases['DY_LO_pTllrw'] = {
    'expr': '('+DYrew['2016']['LO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY']
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
    'expr': '((zeroJet && dnnScore_top_0j > .5) || (oneJet && dnnScore_top_1j > .5)) * ((Sum$(CleanJet_pt > 30.) == 0 && !bVeto) || bReq)'
} ##combined 0 and 1 jet definition

#aliases['dycr'] = {
#    'expr': 'mth<60 && mll>40 && mll<80 && bVeto'
#}

#aliases['wwcr'] = {
#    'expr': 'mth>60 && mtw2>30 && mll>100 && bVeto'
#}

# SR definition

#aliases['sr'] = {
#    'expr': 'mth>60 && mtw2>30 && bVeto'
#}

# Overall b tag SF
aliases['btagSF'] = {
    'expr': '(bVeto || (topcr && Sum$(CleanJet_pt > 30.) == 0))*bVetoSF + (topcr && Sum$(CleanJet_pt > 30.) > 0)*bReqSF',
    'samples': mc
}

#for shift in ['jesAbsolute', 'jesAbsolute_2016', 'jesBBEC1', 'jesBBEC1_2016', 'jesEC2', 'jesEC2_2016', 'jesHF', 'jesHF_2016', 'jesRelativeBal', 'jesRelativeSample_2016', 'lf', 'hf', 'lfstats1', 'lfstats2', 'hfstats1', 'hfstats2', 'cferr1', 'cferr2']:
for shift in ['lf', 'hf', 'lfstats1', 'lfstats2', 'hfstats1', 'hfstats2', 'cferr1', 'cferr2']:
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

##
aliases['LHE_mWW'] = {
    'linesToAdd' : ['.L %s/src/PlotsConfigurations/Configurations/Offshell_Dilep/Tools/computeLHEmWW.cc' % os.getenv('CMSSW_BASE')],
    'class' : 'computeLHEmWW',
    'samples' : ['ggH_bonly_off', 'ggH_bonly_on', 'ggH_sand_off', 'ggH_sand_on', 'ggH_sonly_off', 'ggH_sonly_on'],
    'args': ()
}

# aliases['norm_njet'] = {
#     'expr': '(0.985 * (zeroJet && LHE_mWW <= 160) + 1.692 * (oneJet && LHE_mWW <= 160) + 4.805 * (multiJet && LHE_mWW <= 160) + 0.955 * (zeroJet && LHE_mWW > 160) + 0.794 * (oneJet && LHE_mWW > 160) + 0.823 * (multiJet && LHE_mWW > 160))',
#     'samples' : ['ggH_bonly_off', 'ggH_bonly_on', 'ggH_sand_off', 'ggH_sand_on', 'ggH_sonly_off', 'ggH_sonly_on'],
# }

aliases['norm_njet'] = {
    'expr': '(2.7839950 * (zeroJet && LHE_mWW <= 160) + 4.6491455 * (oneJet && LHE_mWW <= 160) + 12.881013 * (multiJet && LHE_mWW <= 160) + 2.6366729 * (zeroJet && LHE_mWW > 160) + 2.1922905 * (oneJet && LHE_mWW > 160) + 2.2564790 * (multiJet && LHE_mWW > 160))',
    'samples' : ['ggH_bonly_off', 'ggH_bonly_on', 'ggH_sand_off', 'ggH_sand_on', 'ggH_sonly_off', 'ggH_sonly_on'],
}

aliases['btagnorm_Vg'] = {
    'expr': '(9.59896822733 / 9.59292747502 * zeroJet + 5.98075532824 / 6.18911477897 * oneJet)',
    'samples' : ['Vg'],
}

aliases['btagnorm_qqH_bonly_off'] = {
    'expr': '(4.1154406816 / 4.11023976935 * zeroJet + 18.1497062279 / 17.9814180622 * oneJet)',
    'samples' : ['qqH_bonly_off'],
}

aliases['btagnorm_VVV'] = {
    'expr': '(6.72462682558 / 6.70734445134 * zeroJet + 15.4591975855 / 15.0883975175 * oneJet)',
    'samples' : ['VVV'],
}

aliases['btagnorm_top'] = {
    'expr': '(2864.36354278 / 2873.44165138 * zeroJet + 16815.2102852 / 15120.6211579 * oneJet)',
    'samples' : ['top'],
}

aliases['btagnorm_Higgs'] = {
    'expr': '(12.8448566455 / 14.8804996733 * zeroJet + 16.2700580915 / 25.9920774039 * oneJet)',
    'samples' : ['Higgs'],
}

aliases['btagnorm_qqH_bonly_on'] = {
    'expr': '(0.000396717727711 / 0.000397666722718 * zeroJet + 0.00172416196285 / 0.00170499882648 * oneJet)',
    'samples' : ['qqH_bonly_on'],
}

aliases['btagnorm_WW'] = {
    'expr': '(4396.5863548 / 4390.84958038 * zeroJet + 1769.94065764 / 1743.39918446 * oneJet)',
    'samples' : ['WW'],
}

aliases['btagnorm_qqH_sand_on'] = {
    'expr': '(2.07842485672 / 2.08437337658 * zeroJet + 10.4004166054 / 10.2488042703 * oneJet)',
    'samples' : ['qqH_sand_on'],
}

aliases['btagnorm_ggH_bonly_on'] = {
    'expr': '(4.66183594903 / 4.66120769206 * zeroJet + 1.68996817721 / 1.66100633463 * oneJet)',
    'samples' : ['ggH_bonly_on'],
}

aliases['btagnorm_ZZ'] = {
    'expr': '(2.70835052127 / 2.731712876 * zeroJet + 2.88504639971 / 2.85757496304 * oneJet)',
    'samples' : ['ZZ'],
}

aliases['btagnorm_DY'] = {
    'expr': '(172.126661185 / 171.514937987 * zeroJet + 158.782522302 / 155.683539316 * oneJet)',
    'samples' : ['DY'],
}

aliases['btagnorm_ggH_bonly_off'] = {
    'expr': '(323.137754368 / 323.16424696 * zeroJet + 178.831580508 / 176.010372983  * oneJet)',
    'samples' : ['ggH_bonly_off'],
}

aliases['btagnorm_WZ'] = {
    'expr': '(122.234022556 / 123.32525977 * zeroJet + 143.401165648 / 143.464104052 * oneJet)',
    'samples' : ['WZ'],
}

aliases['btagnorm_qqH_sonly_on'] = {
    'expr': '(2.0782065388 / 2.08414728365 * zeroJet + 10.3989486943 / 10.24738653 * oneJet)',
    'samples' : ['qqH_sonly_on'],
}

aliases['btagnorm_qqH_sand_off'] = {
    'expr': '(3.58110191701 / 3.57660236269 * zeroJet + 15.799040334 / 15.6587226319 * oneJet)',
    'samples' : ['qqH_sand_off'],

}

aliases['btagnorm_ggH_sand_on'] = {
    'expr': '(93.4924669827 / 93.5062640437 * zeroJet + 29.1253829857 / 28.6999972321 * oneJet)',
    'samples' : ['ggH_sand_on'],
}

aliases['btagnorm_ggH_sonly_on'] = {
    'expr': '(93.2168600965 / 93.2264286027 * zeroJet + 28.9582532831 / 28.5678046802 * oneJet)',
    'samples' : ['ggH_sonly_on'],
}

aliases['btagnorm_ggH_sonly_off'] = {
    'expr': '(16.5081762057 / 16.5419899748 * zeroJet + 12.8197017021 / 12.6111711347 * oneJet)',
    'samples' : ['ggH_sonly_off'],
}

aliases['btagnorm_qqH_sonly_off'] = {
    'expr': '(0.457474692901 / 0.457403690679 * zeroJet + 2.04808382989 / 2.02464038282 * oneJet)',
    'samples' : ['qqH_sonly_off'],
}

aliases['btagnorm_ggH_sand_off'] = {
    'expr': '(309.046764385 / 308.990062778 * zeroJet + 165.340715854 / 162.654165051 * oneJet)',
    'samples' : ['ggH_sand_off'],
}

aliases['ggH_NNLO_kFactor'] = {
    'linesToAdd' : ['.L %s/src/PlotsConfigurations/Configurations/Offshell_Dilep/Tools/computeNNLOkfactor.cc' % os.getenv('CMSSW_BASE')],
    'class' : 'computeNNLOkfactor',
    'samples' : ['ggH_bonly_off', 'ggH_bonly_on', 'ggH_sand_off', 'ggH_sand_on', 'ggH_sonly_off', 'ggH_sonly_on'],
    'args': ()
}

HWW_OFFSHELL_DNN_PATH = '.L %s/src/PlotsConfigurations/Configurations/Offshell_Dilep/Tools/AddDNNScoresv7.cc+' % os.getenv('CMSSW_BASE')
aliases['dnnScore_VBF_OFF'] = {
    'linesToAdd' : [HWW_OFFSHELL_DNN_PATH],
    'class' : 'AddDNNScoresv7',
    'samples' : ['qqH_bonly_off'],
    'args': ("VBF_OFF")
}

aliases['ptll_0j'] = {
    'expr': '((0.55665 + 0.0124063 * ptll - 6.41401e-05 * ptll * ptll + 4.67229e-08 * ptll * ptll * ptll) * (ptll > 30. && ptll < 100. && zeroJet) + (1.0) * (ptll > 100. && zeroJet) + (1.0) * (oneJet))',
    'samples': ['WW', 'ggH_bonly_on', 'qqH_bonly_on']
}
