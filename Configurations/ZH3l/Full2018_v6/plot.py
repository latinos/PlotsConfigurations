# plot configuration
# groupPlot = {}
 
# Groups of samples to improve the plots.
# If not defined, normal plots is used

groupPlot['DY']  = {
  		   'nameHR' : 'DY',
		   'color': 616, # kMagenta    
		   'isSignal' : 0,
		   'samples' : ['DY']
}

groupPlot['WW']  = {
  		   'nameHR' : 'WW',
		   'color': 632,    # kRed
		   'isSignal' : 0,
		   'samples' : ['WW']
}

groupPlot['Zg']  = {
                  'nameHR' : 'Zg',
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'samples'  : ['Zg']
                  }

groupPlot['ZgS']  = {
                  'nameHR' : 'ZgS',
                  'color': 432, # kCyan  
                  'isSignal' : 0,
                  'samples'  : ['ZgS']
                  }

groupPlot['WZ']  = {
                  'nameHR' : "WZ",
                  'isSignal' : 0,
                  'color'    : 400,   # Yellow
                  'samples'  : ['WZ']
              }

groupPlot['ZZ']  = {
                  'nameHR' : "ZZ",
                  'isSignal' : 0,
                  'color'    : 617,   # kViolet + 1  
                  'samples'  : ['ZZ']
              }

groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 806, # kOrange + 6
                  'samples'  : ['VVV']
              }


groupPlot['top']  = {
  		   'nameHR' : 'top',
		   'color': 416,    # kGreen
		   'isSignal' : 0,
		   'samples' : ['top']
}

groupPlot['ttV']  = {
  		   'nameHR' : 'ttV',
		   'color': 419,    # kGreen+3
		   'isSignal' : 0,
		   'samples' : ['ttV']
}

groupPlot['Fake']  = {  
                  'nameHR' : 'Non-prompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake_e', 'Fake_m']
              }

groupPlot['Higgs']  = {  
                  'nameHR' : 'Higgs',
                  'isSignal' : 1,
                  'color': 632, # kRed
                  'scaleMultiplicativeOverlaid' : 10.0,
                  'samples'  : ['WH_hww', 'ZH_hww', 'ggZH_hww', 'ZH_htt', 'WH_htt', 'ttH_hww']
              }

# Individual plots

plot['DY']  = { 
                  'nameHR' : 'DY',
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['WW']  = { 
                  'nameHR' : 'WW',
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

#plot['WWewk']  = { 
#                  'nameHR' : 'WWewk',
#                  'color': 858, # kAzure -2  
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0
#                  }

#plot['ggWW']  = { 
#                  'nameHR' : 'ggWW',
#                  'color': 858, # kAzure -2  
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0
#                  }

plot['Zg']  = { 
                  'nameHR' : 'Zg',
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['ZgS']  = { 
                  'nameHR' : 'ZgS',
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['WZ']  = { 
                  'nameHR' : 'WZ',
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  #'scale'    : 0.89 #1j norm
                  #'scale'    : 1.22 #2j norm
                  }

plot['ZZ']  = { 
                  'nameHR' : 'ZZ',
                  'color': 856, # kAzure -4  
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

plot['top']  = {
		  'color': 419,    # kGreen+3
		  'isSignal' : 0,
		  'isData'   : 0,
		  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

plot['ttV']  = {
		  'color': 419,    # kGreen+3
		  'isSignal' : 0,
		  'isData'   : 0,
		  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

plot['Fake_e']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['Fake_m']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['ttH_hww'] = {
                  'nameHR' : 'ttH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1
                  }

plot['ZH_hww'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1
                  }

plot['ggZH_hww'] = {
                  'nameHR' : 'ggZH',
                  'color': 632+4, # kRed+4
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1
                  }

plot['WH_hww'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1
                  }

plot['WH_htt'] = {
                  'nameHR' : 'WH htt',
                  'color': 632+1, # kRed+4 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1
                  }

plot['ZH_htt'] = {
                  'nameHR' : 'ZH htt',
                  'color': 632+1, # kRed+4 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1
                  }

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
