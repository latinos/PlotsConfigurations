# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py    
#                    
structure['DY']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['Dyemb']  = {
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['Dyveto']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : [ k for k in cuts ],
              }


structure['Wjets']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

structure['Fake']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }
'''
structure['Fake_em']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : [ k for k in cuts if 'me' in k],
              }

structure['Fake_me']  = {  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : [ k for k in cuts if 'em' in k],
              }
'''
structure['ttbar'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }


structure['singletop'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['top'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }


structure['WW']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['WWewk']  = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ggWW']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ggWW_Int']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['Wg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['Vg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['VgS'] = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['VgS_L'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['VgS_H'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['Zg']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['VZ']  = { 
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


structure['ggH'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ggH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['qqH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['qqH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['WH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ZH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ggZH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['H_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['bbH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ttH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ggH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['qqH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['WH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['ZH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['H_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

################################


structure['ggH_T1'] = {'isSignal' : 1,'isData'   : 0}

structure['VBF_T1'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T2'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T3'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T4'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T5'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T6'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T7'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T8'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T9'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T10']= {'isSignal' : 1,'isData'   : 0}
structure['VBF_T11'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T12'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T13'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T14'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T15'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T16'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T17'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T18'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T19'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T20'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T21'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T22'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T23'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T24'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T25'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T26'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T27'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T28'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T29'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T30'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T31'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T32'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T33'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T34'] = {'isSignal' : 1,'isData'   : 0}
structure['VBF_T35'] = {'isSignal' : 1,'isData'   : 0}

structure['WH_T1'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T2'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T3'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T4'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T5'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T6'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T7'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T8'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T9'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T10']= {'isSignal' : 1,'isData'   : 0}
structure['WH_T11'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T12'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T13'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T14'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T15'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T16'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T17'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T18'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T19'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T20'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T21'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T22'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T23'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T24'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T25'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T26'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T27'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T28'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T29'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T30'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T31'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T32'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T33'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T34'] = {'isSignal' : 1,'isData'   : 0}
structure['WH_T35'] = {'isSignal' : 1,'isData'   : 0}

structure['ZH_T1'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T2'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T3'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T4'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T5'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T6'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T7'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T8'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T9'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T10']= {'isSignal' : 1,'isData'   : 0}
structure['ZH_T11'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T12'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T13'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T14'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T15'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T16'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T17'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T18'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T19'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T20'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T21'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T22'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T23'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T24'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T25'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T26'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T27'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T28'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T29'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T30'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T31'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T32'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T33'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T34'] = {'isSignal' : 1,'isData'   : 0}
structure['ZH_T35'] = {'isSignal' : 1,'isData'   : 0}

# data

structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }
'''
for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)
    print nuis
'''
