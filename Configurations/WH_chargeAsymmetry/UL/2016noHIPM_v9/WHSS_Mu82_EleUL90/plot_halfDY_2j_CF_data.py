# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

# BTag normalization factors
# Cut = hww2l2v_13TeV_samesign_2j
scale_histo_ttH_hww      = 0.617010001941/0.446976799456     # 1.38040722179
scale_histo_WW           = 1.18766327892/1.11941960177       # 1.06096344663
scale_histo_DY           = 2.73201114062/0.608771954656      # 4.48774146004
scale_histo_Zg           = 1.52588834242/1.44067413887       # 1.05914883959
scale_histo_WZ           = 14.3395874219/14.5601910428       # 0.984848851212
scale_histo_Wg           = 14.1373403782/13.3726960287       # 1.05717952071
scale_histo_WgS          = 5.08787522305/4.79282588245       # 1.06156062161
scale_histo_ZH_htt       = 0.0461453275357/0.0465742645873   # 0.990790256048
scale_histo_ggZH_hww     = 0.0297800727078/0.0349759598491   # 0.851444044317
scale_histo_qqH_hww      = 0.0075359367047/0.0066903584339   # 1.12638758882
scale_histo_ZZ           = 0.495265502014/0.498023693388     # 0.994461726599
scale_histo_ggH_hww      = 0.0441757111415/0.0460026087971   # 0.960287085811
scale_histo_WH_htt_minus = 0.0941584918584/0.0962440831445   # 0.978330186979
scale_histo_VVV          = 1.01443537458/1.06235296784       # 0.9548948469
scale_histo_WH_hww_plus  = 0.649373521985/0.644823292629     # 1.0070565524
scale_histo_ggH_htt      = 0.0/1                             # 0.0
scale_histo_qqH_htt      = 0.0/1                             # 0.0
scale_histo_ggWW         = 0.072279298858/0.069415504322     # 1.04125583418
scale_histo_ZgS          = 1.15543489932/0.954033381473      # 1.21110531535
scale_histo_top          = 34.3826934095/25.3486171412       # 1.35639325877
scale_histo_WWewk        = 0.00912821559271/0.00909789799107 # 1.00333237432
scale_histo_ZH_hww       = 0.100156164997/0.0990130825874    # 1.01154476136
scale_histo_WH_hww_minus = 0.371555178345/0.369464620919     # 1.00565834266
scale_histo_WH_htt_plus  = 0.1320381988/0.133786809382       # 0.986929873051


# groupPlot['top']  = {  
#     'nameHR'   : 'tW+ and t#bar{t}',
#     'isSignal' : 0,
#     'color'    : 400,   # kYellow
#     'samples'  : ['top']
# }

# groupPlot['WW']  = {  
#     'nameHR'   : 'WW',
#     'isSignal' : 0,
#     'color'    : 851, # kAzure -9 
#     'samples'  : ['WW', 'ggWW', 'WWewk']
# }

# groupPlot['DY']  = {  
#     'nameHR'   : "DY",
#     'isSignal' : 0,
#     'color'    : 418,    # kGreen+2
#     'samples'  : ['DY']
# }

groupPlot['Fake']  = {  
    'nameHR'   : 'Non-prompt',
    'isSignal' : 0,
    'color'    : 921,    # kGray + 1
    'samples'  : ['Fake_mm','Fake_em','Fake_ee']
}

groupPlot['ChargeFlip']  = {
    'nameHR'   : "charge-flip",
    'isSignal' : 0,
    'color'    : 418,    # kGreen+2
    'samples'  : ['ChargeFlip']
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

plot['ChargeFlip']  = {  
    'color'    : 418,    # kGreen+2
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 0.5,
}

# plot['DY']  = {  
#     'color'    : 418,    # kGreen+2
#     'isSignal' : 0,
#     'isData'   : 0, 
#     'scale'    : scale_histo_DY,
# }

# plot['top'] = {   
#     'nameHR' : 'tW and t#bar{t}',
#     'color'    : 400,   # kYellow
#     'isSignal' : 0,
#     'isData'   : 0, 
#     'scale'    : scale_histo_top,
# }

# plot['WW']  = {
#     'color'    : 851, # kAzure -9 
#     'isSignal' : 0,
#     'isData'   : 0,    
#     'scale'    : scale_histo_WW,
# }

# plot['WWewk']  = {
#     'color'    : 850, # kAzure -10
#     'isSignal' : 0,
#     'isData'   : 0,
#     'scale'    : scale_histo_WWewk,
# }

# plot['ggWW']  = {
#     'color'    : 850, # kAzure -10
#     'isSignal' : 0,
#     'isData'   : 0,    
#     'scale'    : scale_histo_ggWW,
# }

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
    'isBlind'  : 0
}


# Additional options

legend['lumi'] = 'L = 16.8 fb^{-1}'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
