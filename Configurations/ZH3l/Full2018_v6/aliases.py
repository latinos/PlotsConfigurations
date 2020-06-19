#Aliases (mostly btag)

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

#2018
#bWP = '0.1241' #Loose
bWP = '0.4184'

aliases['bVeto'] = {
    'expr': '(Sum$( CleanJet_pt > 20.0 && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > '+bWP+' ) == 0)'
}

aliases['btagSF'] = {
'expr': '( TMath::Exp(Sum$( TMath::Log( (CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5) ) ) ) )',
'samples': mc
}

systs = ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']

for s in systs:
    aliases['btagSF'+s+'up']   = { 
        'expr': aliases['btagSF']['expr'].replace('shape','shape_up_'+s),
        'samples':mc  
    }
    aliases['btagSF'+s+'down'] = { 
        'expr': aliases['btagSF']['expr'].replace('shape','shape_down_'+s),
        'samples':mc  
    }

aliases['PromptGenLepMatch3l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1]*Lepton_promptgenmatched[2], 0)',
    'samples': mc
}

aliases['LepWPCutNew'] = { 'expr': '(((abs(Lepton_pdgId[0])==13 && Muon_mvaTTH[Lepton_muonIdx[0]]>0.8) || (abs(Lepton_pdgId[0])==11 && Electron_mvaTTH[Lepton_electronIdx[0]]>0.7)) && ((abs(Lepton_pdgId[1])==13 && Muon_mvaTTH[Lepton_muonIdx[1]]>0.8) || (abs(Lepton_pdgId[1])==11 && Electron_mvaTTH[Lepton_electronIdx[1]]>0.7)) && ((abs(Lepton_pdgId[2])==13 && Muon_mvaTTH[Lepton_muonIdx[2]]>0.8) || (abs(Lepton_pdgId[2])==11 && Electron_mvaTTH[Lepton_electronIdx[2]]>0.7)))', 
                           'samples': mc + ['DATA'] 
}

aliases['Top_pTrw'] = {
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPt) * TMath::Exp(0.0615 - 0.0005 * antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)',
    'samples': ['top']
}

aliases['ZH3l_dphilmetjj_test'] = {
    'linesToAdd': [
        '.L %s/src/PlotsConfigurations/Configurations/ZH3l/scripts/ZH3l_patch.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'ZH3l_patch',
    'args': ("dphilmetjj")
}

aliases['ZH3l_dphilmetj_test'] = {
    'class': 'ZH3l_patch',
    'args': ("dphilmetj")
}

aliases['ZH3l_mTlmet_test'] = {
    'class': 'ZH3l_patch',
    'args': ("mTlmet")
}

aliases['ZH3l_mTlmetj_test'] = {
    'class': 'ZH3l_patch',
    'args': ("mTlmetj")
}

aliases['ZH3l_mTlmetjj_test'] = {
    'class': 'ZH3l_patch',
    'args': ("mTlmetjj")
}

#######################
### SFs for tthMVA  ###
#######################

aliases['ttHMVA_SF_3l'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/patches/compute_SF_BETA.C+' % os.getenv('CMSSW_BASE')],
    'class': 'compute_SF',
    'args' : ('2018', 3, 'total_SF'),
    'samples': mc
}

aliases['ttHMVA_SF_Up_0'] = {
    'class': 'compute_SF',
    'args' : ('2018', 3, 'single_SF_up', 0),
    'nominalOnly' : True,
    'samples': mc
}

aliases['ttHMVA_SF_Up_1'] = {
    'class': 'compute_SF',
    'args' : ('2018', 3, 'single_SF_up', 1),
    'nominalOnly' : True,
    'samples': mc
}

aliases['ttHMVA_SF_Up_2'] = {
    'class': 'compute_SF',
    'args' : ('2018', 3, 'single_SF_up', 2),
    'nominalOnly' : True,
    'samples': mc
}

aliases['ttHMVA_SF_Down_0'] = {
    'class': 'compute_SF',
    'args' : ('2018', 3, 'single_SF_down', 0),
    'nominalOnly' : True,
    'samples': mc
}

aliases['ttHMVA_SF_Down_1'] = {
    'class': 'compute_SF',
    'args' : ('2018', 3, 'single_SF_down', 1),
    'nominalOnly' : True,
    'samples': mc
}

aliases['ttHMVA_SF_Down_2'] = {
    'class': 'compute_SF',
    'args' : ('2018', 3, 'single_SF_down', 2),
    'nominalOnly' : True,
    'samples': mc
}

aliases['ttHMVA_3l_ele_SF_Up'] = {
    'expr' : '(ttHMVA_SF_Up_0[0]*(abs(Lepton_pdgId[0]) == 11) + (abs(Lepton_pdgId[0]) == 13)) *\
              (ttHMVA_SF_Up_1[0]*(abs(Lepton_pdgId[1]) == 11) + (abs(Lepton_pdgId[1]) == 13)) *\
              (ttHMVA_SF_Up_2[0]*(abs(Lepton_pdgId[2]) == 11) + (abs(Lepton_pdgId[2]) == 13))',
    'nominalOnly' : True,
    'samples' : mc
}

aliases['ttHMVA_3l_ele_SF_Down'] = {
    'expr' : '(ttHMVA_SF_Down_0[0]*(abs(Lepton_pdgId[0]) == 11) + (abs(Lepton_pdgId[0]) == 13)) *\
              (ttHMVA_SF_Down_1[0]*(abs(Lepton_pdgId[1]) == 11) + (abs(Lepton_pdgId[1]) == 13)) *\
              (ttHMVA_SF_Down_2[0]*(abs(Lepton_pdgId[2]) == 11) + (abs(Lepton_pdgId[2]) == 13))',
    'nominalOnly' : True,
    'samples' : mc
}

aliases['ttHMVA_3l_mu_SF_Up'] = {
    'expr' : '(ttHMVA_SF_Up_0[0]*(abs(Lepton_pdgId[0]) == 13) + (abs(Lepton_pdgId[0]) == 11)) *\
              (ttHMVA_SF_Up_1[0]*(abs(Lepton_pdgId[1]) == 13) + (abs(Lepton_pdgId[1]) == 11)) *\
              (ttHMVA_SF_Up_2[0]*(abs(Lepton_pdgId[2]) == 13) + (abs(Lepton_pdgId[2]) == 11))',
    'nominalOnly' : True,
    'samples' : mc
}

aliases['ttHMVA_3l_mu_SF_Down'] = {
    'expr' : '(ttHMVA_SF_Down_0[0]*(abs(Lepton_pdgId[0]) == 13) + (abs(Lepton_pdgId[0]) == 11)) *\
              (ttHMVA_SF_Down_1[0]*(abs(Lepton_pdgId[1]) == 13) + (abs(Lepton_pdgId[1]) == 11)) *\
              (ttHMVA_SF_Down_2[0]*(abs(Lepton_pdgId[2]) == 13) + (abs(Lepton_pdgId[2]) == 11))',
    'nominalOnly' : True,
    'samples' : mc
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

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': ['WZ']
}

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'CountGenJet',
    'samples': mc
}

puidSFSource = '%s/src/LatinoAnalysis/NanoGardener/python/data/JetPUID_effcyandSF.root' % os.getenv('CMSSW_BASE')

aliases['PUJetIdSF'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/pujetidsf_event.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'PUJetIdEventSF',
    'args': (puidSFSource, '2018', 'loose'),
    'samples': mc
}
