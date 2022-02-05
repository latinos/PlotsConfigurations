import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # 
configurations = os.path.dirname(configurations) # 
configurations = os.path.dirname(configurations) # 
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA', 'Dyemb')]
mc_emb = [skey for skey in samples if skey not in ('Fake', 'DATA')]
mc_ggh = [skey for skey in samples if (skey.startswith('H0') or skey.startswith('GGHjj_H0'))]
mc_ggh.append('ggH_hww')
mc_qqh = [skey for skey in samples if skey.startswith('VBF_H0')]

btag_algo="deepflav"

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

if btag_algo=="deepcsv":
    aliases['bVeto'] = {
        'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0'
    }

    aliases['bReq'] = {
        'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) >= 1'
    }

elif btag_algo=="deepflav":
    aliases['bVeto'] = {
        'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx] >  0.0614) == 0'
    }

    aliases['bReq'] = {
        'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepFlavB[CleanJet_jetIdx] >  0.0614) >= 1'
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
    btagSFSource = '%s/src/PhysicsTools/NanoAODTools/data/btagSF/DeepJet_2016LegacySF_V1.csv' % os.getenv('CMSSW_BASE')

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
    #'hf' 
    for shift in ['jes', 'lf','lfstats1', 'lfstats2', 'hfstats1', 'hfstats2', 'cferr1', 'cferr2']:
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

#PUIDSF

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
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2l','LepWPCut', 'LepSF2l__ele_' + eleWP + '__mu_' + muWP, 'btagSF', 'PrefireWeight', 'Jet_PUIDSF']),
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

'''
aliases['vbfdnn'] = {
        'linesToAdd': ['.L /afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2018_v7/dnn_quad/evaluate_multiclass_quad.cc+'],
        'class': 'evaluate_multiclass',
        'args': 0,
}

aliases['topdnn'] = {
        'linesToAdd': ['.L /afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2018_v7/dnn_quad/evaluate_multiclass_quad.cc+'],
        'class': 'evaluate_multiclass',
        'args': 1,
}

aliases['wwdnn'] = {
        'linesToAdd': ['.L /afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2018_v7/dnn_quad/evaluate_multiclass_quad.cc+'],
        'class': 'evaluate_multiclass',
        'args': 2,
}

aliases['gghdnn'] = {
        'linesToAdd': ['.L /afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2018_v7/dnn_quad/evaluate_multiclass_quad.cc+'],
        'class': 'evaluate_multiclass',
        'args': 3,
}

aliases['vbflike'] = {
        'expr': 'vbfdnn>gghdnn && vbfdnn>topdnn && vbfdnn>wwdnn',
}

aliases['toplike'] = {
        'expr': 'topdnn>gghdnn && topdnn>vbfdnn && topdnn>wwdnn',
}

aliases['wwlike'] = {
        'expr': 'wwdnn>gghdnn && wwdnn>topdnn && wwdnn>vbfdnn',
}

aliases['gghlike'] = {
        'expr': 'gghdnn>vbfdnn && gghdnn>topdnn && gghdnn>wwdnn',
}
'''

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
aliases['LZg_VBF'] = {'expr': '-4091.051456694223'}

aliases['G2_WH']   = {'expr': '0.0998956'}
aliases['G4_WH']   = {'expr': '0.1236136'}
aliases['L1_WH']   = {'expr': '-525.274'}

aliases['G2_ZH']   = {'expr': '0.112481'}
aliases['G4_ZH']   = {'expr': '0.144057'}
aliases['L1_ZH']   = {'expr': '-517.788'}
aliases['LZg_ZH'] = {'expr': '-642.9534550379002'}

aliases['G4_GGHjj']= {'expr': '1.0062'}

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
aliases['JHUXSVBFLZg']  = {'expr': '5.2902139e-05'}
aliases['JHUXSVBFa1a2'] = {'expr': '2207.6738'}
aliases['JHUXSVBFa1a3'] = {'expr': '1936.4327'}
aliases['JHUXSVBFa1L1'] = {'expr': '2861.7003'}
aliases['JHUXSVBFa1LZg']= {'expr': '1574.5833'}

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
aliases['JHUXSZHLZg']  = {'expr': '3.4592999'}
aliases['JHUXSZHa1a2'] = {'expr': '678434.94'}
aliases['JHUXSZHa1a3'] = {'expr': '2873685.9'}
aliases['JHUXSZHa1L1'] = {'expr': '1091656.8'}
aliases['JHUXSZHa1LZg']= {'expr': '3480087'}

aliases['JHUXSGGHjja2']   = {'expr': '14583.61'}
aliases['JHUXSGGHjja3']   = {'expr': '14397.13'}
aliases['JHUXSGGHjja2a3'] = {'expr': '29169.2'}

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
aliases['VBF_H0LZg_W']   = { 'expr': '1*(JHUXSVBFLZg/JHUXSVBFa1)'}
aliases['VBF_H0Mf05_W']  = { 'expr': 'H0Mf05VBF_W*(JHUXSVBFa1a3/JHUXSVBFa1)'}
aliases['VBF_H0PHf05_W'] = { 'expr': 'H0PHf05VBF_W*(JHUXSVBFa1a2/JHUXSVBFa1)'}
aliases['VBF_H0L1f05_W'] = { 'expr': 'H0L1f05VBF_W*(JHUXSVBFa1L1/JHUXSVBFa1)'}
aliases['VBF_H0LZgf05_W']= { 'expr': '1*(JHUXSVBFa1LZg/JHUXSVBFa1)'}

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
aliases['ZH_H0LZg_W']   = { 'expr': '1*(JHUXSZHLZg/JHUXSZHa1)'}
aliases['ZH_H0Mf05_W']  = { 'expr': 'H0Mf05ZH_W*(JHUXSZHa1a3/JHUXSZHa1)'}
aliases['ZH_H0PHf05_W'] = { 'expr': 'H0PHf05ZH_W*(JHUXSZHa1a2/JHUXSZHa1)'}
aliases['ZH_H0L1f05_W'] = { 'expr': 'H0L1f05ZH_W*(JHUXSZHa1L1/JHUXSZHa1)'}
aliases['ZH_H0LZgf05_W']= { 'expr': '1*(JHUXSZHa1LZg/JHUXSZHa1)'}

aliases['GGHjj_H0PM_W']    = { 'expr': '0.29'} #powheg/jhugen 
aliases['GGHjj_H0M_W']     = { 'expr': '0.29*(JHUXSGGHjja3/JHUXSGGHjja2)'}
aliases['GGHjj_H0Mf05_W']  = { 'expr': '0.29*(JHUXSGGHjja2a3/JHUXSGGHjja2)'}

# Prepare gen MEs for signal reweighting

mes = [ 'ME_H0PM',
    'ME_H0M', 'ME_H0M_M0', 'ME_H0M_M1', 'ME_H0M_M2', 'ME_H0M_M3', 'ME_H0Mf05', 
    'ME_H0PH','ME_H0PH_M0','ME_H0PH_M1','ME_H0PH_M2','ME_H0PH_M3','ME_H0PHf05',
    'ME_H0L1','ME_H0L1_M0','ME_H0L1_M1','ME_H0L1_M2','ME_H0L1_M3','ME_H0L1f05',
    'ME_H0LZg','ME_H0LZg_M0','ME_H0LZg_M1','ME_H0LZg_M2','ME_H0LZg_M3','ME_H0LZgf05',
    'ME_EFTH0M','ME_EFTH0M_M0','ME_EFTH0M_M1','ME_EFTH0M_M2','ME_EFTH0M_M3','ME_EFTH0Mf05', 
    'ME_EFTH0PH','ME_EFTH0PH_M0','ME_EFTH0PH_M1','ME_EFTH0PH_M2','ME_EFTH0PH_M3','ME_EFTH0PHf05',
    'ME_EFTH0L1','ME_EFTH0L1_M0','ME_EFTH0L1_M1','ME_EFTH0L1_M2','ME_EFTH0L1_M3','ME_EFTH0L1f05'
]

for me in mes:
    aliases[me] = {
    'linesToAdd': ['.L %s/EFT/VBF/Tools/getme.cc+' % configurations ],
    'class': 'GetME', 'samples': signals_rw, 'args': (me,),
}

# Constants as a function of hm 

cons = [
    'CVBF','CWH','CZH',
    'G4VBF','G4WH','G4ZH','G4VH',
    'G2VBF','G2WH','G2ZH','G2VH',
    'L1VBF','L1WH','L1ZH',
    'LZgVBF','LZgZH'
]

for con in cons:
    aliases[con] = {
    'linesToAdd': ['.L %s/EFT/VBF/Tools/getconstant.cc+' % configurations ],
    'class': 'GetConstant',
    'args': (con,),
}

# Additional reco MEs that arent in v7 

mes_add = ['me_qcd_hm','me_qcd_mixhm','me_zh_hlzg','me_vbf_hlzg']

for me in mes_add:
    aliases[me]={
    'linesToAdd': [
    'gSystem->Load("%s/src/ZZMatrixElement/MELA/data/%s/libmcfm_707.so","", kTRUE);'%(os.getenv('CMSSW_BASE'), os.getenv('SCRAM_ARCH')),
    'gSystem->Load("libZZMatrixElementMELA.so","", kTRUE);',
    '.L %s/EFT/VBF/Tools/addrecome.cc+' % configurations],
    'class': 'AddRecoME',
    'args': (me,)
    }

# VBF KDs

aliases['kd_smvbf']     = { 'expr': '1/(1+((me_qcd_hsm*CVBF)/me_vbf_hsm))' }
aliases['kd_hmvbf']     = { 'expr': '1/(1+((me_qcd_hsm*CVBF)/(me_vbf_hm*G4VBF**2)))' }
aliases['kd_hpvbf']     = { 'expr': '1/(1+((me_qcd_hsm*CVBF)/(me_vbf_hp*G2VBF**2)))' }
aliases['kd_hlvbf']     = { 'expr': '1/(1+((me_qcd_hsm*CVBF)/(me_vbf_hl*L1VBF**2)))' }
aliases['kd_vbf']       = { 'expr': 'max(max(kd_smvbf, kd_hmvbf), max(kd_hpvbf, kd_hlvbf))' }

aliases['kd_vbf_hm']    = { 'expr': '1/(1+(me_vbf_hsm/(me_vbf_hm*G4VBF**2)))' }
aliases['kd_vbf_hp']    = { 'expr': '1/(1+(me_vbf_hsm/(me_vbf_hp*G2VBF**2)))' }
aliases['kd_vbf_hl']    = { 'expr': '1/(1+(me_vbf_hsm/(me_vbf_hl*L1VBF**2)))' }
aliases['kd_vbf_hlzg']  = { 'expr': '1/(1+(me_vbf_hsm/(me_vbf_hlzg*LZgVBF**2)))' }
aliases['kd_vbf_mixhm'] = { 'expr': '(me_vbf_mixhm - me_vbf_hsm - me_vbf_hm)/(2*sqrt(me_vbf_hsm*me_vbf_hm))' }
aliases['kd_vbf_mixhp'] = { 'expr': '(me_vbf_mixhp - me_vbf_hsm - me_vbf_hp)/(2*sqrt(me_vbf_hsm*me_vbf_hp))' }

# VH KDs

aliases['pjj_wh'] = { 'expr':'pjjSm_wh/pjjTr_wh' }
aliases['pjj_zh'] = { 'expr':'pjjSm_zh/pjjTr_zh' }

aliases['kd_smwh'] = { 'expr': '1/(1+((me_qcd_hsm*CWH)/(me_wh_hsm*pjj_wh)))' }
aliases['kd_smzh'] = { 'expr': '1/(1+((me_qcd_hsm*CZH)/(me_zh_hsm*pjj_zh)))' }
aliases['kd_smvh'] = { 'expr': 'max(kd_smwh, kd_smzh)' }
aliases['kd_hmwh'] = { 'expr': '1/(1+((me_qcd_hsm*CWH)/(me_wh_hm*pjj_wh*G4WH**2)))' }
aliases['kd_hmzh'] = { 'expr': '1/(1+((me_qcd_hsm*CZH)/(me_zh_hm*pjj_zh*G4ZH**2)))' }
aliases['kd_hmvh'] = { 'expr': 'max(kd_hmwh, kd_hmzh)' }
aliases['kd_hpwh'] = { 'expr': '1/(1+((me_qcd_hsm*CWH)/(me_wh_hp*pjj_wh*G2WH**2)))' }
aliases['kd_hpzh'] = { 'expr': '1/(1+((me_qcd_hsm*CZH)/(me_zh_hp*pjj_zh*G2ZH**2)))' }
aliases['kd_hpvh'] = { 'expr': 'max(kd_hpwh, kd_hpzh)' }
aliases['kd_hlwh'] = { 'expr': '1/(1+((me_qcd_hsm*CWH)/(me_wh_hl*pjj_wh*L1WH**2)))' }
aliases['kd_hlzh'] = { 'expr': '1/(1+((me_qcd_hsm*CZH)/(me_zh_hl*pjj_zh*L1ZH**2)))' }
aliases['kd_hlvh'] = { 'expr': 'max(kd_hlwh, kd_hlzh)' }
aliases['kd_vh']   = { 'expr': 'max(max(kd_smvh, kd_hmvh), max(kd_hpvh, kd_hlvh))' }

aliases['kd_wh_hm']    = { 'expr': '1/(1+(me_wh_hsm/(me_wh_hm*G4WH**2)))' }
aliases['kd_zh_hm']    = { 'expr': '1/(1+(me_zh_hsm/(me_zh_hm*G4ZH**2)))' }
aliases['kd_vh_hm']    = { 'expr': 'max(kd_wh_hm, kd_zh_hm)' }

aliases['kd_wh_hp']    = { 'expr': '1/(1+(me_wh_hsm/(me_wh_hp*G2WH**2)))' }
aliases['kd_zh_hp']    = { 'expr': '1/(1+(me_zh_hsm/(me_zh_hp*G2ZH**2)))' }
aliases['kd_vh_hp']    = { 'expr': 'max(kd_wh_hp, kd_zh_hp)' }

aliases['kd_wh_hl']    = { 'expr': '1/(1+(me_wh_hsm/(me_wh_hl*L1WH**2)))' }
aliases['kd_zh_hl']    = { 'expr': '1/(1+(me_zh_hsm/(me_zh_hl*L1ZH**2)))' }
aliases['kd_vh_hl']    = { 'expr': 'max(kd_wh_hl, kd_zh_hl)' }

aliases['kd_vh_hlzg']  = { 'expr': '1/(1+(me_zh_hsm/(me_zh_hlzg*LZgZH**2)))' }

aliases['me_vh_hsm']   = { 'expr': '(me_wh_hsm/meAvg_wh) + (me_zh_hsm/meAvg_zh)' }
aliases['me_vh_hm']    = { 'expr': '(me_wh_hm/meAvg_wh) + (me_zh_hm/meAvg_zh)' }
aliases['me_vh_mixhm'] = { 'expr': '((me_wh_mixhm - me_wh_hsm - me_wh_hm)/meAvg_wh) + ((me_zh_mixhm - me_zh_hsm - me_zh_hm)/meAvg_zh)' }
aliases['kd_vh_mixhm'] = { 'expr': '(me_vh_mixhm*G4VH) / (me_vh_hsm + (me_vh_hm*G4VH**2))' }

aliases['me_vh_hp']    = { 'expr': '(me_wh_hp/meAvg_wh) + (me_zh_hp/meAvg_zh)' }
aliases['me_vh_mixhp'] = { 'expr': '((me_wh_mixhp - me_wh_hsm - me_wh_hp)/meAvg_wh) + ((me_zh_mixhp - me_zh_hsm - me_zh_hp)/meAvg_zh)' }
aliases['kd_vh_mixhp'] = { 'expr': '(me_vh_mixhp*G2VH) / (me_vh_hsm + (me_vh_hp*G2VH**2))' }

# GGHjj KDs

aliases['kd_smggh']     = { 'expr': '1/(1+(me_vbf_hsm/(me_qcd_hsm*CVBF)))' }
aliases['kd_hmggh']     = { 'expr': '1/(1+((me_vbf_hm*G4VBF**2)/(me_qcd_hsm*CVBF)))' }
aliases['kd_ggh']       = { 'expr': 'max(kd_smggh, kd_hmggh)' }

aliases['kd_ggh_hm']    = { 'expr': '1/(1+(me_qcd_hsm/(me_qcd_hm*G4_GGHjj**2)))' }
aliases['kd_ggh_mixhm'] = { 'expr': '(me_qcd_mixhm - me_qcd_hsm - me_qcd_hm)/(2*sqrt(me_qcd_hsm*me_qcd_hm))' }

################## Additional variables ##############################

aliases['mV'] = { 'expr': 'FatJet_msoftdrop[CleanFatJet_jetIdx[0]]' }

aliases['j1_px'] = { 'expr': 'CleanJet_pt[0]*cos(CleanJet_phi[0])' }
aliases['j2_px'] = { 'expr': 'CleanJet_pt[1]*cos(CleanJet_phi[1])' }
aliases['j1_py'] = { 'expr': 'CleanJet_pt[0]*sin(CleanJet_phi[0])' }
aliases['j2_py'] = { 'expr': 'CleanJet_pt[1]*sin(CleanJet_phi[1])' }
aliases['ptjj'] = { 'expr': 'sqrt(pow(j1_px[0] + j2_px[0],2) + pow(j1_py[0] + j2_py[0],2))' }

aliases['dphi']  = { 'expr': 'CleanJet_eta[0]>CleanJet_eta[1]? CleanJet_phi[0]-CleanJet_phi[1]:CleanJet_phi[1]-CleanJet_phi[0]'  }
aliases['pi']    = { 'expr': '3.141592'  }
aliases['dphip'] = { 'expr': 'dphi>pi? dphi - 2*pi : dphi'  }
aliases['dphis'] = { 'expr': 'dphip<-pi? dphip + 2*pi : dphip'  }

###########################################################################

