# structure configuration for datacard

# structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_ossf
scale_histo_ttH_hww      = 0.107932481916/0.10008965436    # 1.07835802417
scale_histo_WW           = 3.43357872773/3.51816220581     # 0.975958050499
scale_histo_DY           = 179.263293476/182.616477666     # 0.981638107181
scale_histo_WZ           = 177.531779735/177.316651343     # 1.00121324416
scale_histo_Wg           = 0.0/1                           # 0.0
scale_histo_WgS          = 0.238406390483/0.247818661214   # 0.962019523932
scale_histo_ZH_htt       = 0.207269098216/0.203737574985   # 1.01733368639
scale_histo_WH_hww_minus = 3.07035011258/3.06124357073     # 1.00297478513
scale_histo_ggZH_hww     = 0.0540930301923/0.0542408589104 # 0.997274587441
scale_histo_qqH_hww      = 0.0139414300349/0.0132218061881 # 1.05442704549
scale_histo_ZZ           = 38.434053776/38.1756731045      # 1.00676820212
scale_histo_ggH_hww      = 0.150081474653/0.151755448286   # 0.988969268305
scale_histo_WH_htt_minus = 0.703549499701/0.698881831945   # 1.00667876534
scale_histo_VVV          = 6.2983508376/6.18119808301      # 1.01895308207
scale_histo_WH_hww_plus  = 4.98269415561/4.97751322898     # 1.00104086647
scale_histo_ggH_htt      = 0.0/1                           # 0.0
scale_histo_qqH_htt      = 0.0/1                           # 0.0
scale_histo_ggWW         = 0.335398595549/0.332412900789   # 1.00898188594
scale_histo_ZgS          = 60.2724296872/59.287474624      # 1.01661320657
scale_histo_top          = 240.300684952/228.263381351     # 1.05273427358
scale_histo_WWewk        = 0.0219532312348/0.0222954459818 # 0.984650912693
scale_histo_ZH_hww       = 0.613957763721/0.612756085013   # 1.00196110449
scale_histo_Zg           = 67.6616649555/66.946744614      # 1.01067894108
scale_histo_WH_htt_plus  = 1.07982687038/1.07653780999     # 1.00305522051

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




