# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_1j
scale_histo_ttH_hww      = 0.909834240459/0.619982436458      # 1.46751615361
scale_histo_WW           = 0.436304110526/0.294110280403      # 1.48347113174
scale_histo_DY           = 23.8101308608/24.602714239         # 0.967784717958
scale_histo_WZ           = 1076.88641926/991.109847579        # 1.08654597862
scale_histo_Wg           = 0.917217245625/0.691451235385      # 1.32651038669
scale_histo_WgS          = 0.637718650494/0.568165681517      # 1.1224167021
scale_histo_ZH_htt       = 2.06296152442/1.71318153603        # 1.20416983316
scale_histo_WH_htt_plus  = 0.639010631882/0.593065361049      # 1.07747083855
scale_histo_ggZH_hww     = 0.318191325675/0.283870594416      # 1.12090273503
scale_histo_qqH_hww      = 0.00101035840725/0.000828863444796 # 1.21896847254
scale_histo_ZZ           = 52.797464539/47.7338432548         # 1.10608031826
scale_histo_Zg           = 86.3928180959/78.1221068358        # 1.10586902472
scale_histo_ggH_hww      = 0.0/1                              # 0.0
scale_histo_WH_htt_minus = 0.433214095782/0.389553307731      # 1.11207911006
scale_histo_VVV          = 15.2160613201/13.998590243         # 1.08697097751
scale_histo_WH_hww_plus  = 1.91001819866/1.76441022501        # 1.08252501124
scale_histo_ggH_htt      = 0.0/1                              # 0.0
scale_histo_ggWW         = 0.0242717984067/0.0222675703864    # 1.0900065874
scale_histo_ZgS          = 49.412461519/43.8972179547         # 1.12563993395
scale_histo_top          = 5.94066922381/4.15972236921        # 1.42814079799
scale_histo_WWewk        = 0.0191259120459/0.0188207111996    # 1.01621622281
scale_histo_ZH_hww       = 4.86507670658/4.18893144926        # 1.16141234716
scale_histo_WH_hww_minus = 1.19064528036/1.09562427613        # 1.08672772801
scale_histo_qqH_htt      = 0.0/1                              # 0.0

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
    'scaleSampleForDatacard' : 10.0 * scale_histo_WH_hww_plus, # scaling signal to have sensitivity
}

structure['WH_hww_minus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : 10.0 * scale_histo_WH_hww_minus, # scaling signal to have sensitivity
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
    'scaleSampleForDatacard' : 10.0 * scale_histo_WH_htt_plus, # scaling signal to have sensitivity
}

structure['WH_htt_minus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : 10.0 * scale_histo_WH_htt_plus, # scaling signal to have sensitivity
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




