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


###### PromptGenMatch ######

# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch1l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0], 0)',
    'samples': mc
}

###### SFweight ######

# single ele trigger eff fix
eff_dir = os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/TriggEff/fixedTextfiles/'
aliases['ele_trig_eff'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/triggerEff_1lep.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'TrigEff_1lep',
    'args': (eff_dir+'2018/mvaid/Ele32_pt_eta_efficiency_withSys_Run2018.txt'),
    'samples': mc
}

aliases['TriggerEffWeight_1l_fixed'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff[0] +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l',
    'samples': mc
}

aliases['WPTightSF'] = {
    'expr': 'Lepton_tightElectron_'+eleWP+'_IdIsoSF[0]*Lepton_tightMuon_'+muWP+'_IdIsoSF[0]',
    'samples': mc
}

# data/MC scale factors
aliases['SFweight1l'] = {
    #'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l', 'Lepton_RecoSF[0]', 'EMTFbug_veto']),
    'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l_fixed[0]', 'Lepton_RecoSF[0]', 'EMTFbug_veto']),
    'samples': mc
}
aliases['SFweight'] = {
    #'expr': ' * '.join(['SFweight1l[0]', 'WPTightSF[0]', 'PrefireWeight']),
    'expr': ' * '.join(['SFweight1l[0]']),
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

##### DY Z pT reweighting

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'CountGenJet',
    'samples': mc
}

aliases['getGenZpt_OTF'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/patches/getGenZpt.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'getGenZpt',
    'samples': ['DY', 'DYlow']
}

handle = open('%s/src/PlotsConfigurations/Configurations/patches/DYrew30.py' % os.getenv('CMSSW_BASE'),'r')
exec(handle)
handle.close()

aliases['DY_NLO_pTllrw'] = {
    'expr': '('+DYrew['2018']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY', 'DYlow']
}
aliases['DY_LO_pTllrw'] = {
    'expr': '('+DYrew['2018']['LO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY', 'DYlow']
}

###### PU jet Id SF ######

##puidSFSource = ' {}/src/PlotsConfigurations/Configurations/patches/PUID_81XTraining_EffSFandUncties.root'.format(os.getenv('CMSSW_BASE'))
#puidSFSource = '%s/src/PlotsConfigurations/Configurations/patches/PUID_81XTraining_EffSFandUncties.root' % os.getenv('CMSSW_BASE')
#
#aliases['PUJetIdSF'] = {
#    'linesToAdd': [
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
#        #'.L %s/src/PlotsConfigurations/Configurations/patches/pujetidsf_event_new.cc+'  % os.getenv('CMSSW_BASE')
#        '.L %s/src/PlotsConfigurations/Configurations/patches/pujetidsf_event_new.cc+' % os.getenv('CMSSW_BASE')
#    ],
#    'class': 'PUJetIdEventSF',
#    'args': (puidSFSource, '2018', 'loose'),
#    'samples': mc
#}

aliases['PUJetIdSF'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2 && ( (Jet_electronIdx1 != Lepton_electronIdx[0]) || Jet_electronIdx1 < 0 )  \
                                          && ( (Jet_muonIdx1 != Lepton_muonIdx[0] ) || Jet_muonIdx1 < 0 ) \
                            )*TMath::Log(Jet_PUIDSF_loose)))',
  'samples': mc
}

###### W EWK nlo ######

aliases['EWKnloW'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v6/2HDMa/EWKnloW.cc+' % os.getenv('CMSSW_BASE')
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
for Jet_Et in [10, 15, 20, 25, 30, 35, 40, 45]:
    aliases['PassJet_Et'+str(Jet_Et)] = {
        'expr': 'Sum$((dR_lVj > 1.)*(CleanJet_pt > '+str(Jet_Et)+')*(CleanJet_pt > 10 && abs(CleanJet_eta) < 2.5)) > 0.',
    }


# PostProcessing did not create (anti)topGenPt for ST samples with _ext1
lastcopy = (1 << 13)


aliases['isTTbar'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 2' % lastcopy,
    'samples': ['top']
}

aliases['isSingleTop'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 1' % lastcopy,
    'samples': ['top']
}

aliases['topGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == 6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
    'samples': ['top']
}

aliases['antitopGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == -6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
    'samples': ['top']
}

aliases['Top_pTrw'] = {
    'expr': 'isTTbar * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPtOTF) - 0.000134*topGenPtOTF + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPtOTF) - 0.000134*antitopGenPtOTF + 0.973))) + isSingleTop',
    'samples': ['top']
}

aliases['kfact'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/scripts/k_factor_unc.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'kFactorUnc',
    'args': ('PlotsConfigurations/Configurations/monoHWW/SemiLep/Wjets_kfactors/HT_to_NLO_QCD_k_factors2.root', 'k_factor_2018'),
    'samples': ['Wjets']
}
