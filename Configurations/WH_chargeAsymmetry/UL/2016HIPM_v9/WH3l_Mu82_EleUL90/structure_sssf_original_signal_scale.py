# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_sssf
scale_histo_ttH_hww      = 0.0352369675822/0.0316526119178   # 1.11324043885
scale_histo_WW           = 1.32739047738/1.30282441537       # 1.01885600371
scale_histo_DY           = 7.05087896466/8.96904830276       # 0.786134573775
scale_histo_Zg           = 2.10189946134/1.99586581782       # 1.05312663936
scale_histo_WZ           = 8.53674113905/8.5552797856        # 0.997833075363
scale_histo_Wg           = 0.128412811141/0.142766187414     # 0.899462354966
scale_histo_WgS          = 0.097398594967/0.097398594967     # 1.0
scale_histo_ZH_htt       = 0.0681908620918/0.0656813275799   # 1.03820773124
scale_histo_WH_htt_plus  = 0.4569461114/0.450200523104       # 1.01498351945
scale_histo_ggZH_hww     = 0.107280834793/0.0963856738443    # 1.11303714042
scale_histo_qqH_hww      = 0.00394500732302/0.00387109948151 # 1.0190922093
scale_histo_ZZ           = 0.591589648767/0.575861771655     # 1.02731189651
scale_histo_ggH_hww      = 0.0362018947618/0.0291667830724   # 1.2412028667
scale_histo_WH_htt_minus = 0.325426820144/0.322126769959     # 1.01024456982
scale_histo_VVV          = 1.79886727392/1.90608787483       # 0.94374834323
scale_histo_WH_hww_plus  = 1.29855854318/1.27442853508       # 1.01893398291
scale_histo_ggH_htt      = 0.0/1                             # 0.0
scale_histo_ggWW         = 0.125678161518/0.122082628546     # 1.02945163463
scale_histo_ZgS          = 1.49207778196/1.5340821704        # 0.972619205637
scale_histo_top          = 73.9601418477/69.6429624176       # 1.06199017503
scale_histo_WWewk        = 0.0219704704063/0.0190774340939   # 1.15164703482
scale_histo_ZH_hww       = 0.160547983888/0.158106133094     # 1.01544437743
scale_histo_WH_hww_minus = 0.848562496601/0.834777604017     # 1.01651325157
scale_histo_qqH_htt      = 0.0/1                             # 0.0


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




