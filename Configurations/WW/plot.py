# plot configuration

#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0 
              }


plot['ttbar'] = {   
                  'color': 400,   # kYellow 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }


plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0    
                  }


plot['WZ']  = { 
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0 
                  }


plot['ZZ']  = {
                  'color': 854, # kAzure -6 
                  'isSignal' : 0,
                  'isData'   : 0    
                  }


plot['ggH'] = {
                  'color': 632, # kRed 
                  'isSignal' : 1,
                  'isData'   : 0    
                  }



# data


plot['DATA']  = { 
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 
              }




# additional options

legend['lumi'] = 'L = 40/pb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'



