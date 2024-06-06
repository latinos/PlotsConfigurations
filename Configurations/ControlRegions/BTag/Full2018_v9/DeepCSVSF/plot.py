# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#
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
    'samples'  : ['Fake']
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
    'scale'    : 1.0,
}

plot['top'] = {   
    'nameHR' : 'tW and t#bar{t}',
    'color'    : 400,   # kYellow
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['WW']  = {
    'color'    : 851, # kAzure -9 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1.0
}

plot['WWewk']  = {
    'color'    : 850, # kAzure -10
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['ggWW']  = {
    'color'    : 850, # kAzure -10
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1.0
}

plot['Zg']  = {
    'color'    : 859, # kAzure -1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['Wg']  = { 
    'color'    : 859, # kAzure -1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['ZgS'] = { 
    'color'    : 617, # kViolet + 1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['WgS']  = { 
    'color'    : 859, # kAzure -1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['WZ']  = {
    'color'    : 858, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.138 # NLO -> NNLO k-factor!
}

plot['ZZ']  = { 
    'color'    : 858, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VVV']  = { 
    'color'    : 857, # kAzure -3  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

###########
# Signals #
###########

# HWW 

plot['ggH_hww'] = {
    'color'    : 632, # kRed 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1
}

plot['qqH_hww'] = {
    'color'    : 632+1, # kRed+1 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1
}

plot['ZH_hww'] = {
    'color'    : 632+3, # kRed+3 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1
}

plot['ggZH_hww'] = {
    'color'    : 632+4, # kRed+4
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1
}

plot['WH_hww_plus'] = {
    'color'    : 632+2, # kRed+2 
    'isSignal' : 2,
    'isData'   : 0,    
    'scale'    : 10
}

plot['WH_hww_minus'] = {
    'color'    : 600, # kBlue 
    'isSignal' : 2,
    'isData'   : 0,    
    'scale'    : 10
}

plot['ttH_hww'] = {
    'color'    : 632+3, # kRed+3 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1
}


# Htautau

plot['ggH_htt'] = {
    'color'    : 632, # kRed 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1
}

plot['qqH_htt'] = {
    'color'    : 632+1, # kRed+1 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1
}

plot['ZH_htt'] = {
    'color'    : 632+3, # kRed+3 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1
}

plot['WH_htt_plus'] = {
    'color'    : 632+2, # kRed+2 
    'isSignal' : 2,
    'isData'   : 0,    
    'scale'    : 10
}

plot['WH_htt_minus'] = {
    'color'    : 632+2, # kRed+2 
    'isSignal' : 2,
    'isData'   : 0,    
    'scale'    : 10
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
    'isBlind'  : 1
}


# Additional options

legend['lumi'] = 'L = 59.8 fb^{-1}'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
