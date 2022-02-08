import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2017_HTXS_Stage1p2_v7
configurations = os.path.dirname(configurations) # ggH_SF
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

eleWP = 'mvaFall17V1Iso_WP90'
muWP='cut_Tight_HWWW_tthmva_80'


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
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPt) * TMath::Exp(0.0615 - 0.0005 * antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)',
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
    'expr': 'Alt$(CleanJet_pt[0], 0) >= 30. && Alt$(CleanJet_pt[1], 0) < 30.'
}

aliases['multiJet'] = {
    'expr': 'Alt$(CleanJet_pt[1], 0) >= 30.'
}

aliases['2jVH'] = {
'expr': '( Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && ( mjj >= 65 && mjj <= 105 ) )'
}

aliases['2jVBF'] = {
'expr': '( Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && mjj>=350 )'
}

aliases['2jggH'] = {
    'expr': '( Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && (!2jVH) )' # && !2jVBF ) )'
}

# SF cuts

aliases['Higgs0jet'] = {
'expr': '(mll < 60 && mth > 90 && abs(dphill) < 2.30)'
}
aliases['Higgs1jet'] = {
'expr': '(mll < 60 && mth > 80 && abs(dphill) < 2.25)'
}
aliases['Higgs2jet'] = {
'expr': '(mll < 60 && mth > 65 && mth < 150)'
}
aliases['Higgsvh'] = {
'expr': '(mll < 60 && mth > 60 && mth < 150 && abs(dphill) < 1.60)'
}
aliases['Higgsvbf'] = {
'expr': '(mll < 60 && mth > 60 && mth < 150 && abs(dphill) < 1.60)'
}
aliases['Higgshpt'] = {
'expr': '(mll < 60 && mth > 60 && ( (abs(dphill) < 2.0 && !multiJet) || (mth < 150 && multiJet) ))'
}


#Z veto
aliases['ZVeto'] = {
'expr': '(fabs(91.1876 - mll) > 15)'
}

# B tagging

aliases['bVeto'] = {
    'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0'
}

aliases['bReq'] = {
    'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) >= 1'
}

# CR definitions

aliases['topcr'] = {
    'expr': 'mtw2>30 && mll>50 && ((zeroJet && !bVeto) || bReq)'
}

aliases['dycr'] = {
    'expr': 'mth<60 && mll>40 && mll<80 && bVeto'
}

aliases['wwcr'] = {
    'expr': 'mth>60 && mtw2>30 && mll>100 && bVeto && ZVeto'
}

aliases['Zpeak'] = {
    'expr': 'fabs(91.1876 - mll) < 7.5'
}

# SR definition

aliases['sr'] = {
    'expr': 'bVeto && ZVeto'
}

# B tag scale factors

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

# Jet PU ID SF

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

# Correct trigger efficiencies
aliases['SFweight2lAlt'] = {
    'expr'   : 'puWeight*TriggerAltEffWeight_2l*Lepton_RecoSF[0]*Lepton_RecoSF[1]*EMTFbug_veto',
    'samples': mc
}

aliases['trig_drll_rw'] = {
     'expr' : '( ((drll >= 0.00 && drll <0.25)*0.019013 + (drll >= 0.25 && drll <0.50)*0.903772 + (drll >= 0.50 && drll <1.00)*0.996569 + (drll >= 1.00 && drll <1.50)*0.996051 + (drll >= 1.50 && drll <2.00)*0.997844 + (drll >= 2.00 && drll <2.50)*0.998130 + (drll >= 2.50 && drll <3.00)*0.998615 + (drll >= 3.00 && drll <3.50)*0.997920 + (drll >= 3.50 && drll <4.00)*0.997854 + (drll >= 4.00 && drll <4.50)*1.001182 + (drll >= 4.50)*0.994173)*(abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==11) + ((drll >= 0.00 && drll <0.25)*0.770696 + (drll >= 0.25 && drll <0.50)*1.003577 + (drll >= 0.50 && drll <1.00)*1.003401 + (drll >= 1.00 && drll <1.50)*1.002837 + (drll >= 1.50 && drll <2.00)*1.004616 + (drll >= 2.00 && drll <2.50)*1.004096 + (drll >= 2.50 && drll <3.00)*1.004561 + (drll >= 3.00 && drll <3.50)*1.004589 + (drll >= 3.50 && drll <4.00)*1.005748 + (drll >= 4.00 && drll <4.50)*1.006065 + (drll >= 4.50)*0.992700)*(abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==13) + ((drll >= 0.00 && drll <0.25)*0.857813 + (drll >= 0.25 && drll <0.50)*1.002417 + (drll >= 0.50 && drll <1.00)*0.999297 + (drll >= 1.00 && drll <1.50)*0.999881 + (drll >= 1.50 && drll <2.00)*0.998123 + (drll >= 2.00 && drll <2.50)*0.999193 + (drll >= 2.50 && drll <3.00)*0.997161 + (drll >= 3.00 && drll <3.50)*0.998346 + (drll >= 3.50 && drll <4.00)*0.995930 + (drll >= 4.00 && drll <4.50)*0.998973 + (drll >= 4.50)*0.977712)*(abs(Lepton_pdgId[0])==13 && abs(Lepton_pdgId[1])==11) + ((drll >= 0.00 && drll <0.25)*0.980155 + (drll >= 0.25 && drll <0.50)*0.993574 + (drll >= 0.50 && drll <1.00)*0.998352 + (drll >= 1.00 && drll <1.50)*1.001700 + (drll >= 1.50 && drll <2.00)*1.001031 + (drll >= 2.00 && drll <2.50)*0.999796 + (drll >= 2.50 && drll <3.00)*0.999189 + (drll >= 3.00 && drll <3.50)*1.000540 + (drll >= 3.50 && drll <4.00)*1.000136 + (drll >= 4.00 && drll <4.50)*1.003553 + (drll >= 4.50)*0.992509)*(abs(Lepton_pdgId[0])==13 && abs(Lepton_pdgId[1])==13) )',
    'samples' : mc
}

aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2lAlt', 'LepWPCut', 'LepSF2l__ele_' + eleWP + '__mu_' + muWP, 'btagSF', 'PrefireWeight','Jet_PUIDSF', 'trig_drll_rw']),
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

aliases['Weight2MINLO'] = {
    'linesToAdd': ['.L %s/Differential/weight2MINLO.cc+' % configurations],
    'class': 'Weight2MINLO',
    'args': '%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE'),
    'samples' : [skey for skey in samples if 'ggH_hww' in skey],
}

## GGHUncertaintyProducer wasn't run for GluGluHToWWTo2L2Nu_Powheg_M125 
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
        'samples': [skey for skey in samples if 'ggH_hww' in skey],
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



