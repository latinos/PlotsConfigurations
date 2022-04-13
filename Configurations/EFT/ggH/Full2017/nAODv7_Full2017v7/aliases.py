import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # nAODv7_Full2017v7
configurations = os.path.dirname(configurations) # Full2017
configurations = os.path.dirname(configurations) # ggH
configurations = os.path.dirname(configurations) # EFT
configurations = os.path.dirname(configurations) # Configurations
#aliases = {}

# imported from samples.py:
# samples, signals, backgrounds
mc = [skey for skey in samples if skey not in ('Fake', 'DATA', 'Dyemb')]
mc_emb = [skey for skey in samples if skey not in ('Fake', 'DATA')]
mc_ggh = [skey for skey in samples if (skey.startswith('H0') or skey.startswith('GGHjj_H0'))]
mc_ggh.append('ggH_hww')
mc_qqh = [skey for skey in samples if skey.startswith('VBF_H0')]

btag_algo="deepcsv"#deepflav

eleWP='mvaFall17V1Iso_WP90'
muWP='cut_Tight_HWWW_tthmva_80'

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc_emb + ['DATA']
}

aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
    'samples': 'VgS'
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': 'VgS'
}

aliases['embedtotal'] = {
    'expr': 'embed_total_WP90V1',  # wrt. eleWP
    'samples': 'Dyemb'
}

# Correct trigger efficiencies
aliases['SFweight2lAlt'] = {
    'expr'   : 'puWeight*TriggerAltEffWeight_2l*Lepton_RecoSF[0]*Lepton_RecoSF[1]*EMTFbug_veto',
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
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) + (topGenPt * antitopGenPt <= 0.)',
    'samples': ['top']
}

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/Differential/ngenjet.cc+' % configurations],
    'class': 'CountGenJet',
    'samples': mc #signals+backgrounds
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

if btag_algo=="deepcsv":
    aliases['bVeto'] = {
        'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0'
    }
    
    aliases['bReq'] = {
        'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) >= 1'
    }
  
elif btag_algo=="deepflav":
    aliases['bVeto'] = {
        'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx] >  0.0521) == 0'
    }
    
    aliases['bReq'] = {
        'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx] >  0.0521) >= 1'
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
        'expr': '(bVeto || (topcr && zeroJet))*bVetoSF + (topcr && !zeroJet)*bReqSF',
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
        'expr': '(bVeto || (topcr && zeroJet))*bVetoSF + (topcr && !zeroJet)*bReqSF',
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
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2 && ( (Jet_electronIdx1 != Lepton_electronIdx[0] && Jet_electronIdx1 != Lepton_electronIdx[1]) || Jet_electronIdx1 < 0 ) && \
                                             ( (Jet_electronIdx2 != Lepton_electronIdx[0] && Jet_electronIdx2 != Lepton_electronIdx[1]) || Jet_electronIdx2 < 0 ) && \
                                             ( (Jet_muonIdx1 != Lepton_muonIdx[0] && Jet_muonIdx1 != Lepton_muonIdx[1]) || Jet_muonIdx1 < 0 ) && \
                                             ( (Jet_muonIdx2 != Lepton_muonIdx[0] && Jet_muonIdx2 != Lepton_muonIdx[1]) || Jet_muonIdx2 < 0 ) \
                                             )*TMath::Log(Jet_PUIDSF_loose)))',
  'samples': mc
}

aliases['Jet_PUIDSF_up'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2 && ( (Jet_electronIdx1 != Lepton_electronIdx[0] && Jet_electronIdx1 != Lepton_electronIdx[1]) || Jet_electronIdx1 < 0 ) && \
                                             ( (Jet_electronIdx2 != Lepton_electronIdx[0] && Jet_electronIdx2 != Lepton_electronIdx[1]) || Jet_electronIdx2 < 0 ) && \
                                             ( (Jet_muonIdx1 != Lepton_muonIdx[0] && Jet_muonIdx1 != Lepton_muonIdx[1]) || Jet_muonIdx1 < 0 ) && \
                                             ( (Jet_muonIdx2 != Lepton_muonIdx[0] && Jet_muonIdx2 != Lepton_muonIdx[1]) || Jet_muonIdx2 < 0 ) \
                                             )*TMath::Log(Jet_PUIDSF_loose_up)))',
  'samples': mc
}

aliases['Jet_PUIDSF_down'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2 && ( (Jet_electronIdx1 != Lepton_electronIdx[0] && Jet_electronIdx1 != Lepton_electronIdx[1]) || Jet_electronIdx1 < 0 ) && \
                                             ( (Jet_electronIdx2 != Lepton_electronIdx[0] && Jet_electronIdx2 != Lepton_electronIdx[1]) || Jet_electronIdx2 < 0 ) && \
                                             ( (Jet_muonIdx1 != Lepton_muonIdx[0] && Jet_muonIdx1 != Lepton_muonIdx[1]) || Jet_muonIdx1 < 0 ) && \
                                             ( (Jet_muonIdx2 != Lepton_muonIdx[0] && Jet_muonIdx2 != Lepton_muonIdx[1]) || Jet_muonIdx2 < 0 ) \
                                             )*TMath::Log(Jet_PUIDSF_loose_down)))',
  'samples': mc
}

aliases['trig_drll_rw'] = {
     'expr' : '( ((drll >= 0.00 && drll <0.25)*0.019013 + (drll >= 0.25 && drll <0.50)*0.903772 + (drll >= 0.50 && drll <1.00)*0.996569 + (drll >= 1.00 && drll <1.50)*0.996051 + (drll >= 1.50 && drll <2.00)*0.997844 + (drll >= 2.00 && drll <2.50)*0.998130 + (drll >= 2.50 && drll <3.00)*0.998615 + (drll >= 3.00 && drll <3.50)*0.997920 + (drll >= 3.50 && drll <4.00)*0.997854 + (drll >= 4.00 && drll <4.50)*1.001182 + (drll >= 4.50)*0.994173)*(abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==11) + ((drll >= 0.00 && drll <0.25)*0.770696 + (drll >= 0.25 && drll <0.50)*1.003577 + (drll >= 0.50 && drll <1.00)*1.003401 + (drll >= 1.00 && drll <1.50)*1.002837 + (drll >= 1.50 && drll <2.00)*1.004616 + (drll >= 2.00 && drll <2.50)*1.004096 + (drll >= 2.50 && drll <3.00)*1.004561 + (drll >= 3.00 && drll <3.50)*1.004589 + (drll >= 3.50 && drll <4.00)*1.005748 + (drll >= 4.00 && drll <4.50)*1.006065 + (drll >= 4.50)*0.992700)*(abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==13) + ((drll >= 0.00 && drll <0.25)*0.857813 + (drll >= 0.25 && drll <0.50)*1.002417 + (drll >= 0.50 && drll <1.00)*0.999297 + (drll >= 1.00 && drll <1.50)*0.999881 + (drll >= 1.50 && drll <2.00)*0.998123 + (drll >= 2.00 && drll <2.50)*0.999193 + (drll >= 2.50 && drll <3.00)*0.997161 + (drll >= 3.00 && drll <3.50)*0.998346 + (drll >= 3.50 && drll <4.00)*0.995930 + (drll >= 4.00 && drll <4.50)*0.998973 + (drll >= 4.50)*0.977712)*(abs(Lepton_pdgId[0])==13 && abs(Lepton_pdgId[1])==11) + ((drll >= 0.00 && drll <0.25)*0.980155 + (drll >= 0.25 && drll <0.50)*0.993574 + (drll >= 0.50 && drll <1.00)*0.998352 + (drll >= 1.00 && drll <1.50)*1.001700 + (drll >= 1.50 && drll <2.00)*1.001031 + (drll >= 2.00 && drll <2.50)*0.999796 + (drll >= 2.50 && drll <3.00)*0.999189 + (drll >= 3.00 && drll <3.50)*1.000540 + (drll >= 3.50 && drll <4.00)*1.000136 + (drll >= 4.00 && drll <4.50)*1.003553 + (drll >= 4.50)*0.992509)*(abs(Lepton_pdgId[0])==13 && abs(Lepton_pdgId[1])==13) )',
    'samples' : mc
}

# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2lAlt', 'LepWPCut', 'LepSF2l__ele_' + eleWP + '__mu_' + muWP, 'btagSF', 'PrefireWeight','Jet_PUIDSF', 'trig_drll_rw']),
    'samples': mc
}


# Muon ttHMVA SF needed for tau embedded samples
aliases['Muon_ttHMVA_SF'] = {
    'expr': '( (abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF[0]/Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF[0])+(abs(Lepton_pdgId[0]) == 11) )*( (abs(Lepton_pdgId[1]) == 13)*(Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF[1]/Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF[1])+ (abs(Lepton_pdgId[1]) == 11) )',
    'samples' : ['Dyemb']
}


# variations
aliases['SFweightEleUp'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__Up',
    'samples': mc_emb
}
aliases['SFweightEleDown'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__Do',
    'samples': mc_emb
}
aliases['SFweightMuUp'] = {
    'expr': 'LepSF2l__mu_'+muWP+'__Up',
    'samples': mc_emb
}
aliases['SFweightMuDown'] = {
    'expr': 'LepSF2l__mu_'+muWP+'__Do',
    'samples': mc_emb
}

#needed for powheg ggH only
aliases['Weight2MINLO'] = {
    'linesToAdd': ['.L %s/Differential/weight2MINLO.cc+' % configurations],
    'class': 'Weight2MINLO',
    'args': '%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE'),
    'samples' : [skey for skey in samples if 'ggH_hww' in skey],
}

# GGHUncertaintyProducer wasn't run for GluGluHToWWTo2L2Nu_Powheg_M125
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
        'samples': mc_ggh,
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
        'samples': mc_qqh,
        'nominalOnly': True
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

################################################# EFT with MELA #############################################
# Couplings (gXHWW^2 = JHUXSHWWa1/JHUXSHWWaX) and cross-sections (JHUXSHWWaX) 
# https://github.com/hroskes/anomalouscouplingsconstants/blob/04fc990ad2452c79506de79474fe2c83243bb39f/constants.py#L75-L93
# https://twiki.cern.ch/twiki/bin/view/CMS/Run2MCProductionforHiggsProperties#POWHEG_ggH_Production_JHUGen_H_W

# Couplings used in JHUGen 

aliases['G2_HWW']  = {'expr': '1.133582'}
aliases['G4_HWW']  = {'expr': '1.76132'}
aliases['L1_HWW']  = {'expr': '-13752.22'}

aliases['G2_VBF']  = {'expr': '0.27196538'}
aliases['G4_VBF']  = {'expr': '0.29797901870'}
aliases['L1_VBF']  = {'expr': '-2158.21307286'}

aliases['G2_WH']   = {'expr': '0.0998956'}
aliases['G4_WH']   = {'expr': '0.1236136'}
aliases['L1_WH']   = {'expr': '-525.274'}

aliases['G2_ZH']   = {'expr': '0.112481'}
aliases['G4_ZH']   = {'expr': '0.144057'}
aliases['L1_ZH']   = {'expr': '-517.788'}

# Cross-sections : Decay 

aliases['JHUXSHWWa1']   = {'expr': '312.04019'}
aliases['JHUXSHWWa2']   = {'expr': '242.6283'}
aliases['JHUXSHWWa3']   = {'expr': '100.79135'} 
aliases['JHUXSHWWL1']   = {'expr': '1.6475531e-06'}
aliases['JHUXSHWWa1a2'] = {'expr': '1149.9181'}
aliases['JHUXSHWWa1a3'] = {'expr': '624.7195'}
aliases['JHUXSHWWa1L1'] = {'expr': '5.3585509'}

# Cross-sections : Production

aliases['JHUXSVBFa1']   = {'expr': '968.88143'}
aliases['JHUXSVBFa2']   = {'expr': '13097.831'}
aliases['JHUXSVBFa3']   = {'expr': '10910.237'}
aliases['JHUXSVBFL1']   = {'expr': '0.00020829261'}
aliases['JHUXSVBFa1a2'] = {'expr': '2207.6738'}
aliases['JHUXSVBFa1a3'] = {'expr': '1936.4327'}
aliases['JHUXSVBFa1L1'] = {'expr': '2861.7003'}

aliases['JHUXSWHa1']   = {'expr': '14813072'}
aliases['JHUXSWHa2']   = {'expr': '1.4845783e+09'}
aliases['JHUXSWHa3']   = {'expr': '9.6943028e+08'}
aliases['JHUXSWHL1']   = {'expr': '53.687994'}
aliases['JHUXSWHa1a2'] = {'expr': '7879980.3'}
aliases['JHUXSWHa1a3'] = {'expr': '29626131'}
aliases['JHUXSWHa1L1'] = {'expr': '12092167'}

aliases['JHUXSZHa1']   = {'expr': '1436880.4'}
aliases['JHUXSZHa2']   = {'expr': '1.1360424e+08'}
aliases['JHUXSZHa3']   = {'expr': '69241514'}
aliases['JHUXSZHL1']   = {'expr': '5.3610896'}
aliases['JHUXSZHa1a2'] = {'expr': '678434.94'}
aliases['JHUXSZHa1a3'] = {'expr': '2873685.9'}
aliases['JHUXSZHa1L1'] = {'expr': '1091656.8'}

# Normalisation Weights

aliases['H0PM_W']    = { 'expr': '1'}
aliases['H0M_W']     = { 'expr': '(JHUXSHWWa3/JHUXSHWWa1)'}
aliases['H0PH_W']    = { 'expr': '(JHUXSHWWa2/JHUXSHWWa1)'}
aliases['H0L1_W']    = { 'expr': '(JHUXSHWWL1/JHUXSHWWa1)'}
aliases['H0Mf05_W']  = { 'expr': '(JHUXSHWWa1a3/JHUXSHWWa1)'}
aliases['H0PHf05_W'] = { 'expr': '(JHUXSHWWa1a2/JHUXSHWWa1)'}
aliases['H0L1f05_W'] = { 'expr': '(JHUXSHWWa1L1/JHUXSHWWa1)'}

aliases['JHUXSHWWa1a2_I'] = {'expr':'(JHUXSHWWa1a2 - JHUXSHWWa1 - (G2_HWW**2)*JHUXSHWWa2)/G2_HWW'}
aliases['JHUXSHWWa1a3_I'] = {'expr':'(JHUXSHWWa1a3 - JHUXSHWWa1 - (G4_HWW**2)*JHUXSHWWa3)/G4_HWW'}
aliases['JHUXSHWWa1L1_I'] = {'expr':'(JHUXSHWWa1L1 - JHUXSHWWa1 - (L1_HWW**2)*JHUXSHWWL1)/L1_HWW'}

aliases['H0Mf05VBF_W']  = { 'expr': '(JHUXSHWWa1 + JHUXSHWWa1a3_I*G4_VBF + JHUXSHWWa3*(G4_VBF**2))/JHUXSHWWa1'}
aliases['H0PHf05VBF_W'] = { 'expr': '(JHUXSHWWa1 + JHUXSHWWa1a2_I*G2_VBF + JHUXSHWWa2*(G2_VBF**2))/JHUXSHWWa1'}
aliases['H0L1f05VBF_W'] = { 'expr': '(JHUXSHWWa1 + JHUXSHWWa1L1_I*L1_VBF + JHUXSHWWL1*(L1_VBF**2))/JHUXSHWWa1'}

aliases['H0Mf05WH_W']  = { 'expr': '(JHUXSHWWa1 + JHUXSHWWa1a3_I*G4_WH + JHUXSHWWa3*(G4_WH**2))/JHUXSHWWa1'}
aliases['H0PHf05WH_W'] = { 'expr': '(JHUXSHWWa1 + JHUXSHWWa1a2_I*G2_WH + JHUXSHWWa2*(G2_WH**2))/JHUXSHWWa1'}
aliases['H0L1f05WH_W'] = { 'expr': '(JHUXSHWWa1 + JHUXSHWWa1L1_I*L1_WH + JHUXSHWWL1*(L1_WH**2))/JHUXSHWWa1'}

aliases['H0Mf05ZH_W']  = { 'expr': '(JHUXSHWWa1 + JHUXSHWWa1a3_I*G4_ZH + JHUXSHWWa3*(G4_ZH**2))/JHUXSHWWa1'}
aliases['H0PHf05ZH_W'] = { 'expr': '(JHUXSHWWa1 + JHUXSHWWa1a2_I*G2_ZH + JHUXSHWWa2*(G2_ZH**2))/JHUXSHWWa1'}
aliases['H0L1f05ZH_W'] = { 'expr': '(JHUXSHWWa1 + JHUXSHWWa1L1_I*L1_ZH + JHUXSHWWL1*(L1_ZH**2))/JHUXSHWWa1'}

aliases['VBF_H0PM_W']    = { 'expr': '1'}
aliases['VBF_H0M_W']     = { 'expr': 'H0M_W*(JHUXSVBFa3/JHUXSVBFa1)'}
aliases['VBF_H0PH_W']    = { 'expr': 'H0PH_W*(JHUXSVBFa2/JHUXSVBFa1)'}
aliases['VBF_H0L1_W']    = { 'expr': 'H0L1_W*(JHUXSVBFL1/JHUXSVBFa1)'}
aliases['VBF_H0Mf05_W']  = { 'expr': 'H0Mf05VBF_W*(JHUXSVBFa1a3/JHUXSVBFa1)'}
aliases['VBF_H0PHf05_W'] = { 'expr': 'H0PHf05VBF_W*(JHUXSVBFa1a2/JHUXSVBFa1)'}
aliases['VBF_H0L1f05_W'] = { 'expr': 'H0L1f05VBF_W*(JHUXSVBFa1L1/JHUXSVBFa1)'}

aliases['WH_H0PM_W']    = { 'expr': '1'}
aliases['WH_H0M_W']     = { 'expr': 'H0M_W*(JHUXSWHa3/JHUXSWHa1)'}
aliases['WH_H0PH_W']    = { 'expr': 'H0PH_W*(JHUXSWHa2/JHUXSWHa1)'}
aliases['WH_H0L1_W']    = { 'expr': 'H0L1_W*(JHUXSWHL1/JHUXSWHa1)'}
aliases['WH_H0Mf05_W']  = { 'expr': 'H0Mf05WH_W*(JHUXSWHa1a3/JHUXSWHa1)'}
aliases['WH_H0PHf05_W'] = { 'expr': 'H0PHf05WH_W*(JHUXSWHa1a2/JHUXSWHa1)'}
aliases['WH_H0L1f05_W'] = { 'expr': 'H0L1f05WH_W*(JHUXSWHa1L1/JHUXSWHa1)'}

aliases['ZH_H0PM_W']    = { 'expr': '1'}
aliases['ZH_H0M_W']     = { 'expr': 'H0M_W*(JHUXSZHa3/JHUXSZHa1)'}
aliases['ZH_H0PH_W']    = { 'expr': 'H0PH_W*(JHUXSZHa2/JHUXSZHa1)'}
aliases['ZH_H0L1_W']    = { 'expr': 'H0L1_W*(JHUXSZHL1/JHUXSZHa1)'}
aliases['ZH_H0Mf05_W']  = { 'expr': 'H0Mf05ZH_W*(JHUXSZHa1a3/JHUXSZHa1)'}
aliases['ZH_H0PHf05_W'] = { 'expr': 'H0PHf05ZH_W*(JHUXSZHa1a2/JHUXSZHa1)'}
aliases['ZH_H0L1f05_W'] = { 'expr': 'H0L1f05ZH_W*(JHUXSZHa1L1/JHUXSZHa1)'}

# Get MEs for signal reweighting
mes = [ 'ME_H0PM',
    'ME_H0M', 'ME_H0M_M0', 'ME_H0M_M1', 'ME_H0M_M2', 'ME_H0M_M3', 'ME_H0Mf05', 
    'ME_H0PH','ME_H0PH_M0','ME_H0PH_M1','ME_H0PH_M2','ME_H0PH_M3','ME_H0PHf05',
    'ME_H0L1','ME_H0L1_M0','ME_H0L1_M1','ME_H0L1_M2','ME_H0L1_M3','ME_H0L1f05',
]

for me in mes:
    aliases[me] = {
    'linesToAdd': ['.L %s/EFT/VBF/Tools/getme.cc+' % configurations ],
    'class': 'GetME', 'samples': signals_rw, 'args': (me,),
}

