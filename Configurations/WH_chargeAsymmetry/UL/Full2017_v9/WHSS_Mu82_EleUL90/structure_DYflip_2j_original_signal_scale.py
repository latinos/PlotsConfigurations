# structure configuration for datacard

# structure = {}

# keys here must match keys in samples.py    
#                    

# BTag normalization factors
# Cut = hww2l2v_13TeV_samesign_2j
scale_histo_ttH_hww      = 1.71005342426/1.09314151072       # 1.5643477148
scale_histo_WW           = 2.25800060639/1.91041058041       # 1.18194519521
scale_histo_DY           = 7.90909155209/10.3492826587       # 0.764216401555
scale_histo_WZ           = 49.3067818241/43.0657206854       # 1.14491946354
scale_histo_Wg           = 41.0307152872/32.8185201828       # 1.25023051188
scale_histo_WgS          = 19.5784400987/16.5378866827       # 1.18385380637
scale_histo_ZH_htt       = 0.116319166763/0.091351528461     # 1.27331385388
scale_histo_WH_htt_plus  = 0.4131832122/0.323965810005       # 1.27539141304
scale_histo_ggZH_hww     = 0.0104452201343/0.00850780582798  # 1.22772197033
scale_histo_qqH_hww      = 0.00875809211317/0.00618184320386 # 1.41674446025
scale_histo_ZZ           = 1.19318174322/0.95378270042       # 1.25099956488
scale_histo_Zg           = 4.88184592384/4.15039184398       # 1.17623735477
scale_histo_ggH_hww      = 0.152649430692/0.135132712642     # 1.1296260373
scale_histo_WH_htt_minus = 0.263520609345/0.21247941852      # 1.24021710517
scale_histo_VVV          = 3.62299846954/3.27783418705       # 1.10530254515
scale_histo_WH_hww_plus  = 1.99024457637/1.64510255389       # 1.20979970013
scale_histo_ggH_htt      = 0.0137239155152/1                 # 0.0137239155152
scale_histo_ggWW         = 0.138240992431/0.130499421048     # 1.05932264926
scale_histo_ZgS          = 2.74664238533/2.21545099158       # 1.23976670925
scale_histo_top          = 61.5535890766/44.34883106         # 1.38794163466
scale_histo_WWewk        = 0.0247224163572/0.0239052406614   # 1.03418395604
scale_histo_ZH_hww       = 0.343842150558/0.26623480593      # 1.29149961951
scale_histo_WH_hww_minus = 1.24042862398/1.03231388643       # 1.20160024997
scale_histo_qqH_htt      = 0.00478130781574/0.00431274438945 # 1.10864623172


# structure['DY']  = {  
#     'isSignal' : 0,
#     'isData'   : 0,
#     'scaleSampleForDatacard' : 0.5
# }

# structure['top'] = {   
#     'isSignal' : 0,
#     'isData'   : 0,
# }

# structure['WW']  = {
#     'isSignal' : 0,
#     'isData'   : 0,
# }

# structure['WWewk']  = {
#     'isSignal' : 0,
#     'isData'   : 0,
# }

# structure['ggWW']  = {
#     'isSignal' : 0,
#     'isData'   : 0,
# }

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

structure['WgS'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WgS,
}

structure['ZgS']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ZgS,
}

structure['WZ'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_WZ * 1.138 # NLO -> NNLO k-factor
}

structure['ZZ']  = { 
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_ZZ,
}

structure['VVV']  = { 
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scale_histo_VVV,
}


# Higgs
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
    'scaleSampleForDatacard' : scale_histo_WH_htt_minus,
}


# Fakes
structure['Fake_ee']  = {
    'isSignal' : 0,
    'isData'   : 0,
}

structure['Fake_mm']  = {
    'isSignal' : 0,
    'isData'   : 0,
}

structure['Fake_em']  = {
    'isSignal' : 0,
    'isData'   : 0,
}


# Data-driven charge flip estimation
structure['ChargeFlip']  = {  
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : 0.5,
}


# Data
structure['DATA']  = { 
    'isSignal' : 0,
    'isData'   : 1 
}
