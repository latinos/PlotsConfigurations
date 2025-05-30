# plot configuration



groupPlot = OrderedDict()
plot = {}

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
groupPlot['VV']  = {
                  'nameHR' : 'Multiboson',
                  'isSignal' : 0,
                  'color': 617,   # kViolet +1
                  'samples'  : ['VZ', 'Vg', 'VgS_L', 'VgS_H', 'VVV']
              }
groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY','Dyemb']
              }

processes = ["ggH","ggHjj","VBF"]
groupPlot['TotalSigVBF']  = {
                  'nameHR' : 'Total VBF',
                  'isSignal' : 1,
                  'color': 4,
                  'scale': 1.,
                  'samples'  : ['VBF_'+t for t in ["T1","T2","T3","T4","T5"]]
              }
groupPlot['TotalSigGGH']  = {
                  'nameHR' : 'Total GGH',
                  'isSignal' : 1,
                  'color': 4,
                  'scale': 1.,
                  'samples'  : [process+'_T1' for process in processes if "ggH" in process]+\
                               [process+'_T2' for process in processes if "ggH" in process]+\
                               [process+'_T3' for process in processes if "ggH" in process]
              }
'''
groupPlot['T2']  = {
                      'nameHR' : sm+' (T2)'+factor['T2'],
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1.,
                      'samples'  : [process+'_T2' for process in processes]
}

if process != "ggH":
    groupPlot['T3']  = {
                      'nameHR' : sm+' (T3)'+factor['T3'],
                      'color' : 418,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1.,
                      'samples'  : [process+'_T3' for process in processes]
                    }

    groupPlot['T4']  = {
                      'nameHR' : sm+' (T4)'+factor['T4'],
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1.,
                      'samples'  : [process+'_T4' for process in processes]
                    }

'''
####### individual samples ###########
#ggF
plot['ggH_T1']  = {
                      'nameHR' : 'ggH SM',
                      'color' : 851,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ggH_T2']  = {
                      'nameHR' : 'ggH SM+BSM',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ggH_T3']  = {
                      'nameHR' : 'ggH BSM',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

#ggF+2j
plot['ggHjj_T1']  = {
                      'nameHR' : 'ggHjj SM',
                      'color' : 851,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ggHjj_T2']  = {
                      'nameHR' : 'ggHjj',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ggHjj_T3']  = {
                      'nameHR' : 'ggHjj',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

# VBF
plot['VBF_T1']  = {
                      'nameHR' : 'VBF SM',
                      'color' : 851,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['VBF_T2']  = {
                      'nameHR' : 'VBF INT13',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['VBF_T3']  = {
                      'nameHR' : 'VBF INT22',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['VBF_T4']  = {
                      'nameHR' : 'VBF INT31',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['VBF_T5']  = {
                      'nameHR' : 'VBF BSM',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

# WH
'''
plot['WH_T1']  = {
                      'nameHR' : 'WH SM',
                      'color' : 851,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['WH_T2']  = {
                      'nameHR' : 'WH INT13',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['WH_T3']  = {
                      'nameHR' : 'WH INT22',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['WH_T4']  = {
                      'nameHR' : 'WH INT31',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['WH_T5']  = {
                      'nameHR' : 'WH BSM',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
'''
#ZH
'''
plot['ZH_T1']  = {
                      'nameHR' : 'ZH SM',
                      'color' : 851,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['ZH_T2']  = {
                      'nameHR' : 'ZH INT13',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ZH_T3']  = {
                      'nameHR' : 'ZH INT22',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ZH_T4']  = {
                      'nameHR' : 'ZH INT31',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['ZH_T5']  = {
                      'nameHR' : 'ZH BSM',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
'''
#other
'''
plot['ttH_hww'] = {
                  'nameHR' : 'ttH',
                  'color': 632+6, # kRed+6
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }
'''
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
'''
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
'''

#original SM MC signals - not used
'''
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
'''

# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
              }

# additional options
legend = {}
legend['lumi'] = 'L = 138 fb^{-1}'
legend['sqrt'] = '(13 TeV)'

#comboPlot['SMvsALT'] = {
#                      'groups' : ['H0PM','H0PH','H0M','H0L1']
#}

