# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_1j
scale_histo_ttH_hww      = 0.645960719074/0.489319634195      # 1.32012017081
scale_histo_WW           = 0.221627122008/0.225379330479      # 0.983351585685
scale_histo_DY           = 27.3544775078/23.5067325226        # 1.16368693444
scale_histo_WZ           = 722.070081358/716.566611969        # 1.00768033187
scale_histo_Wg           = 0.0/1                              # 0.0
scale_histo_WgS          = 0.710087842293/0.711699783483      # 0.997735082646
scale_histo_ZH_htt       = 1.37625922962/1.35915496252        # 1.01258448637
scale_histo_WH_hww_minus = 0.791654241601/0.790021361161      # 1.00206688138
scale_histo_ggZH_hww     = 0.218323940327/0.215454720114      # 1.01331704505
scale_histo_qqH_hww      = 0.000410275872316/0.00043548047933 # 0.9421223035
scale_histo_ZZ           = 141.359351532/140.146386778        # 1.00865498413
scale_histo_ggH_hww      = 0.00348386599014/0.00348386599014  # 1.0
scale_histo_WH_htt_minus = 0.283209766915/0.27862645423       # 1.01644966806
scale_histo_VVV          = 10.1591940882/10.1249790236        # 1.00337927263
scale_histo_WH_hww_plus  = 1.26668107714/1.25683714289        # 1.00783230692
scale_histo_ggH_htt      = 0.0/1                              # 0.0
scale_histo_qqH_htt      = 0.00379935083794/0.00403252685479  # 0.942176202354
scale_histo_ggWW         = 0.0168164351893/0.0170486129502    # 0.986381428121
scale_histo_ZgS          = 33.8991848421/33.7916805742        # 1.0031813827
scale_histo_top          = 4.6780838878/3.14856433695         # 1.48578316565
scale_histo_WWewk        = 0.00556482676262/0.00546926964109  # 1.01747164206
scale_histo_ZH_hww       = 3.32473121988/3.2753136817         # 1.01508787951
scale_histo_Zg           = 58.2570110455/56.2180396662        # 1.03626898752
scale_histo_WH_htt_plus  = 0.448634894474/0.44505006683       # 1.00805488621


groupPlot['top']  = {  
    'nameHR'   : 'tW+ and t#bar{t}',
    'isSignal' : 0,
    'color'    : 400,   # kYellow
    'samples'  : ['top']
}

groupPlot['Fake']  = {  
    'nameHR'   : 'Non-prompt',
    'isSignal' : 0,
    'color'    : 921,    # kGray + 1
    'samples'  : ['Fake']
}

groupPlot['WW']  = {  
    'nameHR'   : 'WW',
    'isSignal' : 0,
    'color'    : 851, # kAzure -9 
    'samples'  : ['WW'] # , 'ggWW', 'WWewk']
}

groupPlot['VVV']  = {  
    'nameHR'   : 'VVV',
    'isSignal' : 0,
    'color'    : 857, # kAzure -3  
    'samples'  : ['VVV']
}

groupPlot['Zg']  = {
    'nameHR' : "Z#gamma",
    'isSignal' : 0,
    'color'    : 810,   # kOrange + 10
    'samples'  : ['Zg']
}

groupPlot['ZgS']  = {
    'nameHR' : "Z#gamma*",
    'isSignal' : 0,
    'color'    : 617,
    'samples'  : ['ZgS']
}

groupPlot['Wg']  = {
    'nameHR' : "W#gamma",
    'isSignal' : 0,
    'color'    : 859,
    'samples'  : ['Wg']
}

groupPlot['WgS']  = {
    'nameHR' : "W#gamma*",
    'isSignal' : 0,
    'color'    : 409,   # kGreen - 9
    'samples'  : ['WgS']
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

groupPlot['Higgs']  = {  
    'nameHR'   : 'Higgs',
    'isSignal' : 0,
    'color'    : 632, # kRed 
    'samples'  : ['ggH_hww','qqH_hww','ZH_hww','ggZH_hww','ttH_hww','ggH_hww','qqH_htt','ZH_htt']
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

plot['Wg']  = { 
    'color'    : 859, # kAzure -1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_Wg,
}

plot['Zg']  = {
    'color'    : 859, # kAzure -1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_Zg,
}

plot['WgS']  = { 
    'color'    : 859, # kAzure -1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_WgS,
}

plot['ZgS'] = { 
    'color'    : 617, # kViolet + 1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_ZgS,
}

plot['ZZ']  = { 
    'color'    : 858, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_ZZ,
}

plot['WZ']  = {
    'color'    : 858, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_WZ * 1.138, # NLO->NNLO k-factor!
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

plot['WH_hww_minus'] = {
    'color'    : 600, # kBlue 
    'isSignal' : 2,
    'isData'   : 0,    
    'scale'    : 10.0 * scale_histo_WH_hww_minus,
}

plot['WH_hww_plus'] = {
    'color'    : 632+2, # kRed+2 
    'isSignal' : 2,
    'isData'   : 0,    
    'scale'    : 10.0 * scale_histo_WH_hww_plus,
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
    'isSignal' : 1,
    'isData'   : 0,
    'scale'    : 10.0 * scale_histo_WH_htt_plus,
}

plot['WH_htt_minus'] = {
    'color'    : 632+2, # kRed+2
    'isSignal' : 1,
    'isData'   : 0,
    'scale'    : 10.0 * scale_histo_WH_htt_minus,
}


########
# Fake #
########

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
    'isBlind'  : 0
}


# Additional options

legend['lumi'] = 'L = 41.5 fb^{-1}'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
