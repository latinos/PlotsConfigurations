# nuisances
# name of samples here must match keys in samples.py 
from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, Sample):
    return getSampleFiles(inputDir, Sample, False, 'nanoLatino_')


def makeSignalDirectory(var=''):
    base_path_sig = '/eos/cms/store/group/phys_higgs/cmshww/fernanpe/HWWNano/Summer20UL17_106x_nAODv9_Full2017v9/AddLHE_MEs__AddMC_baseW__AddHWW_Offshell_Wgts__MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9' ##
    #if("RDF__JES" in var):
    #    base_path_sig = '/eos/cms/store/group/phys_higgs/cmshww/fernanpe/HWWNano/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9'
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
# Uncorrelated             2018             1.5
# Correlated   2016, 2017, 2018   0.6, 0.9, 2.0
# Correlated         2017, 2018        0.6, 0.2

#### Luminosity

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.020') for skey in mc if skey not in ['top','WW'])#, 'WW_minnlo'])#for skey in mc)
}

nuisances['lumi_Correlated'] = {
    'name': 'lumi_13TeV_correlated',
    'type': 'lnN',
    'samples': dict((skey, '1.009') for skey in mc if skey not in ['top','WW'])# 'WW_minnlo'])#for skey in mc)
}

nuisances['lumi_1718'] = {
    'name': 'lumi_13TeV_1718',
    'type': 'lnN',
    'samples': dict((skey, '1.006') for skey in mc if skey not in ['top','WW'])# 'WW_minnlo'])#for skey in mc)
}
#


# nuisances['lumi_Correlated_2017_2018'] = {
#     'name': 'lumi_13TeV_1718',
#     'type': 'lnN',
#     'samples': dict((skey, '1.002') for skey in mc if skey not in ['top','WW'])
# }

### FAKES
nuisances['fake_syst'] = {
    'name'  : 'CMS_fake_syst',
    'type'  : 'lnN',
    'samples'  : {
        'Fake' : '1.30',
    },
}

nuisances['fake_ele']  = {
    'name'  : 'CMS_fake_e_2017',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake': ['fakeWEleUp', 'fakeWEleDown'],
    },
}

nuisances['fake_ele_stat']  = {
    'name'  : 'CMS_fake_stat_e_2017',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown']
    },
}

nuisances['fake_mu']  = {
    'name'  : 'CMS_fake_m_2017',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake': ['fakeWMuUp', 'fakeWMuDown'],
    },
}

nuisances['fake_mu_stat']  = {
    'name'  : 'CMS_fake_stat_m_2017',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake': ['fakeWStatMuUp', 'fakeWStatMuDown'],
    },
}


##### B-tagger

#for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
for shift in ['lf', 'hf', 'lfstats1', 'lfstats2', 'hfstats1', 'hfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    name = 'CMS_btag_%s' % shift
    if 'stats' in shift:
        name += '_2017'

    nuisances['btag_shape_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
    }

##### Trigger Efficiency

trig_syst = ['((TriggerSFWeight_2l_u)/(TriggerSFWeight_2l))*(TriggerSFWeight_2l>0.02) + (TriggerSFWeight_2l<=0.02)', '(TriggerSFWeight_2l_d)/(TriggerSFWeight_2l)']

nuisances['trigg']  = {
    'name': 'CMS_eff_hwwtrigger_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc)
}

##### Electron Efficiency and energy scale

id_syst_ele = ['SFweightEleUp', 'SFweightEleDown']

nuisances['eff_e'] = {
    'name'    : 'CMS_eff_e_2017',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : dict((skey, id_syst_ele) for skey in mc)
}

nuisances['eff_ttHMVA_e'] = {
    'name'    : 'CMS_eff_ttHMVA_e_2017',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : dict((skey, ['ttHMVASFUL_eleUp', 'ttHMVAULSF_eleDown']) for skey in mc)
}

##TC 2024 - just for 2017 protect the ggWW sample because it is void -- comment out makeMCDirectory functions for ggH_bonly == electronpT, muonpT, JER, JES, MET
nuisances['electronpt'] = {
    'name'       : 'CMS_scale_e_2017',
    'kind'       : 'suffix',
    'type'       : 'shape',
    'mapUp'      : 'ElepTup',
    'mapDown'    : 'ElepTdo',
    'samples'    : dict((skey, ['1', '1']) for skey in mc if not skey in ["ggH_bonly_on", "ggH_bonly_off", "qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]), ##
    'folderUp'   : makeMCDirectory('ElepTup_suffix'),
    'folderDown' : makeMCDirectory('ElepTdo_suffix'),
#    'AsLnN'      : '1'
}

nuisances['electronpt_sig'] = { ##sig applied to hypothesis
    'name'       : 'CMS_scale_e_2017',
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
    'name'   : 'CMS_eff_m_2017',
    'kind'   : 'weight',
    'type'   : 'shape',
    'samples': dict((skey, id_syst_mu) for skey in mc),
}

nuisances['eff_ttHMVA_m'] = {
    'name'   : 'CMS_eff_ttHMVA_m_2017',
    'kind'   : 'weight',
    'type'   : 'shape',
    'samples': dict((skey, ['ttHMVAULSF_muUp', 'ttHMVAULSF_muDown']) for skey in mc)
}

##comment ggH_bonly

nuisances['muonpt'] = {
    'name'       : 'CMS_scale_m_2017',
    'kind'       : 'suffix',
    'type'       : 'shape',
    'mapUp'      : 'MupTup',
    'mapDown'    : 'MupTdo',
    'samples'    : dict((skey, ['1', '1']) for skey in mc if not skey in ["ggH_bonly_on", "ggH_bonly_off", "qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),##
    'folderUp'   : makeMCDirectory('MupTup_suffix'),
    'folderDown' : makeMCDirectory('MupTdo_suffix'),
#    'AsLnN'      : '1'
}
nuisances['muonpt_sig'] = {
    'name'       : 'CMS_scale_m_2017',
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

##comment ggH_bonly

jes_systs = ['JESAbsolute','JESAbsolute_2017','JESBBEC1','JESBBEC1_2017','JESEC2','JESEC2_2017','JESFlavorQCD','JESHF','JESHF_2017','JESRelativeBal' ,'JESRelativeSample_2017']

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
    'name'      : 'CMS_res_j_2017',
    'kind'      : 'suffix',
    'type'      : 'shape',
    'mapUp'     : 'JERup',
    'mapDown'   : 'JERdo',
    'samples'   : dict((skey, ['1', '1']) for skey in mc if not skey in ["ggH_bonly_on", "ggH_bonly_off", "qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),##
    'folderUp'  : makeMCDirectory('JERup_suffix'),
    'folderDown': makeMCDirectory('JERdo_suffix'),
#    'AsLnN'     : '1'
}

nuisances['JER_sig'] = {
    'name'      : 'CMS_res_j_2017',
    'kind'      : 'suffix',
    'type'      : 'shape',
    'mapUp'     : 'JERup',
    'mapDown'   : 'JERdo',
    'samples'   : dict((skey, ['1', '1']) for skey in mc if skey in ["qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),
    'folderUp'  : makeSignalDirectory('JERup_suffix'),
    'folderDown': makeSignalDirectory('JERdo_suffix'),
 #   'AsLnN'     : '1'
}



##TC 2024


##### MET unclustered energy

##comment ggH_bonly

nuisances['met'] = {
    'name'      : 'CMS_scale_met_2017',
    'kind'      : 'suffix',
    'type'      : 'shape',
    'mapUp'     : 'METup',
    'mapDown'   : 'METdo',
    'samples'   : dict((skey, ['1', '1']) for skey in mc if not skey in ["qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),
    'folderUp'  : makeMCDirectory('METup_suffix'),
    'folderDown': makeMCDirectory('METdo_suffix'),
  #  'AsLnN'     : '1'
}

nuisances['met_sig'] = {
    'name'      : 'CMS_scale_met_2017', ##same name as above - same nuisance - just get right directory
    'kind'      : 'suffix',
    'type'      : 'shape',
    'mapUp'     : 'METup',
    'mapDown'   : 'METdo',
    'samples'   : dict((skey, ['1', '1']) for skey in mc if skey in ["qqH_sand_off", "qqH_bonly_off", "qqH_sonly_off", "qqH_sand_on", "qqH_sonly_on", "qqH_bonly_on"]),
    'folderUp'  : makeSignalDirectory('METup_suffix'),
    'folderDown': makeSignalDirectory('METdo_suffix'),
  #  'AsLnN'     : '1'
}


# # nuisances['PS_whss']  = {
#                 # 'name'  : 'PS_whss',
#                 # 'skipCMS' : 1,
#                 # 'type'  : 'lnN',
#                 # 'samples': dict((skey, '1.037') for skey in mc),
# # }

##### Pileup

# puWeight_UL2017 ##### ASK PEDRO ---  PUT 1.0 for each of the samples qqH_sonly, qqH_bonly, qqH_sand
nuisances['PU'] = {
    'name'    : 'CMS_pileup_2017',
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
        #'WW_minnlo'      : ['1.004449*(puWeightUp/puWeight)', '0.995660*(puWeightDown/puWeight)'],
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
    'name'    : 'CMS_PUJET_id_2017',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : dict((skey, puid_syst) for skey in mc)
}

### PS and UE

# nuisances['PS_ISR']  = {
#     'name'    : 'PS_ISR',
#     'kind'    : 'weight',
#     'type'    : 'shape',
#     'samples' : dict((skey, ['PSWeight[2]', 'PSWeight[0]']) for skey in mc),
# #    'AsLnN'   : '1',
# }

# nuisances['PS_FSR']  = {
#     'name'    : 'PS_FSR',
#     'kind'    : 'weight',
#     'type'    : 'shape',
#     'samples' : dict((skey, ['PSWeight[3]', 'PSWeight[1]']) for skey in mc),
# #    'AsLnN'   : '1',
# }

nuisances['UEPS']  = {
    'name'    : 'UEPS',
    'skipCMS' : 1,
    'type'    : 'lnN',
    'samples' : dict((skey, '1.015') for skey in mc),
}


###### pdf uncertainties #### 

###### pdf uncertainties

# weights in WW: based on MC replicas -> RMS ##add to 2016 and 2017

pdf_variations = ["LHEPdfWeight[%d]" %i for i in range(1,101)] # Float_t LHE pdf variation weights (w_var / w_nominal) for LHA IDs  320901 - 321000
nuisances['pdf_WW']  = {
    'name'  : 'CMS_hww_pdf_WW',
    'kind'  : 'weight_rms',
    'type'  : 'shape',
    'AsLnN': '0',
    'samples'  : {
        'WW'   : pdf_variations, ##TC
    },
}


# PDF eigenvariations for WW and top
for i in range(1,101):
  # LHEPdfWeight are PDF4LHC variations, while nominal is NNPDF.
  # LHEPdfWeight[i] reweights from NNPDF nominal to PDF4LHC member i
  # LHEPdfWeight[0] in particular reweights from NNPDF nominal to PDF4LHC nominal
  #pdf_variations = ["LHEPdfWeight[%d]" %i, "2. - LHEPdfWeight[%d]" %i ]
  pdf_variations = ["LHEPdfWeight[%d]/LHEPdfWeight[0]" %i, "1"] ##TC

  # nuisances['pdf_top_eigen'+str(i)] = {
  #   'name'  : 'CMS_hww_pdf_top_eigen'+str(i),
  #   'skipCMS' : 1,
  #   'kind'  : 'weight',
  #   'type'  : 'shape',
  #   'samples'  : {
  #     'top'   : pdf_variations,
  #   },
  # }
  # nuisances['pdf_ggH_eigen'+str(i)]  = {
  #   'name'  : 'CMS_hww_pdf_ggH_eigen'+str(i),
  #   'skipCMS' : 1,
  #   'kind'  : 'weight',
  #   'type'  : 'shape',
  #   'samples'  : {
  #     'ggH_sonly_on'   : pdf_variations, ##TC
  #     'ggH_sonly_off'   : pdf_variations, ##TC
  #   },
  #    'symmetrize' : True
  # } ##TC
  nuisances['pdf_VBF_sonly_eigen'+str(i)]  = {
    'name'  : 'CMS_hww_pdf_VBF_sonly_eigen'+str(i),
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
      'qqH_sonly_on'   : pdf_variations, 
      'qqH_sonly_off'   : pdf_variations,
    },
  }
  nuisances['pdf_VBF_bonly_eigen'+str(i)]  = {
    'name'  : 'CMS_hww_pdf_VBF_sonly_eigen'+str(i),
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
      'qqH_bonly_on'   : pdf_variations,  
      'qqH_bonly_off'   : pdf_variations,
    },
  }
  nuisances['pdf_VBF_sand_eigen'+str(i)]  = {
    'name'  : 'CMS_hww_pdf_VBF_sand_eigen'+str(i),
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
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
                #'kind'  : 'weight_envelope', ##TC
                'type'  : 'lnN', ##TC
                'samples'  : {
                   'ggH_sonly_on' : '1.15', ##TC
                   'ggH_sonly_off' : '1.15', ##TC
                   }
}

##TC 2024
nuisances['QCDscale_ggH_SBI'] = {
    'name': 'QCDscale_ggH_SBI',
    'type': 'lnN',
    'samples': {
        'ggH_sand_on': '1.15',
        'ggH_sand_off': '1.15',
    },
}
##TC2024

nuisances['QCDscale_ggVV'] = {
    'name': 'QCDscale_ggVV',
    'type': 'lnN',
    'samples': {
        'ggH_bonly_on': '1.15', ##TC
        'ggH_bonly_off': '1.15', ##TC
    },
}

values_VBF_scale = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm') ##TC
values_VBF_pdf = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm') ##TC

values_ggH_scale = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm') ##TC
values_ggH_pdf = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','pdf','sm') ##TC

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


"""
valuesggh  = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH', '125.09','pdf','sm')
valuesggzh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm')
valuesbbh  = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH', '125.09','pdf','sm')

nuisances['pdf_Higgs_gg'] = {
    'name' : 'pdf_Higgs_gg',
    'samples' : {
        'ggH_hww'  : valuesggh,
        'ggH_htt'  : valuesggh,
        'ggZH_hww' : valuesggzh,
        'bbH_hww'  : valuesbbh
    },
    'type' : 'lnN',
}

values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','pdf','sm')

nuisances['pdf_Higgs_ttH'] = {
    'name'    : 'pdf_Higgs_ttH',
    'samples' : {
        'ttH_hww' : values
    },
    'type' : 'lnN',
}

valuesqqh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm')
valueswh  = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH',  '125.09','pdf','sm')
valueszh  = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH',  '125.09','pdf','sm')

nuisances['pdf_Higgs_qqbar'] = {
    'name'    : 'pdf_Higgs_qqbar',
    'type'    : 'lnN',
    'samples' : {
        'qqH_hww'      : valuesqqh,
        'qqH_htt'      : valuesqqh,
        'WH_hww_plus'  : valueswh,
        'WH_hww_minus' : valueswh,
        'WH_htt_plus'  : valueswh,
        'WH_htt_minus' : valueswh,
        'ZH_hww'       : valueszh,
        'ZH_htt'       : valueszh
    },
}

nuisances['pdf_qqbar'] = {
    'name'    : 'pdf_qqbar',
    'type'    : 'lnN',
    'samples' : {
        'Wg'  : '1.04',
        'Zg'  : '1.04',
        'ZZ'  : '1.04', # PDF: 0.0064 / 0.1427 = 0.0448493
        'WZ'  : '1.04', # PDF: 0.0064 / 0.1427 = 0.0448493
        'WgS' : '1.04', # PDF: 0.0064 / 0.1427 = 0.0448493
        'ZgS' : '1.04', # PDF: 0.0064 / 0.1427 = 0.0448493
    },
}

nuisances['pdf_Higgs_gg_ACCEPT'] = {
    'name'    : 'pdf_Higgs_gg_ACCEPT',
    'samples' : {
        'ggH_hww'  : '1.006',
        'ggH_htt'  : '1.006',
        'ggZH_hww' : '1.006',
        'bbH_hww'  : '1.006'
    },
    'type'    : 'lnN',
}
nuisances['pdf_gg_ACCEPT'] = {
    'name'    : 'pdf_gg_ACCEPT',
    'samples' : {
        'ggWW' : '1.006',
    },
    'type'    : 'lnN',
}

nuisances['pdf_Higgs_qqbar_ACCEPT'] = {
    'name'    : 'pdf_Higgs_qqbar_ACCEPT',
    'type'    : 'lnN',
    'samples' : {
        'qqH_hww'      : '1.002',
        'qqH_htt'      : '1.002',
        'WH_hww_plus'  : '1.003',
        'WH_hww_minus' : '1.003',
        'WH_htt_plus'  : '1.003',
        'WH_htt_minus' : '1.003',
        'ZH_hww'       : '1.002',
        'ZH_htt'       : '1.002',
    },
}

nuisances['pdf_qqbar_ACCEPT'] = {
    'name'    : 'pdf_qqbar_ACCEPT',
    'type'    : 'lnN',
    'samples' : {
        'ZZ' : '1.001',
        'WZ' : '1.001',
    },
}
"""

# # NLL resummation variations. Removed normalization effect
# nuisances['WWresum']  = {
#   'name'  : 'CMS_hww_WWresum',
#   'skipCMS' : 1,
#   'kind'  : 'weight',
#   'type'  : 'shape',
#   'samples'  : {
#       'WW_minnlo'   : ['(nllW_Rup/nllW)/(9395.5/9280.9)', '(nllW_Rdown/nllW)/(8854.1/9280.9)'],
#    },
# }

# nuisances['WWqscale']  = {
#    'name'  : 'CMS_hww_WWqscale',
#    'skipCMS' : 1,
#    'kind'  : 'weight',
#    'type'  : 'shape',
#    'samples'  : {
#       'WW_minnlo'   : ['(nllW_Qup/nllW)/(9218.6/9280.9)', '(nllW_Qdown/nllW)/(9333.6/9280.9)'],
#     },
# }


# # WW EWK NLO correction uncertainty
# nuisances['EWKcorr_WW'] = {
#     'name': 'CMS_hww_EWKcorr_WW',
#     'skipCMS': 1,
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'WW_minnlo': ['1.', '1./ewknloW']
#     },
#     'symmetrize' : True,
# }


##### Renormalization & factorization scales
"""
## Shape nuisance due to QCD scale variations for DY
# LHE scale variation weights (w_var / w_nominal)

## This should work for samples with either 8 or 9 LHE scale weights (Length$(LHEScaleWeight) == 8 or 9)
variations = ['Alt$(LHEScaleWeight[0],1)', 'Alt$(LHEScaleWeight[1],1)', 'Alt$(LHEScaleWeight[3],1)', 'Alt$(LHEScaleWeight[nLHEScaleWeight-4],1)', 'Alt$(LHEScaleWeight[nLHEScaleWeight-2],1)', 'Alt$(LHEScaleWeight[nLHEScaleWeight-1],1)']

# nuisances['QCDscale_V'] = {
#     'name': 'QCDscale_V',
#     'skipCMS': 1,
#     'kind': 'weight_envelope',
#     'type': 'shape',
#     'samples': {
#         'DY': variations
#     },
#     'AsLnN': '1'
# }

nuisances['QCDscale_VV'] = {
    'name'    : 'QCDscale_VV',
    'kind'    : 'weight_envelope',
    'type'    : 'shape',
    'samples' : {
        'WW_minnlo'  : variations,
        'Zg'  : variations,
        'Wg'  : variations,
        'ZZ'  : variations,
        'WZ'  : variations,
        'WgS' : variations,
        'ZgS' : variations
    }
}

nuisances['QCDscale_ggVV'] = {
    'name'    : 'QCDscale_ggVV',
    'type'    : 'lnN',
    'samples' : {
        'ggWW' : '1.15',
    },
}

#### QCD scale uncertainties for Higgs signals other than ggH

values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm')

nuisances['QCDscale_qqH'] = {
    'name'    : 'QCDscale_qqH',
    'samples' : {
        'qqH_hww' : values,
        'qqH_htt' : values
    },
    'type' : 'lnN'
}

valueswh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm')
valueszh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm')

nuisances['QCDscale_VH'] = {
    'name'    : 'QCDscale_VH',
    'samples' : {
        'WH_hww_plus'  : valueswh,
        'WH_hww_minus' : valueswh,
        'WH_htt_plus'  : valueswh,
        'WH_htt_minus' : valueswh,
        'ZH_hww'       : valueszh,
        'ZH_htt'       : valueszh
    },
    'type' : 'lnN',
}

values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm')

nuisances['QCDscale_ggZH'] = {
    'name'    : 'QCDscale_ggZH',
    'samples' : {
        'ggZH_hww' : values
    },
    'type' : 'lnN',
}

values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm')

nuisances['QCDscale_ttH'] = {
    'name'    : 'QCDscale_ttH',
    'samples' : {
        'ttH_hww' : values
    },
    'type' : 'lnN',
}

nuisances['QCDscale_WWewk'] = {
    'name'    : 'QCDscale_WWewk',
    'samples' : {
        'WWewk' : '1.11',
    },
    'type' : 'lnN'
}

nuisances['QCDscale_qqbar_ACCEPT'] = {
    'name'    : 'QCDscale_qqbar_ACCEPT',
    'type'    : 'lnN',
    'samples' : {
        'qqH_hww'      : '1.003',
        'qqH_htt'      : '1.003',
        'WH_hww_plus'  : '1.010',
        'WH_hww_minus' : '1.010',
        'WH_htt_plus'  : '1.010',
        'WH_htt_plus'  : '1.010',
        'ZH_hww'       : '1.015',
        'ZH_htt'       : '1.015',
    }
}

# FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['QCDscale_gg_ACCEPT'] = {
    'name'    : 'QCDscale_gg_ACCEPT',
    'samples' : {
        'ggH_htt'  : '1.012',
        'ggH_hww'  : '1.012',
        'ggZH_hww' : '1.012',
        'ggWW'     : '1.012',
    },
    'type' : 'lnN',
}

# Zg normalization from control region

# nuisances['Zg3lnorm']  = {
#     'name'    : 'CMS_hww_Zg3lnorm',
#     'samples' : {
#         'Zg' : '1.00',
#     },
#     'type' : 'rateParam',
#     'cuts' : [
#         'wh3l_13TeV_ossf_plus',
#         'wh3l_13TeV_ossf_minus',
#         'wh3l_13TeV_sssf_plus',
#         'wh3l_13TeV_sssf_minus',
#         'wh3l_zg_13TeV',
#         'wh3l_wz_13TeV',
#     ]
# }

"""
# ## rate parameters ##update 2016 and 2017

nuisances['Topnorm_0j']  = {
               'name'  : 'Topnorm_0j',
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
               'name'  : 'WWnorm_0j',
               'samples'  : {
                   'WW' : '1.00', ##TC
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
               'name'  : 'Topnorm_1j',
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
               'name'  : 'WWnorm_1j',
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

##TC 2024 --add --comment out June27 due to qqWW electroweak Bkg not contributing for 01j
# nuisances['MELA_Hyp_qqWW'] = {
#     'name': 'MELA_Hyp_qqWW',
#     'type': 'lnN',
#     'samples': {
#         'qqH_bonly_off': '1.1',
#     },
# }

## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat'] = {

    'type'          : 'auto',
    'maxPoiss'      : '10',
    'includeSignal' : '0', ## <-- don't overcount; '1' = no longer want to include qqH_sonly or qqH_bonly
    'samples' : {}
}
    #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
    #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)

for n in nuisances.values():
    n['skipCMS'] = 1

# print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))
