# structure configuration for datacard
# keys here must match keys in samples.py    

# Backgrounds                  
structure['Fake_e']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
              }

structure['Fake_m']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
              }

structure['DY']  = { 
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'removeFromCuts' : ['zh3l_SR_1j']
                  }

structure['Zg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['ZgS']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['WW']  = { 
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'removeFromCuts' : ['zh3l_SR_1j','zh3l_SR_2j']
                  }

#structure['WWewk']  = { 
#                  'isSignal' : 0,
#                  'isData'   : 0 
#                  }

#structure['ggWW']  = { 
#                  'isSignal' : 0,
#                  'isData'   : 0 
#                  }

structure['WZ']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['VVV']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['ZZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ttV']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['top']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : ['zh3l_WZ_CR_1j','zh3l_SR_1j']
                  }

# Signal
structure['WH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['ZH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['ggZH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['ttH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['WH_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['ZH_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

# Data
structure['DATA']  = { 
                 'isSignal' : 0,
                 'isData'   : 1 
             }




