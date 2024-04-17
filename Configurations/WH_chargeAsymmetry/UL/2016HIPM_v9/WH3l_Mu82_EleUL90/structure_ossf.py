# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_ossf
scale_histo_ttH_hww      = 0.0819143766334/0.0646955327455   # 1.26615197614
scale_histo_WW           = 1.46661838243/1.42547087968       # 1.02886590203
scale_histo_DY           = 119.271309764/111.066792944       # 1.07387011547
scale_histo_Zg           = 43.0767402429/41.0415414514       # 1.04958875129
scale_histo_WZ           = 81.4154986888/80.355107841        # 1.01319630919
scale_histo_Wg           = 0.243897574992/0.250267590724     # 0.974547180824
scale_histo_WgS          = 0.474772468964/0.477825516997     # 0.993610537897
scale_histo_ZH_htt       = 0.105372138659/0.0987638773402    # 1.06690969915
scale_histo_WH_htt_plus  = 0.598440222529/0.593341806468     # 1.00859271335
scale_histo_ggZH_hww     = 0.310209832934/0.308203436187     # 1.00650997527
scale_histo_qqH_hww      = 0.00730222769905/0.00722118186046 # 1.01122334822
scale_histo_ZZ           = 5.83803007547/5.61517777746       # 1.03968748753
scale_histo_ggH_hww      = 0.0621173348543/0.0636226825195   # 0.976339449932
scale_histo_WH_htt_minus = 0.363444024567/0.357692308189     # 1.01608006727
scale_histo_VVV          = 3.40912347181/3.36828967269       # 1.01212300695
scale_histo_WH_hww_plus  = 2.32458298821/2.28995840671       # 1.01512017921
scale_histo_ggH_htt      = 0.0/1                             # 0.0
scale_histo_ggWW         = 0.188637179235/0.185293045692     # 1.01804780924
scale_histo_ZgS          = 28.8881475482/27.7214251137       # 1.04208739016
scale_histo_top          = 94.203176027/89.3996380325        # 1.0537310676
scale_histo_WWewk        = 0.0339040448816/0.0318660660932   # 1.06395451457
scale_histo_ZH_hww       = 0.303954494917/0.294009146286     # 1.03382666409
scale_histo_WH_hww_minus = 1.42557522609/1.41291194537       # 1.00896254063
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




