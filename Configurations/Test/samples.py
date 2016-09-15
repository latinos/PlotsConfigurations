# samples


mcW = 'baseW*puW'


samples['DY']       = {'name' : ['latino_DYJetsToLL_M-50_0000__part0.root'],      'weight' : mcW}
samples['top']      = {'name' : ['latino_TTTo2L2Nu_ext1__part0.root'],            'weight' : mcW}
samples['WW']       = {'name' : ['latino_WWTo2L2Nu.root'],                        'weight' : mcW}
samples['VVV']      = {'name' : ['latino_WZZ.root'],                              'weight' : mcW}
samples['ggWW']     = {'name' : ['latino_GluGluWWTo2L2Nu_MCFM.root'],             'weight' : mcW}
samples['Vg']       = {'name' : ['latino_Wg_MADGRAPHMLM.root'],                   'weight' : mcW}
samples['VgS']      = {'name' : ['latino_WgStarLNuMuMu.root'],                    'weight' : mcW}
samples['VZ']       = {'name' : ['latino_WZTo2L2Q__part0.root'],                  'weight' : mcW}
samples['H_htt']    = {'name' : ['latino_GluGluHToTauTau_M125.root'],             'weight' : mcW}
samples['ggH_hww']  = {'name' : ['latino_GluGluHToWWTo2L2NuPowheg_M125.root'],    'weight' : mcW}
samples['qqH_hww']  = {'name' : ['latino_VBFHToWWTo2L2Nu_alternative_M125.root'], 'weight' : mcW}
samples['ggZH_hww'] = {'name' : ['latino_ggZH_HToWW_M125.root'],                  'weight' : mcW}
samples['WH_hww']   = {'name' : ['latino_HWplusJ_HToWW_M125.root'],               'weight' : mcW}
samples['ZH_hww']   = {'name' : ['latino_HZJ_HToWW_M125.root'],                   'weight' : mcW}


samples['Fake'] = {'name': ['../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb/latino_Run2016B_PromptReco_MuonEG.root'], 'weight' : 'trigger*fakeW2l0j', 'isData': ['all']}


samples['DATA'] = {'name': ['../../../../../../../../../../eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__l2tight/latino_Run2016B_PromptReco_MuonEG.root'], 'weight' : 'trigger', 'isData': ['all']}
