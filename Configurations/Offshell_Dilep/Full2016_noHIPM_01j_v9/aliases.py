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
    'args'       : ("2016noHIPM", 2, "all","nominal"),
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
    'args'       : ('2016_noHIPM', '90', '82', 0.90, 0.82, 'nominal', 2, "std"),
    'samples'    : ['Fake']
}

# And variations - already divided by central values in formulas !
aliases['fakeWEleUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_noHIPM', '90', '82', 0.90, 0.82, 'EleUp', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWEleDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_noHIPM', '90', '82', 0.90, 0.82, 'EleDown', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWMuUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_noHIPM', '90', '82', 0.90, 0.82, 'MuUp', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWMuDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_noHIPM', '90', '82', 0.90, 0.82, 'MuDown', 2, "std"),
    'samples'    : ['Fake']
}

aliases['fakeWStatEleUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_noHIPM', '90', '82', 0.90, 0.82, 'StatEleUp', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWStatEleDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_noHIPM', '90', '82', 0.90, 0.82, 'StatEleDown', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWStatMuUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_noHIPM', '90', '82', 0.90, 0.82, 'StatMuUp', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWStatMuDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2016_noHIPM', '90', '82', 0.90, 0.82, 'StatMuDown', 2, "std"),
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

# B tagging

############################################################################################
# b tagging WPs: https://twiki.cern.ch/twiki/bin/view/CMS/BtagRecommendation106XUL16postVFP
############################################################################################

# DeepB = DeepCSV
bWP_loose_deepB  = '0.1918'
bWP_medium_deepB = '0.5847'
bWP_tight_deepB  = '0.8767'

# DeepFlavB = DeepJet
bWP_loose_deepFlavB  = '0.0480'
bWP_medium_deepFlavB = '0.2489'
bWP_tight_deepFlavB  = '0.6377'

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
    'args'       : ("2016noHIPM", 2, "all", "eleUp"),
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
    'args'       : ("2016noHIPM", 2, "all", "eleDown"),
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
    'args'       : ("2016noHIPM", 2, "all", "muUp"),
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
    'args'       : ("2016noHIPM", 2, "all", "muDown"),
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


##TC 2024
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
    'expr': '(8.3709950021 / 8.52747707646 * zeroJet + 7.28908544798 / 7.59515858209 * oneJet)',
    'samples' : ['Vg'],
}

aliases['btagnorm_qqH_bonly_off'] = {
    'expr': '(3.66738086292 / 3.69995831491 * zeroJet + 16.0748815129 / 16.0939543412 * oneJet)',
    'samples' : ['qqH_bonly_off'],
}

aliases['btagnorm_VVV'] = {
    'expr': '(5.80263940596 / 5.9678623098 * zeroJet + 12.5179565984 / 12.3532333485 * oneJet)',
    'samples' : ['VVV'],
}

aliases['btagnorm_top'] = {
    'expr': '(2462.96102203 / 2489.49745866 * zeroJet + 14690.3494783 / 13259.3701498 * oneJet)',
    'samples' : ['top'],
}

aliases['btagnorm_Higgs'] = {
    'expr': '(11.2655496624 / 11.5385981518 * zeroJet + 14.5716680993 / 14.5263780445 * oneJet)',
    'samples' : ['Higgs'],
}

aliases['btagnorm_qqH_bonly_on'] = {
    'expr': '(0.00027723385257 / 0.000274256729805 * zeroJet + 0.00148881108473 / 0.00147901635386 * oneJet)',
    'samples' : ['qqH_bonly_on'],
}

aliases['btagnorm_WW'] = {
    'expr': '(3742.63379549 / 3769.08630652 * zeroJet + 1523.81371642 / 1530.15053244 * oneJet)',
    'samples' : ['WW'],
}

aliases['btagnorm_qqH_sand_on'] = {
    'expr': '(1.4802426169 / 1.49806754598 * zeroJet + 8.39274027565 / 8.31737895888 * oneJet)',
    'samples' : ['qqH_sand_on'],
}

aliases['btagnorm_ggH_bonly_on'] = {
    'expr': '(3.99516477795 / 4.0340398581 * zeroJet + 1.55727993248 / 1.5635567979 * oneJet)',
    'samples' : ['ggH_bonly_on'],
}

aliases['btagnorm_ZZ'] = {
    'expr': '(2.4323586987 / 2.50392675717 * zeroJet + 2.9705956303 / 3.0910799241 * oneJet)',
    'samples' : ['ZZ'],
}

aliases['btagnorm_DY'] = {
    'expr': '(153.966300833 / 156.086690506 * zeroJet + 163.891171837 / 165.086224723 * oneJet)',
    'samples' : ['DY'],
}

aliases['btagnorm_ggH_bonly_off'] = {
    'expr': '(279.754866948 / 282.248361315 * zeroJet + 156.654851794 / 156.79063006  * oneJet)',
    'samples' : ['ggH_bonly_off'],
}

aliases['btagnorm_WZ'] = {
    'expr': '(106.211686534 / 109.086640072 * zeroJet + 121.993221959 / 126.399559391 * oneJet)',
    'samples' : ['WZ'],
}

aliases['btagnorm_qqH_sonly_on'] = {
    'expr': '(1.48005322701 / 1.49788073056 * zeroJet + 8.39133017874 / 8.31596142077 * oneJet)',
    'samples' : ['qqH_sonly_on'],
}

aliases['btagnorm_qqH_sand_off'] = {
    'expr': '(3.18816993577 / 3.21577715833 * zeroJet + 13.9996083846 / 14.0206024261 * oneJet)',
    'samples' : ['qqH_sand_off'],

}

aliases['btagnorm_ggH_sand_on'] = {
    'expr': '(79.4917528124 / 80.1303628477 * zeroJet + 25.3591805853 / 25.4341578567 * oneJet)',
    'samples' : ['ggH_sand_on'],
}

aliases['btagnorm_ggH_sonly_on'] = {
    'expr': '(80.507896025 / 81.122375484 * zeroJet + 25.1994847456 / 25.240886964 * oneJet)',
    'samples' : ['ggH_sonly_on'],
}

aliases['btagnorm_ggH_sonly_off'] = {
    'expr': '(14.3000842371 / 14.4260619603 * zeroJet + 11.4144920677 / 11.4032476373 * oneJet)',
    'samples' : ['ggH_sonly_off'],
}

aliases['btagnorm_qqH_sonly_off'] = {
    'expr': '(0.404398202513 / 0.408128993729 * zeroJet + 1.79721323531 / 1.79588012809 * oneJet)',
    'samples' : ['qqH_sonly_off'],
}

aliases['btagnorm_ggH_sand_off'] = {
    'expr': '(265.79197928 / 268.109463625 * zeroJet + 146.023295415 / 145.955674995 * oneJet)',
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
