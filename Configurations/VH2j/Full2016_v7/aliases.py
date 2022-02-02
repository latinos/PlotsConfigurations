
import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2016_v6
configurations = os.path.dirname(configurations) # VH2j
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA', 'Dyemb')]
mc_emb = [skey for skey in samples if skey not in ('Fake', 'DATA')]

eleWP = 'mva_90p_Iso2016'
muWP = 'cut_Tight80x_tthmva_80'

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
    'expr': 'embed_total_mva16',  # wrt. eleWP
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

aliases['Top_pTrw'] = {
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPt - 8.90557e-08*topGenPt*topGenPt) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPt - 8.90557e-08*antitopGenPt*antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)', # Same Reweighting as other years, but with additional fix for tune CUET -> CP5
    'samples': ['top']
}

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/Differential/ngenjet.cc+' % configurations],
    'class': 'CountGenJet',
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

aliases['bVeto'] = {
    'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0'
}

aliases['bReq'] = {
    'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) >= 1'
}

# CR definitions

aliases['topcr'] = {
    'expr': 'mll>50 && bReq'
}

aliases['dycr'] = {
    'expr': 'mth<60 && mll>40 && mll<80 && bVeto && drll < 2.'
}

aliases['wwcr'] = {
    'expr': 'mth>60 && mtw2>30 && mll>100 && bVeto'
}

# SR definition

aliases['sr'] = {
    'expr': 'mth>60 && mtw2>30 && bVeto'
}

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

# Correct trigger efficiencies
aliases['SFweight2lAlt'] = {
    'expr'   : 'puWeight*TriggerAltEffWeight_2l*Lepton_RecoSF[0]*Lepton_RecoSF[1]*EMTFbug_veto',
    'samples': mc
}

aliases['trig_drll_rw'] = {
     'expr' : '( ((drll >= 0.00 && drll <0.25)*0.019013 + (drll >= 0.25 && drll <0.50)*0.903772 + (drll >= 0.50 && drll <1.00)*0.996569 + (drll >= 1.00 && drll <1.50)*0.996051 + (drll >= 1.50 && drll <2.00)*0.997844 + (drll >= 2.00 && drll <2.50)*0.998130 + (drll >= 2.50 && drll <3.00)*0.998615 + (drll >= 3.00 && drll <3.50)*0.997920 + (drll >= 3.50 && drll <4.00)*0.997854 + (drll >= 4.00 && drll <4.50)*1.001182 + (drll >= 4.50)*0.994173)*(abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==11) + ((drll >= 0.00 && drll <0.25)*0.770696 + (drll >= 0.25 && drll <0.50)*1.003577 + (drll >= 0.50 && drll <1.00)*1.003401 + (drll >= 1.00 && drll <1.50)*1.002837 + (drll >= 1.50 && drll <2.00)*1.004616 + (drll >= 2.00 && drll <2.50)*1.004096 + (drll >= 2.50 && drll <3.00)*1.004561 + (drll >= 3.00 && drll <3.50)*1.004589 + (drll >= 3.50 && drll <4.00)*1.005748 + (drll >= 4.00 && drll <4.50)*1.006065 + (drll >= 4.50)*0.992700)*(abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==13) + ((drll >= 0.00 && drll <0.25)*0.857813 + (drll >= 0.25 && drll <0.50)*1.002417 + (drll >= 0.50 && drll <1.00)*0.999297 + (drll >= 1.00 && drll <1.50)*0.999881 + (drll >= 1.50 && drll <2.00)*0.998123 + (drll >= 2.00 && drll <2.50)*0.999193 + (drll >= 2.50 && drll <3.00)*0.997161 + (drll >= 3.00 && drll <3.50)*0.998346 + (drll >= 3.50 && drll <4.00)*0.995930 + (drll >= 4.00 && drll <4.50)*0.998973 + (drll >= 4.50)*0.977712)*(abs(Lepton_pdgId[0])==13 && abs(Lepton_pdgId[1])==11) + ((drll >= 0.00 && drll <0.25)*0.980155 + (drll >= 0.25 && drll <0.50)*0.993574 + (drll >= 0.50 && drll <1.00)*0.998352 + (drll >= 1.00 && drll <1.50)*1.001700 + (drll >= 1.50 && drll <2.00)*1.001031 + (drll >= 2.00 && drll <2.50)*0.999796 + (drll >= 2.50 && drll <3.00)*0.999189 + (drll >= 3.00 && drll <3.50)*1.000540 + (drll >= 3.50 && drll <4.00)*1.000136 + (drll >= 4.00 && drll <4.50)*1.003553 + (drll >= 4.50)*0.992509)*(abs(Lepton_pdgId[0])==13 && abs(Lepton_pdgId[1])==13) )',
    'samples' : mc
}

# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2lAlt','LepWPCut', 'LepSF2l__ele_' + eleWP + '__mu_' + muWP, 'btagSF', 'PrefireWeight', 'Jet_PUIDSF', 'trig_drll_rw']),
    'samples': mc
}

# Muon ttHMVA SF needed for tau embedded samples
aliases['Muon_ttHMVA_SF'] = {
    'expr': '( (abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_cut_Tight80x_tthmva_80_IdIsoSF[0]/Lepton_tightMuon_cut_Tight80x_IdIsoSF[0])+(abs(Lepton_pdgId[0]) == 11) )*( (abs(Lepton_pdgId[1]) == 13)*(Lepton_tightMuon_cut_Tight80x_tthmva_80_IdIsoSF[1]/Lepton_tightMuon_cut_Tight80x_IdIsoSF[1])+ (abs(Lepton_pdgId[1]) == 11) )',
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

aliases['Weight2MINLO'] = {
    'linesToAdd': ['.L %s/Differential/weight2MINLO.cc+' % configurations],
    'class': 'Weight2MINLO',
    'args': '%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE'),
    'samples' : [skey for skey in samples if 'ggH_hww' in skey],
}

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
    aliases[thu+'_2'] = {
        'linesToAdd': ['.L %s/Differential/gghuncertainty.cc+' % configurations],
        'class': 'GGHUncertainty',
        'args': (thu,),
        'samples': ['ggH_hww'],
        'nominalOnly': True
    }

# In WpWmJJ_EWK events, partons [0] and [1] are always the decay products of the first W
aliases['lhe_mW1'] = {
    'expr': 'TMath::Sqrt(2. * LHEPart_pt[2] * LHEPart_pt[3] * (TMath::CosH(LHEPart_eta[2] - LHEPart_eta[3]) - TMath::Cos(LHEPart_phi[2] - LHEPart_phi[3])))',
    'samples': ['WWewk']
}

# and [2] [3] are the second W
aliases['lhe_mW2'] = {
    'expr': 'TMath::Sqrt(2. * LHEPart_pt[4] * LHEPart_pt[5] * (TMath::CosH(LHEPart_eta[4] - LHEPart_eta[5]) - TMath::Cos(LHEPart_phi[4] - LHEPart_phi[5])))',
    'samples': ['WWewk']
}

