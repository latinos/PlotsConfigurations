# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py    
#                    

structure['Zjj']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scaleSampleForDatacard':(36.33/35.867)
              }

structure['DY']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scaleSampleForDatacard':(36.33/35.867)
              }

structure['Dyemb']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scaleSampleForDatacard':(36.33/35.867)
              }

structure['Dyveto']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : [ k for k in cuts ],
              }

structure['Wjets']  = {  
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scaleSampleForDatacard':(36.33/35.867)
              }

structure['Fake']  = {  
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scaleSampleForDatacard':(36.33/35.867)
              }

structure['Fake_e']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scaleSampleForDatacard':(36.33/35.867)
#                  'removeFromCuts' : [ k for k in cuts if 'me' in k],
              }

structure['Fake_m']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scaleSampleForDatacard':(36.33/35.867)
#                  'removeFromCuts' : [ k for k in cuts if 'em' in k],
              }

structure['ttbar'] = {   
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scaleSampleForDatacard':(36.33/35.867)
                  }


structure['singletop'] = {   
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['top'] = {   
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scaleSampleForDatacard':(36.33/35.867)
                  }


structure['WW']  = {
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scaleSampleForDatacard':9.*(36.33/35.867)
                  }

structure['WWewk']  = {
                  'isSignal' : 1,
                  'isData'   : 0,
#                  'scaleSampleForDatacard':1.13656 #only for bugged sample
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['ggWW']  = {
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['ggWW_Int']  = {
                  'isSignal' : 0,
                  'isData'   : 0,  
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['Wg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['Vg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['VgS'] = { 
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['VgS_L'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['VgS_H'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['Zg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['VZ']  = { 
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['WZ']  = { 
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scaleSampleForDatacard':(36.33/35.867)
                  }


structure['VVV']  = { 
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['ZZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scaleSampleForDatacard':(36.33/35.867)
                  }


structure['ggH'] = {
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['ggH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['qqH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['qqH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['WH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['ZH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['ggZH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['H_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['bbH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['ttH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['ggH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['qqH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['WH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['ZH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scaleSampleForDatacard':(36.33/35.867)
                  }

structure['H_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scaleSampleForDatacard':(36.33/35.867)
                  }


# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1,
                  'scaleSampleForDatacard':(36.33/35.867)
              }



print "INSTRUCTURE"
print cuts
#print nuisances['WWresum0j']
print "OK"

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis
