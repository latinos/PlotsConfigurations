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




groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 806, # kOrange + 6
                  'samples'  : ['VVV']
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


groupPlot['WZ']  = {
         'nameHR' : "WZ",
         'isSignal' : 0,
         'color'    : 400,   # Yellow
         'samples'  : ['WZ']
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


groupPlot['ZZ']  = {
         'nameHR' : "ZZ",
         'isSignal' : 0,
         'color'    : 617,   # kViolet + 1  
         'samples'  : ['ZZ']
      }


#groupPlot['AZH']  = {  
#                  'nameHR' : 'AZH',
##                  'isSignal' : 1,
#                  'isSignal' :0, # to turn the overlay off
#		  'color': 632, # kRed 
#                  'scaleMultiplicativeOverlaid' : 10.0, #Turn on for SR plots
#                  'samples'  : ['AZH']
#              }

# Individual plots


plot['DY']  = {
             'nameHR' : 'DY',
             'color': 858, # kAzure -2  
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
	    #'scale'    : 0.87 #1j norm
	   #'scale'    : 1.42 #2j norm
 }


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

#plot['AZH'] = {
#                  'nameHR' : 'AZH',
#                  'color': 632+3, # kRed+3 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1
#                  }


plot['DATA']  = {
                  'nameHR' : 'Data',
                  'color': 1 ,
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
                }


legend['lumi'] = 'L = 41.5/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
