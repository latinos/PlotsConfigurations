import os
import copy

#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

eleWP = 'mva_90p_Iso2016'
muWP = 'cut_Tight80x'

aliases['ReCleanJet_pt'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/recleanjet.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'ReCleanJet',
    'args': ('pt',)
}

aliases['ReCleanJet_eta'] = {
    'class': 'ReCleanJet',
    'args': ('eta',)
}

aliases['ReCleanJet_jetIdx'] = {
    'class': 'ReCleanJet',
    'args': ('jetIdx',)
}

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP,
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
    'expr': '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )',
    'samples': ['top']
}

# Jet bins
# using Alt$(ReCleanJet_pt[n], 0) instead of Sum$(ReCleanJet_pt >= 30) because jet pt ordering is not strictly followed in JES-varied samples

# No jet with pt > 30 GeV
aliases['zeroJet'] = {
    'expr': 'Alt$(ReCleanJet_pt[0], 0) < 30.'
}

aliases['oneJet'] = {
    'expr': 'Alt$(ReCleanJet_pt[0], 0) > 30.'
}

aliases['multiJet'] = {
    'expr': 'Alt$(ReCleanJet_pt[1], 0) > 30.'
}

# B tagging

aliases['bVeto'] = {
    'expr': 'Sum$(ReCleanJet_pt > 20. && abs(ReCleanJet_eta) < 2.5 && Jet_btagDeepB[ReCleanJet_jetIdx] > 0.2217) == 0'
}

aliases['bReq'] = {
    'expr': 'Sum$(ReCleanJet_pt > 30. && abs(ReCleanJet_eta) < 2.5 && Jet_btagDeepB[ReCleanJet_jetIdx] > 0.2217) >= 1'
}

# CR definitions

aliases['topcr'] = {
    'expr': 'mtw2>30 && mll>50 && ((zeroJet && !bVeto) || bReq)'
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

btagSFSource = '%s/src/PhysicsTools/NanoAODTools/data/btagSF/DeepCSV_2016LegacySF_V1.csv' % os.getenv('CMSSW_BASE')

aliases['Jet_btagSF_shapeFix'] = {
    'linesToAdd': [
        'gSystem->Load("libCondFormatsBTauObjects.so");',
        'gSystem->Load("libCondToolsBTau.so");',
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/btagsfpatch.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'BtagSF',
    'args': (btagSFSource,),
    'samples': mc
}

aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((ReCleanJet_pt>20 && abs(ReCleanJet_eta)<2.5)*Jet_btagSF_shapeFix[ReCleanJet_jetIdx]+1*(ReCleanJet_pt<20 || abs(ReCleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((ReCleanJet_pt>30 && abs(ReCleanJet_eta)<2.5)*Jet_btagSF_shapeFix[ReCleanJet_jetIdx]+1*(ReCleanJet_pt<30 || abs(ReCleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btagSF'] = {
    'expr': '(bVeto || (topcr && zeroJet))*bVetoSF + (topcr && !zeroJet)*bReqSF',
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

    for targ in ['bVeto', 'bReq']:
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
    'expr': ' * '.join(['SFweight2l', 'LepSF2l__ele_' + eleWP + '__mu_' + muWP, 'LepWPCut', 'btagSF', 'PrefireWeight']),
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

aliases['nllWOTF'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/nllW.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'WWNLLW',
    'args': ('central',),
    'samples': ['WW']
}

#aliases['nllW_Qup'] = {
#    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ggH2016v4/nllW.cc+' % os.getenv('CMSSW_BASE')],
#    'class': 'WWNLLW',
#    'args': ('sup',),
#    'samples': ['WW']
#}
#
#aliases['nllW_Qdown'] = {
#    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ggH2016v4/nllW.cc+' % os.getenv('CMSSW_BASE')],
#    'class': 'WWNLLW',
#    'args': ('sdown',),
#    'samples': ['WW']
#}
#
#aliases['nllW_Rup'] = {
#    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ggH2016v4/nllW.cc+' % os.getenv('CMSSW_BASE')],
#    'class': 'WWNLLW',
#    'args': ('rup',),
#    'samples': ['WW']
#}
#
#aliases['nllW_Rdown'] = {
#    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ggH2016v4/nllW.cc+' % os.getenv('CMSSW_BASE')],
#    'class': 'WWNLLW',
#    'args': ('rdown',),
#    'samples': ['WW']
#}

### Variables for fiducial region definition
#
## Gen pxll, pyll
#aliases['genPxll'] = {
#    'expr': 'GenDressedLepton_pt[0] * cos(GenDressedLepton_phi[0]) + GenDressedLepton_pt[1] * cos(GenDressedLepton_phi[1])',
#    'samples': signals
#}
#aliases['genPyll'] = {
#    'expr': 'GenDressedLepton_pt[0] * sin(GenDressedLepton_phi[0]) + GenDressedLepton_pt[1] * sin(GenDressedLepton_phi[1])',
#    'samples': signals
#}
#
## Gen pxH, pyH
#aliases['genPxH'] = {
#    'expr': 'genPxll + GenMET_pt * cos(GenMET_phi)',
#    'samples': signals
#}
#aliases['genPyH'] = {
#    'expr': 'genPyll + GenMET_pt * sin(GenMET_phi)',
#    'samples': signals
#}
#
#aliases['genPth'] = {
#    'expr': 'sqrt(genPxH * genPxH + genPyH * genPyH)',
#    'samples': signals
#}
#
## Gen pTll
#aliases['genPtll'] = {
#    'expr': 'sqrt(genPxll * genPxll + genPyll * genPyll)',
#    'samples': signals
#}
#
### Overlap cleaning for gen jets
#aliases['genJetClean'] = {
#    'expr': 'TMath::Power(GenJet_eta - GenDressedLepton_eta[0], 2.) + TMath::Power(TVector2::Phi_mpi_pi(GenJet_phi - GenDressedLepton_phi[0]), 2.) > 0.16 && TMath::Power(GenJet_eta - GenDressedLepton_eta[1], 2.) + TMath::Power(TVector2::Phi_mpi_pi(GenJet_phi - GenDressedLepton_phi[1]), 2.) > 0.16',
#    'samples': signals
#}

#aliases['genJet0Clean'] = {
#    'expr': 'TMath::Power(GenJet_eta[0] - GenDressedLepton_eta[0], 2.) + TMath::Power(TVector2::Phi_mpi_pi(GenJet_phi[0] - GenDressedLepton_phi[0]), 2.) > 0.16 && TMath::Power(GenJet_eta[0] - GenDressedLepton_eta[1], 2.) + TMath::Power(TVector2::Phi_mpi_pi(GenJet_phi[0] - GenDressedLepton_phi[1]), 2.) > 0.16',
#    'samples': signals
#}
#
#aliases['genJet1Clean'] = {
#    'expr': 'TMath::Power(GenJet_eta[1] - GenDressedLepton_eta[0], 2.) + TMath::Power(TVector2::Phi_mpi_pi(GenJet_phi[1] - GenDressedLepton_phi[0]), 2.) > 0.16 && TMath::Power(GenJet_eta[1] - GenDressedLepton_eta[1], 2.) + TMath::Power(TVector2::Phi_mpi_pi(GenJet_phi[1] - GenDressedLepton_phi[1]), 2.) > 0.16',
#    'samples': signals
#}

#aliases['nCleanGenJet'] = {
#    'expr': 'Sum$(GenJet_pt > 30 && genJetClean)',
#    'samples': signals
#}

# use HTXS_njets30 when moving to NanoAODv5
aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'CountGenJet',
    'samples': signals
}

# Fiducial cut for differential measurements
fiducial = [
    'GenDressedLepton_pt[0]>25 && Sum$(GenDressedLepton_pt>10) == 2',
    'GenDressedLepton_pdgId[0] * GenDressedLepton_pdgId[1] == -11 * 13',
    'sqrt(2*GenDressedLepton_pt[0] * GenDressedLepton_pt[1] * (cosh(GenDressedLepton_eta[0]-GenDressedLepton_eta[1])-cos(GenDressedLepton_phi[0]-GenDressedLepton_phi[1]))) > 12.',
    'genPtll > 30.',
    'sqrt(2. * GenMET_pt * (genPtll - genPxll * cos(GenMET_phi) - genPyll * sin(GenMET_phi))) > 60.',
    'sqrt(2. * GenDressedLepton_pt[1] * GenMET_pt * (1-cos(GenDressedLepton_phi[1]-GenMET_phi))) > 30.',
]
aliases['fiducial'] = {
    'expr': ' && '.join(fiducial),
    'samples': signals
}
