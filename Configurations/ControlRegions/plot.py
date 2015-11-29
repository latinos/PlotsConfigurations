# plot configuration

#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 0.9*1.0    # ele/mu trigger efficiency
              }


               
plot['Wjets']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 0.9*1.0    # ele/mu trigger efficiency                  
              }


              
plot['FakeQCD']  = {  
                  'color': 922,    # kGray + 2
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 0.9*1.0    # ele/mu trigger efficiency                  
              }



plot['ttbar'] = {   
                  'color': 400,   # kYellow 
                  'isSignal' : 0,
                  'isData'   : 0 ,
                  'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }


plot['top'] = {   
                  'color': 401,   # kYellow +1
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }


plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }


plot['WZ']  = { 
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }


plot['ZZ']  = {
                  'color': 854, # kAzure -6 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 0.9*1.0    # ele/mu trigger efficiency
                  }


plot['ggH'] = {
                  'nameHR' : 'ggH x 100',
                  'color': 632, # kRed 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 0.9*1.0*100    # ele/mu trigger efficiency
                  }


# data


plot['DATA']  = { 
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 
              }




# additional options

legend['lumi'] = 'L = 1.27/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'



