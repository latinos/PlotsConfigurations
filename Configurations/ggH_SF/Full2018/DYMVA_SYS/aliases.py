import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018
configurations = os.path.dirname(configurations) # ggH
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake', 'Fake_ee', 'Fake_mm', 'DATA')]

bAlgo = 'DeepB'
bWP = '0.1241'

aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
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

aliases['sameFlavor'] = {
'expr': '((Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11))'
}

aliases['0j'] = {
'expr': '( Alt$(CleanJet_pt[0],0)<30 )'
}

aliases['1j'] = {
'expr': 'Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)<30'
}

aliases['2jggH'] = {
'expr': '( Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && ( abs(detajj)<3.5 || ( mjj<400 && abs(detajj)>=3.5 ) ) )'
}

aliases['2jVBF'] = {
'expr': '(Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && (mjj>=400 && abs(detajj)>=3.5))'
}

aliases['Higgs0jetsf'] = {
'expr': '(abs(dphill) < 1.70 && mll < 60 && mth > 50)'
}

aliases['Higgs1jetsf'] = {
'expr': '(abs(dphill) < 1.70 && mll < 60 && mth > 50)'
}

aliases['Higgs2jetsf'] = {
'expr': '(abs(dphill) < 1.70 && mll < 60 && mth > 50)'
}

aliases['Higgsvbfsf'] = {
'expr': '(abs(dphill) < 1.70 && mll < 60 && mth > 50)'
}

aliases['ZVeto'] = {
'expr': '(fabs(91.1876 - mll) > 15)'
}

aliases['bVeto'] = {
    'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0'
}

aliases['bReq'] = {
    'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) >= 1'
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

btagSFSource = '%s/src/PhysicsTools/NanoAODTools/data/btagSF/DeepCSV_102XSF_V1.csv' % os.getenv('CMSSW_BASE')

aliases['Jet_btagSF_shapeFix'] = {
    'linesToAdd': [
        'gSystem->Load("libCondFormatsBTauObjects.so");',
        'gSystem->Load("libCondToolsBTau.so");',
        'gSystem->AddIncludePath("-I%s/work");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/patches/btagsfpatch.cc+' % configurations
    ],
    'class': 'BtagSF',
    'args': (btagSFSource,),
    'samples': mc
}

aliases['bVetoSF'] = {
    #'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))',
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btag0SF'] = {
    #'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && CleanJet_pt<30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || CleanJet_pt>30 || abs(CleanJet_eta)>2.5))))',
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && CleanJet_pt<30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx]+1*(CleanJet_pt<20 || CleanJet_pt>30 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btagnSF'] = {
    #'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx] + (CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))',
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
        #alias['expr'] = alias['expr'].replace('btagSF_shape', 'btagSF_shape_up_%s' % shift)
        alias['expr'] = alias['expr'].replace('btagSF_shapeFix', 'btagSF_shapeFix_up_%s' % shift)

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        #alias['expr'] = alias['expr'].replace('btagSF_shape', 'btagSF_shape_down_%s' % shift)
        alias['expr'] = alias['expr'].replace('btagSF_shapeFix', 'btagSF_shapeFix_down_%s' % shift)

    aliases['btagSF%sup' % shift] = {
        'expr': 'bVetoSF{shift}up*bVeto + btag0SF{shift}up*btag0 + btagnSF{shift}up*(btag1 + btag2) + (!bVeto && !btag0 && !btag1 && !btag2)'.format(shift = shift),
        'samples': mc
    }

    aliases['btagSF%sdown' % shift] = {
        'expr': 'bVetoSF{shift}down*bVeto + btag0SF{shift}down*btag0 + btagnSF{shift}down*(btag1 + btag2) + (!bVeto && !btag0 && !btag1 && !btag2)'.format(shift = shift),
        'samples': mc
    }



