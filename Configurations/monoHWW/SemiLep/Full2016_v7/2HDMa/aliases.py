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

eleWP    = 'mva_90p_Iso2016'
muWP     = 'cut_Tight80x'

LepWPCut='(Lepton_isTightElectron_'+eleWP+'[0] > 0.5 \
            || Lepton_isTightMuon_'+muWP+'[0] > 0.5)'

Lep1WPCut='(Alt$(Lepton_isTightElectron_'+eleWP+'[1], 0) > 0.5 \
            || Alt$(Lepton_isTightMuon_'+muWP+'[1], 0) > 0.5)'

aliases['LepWPCut'] = {
    'expr': LepWPCut
}

aliases['Lep1WPCut'] = {
    'expr': Lep1WPCut
}
aliases['nTightLep'] = {
    'expr': '(Sum$(Lepton_isTightElectron_'+eleWP+') + Sum$(Lepton_isTightMuon_'+muWP+'))',
}
aliases['1tlVeto'] = {
    'expr': '(nTightLep[0] == 1)', 
}


###### PromptGenMatch ######

# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch1l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0], 0)',
    'samples': mc
}

###### SFweight ######

aliases['LepSF1l__ele_wp__mu_wp'] = {
    'expr': 'Lepton_tightElectron_'+eleWP+'_IdIsoSF[0]*Lepton_tightMuon_'+muWP+'_IdIsoSF[0]',
    'samples': mc
}

# data/MC scale factors
aliases['SFweight1l'] = {
    'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l', 'Lepton_RecoSF[0]', 'EMTFbug_veto']),
    'samples': mc
}
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight1l[0]', 'LepSF1l__ele_wp__mu_wp[0]', 'PrefireWeight']),
    'samples': mc
}
# # variations of tight lepton WP
aliases['SFweightEleUp'] = {
    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF_Up[0]/Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
    'samples': mc
}
aliases['SFweightEleDown'] = {
    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF_Down[0]/Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
    'samples': mc
}
aliases['SFweightMuUp'] = {
    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF_Up[0]/Lepton_tightMuon_'+muWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
    'samples': mc
}
aliases['SFweightMuDown'] = {
    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF_Down[0]/Lepton_tightMuon_'+muWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
    'samples': mc
}



aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
    'samples': 'VgS'
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': 'VgS'
}

aliases['GenLHE'] = {
'expr': '(Sum$(LHEPart_pdgId == 21) == 0)',
'samples': ['qqWWqq', 'WW2J']
}


###### bVeto ######

## Clash fix was needed in v6
#aliases['idx_j1'] = {
#    'expr': 'HM_idx_j1',
#    'samples': new_samples
#}
#aliases['idx_j2'] = {
#    'expr': 'HM_idx_j2',
#    'samples': new_samples
#}

aliases['ori_idx_j1'] = {
    'expr': 'Alt$(CleanJet_jetIdx[HM_idx_j1], -9989.)'
}
aliases['ori_idx_j2'] = {
    'expr': 'Alt$(CleanJet_jetIdx[HM_idx_j2], -9989.)'
}

# v6 fix
#aliases['Jet_btagSF_shape'] = {
#    'expr': 'Jet_btagSF_deepcsv_shape',
#    'samples': new_samples
#}
#for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:
#    aliases['Jet_btagSF_shape_up_'+shift] = {
#        'expr': 'Jet_btagSF_deepcsv_shape_up_'+shift,
#        'samples': new_samples
#    }
#    aliases['Jet_btagSF_shape_down_'+shift] = {
#        'expr': 'Jet_btagSF_deepcsv_shape_down_'+shift,
#        'samples': new_samples
#    }

bJetV_req = '(CleanJet_pt > 20 && abs(CleanJet_eta) < 2.5 && CleanJet_jetIdx != ori_idx_j1[0] && CleanJet_jetIdx != ori_idx_j2[0])'
bJetR_req = '(CleanJet_pt > 30 && abs(CleanJet_eta) < 2.5 && CleanJet_jetIdx != ori_idx_j1[0] && CleanJet_jetIdx != ori_idx_j2[0])'

aliases['bVeto'] = {
    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx] > 0.1522 && '+bJetV_req+' ) == 0',
}

aliases['bReq'] = {
    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx] > 0.1522 && '+bJetR_req+' ) >= 1',
}
aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log('+bJetV_req+'*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(!'+bJetV_req+'))))',
    'samples': mc
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log('+bJetR_req+'*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(!'+bJetR_req+'))))',
    'samples': mc
}

aliases['btagSF'] = {
    'expr': '(bVetoSF[0]*bVeto[0] + bReqSF[0]*bReq[0])',
    'samples': mc
}

for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:
    for targ in ['bVeto', 'bReq']:
        aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        aliases['%sSF%sup' % (targ, shift)]['expr'] = aliases['%sSF%sup' % (targ, shift)]['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_up_%s' % shift)

        aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        aliases['%sSF%sdown' % (targ, shift)]['expr'] = aliases['%sSF%sdown' % (targ, shift)]['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_down_%s' % shift)

    aliases['btagSF%sup' % shift] = {
        'expr': '(bVetoSF{shift}up[0]*bVeto[0] + bReqSF{shift}up[0]*bReq[0])'.format(shift = shift),
        'samples': mc
    }

    aliases['btagSF%sdown' % shift] = {
        'expr': '(bVetoSF{shift}down[0]*bVeto[0] + bReqSF{shift}down[0]*bReq[0])'.format(shift = shift),
        'samples': mc
    }


# FIXME top stuff
# PostProcessing did not create (anti)topGenPt for ST samples with _ext1
lastcopy = (1 << 13)

aliases['isTTbar'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && (GenPart_statusFlags & %d)) == 2' % lastcopy,
    'samples': ['top']
}

aliases['isSingleTop'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && (GenPart_statusFlags & %d)) == 1' % lastcopy,
    'samples': ['top']
}

aliases['topGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == 6 && (GenPart_statusFlags & %d)) * GenPart_pt)' % lastcopy,
    'samples': ['top']
}

aliases['antitopGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == -6 && (GenPart_statusFlags & %d)) * GenPart_pt)' % lastcopy,
    'samples': ['top']
}
#
#TF_a = '-2.02274e-01'
#TF_b = '1.09734e-04'
#TF_c = '-1.30088e-07'
#TF_d = '5.83494e+01'
#TF_e = '1.96252e+02'

aliases['Top_pTrw'] = {
    # New top PAG
    # Somehow TTWJetsToLNu_ext1, TTZjets have no topGenPt, antitopGenPt (TopGenVarsProducer) => OTF
    'expr': '(topGenPtOTF * antitopGenPtOTF > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPtOTF) - 0.000134*topGenPtOTF + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPtOTF) - 0.000134*antitopGenPtOTF + 0.973))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPtOTF - 8.90557e-08*topGenPtOTF*topGenPtOTF) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPtOTF - 8.90557e-08*antitopGenPtOTF*antitopGenPtOTF))) + (topGenPtOTF * antitopGenPtOTF <= 0.)', # Same Reweighting as other years, but with additional fix for tune CUET -> CP5
    #'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPt - 8.90557e-08*topGenPt*topGenPt) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPt - 8.90557e-08*antitopGenPt*antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)', # Same Reweighting as other years, but with additional fix for tune CUET -> CP5
    'samples': ['top']
}

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
    'expr': '('+DYrew['2016']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY', 'DYlow']
}
aliases['DY_LO_pTllrw'] = {
    'expr': '('+DYrew['2016']['LO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY', 'DYlow']
}


# PU jet Id SF

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


aliases['EWKnloW'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v6/2HDMa/EWKnloW.cc' % os.getenv('CMSSW_BASE')
    ],
    'class': 'EWKnloW',
    'samples': "Wjets"
}

### Fake-Weight stuff
#for mu_et in [20, 25, 35]:
#    aliases['FW_mu'+str(mu_et)+'_el35'] = {
#        'expr': 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_1l_mu'+str(mu_et)+'_ele35',
#        'samples': ["FAKE"]
#    }
#    for syst in ['ElUp', 'ElDown', 'statElUp', 'statElDown', 'MuUp', 'MuDown', 'statMuUp', 'statMuDown']:
#        if 'El' in syst: tmp_pdgId = '11'
#        else: tmp_pdgId = '13'
#        aliases['FW_mu'+str(mu_et)+'_el35_'+syst] = {
#            'expr': 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_1l_mu'+str(mu_et)+'_ele35',
#            'expr': '((TMath::Abs(Lepton_pdgId[0]) == '+tmp_pdgId+')*(fakeW_ele_'+eleWP+'_mu_'+muWP+'_1l_mu'+str(mu_et)+'_ele35_'+syst+'/FW_mu'+str(mu_et)+'_el35[0]) + !(TMath::Abs(Lepton_pdgId[0]) == '+tmp_pdgId+'))',
#            'samples': ["FAKE"]
#        }

#for mu_et in [20]:
for mu_et in [35]:
    for el_et in [25, 35, 45]:
        el_fr_file = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v7/2HDMa/FR/plot_ElCh_JetEt"+str(el_et)+"_l1_etaVpt_fw_ewk_2D.root"
        mu_fr_file = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v7/2HDMa/FR/plot_MuCh_JetEt"+str(mu_et)+"_l1_etaVpt_fw_ewk_2D.root"
        el_pr_file = os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2017v6/mvaFall17V1IsoWP90/ElePR.root"
        mu_pr_file = os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2017v6/mvaFall17V1IsoWP90/MuonPR.root"

        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)] = {
            'class': 'newFakeWeightOTF',
            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(el_pr_file), copy.deepcopy(mu_fr_file), copy.deepcopy(mu_pr_file), False, False), 
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v7/2HDMa/newfakeweight_OTF.cc+' % os.getenv('CMSSW_BASE')
             ],
            'samples': ["FAKE"]
        }
        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)+'_statUp'] = {
            'class': 'newFakeWeightOTF',
            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(el_pr_file), copy.deepcopy(mu_fr_file), copy.deepcopy(mu_pr_file), True, False), 
            'samples': ["FAKE"]
        }
        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)+'_statDo'] = {
            'class': 'newFakeWeightOTF',
            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(el_pr_file), copy.deepcopy(mu_fr_file), copy.deepcopy(mu_pr_file), False, True), 
            'samples': ["FAKE"]
        }

#for mu_et in [10, 30]:
for mu_et in [25, 45]:
    for el_et in [35]:
        el_fr_file = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2016_v7/2HDMa/FRnew/plot_ElCh_JetEt"+str(el_et)+"_l1_etaVpt_ptel_fw_ewk_2D.root"
        mu_fr_file = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2016_v7/2HDMa/FRnew/plot_MuCh_JetEt"+str(mu_et)+"_l1_etaVpt_ptmu_fw_ewk_2D.root"
        el_pr_file = os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2016v7/mva90pIso2016/ElePR.root"
        mu_pr_file = os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2016v7/Tight80X/MuonPR.root"

        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)] = {
            'class': 'newFakeWeightOTF',
            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(el_pr_file), copy.deepcopy(mu_fr_file), copy.deepcopy(mu_pr_file), False, False), 
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v7/2HDMa/newfakeweight_OTF.cc+' % os.getenv('CMSSW_BASE')
             ],
            'samples': ["FAKE"]
        }
        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)+'_statUp'] = {
            'class': 'newFakeWeightOTF',
            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(el_pr_file), copy.deepcopy(mu_fr_file), copy.deepcopy(mu_pr_file), True, False), 
            'samples': ["FAKE"]
        }
        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)+'_statDo'] = {
            'class': 'newFakeWeightOTF',
            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(el_pr_file), copy.deepcopy(mu_fr_file), copy.deepcopy(mu_pr_file), False, True), 
            'samples': ["FAKE"]
        }

#for mu_et in [10, 30]:
for mu_et in [25, 45]:
    for el_et in [35]:
        el_fr_file = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2016_v7/2HDMa/FRnew/plot_ElCh_JetEt"+str(el_et)+"_l1_etaVpt_ptel_fw_ewk_2D.root"
        mu_fr_file = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2016_v7/2HDMa/FRnew/plot_MuCh_JetEt"+str(mu_et)+"_l1_etaVpt_ptmu_fw_ewk_2D.root"
        el_pr_file = os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2016v7/mva90pIso2016/ElePR.root"
        mu_pr_file = os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2016v7/Tight80X/MuonPR.root"

        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)] = {
            'class': 'newFakeWeightOTF',
            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(el_pr_file), copy.deepcopy(mu_fr_file), copy.deepcopy(mu_pr_file), False, False), 
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v7/2HDMa/newfakeweight_OTF.cc+' % os.getenv('CMSSW_BASE')
             ],
            'samples': ["FAKE"]
        }
        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)+'_statUp'] = {
            'class': 'newFakeWeightOTF',
            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(el_pr_file), copy.deepcopy(mu_fr_file), copy.deepcopy(mu_pr_file), True, False), 
            'samples': ["FAKE"]
        }
        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)+'_statDo'] = {
            'class': 'newFakeWeightOTF',
            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(el_pr_file), copy.deepcopy(mu_fr_file), copy.deepcopy(mu_pr_file), False, True), 
            'samples': ["FAKE"]
        }

#for mu_et in [20]:
for mu_et in [35]:
    aliases['FW_mu'+str(mu_et)+'_el35_ElUp'] = {
        'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(FW_mu'+str(mu_et)+'_el45[0]/FW_mu'+str(mu_et)+'_el35[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
        'samples': ["FAKE"]
    }
    aliases['FW_mu'+str(mu_et)+'_el35_ElDown'] = {
        'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(FW_mu'+str(mu_et)+'_el25[0]/FW_mu'+str(mu_et)+'_el35[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
        'samples': ["FAKE"]
    }
    
    aliases['FW_mu'+str(mu_et)+'_el35_MuUp'] = {
        'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(FW_mu'+str(mu_et+10)+'_el35[0]/FW_mu'+str(mu_et)+'_el35[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
        'samples': ["FAKE"]
    }
    aliases['FW_mu'+str(mu_et)+'_el35_MuDown'] = {
        'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(FW_mu'+str(mu_et-10)+'_el35[0]/FW_mu'+str(mu_et)+'_el35[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
        'samples': ["FAKE"]
    }

    # Stat
    aliases['FW_mu'+str(mu_et)+'_el35_statElUp'] = {
        'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(FW_mu'+str(mu_et)+'_el35_statUp[0]/FW_mu'+str(mu_et)+'_el35[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
        'samples': ["FAKE"]
    }
    aliases['FW_mu'+str(mu_et)+'_el35_statElDown'] = {
        'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(FW_mu'+str(mu_et)+'_el35_statDo[0]/FW_mu'+str(mu_et)+'_el35[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
        'samples': ["FAKE"]
    }
    
    aliases['FW_mu'+str(mu_et)+'_el35_statMuUp'] = {
        'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(FW_mu'+str(mu_et)+'_el35_statUp[0]/FW_mu'+str(mu_et)+'_el35[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
        'samples': ["FAKE"]
    }
    aliases['FW_mu'+str(mu_et)+'_el35_statMuDown'] = {
        'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(FW_mu'+str(mu_et)+'_el35_statDo[0]/FW_mu'+str(mu_et)+'_el35[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
        'samples': ["FAKE"]
    }
