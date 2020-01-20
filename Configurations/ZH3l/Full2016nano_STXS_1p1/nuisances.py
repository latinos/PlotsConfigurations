# nuisances
# name of samples here must match keys in samples.py    

try:
    mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
except NameError:
    mc = []

#### Luminosity

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2016',
    'type': 'lnN',
    'samples': dict((skey, '1.022') for skey in mc if skey not in ['WZ', 'Zg'])
}

nuisances['lumi_XYFact'] = {
    'name': 'lumi_13TeV_XYFact',
    'type': 'lnN',
    'samples': dict((skey, '1.009') for skey in mc if skey not in ['WZ', 'Zg'])
}

nuisances['lumi_BBDefl'] = {
    'name': 'lumi_13TeV_BBDefl',
    'type': 'lnN',
    'samples': dict((skey, '1.004') for skey in mc if skey not in ['WZ', 'Zg'])
}

nuisances['lumi_DynBeta'] = {
    'name': 'lumi_13TeV_DynBeta',
    'type': 'lnN',
    'samples': dict((skey, '1.005') for skey in mc if skey not in ['WZ', 'Zg'])
}

nuisances['lumi_Ghosts'] = {
    'name': 'lumi_13TeV_Ghosts',
    'type': 'lnN',
    'samples': dict((skey, '1.004') for skey in mc if skey not in ['WZ', 'Zg'])
}

#### Theoretical Systematics

# Scale
from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()

nuisances['QCDscale_VH']  = {
  'name'  : 'QCDscale_VH',
  'samples'  : {
    'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
    'ZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
    'WH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
    'ZH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
  },
  'type'  : 'lnN',
}

nuisances['QCDscale_ggZH']  = {
  'name'  : 'QCDscale_ggZH', 
  'samples'  : {
    'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm'),                  
  },
  'type'  : 'lnN',
}

nuisances['QCDscale_VV'] = {
    'name': 'QCDscale_VV',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Zg'      : ['LHEScaleWeight[8]', 'LHEScaleWeight[0]'],
        'WZ'      : ['LHEScaleWeight[8]', 'LHEScaleWeight[0]'],
        'ZZ'      : ['LHEScaleWeight[8]', 'LHEScaleWeight[0]'],
    }
}

#TODO update?
nuisances['QCDscale_qqbar_ACCEPT']  = {
  'name'  : 'QCDscale_qqbar_ACCEPT', 
  'type'  : 'lnN',
  'samples'  : {
    'WH_hww'  : '1.05',
    'WH_htt'  : '1.05',
    'ZH_hww'  : '1.04',
    'ZH_htt'  : '1.04',
    'WZ'      : '1.029',
    'ZZ'      : '1.029'
  },
}

#TODO update?
nuisances['QCDscale_gg_ACCEPT']  = {
  'name'  : 'QCDscale_gg_ACCEPT', 
  'samples'  : {
    'ggZH_hww': '1.027',                   
  },
  'type'  : 'lnN',
}

# pdf
nuisances['pdf_Higgs_gg']  = {
               'name'  : 'pdf_Higgs_gg', 
               'samples'  : {
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm'), 
                   },
               'type'  : 'lnN',
              }

nuisances['pdf_Higgs_qqbar']  = {
               'name'  : 'pdf_Higgs_qqbar', 
               'type'  : 'lnN',
               'samples'  : {
                   'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   'ZH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   },
              }

#TODO update?
nuisances['pdf_Higgs_gg_ACCEPT']  = {
               'name'  : 'pdf_Higgs_gg_ACCEPT', 
               'samples'  : {
                   'ggZH_hww': '1.005', 
                   },
               'type'  : 'lnN',
              }

#TODO update?
nuisances['pdf_Higgs_qqbar_ACCEPT']  = {
               'name'  : 'pdf_Higgs_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   'WH_hww'  : '1.007',
                   'WH_htt'  : '1.007',
                   'ZH_hww'  : '1.012',
                   'ZH_htt'  : '1.012',
                   },
              }

#TODO update?
nuisances['pdf_qqbar_ACCEPT']  = {
               'name'  : 'pdf_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   'WZ'      : '1.005',
                   'ZZ'      : '1.005',
                   },
              }

# PS / UE -- variant samples not available for ZH3l signals
#nuisances['PS_zh3l']  = {
#                'name'  : 'PS_zh3l',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                    'WH_hww'   : ['1', '1'], #Assuming no normalization factor since no skim applied
#                    'ZH_hww'   : ['1', '1'],
#                    'WH_htt'   : ['1', '1'],
#                    'ggZH_hww' : ['1', '1'],
#                },
#                'folderUp'   : directoryMC+'__PS',
#                'folderDown' : directoryMC+'',
#                'AsLnN'      : '1',
#}

#nuisances['UE_zh3l']  = {
#                'name'  : 'UE_zh3l',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                    'WH_hww'   : ['1', '1'], #Assuming no normalization factor since no skim applied
#                    'ZH_hww'   : ['1', '1'],
#                    'WH_htt'   : ['1', '1'],
#                    'ggZH_hww' : ['1', '1'],
#               },
#                'folderUp'   : directoryMC+'__UEup',
#                'folderDown' : directoryMC+'__UEdo',
#                'AsLnN'      : '1',
#                }

nuisances['WZ3l2jnorm']  = {
               'name'  : 'CMS_hww_WZ3l2jnorm',
               'samples'  : {
                   'WZ'       : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : ['zh3l_Zg_CR_2j',
                          'zh3l_WZ_CR_2j',
                          #'zh3l_SR_ptv_0_75_2j',
                          #'zh3l_SR_ptv_75_150_2j',
                          #'zh3l_SR_ptv_150_250_2j',
                          #'zh3l_SR_ptv_gt250_2j'
                          'zh3l_SR_ptv_lt150_2j',
                          'zh3l_SR_ptv_gt150_2j']
              }

nuisances['WZ3l1jnorm']  = {
               'name'  : 'CMS_hww_WZ3l1jnorm',
               'samples'  : {
                   'WZ'       : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : ['zh3l_Zg_CR_1j',
                          'zh3l_WZ_CR_1j',
                          #'zh3l_SR_ptv_0_75_1j',
                          #'zh3l_SR_ptv_75_150_1j',
                          #'zh3l_SR_ptv_150_250_1j',
                          #'zh3l_SR_ptv_gt250_1j'
                          'zh3l_SR_ptv_lt150_1j',
                          'zh3l_SR_ptv_gt150_1j']
              }

nuisances['Zg3l2jnorm']  = {
               'name'  : 'CMS_hww_Zg3l2jnorm',
               'samples'  : {
                   'Zg'       : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : ['zh3l_Zg_CR_2j',
                          'zh3l_WZ_CR_2j',
                          #'zh3l_SR_ptv_0_75_2j',
                          #'zh3l_SR_ptv_75_150_2j',
                          #'zh3l_SR_ptv_150_250_2j',
                          #'zh3l_SR_ptv_gt250_2j'
                          'zh3l_SR_ptv_lt150_2j',
                          'zh3l_SR_ptv_gt150_2j']
              }

nuisances['Zg3l1jnorm']  = {
               'name'  : 'CMS_hww_Zg3l1jnorm',
               'samples'  : {
                   'Zg'       : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : ['zh3l_Zg_CR_1j',
                          'zh3l_WZ_CR_1j',
                          #'zh3l_SR_ptv_0_75_1j',
                          #'zh3l_SR_ptv_75_150_1j',
                          #'zh3l_SR_ptv_150_250_1j',
                          #'zh3l_SR_ptv_gt250_1j'
                          'zh3l_SR_ptv_lt150_1j',
                          'zh3l_SR_ptv_gt150_1j']
              }

#### FAKES

fakeW_EleUp       = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lElUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l )'
fakeW_EleDown     = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lElDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l )'
fakeW_MuUp        = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lMuUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l )'
fakeW_MuDown      = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lMuDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l )'
fakeW_statEleUp   = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lstatElUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l )'
fakeW_statEleDown = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lstatElDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l )'
fakeW_statMuUp    = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lstatMuUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l )'
fakeW_statMuDown  = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_3lstatMuDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_3l )'

nuisances['fake_syst_em']  = {
               'name'  : 'CMS_fake_syst_em',
               'type'  : 'lnN',
               'samples'  : {
                   'Fake_em' : '1.30',
               },
}

nuisances['fake_syst_me']  = {
               'name'  : 'CMS_fake_syst_me',
               'type'  : 'lnN',
               'samples'  : {
                   'Fake_me' : '1.30',
               },
}

nuisances['fake_ele']  = {
                'name'  : 'CMS_fake_e_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_EleUp , fakeW_EleDown ],
                             },
}

nuisances['fake_ele_stat']  = {
                'name'  : 'CMS_fake_stat_e_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                             },
}

nuisances['fake_mu']  = {
                'name'  : 'CMS_fake_m_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_MuUp , fakeW_MuDown ],
                             },
}

nuisances['fake_mu_stat']  = {
                'name'  : 'CMS_fake_stat_m_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                             },
}

###### B-tagger

for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
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

#### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_3l_u)/(TriggerEffWeight_3l))*(TriggerEffWeight_3l>0.02) + (TriggerEffWeight_3l<=0.02)', '(TriggerEffWeight_3l_d)/(TriggerEffWeight_3l)']

nuisances['trigg']  = {
                'name'  : 'CMS_eff_hwwtrigger_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, trig_syst) for skey in mc),
}

##### Prefiring correction

prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire'] = {
    'name': 'CMS_eff_prefiring_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples'  : dict((skey, prefire_syst) for skey in mc),
}

##### Electron Efficiency and energy scale

id_syst_ele = [ 'LepSF3l__ele_'+eleWP+'__Up' , 'LepSF3l__ele_'+eleWP+'__Do' ]

nuisances['eff_e']  = {
                'name'  : 'CMS_eff_e_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, id_syst_ele) for skey in mc),
}

nuisances['electronpt']  = {
                'name'  : 'CMS_scale_e_2016',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : directoryMC+'__ElepTup', 
                'folderDown' : directoryMC+'__ElepTdo', 
}

###### Muon Efficiency and energy scale

id_syst_mu = [ 'LepSF3l__mu_'+muWP+'__Up' , 'LepSF3l__mu_'+muWP+'__Do' ]

nuisances['eff_m']  = {
                'name'  : 'CMS_eff_m_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((skey, id_syst_mu) for skey in mc),
}

nuisances['muonpt']  = {
                'name'  : 'CMS_scale_m_2016',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : directoryMC+'__MupTup',
                'folderDown' : directoryMC+'__MupTdo',
}

# ###### Jet energy scale

nuisances['jes']  = {
                'name'  : 'CMS_scale_j_2016',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : directoryMC+'__JESup',
                'folderDown' : directoryMC+'__JESdo',
}


##### MET energy scale

nuisances['met']  = {
                'name'  : 'CMS_scale_met_2016',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : dict((skey, ['1', '1']) for skey in mc),
                'folderUp'   : directoryMC+'__METup',
                'folderDown' : directoryMC+'__METdo',
}

# Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {}
             }

for n in nuisances.values():
    n['skipCMS'] = 1
