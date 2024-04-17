# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_0j
scale_histo_ttH_hww      = 0.0973682231198/0.0905210968445   # 1.07564122082
scale_histo_WW           = 1.41693462967/1.3823184631        # 1.02504210679
scale_histo_DY           = 914.150138114/898.546536111       # 1.01736537995
scale_histo_WZ           = 2275.69820408/2257.14607409       # 1.00821928638
scale_histo_Wg           = 0.0/1                             # 0.0
scale_histo_WgS          = 1.27417227508/1.26314357104       # 1.00873115638
scale_histo_ZH_htt       = 3.90072657088/3.79530088597       # 1.02777795175
scale_histo_WH_htt_plus  = 0.618401438525/0.604476988034     # 1.02303553446
scale_histo_ggZH_hww     = 0.624472900976/0.62179717462      # 1.00430321408
scale_histo_qqH_hww      = 0.00315977881753/0.00264340405655 # 1.19534462002
scale_histo_ZZ           = 38.4923894425/37.6921419772       # 1.02123114855
scale_histo_Zg           = 37.4731856799/36.57182747         # 1.02464624473
scale_histo_ggH_hww      = 0.00953122242291/0.00953122242291 # 1.0
scale_histo_WH_htt_minus = 0.35118427943/0.34589649464       # 1.01528718814
scale_histo_VVV          = 10.9315834637/10.8493141547       # 1.00758290412
scale_histo_WH_hww_plus  = 1.34904077747/1.32892124667       # 1.01513974651
scale_histo_ggH_htt      = 0.0/1                             # 0.0
scale_histo_ggWW         = 0.160158737149/0.155355292397     # 1.03091909312
scale_histo_ZgS          = 29.6799771486/28.6095737695       # 1.03741416729
scale_histo_top          = 173.581289302/165.6712089         # 1.04774565511
scale_histo_WWewk        = 0.0132964030698/0.0132797602802   # 1.00125324473
scale_histo_ZH_hww       = 8.61887915029/8.50624336105       # 1.01324154323
scale_histo_WH_hww_minus = 0.90951092161/0.89786582542       # 1.012969751
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




