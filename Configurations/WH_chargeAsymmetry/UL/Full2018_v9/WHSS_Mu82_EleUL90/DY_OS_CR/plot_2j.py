# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
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
    'samples'  : ['Fake'],
    # 'samples'  : ['Fake_mm','Fake_em','Fake_ee']
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

# plot['Fake_em']  = {  
#     'color'    : 921,    # kGray + 1
#     'isSignal' : 0,
#     'isData'   : 0,
#     'scale'    : 1.0                  
# }

# plot['Fake_ee']  = {  
#     'color'    : 921,    # kGray + 1
#     'isSignal' : 0,
#     'isData'   : 0,
#     'scale'    : 1.0                  
# }

# plot['Fake_mm']  = { 
#     'color'    : 921,    # kGray + 1
#     'isSignal' : 0,
#     'isData'   : 0,
#     'scale'    : 1.0                  
# }

plot['Fake']  = { 
    'color'    : 921,    # kGray + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0                  
}

########
# Data #
########

plot['DATA']  = { 
    'nameHR'   : 'Data',
    'color'    : 1 ,  
    'isSignal' : 0,
    'isData'   : 1,
    'isBlind'  : 0,
}


# Additional options

legend['lumi'] = 'L = 59.8 fb^{-1}'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
