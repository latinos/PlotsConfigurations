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

# single ele trigger eff fix
aliases['ele_trig_eff'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/triggerEff_1lep.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'TrigEff_1lep',
    'args': ('/afs/cern.ch/user/a/arun/public/fixedTextfiles/2018/mvaid/Ele32_pt_eta_efficiency_withSys_Run2018.txt'),
    'samples': mc
}

aliases['TriggerEffWeight_1l_fixed'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff[0] +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l',
    'samples': mc
}

#aliases['TriggerEffWeight_1l_fixed_u'] = {
#    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff[1] +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l_u',
#    'samples': mc
#}
#
#aliases['TriggerEffWeight_1l_fixed_d'] = {
#    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff[2] +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l_d',
#    'samples': mc
#}

# data/MC scale factors
aliases['SFweight1l'] = {
    #'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l', 'Lepton_RecoSF[0]', 'EMTFbug_veto']),
    'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l_fixed[0]', 'Lepton_RecoSF[0]', 'EMTFbug_veto']),
    'samples': mc
}
aliases['SFweight'] = {
    #'expr': ' * '.join(['SFweight1l[0]', 'LepSF1l__ele_wp__mu_wp[0]', 'PrefireWeight']),
    'expr': ' * '.join(['SFweight1l[0]', 'LepSF1l__ele_wp__mu_wp[0]']),
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



aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
    'samples': [samp for samp in mc if 'VgS' in samp]
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': [samp for samp in mc if 'VgS' in samp]
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

aliases['nbJet'] = {
    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx] > 0.1522 && CleanJet_pt > 30)',
}

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
# PostProcessing did not create (anti)topGenPt for ST samples with _ext1
lastcopy = (1 << 13)

aliases['isTTbar'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && (GenPart_statusFlags & %d)) == 2' % lastcopy,
    'samples': [samp for samp in mc if 'top' in samp]
}

aliases['isSingleTop'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && (GenPart_statusFlags & %d)) == 1' % lastcopy,
    'samples': [samp for samp in mc if 'top' in samp]
}

aliases['topGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == 6 && (GenPart_statusFlags & %d)) * GenPart_pt)' % lastcopy,
    'samples': [samp for samp in mc if 'top' in samp]
}

aliases['antitopGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == -6 && (GenPart_statusFlags & %d)) * GenPart_pt)' % lastcopy,
    'samples': [samp for samp in mc if 'top' in samp]
}
#
#TF_a = '-2.02274e-01'
#TF_b = '1.09734e-04'
#TF_c = '-1.30088e-07'
#TF_d = '5.83494e+01'
#TF_e = '1.96252e+02'

aliases['Top_pTrw'] = {
    ## New Top PAG
    #'expr': 'isTTbar * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) + isSingleTop',
    # New Top PAG
    # In production TopGenVars was not run on TTZjets due to comma mistake 
    #'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) + (topGenPt * antitopGenPt <= 0.)',
    'expr': 'isTTbar * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPtOTF) - 0.000134*topGenPtOTF + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPtOTF) - 0.000134*antitopGenPtOTF + 0.973))) + isSingleTop',
    'samples': [samp for samp in mc if 'top' in samp]
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
    'samples': [samp for samp in mc if 'DY' in samp]
}

handle = open('%s/src/PlotsConfigurations/Configurations/patches/DYrew30.py' % os.getenv('CMSSW_BASE'),'r')
exec(handle)
handle.close()

aliases['DY_NLO_pTllrw'] = {
    'expr': '('+DYrew['2018']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': [samp for samp in mc if 'DY' in samp]
}
aliases['DY_LO_pTllrw'] = {
    'expr': '('+DYrew['2018']['LO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': [samp for samp in mc if 'DY' in samp]
}

# EWKnloW
aliases['EWKnloW'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v6/2HDMa/EWKnloW.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'EWKnloW',
    'samples': [samp for samp in mc if 'Wjets' in samp]
}


# PU jet Id SF

#puidSFSource = '%s/src/LatinoAnalysis/NanoGardener/python/data/JetPUID_effcyandSF.root' % os.getenv('CMSSW_BASE')
puidSFSource = '%s/src/PlotsConfigurations/Configurations/patches/PUID_81XTraining_EffSFandUncties.root' % os.getenv('CMSSW_BASE')

aliases['PUJetIdSF'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        #'.L %s/src/PlotsConfigurations/Configurations/patches/pujetidsf_event.cc+' % os.getenv('CMSSW_BASE')
        '.L %s/src/PlotsConfigurations/Configurations/patches/pujetidsf_event_new.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'PUJetIdEventSF',
    'args': (puidSFSource, '2018', 'loose'),
    'samples': mc
}


#### Fake-Weight stuff
##FR_dir = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2018_v7/2HDMa/FReleTrig/"
#FR_dir = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2018_v7/2HDMa/FR_NLOWjet/"
#PR_dir = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2018_v7/PR/PR/"
#el_pr_file = PR_dir+"plot_ElCh_l1_etaVpt_ptel_2D_pr.root"
#mu_pr_file = PR_dir+"plot_MuCh_l1_etaVpt_ptmu_2D_pr.root"
#for lep in ['El', 'Mu']:
#    for dEt in [-10, 0, 10]:
#        if lep == 'El':
#            el_et = El_jetEt + dEt
#            mu_et = Mu_jetEt
#        elif lep == 'Mu':
#            el_et = El_jetEt
#            mu_et = Mu_jetEt + dEt
#
#        el_fr_file = FR_dir+"plot_ElCh_JetEt"+str(el_et)+"_l1_etaVpt_ptel_fw_ewk_2D.root"
#        mu_fr_file = FR_dir+"plot_MuCh_JetEt"+str(mu_et)+"_l1_etaVpt_ptmu_fw_ewk_2D.root"
#    
#        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)] = {
#            'linesToAdd' : [
#                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#                #'.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2018_v7/Fake/fakeweight_p1_OTF.cc+' % os.getenv('CMSSW_BASE')
#                '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2018_v7/Fake/fakeweight_OTF.cc+' % os.getenv('CMSSW_BASE')
#            ],
#            #'class': 'fakeWeight_p1_OTF',
#            'class': 'fakeWeightOTF',
#            #'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(mu_fr_file), False, False), 
#            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), el_pr_file, copy.deepcopy(mu_fr_file), mu_pr_file, False, False), 
#            'samples': ["FAKE"]
#        }
#        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)+'_statUp'] = {
#            #'class': 'fakeWeight_p1_OTF',
#            'class': 'fakeWeightOTF',
#            #'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(mu_fr_file), True, False), 
#            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), el_pr_file, copy.deepcopy(mu_fr_file), mu_pr_file, True, False), 
#            'samples': ["FAKE"]
#        }
#        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)+'_statDown'] = {
#            #'class': 'fakeWeight_p1_OTF',
#            'class': 'fakeWeightOTF',
#            #'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(mu_fr_file), False, True), 
#            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), el_pr_file, copy.deepcopy(mu_fr_file), mu_pr_file, False, True), 
#            'samples': ["FAKE"]
#        }
#
## Et Up/Down var
#for var in ['Up', 'Down']:
#    for lep in ['El', 'Mu']:
#        el_et = El_jetEt
#        mu_et = Mu_jetEt
#        if var == 'Down': dEt = -10
#        elif var == 'Up': dEt = 10
#        if lep == 'El': 
#            el_et = El_jetEt + dEt
#            is_lep = '(TMath::Abs(Lepton_pdgId[0]) == 11)'
#            no_lep = '(TMath::Abs(Lepton_pdgId[0]) == 13)'
#        elif lep == 'Mu': 
#            mu_et = mu_et + dEt
#            is_lep = '(TMath::Abs(Lepton_pdgId[0]) == 13)'
#            no_lep = '(TMath::Abs(Lepton_pdgId[0]) == 11)'
#
#        aliases['FW_mu'+str(Mu_jetEt)+'_el'+str(El_jetEt)+'_'+lep+var] = {
#            'expr': '('+is_lep+'*(FW_mu'+str(mu_et)+'_el'+str(el_et)+'[0]/FW_mu'+str(Mu_jetEt)+'_el'+str(El_jetEt)+'[0]) + '+no_lep+')',
#            'samples': ["FAKE"]
#        }
#        aliases['FW_mu'+str(Mu_jetEt)+'_el'+str(El_jetEt)+'_stat'+lep+var] = {
#            'expr': '('+is_lep+'*(FW_mu'+str(Mu_jetEt)+'_el'+str(El_jetEt)+'_stat'+var+'[0]/FW_mu'+str(Mu_jetEt)+'_el'+str(El_jetEt)+'[0]) + '+no_lep+')',
#            'samples': ["FAKE"]
#        }

### BDT OTF
#MVA_folder = '%s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/MVA/darkHiggs/' % os.getenv('CMSSW_BASE')
## Clean BDT's
#bdt_dict = {
#   # mtw study
#   #'BDT_nom' : MVA_folder + '/mtwStudy/lowCut/UATmva_darkHiggsHighMZpVWjAndTT_2017_BDT_500Trees_Grad_FalseBagged_0.6BagFrac_1BagShrink_GiniIndex_20Cuts_CostComplexity_12PruneStrength_13Var.weights.xml',
#   #'BDT_mtw' : MVA_folder + '/mtwStudy/lowCut/UATmva_darkHiggsHighMZpVWjAndTT_2017_BDT_500Trees_Grad_FalseBagged_0.6BagFrac_1BagShrink_GiniIndex_20Cuts_CostComplexity_12PruneStrength_14Var.weights.xml',
#   #'BDT_hig' : MVA_folder + '/mtwStudy/highCut/UATmva_darkHiggsHighMZpVWjAndTT_2017_BDT_100Trees_Grad_FalseBagged_0.6BagFrac_1BagShrink_GiniIndex_20Cuts_CostComplexity_12PruneStrength_13Var.weights.xml',
##   'DNN_nom' : MVA_folder + '/mtwStudy/lowCut/darkHiggsHighMZpVWjAndTT_2017_DNN_BN32ReluBN16Relu16Relu16ReluL2reg_400epochs_200batch_10tries_13vars.weights.xml',
##   'DNN_mtw' : MVA_folder + '/mtwStudy/lowCut/darkHiggsHighMZpVWjAndTT_2017_DNN_BN32ReluBN16Relu16Relu16ReluL2reg14var_400epochs_200batch_10tries_14vars.weights.xml',
##   'DNN_hig' : MVA_folder + '/mtwStudy/highCut/darkHiggsHighMZpVWjAndTTHighMtW_2017_DNN_BN32ReluBN16Relu16Relu16ReluL2reg_400epochs_200batch_10tries_13vars.weights.xml',
#    # TKcut
#    'BDT_Ada13' : MVA_folder + 'TKcut/UATmva_darkHiggsHighMZpVWjAndTT_2017_BDT_500Trees_AdaBoost_GiniIndex_20Cuts_CostComplexity_12PruneStrength_13Var.weights.xml',
#    #'BDT_Ada10' : MVA_folder + 'TKcut/UATmva_darkHiggsHighMZpVWjAndTT_2017_BDT_1200Trees_AdaBoost_GiniIndex_20Cuts_CostComplexity_12PruneStrength_10Var.weights.xml',
#    #'BDT_Grad13' : MVA_folder + 'TKcut/UATmva_darkHiggsHighMZpVWjAndTT_2017_BDT_500Trees_Grad_FalseBagged_0.6BagFrac_1BagShrink_GiniIndex_20Cuts_CostComplexity_12PruneStrength_13Var.weights.xml',
#    #'BDT_Grad10' : MVA_folder + 'TKcut/UATmva_darkHiggsHighMZpVWjAndTT_2017_BDT_700Trees_Grad_FalseBagged_0.6BagFrac_1BagShrink_GiniIndex_20Cuts_CostComplexity_12PruneStrength_10Var.weights.xml',
#
#}
#clean_var = MVA_folder + 'CleanVar.txt'
#clean_var_tk = MVA_folder + 'CleanVar_Tk.txt'
#clean_var_pup = MVA_folder + 'CleanVar_Pup.txt'
#clean_7var_pup = MVA_folder + 'CleanVar_Pup_7var.txt'
#
#puppi_var = MVA_folder + '/mtwStudy/CleanVar_Pup.txt'
#puppi_mtw1_var = MVA_folder + '/mtwStudy/CleanVar_Pup_mtw.txt'
#
#tkcut_13var = MVA_folder + 'TKcut/Clean13Var.txt'
#tkcut_10var = MVA_folder + 'TKcut/Clean10Var.txt'
#
#first = True
#for bdt in bdt_dict:
#    cur_var_file = tkcut_13var
#    do_keras = False
#    if '10Var' in bdt_dict[bdt] or '10var' in bdt_dict[bdt]: cur_var_file = tkcut_10var
#    if 'DNN' in bdt_dict[bdt]: 
#        do_keras = True
#    aliases[bdt] = {
#        'class': 'TMVAfillerOTF',
#        'args': (cur_var_file, bdt_dict[bdt], do_keras),
#    }
#    if first: 
#        aliases[bdt]['linesToAdd'] = [
#            'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
#            '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/Full2017_v7/darkHiggs/TMVAfiller_OTF.cc+' % os.getenv('CMSSW_BASE')
#        ]
#        first = False
