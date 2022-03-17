import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # inclusive
configurations = os.path.dirname(configurations) # Full2018_v7
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

btagWP = '0.2783' 

eleWP = 'mvaFall17V1Iso_WP90_tthmva_70'
muWP = 'cut_Tight_HWWW_tthmva_80'

aliases['BDTOutput_0j_Top'] = {
    'class': 'ww_top_bdt_0j',
    'linesToAdd' : ['.L %s/WW/FullRunII/Full2016_v7/inclusive/WW_BDT_0j.cc+' % configurations],
}

aliases['BDTOutput_1j_Top'] = {
    'class': 'ww_top_bdt_1j',
    'linesToAdd' : ['.L %s/WW/FullRunII/Full2016_v7/inclusive/WW_BDT_1j.cc+' % configurations],
}

aliases['BDTOutput_2j_Top'] = {
    'class': 'ww_top_bdt_2j',
    'linesToAdd' : ['.L %s/WW/FullRunII/Full2016_v7/inclusive/WW_BDT_2j.cc+' % configurations],
}

aliases['BDTOutput_0j_DY'] = {
    'class': 'ww_dy_bdt_0j',
    'linesToAdd' : ['.L %s/WW/FullRunII/Full2018_v7/inclusive_SF/WW_BDT_0j_DY.cc+' % configurations],
}

aliases['BDTOutput_1j_DY'] = {
    'class': 'ww_dy_bdt_1j',
    'linesToAdd' : ['.L %s/WW/FullRunII/Full2018_v7/inclusive_SF/WW_BDT_1j_DY.cc+' % configurations],
}

aliases['BDTOutput_2j_DY'] = {
    'class': 'ww_dy_bdt_2j',
    'linesToAdd' : ['.L %s/WW/FullRunII/Full2018_v7/inclusive_SF/WW_BDT_2j_DY.cc+' % configurations],
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

aliases['ZVeto'] = {
    'expr': '(fabs(91.1876 - mll) > 15)'
}


aliases['RinoutSFs_0j'] = {
    'expr': '(1.127 * (BDTOutput_0j_DY > -1 && BDTOutput_0j_DY < -0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.180 * (BDTOutput_0j_DY > -1 && BDTOutput_0j_DY < -0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet) + 1.357 * (BDTOutput_0j_DY > -0.6 && BDTOutput_0j_DY < -0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.219 * (BDTOutput_0j_DY > -0.6 && BDTOutput_0j_DY < -0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet) + 1.253 * (BDTOutput_0j_DY > -0.3 && BDTOutput_0j_DY < 0.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.294 * (BDTOutput_0j_DY > -0.3 && BDTOutput_0j_DY < 0.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet) + 1.358 * (BDTOutput_0j_DY > 0.0 && BDTOutput_0j_DY < 0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.471 * (BDTOutput_0j_DY > 0.0 && BDTOutput_0j_DY < 0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet) + 1.329 * (BDTOutput_0j_DY > 0.3 && BDTOutput_0j_DY < 0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.383 * (BDTOutput_0j_DY > 0.3 && BDTOutput_0j_DY < 0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet) + 1.539 * (BDTOutput_0j_DY > 0.6 && BDTOutput_0j_DY < 0.9 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.702 * (BDTOutput_0j_DY > 0.6 && BDTOutput_0j_DY < 0.9 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet) + 2.214 * (BDTOutput_0j_DY > 0.9 && BDTOutput_0j_DY < 1.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.778 * (BDTOutput_0j_DY > 0.9 && BDTOutput_0j_DY < 1.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet))',
    'samples': mc
}



aliases['RinoutSFs_1j'] = {
    'expr': '(1.027 * (BDTOutput_0j_DY > -1 && BDTOutput_0j_DY < -0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 0.996 * (BDTOutput_0j_DY > -1 && BDTOutput_0j_DY < -0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet) + 1.025 * (BDTOutput_0j_DY > -0.6 && BDTOutput_0j_DY < -0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 0.933 * (BDTOutput_0j_DY > -0.6 && BDTOutput_0j_DY < -0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet) + 1.063 * (BDTOutput_0j_DY > -0.3 && BDTOutput_0j_DY < 0.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 1.051 * (BDTOutput_0j_DY > -0.3 && BDTOutput_0j_DY < 0.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet) + 1.166 * (BDTOutput_0j_DY > 0.0 && BDTOutput_0j_DY < 0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 1.099 * (BDTOutput_0j_DY > 0.0 && BDTOutput_0j_DY < 0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet) + 1.251 * (BDTOutput_0j_DY > 0.3 && BDTOutput_0j_DY < 0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 1.116 * (BDTOutput_0j_DY > 0.3 && BDTOutput_0j_DY < 0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet) + 1.262 * (BDTOutput_0j_DY > 0.6 && BDTOutput_0j_DY < 0.9 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 1.290 * (BDTOutput_0j_DY > 0.6 && BDTOutput_0j_DY < 0.9 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet) + 2.063 * (BDTOutput_0j_DY > 0.9 && BDTOutput_0j_DY < 1.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 1.356 * (BDTOutput_0j_DY > 0.9 && BDTOutput_0j_DY < 1.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet))',
    'samples': mc
}



aliases['RinoutSFs_2j'] = {
    'expr': '(1.190 * (BDTOutput_0j_DY > -1 && BDTOutput_0j_DY < -0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 1.086 * (BDTOutput_0j_DY > -1 && BDTOutput_0j_DY < -0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet) + 1.308 * (BDTOutput_0j_DY > -0.6 && BDTOutput_0j_DY < -0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 1.222 * (BDTOutput_0j_DY > -0.6 && BDTOutput_0j_DY < -0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet) + 1.293 * (BDTOutput_0j_DY > -0.3 && BDTOutput_0j_DY < 0.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 1.241 * (BDTOutput_0j_DY > -0.3 && BDTOutput_0j_DY < 0.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet) + 1.266 * (BDTOutput_0j_DY > 0.0 && BDTOutput_0j_DY < 0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 1.315 * (BDTOutput_0j_DY > 0.0 && BDTOutput_0j_DY < 0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet) + 1.347 * (BDTOutput_0j_DY > 0.3 && BDTOutput_0j_DY < 0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 1.314 * (BDTOutput_0j_DY > 0.3 && BDTOutput_0j_DY < 0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet) + 1.502 * (BDTOutput_0j_DY > 0.6 && BDTOutput_0j_DY < 0.9 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 1.510 * (BDTOutput_0j_DY > 0.6 && BDTOutput_0j_DY < 0.9 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet) + 1.792 * (BDTOutput_0j_DY > 0.9 && BDTOutput_0j_DY < 1.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 1.930 * (BDTOutput_0j_DY > 0.9 && BDTOutput_0j_DY < 1.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet))',
    'samples': mc
}

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc + ['DATA']
}

aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
    'samples': mc
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': mc
}

aliases['embedtotal'] = {
    'expr': 'embed_total_WP90V1',  # wrt. eleWP
    'samples': 'Dyemb'
}

# Fake leptons transfer factor 
aliases['fakeW'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP,
    'samples': ['Fake']
}
# And variations - already divided by central values in formulas !
aliases['fakeWEleUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleUp',
    'samples': ['Fake']
}
aliases['fakeWEleDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleDown',
    'samples': ['Fake']
}
aliases['fakeWMuUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuUp',
    'samples': ['Fake']
}
aliases['fakeWMuDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuDown',
    'samples': ['Fake']
}
aliases['fakeWStatEleUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleUp',
    'samples': ['Fake']
}
aliases['fakeWStatEleDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleDown',
    'samples': ['Fake']
}
aliases['fakeWStatMuUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuUp',
    'samples': ['Fake']
}
aliases['fakeWStatMuDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuDown',
    'samples': ['Fake']
}

# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}

# PostProcessing did not create (anti)topGenPt for ST samples with _ext1
aliases['Top_pTrw'] = {
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) + (topGenPt * antitopGenPt <= 0.)',
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


# B tagging

aliases['bVeto'] = {
    'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+btagWP+') == 0'
}

aliases['bReq'] = {
    'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+btagWP+') >= 1'
}

# CR definitions

aliases['topcr'] = {
    'expr': '(ZVeto && ((Sum$(CleanJet_pt > 30.) == 0 && !bVeto) || bReq))'
}

# B tag scale factors

aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btagSF'] = {
    'expr': '(bVeto || (topcr && Sum$(CleanJet_pt > 30.) == 0))*bVetoSF + (topcr && Sum$(CleanJet_pt > 30.) > 0)*bReqSF',
    'samples': mc
}

for shift in ['jes', 'lf', 'hf', 'lfstats1', 'lfstats2', 'hfstats1', 'hfstats2', 'cferr1', 'cferr2']:
    for targ in ['bVeto', 'bReq']:
        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_up_%s' % shift)

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_down_%s' % shift)

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
    'expr': ' * '.join(['SFweight2l', 'LepWPCut', 'LepSF2l__ele_' + eleWP + '__mu_' + muWP, 'btagSF', 'Jet_PUIDSF']),
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

'''
aliases['Weight2MINLO'] = {
    'class': 'Weight2MINLO',
    'args': '%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE'),
    'linesToAdd': ['.L %s/Differential/weight2MINLO.cc+' % configurations],
    'samples' : [skey for skey in samples if 'ggH_hww' in skey],
}


# GGHUncertaintyProducer wasn't run for GluGluHToWWTo2L2Nu_M125
thus = [
    'ggH_mu',
    'ggH_res',
    'ggH_mig01',
    'ggH_mig12',
    'ggH_VBF2j',
    'ggH_VBF3j',
    'ggH_pT60',
    'ggH_pT120',
    'ggH_qmtop'
]

for thu in thus:
    aliases[thu] = {
        'linesToAdd': ['.L %s/Differential/gghuncertainty.cc+' % configurations],
        'class': 'GGHUncertainty',
        'args': (thu,),
        'samples': [skey for skey in samples if 'ggH_hww' in skey],
        'nominalOnly': True
    }

thusQQ = [
  "qqH_YIELD",
  "qqH_PTH200",
  "qqH_Mjj60",
  "qqH_Mjj120",
  "qqH_Mjj350",
  "qqH_Mjj700",
  "qqH_Mjj1000",
  "qqH_Mjj1500",
  "qqH_PTH25",
  "qqH_JET01",
  "qqH_EWK",
]

for thu in thusQQ:
    aliases[thu] = {
        'linesToAdd': ['.L %s/patches/qqhuncertainty.cc+' % configurations],
        'class': 'QQHUncertainty',
        'args': (thu,),
        'samples': ['qqH_hww'],
        'nominalOnly': True
    }
'''
aliases['B0'] = {
    'expr' : '1',
    'samples' : ['WW','ggWW']
}

aliases['fid'] = {
    'expr' : 'fiducial',
    'samples' : ['WW','ggWW']
}


# aliases['BDTOutput_2j_DY'] = {
#     'class': 'ww_dy_bdt_2j',
#     'linesToAdd' : ['.L %s/WW/FullRunII/Full2018_v7/inclusive_SF/WW_BDT_2j.cc+' % configurations],
# }


