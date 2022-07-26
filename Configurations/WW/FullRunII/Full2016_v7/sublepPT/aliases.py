import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # sublepPT
configurations = os.path.dirname(configurations) # Full2016_v7
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

eleWP = 'mva_90p_Iso2016'
muWP = 'cut_Tight80x'

btagWP = '0.3093' #BDT training
btag_algo="deepflav"# deepflav or deepcsv

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc + ['DATA']
}

aliases['LepSF2l'] = {
    'expr':' LepSF2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc
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
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPt - 8.90557e-08*topGenPt*topGenPt) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPt - 8.90557e-08*antitopGenPt*antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)', # Same Reweighting as other years, but with additional fix for tune CUET -> CP5
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
    'expr': '('+DYrew['2016']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY']
}
aliases['DY_LO_pTllrw'] = {
    'expr': '('+DYrew['2016']['LO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
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
    'expr': 'mtw2>30 && mll>50 && ((Sum$(CleanJet_pt > 30.) == 0 && !bVeto) || bReq)'
}

aliases['dycr'] = {
    'expr': 'mth<60 && mll>40 && mll<80 && bVeto'
}

aliases['wwcr'] = {
    'expr': 'mth>60 && mtw2>30 && mll>100 && bVeto'
}

# SR definition

aliases['sr'] = {
    'expr': 'mth>60 && mtw2>30 && bVeto'
}

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
    #    'expr': 'bVeto*bVetoSF',
        'samples': mc
    }

    for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:

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
	btagSFSource = '%s/src/PhysicsTools/NanoAODTools/data/btagSF/DeepJet_2016LegacySF_V1.csv' % os.getenv('CMSSW_BASE')
    
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
'''
# GGHUncertaintyProducer wasn't run for 2016 nAODv5 non-private
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
        'samples': ['ggH_hww'],
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

# Macros / aliases needed to define differential variable

aliases['nGoodCleanJet'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/goodcleanjet.cc+' % configurations],
    'class': 'GoodCleanJet',
    'args': ("njet"),
}

aliases['nGoodGenJet'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/goodgenjet.cc+' % configurations],
    'class': 'CleanGenJet',
    'args': ("njet"),
    'samples': mc
}

aliases['genptll'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/Tools/ptll.cc+' % configurations],
    'class': 'PTLL',
    'samples': mc
}

aliases['B0'] = {
    'expr' : 'DressedLepton_pt[1] > 20. && DressedLepton_pt[1] <= 25.',
    'samples' : ['WW','ggWW']
}
aliases['B1'] = {
    'expr' : 'DressedLepton_pt[1] > 25. && DressedLepton_pt[1] <= 30.',
    'samples' : ['WW','ggWW']
}
aliases['B2'] = {
    'expr' : 'DressedLepton_pt[1] > 30. && DressedLepton_pt[1] <= 35.',
    'samples' : ['WW','ggWW']
}
aliases['B3'] = {
    'expr' : 'DressedLepton_pt[1] > 35. && DressedLepton_pt[1] <= 40.',
    'samples' : ['WW','ggWW']
}

aliases['B4'] = {
    'expr' : 'DressedLepton_pt[1] > 40. && DressedLepton_pt[1] <= 45.',
    'samples' : ['WW','ggWW']
}

aliases['B5'] = {
    'expr' : 'DressedLepton_pt[1] > 45. && DressedLepton_pt[1] <= 50.',
    'samples' : ['WW','ggWW']
}

aliases['B6'] = {
    'expr' : 'DressedLepton_pt[1] > 50. && DressedLepton_pt[1] <= 60.',
    'samples' : ['WW','ggWW']
}

aliases['B7'] = {
    'expr' : 'DressedLepton_pt[1] > 60. && DressedLepton_pt[1] <= 80.',
    'samples' : ['WW','ggWW']
}

aliases['B8'] = {
    'expr' : 'DressedLepton_pt[1] > 80. && DressedLepton_pt[1] <= 100.',
    'samples' : ['WW','ggWW']
}

aliases['B9'] = {
    'expr' : 'DressedLepton_pt[1] > 100. && DressedLepton_pt[1] <= 150.',
    'samples' : ['WW','ggWW']
}

aliases['B10'] = {
    'expr' : 'DressedLepton_pt[1] > 150. && DressedLepton_pt[1] <= 200.',
    'samples' : ['WW','ggWW']
}

aliases['B11'] = {
    'expr' : 'DressedLepton_pt[1] > 200. && DressedLepton_pt[1] <= 300.',
    'samples' : ['WW','ggWW']
}

aliases['B12'] = {
    'expr' : 'DressedLepton_pt[1] > 300.',
    'samples' : ['WW','ggWW']
}

aliases['fid'] = {
    'expr' : 'fiducial',
    'samples' : ['WW','ggWW']
}

aliases['BDTOutput_0j'] = {
    'class': 'ww_top_bdt_0j',
    'linesToAdd' : ['.L %s/WW/FullRunII/Full2018_v7/inclusive/WW_BDT_0j.cc+' % configurations],
}

aliases['BDTOutput_1j'] = {
    'class': 'ww_top_bdt_1j',
    'linesToAdd' : ['.L %s/WW/FullRunII/Full2018_v7/inclusive/WW_BDT_1j.cc+' % configurations],
}

aliases['BDTOutput_2j'] = {
    'class': 'ww_top_bdt_2j',
    'linesToAdd' : ['.L %s/WW/FullRunII/Full2018_v7/inclusive/WW_BDT_2j.cc+' % configurations],
}
