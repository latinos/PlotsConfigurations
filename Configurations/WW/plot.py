# plot configuration

#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }


               
plot['Wjets']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }



               
plot['Fake']  = {  
                  'nameHR' : 'Non-prompt',
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

              
plot['FakeQCD']  = {  
                  'color': 922,    # kGray + 2
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }



plot['ttbar'] = {   
                  'nameHR' : 't#bart',
                  'color': 400,   # kYellow 
                  'isSignal' : 0,
                  'isData'   : 0 ,
                  'scale'    : 1.0
                  }


plot['singletop'] = {   
                  'nameHR' : 't and tW',
                  'color': 401,   # kYellow +1
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
                  }

plot['top'] = {   
                  'nameHR' : 'Top-quark',#'tW and t#bart',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0 #0jet:0.90, 1jet:0.87 #0jet blind: 0.91, 1jet blind: 0.95
                  }


plot['ggWW_Int']  = {
                  'color': 616, # kMagenta
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }

plot['Wg']  = { 
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['Vg']  = { 
                  'nameHR' : 'V#gamma', 
                  'color': 616, #kViolet #859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

################################################################
# VVV + VZ + Vgs

plot['VgS']  = { 
                  #'color': 603, # kBlue + 3
                  'nameHR' : '',
                  'color'    : 797,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VZ']  = { 
                  'nameHR' : 'VZ/VVV',
                  'color': 797, #kOrange -3  858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VVV']  = { 
                  #'color': 857, # kAzure -3  
                  'nameHR' : '',
                  'color'    : 797,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

################################################################

plot['WZ']  = { 
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['ZZ']  = { 
                  'color': 856, # kAzure -4  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


plot['ZZ']  = {
                  'color': 854, # kAzure -6 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }



# Htautau

# plot['H_htt'] = {
#                   'nameHR' : 'Htt',
#                   'color': 632+4, # kRed+4 
#                   'isSignal' : 0,
#                   'isData'   : 0,    
#                   'scale'    : 1    #
#                   }

# HWW 

# plot['H_hww'] = {
#                   'nameHR' : 'Hww',
#                   'color': 632, # kRed 
#                   'isSignal' : 0,
#                   'isData'   : 0,    
#                   'scale'    : 1    #
#                   }

# plot['ZH_hww'] = {
#                   'nameHR' : 'ZH',
#                   'color': 632+3, # kRed+3 
#                   'isSignal' : 0,
#                   'isData'   : 0,    
#                   'scale'    : 1    #
#                   }

# plot['ggZH_hww'] = {
#                   'nameHR' : 'ggZH',
#                   'color': 632+4, # kRed+4
#                   'isSignal' : 0,
#                   'isData'   : 0,    
#                   'scale'    : 1    #
#                   }

# plot['WH_hww'] = {
#                   'nameHR' : 'WH',
#                   'color': 632+2, # kRed+2 
#                   'isSignal' : 0,
#                   'isData'   : 0,    
#                   'scale'    : 1    #
#                   }


plot['qqH_hww'] = {
                  'nameHR' : 'Higgs',
                  'color': 632, # kRed
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['ggH_hww'] = {
                  'nameHR' : '',
                  'color': 632, # kRed (<- was 632) 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }


plot['ggWW']  = {
                  'nameHR' : '', 
                  'color': 851, # kAzure -10 (<- old colour (850))
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }

# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
              }




# additional options

# legend['lumi'] = 'L = 2.3/fb' # 2.264 fb-1
legend['lumi'] = 'L = 2.3 fb^{-1}' # 2.318 fb-1
legend['sqrt'] = '#sqrt{s} = 13 TeV'




