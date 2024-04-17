# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_0j
scale_histo_ttH_hww       = 0.0600514388024/0.0557181657263    # 1.07777128015
scale_histo_WW            = 0.97562681523/0.996830323807       # 0.97872906946
scale_histo_DY            = 711.435735309/715.111215738        # 0.994860267398
scale_histo_WZ            = 1556.55933721/1554.57978184        # 1.00127337007
scale_histo_Wg            = 0.0/1                              # 0.0
scale_histo_WgS           = 1.06562071754/1.04184261722        # 1.0228231212
scale_histo_ZH_htt        = 2.7110692999/2.7019385121          # 1.003379347
scale_histo_WH_hww_minus = 0.640533519325/0.637266941276       # 1.00512591794
scale_histo_ggZH_hww     = 0.3997111456/0.402788768724         # 0.992359213156
scale_histo_qqH_hww      = 0.00176102931298/0.00182305213908   # 0.965978578029
scale_histo_ZZ           = 100.566556387/100.175788818         # 1.00390081848
scale_histo_ggH_hww      = 0.014911428547/0.00597080959934     # 2.49738805081
scale_histo_WH_htt_minus = 0.245783001302/0.244660767599       # 1.00458689685
scale_histo_VVV          = 6.86882643294/6.97905133835         # 0.984206319732
scale_histo_WH_hww_plus  = 0.991534206167/0.993656169059       # 0.997864489792
scale_histo_ggH_htt      = 0.000105894615393/0.000105894615393 # 1.0
scale_histo_qqH_htt      = 0.0/1                               # 0.0
scale_histo_ggWW         = 0.120607876449/0.118508228293       # 1.01771731959
scale_histo_ZgS          = 19.366256454/19.0663702478          # 1.01572854205
scale_histo_top          = 128.289756342/123.755416369         # 1.03663952744
scale_histo_WWewk        = 0.00876213859711/0.0090490051931    # 0.968298548861
scale_histo_ZH_hww       = 6.00887802682/6.01445939408         # 0.999072008489
scale_histo_Zg           = 26.2884437686/26.153795853          # 1.00514831256
scale_histo_WH_htt_plus  = 0.398605092444/0.396353094968       # 1.00568179612


structure['top']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_top,
}

structure['WW']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WW,
}

structure['Wg']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_Wg,
}

structure['Zg']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_Zg,
}

structure['WgS']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WgS,
}

structure['ZgS']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ZgS,
}

structure['ZZ']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ZZ,
}

structure['WZ']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WZ * 1.138 # NLO -> NNLO k-factor
}

structure['VVV']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_VVV,
}

structure['ggH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ggH_hww,
}

structure['qqH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_qqH_hww,
}

structure['ZH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ZH_hww,
}

structure['ggZH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ggZH_hww,
}

structure['WH_hww_plus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WH_hww_plus,
}

structure['WH_hww_minus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WH_hww_minus,
}

structure['ttH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ttH_hww,
}

structure['ggH_htt'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ggH_htt,
}

structure['qqH_htt'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_qqH_htt,
}

structure['ZH_htt'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ZH_htt,
}

structure['WH_htt_plus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WH_htt_plus,
}

structure['WH_htt_minus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WH_htt_plus,
}

structure['Fake']  = {
    'isSignal' : 0,
    'isData'   : 0
}


# Data
structure['DATA']  = {
    'isSignal' : 0,
    'isData'   : 1
}




