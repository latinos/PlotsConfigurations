# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_2j
scale_histo_ttH_hww      = 5.20082258212/4.1715821355        # 1.24672664068
scale_histo_WW           = 0.0/1                             # 0.0
scale_histo_DY           = 2.98152628463/3.68361451172       # 0.809402361498
scale_histo_Zg           = 13.5116098142/13.5118774136       # 0.999980195244
scale_histo_WZ           = 166.956200551/165.300101582       # 1.01001874139
scale_histo_Wg           = 0.0681036557401/0.0578574431564   # 1.17709411313
scale_histo_WgS          = 0.0701741886363/0.0628296906399   # 1.11689533916
scale_histo_ZH_htt       = 0.390771446757/0.401575292306     # 0.973096338954
scale_histo_ggZH_hww     = 0.836788801025/0.879774456407     # 0.951140141579
scale_histo_qqH_hww      = 0.0/1                             # 0.0
scale_histo_ZZ           = 8.75535550838/9.03728326644       # 0.968803925942
scale_histo_ggH_hww      = 0.0/1                             # 0.0
scale_histo_WH_htt_minus = 0.0613822095772/0.0620836406644   # 0.988701837074
scale_histo_VVV          = 7.50126497638/7.27719435128       # 1.03079079852
scale_histo_WH_hww_plus  = 0.254676401687/0.254769227867     # 0.999635646026
scale_histo_ggH_htt      = 0.0/1                             # 0.0
scale_histo_qqH_htt      = 0.0/1                             # 0.0
scale_histo_ggWW         = 0.00648133837875/0.00637303682541 # 1.01699371215
scale_histo_ZgS          = 5.40474810941/5.34393044543       # 1.01138069902
scale_histo_top          = 4.12263824724/3.32758019387       # 1.23892979494
scale_histo_WWewk        = 0.00989261632108/0.00970538195719 # 1.01929180786
scale_histo_ZH_hww       = 1.00172101956/1.00073491375       # 1.00098538164
scale_histo_WH_hww_minus = 0.167793615854/0.168918741023     # 0.993339251986
scale_histo_WH_htt_plus  = 0.0958475462508/0.0947835904453   # 1.01122510553


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




