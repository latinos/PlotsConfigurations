# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_1j
scale_histo_ttH_hww      = 0.645960719074/0.489319634195      # 1.32012017081
scale_histo_WW           = 0.221627122008/0.225379330479      # 0.983351585685
scale_histo_DY           = 27.3544775078/23.5067325226        # 1.16368693444
scale_histo_WZ           = 722.070081358/716.566611969        # 1.00768033187
scale_histo_Wg           = 0.0/1                              # 0.0
scale_histo_WgS          = 0.710087842293/0.711699783483      # 0.997735082646
scale_histo_ZH_htt       = 1.37625922962/1.35915496252        # 1.01258448637
scale_histo_WH_hww_minus = 0.791654241601/0.790021361161      # 1.00206688138
scale_histo_ggZH_hww     = 0.218323940327/0.215454720114      # 1.01331704505
scale_histo_qqH_hww      = 0.000410275872316/0.00043548047933 # 0.9421223035
scale_histo_ZZ           = 141.359351532/140.146386778        # 1.00865498413
scale_histo_ggH_hww      = 0.00348386599014/0.00348386599014  # 1.0
scale_histo_WH_htt_minus = 0.283209766915/0.27862645423       # 1.01644966806
scale_histo_VVV          = 10.1591940882/10.1249790236        # 1.00337927263
scale_histo_WH_hww_plus  = 1.26668107714/1.25683714289        # 1.00783230692
scale_histo_ggH_htt      = 0.0/1                              # 0.0
scale_histo_qqH_htt      = 0.00379935083794/0.00403252685479  # 0.942176202354
scale_histo_ggWW         = 0.0168164351893/0.0170486129502    # 0.986381428121
scale_histo_ZgS          = 33.8991848421/33.7916805742        # 1.0031813827
scale_histo_top          = 4.6780838878/3.14856433695         # 1.48578316565
scale_histo_WWewk        = 0.00556482676262/0.00546926964109  # 1.01747164206
scale_histo_ZH_hww       = 3.32473121988/3.2753136817         # 1.01508787951
scale_histo_Zg           = 58.2570110455/56.2180396662        # 1.03626898752
scale_histo_WH_htt_plus  = 0.448634894474/0.44505006683       # 1.00805488621


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




