import os
import copy
import inspect

import numpy as np

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2017v7
configurations = os.path.dirname(configurations) # HM
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('FAKE', 'DATA')]
wjets = [skey for skey in samples if skey.startswith('Wjets')]


eleWP    = 'mvaFall17V1Iso_WP90'
muWP     = 'cut_Tight_HWWW'


aliases['mjjGen_OTF'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/HighMass/HMvars_mjjgen.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'HMvarsmjjgen',
    'samples': [skey for skey in samples if "QQHSBI" in skey or skey in ['WW', 'qqWWqq', 'WW2J', 'DYveto']]
}

aliases['bWP'] = {
    'expr': '0.1522'
}
aliases['tau21WP'] = {
    'expr': '0.45'
}
aliases['LepWPCut'] = {
    'expr': '(Lepton_isTightElectron_'+eleWP+'[0] > 0.5 \
            || Lepton_isTightMuon_'+muWP+'[0] > 0.5)'
}
aliases['Lep1WPCut'] = {
    'expr': '(Alt$(Lepton_isTightElectron_'+eleWP+'[1], 0) > 0.5 \
            || Alt$(Lepton_isTightMuon_'+muWP+'[1], 0) > 0.5)'
}
aliases['nTightLep'] = {
    'expr': '(Sum$(Lepton_isTightElectron_'+eleWP+') + Sum$(Lepton_isTightMuon_'+muWP+'))',
}


aliases['resolvHiggsMT'] = {
    # 'expr': 'HM_Hlnjj_mt'
    'expr': 'TMath::Sqrt( 2*Lepton_pt[0]*PuppiMET_pt \
    *( 1-TMath::Cos(Lepton_phi[0]-PuppiMET_phi) ) )'
}

aliases['HM_Hlnjj_MT'] = {
    # 'expr': 'HM_Hlnjj_mt'
    'expr': 'TMath::Sqrt( 2*HM_Wlep_pt_Puppi*HM_Whad_pt \
    *( 1-TMath::Cos(HM_Wlep_phi_Puppi-HM_Whad_phi) ) )'
}


eff_tr_dir = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/TriggEff/fixedTextfiles/"
aliases['ele_trig_eff_B'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/triggerEff_1lep.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'TrigEff_1lep',
    'args': (eff_tr_dir+'2017/mvaid/Ele35_pt_eta_efficiency_withSys_Run2017B.txt'),
    'samples': mc
}

aliases['ele_trig_eff_CDE'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/triggerEff_1lep.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'TrigEff_1lep',
    'args': (eff_tr_dir+'2017/mvaid/Ele35_pt_eta_efficiency_withSys_Run2017CDE.txt'),
    'samples': mc
}

aliases['ele_trig_eff_F'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/triggerEff_1lep.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'TrigEff_1lep',
    'args': (eff_tr_dir+'2017/mvaid/Ele35_pt_eta_efficiency_withSys_Run2017F.txt'),
    'samples': mc
}

aliases['ele_trig_eff'] = {
    'expr' : '(run_period==1)*ele_trig_eff_B[0] + (run_period>1 && run_period<5)*ele_trig_eff_CDE[0] + (run_period==5)*ele_trig_eff_F[0]',
    'samples': mc
}

aliases['ele_trig_eff_u'] = {
    'expr' : '(run_period==1)*ele_trig_eff_B[1] + (run_period>1 && run_period<5)*ele_trig_eff_CDE[1] + (run_period==5)*ele_trig_eff_F[1]',
    'samples': mc
}

aliases['ele_trig_eff_d'] = {
    'expr' : '(run_period==1)*ele_trig_eff_B[2] + (run_period>1 && run_period<5)*ele_trig_eff_CDE[2] + (run_period==5)*ele_trig_eff_F[2]',
    'samples': mc
}

aliases['TriggerEffWeight_1l_fixed'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l',
    'samples': mc
}

aliases['TriggerEffWeight_1l_fixed_u'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff_u +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l_u',
    'samples': mc
}

aliases['TriggerEffWeight_1l_fixed_d'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff_d +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l_d',
    'samples': mc
}



aliases['LepWPSF'] = {
    'expr': '((Lepton_isTightElectron_'+eleWP+'[0] > 0.5) * Lepton_tightElectron_'+eleWP+'_TotSF[0] \
    + (Lepton_isTightMuon_'+muWP+'[0] > 0.5)*Lepton_tightMuon_'+muWP+'_TotSF[0])',
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



#aliases['gstarLow'] = {
#    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
#    'samples': 'VgS'
#}
#
#aliases['gstarHigh'] = {
#    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
#    'samples': 'VgS'
#}
#
#aliases['GenLHE'] = {
#'expr': '(Sum$(LHEPart_pdgId == 21) == 0)',
#'samples': ['qqWWqq', 'WW2J']
#}


####### bVeto ######
#
### Clash fix was needed in v6
##aliases['idx_j1'] = {
##    'expr': 'HM_idx_j1',
##    'samples': new_samples
##}
##aliases['idx_j2'] = {
##    'expr': 'HM_idx_j2',
##    'samples': new_samples
##}
#
#aliases['ori_idx_j1'] = {
#    'expr': 'Alt$(CleanJet_jetIdx[HM_idx_j1], -9989.)'
#}
#aliases['ori_idx_j2'] = {
#    'expr': 'Alt$(CleanJet_jetIdx[HM_idx_j2], -9989.)'
#}
#
## v6 fix
##aliases['Jet_btagSF_shape'] = {
##    'expr': 'Jet_btagSF_deepcsv_shape',
##    'samples': new_samples
##}
##for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:
##    aliases['Jet_btagSF_shape_up_'+shift] = {
##        'expr': 'Jet_btagSF_deepcsv_shape_up_'+shift,
##        'samples': new_samples
##    }
##    aliases['Jet_btagSF_shape_down_'+shift] = {
##        'expr': 'Jet_btagSF_deepcsv_shape_down_'+shift,
##        'samples': new_samples
##    }
#
#bJetV_req = '(CleanJet_pt > 20 && abs(CleanJet_eta) < 2.5 && CleanJet_jetIdx != ori_idx_j1[0] && CleanJet_jetIdx != ori_idx_j2[0])'
#bJetR_req = '(CleanJet_pt > 30 && abs(CleanJet_eta) < 2.5 && CleanJet_jetIdx != ori_idx_j1[0] && CleanJet_jetIdx != ori_idx_j2[0])'
#
#aliases['nbJet'] = {
#    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx] > 0.1522 && CleanJet_pt > 30)',
#}
#
#aliases['bVeto'] = {
#    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx] > 0.1522 && '+bJetV_req+' ) == 0',
#}
#
#aliases['bReq'] = {
#    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx] > 0.1522 && '+bJetR_req+' ) >= 1',
#}
#aliases['bVetoSF'] = {
#    'expr': 'TMath::Exp(Sum$(TMath::Log('+bJetV_req+'*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(!'+bJetV_req+'))))',
#    'samples': mc
#}
#
#aliases['bReqSF'] = {
#    'expr': 'TMath::Exp(Sum$(TMath::Log('+bJetR_req+'*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(!'+bJetR_req+'))))',
#    'samples': mc
#}
#
#aliases['btagSF'] = {
#    'expr': '(bVetoSF[0]*bVeto[0] + bReqSF[0]*bReq[0])',
#    'samples': mc
#}
#
#for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:
#    for targ in ['bVeto', 'bReq']:
#        aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
#        aliases['%sSF%sup' % (targ, shift)]['expr'] = aliases['%sSF%sup' % (targ, shift)]['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_up_%s' % shift)
#
#        aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
#        aliases['%sSF%sdown' % (targ, shift)]['expr'] = aliases['%sSF%sdown' % (targ, shift)]['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_down_%s' % shift)
#
#    aliases['btagSF%sup' % shift] = {
#        'expr': '(bVetoSF{shift}up[0]*bVeto[0] + bReqSF{shift}up[0]*bReq[0])'.format(shift = shift),
#        'samples': mc
#    }
#
#    aliases['btagSF%sdown' % shift] = {
#        'expr': '(bVetoSF{shift}down[0]*bVeto[0] + bReqSF{shift}down[0]*bReq[0])'.format(shift = shift),
#        'samples': mc
#    }


# FIXME top stuff

##### DY Z pT reweighting

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'CountGenJet',
    'samples': mc
}

## EWKnloW
#aliases['EWKnloW'] = {
#    'linesToAdd': [
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
#        '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v6/2HDMa/EWKnloW.cc+' % os.getenv('CMSSW_BASE')
#    ],
#    'class': 'EWKnloW',
#    'samples': mc
#    #'samples': "Wjets"
#}


aliases['LHEPartWlepPt'] = {
    'linesToAdd': ['.L %s/LHEPartWlepPt.cc+' % configurations],
    'class': 'LHEPartWlepPt',
    'samples': wjets,
}
data = np.genfromtxt(os.getenv('CMSSW_BASE')+'/src/LatinoAnalysis/Gardener/python/data/ewk/kewk_w.dat', skip_header=2, skip_footer=7)

weight_string = "("
uncert_string = "("
for row in data:
    low  = row[0]
    high = row[1]
    weight = (1+row[2])
    ucert = row[3]

    weight_string+="({}<LHEPartWlepPt[0] && LHEPartWlepPt[0]<={})\
                    *{}+".format(low, high, weight)
    uncert_string+="({}<LHEPartWlepPt[0] && LHEPartWlepPt[0]<={})\
                    *{}+".format(low, high, weight)
# remove trailing + sign and close parentheses
weight_string=weight_string[:-1]+")"
uncert_string=uncert_string[:-1]+")"

aliases['EWK_W_correction'] = {
    'expr': weight_string,
    'samples': wjets,
}
aliases['EWK_W_correction_uncert'] = {
    'expr': uncert_string,
    'samples': wjets,
}
# PU jet Id SF


aliases['PUJetIdSF'] = {
    'expr' : 'TMath::Exp(Sum$( \
        (Jet_jetId>=2 \
        && ( (Jet_electronIdx1 != Lepton_electronIdx[0]) || Jet_electronIdx1 < 0 )  \
        && ( (Jet_muonIdx1 != Lepton_muonIdx[0] ) || Jet_muonIdx1 < 0 ) \
        )*TMath::Log(Jet_PUIDSF_loose)\
    ))',
  'samples': mc
}
aliases['SFweight'] = {
    #'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l', 'EMTFbug_veto',  'PrefireWeight', 'LepWPSF[0]', 'btagSF[0]', 'PUJetIdSF[0]']),
    'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l_fixed', 'EMTFbug_veto',  'PrefireWeight', 'LepWPSF[0]', 'PUJetIdSF[0]']),
    'samples': mc
}
#puidSFSource = '%s/src/LatinoAnalysis/NanoGardener/python/data/JetPUID_effcyandSF.root' % os.getenv('CMSSW_BASE')
#puidSFSource = '%s/src/PlotsConfigurations/Configurations/patches/PUID_81XTraining_EffSFandUncties.root' % os.getenv('CMSSW_BASE')
#
##aliases['PUJetIdSF'] = {
##    'linesToAdd': [
##        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
##        #'.L %s/src/PlotsConfigurations/Configurations/patches/pujetidsf_event.cc+' % os.getenv('CMSSW_BASE')
##        '.L %s/src/PlotsConfigurations/Configurations/patches/pujetidsf_event_new.cc+' % os.getenv('CMSSW_BASE')
##    ],
##    'class': 'PUJetIdEventSF',
##    'args': (puidSFSource, '2017', 'loose'),
##    'samples': mc
##}
#
#aliases['PUJetIdSF'] = {
#  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2 && ( (Jet_electronIdx1 != Lepton_electronIdx[0]) || Jet_electronIdx1 < 0 )  \
#                                          && ( (Jet_muonIdx1 != Lepton_muonIdx[0] ) || Jet_muonIdx1 < 0 ) \
#                            )*TMath::Log(Jet_PUIDSF_loose)))',
#  'samples': mc
#}


### Fake-Weight stuff

#### BDT OTF
#MVA_folder = '%s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/MVA/darkHiggs/' % os.getenv('CMSSW_BASE')
## Clean BDT's
#bdt_dict = {
#    'BDT_Ada13' : MVA_folder + 'TKcut/UATmva_darkHiggsHighMZpVWjAndTT_2017_BDT_500Trees_AdaBoost_GiniIndex_20Cuts_CostComplexity_12PruneStrength_13Var.weights.xml',
#}
#
#tkcut_13var = MVA_folder + 'TKcut/Clean13Var.txt'
#tkcut_10var = MVA_folder + 'TKcut/Clean10Var.txt'
#tkcut_15var = MVA_folder + 'btag_study/btag/Clean15Var.txt'
#
#first = True
#for bdt in bdt_dict:
#    cur_var_file = tkcut_13var
#    do_keras = False
#    if '10Var' in bdt_dict[bdt] or '10var' in bdt_dict[bdt]: cur_var_file = tkcut_10var
#    if '15Var' in bdt_dict[bdt] or '15var' in bdt_dict[bdt]: cur_var_file = tkcut_15var
#    if 'DNN' in bdt_dict[bdt]: 
#        do_keras = True
#    aliases[bdt] = {
#        #'class': 'TMVAfillerOTF',
#        'class': 'TMVAfillerOTFnew',
#        'args': (cur_var_file, bdt_dict[bdt], do_keras),
#    }
#    if first: 
#        aliases[bdt]['linesToAdd'] = [
#            'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
#            #'.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v7/darkHiggs/TMVAfiller_OTF.cc+' % os.getenv('CMSSW_BASE')
#            '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/scripts/TMVAfiller_OTF_new.cc+' % os.getenv('CMSSW_BASE')
#        ]
#        first = False


# Gen W stuff
lastcopy = (1 << 13)
aliases['GenW_pt'] = {
    'expr': '(Sum$((GenPart_pt)*(abs(GenPart_pdgId) == 24 && (GenPart_statusFlags & '+str(lastcopy)+'))) - 1*(Sum$(abs(GenPart_pdgId) == 24 && (GenPart_statusFlags & '+str(lastcopy)+') == 0)))',
    'samples': mc
}
aliases['GenW_mass'] = {
    'expr': '(Sum$((GenPart_mass)*(abs(GenPart_pdgId) == 24 && (GenPart_statusFlags & '+str(lastcopy)+'))) - 1*(Sum$(abs(GenPart_pdgId) == 24 && (GenPart_statusFlags & '+str(lastcopy)+') == 0)))',
    'samples': mc
}
aliases['nGenW'] = {
    'expr': '(Sum$(abs(GenPart_pdgId) == 24 && (GenPart_statusFlags & '+str(lastcopy)+')))',
    'samples': mc
}
aliases['GenW_mt'] = {
    'expr': 'TMath::Sqrt(GenW_mass*GenW_mass + GenW_pt*GenW_pt)*(nGenW[0] == 1) - 1*(nGenW[0] == 0)',
    'samples': mc
}
aliases['W_Lep_Gen'] ={
    'expr' : 'TMath::Sqrt( (LeptonGen_pt[0]*TMath::Cos(LeptonGen_phi[0]) + NeutrinoGen_pt[0]*TMath::Cos(NeutrinoGen_phi[0]))*(LeptonGen_pt[0]*TMath::Cos(LeptonGen_phi[0]) + NeutrinoGen_pt[0]*TMath::Cos(NeutrinoGen_phi[0])) + (LeptonGen_pt[0]*TMath::Sin(LeptonGen_phi[0]) + NeutrinoGen_pt[0]*TMath::Sin(NeutrinoGen_phi[0]))*(LeptonGen_pt[0]*TMath::Sin(LeptonGen_phi[0]) + NeutrinoGen_pt[0]*TMath::Sin(NeutrinoGen_phi[0])))',
}




aliases['genW_pt'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/scripts/getGenWpt.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'getGenWpt',
    'samples': mc
}




#aliases['kfact'] = {
#    'linesToAdd': [
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
#        '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/scripts/k_factor.cc+' % os.getenv('CMSSW_BASE')
#    ],
#    'class': 'kFactor',
#    'args': ('PlotsConfigurations/Configurations/monoHWW/SemiLep/Wjets_kfactors/HT_to_NLO_QCD_k_factors.root', 'k_factors_2017'),
#    'samples': mc
#    #'samples': "Wjets"
#}
