# nuisances
# name of samples here must match keys in samples.py 
from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, Sample):
    return getSampleFiles(inputDir, Sample, False, 'nanoLatino_')


def makeSignalDirectory(var=''):
    base_path_sig = '/eos/cms/store/group/phys_higgs/cmshww/fernanpe/HWWNano/Summer20UL16_106x_nAODv9_noHIPM_Full2016v9/AddLHE_MEs__AddMC_baseW__AddHWW_Offshell_Wgts__MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9'##
    #if("RDF__JES" in var):
    #    base_path_sig = '/eos/cms/store/group/phys_higgs/cmshww/fernanpe/HWWNano/Summer20UL18_106x_nAODv9_Full2016v9/MCl1loose2016v9__MCCorr2016v9NoJERInHorn__l2tightOR2016v9'
    if var:
        return base_path_sig + "__" + var
    else:
        return base_path_sig


try:
    mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
except NameError:
    mc = []
    cuts = {}
    nuisances = {}
    def makeMCDirectory(x=''):
        return ''

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()



################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

# https://twiki.cern.ch/twiki/bin/view/CMS/LumiRecommendationsRun2#LumiComb
# Uncorrelated 2016               1.0
# Uncorrelated       2017              2.0
# Uncorrelated             2016             1.5
# Correlated   2016, 2017, 2016   0.6, 0.9, 2.0
# Correlated         2017, 2016        0.6, 0.2

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2016',
    'type': 'lnN',
    'samples': dict((skey, '1.010') for skey in mc if skey not in ['top','WW']) ##TC
}

nuisances['lumi_Correlated'] = {
    'name': 'lumi_13TeV_correlated',
    'type': 'lnN',
    'samples': dict((skey, '1.006') for skey in mc if skey not in ['top','WW']) ##TC
}#

# ### FAKES
# nuisances['fake_syst'] = {
#     'name'  : 'CMS_fake_syst',
#     'type'  : 'lnN',
#     'samples'  : {
#         'Fake' : '1.30',
#     },
# }

fake_syst_bb_pt_ll_50 = "1.3 * (Lepton_pt[0] <= 50 && Lepton_pt[1] <= 50 && abs(Lepton_eta[0]) <= 0.9 && abs(Lepton_eta[1]) <= 0.9) + 1.0 * !(Lepton_pt[0] <= 50 && Lepton_pt[1] <= 50 && abs(Lepton_eta[0]) <= 0.9 && abs(Lepton_eta[1]) <= 0.9)"
fake_syst_bb_pt_gl_50 = "1.3 * (Lepton_pt[0] > 50 && Lepton_pt[1] <= 50 && abs(Lepton_eta[0]) <= 0.9 && abs(Lepton_eta[1]) <= 0.9) + 1.0 * !(Lepton_pt[0] > 50 && Lepton_pt[1] <= 50 && abs(Lepton_eta[0]) <= 0.9 && abs(Lepton_eta[1]) <= 0.9)"
fake_syst_bb_pt_gg_50 = "1.3 * (Lepton_pt[0] > 50 && Lepton_pt[1] > 50 && abs(Lepton_eta[0]) <= 0.9 && abs(Lepton_eta[1]) <= 0.9) + 1.0 * !(Lepton_pt[0] > 50 && Lepton_pt[1] > 50 && abs(Lepton_eta[0]) <= 0.9 && abs(Lepton_eta[1]) <= 0.9)"
fake_syst_ee_pt_ll_50 = "1.3 * (Lepton_pt[0] <= 50 && Lepton_pt[1] <= 50 && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[1]) > 0.9) + 1.0 * !(Lepton_pt[0] <= 50 && Lepton_pt[1] <= 50 && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[1]) > 0.9)"
fake_syst_ee_pt_gl_50 = "1.3 * (Lepton_pt[0] > 50 && Lepton_pt[1] <= 50 && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[1]) > 0.9) + 1.0 * !(Lepton_pt[0] > 50 && Lepton_pt[1] <= 50 && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[1]) > 0.9)"
fake_syst_ee_pt_gg_50 = "1.3 * (Lepton_pt[0] > 50 && Lepton_pt[1] > 50 && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[1]) > 0.9) + 1.0 * !(Lepton_pt[0] > 50 && Lepton_pt[1] > 50 && abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[1]) > 0.9)"
fake_syst_be_pt_ll_50 = "1.3 * (Lepton_pt[0] <= 50 && Lepton_pt[1] <= 50 && ((abs(Lepton_eta[0]) <= 0.9 && abs(Lepton_eta[1]) > 0.9) || (abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[1]) <= 0.9))) + 1.0 * !(Lepton_pt[0] <= 50 && Lepton_pt[1] <= 50 && ((abs(Lepton_eta[0]) <= 0.9 && abs(Lepton_eta[1]) > 0.9) || (abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[1]) <= 0.9)))"
fake_syst_be_pt_gl_50 = "1.3 * (Lepton_pt[0] > 50 && Lepton_pt[1] <= 50 && ((abs(Lepton_eta[0]) <= 0.9 && abs(Lepton_eta[1]) > 0.9) || (abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[1]) <= 0.9))) + 1.0 * !(Lepton_pt[0] > 50 && Lepton_pt[1] <= 50 && ((abs(Lepton_eta[0]) <= 0.9 && abs(Lepton_eta[1]) > 0.9) || (abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[1]) <= 0.9)))"
fake_syst_be_pt_gg_50 = "1.3 * (Lepton_pt[0] > 50 && Lepton_pt[1] > 50 && ((abs(Lepton_eta[0]) <= 0.9 && abs(Lepton_eta[1]) > 0.9) || (abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[1]) <= 0.9))) + 1.0 * !(Lepton_pt[0] > 50 && Lepton_pt[1] > 50 && ((abs(Lepton_eta[0]) <= 0.9 && abs(Lepton_eta[1]) > 0.9) || (abs(Lepton_eta[0]) > 0.9 && abs(Lepton_eta[1]) <= 0.9)))"

for cut in cuts:    
    nuisances['fake_syst_bb_pt_ll_50_'+cut] = {
        'name': 'fake_syst_bb_pt_ll_50_'+cut,
        'type': 'shape',
        'kind'  : 'weight',
        'samples': {
            'Fake': [fake_syst_bb_pt_ll_50, "1"],
        },
        'cuts' : [cut],
        'symmetrize' : True,
    }
    
    nuisances['fake_syst_bb_pt_gl_50_'+cut] = {
        'name': 'fake_syst_bb_pt_gl_50_'+cut,
        'type': 'shape',
        'kind'  : 'weight',
        'samples': {
            'Fake': [fake_syst_bb_pt_gl_50, "1"],
        },
        'cuts' : [cut],
        'symmetrize' : True,
    }

    nuisances['fake_syst_bb_pt_gg_50_'+cut] = {
        'name': 'fake_syst_bb_pt_gg_50_'+cut,
        'type': 'shape',
        'kind'  : 'weight',
        'samples': {
            'Fake': [fake_syst_bb_pt_gg_50, "1"],
        },
        'cuts' : [cut],
        'symmetrize' : True,
    }

    ################################
    
    nuisances['fake_syst_ee_pt_ll_50_'+cut] = {
        'name': 'fake_syst_ee_pt_ll_50_'+cut,
        'type': 'shape',
        'kind'  : 'weight',
        'samples': {
            'Fake': [fake_syst_ee_pt_ll_50, "1"],
        },
        'cuts' : [cut],        
        'symmetrize' : True,
    }

    nuisances['fake_syst_ee_pt_gl_50_'+cut] = {
        'name': 'fake_syst_ee_pt_gl_50_'+cut,
        'type': 'shape',
        'kind'  : 'weight',
        'samples': {
            'Fake': [fake_syst_ee_pt_gl_50, "1"],
        },
        'cuts' : [cut],        
        'symmetrize' : True,
    }
    
    nuisances['fake_syst_ee_pt_gg_50_'+cut] = {
        'name': 'fake_syst_ee_pt_gg_50_'+cut,
        'type': 'shape',
        'kind'  : 'weight',
        'samples': {
            'Fake': [fake_syst_ee_pt_gg_50, "1"],
        },
        'cuts' : [cut],        
        'symmetrize' : True,
    }

    ################################

    nuisances['fake_syst_be_pt_ll_50_'+cut] = {
        'name': 'fake_syst_be_pt_ll_50_'+cut,
        'type': 'shape',
        'kind'  : 'weight',
        'samples': {
            'Fake': [fake_syst_be_pt_ll_50, "1"],
        },
        'cuts' : [cut],        
        'symmetrize' : True,
    }
    
    nuisances['fake_syst_be_pt_gl_50_'+cut] = {
        'name': 'fake_syst_be_pt_gl_50_'+cut,
        'type': 'shape',
        'kind'  : 'weight',
        'samples': {
            'Fake': [fake_syst_be_pt_gl_50, "1"],
        },
        'cuts' : [cut],        
        'symmetrize' : True,
    }
    
    nuisances['fake_syst_be_pt_gg_50_'+cut] = {
        'name': 'fake_syst_be_pt_gg_50_'+cut,
        'type': 'shape',
        'kind'  : 'weight',
        'samples': {
            'Fake': [fake_syst_be_pt_gg_50, "1"],
        },
        'cuts' : [cut],        
        'symmetrize' : True,
    }



##################################
    
nuisances['fake_ele_emu']  = {
    'name'  : 'CMS_fake_e_2016_emu',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake': ['fakeWEleUp * (abs(Lepton_pdgId[0]) == 11) + 1.0 * !(abs(Lepton_pdgId[0]) == 11) ', 'fakeWEleDown * (abs(Lepton_pdgId[0]) == 11) + 1.0 * !(abs(Lepton_pdgId[0]) == 11)'],
    },
}

nuisances['fake_ele_mue']  = {
    'name'  : 'CMS_fake_e_2016_mue',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake': ['fakeWEleUp * (abs(Lepton_pdgId[0]) == 13) + 1.0 * !(abs(Lepton_pdgId[0]) == 13) ', 'fakeWEleDown * (abs(Lepton_pdgId[0]) == 13) + 1.0 * !(abs(Lepton_pdgId[0]) == 13)'],
    },
}

nuisances['fake_ele_stat_emu']  = {
    'name'  : 'CMS_fake_stat_e_2016_emu',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake': ['fakeWStatEleUp * (abs(Lepton_pdgId[0]) == 11) + 1.0 * !(abs(Lepton_pdgId[0]) == 11)', 'fakeWStatEleDown * (abs(Lepton_pdgId[0]) == 11) + 1.0 * !(abs(Lepton_pdgId[0]) == 11)']
    },
}

nuisances['fake_ele_stat_mue']  = {
    'name'  : 'CMS_fake_stat_e_2016_mue',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake': ['fakeWStatEleUp * (abs(Lepton_pdgId[0]) == 13) + 1.0 * !(abs(Lepton_pdgId[0]) == 13)', 'fakeWStatEleDown * (abs(Lepton_pdgId[0]) == 13) + 1.0 * !(abs(Lepton_pdgId[0]) == 13)']
    },
}

nuisances['fake_mu_emu']  = {
    'name'  : 'CMS_fake_m_2016_emu',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake': ['fakeWMuUp * (abs(Lepton_pdgId[0]) == 11) + 1.0 * !(abs(Lepton_pdgId[0]) == 11)', 'fakeWMuDown * (abs(Lepton_pdgId[0]) == 11) + 1.0 * !(abs(Lepton_pdgId[0]) == 11)'],
    },
}

nuisances['fake_mu_mue']  = {
    'name'  : 'CMS_fake_m_2016_mue',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake': ['fakeWMuUp * (abs(Lepton_pdgId[0]) == 13) + 1.0 * !(abs(Lepton_pdgId[0]) == 13)', 'fakeWMuDown * (abs(Lepton_pdgId[0]) == 13) + 1.0 * !(abs(Lepton_pdgId[0]) == 13)'],
    },
}

nuisances['fake_mu_stat_emu']  = {
    'name'  : 'CMS_fake_stat_m_2016_emu',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake': ['fakeWStatMuUp * (abs(Lepton_pdgId[0]) == 11) + 1.0 * !(abs(Lepton_pdgId[0]) == 11)', 'fakeWStatMuDown * (abs(Lepton_pdgId[0]) == 11) + 1.0 * !(abs(Lepton_pdgId[0]) == 11)'],
    },
}

nuisances['fake_mu_stat_mue']  = {
    'name'  : 'CMS_fake_stat_m_2016_mue',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake': ['fakeWStatMuUp * (abs(Lepton_pdgId[0]) == 13) + 1.0 * !(abs(Lepton_pdgId[0]) == 13)', 'fakeWStatMuDown * (abs(Lepton_pdgId[0]) == 13) + 1.0 * !(abs(Lepton_pdgId[0]) == 13)'],
    },
}


##### B-tagger

#for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
for shift in ['lf', 'hf', 'lfstats1', 'lfstats2', 'hfstats1', 'hfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    name = 'CMS_btag_%s' % shift
    if 'stats' in shift:
        name += '_2016'

    nuisances['btag_shape_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
    }

##### Trigger Efficiency

trig_syst = ['((TriggerSFWeight_2l_u)/(TriggerSFWeight_2l))*(TriggerSFWeight_2l>0.02) + (TriggerSFWeight_2l<=0.02)', '(TriggerSFWeight_2l_d)/(TriggerSFWeight_2l)']

nuisances['trigg']  = {
    'name': 'CMS_eff_hwwtrigger_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc)
}

##### Electron Efficiency and energy scale

id_syst_ele = ['SFweightEleUp', 'SFweightEleDown']

nuisances['eff_e'] = {
    'name'    : 'CMS_eff_e_2016',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : dict((skey, id_syst_ele) for skey in mc)
}

nuisances['eff_ttHMVA_e'] = {
    'name'    : 'CMS_eff_ttHMVA_e_2016',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : dict((skey, ['ttHMVASFUL_eleUp', 'ttHMVAULSF_eleDown']) for skey in mc)
}

##TC 2024 - added all the way to comment section

nuisances['electronpt'] = {
    'name'       : 'CMS_scale_e_2016',
    'kind'       : 'suffix',
    'type'       : 'shape',
    'mapUp'      : 'ElepTup',
    'mapDown'    : 'ElepTdo',
    'samples'    : dict((skey, ['1', '1']) for skey in mc if not skey in ["qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),
    'folderUp'   : makeMCDirectory('ElepTup_suffix'),
    'folderDown' : makeMCDirectory('ElepTdo_suffix'),
#    'AsLnN'      : '1'
}

nuisances['electronpt_sig'] = {
    'name'       : 'CMS_scale_e_2016',
    'kind'       : 'suffix',
    'type'       : 'shape',
    'mapUp'      : 'ElepTup',
    'mapDown'    : 'ElepTdo',
    'samples'    : dict((skey, ['1', '1']) for skey in mc if skey in ["qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),
    'folderUp'   : makeSignalDirectory('ElepTup_suffix'),
    'folderDown' : makeSignalDirectory('ElepTdo_suffix'),
#    'AsLnN'      : '1'
}

##### Muon Efficiency and energy scale

id_syst_mu = ['SFweightMuUp', 'SFweightMuDown']

nuisances['eff_m'] = {
    'name'   : 'CMS_eff_m_2016',
    'kind'   : 'weight',
    'type'   : 'shape',
    'samples': dict((skey, id_syst_mu) for skey in mc),
}

nuisances['eff_ttHMVA_m'] = {
    'name'   : 'CMS_eff_ttHMVA_m_2016',
    'kind'   : 'weight',
    'type'   : 'shape',
    'samples': dict((skey, ['ttHMVAULSF_muUp', 'ttHMVAULSF_muDown']) for skey in mc)
}


nuisances['muonpt'] = {
    'name'       : 'CMS_scale_m_2016',
    'kind'       : 'suffix',
    'type'       : 'shape',
    'mapUp'      : 'MupTup',
    'mapDown'    : 'MupTdo',
    'samples'    : dict((skey, ['1', '1']) for skey in mc if not skey in ["qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),
    'folderUp'   : makeMCDirectory('MupTup_suffix'),
    'folderDown' : makeMCDirectory('MupTdo_suffix'),
#    'AsLnN'      : '1'
}
nuisances['muonpt_sig'] = {
    'name'       : 'CMS_scale_m_2016',
    'kind'       : 'suffix',
    'type'       : 'shape',
    'mapUp'      : 'MupTup',
    'mapDown'    : 'MupTdo',
    'samples'    : dict((skey, ['1', '1']) for skey in mc if skey in ["qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),
    'folderUp'   : makeSignalDirectory('MupTup_suffix'),
    'folderDown' : makeSignalDirectory('MupTdo_suffix'),
#    'AsLnN'      : '1'
}


##### Jet energy scale

jes_systs = ['JESAbsolute','JESAbsolute_2016','JESBBEC1','JESBBEC1_2016','JESEC2','JESEC2_2016','JESFlavorQCD','JESHF','JESHF_2016','JESRelativeBal' ,'JESRelativeSample_2016']

for js in jes_systs:
  nuisances[js] = {
      'name'      : 'CMS_scale_' + js,
      'kind'      : 'suffix',
      'type'      : 'shape',
      'mapUp'     : js + 'up',
      'mapDown'   : js + 'do',
      'samples'   : dict((skey, ['1', '1']) for skey in mc if not skey in ["qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),
      'folderUp'  : makeMCDirectory('RDF__JESup_suffix'),
      'folderDown': makeMCDirectory('RDF__JESdo_suffix'),
 #     'AsLnN'     : '1'
  }
for js in jes_systs:
  nuisances[js + "_sig"] = {
      'name'      : 'CMS_scale_' + js,
      'kind'      : 'suffix',
      'type'      : 'shape',
      'mapUp'     : js + 'up',
      'mapDown'   : js + 'do',
      'samples'   : dict((skey, ['1', '1']) for skey in mc if skey in ["qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),
      'folderUp'  : makeSignalDirectory('RDF__JESup_suffix'),
      'folderDown': makeSignalDirectory('RDF__JESdo_suffix'),
   #   'AsLnN'     : '1'
  }

##### Jet energy resolution
nuisances['JER'] = {
    'name'      : 'CMS_res_j_2016',
    'kind'      : 'suffix',
    'type'      : 'shape',
    'mapUp'     : 'JERup',
    'mapDown'   : 'JERdo',
    'samples'   : dict((skey, ['1', '1']) for skey in mc if not skey in ["qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),
    'folderUp'  : makeMCDirectory('JERup_suffix'),
    'folderDown': makeMCDirectory('JERdo_suffix'),
#    'AsLnN'     : '1'
}

nuisances['JER_sig'] = {
    'name'      : 'CMS_res_j_2016',
    'kind'      : 'suffix',
    'type'      : 'shape',
    'mapUp'     : 'JERup',
    'mapDown'   : 'JERdo',
    'samples'   : dict((skey, ['1', '1']) for skey in mc if skey in ["qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),
    'folderUp'  : makeSignalDirectory('JERup_suffix'),
    'folderDown': makeSignalDirectory('JERdo_suffix'),
 #   'AsLnN'     : '1'
}
##TC2024



##commented down to met 2024
# nuisances['electronpt'] = {
#     'name'       : 'CMS_scale_e_2016',
#     'kind'       : 'suffix',
#     'type'       : 'shape',
#     'mapUp'      : 'ElepTup',
#     'mapDown'    : 'ElepTdo',
#     'samples'    : dict((skey, ['1', '1']) for skey in mc if not skey in ["ggHToWWOffshell", "ggHToWWOnshell"]),
#     'folderUp'   : makeMCDirectory('ElepTup_suffix'),
#     'folderDown' : makeMCDirectory('ElepTdo_suffix'),
# #    'AsLnN'      : '1'
# }


# ##### Muon Efficiency and energy scale

# id_syst_mu = ['SFweightMuUp', 'SFweightMuDown']

# nuisances['eff_m'] = {
#     'name'   : 'CMS_eff_m_2016',
#     'kind'   : 'weight',
#     'type'   : 'shape',
#     'samples': dict((skey, id_syst_mu) for skey in mc),
# }

# nuisances['eff_ttHMVA_m'] = {
#     'name'   : 'CMS_eff_ttHMVA_m_2016',
#     'kind'   : 'weight',
#     'type'   : 'shape',
#     'samples': dict((skey, ['ttHMVAULSF_muUp', 'ttHMVAULSF_muDown']) for skey in mc)
# }


# nuisances['muonpt'] = {
#     'name'       : 'CMS_scale_m_2016',
#     'kind'       : 'suffix',
#     'type'       : 'shape',
#     'mapUp'      : 'MupTup',
#     'mapDown'    : 'MupTdo',
#     'samples'    : dict((skey, ['1', '1']) for skey in mc if not skey in ["ggHToWWOffshell", "ggHToWWOnshell"]),
#     'folderUp'   : makeMCDirectory('MupTup_suffix'),
#     'folderDown' : makeMCDirectory('MupTdo_suffix'),
# #    'AsLnN'      : '1'
# }


# ##### Jet energy scale

# jes_systs = ['JESAbsolute','JESAbsolute_2016','JESBBEC1','JESBBEC1_2016','JESEC2','JESEC2_2016','JESFlavorQCD','JESHF','JESHF_2016','JESRelativeBal' ,'JESRelativeSample_2016']

# for js in jes_systs:
#   nuisances[js] = {
#       'name'      : 'CMS_scale_' + js,
#       'kind'      : 'suffix',
#       'type'      : 'shape',
#       'mapUp'     : js + 'up',
#       'mapDown'   : js + 'do',
#       'samples'   : dict((skey, ['1', '1']) for skey in mc if not skey in ["ggHToWWOffshell", "ggHToWWOnshell"]),
#       'folderUp'  : makeMCDirectory('RDF__JESup_suffix'),
#       'folderDown': makeMCDirectory('RDF__JESdo_suffix'),
#  #     'AsLnN'     : '1'
#   }

# ##### Jet energy resolution
# nuisances['JER'] = {
#     'name'      : 'CMS_res_j_2016',
#     'kind'      : 'suffix',
#     'type'      : 'shape',
#     'mapUp'     : 'JERup',
#     'mapDown'   : 'JERdo',
#     'samples'   : dict((skey, ['1', '1']) for skey in mc if not skey in ["ggHToWWOffshell", "ggHToWWOnshell"]),
#     'folderUp'  : makeMCDirectory('JERup_suffix'),
#     'folderDown': makeMCDirectory('JERdo_suffix'),
# #    'AsLnN'     : '1'
# }

##### MET unclustered energy

nuisances['met'] = {
    'name'      : 'CMS_scale_met_2016',
    'kind'      : 'suffix',
    'type'      : 'shape',
    'mapUp'     : 'METup',
    'mapDown'   : 'METdo',
    'samples'   : dict((skey, ['1', '1']) for skey in mc if not skey in ["qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]), ##TC
    'folderUp'  : makeMCDirectory('METup_suffix'),
    'folderDown': makeMCDirectory('METdo_suffix'),
  #  'AsLnN'     : '1'
}

##TC2024 will run if key is in the list
nuisances['met_sig'] = {
    'name'      : 'CMS_scale_met_2016', ##same name as above - same nuisance - just get right directory
    'kind'      : 'suffix',
    'type'      : 'shape',
    'mapUp'     : 'METup',
    'mapDown'   : 'METdo',
    'samples'   : dict((skey, ['1', '1']) for skey in mc if skey in ["qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),
    'folderUp'  : makeSignalDirectory('METup_suffix'),
    'folderDown': makeSignalDirectory('METdo_suffix'),
  #  'AsLnN'     : '1'
}
##TC2024 - bc VBF samples not in same dir

# # nuisances['PS_whss']  = {
#                 # 'name'  : 'PS_whss',
#                 # 'skipCMS' : 1,
#                 # 'type'  : 'lnN',
#                 # 'samples': dict((skey, '1.037') for skey in mc),
# # }

##### Pileup

# puWeight_UL2016 ##### ASK PEDRO ---  PUT 1.0 for each of the samples qqH_sonly, qqH_bonly, qqH_sand
nuisances['PU'] = {
    'name'    : 'CMS_pileup_2016',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : {
        # 'DY'      : ['0.993259983266*(puWeightUp/puWeight)', '0.997656381501*(puWeightDown/puWeight)'],
        # 'top'     : ['1.00331969187*(puWeightUp/puWeight)' , '0.999199609528*(puWeightDown/puWeight)'],
        # 'WW_minnlo'      : ['1.0033022059*(puWeightUp/puWeight)'  , '0.997085330608*(puWeightDown/puWeight)'],
        # 'ggH_hww' : ['1.0036768006*(puWeightUp/puWeight)'  , '0.995996570285*(puWeightDown/puWeight)'],
        # 'qqH_hww' : ['1.00374694528*(puWeightUp/puWeight)' , '0.995878596852*(puWeightDown/puWeight)'],
        'DY'      : ['0.998687*(puWeightUp/puWeight)', '1.001976*(puWeightDown/puWeight)'],
        'top'     : ['1.002595*(puWeightUp/puWeight)', '0.997470*(puWeightDown/puWeight)'],
        'WW'      : ['1.004449*(puWeightUp/puWeight)', '0.995660*(puWeightDown/puWeight)'], ##TC
        'ggWW'    : ['1.004870*(puWeightUp/puWeight)', '0.995315*(puWeightDown/puWeight)'],
        #'WWewk'   : ['1.002122*(puWeightUp/puWeight)', '0.998087*(puWeightDown/puWeight)'],
        'Vg'      : ['1.023232*(puWeightUp/puWeight)', '0.981481*(puWeightDown/puWeight)'],
        'WZ'      : ['0.999330*(puWeightUp/puWeight)', '1.000992*(puWeightDown/puWeight)'],
        'ZZ'      : ['0.999469*(puWeightUp/puWeight)', '1.000751*(puWeightDown/puWeight)'],
        'VVV'     : ['1.003485*(puWeightUp/puWeight)', '0.997561*(puWeightDown/puWeight)'],
        'qqH_sonly_on'        : ['1.0*(puWeightUp/puWeight)', '1.0*(puWeightDown/puWeight)'], ##TC
        'qqH_sonly_off'        : ['1.0*(puWeightUp/puWeight)', '1.0*(puWeightDown/puWeight)'],
        'qqH_bonly_on'        : ['1.0*(puWeightUp/puWeight)', '1.0*(puWeightDown/puWeight)'],
        'qqH_bonly_off'        : ['1.0*(puWeightUp/puWeight)', '1.0*(puWeightDown/puWeight)'],
        'qqH_sand_on'        : ['1.0*(puWeightUp/puWeight)', '1.0*(puWeightDown/puWeight)'],
        'qqH_sand_off'        : ['1.0*(puWeightUp/puWeight)', '1.0*(puWeightDown/puWeight)'], ##TC
        'ggH_bonly_on'    : ['1.004870*(puWeightUp/puWeight)', '0.995315*(puWeightDown/puWeight)'], ##TC
        'ggH_bonly_off'    : ['1.004870*(puWeightUp/puWeight)', '0.995315*(puWeightDown/puWeight)'],
        'ggH_sonly_on'    : ['1.00*(puWeightUp/puWeight)', '1.00*(puWeightDown/puWeight)'],
        'ggH_sonly_off'    : ['1.00*(puWeightUp/puWeight)', '1.00*(puWeightDown/puWeight)'],
        'ggH_sand_on'    : ['1.00*(puWeightUp/puWeight)', '1.00*(puWeightDown/puWeight)'],
        'ggH_sand_off'    : ['1.00*(puWeightUp/puWeight)', '1.00*(puWeightDown/puWeight)'], ##TC
        #'ggH_hww' : ['1.003677*(puWeightUp/puWeight)', '0.995996*(puWeightDown/puWeight)'],
        #'qqH_hww' : ['1.003747*(puWeightUp/puWeight)', '0.995878*(puWeightDown/puWeight)'],
    },
  #  'AsLnN'   : '1',
}

### PU ID SF uncertainty

puid_syst = ['Jet_PUIDSF_loose_up/Jet_PUIDSF_loose', 'Jet_PUIDSF_loose_down/Jet_PUIDSF_loose']

nuisances['jetPUID'] = {
    'name'    : 'CMS_PUJET_id_2016',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : dict((skey, puid_syst) for skey in mc)
}

### PS and UE

nuisances['PS_ISR']  = {
    'name'    : 'PS_ISR',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : dict((skey, ['PSWeight[2]', 'PSWeight[0]']) for skey in mc),
#    'AsLnN'   : '1',
}

nuisances['PS_FSR']  = {
    'name'    : 'PS_FSR',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : dict((skey, ['PSWeight[3]', 'PSWeight[1]']) for skey in mc),
#    'AsLnN'   : '1',
}

nuisances['UEPS']  = {
    'name'    : 'UEPS',
    'skipCMS' : 1,
    'type'    : 'lnN',
    'samples' : dict((skey, '1.015') for skey in mc),
}

# nuisances['PS_ISR'] = {
#     'name' : 'PS_ISR',
#     'kind' : 'weight',
#     'type' : 'shape',
#     'samples' : {
#         'ggZH_hww' : ['1.066107*(nCleanGenJet==0) + 1.047857*(nCleanGenJet==1) + 1.030005*(nCleanGenJet==2) + 1.005028*(nCleanGenJet>=3)', '0.921874*(nCleanGenJet==0) + 0.941939*(nCleanGenJet==1) + 0.962282*(nCleanGenJet==2) + 0.991580*(nCleanGenJet>=3)'],
#         'ZH_hww'   : ['1.000684*(nCleanGenJet==0) + 1.000924*(nCleanGenJet==1) + 1.001683*(nCleanGenJet==2) + 1.002104*(nCleanGenJet>=3)', '0.999150*(nCleanGenJet==0) + 0.998821*(nCleanGenJet==1) + 0.997859*(nCleanGenJet==2) + 0.997316*(nCleanGenJet>=3)'],
#         'WZ'       : ['1.002552*(nCleanGenJet==0) + 1.010286*(nCleanGenJet==1) + 1.014420*(nCleanGenJet==2) + 1.006226*(nCleanGenJet>=3)', '0.996802*(nCleanGenJet==0) + 0.987227*(nCleanGenJet==1) + 0.982005*(nCleanGenJet==2) + 0.992030*(nCleanGenJet>=3)'],
#         'ZZ'       : ['1.003210*(nCleanGenJet==0) + 1.005480*(nCleanGenJet==1) + 1.004674*(nCleanGenJet==2) + 0.987845*(nCleanGenJet>=3)', '0.995997*(nCleanGenJet==0) + 0.993056*(nCleanGenJet==1) + 0.993659*(nCleanGenJet==2) + 1.014695*(nCleanGenJet>=3)'],
#     },
# }

# nuisances['PS_FSR'] = {
#     'name' : 'PS_FSR',
#     'kind' : 'weight',
#     'type' : 'shape',
#     'samples' : {
#         'ggZH_hww' : ['0.987316*(nCleanGenJet==0) + 0.986764*(nCleanGenJet==1) + 0.996498*(nCleanGenJet==2) + 1.004161*(nCleanGenJet>=3)', '1.019871*(nCleanGenJet==0) + 1.013853*(nCleanGenJet==1) + 1.005229*(nCleanGenJet==2) + 0.998573*(nCleanGenJet>=3)'],
#         'ZH_hww'   : ['0.992867*(nCleanGenJet==0) + 0.992845*(nCleanGenJet==1) + 0.999470*(nCleanGenJet==2) + 1.007245*(nCleanGenJet>=3)', '1.012465*(nCleanGenJet==0) + 1.012743*(nCleanGenJet==1) + 1.003215*(nCleanGenJet==2) + 0.991286*(nCleanGenJet>=3)'],
#         'WZ'       : ['0.992987*(nCleanGenJet==0) + 0.993725*(nCleanGenJet==1) + 1.000617*(nCleanGenJet==2) + 1.010869*(nCleanGenJet>=3)', '1.011267*(nCleanGenJet==0) + 1.010097*(nCleanGenJet==1) + 0.999445*(nCleanGenJet==2) + 0.983609*(nCleanGenJet>=3)'],
#         'ZZ'       : ['0.997245*(nCleanGenJet==0) + 0.998689*(nCleanGenJet==1) + 1.004475*(nCleanGenJet==2) + 1.011440*(nCleanGenJet>=3)', '1.004482*(nCleanGenJet==0) + 1.002081*(nCleanGenJet==1) + 0.992617*(nCleanGenJet==2) + 0.981314*(nCleanGenJet>=3)'],
#     },
# }

###### pdf uncertainties #### 

###### pdf uncertainties
pdf_variations = ["LHEPdfWeight[%d]" %i for i in range(1,101)] # Float_t LHE pdf variation weights (w_var / w_nominal) for LHA IDs  320901 - 321000
nuisances['pdf_WW']  = {
    'name'  : 'CMS_hww_pdf_WW',
    'kind'  : 'weight_rms',
    'type'  : 'shape',
    'AsLnN': '0',
    'samples'  : {
        'WW'   : pdf_variations,
    },
}

nuisances['pdf_top']  = {
    'name'  : 'CMS_hww_pdf_top',
    'kind'  : 'weight_rms',
    'type'  : 'shape',
    'AsLnN': '0',
    'samples'  : {
        'top'   : pdf_variations,
    },
}

nuisances['pdf_qqH_sonly']  = {
    'name'  : 'CMS_hww_pdf_qqH_sonly',
    'kind'  : 'weight_rms',
    'type'  : 'shape',
    'AsLnN': '0',
    'samples'  : {
        'qqH_sonly_on'   : pdf_variations,
        'qqH_sonly_off'   : pdf_variations,
    },
}

nuisances['pdf_qqH_bonly']  = {
    'name'  : 'CMS_hww_pdf_qqH_bonly',
    'kind'  : 'weight_rms',
    'type'  : 'shape',
    'AsLnN': '0',
    'samples'  : {
        'qqH_bonly_on'   : pdf_variations,
        'qqH_bonly_off'   : pdf_variations,
    },
}

nuisances['pdf_qqH_sand']  = {
    'name'  : 'CMS_hww_pdf_qqH_sand',
    'kind'  : 'weight_rms',
    'type'  : 'shape',
    'AsLnN': '0',
    'samples'  : {
        'qqH_sand_on'   : pdf_variations,
        'qqH_sand_off'   : pdf_variations,
    },
}


### QCD
variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {'DY': variations},
}
nuisances['QCDscale_VV'] = {
    'name': 'QCDscale_VV',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'Vg': variations,
        'VZ': variations,
        'VgS': variations
    },
}
nuisances['QCDscale_top']  = {
    'name'  : 'QCDscale_top',
    'kind'  : 'weight_envelope',
    'type'  : 'shape',
    'samples'  : {
        'top' : variations,
    }
}

nuisances['QCDscale_WW']  = {
    'name'  : 'QCDscale_WW',
    'kind'  : 'weight',
    'type'  : 'shape',
    'AsLnN': '0',
    'samples'  : {
        'WW' : ['Alt$(LHEScaleWeight[0],1)','Alt$(LHEScaleWeight[8],1)'], ##TC
    }
}

nuisances['QCDscale_qqVV']  = {
               'name'  : 'QCDscale_qqVV', 
                'kind'  : 'weight_envelope',
                'type'  : 'shape',
                'samples'  : {
                   'qqH_bonly_on' : variations,
                   'qqH_bonly_off' : variations,
                   }
}

nuisances['QCDscale_qqH']  = {
               'name'  : 'QCDscale_qqH',
                'kind'  : 'weight_envelope',
                'type'  : 'shape',
                'samples'  : {
                   'qqH_sonly_on' : variations,
                   'qqH_sonly_off' : variations,
                   }
}

nuisances['QCDscale_ggH']  = {
               'name'  : 'QCDscale_ggH',
                #'kind'  : 'weight_envelope',
                'type'  : 'lnN',
                'samples'  : {
                   'ggH_sonly_on' : '1.10', ##TC
                   'ggH_sonly_off' : '1.10', ##TC
                   }
}

##TC 2024
nuisances['QCDscale_ggH_SBI'] = {
    'name': 'QCDscale_ggH_SBI',
    'type': 'lnN',
    'samples': {
        'ggH_sand_on': '1.10',
        'ggH_sand_off': '1.10',
    },
}
##TC2024

nuisances['QCDscale_ggVV'] = {
    'name': 'QCDscale_ggVV',
    'type': 'lnN',
    'samples': {
        'ggH_bonly_on': '1.10', ##TC
        'ggH_bonly_off': '1.10', ##TC
    },
}

values_VBF_scale = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm') ##
values_VBF_pdf = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm')

values_ggH_scale = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm')
values_ggH_pdf = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','pdf','sm') ##

nuisances['QCDscale_qqH_ACCEPT'] = {
    'name'    : 'QCDscale_qqH_accept',
    'samples' : {
        'qqH_sonly_on' : values_VBF_scale,
        'qqH_sonly_off' : values_VBF_scale,
    },
    'type' : 'lnN'
}

nuisances['pdf_VBF_ACCEPT'] = {
    'name'    : 'pdf_Higgs_qqbar_accept',
    'type'    : 'lnN',
    'samples' : {
        'qqH_sonly_on' : values_VBF_pdf,
        'qqH_sonly_off' : values_VBF_pdf,
    },
}

nuisances['QCDscale_ggH_ACCEPT'] = {
    'name'    : 'QCDscale_ggH_accept',
    'samples' : {
        'ggH_sonly_on' : values_ggH_scale,
        'ggH_sonly_off' : values_ggH_scale, ##TC
    },
    'type' : 'lnN'
}

nuisances['pdf_ggH_ACCEPT'] = {
    'name'    : 'pdf_ggH_accept',
    'type'    : 'lnN',
    'samples' : {
        'ggH_sonly_on' : values_ggH_pdf,
        'ggH_sonly_off' : values_ggH_pdf, ##TC
    },
}



nuisances['Topnorm_0j']  = {
               'name'  : 'Topnorm_0j_2016_noHIPM',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'topCR_0j',
                   'WWCR_0j',
                   'SR_ggH_OFF_0j',
                   'CR_ggH_ON_0j',
                   ]
              }

nuisances['WWnorm_0j']  = {
               'name'  : 'WWnorm_0j_2016_noHIPM',
               'samples'  : {
                   'WW' : '1.00', ##
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'topCR_0j',
                   'WWCR_0j',
                   'SR_ggH_OFF_0j',
                   'CR_ggH_ON_0j',
                   ]
              }

nuisances['Topnorm_1j']  = {
               'name'  : 'Topnorm_1j_2016_noHIPM',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'topCR_1j',
                   'WWCR_1j',
                   'SR_ggH_OFF_1j',
                   'CR_ggH_ON_1j',
                   ]
              }

nuisances['WWnorm_1j']  = {
               'name'  : 'WWnorm_1j_2016_noHIPM',
               'samples'  : {
                   'WW' : '1.00', ##
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'topCR_1j',
                   'WWCR_1j',
                   'SR_ggH_OFF_1j',
                   'CR_ggH_ON_1j',
                   ]
              }

# Added during the unblinding review: https://cms-pub-talk.web.cern.ch/t/unblinding-process/30717/61

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_top_0j'] = {
    'name': 'CMS_hww_CRSR_accept_top_0j',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    'cuts': [
           'topCR_0j'
    ]   
}

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_top_1j'] = {
    'name': 'CMS_hww_CRSR_accept_top_1j',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    'cuts': [
           'topCR_1j'
    ]   
}

nuisances['ttbar_st_RelativeComposition'] = {
    'name': 'CMS_hww_ttbar_st_relcomp',
    'type': 'lnN',
    'samples': {'top': '1.08'},
}


qqWW_shape_weight = "1.4 * (dnnScore_VBF_OFF > .926) + 1.0 * (dnnScore_VBF_OFF <= .926) * (dnnScore_VBF_OFF > .852) + 1.1 * (dnnScore_VBF_OFF <= .852) * (dnnScore_VBF_OFF > .800) + 1.1 * (dnnScore_VBF_OFF <= .800) * (dnnScore_VBF_OFF > .650) + 1.15 * (dnnScore_VBF_OFF <= .65) * (dnnScore_VBF_OFF > .50)"

nuisances['MELA_Hyp_qqWW'] = {
    'name': 'MELA_Hyp_qqWW',
    'type': 'shape',
    'kind'  : 'weight',
    'samples': {
        'qqH_bonly_off': [qqWW_shape_weight, "1"],
    },
    'symmetrize' : True,
}

nuisances['TopPtRew'] = {
    'name': 'CMS_topPtRew',   # Theory uncertainty
    'kind': 'weight',
    'type': 'shape',
    'samples': {'top': ["1.", "1./Top_pTrw"]},
    'symmetrize': True
}

nuisances['WWptllRew'] = {
    'name': 'CMS_WWptllRew',   # Theory uncertainty
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'WW': ["1.", "1./ptll_0j"],
        'ggH_bonly_on': ["1.", "1./ptll_0j"],
        'qqH_bonly_on': ["1.", "1./ptll_0j"],
    },
    'symmetrize': True
}



## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat'] = {

    'type'          : 'auto',
    'maxPoiss'      : '10',
    'includeSignal' : '0', ##
    'samples' : {}
}
    #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
    #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)

for n in nuisances.values():
    n['skipCMS'] = 1

# print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))
