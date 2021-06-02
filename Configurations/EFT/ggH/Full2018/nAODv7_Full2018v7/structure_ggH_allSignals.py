# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py    
#

################## SIGNALS #########################
structure['ggH_T1'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ggH_T2'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ggH_T3'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }


###########################################

structure['VBF_T1'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['VBF_T2'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['VBF_T3'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['VBF_T4'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['VBF_T5'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

####################################

structure['WH_T1'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WH_T2'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WH_T3'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WH_T4'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WH_T5'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

#####################################


structure['ZH_T1'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ZH_T2'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ZH_T3'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ZH_T4'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ZH_T5'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

######################## BASCKGROUNDS ##########################
                   
structure['Dyemb']  = {
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['Dyveto']  = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  'removeFromCuts' : [ k for k in cuts ],
              }
 
structure['DY']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['Fake']  = {  
                  'isSignal' : 0,
                  'isData'   : 0 
              }

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
structure['VZ']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }


structure['VVV']  = { 
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }

