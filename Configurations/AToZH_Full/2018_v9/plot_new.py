# plot configuration
# groupPlot = {}
 
# Groups of samples to improve the plots.
# If not defined, normal plots is used

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

groupPlot['AZH']  = {  
                 'nameHR' : 'AZH',
                  'isSignal' : 1,
#                  'isSignal' :0, # to turn the overlay off
		  'color': 632, # kRed 
                 'scaleMultiplicativeOverlaid' : 10.0, #Turn on for SR plots
                  'samples'  : ['AZH']
              }

# Individual plots


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

plot['AZH'] = {
                  'nameHR' : 'AZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1
                  }



# additional options

legend['lumi'] = 'L = 41.5/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
