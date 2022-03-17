import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # inclusive
configurations = os.path.dirname(configurations) # Full2017_v7
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]
btag_algo="deepcsv"#deepflav
btagWP = '0.3040'

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
    'expr': '(1.166 * (BDTOutput_0j_DY > -1 && BDTOutput_0j_DY < -0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.146 * (BDTOutput_0j_DY > -1 && BDTOutput_0j_DY < -0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet) + 1.204 * (BDTOutput_0j_DY > -0.6 && BDTOutput_0j_DY < -0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.150 * (BDTOutput_0j_DY > -0.6 && BDTOutput_0j_DY < -0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet) + 1.331 * (BDTOutput_0j_DY > -0.3 && BDTOutput_0j_DY < 0.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.306 * (BDTOutput_0j_DY > -0.3 && BDTOutput_0j_DY < 0.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet) + 1.191 * (BDTOutput_0j_DY > 0.0 && BDTOutput_0j_DY < 0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.338 * (BDTOutput_0j_DY > 0.0 && BDTOutput_0j_DY < 0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet) + 1.526 * (BDTOutput_0j_DY > 0.3 && BDTOutput_0j_DY < 0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.389 * (BDTOutput_0j_DY > 0.3 && BDTOutput_0j_DY < 0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet) + 1.799 * (BDTOutput_0j_DY > 0.6 && BDTOutput_0j_DY < 0.9 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.365 * (BDTOutput_0j_DY > 0.6 && BDTOutput_0j_DY < 0.9 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet) + 1.766 * (BDTOutput_0j_DY > 0.9 && BDTOutput_0j_DY < 1.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && zeroJet) + 1.054 * (BDTOutput_0j_DY > 0.9 && BDTOutput_0j_DY < 1.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && zeroJet))',
    'samples': mc
}


aliases['RinoutSFs_1j'] = {
    'expr': '(1.094 * (BDTOutput_0j_DY > -1 && BDTOutput_0j_DY < -0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 0.920 * (BDTOutput_0j_DY > -1 && BDTOutput_0j_DY < -0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet) + 0.943 * (BDTOutput_0j_DY > -0.6 && BDTOutput_0j_DY < -0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 0.977 * (BDTOutput_0j_DY > -0.6 && BDTOutput_0j_DY < -0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet) + 1.012 * (BDTOutput_0j_DY > -0.3 && BDTOutput_0j_DY < 0.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 0.927 * (BDTOutput_0j_DY > -0.3 && BDTOutput_0j_DY < 0.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet) + 1.040 * (BDTOutput_0j_DY > 0.0 && BDTOutput_0j_DY < 0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 0.991 * (BDTOutput_0j_DY > 0.0 && BDTOutput_0j_DY < 0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet) + 1.021 * (BDTOutput_0j_DY > 0.3 && BDTOutput_0j_DY < 0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 1.010 * (BDTOutput_0j_DY > 0.3 && BDTOutput_0j_DY < 0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet) + 1.169 * (BDTOutput_0j_DY > 0.6 && BDTOutput_0j_DY < 0.9 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 1.103 * (BDTOutput_0j_DY > 0.6 && BDTOutput_0j_DY < 0.9 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet) + 1.835 * (BDTOutput_0j_DY > 0.9 && BDTOutput_0j_DY < 1.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && oneJet) + 1.534 * (BDTOutput_0j_DY > 0.9 && BDTOutput_0j_DY < 1.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && oneJet))',
    'samples': mc
}


aliases['RinoutSFs_2j'] = {
    'expr': '(1.087 * (BDTOutput_0j_DY > -1 && BDTOutput_0j_DY < -0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 0.992 * (BDTOutput_0j_DY > -1 && BDTOutput_0j_DY < -0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet) + 1.389 * (BDTOutput_0j_DY > -0.6 && BDTOutput_0j_DY < -0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 1.189 * (BDTOutput_0j_DY > -0.6 && BDTOutput_0j_DY < -0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet) + 1.403 * (BDTOutput_0j_DY > -0.3 && BDTOutput_0j_DY < 0.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 1.203 * (BDTOutput_0j_DY > -0.3 && BDTOutput_0j_DY < 0.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet) + 1.284 * (BDTOutput_0j_DY > 0.0 && BDTOutput_0j_DY < 0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 1.251 * (BDTOutput_0j_DY > 0.0 && BDTOutput_0j_DY < 0.3 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet) + 1.349 * (BDTOutput_0j_DY > 0.3 && BDTOutput_0j_DY < 0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 1.321 * (BDTOutput_0j_DY > 0.3 && BDTOutput_0j_DY < 0.6 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet) + 1.543 * (BDTOutput_0j_DY > 0.6 && BDTOutput_0j_DY < 0.9 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 1.357 * (BDTOutput_0j_DY > 0.6 && BDTOutput_0j_DY < 0.9 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet) + 1.785 * (BDTOutput_0j_DY > 0.9 && BDTOutput_0j_DY < 1.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 11*11 && multiJet) + 1.728 * (BDTOutput_0j_DY > 0.9 && BDTOutput_0j_DY < 1.0 && abs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 13*13 && multiJet))',
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
    'expr': '('+DYrew['2017']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY']
}
aliases['DY_LO_pTllrw'] = {
    'expr': '('+DYrew['2017']['LO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY']
}

# B tagging

if btag_algo=="deepcsv":
    aliases['bVeto'] = {
        'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+btagWP+') == 0'
    }
    
    aliases['bReq'] = {
        'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+btagWP+') >= 1'
    }
  
elif btag_algo=="deepflav":
    aliases['bVeto'] = {
        'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx] >  '+btagWP+') == 0'
    }
    
    aliases['bReq'] = {
        'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx] >  '+btagWP+') >= 1'
    }

# CR definitions

aliases['topcr'] = {
    'expr': '(ZVeto && ((Sum$(CleanJet_pt > 30.) == 0 && !bVeto) || bReq))'
}

# B tag scale factors

# B tag scale factors
if btag_algo=="deepcsv":

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

elif btag_algo=="deepflav":
    btagSFSource = '%s/src/PhysicsTools/NanoAODTools/data/btagSF/DeepFlavour_94XSF_V4_B_F.csv' % os.getenv('CMSSW_BASE')
    
    aliases['Jet_btagSF_deepflav_shape'] = {
        'linesToAdd': [
            'gSystem->Load("libCondFormatsBTauObjects.so");',
            'gSystem->Load("libCondToolsBTau.so");',
            'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
            '.L %s/patches/btagsfpatch.cc+' % configurations
        ],
        'class': 'BtagSF',
        'args': (btagSFSource,'central','deepjet'),
        'samples': mc
    }
    
    
    aliases['bVetoSF'] = {
        'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_deepflav_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))',
        'samples': mc
    }
    
    aliases['bReqSF'] = {
        'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_deepflav_shape[CleanJet_jetIdx]+1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))',
        'samples': mc
    }
    
    aliases['btagSF'] = {
        'expr': '(bVeto || (topcr && Sum$(CleanJet_pt > 30.) == 0))*bVetoSF + (topcr && Sum$(CleanJet_pt > 30.) > 0)*bReqSF',
        'samples': mc
    }
    
    for shift in ['jes', 'lf', 'hf', 'lfstats1', 'lfstats2', 'hfstats1', 'hfstats2', 'cferr1', 'cferr2']:
        aliases['Jet_btagSF_deepflav_shape_up_%s' % shift] = {
            'class': 'BtagSF',
            'args': (btagSFSource, 'up_' + shift,'deepjet'),
            'samples': mc
        }
        aliases['Jet_btagSF_deepflav_shape_down_%s' % shift] = {
            'class': 'BtagSF',
            'args': (btagSFSource, 'down_' + shift,'deepjet'),
            'samples': mc
        }
    
        for targ in ['bVeto', 'bReq']:
            alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
            alias['expr'] = alias['expr'].replace('btagSF_deepflav_shape', 'btagSF_deepflav_shape_up_%s' % shift)
    
            alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
            alias['expr'] = alias['expr'].replace('btagSF_deepflav_shape', 'btagSF_deepflav_shape_down_%s' % shift)
    
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
    'expr': ' * '.join(['SFweight2l','LepWPCut', 'LepSF2l__ele_' + eleWP + '__mu_' + muWP, 'btagSF', 'PrefireWeight', 'Jet_PUIDSF']),
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
    'linesToAdd': ['.L %s/Differential/weight2MINLO.cc+' % configurations],
    'class': 'Weight2MINLO',
    'args': '%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE'),
    'samples' : [skey for skey in samples if 'ggH_hww' in skey],
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
    aliases[thu+'_2'] = {
        'linesToAdd': ['.L %s/Differential/gghuncertainty.cc+' % configurations],
        'class': 'GGHUncertainty',
        'args': (thu,),
        'samples': ['ggH_hww']
    }


# Needed for top QCD scale uncertainty
lastcopy = (1 << 13)

aliases['isTTbar'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 2' % lastcopy,
    'samples': ['top']
}

aliases['isSingleTop'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 1' % lastcopy,
    'samples': ['top']
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


# aliases['BDTOutput_2j'] = {
#     'class': 'ww_top_bdt_2j',
#     'linesToAdd' : ['.L %s/WW/FullRunII/Full2017_v7/inclusive/WW_BDT_2j.cc+' % configurations],
# }
