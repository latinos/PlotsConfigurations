# plot configuration

#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 0.9*1.0    # ele/mu trigger efficiency
              }


               
plot['Wjets']  = {  
		  'nameHR': 'W+jets',
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  #'scale'    : 0.9*1.0    # ele/mu trigger efficiency                  
              }


              
plot['Fake']  = {  
                  'color': 922,    # kGray + 2
                  'isSignal' : 0,
                  'isData'   : 0,
                  #'scale'    : 0.9*1.0    # ele/mu trigger efficiency                  
              }


plot['VVV']  = {
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  #'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }

plot['VV']  = {
                  'color': 854, # kAzure -6 
                  'isSignal' : 0,
                  'isData'   : 0,
               #   'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }


plot['WZ']  = {
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                 # 'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }


plot['ZZ']  = {
                  'color': 854, # kAzure -6 
                  'isSignal' : 0,
                  'isData'   : 0,
               #   'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }


plot['Wg']  = {
                  'color': 859, # kAzure -6 
                  'isSignal' : 0,
                  'isData'   : 0,
               #   'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }

plot['ttbar'] = { 
		  'nameHR': 't#bar{t}', 
                  'color': 400,   # kYellow 
                  'isSignal' : 0,
                  'isData'   : 0 ,
#                  'scale'    : 0.7427*1.0    # DD scale factor
                  }


plot['ST'] = {   
                  'nameHR' : 't and tW',
                  'color': 401,   # kYellow +1
                  'isSignal' : 0,
                  'isData'   : 0, 
#                  'scale'    : 0.7427*1.0    # DD scale factor
                  }


plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.137809,    # ele/mu trigger efficiency
                  }


plot['VV']  = {
                  'color': 858, # kAzure -6 
                  'isSignal' : 0,
                  'isData'   : 0,
               #   'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }


plot['WZ']  = { 
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                 # 'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }


plot['ZZ']  = {
                  'color': 854, # kAzure -6 
                  'isSignal' : 0,
                  'isData'   : 0,    
               #   'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }


plot['Wg']  = {
                  'color': 859, # kAzure -6 
                  'isSignal' : 0,
                  'isData'   : 0,
               #   'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }


plot['ggH'] = {
                  'nameHR' : 'ggH',
                  'color': 632, # kRed 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    # ele/mu trigger efficiency
                  }


# data


plot['DATA']  = {
                  'nameHR' : 'Data', 
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 
              }




# additional options

legend['lumi'] = 'L = 2.12/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'



