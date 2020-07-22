import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2016
configurations = os.path.dirname(configurations) # ggH SF
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

eleWP = 'mva_90p_Iso2016'
muWP = 'cut_Tight80x'
newMuWP = 'cut_Tight80x_tthmva_80'


aliases['LepWPCut'] = {
    #'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP,
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP+'*( (abs(Lepton_pdgId[0])==11 || Muon_mvaTTH[Lepton_muonIdx[0]]>0.8) && (abs(Lepton_pdgId[1])==11 || Muon_mvaTTH[Lepton_muonIdx[1]]>0.8) )',    
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
aliases['fakeW'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP,
    'samples': ['Fake']
}
# And variations - already divided by central values in formulas !
aliases['fakeWEleUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_EleUp',
    'samples': ['Fake']
}
aliases['fakeWEleDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_EleDown',
    'samples': ['Fake']
}
aliases['fakeWMuUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_MuUp',
    'samples': ['Fake']
}
aliases['fakeWMuDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_MuDown',
    'samples': ['Fake']
}
aliases['fakeWStatEleUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_statEleUp',
    'samples': ['Fake']
}
aliases['fakeWStatEleDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_statEleDown',
    'samples': ['Fake']
}
aliases['fakeWStatMuUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_statMuUp',
    'samples': ['Fake']
}
aliases['fakeWStatMuDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+newMuWP+'_statMuDown',
    'samples': ['Fake']
}

# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}

aliases['Top_pTrw'] = {
    #'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPt) * TMath::Exp(0.0615 - 0.0005 * antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)',
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(-0.158631 + 2.00214e-04*topGenPt - 3.09496e-07*topGenPt*topGenPt + 34.93/(topGenPt+135.633)) * TMath::Exp(-0.158631 + 2.00214e-04*antitopGenPt - 3.09496e-07*antitopGenPt*antitopGenPt + 34.93/(antitopGenPt+135.633)))) + (topGenPt * antitopGenPt <= 0.)',
    'samples': ['top']
}

# Jet bins
# using Alt$(CleanJet_pt[n], 0) instead of Sum$(CleanJet_pt >= 30) because jet pt ordering is not strictly followed in JES-varied samples

# No jet with pt > 30 GeV
aliases['zeroJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) < 30.'
}

aliases['oneJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) >= 30. && Alt$(CleanJet_pt[1], 0) < 30.'
}

aliases['multiJet'] = {
    'expr': 'Alt$(CleanJet_pt[1], 0) >= 30.'
}

aliases['2jVH'] = {
'expr': '( Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && ( mjj >= 65 && mjj <= 105 ) )'
}

aliases['2jVBF'] = {
'expr': '( Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && mjj>=350 )'
}

aliases['2jggH'] = {
'expr': '( Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && (!2jVH && !2jVBF ) )'
}

# B tagging

aliases['bVeto'] = {
    'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0'
}

aliases['bReq'] = {
    'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) >= 1'
}

# SR definition

aliases['ZVeto'] = {
'expr': '(fabs(91.1876 - mll) > 15)'
}

aliases['sr'] = {
'expr': 'bVeto && ZVeto'
}

aliases['Higgs0jet'] = {
'expr': '(mll < 60 && mth > 90 && abs(dphill) < 2.30)'
}
aliases['Higgs1jet'] = {
'expr': '(mll < 60 && mth > 80 && abs(dphill) < 2.25)'
}
aliases['Higgs2jet'] = {
'expr': '(mll < 60 && mth > 65 && mth < 150)'
}
aliases['Higgsvh'] = {
'expr': '(mll < 60 && mth > 60 && mth < 150 && abs(dphill) < 1.60)'
}
aliases['Higgsvbf'] = {
'expr': '(mll < 60 && mth > 60 && mth < 150 && abs(dphill) < 1.60)'
}

# CR definitions

aliases['topcr'] = {
    'expr': 'mtw2>30 && mll>50 && ((zeroJet && !bVeto) || bReq)'
}

aliases['dycr'] = {
    'expr': 'mth<60 && mll>40 && mll<80 && bVeto'
}

aliases['Zpeak'] = {
    'expr': 'fabs(91.1876 - mll) < 7.5'
}

aliases['wwcr'] = {
    'expr': 'mth>60 && mtw2>30 && mll>100 && bVeto && ZVeto'
}

# B tag scale factors

aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btagSF'] = {
    'expr': '(bVeto || (topcr && zeroJet))*bVetoSF + (topcr && !zeroJet)*bReqSF',
    'samples': mc
}

for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:

    for targ in ['bVeto', 'bReq']:
        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_shape', 'btagSF_shape_up_%s' % shift)

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_shape', 'btagSF_shape_down_%s' % shift)

    aliases['btagSF%sup' % shift] = {
        'expr': aliases['btagSF']['expr'].replace('SF', 'SF' + shift + 'up'),
        'samples': mc
    }

    aliases['btagSF%sdown' % shift] = {
        'expr': aliases['btagSF']['expr'].replace('SF', 'SF' + shift + 'down'),
        'samples': mc
    }

#puidSFSource = '{}/patches/PUID_80XTraining_EffSFandUncties.root'.format(configurations)

#aliases['PUJetIdSF'] = {
#    'linesToAdd': [
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
#        '.L %s/patches/pujetidsf_event_new.cc+' % configurations
#    ],
#    'class': 'PUJetIdEventSF',
#    'args': (puidSFSource, '2016', 'loose'),
#    'samples': mc
#}


aliases['ttHMVA_SF_2l'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                           'class': 'compute_SF',
                           'args' : ('2016', 2, 'total_SF'),
                           'samples': mc
                          }



# data/MC scale factors
aliases['SFweight'] = {
    #'expr': ' * '.join(['SFweight2l', 'LepSF2l__ele_' + eleWP + '__mu_' + muWP, 'LepWPCut', 'btagSF', 'PrefireWeight']),
    'expr': ' * '.join(['SFweight2l', 'ttHMVA_SF_2l', 'LepWPCut', 'btagSF', 'PrefireWeight']),
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



aliases['ttHMVA_SF_Up_0'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                             'class': 'compute_SF',
                             'args' : ('2016', 2, 'single_SF_up', 0),
                             'samples': mc
                            }
aliases['ttHMVA_SF_Up_1'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                             'class': 'compute_SF',
                             'args' : ('2016', 2, 'single_SF_up', 1),
                             'samples': mc
                            }
aliases['ttHMVA_SF_Down_0'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                               'class': 'compute_SF',
                               'args' : ('2016', 2, 'single_SF_down', 0),
                               'samples': mc
                              }
aliases['ttHMVA_SF_Down_1'] = {'linesToAdd': ['.L %s/patches/compute_SF.C+' % configurations],
                               'class': 'compute_SF',
                               'args' : ('2016', 2, 'single_SF_down', 1),
                               'samples': mc
                              }
aliases['ttHMVA_2l_mu_SF_Up'] = {'expr' : '(ttHMVA_SF_Up_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                           (ttHMVA_SF_Up_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11))',
                                 'samples': mc
                                }
aliases['ttHMVA_2l_mu_SF_Down'] = {'expr' : '(ttHMVA_SF_Down_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                             (ttHMVA_SF_Down_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11))',
                                   'samples': mc
                                  }


aliases['nllWOTF'] = {
    'linesToAdd': ['.L %s/Differential/nllW.cc+' % configurations],
    'class': 'WWNLLW',
    'args': ('central',),
    'samples': ['WW']
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

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/Differential/ngenjet.cc+' % configurations],
    'class': 'CountGenJet',
    'samples': mc
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
