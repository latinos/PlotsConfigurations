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
                  'samples'  : ['Fake_em', 'Fake_me']
              }


groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY','Dyemb']
              }



groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
              }


groupPlot['VZ']  = {  
                  'nameHR' : "VZ",
                  'isSignal' : 0,
                  'color'    : 617,   # kViolet + 1  
                  'samples'  : ['VZ', 'WZ', 'ZZ']
              }

groupPlot['Vg']  = {  
                  'nameHR' : "V#gamma",
                  'isSignal' : 0,
                  'color'    : 810,   # kOrange + 10
                  'samples'  : ['Vg', 'Wg']
              }

groupPlot['VgS']  = {
                  'nameHR' : "V#gamma*",
                  'isSignal' : 0,
                  'color'    : 409,   # kGreen - 9
                  'samples'  : ['VgS_L','VgS_H']
              }


'''
groupPlot['Higgs']  = {  
                  'nameHR' : 'Higgs SM',
                  'isSignal' : 0,
                  'color': 632, # kRed 
		  #'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww','bbH_hww','ttH_hww','ZH_htt', 'ggZH_htt', 'WH_htt', 'qqH_htt', 'ggH_htt','bbH_htt','ttH_htt' ]
                  'samples'  : ['H_htt', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww','ttH_hww']
              }
'''

groupPlot['H0PM']  = {
                      'nameHR' : 'SM H',
                      'color' : 851,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['H0PM','VBF_H0PM','WH_H0PM','ZH_H0PM']
                    }
'''
groupPlot['H0M']  = {
                      'nameHR' : 'H 0^{-}',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['H0M']
                    }

groupPlot['H0PH']  = {
                      'nameHR' : 'H 0+',
                      'color' : 632,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['H0PH']
                    }
groupPlot['H0L1']  = {
                      'nameHR' : 'H #Lambda1',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['H0L1']
                    }
'''
'''
groupPlot['VBF_H0PM']  = {
                      'nameHR' : 'VBF h',
                      'color' : 851,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['VBF_H0PM']
                    }

groupPlot['VBF_H0M']  = {
                      'nameHR' : 'VBF H0^{-}',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['VBF_H0M']
                    }

groupPlot['VBF_H0PH']  = {
                      'nameHR' : 'VBF H0+',
                      'color' : 632,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['VBF_H0PH']
                    }
groupPlot['VBF_H0L1']  = {
                      'nameHR' : 'VBF H#Lambda1',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['VBF_H0L1']
                    }
'''
#ggF
plot['H0PM'] = {
                  'nameHR' : 'ggH h ',
                  'color': 3,
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1,
                  }


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

# VBF
plot['VBF_H0PM'] = {
                  'nameHR' : 'VBF h ',
                  'color': 3,
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1,
                  }

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


# VH

plot['WH_H0PM'] = {  
                  'nameHR' : 'WH h ',
                  'color': 3, 
                  'isSignal' : 1, 
                  'isData'   : 0,
                  'scale'    : 1,
                  }

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


plot['ZH_H0PM'] = {  
                  'nameHR' : 'ZH h ',
                  'color': 5, 
                  'isSignal' : 1, 
                  'isData'   : 0,
                  'scale'    : 1,
                  }

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
#plot = {}

# keys here must match keys in samples.py    
# 
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


plot['Fake_em']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }


plot['Fake_me']  = {  
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
# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
              }




# additional options

legend['lumi'] = 'L = 59.74/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'

#comboPlot['SMvsALT'] = {
#                      'groups' : ['H0PM','H0PH','H0M','H0L1']
#}


