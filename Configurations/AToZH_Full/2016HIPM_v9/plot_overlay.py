# plot configuration
# groupPlot = {}
 
# Groups of samples to improve the plots.
# If not defined, normal plots is used


groupPlot['WZ']  = {
         'nameHR' : "WZ",
         'isSignal' : 0,
         'color'    : 400,   # Yellow
         'samples'  : ['WZ', 'WZ_had']
}
groupPlot['Fake']  = {  
                  'nameHR' : 'Non-prompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake']
              }
groupPlot['ttV']  = {
  		   'nameHR' : 'ttV',
		   'color': 419,    # kGreen+3
		   'isSignal' : 0,
		   'samples' : ['ttV']
}


groupPlot['tZq_ll']  = {
         'nameHR' : "tZq_ll",
         'isSignal' : 0,
         'color'    : 883,   # kViolet + 3  
         'samples'  : ['tZq_ll']
      }

#groupPlot['AZH_800_600'] = {
#          'nameHR' : "AZH_800_600",
#          'isSignal' : 1,
#          'color': 632,
#	  'samples' : ['AZH_800_600']
#}

#groupPlot['AZH_1000_600'] = {
#          'nameHR' : "AZH_1000_600",
#          'isSignal' : 1,
#          'color': 632,
#	  'samples' : ['AZH_1000_600']
#}

#groupPlot['AZH_1200_1000'] = {
#          'nameHR' : "AZH_1200_1000",
#          'isSignal' : 1,
#	  'color': 632,
#          'samples' : ['AZH_1000_600']
#}


#groupPlot['AZH_1200_850'] = {
#          'nameHR' : "AZH_1200_850",
#          'color': 632,
# 	  'isSignal' : 1,
#          'samples' : ['AZH_1200_850']
#}
#groupPlot['AZH_500_350'] = {
#          'nameHR' : "AZH_500_350",
#          'color': 632,
# 	  'isSignal' : 1,
#          'samples' : ['AZH_500_350']
#}
groupPlot['AZH_500_400'] = {
          'nameHR' : "AZH_500_400",
          'color': 632,
	  'isSignal' : 1,
          'samples' : ['AZH_500_400']
}
#groupPlot['AZH_700_350'] = {
#          'nameHR' : "AZH_700_350",
#          'isSignal' : 1,
#	  'color': 632,
#          'samples' : ['AZH_700_350']
#}
#groupPlot['AZH_700_370'] = {
#          'nameHR' : "AZH_700_370",
#          'isSignal' : 1,
#	  'color': 632,
#          'samples' : ['AZH_700_370']
#}
groupPlot['AZH_700_400'] = {
          'nameHR' : "AZH_700_400",
          'isSignal' : 0,
	  'color': 1,
          'samples' : ['AZH_700_400']
}
#groupPlot['AZH_900_370'] = {
#          'nameHR' : "AZH_900_370",
#          'isSignal' : 1,
#	  'color': 632,
#          'samples' : ['AZH_900_370']
#}

groupPlot['AZH_900_400'] = {
          'nameHR' : "AZH_900_400",
          'isSignal' : 0,
          'color': 9,
          'samples' : ['AZH_900_400']
}

#plot['ZZTo4L']  = {
#groupPlot['AZH']  = {  
#                  'nameHR' : 'AZH',
#                  'isSignal' : 1,
##                  'isSignal' :0, # to turn the overlay off
#		  'color': 632, # kRed 
##                  'scaleMultiplicativeOverlaid' : 10.0, #Turn on for SR plots
 #                 'samples'  : ['AZH_800_600', 'AZH_1200_1000', 'AZH_1200_850', 'AZH_500_350', 'AZH_500_400', 'AZH_700_350', 'AZH_700_370', 'AZH_700_400', 'AZH_900_370', 'AZH_900_400']
#              }

# Individual plots

#plot['AZH_800_600'] = {
#          'nameHR' : "AZH_800_600",
#          'isSignal' : 1,
#          'color': 632,
#	  'isData'  : 0,
#}


#plot['AZH_1000_600'] = {
#          'nameHR' : "AZH_1000_600",
#          'isSignal' : 1,
#          'color': 632,
#	  'isData'  : 0,
#}
#plot['AZH_1200_1000'] = {
#          'nameHR' : "AZH_1200_1000",
#          'isSignal' : 1,
#	  'color': 632,
#          'isData'  : 0,
#}


#plot['AZH_1200_850'] = {
#          'nameHR' : "AZH_1200_850",
#          'color': 632,
#	  'isSignal' : 1,
#          'isData'  : 0,
#}
#plot['AZH_500_350'] = {
#          'nameHR' : "AZH_500_350",
#          'color': 632,
# 	  'isSignal' : 1,
#          'isData'  : 0,
#}
plot['AZH_500_400'] = {
          'color': 632,
	  'isSignal' : 1,
          'isData'  : 0,
}
#plot['AZH_700_350'] = {
#          'nameHR' : "AZH_700_350",
#          'isSignal' : 1,
#	  'color': 632,
#          'isData'  : 0,
#}
#plot['AZH_700_370'] = {
#          'nameHR' : "AZH_700_370",
#          'isSignal' : 1,
#	  'color': 632,
#          'isData'  : 0,
#}
plot['AZH_700_400'] = {
          'isSignal' : 0,
	  'color': 632,
          'isData'  : 0,
}
#plot['AZH_900_370'] = {
#          'nameHR' : "AZH_900_370",
#          'isSignal' : 1,
#	  'color': 632,
#          'isData'  : 0,
#}

plot['AZH_900_400'] = {
          'isSignal' : 0,
	  'color': 632,
          'isData'  : 0,
}

#plot['ZZTo4L']  = {
#         'nameHR' : "ZZTo4L",
#         'isSignal' : 0,
#         'color'    : 881,   # kViolet + 1  
#         'isData'  : 0,
#         'scale'   : 1.0
#      }



#plot['ZZTo2L2Nu']  = {
#         'nameHR' : "ZZTo2L2Nu",
#         'isSignal' : 0,
#         'color'    : 890,   # kViolet + 10  
#         'isData'  : 0,
#         'scale'   : 1.0
#      }


#plot['ZZTo2Q2L']  = {
#         'nameHR' : "ZZTo2Q2L",
#         'isSignal' : 0,
#         'color'    : 883,   # kViolet + 3  
#         'isData'  : 0,
#         'scale'   : 1.0
#      }


plot['WZ']  = {
    'color': 858, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
	    #'scale'    : 0.87 #1j norm
	   #'scale'    : 1.42 #2j norm
}



plot['WZ_had']  = {
    'color': 858, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
	    #'scale'    : 0.87 #1j norm
	   #'scale'    : 1.42 #2j norm
}


plot['ttV']  = {
		  'color': 419,    # kGreen+3
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

# additional options

legend['lumi'] = 'L = 41.5/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
