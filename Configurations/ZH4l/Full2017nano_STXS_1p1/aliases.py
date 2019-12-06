import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2017nano_STXS_1p1
configurations = os.path.dirname(configurations) # ZH4l
configurations = os.path.dirname(configurations) # Configurations

mc = [skey for skey in samples if skey is not 'DATA']

bAlgo = 'DeepB'
bWP = '0.1522'

aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}

# variations
aliases['SFweightEleUp'] = {
    'expr': 'LepSF4l__ele_'+eleWP+'__Up',
    'samples': mc
}
aliases['SFweightEleDown'] = {
    'expr': 'LepSF4l__ele_'+eleWP+'__Do',
    'samples': mc
}
aliases['SFweightMuUp'] = {
    'expr': 'LepSF4l__mu_'+muWP+'__Up',
    'samples': mc
}
aliases['SFweightMuDown'] = {
    'expr': 'LepSF4l__mu_'+muWP+'__Do',
    'samples': mc
}

# No jet with pt > 30 GeV
aliases['zeroJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) < 30.'
}

# ==1 jet with pt > 30 GeV
aliases['oneJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) >= 30. && Alt$(CleanJet_pt[1], 0) < 30.'
}

# ==2 jets with pt > 30 GeV
aliases['twoJet'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) >= 30. && Alt$(CleanJet_pt[1], 0) >= 30. && Alt$(CleanJet_pt[2], 0) < 30.'
}

# >=2 jets with pt > 30 GeV
aliases['twoJetOrMore'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) >= 30. && Alt$(CleanJet_pt[1], 0) >= 30.'
}


aliases['bVeto'] = {
    'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+bWP+') == 0'
}

aliases['bReq'] = {
    'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+bWP+') >= 1'
}

aliases['btag0'] = {
    'expr': 'zeroJet && !bVeto'
}

aliases['btag1'] = {
    'expr': 'oneJet && bReq'
}

aliases['btag2'] = {
    'expr': 'twoJet && bReq'
}

# Temporary patch for BTV postprocessor bug (no SF for eta < 0, <= 102X_nAODv5_Full2018v5)

btagSFSource = '%s/src/PhysicsTools/NanoAODTools/data/btagSF/DeepCSV_94XSF_V2_B_F.csv' % os.getenv('CMSSW_BASE')

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
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btag0SF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && CleanJet_pt<30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx]+1*(CleanJet_pt<20 || CleanJet_pt>30 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btagnSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx] + (CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btagSF'] = {
    'expr': 'bVetoSF*bVeto + btag0SF*btag0 + btagnSF*(btag1 + btag2) + (!bVeto && !btag0 && !btag1 && !btag2)',
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

    for targ in ['bVeto', 'btag0', 'btagn']:
        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_shapeFix', 'btagSF_shapeFix_up_%s' % shift)

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_shapeFix', 'btagSF_shapeFix_down_%s' % shift)

    aliases['btagSF%sup' % shift] = {
        'expr': 'bVetoSF{shift}up*bVeto + btag0SF{shift}up*btag0 + btagnSF{shift}up*(btag1 + btag2) + (!bVeto && !btag0 && !btag1 && !btag2)'.format(shift = shift),
        'samples': mc
    }

    aliases['btagSF%sdown' % shift] = {
        'expr': 'bVetoSF{shift}down*bVeto + btag0SF{shift}down*btag0 + btagnSF{shift}down*(btag1 + btag2) + (!bVeto && !btag0 && !btag1 && !btag2)'.format(shift = shift),
        'samples': mc
    }

aliases['recoZPt'] = {
  'expr' : 'sqrt(Lepton_pt[0]^2+Lepton_pt[1]^2+2*Lepton_pt[0]*Lepton_pt[1]*cos(z0DeltaPhi_zh4l))*(fabs(TVector2::Phi_mpi_pi(Lepton_phi[0]-Lepton_phi[1])-z0DeltaPhi_zh4l)<0.00001) \
           +sqrt(Lepton_pt[0]^2+Lepton_pt[2]^2+2*Lepton_pt[0]*Lepton_pt[2]*cos(z0DeltaPhi_zh4l))*(fabs(TVector2::Phi_mpi_pi(Lepton_phi[0]-Lepton_phi[2])-z0DeltaPhi_zh4l)<0.00001) \
           +sqrt(Lepton_pt[0]^2+Lepton_pt[3]^2+2*Lepton_pt[0]*Lepton_pt[3]*cos(z0DeltaPhi_zh4l))*(fabs(TVector2::Phi_mpi_pi(Lepton_phi[0]-Lepton_phi[3])-z0DeltaPhi_zh4l)<0.00001) \
           +sqrt(Lepton_pt[1]^2+Lepton_pt[2]^2+2*Lepton_pt[1]*Lepton_pt[2]*cos(z0DeltaPhi_zh4l))*(fabs(TVector2::Phi_mpi_pi(Lepton_phi[1]-Lepton_phi[2])-z0DeltaPhi_zh4l)<0.00001) \
           +sqrt(Lepton_pt[1]^2+Lepton_pt[3]^2+2*Lepton_pt[1]*Lepton_pt[3]*cos(z0DeltaPhi_zh4l))*(fabs(TVector2::Phi_mpi_pi(Lepton_phi[1]-Lepton_phi[3])-z0DeltaPhi_zh4l)<0.00001) \
           +sqrt(Lepton_pt[2]^2+Lepton_pt[3]^2+2*Lepton_pt[2]*Lepton_pt[3]*cos(z0DeltaPhi_zh4l))*(fabs(TVector2::Phi_mpi_pi(Lepton_phi[2]-Lepton_phi[3])-z0DeltaPhi_zh4l)<0.00001)'
}
