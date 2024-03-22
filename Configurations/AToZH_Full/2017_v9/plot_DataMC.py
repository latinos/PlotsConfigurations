# plot configuration
# groupPlot = {}
 
# Groups of samples to improve the plots.
# If not defined, normal plots is used

groupPlot['WZ']  = {  
                  'nameHR' : 'WZ',
                  'isSignal' : 0,
                  'color': 858, 
                  'samples'  : ['WZ']
              }
groupPlot['other Multi-Boson']  = {  
                  'nameHR' : 'other Multi-Boson',
                  'isSignal' : 0,
                  'color': 806, # kOrange + 6
                  'samples'  : ['VVV', 'ZZ', 'Zg', 'ZgS']
              }

groupPlot['Fake']  = {  
                  'nameHR' : 'Non-prompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake']
              }
groupPlot['Vh_hww'] = {
                     'nameHR' : 'SM hWW',
		     'isSignal' : 0,
		     'color': 6, 
                     'samples'  : ['Vh_hww']
}

groupPlot['ttV']  = {
  		   'nameHR' : 'ttV',
		   'color': 419,    # kGreen+3
		   'isSignal' : 0,
		   'samples' : ['ttZ', 'TTWJets']
}

groupPlot['other top']  = {
         'nameHR' : "other top",
         'isSignal' : 0,
         'color'    : 890,   # kViolet + 10  
         'samples'  : ['ttH_hww', 'tZq_ll', 'top']
      }

#Individual plots

plot['WZ']  = {
    'nameHR' : 'WZ',
    'color': 858, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
#    'scale'    : 1.44 #4j norm
}




plot['TTWJets']  = {
    'nameHR' : 'ttW',
    'color': 899, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}


plot['Vh_hww']  = {
    'nameHR' : 'Vh_hww',
    'color': 6, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
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


plot['top']  = {  
                  'nameHR' : 'top',
                  'isSignal' : 0,
                  'color': 806, # kOrange + 6
                  'isData' : 0,
                   'scale' : 1.0,
              }
plot['VVV']  = { 
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['ttZ']  = {
		  'color': 419,    # kGreen+3
		  'isSignal' : 0,
		  'isData'   : 0,
		  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

plot['ttH_hww']  = {
		  'color': 420,    # kGreen+3
		  'isSignal' : 0,
		  'isData'   : 0,
		  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

plot['tZq_ll']  = {
		  'color': 421,    # kGreen+3
		  'isSignal' : 0,
		  'isData'   : 0,
		  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}
plot['Fake']  = {  
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

# additional options

legend['lumi'] = 'L = 41.5/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
