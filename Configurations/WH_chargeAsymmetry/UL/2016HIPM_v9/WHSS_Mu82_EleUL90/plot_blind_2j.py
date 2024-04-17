# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
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


groupPlot['top']  = {  
    'nameHR'   : 'tW+ and t#bar{t}',
    'isSignal' : 0,
    'color'    : 400,   # kYellow
    'samples'  : ['top']
}

groupPlot['WW']  = {  
    'nameHR'   : 'WW',
    'isSignal' : 0,
    'color'    : 851, # kAzure -9 
    'samples'  : ['WW', 'ggWW', 'WWewk']
}

groupPlot['Fake']  = {  
    'nameHR'   : 'Non-prompt',
    'isSignal' : 0,
    'color'    : 921,    # kGray + 1
    'samples'  : ['Fake_mm','Fake_em','Fake_ee']
}

groupPlot['DY']  = {  
    'nameHR'   : "DY",
    'isSignal' : 0,
    'color'    : 418,    # kGreen+2
    'samples'  : ['DY']
}

groupPlot['VVV']  = {  
    'nameHR'   : 'VVV',
    'isSignal' : 0,
    'color'    : 857, # kAzure -3  
    'samples'  : ['VVV']
}

groupPlot['ZZ']  = {  
    'nameHR'   : "ZZ",
    'isSignal' : 0,
    'color'    : 617,   # kViolet + 1  
    'samples'  : ['ZZ']
}

groupPlot['WZ']  = {    
    'nameHR'   : "WZ",
    'isSignal' : 0,
    'color'    : 619,   # kViolet + 1  
    'samples'  : ['WZ']
}

# groupPlot['Vg']  = {  
#     'nameHR'   : "V#gamma",
#     'isSignal' : 0,
#     'color'    : 810,   # kOrange + 10
#     'samples'  : ['Wg','Zg']
# }

groupPlot['Zg']  = {
    'nameHR' : "Z#gamma",
    'isSignal' : 0,
    'color'    : 810,   # kOrange + 10
    'samples'  : ['Zg']
}

groupPlot['Wg']  = {
    'nameHR' : "W#gamma",
    'isSignal' : 0,
    'color'    : 859,
    'samples'  : ['Wg']
}

# groupPlot['VgS']  = {
#     'nameHR'   : "V#gamma*",
#     'isSignal' : 0,
#     'color'    : 412,   # kGreen - 9
#     'samples'  : ['ZgS','WgS']
# }

groupPlot['WgS']  = {
    'nameHR' : "W#gamma*",
    'isSignal' : 0,
    'color'    : 409,   # kGreen - 9
    'samples'  : ['WgS']
}

groupPlot['ZgS']  = {
    'nameHR' : "Z#gamma*",
    'isSignal' : 0,
    'color'    : 617,
    'samples'  : ['ZgS']
}

groupPlot['Higgs']  = {  
    'nameHR'   : 'Higgs',
    'isSignal' : 0,
    'color'    : 632, # kRed 
    'samples'  : ['ggH_hww','qqH_hww','ZH_hww','ggZH_hww','ttH_hww','ggH_htt','qqH_htt','ZH_htt']
}

groupPlot['WH_minus']  = {  
    'nameHR'   : 'W^{-} H (x 10)',
    'isSignal' : 2,
    'color'    : 600, # kBlue 
    'samples'  : ['WH_hww_minus','WH_htt_minus']
}

groupPlot['WH_plus']  = {  
    'nameHR'   : 'W^{+} H (x 10)',
    'isSignal' : 2,
    'color'    : 632, # kRed 
    'samples'  : ['WH_hww_plus', 'WH_htt_plus']
}


#plot = {}

# keys here must match keys in samples.py    
#     
plot['DY']  = {  
    'color'    : 418,    # kGreen+2
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : scale_histo_DY,
}

plot['top'] = {   
    'nameHR' : 'tW and t#bar{t}',
    'color'    : 400,   # kYellow
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : scale_histo_top,
}

plot['WW']  = {
    'color'    : 851, # kAzure -9 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : scale_histo_WW,
}

plot['WWewk']  = {
    'color'    : 850, # kAzure -10
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_WWewk,
}

plot['ggWW']  = {
    'color'    : 850, # kAzure -10
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : scale_histo_ggWW,
}

plot['Zg']  = {
    'color'    : 859, # kAzure -1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_Zg,
}

plot['Wg']  = { 
    'color'    : 859, # kAzure -1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_Wg,
}

plot['ZgS'] = { 
    'color'    : 617, # kViolet + 1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_ZgS,
}

plot['WgS']  = { 
    'color'    : 859, # kAzure -1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_WgS,
}

plot['WZ']  = {
    'color'    : 858, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_WZ * 1.138, # NLO -> NNLO k-factor!
}

plot['ZZ']  = { 
    'color'    : 858, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_ZZ,
}

plot['VVV']  = { 
    'color'    : 857, # kAzure -3  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_VVV,
}

###########
# Signals #
###########

# HWW 

plot['ggH_hww'] = {
    'color'    : 632, # kRed 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : scale_histo_ggH_hww,
}

plot['qqH_hww'] = {
    'color'    : 632+1, # kRed+1 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : scale_histo_qqH_hww,
}

plot['ZH_hww'] = {
    'color'    : 632+3, # kRed+3 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : scale_histo_ZH_hww,
}

plot['ggZH_hww'] = {
    'color'    : 632+4, # kRed+4
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : scale_histo_ggZH_hww,
}

plot['WH_hww_plus'] = {
    'color'    : 632+2, # kRed+2 
    'isSignal' : 2,
    'isData'   : 0,    
    'scale'    : 10.0 * scale_histo_WH_hww_plus,
}

plot['WH_hww_minus'] = {
    'color'    : 600, # kBlue 
    'isSignal' : 2,
    'isData'   : 0,    
    'scale'    : 10.0 * scale_histo_WH_hww_minus,
}

plot['ttH_hww'] = {
    'color'    : 632+3, # kRed+3 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : scale_histo_ttH_hww,
}


# Htautau

plot['ggH_htt'] = {
    'color'    : 632, # kRed 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : scale_histo_ggH_htt,
}

plot['qqH_htt'] = {
    'color'    : 632+1, # kRed+1 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : scale_histo_qqH_htt,
}

plot['ZH_htt'] = {
    'color'    : 632+3, # kRed+3 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : scale_histo_ZH_htt,
}

plot['WH_htt_plus'] = {
    'color'    : 632+2, # kRed+2 
    'isSignal' : 2,
    'isData'   : 0,    
    'scale'    : 10.0 * scale_histo_WH_htt_plus,
}

plot['WH_htt_minus'] = {
    'color'    : 632+2, # kRed+2 
    'isSignal' : 2,
    'isData'   : 0,    
    'scale'    : 10.0 * scale_histo_WH_htt_minus,
}


########
# Fake #
########

plot['Fake_em']  = {  
    'color'    : 921,    # kGray + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0                  
}

plot['Fake_ee']  = {  
    'color'    : 921,    # kGray + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0                  
}

plot['Fake_mm']  = { 
    'color'    : 921,    # kGray + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0                  
}

# plot['Fake']  = { 
#     'color'    : 921,    # kGray + 1
#     'isSignal' : 0,
#     'isData'   : 0,
#     'scale'    : 1.0                  
# }

########
# Data #
########

plot['DATA']  = { 
    'nameHR'   : 'Data',
    'color'    : 1 ,  
    'isSignal' : 0,
    'isData'   : 1,
    'isBlind'  : 1,
}


# Additional options

legend['lumi'] = 'L = 19.5 fb^{-1}'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
