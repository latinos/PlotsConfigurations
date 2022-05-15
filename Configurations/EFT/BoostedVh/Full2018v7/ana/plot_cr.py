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
                  'scale' : 1.0,
                  'samples'  : ['top']
              }
plot['top'] = {   
                  'nameHR' : 'tW and t#bar{t}',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  }

groupPlot['WW']  = {  
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
		  'scale' : 1.0,
                  'samples'  : ['WW', 'ggWW', 'WWewk']
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
                  'scale'    : 1.0	   # ele/mu trigger efficiency   datadriven
                  }

groupPlot['Fake']  = {
                  'nameHR' : 'nonprompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake']
}
plot['Fake']  = {
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
              }        

groupPlot['VV']  = {  
                  'nameHR' : 'Multiboson',
                  'isSignal' : 0,
                  'color': 617,   # kViolet +1
                  'samples'  : ['VZ', 'WZ', 'ZZ', 'Vg', 'Wg', 'VgS', 'VVV']
              }
plot['Vg']  = { 
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
plot['Wg']  = {
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
plot['WZ']  = {
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
plot['ZZ']  = {
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY', 'Dyemb'],
                  'scale'    : 1.037,               
              }
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.037,
              }

if useEmbeddedDY:
  plot['Dyemb']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.037,
              }


# 3 puts signal on top of stack
# 2 hist only, included in ratio?
# 1 on top of stack and hist also, included in ratio?

groupPlot['HSM']  = {
                  'nameHR' : 'SM h',
                  'isSignal' : 0,
                  'color': 632,
                  'samples'  : ['H0PM','ZH_H0PM','WH_H0PM','VBF_H0PM','ggH_htt','qqH_htt','ZH_htt','WH_htt']
              }
#                  'samples'  : ['H0PM','ZH_H0PM','WH_H0PM','VBF_H0PM','ggH_htt','ZH_htt','WH_htt']

#plot = {}

# keys here must match keys in samples.py    
#                    

# Htautau


plot['ZH_htt'] = {
                  'nameHR' : 'ZHtt',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['WH_htt'] = {
                  'nameHR' : 'WHtt',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['qqH_htt'] = {
                  'nameHR' : 'qqHtt',
                  'color': 632+1, # kRed+1 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }
	

plot['ggH_htt'] = {
                  'nameHR' : 'ggHtt',
                  'color': 632, # kRed 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

# HWW 

plot['H0PM']  =   {
                      'nameHR' : 'h',
                      'color' : 620+1,
                      'isSignal' : 0, 
                      'isData'   : 0,
                      'scale'    : 1,
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

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
              }


# additional options

#legend['lumi'] = 'L =  36.33/fb'
#legend['lumi'] = 'L =  41.53/fb'
legend['lumi'] = 'L =  59.7/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'




