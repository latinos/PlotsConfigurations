import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2016
configurations = os.path.dirname(configurations) # Differential
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

eleWP = 'mvaFall17V1Iso_WP90'
muWP = 'cut_Tight_HWWW'

aliases['LepWPCut'] = {
    'expr': 'LepCut3l__ele_'+eleWP+'__mu_'+muWP,
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
    'expr': 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l',
    'samples': ['Fake']
}

# And variations - already divided by central values in formulas !
aliases['fakeWEleUp'] = {
    'expr': 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lElUp/fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l',
    'samples': ['Fake']
}
aliases['fakeWEleDown'] = {
    'expr': 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lElDown/fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l',
    'samples': ['Fake']
}
aliases['fakeWMuUp'] = {
    'expr': 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lMuUp/fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l',
    'samples': ['Fake']
}
aliases['fakeWMuDown'] = {
    'expr': 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lMuDown/fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l',
    'samples': ['Fake']
}
aliases['fakeWStatEleUp'] = {
    'expr': 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lstatElUp/fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l',
    'samples': ['Fake']
}
aliases['fakeWStatEleDown'] = {
    'expr': 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lstatElDown/fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l',
    'samples': ['Fake']
}
aliases['fakeWStatMuUp'] = {
    'expr': 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lstatMuUp/fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l',
    'samples': ['Fake']
}
aliases['fakeWStatMuDown'] = {
    'expr': 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lstatMuDown/fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l',
    'samples': ['Fake']
}

# gen-matching to prompt only (GenLepMatch3l matches to *any* gen lepton)
aliases['PromptGenLepMatch3l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1]*Lepton_promptgenmatched[2], 0)',
    'samples': mc
}

aliases['Top_pTrw'] = {
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPt) * TMath::Exp(0.0615 - 0.0005 * antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)',
    'samples': ['top']
}

# Jet bins
# using Alt$(CleanJet_pt[n], 0) instead of Sum$(CleanJet_pt >= 30) because jet pt ordering is not strictly followed in JES-varied samples

# No jet with pt > 30 GeV
aliases['zeroJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) < 30.'
}

aliases['oneJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) > 30.'
}

aliases['multiJet'] = {
    'expr': 'Alt$(CleanJet_pt[1], 0) > 30.'
}

# B tagging

bAlgo = 'DeepB'
bWP = '0.1241'

aliases['bVeto'] = {
'expr': '(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1241) == 0) && mth > 60' }


aliases['bVetoDY'] = {                                                                                                              
'expr': '(Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1241) == 0) && mth < 60'                       
}


aliases['btag2'] = {
'expr': '(   Alt$(CleanJet_pt[0],0) > 30. \
          && Alt$(CleanJet_pt[1],0) > 30. \
          && ( ( Alt$(abs(CleanJet_eta[0]),99)<2.5 && Alt$(Jet_btagDeepB[CleanJet_jetIdx[0]],0) > 0.1241 ) \
            || ( Alt$(abs(CleanJet_eta[1]),99)<2.5 && Alt$(Jet_btagDeepB[CleanJet_jetIdx[1]],0) > 0.1241 ) ) \
         )' 
}


### We need to define a CR for WW 

##aliases['wwcr'] = {
##    'expr': 'mth>60 && mtw2>30 && mll>100 && bVeto'
##}



# B tag scale factors

btagSFSource = '%s/src/PhysicsTools/NanoAODTools/data/btagSF/DeepCSV_2016LegacySF_V1.csv' % os.getenv('CMSSW_BASE')


aliases['Jet_btagSF_shapeFix'] = {
    'linesToAdd': [
        'gSystem->Load("libCondFormatsBTauObjects.so");',
        'gSystem->Load("libCondToolsBTau.so");',
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/patches/btagsfpatch.cc+' % configurations
    ],
    'class': 'BtagSF',
    'args': (btagSFSource,),
    'samples': mc
}

aliases['bVetoSF'] = {
'expr': '( TMath::Exp(Sum$( TMath::Log( (CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5) ) ) ) )',
'samples': mc
}


aliases['bVetoDYSF'] = {                                                                                                            
'expr': '( TMath::Exp(Sum$( TMath::Log( (CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx]+1*(CleanJet_pt<30 || abs(CleanJet_eta)>2.5) ) ) ) )',
'samples': mc
}                                                                                                                                    
aliases['btag2SF'] = {
'expr': '( ( ( Alt$(CleanJet_pt[0], 0)>30 && Alt$(abs(CleanJet_eta[0]),99)<2.5 )*( Alt$(Jet_btagSF_shapeFix[CleanJet_jetIdx[0]], 1) ) + ( Alt$(CleanJet_pt[0], 0)<30 || Alt$(abs(CleanJet_eta[0]),99)>2.5 ) )* \
           ( ( Alt$(CleanJet_pt[1], 0)>30 && Alt$(abs(CleanJet_eta[1]),99)<2.5 )*( Alt$(Jet_btagSF_shapeFix[CleanJet_jetIdx[1]], 1) ) + ( Alt$(CleanJet_pt[1], 0)<30 || Alt$(abs(CleanJet_eta[1]),99)>2.5 ) ) )\
        ',
'samples': mc
}


aliases['btagSF'] = {
  'expr': '( bVetoSF*bVeto +  bVetoDYSF*bVetoDY + btag2SF*btag2  + ( (!bVeto) && (!bVetoDY) &&  (!btag2) ) )',
'samples': mc
}



for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:
    aliases['Jet_btagSF_shapeFix_up_%s' % shift] = {
        'class': 'BtagSF',
        'args': (btagSFSource, 'up_' + shift),
        'samples': mc
    }
    aliases['Jet_btagSF_shapeFix_down_%s' % shift] = {
        'class': 'BtagSF',
        'args': (btagSFSource, 'down_' + shift),
        'samples': mc
    }
    for targ in ['bVeto', 'bVetoDY', 'btag2']:
        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_shapeFix', 'btagSF_shapeFix_up_%s' % shift)

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_shapeFix', 'btagSF_shapeFix_down_%s' % shift)

    aliases['btagSF%sup' % shift] = {
        'expr': aliases['btagSF']['expr'].replace('SF', 'SF' + shift + 'up'),
        'samples': mc
    }

    aliases['btagSF%sdown' % shift] = {
        'expr': aliases['btagSF']['expr'].replace('SF', 'SF' + shift + 'down'),
        'samples': mc
    }


# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight3l', 'LepSF3l__ele_' + eleWP + '__mu_' + muWP, 'LepWPCut', 'btagSF']),
    'samples': mc
}

# variations
aliases['SFweightEleUp'] = {
    'expr': 'LepSF3l__ele_'+eleWP+'__Up',
    'samples': mc
}
aliases['SFweightEleDown'] = {
    'expr': 'LepSF3l__ele_'+eleWP+'__Do',
    'samples': mc
}
aliases['SFweightMuUp'] = {
    'expr': 'LepSF3l__mu_'+muWP+'__Up',
    'samples': mc
}
aliases['SFweightMuDown'] = {
    'expr': 'LepSF3l__mu_'+muWP+'__Do',
    'samples': mc
}

