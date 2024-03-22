# plot configuration
# groupPlot = {}
 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
groupPlot['ttV']  = {
  		   'nameHR' : 'ttV',
		   'color': 419,    # kGreen+3
		   'isSignal' : 0,
		   'samples' : ['ttZ', 'TTWJets']
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




groupPlot['WZ'] = {
    'nameHR' : 'WZ',
    'isSignal' : 0,
    'color': 858,
    'samples'  : ['WZ']
}
groupPlot['other top']  = {
         'nameHR' : "other top",
         'isSignal' : 0,
         'color'    : 883,   # kViolet + 3  
         'samples'  : ['tZq_ll', 'ttH_hww', 'top']
      }


groupPlot['Other Multi-Boson']  = {  
                  'nameHR' : 'Other Multi-Boson',
                  'isSignal' : 0,
                  'color': 806, # kOrange + 6
                  'samples'  : ['VVV', 'ZZ']
              }


#groupPlot['AZH_1000_600'] = {
#          'nameHR' : "AZH_1000_600",
#          'color': 632,
# 	  'isSignal' : 2,
#	  'scaleMultiplicativeOverlaid' : 0,
#          'samples'  : ['AZH_1000_600'],
#}
#groupPlot['AZH_900_400'] = {
#          'nameHR' : "AZH_900_400",
#          'color': 632,
# 	  'isSignal' : 2,
#	  'scaleMultiplicativeOverlaid' : 0,
#          'samples'  : ['AZH_900_400'],
#}
#groupPlot['AZH_800_600'] = {
#          'nameHR' : "AZH_800_600",
#          'color': 632,
# 	  'isSignal' : 2,
#	  'scaleMultiplicativeOverlaid' : 0,
#          'samples'  : ['AZH_800_600'],
#}
groupPlot['AZH_500_350'] = {
          'nameHR' : "AZH_500_350",
          'color': 632,
 	  'isSignal' : 2,
	  'scaleMultiplicativeOverlaid' : 0,
	  'samples' : ['AZH_500_350'],
}

# Individual plots

#plot['AZH_1000_600'] = {
#          'nameHR' : "AZH_1000_600",
#          'color': 632,
# 	  'isSignal' : 2,
#	  'scale'    : 0.00908, # scaled by theory xsec
#          'isData'  : 0,
#}
#plot['AZH_900_400'] = {
#          'nameHR' : "AZH_900_400",
#          'color': 632,
# 	  'isSignal' : 2,
#	  'scale'    : 0.020509, # scaled by theory xsec
#          'isData'  : 0,
#}
#plot['AZH_800_600'] = {
#          'nameHR' : "AZH_800_600",
#          'color': 632,
# 	  'isSignal' : 2,
#	  'scale'    : 0.01164675, # scaled by theory xsec
#          'isData'  : 0,
#}
plot['AZH_500_350'] = {
          'nameHR' : "AZH_500_350",
          'color': 632,
	  'scale'    : 0.07915,
 	  'isSignal' : 2,
          'isData'  : 0,
}
plot['WZ']  = {
    'nameHR' : 'WZ',
    'color': 858, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    #'scale'    : 1.0
    'scale'    : 1.44 #4j norm
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




plot['DATA']  = {
                  'nameHR' : 'Data',
                  'color': 1 ,
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 1 
                }

# additional options

legend['lumi'] = 'L = 41.5/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
