# structure configuration for datacard

# structure = {}

# keys here must match keys in samples.py    
#                    

# BTag normalization factors
# Cut = hww2l2v_13TeV_samesign_2j
scale_histo_ttH_hww      = 0.616976697535/0.378860542609     # 1.62850608112
scale_histo_WW           = 1.72511153091/1.84461814416       # 0.935213359126
scale_histo_DY           = 3.53636672699/4.7664292056        # 0.741932078386
scale_histo_Zg           = 0.878090355125/0.845736028771     # 1.03825582127
scale_histo_WZ           = 16.0432100435/14.3489102017       # 1.11807864277
scale_histo_Wg           = 15.8878830005/14.5649053729       # 1.09083324565
scale_histo_WgS          = 7.97423388174/7.86396725233       # 1.01402175592
scale_histo_ZH_htt       = 0.0517626146839/0.0418699835469   # 1.23627024181
scale_histo_WH_htt_plus  = 0.155233292681/0.13501959996      # 1.14970932166
scale_histo_ggZH_hww     = 0.0260047673541/0.0191405906096   # 1.35861885793
scale_histo_qqH_hww      = 0.0123473458074/0.0113367284673   # 1.0891454129
scale_histo_ZZ           = 0.482985873193/0.406317249935     # 1.18869152927
scale_histo_ggH_hww      = 0.073170975305/0.0724227670066    # 1.01033112002
scale_histo_WH_htt_minus = 0.100533657238/0.0933534088816    # 1.07691468842
scale_histo_VVV          = 1.38782292345/1.35367244737       # 1.02522802038
scale_histo_WH_hww_plus  = 0.726340493052/0.707547382663     # 1.02656092136
scale_histo_ggH_htt      = 0.0/1                             # 0.0
scale_histo_ggH_htt      = 0.0/1                             # 0.0
scale_histo_ggWW         = 0.089605006043/0.0911263518739    # 0.983305094524
scale_histo_ZgS          = 0.951074186953/0.953410829908     # 0.99754917515
scale_histo_top          = 44.5715804726/32.0725083751       # 1.38971295763
scale_histo_WWewk        = 0.0277638808994/0.0232032545063   # 1.19655115156
scale_histo_ZH_hww       = 0.128885867784/0.115278399228     # 1.11804005476
scale_histo_WH_hww_minus = 0.445075508444/0.421163499332     # 1.05677607188
scale_histo_qqH_htt      = 0.00359856778426/0.00462458335033 # 0.778138809846


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
