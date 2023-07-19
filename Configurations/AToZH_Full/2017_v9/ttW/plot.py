# plot configuration
# groupPlot = {}
 
# Groups of samples to improve the plots.
# If not defined, normal plots is used

groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 806, # kOrange + 6
                  'samples'  : ['VVV']
              }

groupPlot['top']  = {  
                  'nameHR' : 'top',
                  'isSignal' : 0,
                  'color': 807, # kOrange + 6
                  'samples'  : ['top']
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
         'color'    : 881,   # kViolet + 1  
         'samples'  : ['ZZ']
      }

groupPlot['DY']  = {
                 'nameHR' : 'DY',
                 'color': 616, # kMagenta    
                 'isSignal' : 0,
                 'samples' : ['DY']
}
groupPlot['WZ']  = {
         'nameHR' : "WZ",
         'isSignal' : 0,
         'color'    : 400,   # Yellow
         'samples'  : ['WZ']
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

groupPlot['ttW']  = {
                   'nameHR' : 'ttW',
                   'color': 420,    # kGreen+3
                   'isSignal' : 0,
                   'samples' : ['TTWJets']
}



groupPlot['WW']  = {
         'nameHR' : "WW",
         'isSignal' : 0,
         'color'    : 890,   # kViolet + 10  
         'samples'  : ['WW', 'ggWW']
      }

groupPlot['Wg']  = {
         'nameHR' : "Wg",
         'isSignal' : 0,
         'color'    : 891,   # kViolet + 10  
         'samples'  : ['Wg']
}


groupPlot['WgS']  = {
         'nameHR' : "WgS",
         'isSignal' : 0,
         'color'    : 892,   # kViolet + 10  
         'samples'  : ['WgS']
}

#groupPlot['ZZTo2Q2L']  = {
#         'nameHR' : "ZZTo2Q2L",
#         'isSignal' : 0,
#         'color'    : 883,   # kViolet + 3  
#         'samples'  : ['ZZTo2Q2L']
#      }

#groupPlot['AZH_800_600'] = {
#          'nameHR' : "AZH_800_600",
#          'isSignal' : 1,
#          'color': 632,
#	  'isData'  : 0,
#}


#groupPlot['AZH_1200_1000'] = {
#          'nameHR' : "AZH_1200_1000",
#          'isSignal' : 1,
#	  'color': 632,
#          'isData'  : 0,
#}


#groupPlot['AZH_1200_850'] = {
#          'nameHR' : "AZH_1200_850",
#          'color': 632,
# 	  'isSignal' : 1,
#          'isData'  : 0,
#}
#groupPlot['AZH_500_350'] = {
#          'nameHR' : "AZH_500_350",
#          'color': 632,
# 	  'isSignal' : 1,
#          'isData'  : 0,
#}
#groupPlot['AZH_500_400'] = {
#          'nameHR' : "AZH_500_400",
#          'color': 632,
#	  'isSignal' : 1,
#          'isData'  : 0,
#}
#groupPlot['AZH_700_350'] = {
#          'nameHR' : "AZH_700_350",
#          'isSignal' : 1,
#	  'color': 632,
#          'isData'  : 0,
#}
#groupPlot['AZH_700_370'] = {
#          'nameHR' : "AZH_700_370",
#          'isSignal' : 1,
#	  'color': 632,
#          'isData'  : 0,
#}
#groupPlot['AZH_700_400'] = {
#          'nameHR' : "AZH_700_400",
#          'isSignal' : 1,
#	  'color': 632,
#          'isData'  : 0,
#}
#groupPlot['AZH_900_370'] = {
#          'nameHR' : "AZH_900_370",
#          'isSignal' : 1,
#	  'color': 632,
#          'isData'  : 0,
#}

#groupPlot['AZH_900_400'] = {
#          'nameHR' : "AZH_900_400",
#          'isSignal' : 1,
#          'color': 632,
#          'samples' : ['AZH_900_400']
#}

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


#plot['AZH_1200_1000'] = {
#          'nameHR' : "AZH_1200_1000",
#          'isSignal' : 1,
#	  'color': 632,
#          'isData'  : 0,
#}


#plot['AZH_1200_850'] = {
#          'nameHR' : "AZH_1200_850",
#          'color': 632,
# 	  'isSignal' : 1,
#          'isData'  : 0,
#}
#plot['AZH_500_350'] = {
#          'nameHR' : "AZH_500_350",
#          'color': 632,
# 	  'isSignal' : 1,
#          'isData'  : 0,
#}
#plot['AZH_500_400'] = {
#          'nameHR' : "AZH_500_400",
#          'color': 632,
#	  'isSignal' : 1,
#          'isData'  : 0,
#}
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
#plot['AZH_700_400'] = {
#          'nameHR' : "AZH_700_400",
#          'isSignal' : 1,
#	  'color': 632,
#          'isData'  : 0,
#}
#plot['AZH_900_370'] = {
#          'nameHR' : "AZH_900_370",
#          'isSignal' : 1,
#	  'color': 632,
#          'isData'  : 0,
#}

#plot['AZH_900_400'] = {
#          'nameHR' : "AZH_900_400",
#          'isSignal' : 1,
#	  'color': 632,
#          'isData'  : 0,
#}

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

plot['ttV']  = {
		  'color': 419,    # kGreen+3
		  'isSignal' : 0,
		  'isData'   : 0,
		  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

plot['TTWJets']  = {        
                  'color': 420,    # kGreen+3
                  'isSignal' : 0,
                  'isData'   : 0,
                   'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

plot['WW']  = {        
                  'color': 421,    # kGreen+3
                  'isSignal' : 0,
                  'isData'   : 0,
                   'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

plot['ggWW']  = {        
                  'color': 422,    # kGreen+3
                  'isSignal' : 0,
                  'isData'   : 0,
                   'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

plot['Wg']  = {        
                  'color': 423,    # kGreen+3
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

plot['WgS']  = {  
                  'color': 424,    # kGray + 1
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
