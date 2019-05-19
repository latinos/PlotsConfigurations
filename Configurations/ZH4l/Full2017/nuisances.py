# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py
#

nuisances['lumi']  = {
        'name'  : 'lumi_13TeV',
        'samples'  : {  
            'WH_hww'    : '1.025',
            'ZH_hww'    : '1.025',
            'ggZH_hww'  : '1.025',
            'WH_htt'    : '1.025',
            'ZH_htt'    : '1.025',
            'ggH_hzz'   : '1.025',
            'WWW'       : '1.025',
            'VVZ'       : '1.025',
            # 'ZZ'        : '1.025', # This should *not* appear in samples whose normalization is taken care by rateParam nuisance.
            'WZ'        : '1.025',
            'WW'        : '1.025',
            'ggWW'      : '1.025',
            'Vg'        : '1.025',
            'DY'        : '1.025',
            'ttW'       : '1.025',
            'ttZ'       : '1.025',
            'top'       : '1.025',
            },
        'type'  : 'lnN',
        }




# Theoritical Systematics

from LatinoAnalysis.Tools.HiggsXSection import *
HiggsXS = HiggsXSection()
nuisances['QCDscale_VH']  = {
        'name' : 'QCDscale_VH',
        'samples' : {
            'ZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','scale','sm'),
            'ZH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','scale','sm'),
            },
        'type' : 'lnN',
        }

nuisances['QCDscale_ggZH']  = {
        'name' : 'QCDscale_ggZH',
        'samples'  : {
            'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','scale','sm'),
            },
        'type' : 'lnN',
        }

# pdf uncertainty

nuisances['pdf_Higgs_gg']  = {
        'name' : 'pdf_Higgs_gg',
        'samples' : {
            'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','pdf','sm'),
            },
        'type' : 'lnN',
        }

nuisances['pdf_Higgs_qqbar']  = {
        'name'  : 'pdf_Higgs_qqbar',
        'type'  : 'lnN',
        'samples'  : {
            'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.0','pdf','sm'),
            'ZH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.0','pdf','sm'),
            },
        }


##acceptance
nuisances['pdf_Higgs_qqbar_ACCEPT']  = {
               'name'  : 'pdf_Higgs_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'ZH_hww'  : '1.013',
                   'ZH_htt'  : '1.009',
                   },
              }

nuisances['pdf_Higgs_gg_ACCEPT']  = {
               'name'  : 'pdf_Higgs_gg_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'ggZH_hww'  : '1.012',
                   },
              }

nuisances['QCDscale_qqbar_ACCEPT']  = {
               'name'  : 'QCDscale_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   'ZH_hww'  : '1.016',
                   'ZH_htt'  : '1.004',
                   # 'ZZ'      : '1.048',
                   },
              }


nuisances['QCDscale_gg_ACCEPT']  = {
               'name'  : 'QCDscale_gg_ACCEPT',
               'samples'  : {
                   'ggZH_hww': '1.003',
                   },
               'type'  : 'lnN',
              }
## PS/UE
#
## PS
#
nuisances['PS_zh4l']  = {
        'name'  : 'PS_zh4l',
        'type'  : 'lnN',
        'samples'  : {
            'ZH_hww'   : '1.037',
            'ZH_htt'   : '1.037',
            'ggZH_hww'  : '1.037',
            },
        }

nuisances['UE_zh4l']  = {
        'name'  : 'UE_zh4l',
        'type'  : 'lnN',
        'samples'  : {
            'ZH_hww'   : '1.010',
            'ZH_htt'   : '1.010',
            'ggZH_hww'  : '1.010',
            },
        }


nuisances['CMS_hww_ZZ4lnorm']  = {
        'name'  : 'CMS_hww_ZZ4lnorm',
        'samples'  : {
            'ZZ' : '1.00',
            },
        'type'  : 'rateParam',
        'cuts'  : [
            'zh4l_ZZ_13TeV',
            'zh4l_XSF_13TeV',
            'zh4l_XDF_13TeV',
            ]
        }

