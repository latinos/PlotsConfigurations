
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
                  'samples'  : ['VZ', 'Vg', 'VgS_L', 'VgS_H', 'VVV']
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
                  'nameHR' : 'ggH 0^{+}',
                  'isSignal' : 2,
                  'color': 632,
                  'scale'    : scale,
                  'samples'  : ['GGHjj_minlo_H0PM']#,'ggH_htt']
              }

groupPlot['HBSM']  = {
                  'nameHR' : 'ggH 0^{-}',
                  'isSignal' : 2,
                  'color': 1,
                  'scale'    : scale,
                  'samples'  : ['GGHjj_minlo_H0M']
              }

"""
groupPlot['VBFSM']  = {
                  'nameHR' : 'qqH',
                  'isSignal' : 0,
                  'color': 632+1,
                  'scale'    : scale,
                  'samples'  : ['qqH_hww','qqH_htt']
              }
"""

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

plot['qqH_hww'] = {
                  'nameHR' : 'qqH',
                  'color': 632, # kRed+1 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : scale    #
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
                  'isSignal' : 0,
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

plot['GGHjj_minlo_H0PM']  =   {
                      'nameHR' : 'h',
                      'color' : 620+1,
                      'isSignal' : 2, 
                      'isData'   : 0,
                      'scale'    : scale,
                     }

plot['GGHjj_minlo_H0M']  =   {
                      'nameHR' : '0^{-}',
                      'color' : 632+1,
                      'isSignal' : 2, 
                      'isData'   : 0,
                      'scale'    : scale,
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




