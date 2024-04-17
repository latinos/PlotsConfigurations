# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

# BTag normalization factors
# Cut = hww2l2v_13TeV_samesign_1j
scale_histo_ttH_hww      = 0.278463585073/0.198399064164     # 1.40355291617
scale_histo_WW           = 11.9240135473/11.8936383035       # 1.0025539068
scale_histo_DY           = 23.7998453643/24.13561201         # 0.986088330988
scale_histo_WZ           = 217.377574697/214.112860961       # 1.01524763025
scale_histo_Wg           = 192.104240751/188.453876959       # 1.01937006472
scale_histo_WgS          = 102.259372051/100.766688696       # 1.01481326194
scale_histo_ZH_htt       = 0.382145552294/0.366986989934     # 1.0413054489
scale_histo_WH_hww_minus = 3.97872061159/3.86678267178       # 1.0289485987
scale_histo_ggZH_hww     = 0.024401131945/0.0244469872582    # 0.99812429594
scale_histo_qqH_hww      = 0.0332415686758/0.0307787139725   # 1.08001811594
scale_histo_ZZ           = 19.0898027537/18.6698592152       # 1.02249312829
scale_histo_ggH_hww      = 0.390363058603/0.370950665958     # 1.0523314673
scale_histo_WH_htt_minus = 1.48038721595/1.44664552462       # 1.02332409064
scale_histo_VVV          = 7.16275029065/6.9746646703        # 1.0269669768
scale_histo_WH_hww_plus  = 6.57352403872/6.397406968         # 1.02752944616
scale_histo_ggH_htt      = 0.0964261129201/0.0961659672328   # 1.00270517414
scale_histo_qqH_htt      = 0.00592310688963/0.00504034422224 # 1.17513936122
scale_histo_ggWW         = 0.834000198004/0.824596610464     # 1.01140386393
scale_histo_ZgS          = 7.73643537408/7.69800467123       # 1.00499229404
scale_histo_top          = 88.7100329809/66.5443631655       # 1.33309612957
scale_histo_WWewk        = 0.0861724390405/0.0866167563057   # 0.994870308193
scale_histo_ZH_hww       = 0.966494221804/0.921496482209     # 1.04883115721
scale_histo_Zg           = 18.2835418169/18.0335635947       # 1.01386183163
scale_histo_WH_htt_plus  = 2.21316388717/2.18382148893       # 1.01343626225

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


# plot = {}

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
    'scale'    : scale_histo_WZ * 1.138 # NLO->NNLO k-factor!
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
#     'scale'    : 1.0,
# }

# plot['Fake_ee']  = {  
#     'color'    : 921,    # kGray + 1
#     'isSignal' : 0,
#     'isData'   : 0,
#     'scale'    : 1.0,
# }

# plot['Fake_mm']  = { 
#     'color'    : 921,    # kGray + 1
#     'isSignal' : 0,
#     'isData'   : 0,
#     'scale'    : 1.0,
# }

plot['Fake']  = { 
    'color'    : 921,    # kGray + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : scale_histo_DY,                  
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
