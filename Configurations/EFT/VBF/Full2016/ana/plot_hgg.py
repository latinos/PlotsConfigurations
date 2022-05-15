
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
                  'samples'  : ['Fake']
}

groupPlot['VV']  = {  
                  'nameHR' : 'Multiboson',
                  'isSignal' : 0,
                  'color': 617,   # kViolet +1
                  'samples'  : ['VZ', 'Vg', 'VgS', 'VVV']
              }

groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY', 'Dyemb'],
                  'scale'    : 1,               
              }

# 3 puts signal on top of stack
# 2 hist only, included in ratio?
# 1 on top of stack and hist also, included in ratio?

#groupPlot['htt']  = {
#                  'nameHR' : 'htt',
#                  'isSignal' : 0,
#                  'color': 634,
#                  'samples'  : ['ggH_htt','qqH_htt','ZH_htt','WH_htt']
#              }
scale = 1.0

groupPlot['HSM_AC']  = {
                  'nameHR' : 'ggF h',
                  'isSignal' : 2,
                  'color': 632,
                  'scale'    : scale,
                  'samples'  : ['GGHjj_H0PM','ggH_htt']
              }

groupPlot['HBSM']  = {
                  'nameHR' : 'ggF 0^{-}',
                  'isSignal' : 2,
                  'color': 1,
                  'scale'    : scale,
                  'samples'  : ['GGHjj_H0M']
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

if useEmbeddedDY:
  plot['Dyemb']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }


plot['Fake']  = {
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
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }


plot['Vg']  = { 
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VgS'] = {
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

# Htautau

plot['ZH_htt'] = {
                  'nameHR' : 'ZHtt',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['WH_htt'] = {
                  'nameHR' : 'WHtt',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['qqH_htt'] = {
                  'nameHR' : 'qqHtt',
                  'color': 632+1, # kRed+1 
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['ggH_htt'] = {
                  'nameHR' : 'ggHtt',
                  'color': 632, # kRed 
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }
# HWW 

plot['GGHjj_H0PM']  =   {
                      'nameHR' : 'h',
                      'color' : 620+1,
                      'isSignal' : 2, 
                      'isData'   : 0,
                      'scale'    : scale,
                     }

plot['ZH_H0PM']  =   {
                      'nameHR' : 'ZH h',
                      'color' : 620+2,
                      'isSignal' : 0, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }

plot['WH_H0PM']  =   {
                      'nameHR' : 'WH h',
                      'color' : 620+3,
                      'isSignal' : 0, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }

plot['VBF_H0PM']  =   {
                      'nameHR' : 'VBF h',
                      'color' : 620+4,
                      'isSignal' : 0, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }


plot['GGHjj_H0M']  =   {
                      'nameHR' : '0^{-}',
                      'color' : 632+1,
                      'isSignal' : 2, 
                      'isData'   : 0,
                      'scale'    : scale,
                     }


plot['ZH_H0M']  =   {
                      'nameHR' : 'ZH 0^{-}',
                      'color' : 632+2,
                      'isSignal' : 2, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }

plot['WH_H0M']  =   {
                      'nameHR' : 'WH 0^{-}',
                      'color' : 632+3,
                      'isSignal' : 2, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }

plot['VBF_H0M']  =   {
                      'nameHR' : 'VBF 0^{-}',
                      'color' : 632+4,
                      'isSignal' : 2, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }


plot['H0PH']  =   {
                      'nameHR' : '0^{+}',
                      'color' : 632+1,
                      'isSignal' : 2, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }

plot['ZH_H0PH']  =   {
                      'nameHR' : 'ZH 0^{+}',
                      'color' : 632+2,
                      'isSignal' : 2, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }

plot['WH_H0PH']  =   {
                      'nameHR' : 'WH 0^{+}',
                      'color' : 632+3,
                      'isSignal' : 2, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }

plot['VBF_H0PH']  =   {
                      'nameHR' : 'VBF 0^{+}',
                      'color' : 632+4,
                      'isSignal' : 2, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }

#plot['H_hww'] = {
#                  'nameHR' : 'Hww',
#                  'color': 632, # kRed 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }


plot['ZH_hww'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['WH_hww'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['qqH_hww'] = {
                  'nameHR' : 'qqH',
                  'color': 632+1, # kRed+1 
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['ggH_hww'] = {
                  'nameHR' : 'ggH',
                  'color': 632, # kRed 
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 1
              }


# additional options

legend['lumi'] = 'L =  36.33/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'




