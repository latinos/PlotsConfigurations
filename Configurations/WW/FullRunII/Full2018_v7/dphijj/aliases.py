import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # dphijj
configurations = os.path.dirname(configurations) # Full2018_v7
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

eleWP = 'mvaFall17V1Iso_WP90'
muWP = 'cut_Tight_HWWW'

btagWP = '0.3093' #BDT training

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
    'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx] > '+btagWP+') == 0'
}

aliases['bReq'] = {
    'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx] > '+btagWP+') >= 1'
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

btagSFSource = '%s/src/PhysicsTools/NanoAODTools/data/btagSF/DeepJet_102XSF_V2.csv' % os.getenv('CMSSW_BASE')

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

# Macros / aliases needed to define differential variable
# Want to only consider jets with |eta| < 2.5
# dphijj defined from leading and subleading jets -- both must have pt > 30

aliases['nGoodCleanJet'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/goodcleanjet.cc+' % configurations],
    'class': 'GoodCleanJet',
    'args': ("njet"),
}

aliases['dphijjsign'] = {
    'class': 'GoodCleanJet',
    'args': ("dphijj"),
}

aliases['nGoodGenJet'] = {
    'linesToAdd': ['.L %s/WW/FullRunII/goodgenjet.cc+' % configurations],
    'class': 'CleanGenJet',
    'args': ("njet"),
    'samples': mc
}

aliases['dphijjsigngen'] = {
    'class': 'CleanGenJet',
    'args': ("dphijj"),
    'samples': ['WW','ggWW']
}

aliases['B0'] = {
    'expr' : 'dphijjsigngen >= 0.0       && dphijjsigngen < 1./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B1'] = {
    'expr' : 'dphijjsigngen >= 1./7.*pi  && dphijjsigngen < 2./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B2'] = {
    'expr' : 'dphijjsigngen >= 2./7.*pi  && dphijjsigngen < 3./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B3'] = {
    'expr' : 'dphijjsigngen >= 3./7.*pi  && dphijjsigngen < 4./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B4'] = {
    'expr' : 'dphijjsigngen >= 4./7.*pi  && dphijjsigngen < 5./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B5'] = {
    'expr' : 'dphijjsigngen >= 5./7.*pi  && dphijjsigngen < 6./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B6'] = {
    'expr' : 'dphijjsigngen >= 6./7.*pi  && dphijjsigngen < pi',
    'samples' : ['WW','ggWW']
}
aliases['B7'] = {
    'expr' : 'dphijjsigngen >= pi        && dphijjsigngen < 8./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B8'] = {
    'expr' : 'dphijjsigngen >= 8./7.*pi  && dphijjsigngen < 9./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B9'] = {
    'expr' : 'dphijjsigngen >= 9./7.*pi  && dphijjsigngen < 10./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B10'] = {
    'expr' : 'dphijjsigngen >= 10./7.*pi && dphijjsigngen < 11./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B11'] = {
    'expr' : 'dphijjsigngen >= 11./7.*pi && dphijjsigngen < 12./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B12'] = {
    'expr' : 'dphijjsigngen >= 12./7.*pi && dphijjsigngen < 13./7.*pi',
    'samples' : ['WW','ggWW']
}
aliases['B13'] = {
    'expr' : 'dphijjsigngen >= 13./7.*pi && dphijjsigngen < 2.*pi',
    'samples' : ['WW','ggWW']
}

aliases['fid'] = {
    'expr' : 'fiducial && nGoodGenJet >= 2',
    'samples' : ['WW','ggWW']
}

aliases['BDTOutput_2j'] = {
    'class': 'ww_top_bdt_2j',
    'linesToAdd' : ['.L %s/WW/FullRunII/Full2016_v7/inclusive/WW_BDT_2j.cc+' % configurations],
}

