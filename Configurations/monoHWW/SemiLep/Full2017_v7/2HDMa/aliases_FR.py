import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2016
configurations = os.path.dirname(configurations) # Differential
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
## samples, signals
#signal_file = '2HDMa_signal.py'
#if os.path.exists(signal_file) :
#    handle = open(signal_file,'r')
#    exec(handle)
#    handle.close()
#else:
#    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')


mc = [skey for skey in samples if skey not in ('FAKE', 'DATA')]

eleWP    = 'mvaFall17V1Iso_WP90'
muWP     = 'cut_Tight_HWWW'

LepWPCut='(Lepton_isTightElectron_'+eleWP+'[0] > 0.5 || Lepton_isTightMuon_'+muWP+'[0] > 0.5)'

Lep1WPCut='(Alt$(Lepton_isTightElectron_'+eleWP+'[1], 0) > 0.5 || Alt$(Lepton_isTightMuon_'+muWP+'[1], 0) > 0.5)'

###### Lepton WP ######

aliases['WPTight'] = {
    'expr': LepWPCut,
}

aliases['WPTight1'] = {
    'expr': Lep1WPCut,
}

###### PromptGenMatch ######

# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch1l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0], 0)',
    'samples': mc
}

###### SFweight ######

aliases['WPTightSF'] = {
    'expr': 'Lepton_tightElectron_'+eleWP+'_IdIsoSF[0]*Lepton_tightMuon_'+muWP+'_IdIsoSF[0]',
    'samples': mc
}

# data/MC scale factors
aliases['SFweight1l'] = {
    'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l', 'Lepton_RecoSF[0]', 'EMTFbug_veto']),
    'samples': mc
}
aliases['SFweight'] = {
    #'expr': ' * '.join(['SFweight1l[0]', 'WPTightSF[0]', 'PrefireWeight']),
    'expr': ' * '.join(['SFweight1l[0]', 'PrefireWeight']),
    'samples': mc
}

## # variations of tight lepton WP
#aliases['SFweightEleUp'] = {
#    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF_Up[0]/Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
#    'samples': mc
#}
#aliases['SFweightEleDown'] = {
#    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF_Down[0]/Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
#    'samples': mc
#}
#aliases['SFweightMuUp'] = {
#    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF_Up[0]/Lepton_tightMuon_'+muWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
#    'samples': mc
#}
#aliases['SFweightMuDown'] = {
#    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF_Down[0]/Lepton_tightMuon_'+muWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
#    'samples': mc
#}

###### bVeto ######

###### top ######

###### PU jet Id SF ######

puidSFSource = '%s/src/LatinoAnalysis/NanoGardener/python/data/JetPUID_effcyandSF.root' % os.getenv('CMSSW_BASE')

aliases['PUJetIdSF'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/pujetidsf_event.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'PUJetIdEventSF',
    'args': (puidSFSource, '2017', 'loose'),
    'samples': mc
}

###### W EWK nlo ######

aliases['EWKnloW'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v6/2HDMa/EWKnloW.cc' % os.getenv('CMSSW_BASE')
    ],
    'class': 'EWKnloW',
    'samples': "Wjets"
}

###### R(l[0], j) ######


aliases['Adphi_lVj'] = {
    'expr': 'TMath::Abs(Lepton_phi[0] - CleanJet_phi)',
}

aliases['dphi_lVj'] = {
    'expr': '(Adphi_lVj < 3.141592653)*Adphi_lVj + (Adphi_lVj >= 3.141592653)*TMath::Abs(Adphi_lVj - 2*3.141592653)',
}

aliases['deta_lVj'] = {
    'expr': 'TMath::Abs(Lepton_eta[0] - CleanJet_eta)',
}

aliases['dR_lVj'] = {
    'expr': 'TMath::Sqrt(deta_lVj*deta_lVj + dphi_lVj*dphi_lVj)',
}

#Jet_Et = 20
for Jet_Et in [10, 20, 25, 30, 35, 45]:
    aliases['PassJet_Et'+str(Jet_Et)] = {
        'expr': 'Sum$((dR_lVj > 1.)*(CleanJet_pt > '+str(Jet_Et)+')*(CleanJet_pt > 10 && abs(CleanJet_eta) < 2.5)) > 0.',
    }




