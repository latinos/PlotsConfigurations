# structure configuration for datacard
# keys here must match keys in samples.py    

# Backgrounds                  
structure['Fake_em']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
              }

structure['Fake_me']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
              }

structure['Zg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

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

structure['ttZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

# Signal
if os.path.exists('HTXS_categories.py') :
  handle = open('HTXS_categories.py','r')
  exec(handle)
  handle.close()

for cat in categorization_wh:
  isSignal = 0 if cat is 'FWDH' else 1
  structure['WH_hww_'+cat] = {
    'isSignal' : isSignal,
    'isData'   : 0    
  }

structure['ZH_hww'] = {
  'isSignal' : 1,
  'isData'   : 0    
}
  
for cat in categorization_zh:
  isSignal = 0 if cat is 'FWDH' else 1
  structure['ggZH_hww_'+cat] = {
    'isSignal' : isSignal,
    'isData'   : 0    
  }

structure['WH_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

# Data
structure['DATA']  = { 
                 'isSignal' : 0,
                 'isData'   : 1 
             }




