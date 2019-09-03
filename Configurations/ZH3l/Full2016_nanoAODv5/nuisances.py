# nuisances
# name of samples here must match keys in samples.py    

#### Luminosity

nuisances['lumi']  = { 
  'name'  : 'lumi_13TeV_2016',
  'samples'  : { 
    'WW'       : '1.025',
    'Vg'       : '1.025',
    'WZ'       : '1.025',
    'ZZ'       : '1.025',
    'ttZ'      : '1.025',
    'VVV'      : '1.025',
    'ZH_hww'   : '1.025',
    'ggZH_hww' : '1.025',
    'WH_hww'   : '1.025',
    'WH_htt'   : '1.025',
  },  
  'type'  : 'lnN',
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
        'Vg': ['LHEScaleWeight[8]', 'LHEScaleWeight[0]'],
        'WZ': ['LHEScaleWeight[8]', 'LHEScaleWeight[0]'],
        'ZZ': ['LHEScaleWeight[8]', 'LHEScaleWeight[0]'],
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
#                'folderUp'   : treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__PS',
#                'folderDown' : treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5',
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
#                'folderUp'   : treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__UEup',
#                'folderDown' : treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__UEdo',
#                'AsLnN'      : '1',
#                }

nuisances['WZ3l2jnorm']  = {
               'name'  : 'CMS_hww_WZ3l2jnorm',
               'samples'  : {
                   'WZ' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'zh3l_WZ_CR_2j',
                   'zh3l_SR_2j',
                ]
              }

nuisances['WZ3l1jnorm']  = {
               'name'  : 'CMS_hww_WZ3l1jnorm',
               'samples'  : {
                   'WZ' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'zh3l_WZ_CR_1j',
                   'zh3l_SR_1j',
                ]
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

nuisances['fake_syst_zh3l']  = {
               'name'  : 'fake_syst_zh3l',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake' : '1.30',
                             },
}

nuisances['fake_ele']  = {
                'name'  : 'hww_fake_ele',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_EleUp , fakeW_EleDown ],
                             },
}

nuisances['fake_ele_stat']  = {
                'name'  : 'hww_fake_ele_stat',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                             },
}

nuisances['fake_mu']  = {
                'name'  : 'hww_fake_mu',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_MuUp , fakeW_MuDown ],
                             },
}

nuisances['fake_mu_stat']  = {
                'name'  : 'hww_fake_mu_stat',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                             },
}

###### B-tagger

nuisances['btag_shape_jes']  = {
                'name'  : 'btag_shape_jes_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'      : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'WZ'      : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ZZ'      : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'VVV'     : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'Vg'      : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ttZ'     : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'WH_hww'  : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ZH_hww'  : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ggZH_hww': ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'WH_htt'  : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                }
}

nuisances['btag_shape_lf']  = {
                'name'  : 'btag_shape_lf_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'WZ'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ZZ'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'VVV'     : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'Vg'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ttZ'     : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'WH_hww'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ZH_hww'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ggZH_hww': ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'WH_htt'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                }
}

nuisances['btag_shape_hf']  = {
                'name'  : 'btag_shape_hf_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'WZ'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ZZ'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'VVV'     : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'Vg'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ttZ'     : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'WH_hww'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ZH_hww'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ggZH_hww': ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'WH_htt'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                }
}

nuisances['btag_shape_hfstats1']  = {
                'name'  : 'btag_shape_hfstats1_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'WZ'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ZZ'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'VVV'     : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'Vg'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ttZ'     : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'WH_hww'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ZH_hww'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ggZH_hww': ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'WH_htt'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                }
}

nuisances['btag_shape_hfstats2']  = {
                'name'  : 'btag_shape_hfstats2_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'WZ'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ZZ'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'VVV'     : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'Vg'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ttZ'     : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'WH_hww'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ZH_hww'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ggZH_hww': ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'WH_htt'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                }
}

nuisances['btag_shape_lfstats1']  = {
                'name'  : 'btag_shape_lfstats1_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'WZ'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ZZ'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'VVV'     : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'Vg'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ttZ'     : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'WH_hww'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ZH_hww'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ggZH_hww': ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'WH_htt'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                }
}

nuisances['btag_shape_lfstats2']  = {
                'name'  : 'btag_shape_lfstats2_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'WZ'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ZZ'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'VVV'     : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'Vg'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ttZ'     : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'WH_hww'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ZH_hww'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ggZH_hww': ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'WH_htt'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                }
}

nuisances['btag_shape_cferr1']  = {
                'name'  : 'btag_shape_cferr1_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'WZ'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ZZ'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'VVV'     : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'Vg'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ttZ'     : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'WH_hww'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ZH_hww'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ggZH_hww': ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'WH_htt'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                }
}

nuisances['btag_shape_cferr2']  = {
                'name'  : 'btag_shape_cferr2_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'WZ'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ZZ'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'VVV'     : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'Vg'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ttZ'     : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'WH_hww'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ZH_hww'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ggZH_hww': ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'WH_htt'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                }
}

#### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_3l_u)/(TriggerEffWeight_3l))*(TriggerEffWeight_3l>0.02) + (TriggerEffWeight_3l<=0.02)', '(TriggerEffWeight_3l_d)/(TriggerEffWeight_3l)']

nuisances['trigg']  = {
                'name'  : 'hww_trigger_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'VVV'     : trig_syst ,
                   'WZ'      : trig_syst ,
                   'ZZ'      : trig_syst ,
                   'ttZ'     : trig_syst ,
                   'WW'      : trig_syst ,
                   'Vg'      : trig_syst ,
                   'WH_hww'  : trig_syst ,
                   'ZH_hww'  : trig_syst ,
                   'ggZH_hww': trig_syst ,
                   'WH_htt'  : trig_syst ,
                },
}

##### Prefiring correction

prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire'] = {
    'name': 'eff_prefiring_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples'  : {
        'VVV'     : prefire_syst ,
        'WZ'      : prefire_syst ,
        'ZZ'      : prefire_syst ,
        'ttZ'     : prefire_syst ,
        'WW'      : prefire_syst ,
        'Vg'      : prefire_syst ,
        'WH_hww'  : prefire_syst ,
        'ZH_hww'  : prefire_syst ,
        'ggZH_hww': prefire_syst ,
        'WH_htt'  : prefire_syst ,
    },
}

##### Electron Efficiency and energy scale

id_syst_ele = [ 'LepSF3l__ele_'+eleWP+'__Up' , 'LepSF3l__ele_'+eleWP+'__Do' ]

nuisances['eff_e']  = {
                'name'  : 'eff_e_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'VVV'     : id_syst_ele ,
                   'WZ'      : id_syst_ele ,
                   'ZZ'      : id_syst_ele ,
                   'ttZ'     : id_syst_ele ,
                   'WW'      : id_syst_ele ,
                   'Vg'      : id_syst_ele ,
                   'WH_hww'  : id_syst_ele ,
                   'ZH_hww'  : id_syst_ele ,
                   'ggZH_hww': id_syst_ele ,
                   'WH_htt'  : id_syst_ele ,
                },
}

nuisances['electronpt']  = {
                'name'  : 'scale_e_2016',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW'       : ['1', '1'],
                   'WZ'       : ['1', '1'],
                   'ZZ'       : ['1', '1'],
                   'ttZ'      : ['1', '1'],
                   'VVV'      : ['1', '1'],
                   'Vg'       : ['1', '1'],
                   'WH_hww'   : ['1', '1'],
                   'ZH_hww'   : ['1', '1'],
                   'ggZH_hww' : ['1', '1'],
                   'WH_htt'   : ['1', '1'],
                 },
                'folderUp'   : treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__ElepTup', 
                'folderDown' : treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__ElepTdo', 
}

###### Muon Efficiency and energy scale

id_syst_mu = [ 'LepSF3l__mu_'+muWP+'__Up' , 'LepSF3l__mu_'+muWP+'__Do' ]

nuisances['eff_m']  = {
                'name'  : 'eff_m_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'VVV'     : id_syst_mu ,
                   'WZ'      : id_syst_mu ,
                   'ZZ'      : id_syst_mu ,
                   'ttZ'     : id_syst_mu ,
                   'WW'      : id_syst_mu ,
                   'Vg'      : id_syst_mu ,
                   'WH_hww'  : id_syst_mu ,
                   'ZH_hww'  : id_syst_mu ,
                   'ggZH_hww': id_syst_mu ,
                   'WH_htt'  : id_syst_mu ,
                },
}

nuisances['muonpt']  = {
                'name'  : 'scale_m',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW'       : ['1', '1'],
                   'WZ'       : ['1', '1'],
                   'ZZ'       : ['1', '1'],
                   'ttZ'      : ['1', '1'],
                   'VVV'      : ['1', '1'],
                   'Vg'       : ['1', '1'],
                   'WH_hww'   : ['1', '1'],
                   'ZH_hww'   : ['1', '1'],
                   'ggZH_hww' : ['1', '1'],
                   'WH_htt'   : ['1', '1'],
                },
                'folderUp'   : treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__MupTup',
                'folderDown' : treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__MupTdo',
}

# ###### Jet energy scale

nuisances['jes']  = {
                'name'  : 'scale_j',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW'       : ['1', '1'],
                   'WZ'       : ['1', '1'],
                   'ZZ'       : ['1', '1'],
                   'ttZ'      : ['1', '1'],
                   'VVV'      : ['1', '1'],
                   'Vg'       : ['1', '1'],
                   'WH_hww'   : ['1', '1'],
                   'ZH_hww'   : ['1', '1'],
                   'ggZH_hww' : ['1', '1'],
                   'WH_htt'   : ['1', '1'],
                },
                'folderUp'   : treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__JESup',
                'folderDown' : treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__JESdo',
}


##### MET energy scale

nuisances['met']  = {
                'name'  : 'scale_met',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW'       : ['1', '1'],
                   'WZ'       : ['1', '1'],
                   'ZZ'       : ['1', '1'],
                   'ttZ'      : ['1', '1'],
                   'VVV'      : ['1', '1'],
                   'Vg'       : ['1', '1'],
                   'WH_hww'   : ['1', '1'],
                   'ZH_hww'   : ['1', '1'],
                   'ggZH_hww' : ['1', '1'],
                   'WH_htt'   : ['1', '1'],
                },
                'folderUp'   : treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__METup',
                'folderDown' : treeBaseDir+'Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__METdo',
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
