# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# BTag normalization factors
# Cut = wh3l_13TeV_sssf
scale_histo_ttH_hww      = 0.114988516076/0.108542154913     # 1.05939039231
scale_histo_WW           = 3.22785217885/3.08817311604       # 1.04523032148
scale_histo_DY           = 34.8175154215/33.4223704101       # 1.0417428505
scale_histo_WZ           = 21.7086230788/21.2708869931       # 1.02057911764
scale_histo_Wg           = 0.261776064848/0.294847019997     # 0.887836902169
scale_histo_WgS          = 0.405287392724/0.376676301538     # 1.07595670625
scale_histo_ZH_htt       = 0.162021767299/0.152298934007     # 1.06384045532
scale_histo_WH_htt_plus  = 1.31082379599/1.28342123306       # 1.02135118403
scale_histo_ggZH_hww     = 0.0405578297738/0.0392402785668   # 1.03357649984
scale_histo_qqH_hww      = 0.00925571019321/0.0085211677466  # 1.08620208737
scale_histo_ZZ           = 1.14076429023/1.09379863312       # 1.04293812013
scale_histo_Zg           = 3.04224994772/3.12093095822       # 0.974789249888
scale_histo_ggH_hww      = 0.124007406031/0.102185254361     # 1.21355480109
scale_histo_WH_htt_minus = 0.863199761508/0.84816567508      # 1.01772541246
scale_histo_VVV          = 5.28478474804/5.23392511315       # 1.00971730275
scale_histo_WH_hww_plus  = 4.15894078979/4.08099223915       # 1.01910039178
scale_histo_ggH_htt      = 0.0936114704829/0.0947166491217   # 0.988331738411
scale_histo_ggWW         = 0.292241832136/0.284461446195     # 1.02735128449
scale_histo_ZgS          = 3.94058303742/3.94381771208       # 0.999179811317
scale_histo_top          = 237.386109815/218.633895349       # 1.08576993259
scale_histo_WWewk        = 0.0319102961075/0.0316459238835   # 1.00835406876
scale_histo_ZH_hww       = 0.453229540457/0.433120191981     # 1.04642902559
scale_histo_WH_hww_minus = 2.62834745009/2.58467364832       # 1.01689722097
scale_histo_qqH_htt      = 0.00394170032975/0.00394170032975 # 1.0

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




