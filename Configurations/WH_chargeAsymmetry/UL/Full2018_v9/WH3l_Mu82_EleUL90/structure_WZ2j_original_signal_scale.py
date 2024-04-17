# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_2j
scale_histo_ttH_hww      = 18.4892363145/14.7782424694       # 1.25111198797
scale_histo_WW           = 0.421907257354/0.417099829669     # 1.01152584428
scale_histo_DY           = 10.304195725/7.49528864362        # 1.37475635895
scale_histo_WZ           = 625.050770695/565.456000453       # 1.1053924093
scale_histo_Wg           = 0.30407704303/0.428419232345      # 0.70976515542
scale_histo_WgS          = 0.47343192045/0.421606796364      # 1.12292288581
scale_histo_ZH_htt       = 1.31809544949/1.04149319472       # 1.26558239283
scale_histo_WH_htt_plus  = 0.371921272529/0.336681101201     # 1.10466928854
scale_histo_ggZH_hww     = 0.359760685535/0.32734441091      # 1.09902803758
scale_histo_qqH_hww      = 0.00154176080082/0.00138545121002 # 1.11282215474
scale_histo_ZZ           = 26.9889340515/23.5621954515       # 1.14543375668
scale_histo_Zg           = 41.9388448686/34.8770961633       # 1.20247524829
scale_histo_ggH_hww      = 0.0/1                             # 0.0
scale_histo_WH_htt_minus = 0.244147471948/0.215742620861     # 1.13166082332
scale_histo_VVV          = 28.9804038124/25.966296338        # 1.11607768143
scale_histo_WH_hww_plus  = 1.01586771335/0.922299821316      # 1.10145062361
scale_histo_ggH_htt      = 0.0/1                             # 0.0
scale_histo_ggWW         = 0.0205844412692/0.0185141619134   # 1.11182139194
scale_histo_ZgS          = 21.4760600293/19.3977309585       # 1.107142896
scale_histo_top          = 14.1042022689/9.90686521697       # 1.4236796363
scale_histo_WWewk        = 0.0353820319003/0.0333748201648   # 1.06014149966
scale_histo_ZH_hww       = 3.70351153237/3.16292908813       # 1.17091197089
scale_histo_WH_hww_minus = 0.658307008084/0.591585911785     # 1.11278344357
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




