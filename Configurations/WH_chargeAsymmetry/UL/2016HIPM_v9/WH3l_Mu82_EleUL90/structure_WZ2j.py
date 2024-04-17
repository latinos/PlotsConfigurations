# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_2j
scale_histo_ttH_hww      = 5.79635538148/4.65559623018       # 1.24502965783
scale_histo_WW           = 0.0/1                             # 0.0
scale_histo_DY           = 4.02813268792/3.20183521934       # 1.25806995425
scale_histo_Zg           = 13.6226005454/13.5106266156       # 1.00828784134
scale_histo_WZ           = 171.779299116/169.959147594       # 1.0107093472
scale_histo_Wg           = 0.243465496602/0.23647956904      # 1.0295413578
scale_histo_WgS          = 0.279324601093/0.251199969024     # 1.11196112873
scale_histo_ZH_htt       = 0.382047452833/0.359134245636     # 1.06380123164
scale_histo_WH_htt_plus  = 0.125059319701/0.12454503987      # 1.00412926787
scale_histo_ggZH_hww     = 0.962582512607/0.928127451445     # 1.03712320017
scale_histo_qqH_hww      = 0.0/1                             # 0.0
scale_histo_ZZ           = 7.67120366457/7.12918284721       # 1.07602846343
scale_histo_ggH_hww      = 0.00720946120771/0.00308751241228 # 2.33503877719
scale_histo_WH_htt_minus = 0.0733488834751/0.0690163603599   # 1.06277530563
scale_histo_VVV          = 9.15018215298/8.76882658435       # 1.04348992023
scale_histo_WH_hww_plus  = 0.273885384856/0.271315341446     # 1.00947253258
scale_histo_ggH_htt      = 0.0/1                             # 0.0
scale_histo_ggWW         = 0.00405024982092/0.00262869336919 # 1.54078443245
scale_histo_ZgS          = 6.56416786466/6.33403570404       # 1.03633262763
scale_histo_top          = 5.55947638595/4.37795159338       # 1.26988073471
scale_histo_WWewk        = 0.00740185120509/0.00853664423221 # 0.867068019206
scale_histo_ZH_hww       = 1.02383198043/0.98304875269       # 1.04148647525
scale_histo_WH_hww_minus = 0.183627887953/0.184387711838     # 0.995879205413
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




