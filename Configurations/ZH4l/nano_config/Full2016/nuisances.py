# nuisances

#nuisances = {}

eleWP='mva_90p_Iso2016'
#'cut_WP_Tight80X'
#'cut_WP_Tight80X_SS'
#'mva_80p_Iso2015'
#'mva_80p_Iso2016'
#'mva_90p_Iso2015'
#'mva_90p_Iso2016'
muWP='cut_Tight80x'

upDownPath = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/"


# name of samples here must match keys in samples.py
#

nuisances['lumi']  = {
        'name'  : 'lumi_13TeV',
        'samples'  : {
            'WH_hww'    : '1.025',
            'ZH_hww'    : '1.025',
            'ggZH_hww'  : '1.025',
            'WH_htt'    : '1.025',
            'H_htt'    : '1.025',
            'ggH_hww'   : '1.025',
            'VVV'       : '1.025',
            'WWW'       : '1.025',
            # 'ZZ'        : '1.025', # This should *not* appear in samples whose normalization is taken care by rateParam nuisance.
            'VZ'        : '1.025',
            'WZ'        : '1.025',
            'WW'        : '1.025',
            'WWewk'     : '1.025',
            'ggWW'      : '1.025',
            'Vg'        : '1.025',
            'DY'        : '1.025',
            'ttW'       : '1.025',
            'ttZ'       : '1.025',
            'top'       : '1.025',
            'qqH_hww'   : '1.025',
            'ggH_htt'   : '1.025',
            'qqH_htt'   : '1.025',
            'ZH_htt'   : '1.025',
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
           # 'H_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','scale','sm'),
            'ZH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','scale','sm'),
            'WH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.0','scale','sm'),
            'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.0','scale','sm'),        
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
            'H_htt': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','pdf','sm'),
            'ggH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','pdf','sm'),
            'ggH_htt': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','pdf','sm'),
            },
        'type' : 'lnN',
        }

nuisances['pdf_Higgs_qqbar']  = {
        'name'  : 'pdf_Higgs_qqbar',
        'type'  : 'lnN',
        'samples'  : {
            'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.0','pdf','sm'),
            'qqH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','qqH' ,'125.0','pdf','sm'),
            'qqH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','qqH' ,'125.0','pdf','sm'),
            'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH' ,'125.0','pdf','sm'),
            'WH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH' ,'125.0','pdf','sm'),
            'ZH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.0','pdf','sm'),
            },
        }


##acceptance
nuisances['pdf_Higgs_qqbar_ACCEPT']  = {
               'name'  : 'pdf_Higgs_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'qqH_hww' : '1.011',
                   'qqH_htt' : '1.011',
                   'WH_hww'  : '1.007',
                   'WH_htt'  : '1.007',
                   'ZH_hww'  : '1.012',
                   'ZH_htt'  : '1.012',
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
                   #'ZH_hww'  : '1.016',
                   #'H_htt'  : '1.004',
                   # 'ZZ'      : '1.048',
                    'qqH_hww' : '1.007',
                   'qqH_htt' : '1.007',
                   'WH_hww'  : '1.05',
                   'WH_htt'  : '1.05',
                   'ZH_hww'  : '1.04',
                  'ZH_htt'  : '1.04',
                   'VZ'      : '1.029',                  
                   'WZ'      : '1.029',
             },
              }


nuisances['QCDscale_gg_ACCEPT']  = {
               'name'  : 'QCDscale_gg_ACCEPT', 
               'samples'  : {
                   'ggWW'    : '1.027',
                   'ggH_hww' : '1.027',
                   'ggH_htt' : '1.027',
                   'H_htt'   : '1.027',
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
            'H_htt'   : '1.037',
            'ggZH_hww'  : '1.037',
            },
        }

nuisances['UE_zh4l']  = {
        'name'  : 'UE_zh4l',
        'type'  : 'lnN',
        'samples'  : {
            'ZH_hww'   : '1.010',
            'H_htt'   : '1.010',
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
# Other Systematics
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
                   'DY'      : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ttW'     : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'top'     : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'WWewk'   : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ggWW'    : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'VZ'      : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'WWW'     : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ggH_hww' : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'H_htt'   : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'qqH_hww' : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ggH_htt' : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'qqH_htt' : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ZH_htt'  : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
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
                   'DY'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ttW'     : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'top'     : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'WWewk'   : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ggWW'    : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'VZ'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'WWW'     : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ggH_hww' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'H_htt'   : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'qqH_hww' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ggH_htt' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'qqH_htt' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ZH_htt'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
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
                   'DY'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ttW'     : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'top'     : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'WWewk'   : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ggWW'    : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'VZ'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'WWW'     : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ggH_hww' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'H_htt'   : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'qqH_hww' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ggH_htt' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'qqH_htt' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ZH_htt'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
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
                   'DY'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ttW'     : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'top'     : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'WWewk'   : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ggWW'    : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'VZ'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'WWW'     : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ggH_hww' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'H_htt'   : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'qqH_hww' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ggH_htt' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'qqH_htt' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ZH_htt'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
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
                   'DY'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ttW'     : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'top'     : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'WWewk'   : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ggWW'    : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'VZ'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'WWW'     : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ggH_hww' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'H_htt'   : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'qqH_hww' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ggH_htt' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'qqH_htt' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ZH_htt'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
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
                   'DY'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ttW'     : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'top'     : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'WWewk'   : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ggWW'    : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'VZ'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'WWW'     : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ggH_hww' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'H_htt'   : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'qqH_hww' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ggH_htt' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'qqH_htt' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ZH_htt'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
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
                   'DY'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ttW'     : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'top'     : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'WWewk'   : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ggWW'    : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'VZ'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'WWW'     : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ggH_hww' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'H_htt'   : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'qqH_hww' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ggH_htt' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'qqH_htt' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ZH_htt'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
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
                   'DY'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ttW'     : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'top'     : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'WWewk'   : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ggWW'    : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'VZ'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'WWW'     : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ggH_hww' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'H_htt'   : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'qqH_hww' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ggH_htt' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'qqH_htt' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ZH_htt'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
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
                   'DY'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ttW'     : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'top'     : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'WWewk'   : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ggWW'    : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'VZ'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'WWW'     : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ggH_hww' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'H_htt'   : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'qqH_hww' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ggH_htt' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'qqH_htt' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ZH_htt'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                }
}

#nuisances['btag_heavy']  = {
#        'name'  : 'btag_heavy',
#        'kind'  : 'weight',
#        'type'  : 'shape',
#        'samples'  : {
#           'ggH_hww' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
##           # 'qqH_hww' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#           # 'WH_hww'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            'ZH_hww'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#          # 'H_htt'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            'ggZH_hww': ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            'H_htt'   : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#          #  'H_hww'   : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            'ggH_hzz' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            'DY'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            'ttZ'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            'ttW'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
##           # 'WWW'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            'VVV'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            'VZ'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            'ZZ'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#           # 'ggZZ'    : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            'WW'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#           # 'ggWW'    : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            'top'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            'Vg'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#           # 'VgS'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#            }
#        }
#
#nuisances['btag_light']  = {
#        'name'  : 'btag_light',
#        'kind'  : 'weight',
#        'type'  : 'shape',
#        'samples'  : {
#            'ggH_hww' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#          #  'qqH_hww' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
##          #  'WH_hww'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'ZH_hww'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#          #  'H_htt'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
##            'ggZH_hww': ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
##            'H_htt'   : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#          #  'H_hww'   : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#          #  'WH_hww'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'ggH_hzz' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'DY'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'ttZ'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'ttW'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
##          #  'WWW'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'VVV'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'VZ'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'ZZ'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'ggZZ'    : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'WW'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'ggWW'    : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'top'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'Vg'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            'VgS'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#            }
#       }

trig_syst = ['((TriggerEffWeight_'+Nlep+'l_u)/(TriggerEffWeight_'+Nlep+'l))*(TriggerEffWeight_'+Nlep+'l>0.02) + (TriggerEffWeight_'+Nlep+'l<=0.02)', '(TriggerEffWeight_'+Nlep+'l_d)/(TriggerEffWeight_'+Nlep+'l)']

nuisances['trigg']  = {
                'name'  : 'hww_trigger_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : trig_syst ,
                   'VVV'     : trig_syst ,
                   'VZ'      : trig_syst ,
                  # 'WZgS'    : trig_syst ,
                  # 'WZgS_L'  : trig_syst ,
                  # 'WZgS_H'  : trig_syst ,
                   'ggWW'    : trig_syst ,
                   'WW'      : trig_syst ,
                  'WWewk'   : trig_syst ,
                   'top'     : trig_syst ,
                   'Vg'      : trig_syst ,
               #    'VgS'     : trig_syst ,
                   'ggH_hww' : trig_syst ,
                   'ttW' : trig_syst ,
                   'ttZ' : trig_syst ,
                #   'ggH_hzz' : trig_syst ,
                   'qqH_hww' : trig_syst ,
                   'WH_hww'  : trig_syst ,
                   'ZH_hww'  : trig_syst ,
                   'ZZ'      : trig_syst ,
                   'ggZH_hww': trig_syst ,
                   'WZ'     : trig_syst ,
                   'WWW'     : trig_syst ,
                #   'bbH_hww' : trig_syst ,
               #    'ttH_hww' : trig_syst ,
                   'H_htt'   : trig_syst ,
                  'ggH_htt' : trig_syst ,
                   'qqH_htt' : trig_syst ,
                   'ZH_htt'  : trig_syst ,
                   'WH_htt'  : trig_syst ,
                },
}

#nuisances['hww_trigger']  = {
#        'name'  : 'hww_trigger',
#        'kind'  : 'weight',
#        #'kind'  : 'tree', #'weight',
#        'type'  : 'shape',
#        'samples'  : {
#            'WH_hww'   : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'ZH_hww'   : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'H_htt'   : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'ggZH_hww' : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'WH_htt'   : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'ggH_hzz'  : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'WWW'      : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'VVV'      : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'VZ'       : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'DY'       : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'ttW'      : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'ttZ'      : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'ZZ'       : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'ggZZ'     : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'WW'       : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'Vg'       : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            'top'      : ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)'],
#            },
#        }
#

id_syst_ele = [ 'LepSF4l__ele_'+eleWP+'__Up' , 'LepSF4l__ele_'+eleWP+'__Do' ]
id_syst_mu  = [ 'LepSF4l__mu_'+muWP+'__Up' , 'LepSF4l__mu_'+muWP+'__Do' ]


nuisances['eff_e']  = {
        'name'  : 'eff_e',
        'kind'  : 'weight',
        'type'  : 'shape',
        'samples'  : {
                   'DY'      : id_syst_ele ,
                   'VVV'     : id_syst_ele ,
                   'ZZ'      : id_syst_ele ,
                   'VZ'      : id_syst_ele ,
                  # 'WZgS_L'  : id_syst_ele ,
                  # 'WZgS_H'  : id_syst_ele ,
                  # 'ggWW'    : id_syst_ele ,
                   'WW'      : id_syst_ele ,
                   'WWewk'   : id_syst_ele ,
                   'top'     : id_syst_ele ,
                   'Vg'      : id_syst_ele ,
                  # 'VgS'     : id_syst_ele ,
                   'ggH_hww' : id_syst_ele ,
                   'qqH_hww' : id_syst_ele ,
                   'WH_hww'  : id_syst_ele ,
                   'ZH_hww'  : id_syst_ele ,
                   'ggZH_hww': id_syst_ele ,
                   'ttW'     : id_syst_ele ,
                   'ttZ'     : id_syst_ele ,
                   'WZ'      : id_syst_ele ,
                  # 'bbH_hww' : id_syst_ele ,
                  # 'ttH_hww' : id_syst_ele ,
                   'WWW'     : id_syst_ele ,
                   'ggWW'     : id_syst_ele ,
                   'H_htt'   : id_syst_ele ,
                   'ggH_htt' : id_syst_ele ,
                   'qqH_htt' : id_syst_ele ,
                   'ZH_htt'  : id_syst_ele ,
                   'WH_htt'  : id_syst_ele ,        
    },
        }


nuisances['eff_m']  = {
        'name'  : 'eff_m',
        'kind'  : 'weight',
        'type'  : 'shape',
        'samples'  : {
                   'DY'      : id_syst_mu ,
                   'VVV'     : id_syst_mu ,
                   'ZZ'      : id_syst_mu ,
                   'VZ'      : id_syst_mu ,
                  # 'WZgS_L'  : id_syst_ele ,
                  # 'WZgS_H'  : id_syst_ele ,
                  # 'ggWW'    : id_syst_ele ,
                   'WW'      : id_syst_mu ,
                   'WWewk'   : id_syst_mu ,
                   'top'     : id_syst_mu ,
                   'Vg'      : id_syst_mu ,
                  # 'VgS'     : id_syst_ele ,
                   'ggH_hww' : id_syst_mu ,
                   'qqH_hww' : id_syst_mu ,
                   'WH_hww'  : id_syst_mu ,
                   'ZH_hww'  : id_syst_mu ,
                   'ggZH_hww': id_syst_mu ,
                   'ttW'     : id_syst_mu ,
                   'ttZ'     : id_syst_mu ,
                   'WZ'      : id_syst_mu ,
                  # 'bbH_hww' : id_syst_ele ,
                  # 'ttH_hww' : id_syst_ele ,
                   'WWW'     : id_syst_mu ,
                   'ggWW'     : id_syst_mu ,
                   'H_htt'   : id_syst_mu ,
                   'ggH_htt' : id_syst_mu ,
                   'qqH_htt' : id_syst_mu ,
                   'ZH_htt'  : id_syst_mu ,
                   'WH_htt'  : id_syst_mu ,
      
    },
        }

# # # nuisances handled by means of a different set of trees


nuisances['scale_j']  = {
        'name'  : 'scale_j',
        'kind'  : 'tree',
        'type'  : 'shape',
        'samples'  : {
                    'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'WWewk'   : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                 #  'WZgS_L'  : ['1', '1'],
                 #  'WZgS_H'  : ['1', '1'],
                  'VVV'     : ['1', '1'],
                  'WWW'     : ['1', '1'],
                   'WZ'      : ['1', '1'],
                   'Vg'      : ['1', '1'],
                #   'VgS'     : ['1', '1'],
                   'ttW'      : ['1', '1'],
                   'ttZ'      : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww'  : ['1', '1'],
                   'ZH_hww'  : ['1', '1'],
                   'ggZH_hww': ['1', '1'],
                  # 'bbH_hww' : ['1', '1'],
                  # 'ttH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                   'ZZ'       : ['1', '1'],
                   'ggH_htt' : ['1', '1'] ,
                  'qqH_htt' : ['1', '1'] ,
                   'ZH_htt'  : ['1', '1'] ,
                   'WH_htt'  : ['1', '1'] ,
            },
        'folderUp'   : upDownPath+'MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__JESup',
        'folderDown'   : upDownPath+'MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__JESdo'
        }


nuisances['scale_e']  = {
        'name'  : 'scale_e',
        'kind'  : 'tree',
        'type'  : 'shape',
        'samples'  : {
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'WWewk'   : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                 #  'WZgS_L'  : ['1', '1'],
                 #  'WZgS_H'  : ['1', '1'],
                  'VVV'     : ['1', '1'],
                  'WWW'     : ['1', '1'],
                   'WZ'      : ['1', '1'],
                   'Vg'      : ['1', '1'],
                #   'VgS'     : ['1', '1'],
                   'ttW'      : ['1', '1'],
                   'ttZ'      : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww'  : ['1', '1'],
                   'ZH_hww'  : ['1', '1'],
                   'ggZH_hww': ['1', '1'],
                  # 'bbH_hww' : ['1', '1'],
                  # 'ttH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                   'ZZ'       : ['1', '1'],
                   'ggH_htt' : ['1', '1'] ,
                  'qqH_htt' : ['1', '1'] ,
                   'ZH_htt'  : ['1', '1'] ,
                   'WH_htt'  : ['1', '1'] ,
            },
        'folderUp'   : upDownPath+'MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__ElepTup',
        'folderDown'   : upDownPath+'MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__ElepTdo'
        }

nuisances['scale_m']  = {
        'name'  : 'scale_m',
        'kind'  : 'tree',
        'type'  : 'shape',
        'samples'  : {
#            'WW'       : ['1', '1'],
#            'VZ'       : ['1', '1'],
#            'ZZ'       : ['1', '1'],
#            'DY'       : ['1', '1'],
#            'ttW'      : ['1', '1'],
#            'ttZ'      : ['1', '1'],
#            'ggZZ'     : ['1', '1'],
#            'WWW'      : ['1', '1'],
#            'VVV'      : ['1', '1'],
#            'WH_hww'   : ['1', '1'],
#            'ZH_hww'   : ['1', '1'],
#            'ggZH_hww' : ['1', '1'],
#            'H_htt'   : ['1', '1'],
#            'ggH_hzz'  : ['1', '1'],
#            'WH_htt'   : ['1', '1'],
#            'Vg'       : ['1', '1'],
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'WWewk'   : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                 #  'WZgS_L'  : ['1', '1'],
                 #  'WZgS_H'  : ['1', '1'],
                  'VVV'     : ['1', '1'],
                  'WWW'     : ['1', '1'],
                   'WZ'      : ['1', '1'],
                   'Vg'      : ['1', '1'],
                #   'VgS'     : ['1', '1'],
                   'ttW'      : ['1', '1'],
                   'ttZ'      : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww'  : ['1', '1'],
                   'ZH_hww'  : ['1', '1'],
                   'ggZH_hww': ['1', '1'],
                  # 'bbH_hww' : ['1', '1'],
                  # 'ttH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                   'ZZ'       : ['1', '1'],
                   'ggH_htt' : ['1', '1'] ,
                  'qqH_htt' : ['1', '1'] ,
                   'ZH_htt'  : ['1', '1'] ,
                   'WH_htt'  : ['1', '1'] ,        
    },
        'folderUp'   : upDownPath+'MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__MupTup',
        'folderDown'   : upDownPath+'MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__MupTdo'
        }

nuisances['scale_met']  = {
        'name'  : 'scale_met',
        'kind'  : 'tree',
        'type'  : 'shape',
        'samples'  : {
#            'WW'       : ['1', '1'],
#            'VZ'       : ['1', '1'],
#            'ZZ'       : ['1', '1'],
#            'DY'       : ['1', '1'],
#            'ttW'      : ['1', '1'],
#            'ttZ'      : ['1', '1'],
#            'ggZZ'     : ['1', '1'],
#            'WWW'      : ['1', '1'],
#            'VVV'      : ['1', '1'],
#            'WH_hww'   : ['1', '1'],
#            'ZH_hww'   : ['1', '1'],
#            'ggZH_hww' : ['1', '1'],
#            'H_htt'   : ['1', '1'],
#            'ggH_hzz'  : ['1', '1'],
#            'WH_htt'   : ['1', '1'],
#            'Vg'       : ['1', '1'],
                    'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'WWewk'   : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                 #  'WZgS_L'  : ['1', '1'],
                 #  'WZgS_H'  : ['1', '1'],
                  'VVV'     : ['1', '1'],
                  'WWW'     : ['1', '1'],
                   'WZ'      : ['1', '1'],
                   'Vg'      : ['1', '1'],
                #   'VgS'     : ['1', '1'],
                   'ttW'      : ['1', '1'],
                   'ttZ'      : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww'  : ['1', '1'],
                   'ZH_hww'  : ['1', '1'],
                   'ggZH_hww': ['1', '1'],
                  # 'bbH_hww' : ['1', '1'],
                  # 'ttH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                   'ZZ'       : ['1', '1'],
                   'ggH_htt' : ['1', '1'] ,
                  'qqH_htt' : ['1', '1'] ,
                   'ZH_htt'  : ['1', '1'] ,
                   'WH_htt'  : ['1', '1'] ,
            },
        'folderUp'   : upDownPath+'MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__METup',
        'folderDown'   : upDownPath+'MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5__METdo'
        }


#elePtCor_Syst = [ 'electron_ptW_4l_Up / electron_ptW_4l', 'electron_ptW_4l_Down / electron_ptW_4l']
#nuisances['elePtCor']  = {
#                'name'  : 'hww_elePtCor',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                'WW'       :elePtCor_Syst ,
#                'VZ'       :elePtCor_Syst ,
#                'ZZ'       :elePtCor_Syst ,
#                'DY'       :elePtCor_Syst ,
#                'ttW'      :elePtCor_Syst ,
#                'ttZ'      :elePtCor_Syst ,
#                'WWW'      :elePtCor_Syst ,
#                'VVV'      :elePtCor_Syst ,
#                'ZH_hww'   :elePtCor_Syst ,
#                'ggZH_hww' :elePtCor_Syst ,
#                'H_htt'   :elePtCor_Syst ,
#                'ggH_hzz'  :elePtCor_Syst ,
#                'Vg'       :elePtCor_Syst ,
#                }
#}
#
#eleEtaCor_Syst = [ 'electron_etaW_4l_Up / electron_etaW_4l', 'electron_etaW_4l_Down / electron_etaW_4l']
#
#nuisances['eleEtaCor']  = {
#                'name'  : 'hww_eleEtaCor',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                'WW'       :eleEtaCor_Syst ,
#                'VZ'       :eleEtaCor_Syst ,
#                'ZZ'       :eleEtaCor_Syst ,
#                'DY'       :eleEtaCor_Syst ,
#                'ttW'      :eleEtaCor_Syst ,
#                'ttZ'      :eleEtaCor_Syst ,
#                'WWW'      :eleEtaCor_Syst ,
#                'VVV'      :eleEtaCor_Syst ,
#                'ZH_hww'   :eleEtaCor_Syst ,
#                'ggZH_hww' :eleEtaCor_Syst ,
#                'H_htt'   :eleEtaCor_Syst ,
#                'ggH_hzz'  :eleEtaCor_Syst ,
#                'Vg'       :eleEtaCor_Syst ,
#                }
#}


nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',       #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              'includeSignal'  : '1',   #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {}
             }
