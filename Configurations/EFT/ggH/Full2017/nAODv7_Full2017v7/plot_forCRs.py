# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['top']  = {  
                  'nameHR' : 'tW and t#bar{t}',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['top']
              }

groupPlot['WW']  = {  
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
                  'samples'  : ['WW', 'ggWW', 'WWewk']
              }

groupPlot['Fake']  = {  
                  'nameHR' : 'Non-prompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake']
              }


groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY','Dyemb']
              }

groupPlot['VV']  = {  
                  'nameHR' : 'Multiboson',
                  'isSignal' : 0,
                  'color': 617,   # kViolet +1
                  'samples'  : ['VZ', 'Vg', 'VgS_L', 'VgS_H', 'VVV']
              }


groupPlot['Higgs']  = {
                  'nameHR' : 'SM h',
                  'isSignal' : 0,
                  'color': 632,
                  'samples'  : ['H0PM','ZH_H0PM','WH_H0PM','VBF_H0PM','ttH_hww','ggH_htt','qqH_htt','ZH_htt','WH_htt']
              }

####### individual samples ############
#SM ggF
plot['H0PM'] = {
                  'nameHR' : 'ggH h ',
                  'color': 3,
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1,
                  }

#BSM ggF
plot['H0M']  =   {
                      'nameHR' : 'ggH 0^{-}',
                      'color' : 4,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                     }
plot['H0PH'] = {
                  'nameHR' : 'ggH h+ ',
                  'color': 5,
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1,
                  }

plot['H0L1']  =   {
                      'nameHR' : 'ggH #Lambda1',
                      'color' : 6,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                     }

#SM VBF
plot['VBF_H0PM'] = {
                  'nameHR' : 'VBF h ',
                  'color': 3,
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1,
                  }

#BSM VBF
plot['VBF_H0M']  =   {
                      'nameHR' : 'VBF 0^{-}',
                      'color' : 4,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                     }
plot['VBF_H0PH'] = {
                  'nameHR' : 'VBF h+ ',
                  'color': 5,
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1,
                  }

plot['VBF_H0L1']  =   {
                      'nameHR' : 'VBF #Lambda1',
                      'color' : 6,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                     }


#SM WH
plot['WH_H0PM'] = {  
                  'nameHR' : 'WH h ',
                  'color': 3, 
                  'isSignal' : 1, 
                  'isData'   : 0,
                  'scale'    : 1,
                  }

#BSM WH
plot['WH_H0M']  =   {
                      'nameHR' : 'WH 0^{-}',
                      'color' : 4,
                      'isSignal' : 1, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }
plot['WH_H0PH'] = {
                  'nameHR' : 'WH h+ ',
                  'color': 5,
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1,
                  }

plot['WH_H0L1']  =   {
                      'nameHR' : 'WH #Lambda1',
                      'color' : 6,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                     }

#SM ZH
plot['ZH_H0PM'] = {  
                  'nameHR' : 'ZH h ',
                  'color': 5, 
                  'isSignal' : 1, 
                  'isData'   : 0,
                  'scale'    : 1,
                  }

#BSM ZH
plot['ZH_H0M']  =   {
                      'nameHR' : 'ZH 0^{-}',
                      'color' : 6,
                      'isSignal' : 1, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }
plot['ZH_H0PH'] = {
                  'nameHR' : 'ZH h+ ',
                  'color': 5,
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1,
                  }

plot['ZH_H0L1']  =   {
                      'nameHR' : 'ZH #Lambda1',
                      'color' : 6,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                     }

#other
plot['ttH_hww'] = {
                  'nameHR' : 'ttH',
                  'color': 632+6, # kRed+6
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

#SM backgrounds 
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }

plot['Dyemb']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0,
              }


plot['Fake']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }
              
plot['top'] = {   
                  'nameHR' : 'tW and t#bar{t}',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  }

plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['ggWW']  = {
                  'color': 850, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }

plot['WWewk']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['Vg']  = { 
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VgS_L'] = { 
                  'color'    : 617,   # kViolet + 1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VgS_H'] = {
                  'color'    : 617,   # kViolet + 1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VZ']  = { 
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VVV']  = { 
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

# Htautau as background
plot['ggH_htt'] = {
                  'nameHR' : 'ggHtt',
                  'color': 632+4, # kRed+4 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['WH_htt'] = {
                  'nameHR' : 'WHtt',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ZH_htt'] = {
                  'nameHR' : 'ZHtt',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['qqH_htt'] = {
                  'nameHR' : 'qqHtt',
                  'color': 632+1, # kRed+1 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


#original SM MC signals - not used
plot['ZH_hww'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ggZH_hww'] = {
                  'nameHR' : 'ggZH',
                  'color': 632+4, # kRed+4
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['WH_hww'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['qqH_hww'] = {
                  'nameHR' : 'qqH',
                  'color': 632+1, # kRed+1 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['ggH_hww'] = {
                  'nameHR' : 'ggH',
                  'color': 632, # kRed 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
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
legend['lumi'] = 'L = 41.53/fb'
legend['sqrt'] = '(13 TeV)'

#comboPlot['SMvsALT'] = {
#                      'groups' : ['H0PM','H0PH','H0M','H0L1']
#}

