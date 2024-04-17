# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_1j
scale_histo_ttH_hww      = 0.312969685421/0.247099779017       # 1.26657209758
scale_histo_WW           = 0.222681825873/0.231135032091       # 0.96342741236
scale_histo_DY           = 8.48599640578/11.2464559412         # 0.754548495112
scale_histo_Zg           = 33.4159597129/31.4848824419         # 1.06133347566
scale_histo_WZ           = 326.14228463/321.737033107          # 1.01369208723
scale_histo_Wg           = 0.0/1                               # 0.0
scale_histo_WgS          = 0.396639830493/0.377679939405       # 1.05020094824
scale_histo_ZH_htt       = 0.647211182617/0.603269162892       # 1.07283982413
scale_histo_WH_htt_plus  = 0.204551232709/0.201160841494       # 1.0168541312
scale_histo_ggZH_hww     = 0.955085797014/0.912647853478       # 1.04649980096
scale_histo_qqH_hww      = 0.000729842313993/0.000714512473071 # 1.02145496615
scale_histo_ZZ           = 16.3879343788/15.2592464253         # 1.07396747664
scale_histo_ggH_hww      = 0.0/1                               # 0.0
scale_histo_WH_htt_minus = 0.132129838082/0.130875360742       # 1.00958528276
scale_histo_VVV          = 4.31255531288/4.04889273743         # 1.06511967408
scale_histo_WH_hww_plus  = 0.546340912106/0.546504137349       # 0.999701328441
scale_histo_ggH_htt      = 0.0/1                               # 0.0
scale_histo_ggWW         = 0.00795074060998/0.00781932711513   # 1.01680624086
scale_histo_ZgS          = 15.464172469/14.6842166217          # 1.0531152507
scale_histo_top          = 3.10353203795/2.4256136133          # 1.2794832701
scale_histo_WWewk        = 0.0/1                               # 0.0
scale_histo_ZH_hww       = 1.49378402302/1.44097072589         # 1.03665119366
scale_histo_WH_hww_minus = 0.363050698017/0.353255918697       # 1.02772714851
scale_histo_qqH_htt      = 0.0/1                               # 0.0


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




