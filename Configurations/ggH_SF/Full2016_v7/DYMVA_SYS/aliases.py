import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # DYMVA_SYS
configurations = os.path.dirname(configurations) # Full2016_v7
configurations = os.path.dirname(configurations) # ggH_SF
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

eleWP = 'mva_90p_Iso2016'
muWP = 'cut_Tight80x_tthmva_80'


aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc + ['DATA']
}

aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 4',
    'samples': 'VgS'
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass < 0 || Gen_ZGstar_mass > 4',
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
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPt - 8.90557e-08*topGenPt*topGenPt) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPt - 8.90557e-08*antitopGenPt*antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)', # Same Reweighting as other years, but with additional fix for tune CUET -> CP5
    'samples': ['top']
}

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/Differential/ngenjet.cc+' % configurations],
    'class': 'CountGenJet',
    'samples': mc
}

##### DY Z pT reweighting - NEW!
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

# ##### DY Z pT reweighting - Old, for testing

# # ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
# # ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

# aliases['DY_NLO_pTllrw'] = {
#     'expr': '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)',
#     'samples': ['DY']
# }
# aliases['DY_LO_pTllrw'] = {
#     'expr': '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)',
#     'samples': ['DY']
# }


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
'expr': '( Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30 && (!2jVH && !2jVBF ) )'
}

# B tagging

aliases['bVeto'] = {
    'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0'
}

aliases['bReq'] = {
    'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) >= 1'
}

# CR definitions

aliases['ZVeto'] = {
'expr': '(fabs(91.1876 - mll) > 15)'
}

aliases['topcr'] = {
    'expr': 'mtw2>30 && mll>50 && ((zeroJet && !bVeto) || bReq)'
}

aliases['dycr'] = {
    'expr': 'mth<60 && mll>40 && mll<80 && bVeto'
}

aliases['Zpeak'] = {
    'expr': 'fabs(91.1876 - mll) < 7.5'
}

aliases['wwcr'] = {
    'expr': 'mth>60 && mtw2>30 && mll>100 && bVeto && ZVeto'
}

# SR definition

aliases['sr'] = {
'expr': 'bVeto && ZVeto'
}

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

# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2lAlt','LepWPCut', 'LepSF2l__ele_' + eleWP + '__mu_' + muWP, 'btagSF', 'PrefireWeight', 'Jet_PUIDSF']),
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

# DY data-driven shape correction

aliases['shape_corr_DY'] = {
    'expr': '(0.938283209094 + 0.380719879255 * dymva_alt_dnn_0j) * (zeroJet) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (0.862282207129 + 0.319534138391 * dymva_alt_dnn_0j) * (zeroJet) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (0.941593672091 + 0.226900675686 * dymva_alt_dnn_1j) * (oneJet) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (0.885030649574 + 0.0367342476074 * dymva_alt_dnn_1j + 0.13013905235 * dymva_alt_dnn_1j * dymva_alt_dnn_1j + 0.170058976639 * dymva_alt_dnn_1j * dymva_alt_dnn_1j * dymva_alt_dnn_1j) * (oneJet) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (1.03575702344 + 0.329937915913 * dymva_alt_dnn_2j) * (2jggH) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (0.963031489029 + 0.287508042786 * dymva_alt_dnn_2j -0.230439659837 * dymva_alt_dnn_2j * dymva_alt_dnn_2j + 0.401444867936 * dymva_alt_dnn_2j * dymva_alt_dnn_2j * dymva_alt_dnn_2j) * (2jggH) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (1.18643485684 + 0.787771761938 * dymva_alt_dnn_VBF) * (2jVBF) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (1.09178545368 + 0.821244571573 * dymva_alt_dnn_VBF) * (2jVBF) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (0.782230658291 + 2.13394435905 * dymva_alt_dnn_VH -4.31572869781 * dymva_alt_dnn_VH * dymva_alt_dnn_VH + 2.54252738325 * dymva_alt_dnn_VH * dymva_alt_dnn_VH * dymva_alt_dnn_VH + 0.334095271603 * dymva_alt_dnn_VH * dymva_alt_dnn_VH * dymva_alt_dnn_VH * dymva_alt_dnn_VH) * (2jVH) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (0.811403179261 + 0.686960341854 * dymva_alt_dnn_VH + 0.152317205275 * dymva_alt_dnn_VH * dymva_alt_dnn_VH -0.589685519112 * dymva_alt_dnn_VH * dymva_alt_dnn_VH * dymva_alt_dnn_VH) * (2jVH) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)',
    'samples': ['DY']
}


# Using MVA
# (0.938283209094 + 0.380719879255 * dymva_alt_dnn_0j) * (zeroJet) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (0.862282207129 + 0.319534138391 * dymva_alt_dnn_0j) * (zeroJet) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (0.941593672091 + 0.226900675686 * dymva_alt_dnn_1j) * (oneJet) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (0.885030649574 + 0.0367342476074 * dymva_alt_dnn_1j + 0.13013905235 * dymva_alt_dnn_1j * dymva_alt_dnn_1j + 0.170058976639 * dymva_alt_dnn_1j * dymva_alt_dnn_1j * dymva_alt_dnn_1j) * (oneJet) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (1.03575702344 + 0.329937915913 * dymva_alt_dnn_2j) * (2jggH) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (0.963031489029 + 0.287508042786 * dymva_alt_dnn_2j -0.230439659837 * dymva_alt_dnn_2j * dymva_alt_dnn_2j + 0.401444867936 * dymva_alt_dnn_2j * dymva_alt_dnn_2j * dymva_alt_dnn_2j) * (2jggH) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (1.18643485684 + 0.787771761938 * dymva_alt_dnn_VBF) * (2jVBF) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (1.09178545368 + 0.821244571573 * dymva_alt_dnn_VBF) * (2jVBF) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (0.782230658291 + 2.13394435905 * dymva_alt_dnn_VH -4.31572869781 * dymva_alt_dnn_VH * dymva_alt_dnn_VH + 2.54252738325 * dymva_alt_dnn_VH * dymva_alt_dnn_VH * dymva_alt_dnn_VH + 0.334095271603 * dymva_alt_dnn_VH * dymva_alt_dnn_VH * dymva_alt_dnn_VH * dymva_alt_dnn_VH) * (2jVH) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (0.811403179261 + 0.686960341854 * dymva_alt_dnn_VH + 0.152317205275 * dymva_alt_dnn_VH * dymva_alt_dnn_VH -0.589685519112 * dymva_alt_dnn_VH * dymva_alt_dnn_VH * dymva_alt_dnn_VH) * (2jVH) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)

## Using ptll
# (0.862704592793 + 0.00373952542723 * ptll) * (zeroJet) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (0.842265078595 + 0.00205553912637 * ptll) * (zeroJet) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (1.14322798003 -0.0105896115833 * ptll + 0.000173801034789 * ptll * ptll -8.00134126077e-07 * ptll * ptll * ptll + 1.09774597438e-09 * ptll * ptll * ptll * ptll) * (oneJet) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (1.14076725401 -0.0132398878078 * ptll + 0.000197452297613 * ptll * ptll -8.70436552887e-07 * ptll * ptll * ptll + 1.17205324956e-09 * ptll * ptll * ptll * ptll) * (oneJet) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (0.968838083941 + 0.00253450203627 * ptll -2.04377748577e-06 * ptll * ptll -1.14638166047e-08 * ptll * ptll * ptll) * (2jggH) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (0.959793952626 -4.08125841193e-05 * ptll + 1.81800176156e-05 * ptll * ptll -4.95970096096e-08 * ptll * ptll * ptll) * (2jggH) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (1.02383675528 + 0.00502287782887 * ptll -1.46929372145e-05 * ptll * ptll) * (2jVBF) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (0.896646718618 + 0.00495687714566 * ptll -1.23526486134e-05 * ptll * ptll) * (2jVBF) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (1.15224360831 -0.011019058665 * ptll + 0.000169851615905 * ptll * ptll -7.63791618429e-07 * ptll * ptll * ptll + 1.04361817864e-09 * ptll * ptll * ptll * ptll) * (2jVH) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) + (0.842451727388 -0.000595792165988 * ptll + 2.97895828839e-05 * ptll * ptll -8.16201678331e-08 * ptll * ptll * ptll) * (2jVH) * (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) + (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)
