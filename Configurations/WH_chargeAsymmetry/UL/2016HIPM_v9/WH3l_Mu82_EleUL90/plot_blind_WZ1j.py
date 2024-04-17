# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

# BTag normalization factors
# Cut = wh3l_13TeV_wz_CR_1j
scale_histo_ttH_hww      = 0.312969685421/0.247099779017       # 1.26657209758
scale_histo_WW           = 0.222681825873/0.231135032091       # 0.96342741236
scale_histo_DY           = 8.48599640578/11.2464559412         # 0.754548495112
scale_histo_Zg           = 33.4159597129/31.4848824419         # 1.06133347566
scale_histo_WZ           = 326.14228463/321.737033107          # 1.01369208723
scale_histo_Wg           = 0.0/1                               # 0.0
scale_histo_WgS          = 0.396639830493/0.377679939405       # 1.05020094824
scale_histo_ZH_htt       = 0.647211182617/0.603269162892       # 1.07283982413
scale_histo_WH_htt_plus  = 0.204551232709/0.201160841494       # 1.0168541312
scale_histo_ggZH_hww     = 0.955085797014/0.912647853478       # 1.04649980096
scale_histo_qqH_hww      = 0.000729842313993/0.000714512473071 # 1.02145496615
scale_histo_ZZ           = 16.3879343788/15.2592464253         # 1.07396747664
scale_histo_ggH_hww      = 0.0/1                               # 0.0
scale_histo_WH_htt_minus = 0.132129838082/0.130875360742       # 1.00958528276
scale_histo_VVV          = 4.31255531288/4.04889273743         # 1.06511967408
scale_histo_WH_hww_plus  = 0.546340912106/0.546504137349       # 0.999701328441
scale_histo_ggH_htt      = 0.0/1                               # 0.0
scale_histo_ggWW         = 0.00795074060998/0.00781932711513   # 1.01680624086
scale_histo_ZgS          = 15.464172469/14.6842166217          # 1.0531152507
scale_histo_top          = 3.10353203795/2.4256136133          # 1.2794832701
scale_histo_WWewk        = 0.0/1                               # 0.0
scale_histo_ZH_hww       = 1.49378402302/1.44097072589         # 1.03665119366
scale_histo_WH_hww_minus = 0.363050698017/0.353255918697       # 1.02772714851
scale_histo_qqH_htt      = 0.0/1                               # 0.0


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
    'isBlind'  : 1,
}


# Additional options

legend['lumi'] = 'L = 19.5 fb^{-1}'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
