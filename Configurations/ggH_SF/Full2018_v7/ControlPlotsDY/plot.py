# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['top']  = {  
    'nameHR' : 'tW and t#bar{t}',
    'isSignal' : 0,
    'color': 400,   # kYellow
    'samples'  : ['top']
}

groupPlot['WW']  = {  
    'nameHR' : 'WW',
    'isSignal' : 0,
    'color': 851, # kAzure -9 
    'samples'  : ['WW', 'ggWW', 'WWewk']
}

groupPlot['Fake']  = {
    'nameHR' : 'nonprompt',
    'isSignal' : 0,
    'color': 921,    # kGray + 1
    'samples'  : ['Fake_mm', 'Fake_ee', 'Fake_df']
}

groupPlot['DY']  = {  
    'nameHR' : "DY",
    'isSignal' : 0,
    'color': 418,    # kGreen+2
    'samples'  : ['DY']
}

groupPlot['VVV']  = {  
    'nameHR' : 'VVV',
    'isSignal' : 0,
    'color': 857, # kAzure -3  
    'samples'  : ['VVV']
}

groupPlot['VZ']  = {  
    'nameHR' : "VZ",
    'isSignal' : 0,
    'color'    : 617,   # kViolet + 1  
    'samples'  : ['VZ', 'WZ', 'ZZ']
}

groupPlot['Vg']  = {  
    'nameHR' : "V#gamma",
    'isSignal' : 0,
    'color'    : 810,   # kOrange + 10
    'samples'  : ['Vg', 'Wg']
}

groupPlot['VgS']  = {
    'nameHR' : "V#gamma*",
    'isSignal' : 0,
    'color'    : 409,   # kGreen - 9
    'samples'  : ['VgS_H','VgS_L']
}

groupPlot['Higgs']  = {  
    'nameHR' : 'Higgs',
    'isSignal' : 1,
    'color': 632, # kRed 
    'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww','bbH_hww','ttH_hww', 'qqH_htt', 'ggH_htt' ]
}

#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
    'color': 418,    # kGreen+2
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['Fake_mm']  = {  
    'color': 921,    # kGray + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0                  
}

plot['Fake_ee']  = {  
    'color': 921,    # kGray + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0                  
}

plot['Fake_df']  = {
    'color': 921,    # kGray + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}
              
plot['top'] = {   
    'nameHR' : 'tW and t#bar{t}',
    'color': 400,   # kYellow
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['WW']  = {
    'color': 851, # kAzure -9 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

plot['ggWW']  = {
    'color': 850, # kAzure -10
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1.0
}

plot['WWewk']  = {
    'color': 851, # kAzure -9 
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['Vg']  = { 
    'color': 859, # kAzure -1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VgS_H'] = { 
    'color'    : 617,   # kViolet + 1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VgS_L'] = {
    'color'    : 617,   # kViolet + 1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VZ']  = { 
    'color': 858, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VVV']  = { 
    'color': 857, # kAzure -3  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['ZH_hww'] = {
    'nameHR' : 'ZH',
    'color': 632+3, # kRed+3 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1    #
}

plot['ggZH_hww'] = {
    'nameHR' : 'ggZH',
    'color': 632+4, # kRed+4
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1    #
}

plot['WH_hww'] = {
    'nameHR' : 'WH',
    'color': 632+2, # kRed+2 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1    #
}

plot['qqH_hww'] = {
    'nameHR' : 'qqH',
    'color': 632+1, # kRed+1 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1    #
}

plot['ggH_hww'] = {
    'nameHR' : 'ggH',
    'color': 632, # kRed 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1    #
}

# data

plot['DATA']  = { 
    'nameHR' : 'Data',
    'color': 1 ,  
    'isSignal' : 0,
    'isData'   : 1 ,
    'isBlind'  : 0
}

# additional options

legend['lumi'] = 'L = 59.7/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'




