##running 0 jet
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

HWW_OFFSHELL_DNN_PATH0jet = '.L %s/src/PlotsConfigurations/Configurations/Offshell_Dilep/Tools/AddDNNScoresv1_0jet.cc+' % os.getenv('CMSSW_BASE')
HWW_OFFSHELL_DNN_PATH1jet = '.L %s/src/PlotsConfigurations/Configurations/Offshell_Dilep/Tools/AddDNNScoresv1_1jet.cc+' % os.getenv('CMSSW_BASE')


#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

eleWP='mvaFall17V1Iso_WP90'
muWP='cut_Tight_HWWW'

###DNN initiatlization#######

##Add 0j on each and add 1j

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
aliases['dnnScore_MAX_0j'] = {
    'linesToAdd' : [HWW_OFFSHELL_DNN_PATH0jet],
    'class' : 'AddDNNScoresv1_0jet',
    'args': ("MAX",)
}

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
aliases['dnnScore_MAX_1j'] = {
    'linesToAdd' : [HWW_OFFSHELL_DNN_PATH1jet],
    'class' : 'AddDNNScoresv1_1jet',
    'args': ("MAX",)
}

#####DNN complete#######

eleWP = 'mvaFall17V2Iso_WP90'
muWP  = 'cut_Tight_HWWW'

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP+'*\
     ( ((abs(Lepton_pdgId[0])==13 && Muon_mvaTTH[Lepton_muonIdx[0]]>0.82) || (abs(Lepton_pdgId[0])==11 && Lepton_mvaTTH_UL[0]>0.90)) \
    && ((abs(Lepton_pdgId[1])==13 && Muon_mvaTTH[Lepton_muonIdx[1]]>0.82) || (abs(Lepton_pdgId[1])==11 && Lepton_mvaTTH_UL[1]>0.90)) )',
    'samples': mc + ['DATA']
}

aliases['ttHMVAULSF'] = {
    'linesToAdd' : ['.L %s/WW/FullRunII/ttHMVASF.C+' % configurations],
    'class'      : 'ttHMVASF',
    'args'       : ("2018", 2, "all","nominal"),
    'samples'    : mc
}

aliases['LepWPSF'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc
}

aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 4',
    'samples': mc
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass < 0 || Gen_ZGstar_mass > 4',
    'samples': mc
}

# Fake leptons transfer factor
aliases['fakeW'] = {
    'linesToAdd' : ['.L %s/WW/FullRunII/Tools/fake_rate_reader.C+' % configurations],
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'nominal', 2, "std"),
    'samples'    : ['Fake']
}

# And variations - already divided by central values in formulas !
aliases['fakeWEleUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'EleUp', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWEleDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'EleDown', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWMuUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'MuUp', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWMuDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'MuDown', 2, "std"),
    'samples'    : ['Fake']
}

aliases['fakeWStatEleUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'StatEleUp', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWStatEleDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'StatEleDown', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWStatMuUp'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'StatMuUp', 2, "std"),
    'samples'    : ['Fake']
}
aliases['fakeWStatMuDown'] = {
    'class'      : 'fake_rate_reader',
    'args'       : ('2018', '90', '82', 0.90, 0.82, 'StatMuDown', 2, "std"),
    'samples'    : ['Fake']
}

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

# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}

####################################################################################
# b tagging WPs: https://btv-wiki.docs.cern.ch/ScaleFactors/UL2018/
####################################################################################

# DeepB = DeepCSV
bWP_loose_deepB  = '0.1208'
bWP_medium_deepB = '0.4168' 
bWP_tight_deepB  = '0.7665'

# DeepFlavB = DeepJet
bWP_loose_deepFlavB  = '0.0490'
bWP_medium_deepFlavB = '0.2783'
bWP_tight_deepFlavB  = '0.7100'

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
    'expr': '((zeroJet && dnnScore_top_0j > .5) || (oneJet && dnnScore_top_1j > .5)) * ((Sum$(CleanJet_pt > 30.) == 0 && !bVeto) || bReq)' ##uncomment for real run!
#    'expr': '(zeroJet || oneJet * ((Sum$(CleanJet_pt > 30.) == 0 && !bVeto) || bReq)' ##TC May 2024 for SF - match cuts.py
} ##combined 0 and 1 jet definition

# Overall b tag SF
aliases['btagSF'] = {
    'expr': '(bVeto || (topcr && Sum$(CleanJet_pt > 30.) == 0))*bVetoSF + (topcr && Sum$(CleanJet_pt > 30.) > 0)*bReqSF',
    'samples': mc
}

for shift in ['lf', 'hf', 'lfstats1', 'lfstats2', 'hfstats1', 'hfstats2', 'cferr1', 'cferr2']:
    for targ in ['bVeto', 'bReq']:
        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_{}_shape'.format(bSF), 'btagSF_{}_shape_up_{}'.format(bSF, shift))
        alias['nominalOnly'] = True

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_{}_shape'.format(bSF), 'btagSF_{}_shape_down_{}'.format(bSF, shift))
        alias['nominalOnly'] = True

    aliases['btagSF%sup' % shift] = {
        'expr': aliases['btagSF']['expr'].replace('SF', 'SF' + shift + 'up'),
        'samples': mc,
        'nominalOnly': True
    }

    aliases['btagSF%sdown' % shift] = {
        'expr': aliases['btagSF']['expr'].replace('SF', 'SF' + shift + 'down'),
        'samples': mc,
        'nominalOnly': True
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
aliases['getGenZpt_OTF'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/patches/getGenZpt.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'getGenZpt',
    'samples': ['DY']
}
handle = open('%s/src/PlotsConfigurations/Configurations/patches/DYrew30.py' % os.getenv('CMSSW_BASE'),'r')
exec(handle)
handle.close()
aliases['DY_NLO_pTllrw'] = {
    'expr': '('+DYrew['2018']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY']
}
aliases['DY_LO_pTllrw'] = {
    'expr': '('+DYrew['2018']['LO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY']
}

aliases['Jet_PUIDSF'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose)))',
  'samples': mc
}

aliases['Jet_PUIDSF_up'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose_up)))',
  'samples': mc,
  'nominalOnly' : True
}

aliases['Jet_PUIDSF_down'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose_down)))',
  'samples': mc,
  'nominalOnly' : True
}

# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2l', 'LepWPCut', 'LepWPSF','Jet_PUIDSF', 'btagSF', 'ttHMVAULSF']),
    'samples': mc
}

# ttHMVA, LepSF variations are 1+delta
# Combining uncertainties, we want 1+sqrt(delta1^2+delta2^2)
aliases['ttHMVASFUL_eleUp'] = {
    'class'      : 'ttHMVASF',
    'args'       : ("2018", 2, "all", "eleUp"),
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
    'args'       : ("2018", 2, "all", "eleDown"),
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
    'args'       : ("2018", 2, "all", "muUp"),
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
    'args'       : ("2018", 2, "all", "muDown"),
    'samples'    : mc,
    'nominalOnly': 1
}
aliases['SFweightMuDown'] = {
    'expr': '1-TMath::Sqrt(TMath::Power(LepSF2l__mu_'+muWP+'__Do-1,2)+TMath::Power(ttHMVAULSF_muDown-1,2))',
    'samples': mc,
    'nominalOnly': 1
}
##used for splitting; we have branch mWW for wgt (samples.py)

##TC 2024 -- keep for processing certain sample

aliases['LHE_mWW'] = {
    'linesToAdd' : ['.L %s/src/PlotsConfigurations/Configurations/Offshell_Dilep/Tools/computeLHEmWW.cc' % os.getenv('CMSSW_BASE')],
    'class' : 'computeLHEmWW',
    'samples' : ['ggH_bonly_off', 'ggH_bonly_on', 'ggH_sand_off', 'ggH_sand_on', 'ggH_sonly_off', 'ggH_sonly_on'],
    'args': ()
}

# aliases['LHE_mWW'] = {
#     'linesToAdd' : ['.L %s/src/PlotsConfigurations/Configurations/Offshell_Dilep/Tools/computeLHEmWW.cc' % os.getenv('CMSSW_BASE')],
#     'class' : 'computeLHEmWW',
#     'samples' : ['ggH_bonly_off', 'ggH_bonly_on', 'ggH_sand_off', 'ggH_sand_on', 'ggH_sonly_off', 'ggH_sonly_on'],
#     'args': ()
# }

##TC normalization
# aliases['norm_njet'] = {
#     'expr': '(0.985 * (zeroJet && LHE_mWW <= 160) + 1.692 * (oneJet && LHE_mWW <= 160) + 4.805 * (multiJet && LHE_mWW <= 160) + 0.955 * (zeroJet && LHE_mWW > 160) + 0.794 * (oneJet && LHE_mWW > 160) + 0.823 * (multiJet && LHE_mWW > 160))',
#     'samples' : ['ggH_bonly_off', 'ggH_bonly_on', 'ggH_sand_off', 'ggH_sand_on', 'ggH_sonly_off', 'ggH_sonly_on'],
# }

aliases['norm_njet'] = {
    'expr': '(2.7839950 * (zeroJet && LHE_mWW <= 160) + 4.6491455 * (oneJet && LHE_mWW <= 160) + 12.881013 * (multiJet && LHE_mWW <= 160) + 2.6366729 * (zeroJet && LHE_mWW > 160) + 2.1922905 * (oneJet && LHE_mWW > 160) + 2.2564790 * (multiJet && LHE_mWW > 160))',
    'samples' : ['ggH_bonly_off', 'ggH_bonly_on', 'ggH_sand_off', 'ggH_sand_on', 'ggH_sonly_off', 'ggH_sonly_on'],
}

aliases['btagnorm_Vg'] = {
    'expr': '(18.6674765356 / 18.6785556482 * zeroJet + 16.8870788449 / 17.0351095305 * oneJet)',
    'samples' : ['Vg'],
}

aliases['btagnorm_qqH_bonly_off'] = {
    'expr': '(11.6461471383 / 11.6658388208 * zeroJet + 54.1554642709 / 53.9210714134 * oneJet)',
    'samples' : ['qqH_bonly_off'],
}

aliases['btagnorm_VVV'] = {
    'expr': '(18.7437919714 / 18.8964007526 * zeroJet + 45.7372199885 / 44.3173457858 * oneJet)',
    'samples' : ['VVV'],
}

aliases['btagnorm_top'] = {
    'expr': '(8418.47286106 / 8388.95170962 * zeroJet + 51303.4303005 / 45950.5258618 * oneJet)',
    'samples' : ['top'],
}

aliases['btagnorm_Higgs'] = {
    'expr': '(32.1904363026 / 37.6365326295 * zeroJet + 44.3645948804 / 74.8453827219 * oneJet)',
    'samples' : ['Higgs'],
}

aliases['btagnorm_qqH_bonly_on'] = {
    'expr': '(0.00109149607178 / 0.00109329036783 * zeroJet + 0.00519059071856 / 0.00516143629503 * oneJet)',
    'samples' : ['qqH_bonly_on'],
}

aliases['btagnorm_WW'] = {
    'expr': '(13173.8464907 / 13187.89789 * zeroJet + 5811.45777013 / 5757.20995646 * oneJet)',
    'samples' : ['WW'],
}

aliases['btagnorm_qqH_sand_on'] = {
    'expr': '(5.06703708287 / 5.05911367399 * zeroJet + 30.9367075097 / 30.6528813399 * oneJet)',
    'samples' : ['qqH_sand_on'],
}

aliases['btagnorm_ggH_bonly_on'] = {
    'expr': '(13.6131974827 / 13.6156798125 * zeroJet + 5.55476472142 / 5.47997920836 * oneJet)',
    'samples' : ['ggH_bonly_on'],
}

aliases['btagnorm_ZZ'] = {
    'expr': '(7.45085572639 / 7.52211457513 * zeroJet + 9.1221298821 / 9.37114598792 * oneJet)',
    'samples' : ['ZZ'],
}

aliases['btagnorm_DY'] = {
    'expr': '(411.103785594 / 411.856079666 * zeroJet + 527.104712991 / 526.999192484 * oneJet)',
    'samples' : ['DY'],
}

aliases['btagnorm_ggH_bonly_off'] = {
    'expr': '(963.929494719 / 963.87917819 * zeroJet + 573.946894401 / 565.65930494 * oneJet)',
    'samples' : ['ggH_bonly_off'],
}

aliases['btagnorm_WZ'] = {
    'expr': '(359.039645212 / 362.121780433 * zeroJet + 452.070742507 / 467.022146097 * oneJet)',
    'samples' : ['WZ'],
}

aliases['btagnorm_qqH_sonly_on'] = {
    'expr': '(5.06624453477 / 5.05830624994 * zeroJet + 30.9353562617 / 30.6516111269 * oneJet)',
    'samples' : ['qqH_sonly_on'],
}

aliases['btagnorm_qqH_sand_off'] = {
    'expr': '(10.0513026354 / 10.0683193663 * zeroJet + 46.8527896189 / 46.6647178564 * oneJet)',
    'samples' : ['qqH_sand_off'],

}

aliases['btagnorm_ggH_sand_on'] = {
    'expr': '(271.745165913 / 271.773726277 * zeroJet + 94.2353545346 / 92.9814496238 * oneJet)',
    'samples' : ['ggH_sand_on'],
}

aliases['btagnorm_ggH_sonly_on'] = {
    'expr': '(272.459048607 / 272.498387373 * zeroJet + 93.8180769091 / 92.4695618313 * oneJet)',
    'samples' : ['ggH_sonly_on'],
}

aliases['btagnorm_ggH_sonly_off'] = {
    'expr': '(49.0493036742 / 49.0351361851 * zeroJet + 41.4924522336 / 40.8699246532 * oneJet)',
    'samples' : ['ggH_sonly_off'],
}

aliases['btagnorm_qqH_sonly_off'] = {
    'expr': '(1.32546853709 / 1.32731490308 * zeroJet + 6.40309408103 / 6.37014126115 * oneJet)',
    'samples' : ['qqH_sonly_off'],
}

aliases['btagnorm_ggH_sand_off'] = {
    'expr': '(917.91893705 / 917.931927039 * zeroJet + 535.301174206 / 527.923571898 * oneJet)',
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
