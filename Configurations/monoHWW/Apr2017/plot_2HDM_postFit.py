# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

# groupPlot['Vg']  = {  
#                   'nameHR' : "V#gamma",
#                   'isSignal' : 0,
#                   'color'    : 810,   # kOrange + 10
#                   'samples'  : ['Vg', 'Wg']
#               }

groupPlot['Fake']  = {  
                  'nameHR' : 'Nonprompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake']
              }


groupPlot['top']  = {  
                  'nameHR' : 'Top',#'tW and t#bart',
                  'isSignal' : 0,
                  'color': 400, #  kYellow
                  'samples'  : ['top']
              }

groupPlot['WW']  = {  
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
                  'samples'  : ['WW', 'ggWW']
              }

# groupPlot['qqWW']  = {  
#                   'nameHR' : 'qqWW',
#                   'isSignal' : 0,
#                   'color': 851, # kAzure -9 
#                   'samples'  : ['WW']
#               }


# groupPlot['ggWW']  = {  
#                   'nameHR' : 'ggWW',
#                   'isSignal' : 0,
#                   'color': 852, # kAzure -8
#                   'samples'  : ['ggWW']
#               }


groupPlot['VV/VVV']  = {  
                  'nameHR' : 'VV/VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV','VZ', 'WZ', 'ZZ', 'WZgS_H','VgS','WZgS_L','Vg','Wg']
              }

# groupPlot['VVV']  = {  
#                   'nameHR' : 'VVV',
#                   'isSignal' : 0,
#                   'color': 857, # kAzure -3  
#                   'samples'  : ['VVV']
#               }


# groupPlot['VZ']  = {  
#     #'nameHR' : "VZ/#gamma*/#gamma",
#     'nameHR' : "VZ",
#     'isSignal' : 0,
#     'color'    : 617,   # kViolet + 1  
#     #'samples'  : ['VZ', 'Vg', 'Wg', 'VgS', 'WZ', 'ZZ','Zg','WZgS_H']
#     'samples'  : ['VZ', 'WZ', 'ZZ', 'WZgS_H']
#     }


# groupPlot['VgS']  = {
#                   'nameHR' : "V#gamma*",
#                   'isSignal' : 0,
#                   'color'    : 409,   # kGreen - 9
#                   'samples'  : ['VgS','WZgS_L']
#               }

groupPlot['DY']  = {  
                  'nameHR' : "Z+jets",
                  'isSignal' : 0,
                  'color': 418,  #  kGreen+2
                  #'samples'  : ['DY1', 'DY2']
                  'samples'  : ['DY']
              }


groupPlot['Higgs']  = {  
                  'nameHR' : 'h boson',
                  'isSignal' : 0,
                  'color': 632, # kRed 
                  'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww','bbH_hww']
              }


# groupPlot['ggH']  = {  
#                   'nameHR' : 'ggH',
#                   'isSignal' : 0,
#                   'color': 632, # kRed 
#                   'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww','bbH_hww']
#               }


# Z'-2HDM
groupPlot['monoH_1200_300'] = {
    'nameHR' : 'Z\'-2HDM: m_{Z\'} = 1200, m_{A} = 300 GeV, #sigma #times BR = 1.75 fb (x 500)',
    'isSignal' : 2,
    'color': 801,
    'samples'  : ['monoH_1200_300']
    }


# # pre-fit

plot['total_postfit_s']  = {
    'nameHR' : 'post-fit',
    'color': 616,
    'isSignal' : 2,
    'isData'   : 0, 
    'scale'    : 1.0,
    }

# keys here must match keys in samples.py    
#                    
plot['WZgS_L']  = {
    'color': 617,
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
    }

plot['WZgS_H']  = {
    'color': 617,
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
    } 

plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0   ,
              }

# plot['VgS'] = { 
#                   'color'    : 617,   # kViolet + 1  
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0
#                   }

 
plot['Vg'] = { 
                  'color'    : 617,   # kViolet + 1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


# plot['Wjets']  = {  
#                   'color': 921,    # kGray + 1
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0                  
#               }



               
plot['Fake']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }


plot['top'] = {
                  'nameHR' : 't#bart',
                  'color': 400,   # kYellow 
                  'isSignal' : 0,
                  'isData'   : 0 ,
                  'scale'    : 1.0
                  }

# plot['ttbar'] = {   
#                   'nameHR' : 't#bart',
#                   'color': 400,   # kYellow 
#                   'isSignal' : 0,
#                   'isData'   : 0 ,
#                   'scale'    : 1.0
#                   }


# plot['singletop'] = {   
#                   'nameHR' : 't and tW',
#                   'color': 401,   # kYellow +1
#                   'isSignal' : 0,
#                   'isData'   : 0, 
#                   'scale'    : 1.0
#                   }

plot['top'] = {   
                  'nameHR' : 'tW and t#bart',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
                  }


plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }

plot['ggWW']  = {
                  'color': 850, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }

# plot['ggWW_Int']  = {
#                   'color': 616, # kMagenta
#                   'isSignal' : 0,
#                   'isData'   : 0,    
#                   'scale'    : 1.0
#                   }

# plot['Wg']  = { 
#                   'color': 859, # kAzure -1  
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0
#                   }

plot['VZ']  = { 
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

# plot['WZ']  = { 
#                   'color': 858, # kAzure -2  
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0
#                   }

# plot['ZZ']  = { 
#                   'color': 856, # kAzure -4  
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0
#                   }


plot['VVV']  = { 
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

# Htautau

plot['H_htt'] = {
                  'nameHR' : 'Htt',
                  'color': 632+4, # kRed+4 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

# HWW 

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

plot['bbH_hww'] = {
                  'nameHR' : 'bbH',
                  'color': 632+5, # kRed 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

# Z'-2HDM
plot['monoH_1200_300'] = {
    'nameHR' : 'm_{Z\'} = 1200, m_{A} = 300 GeV, #sigma #times BR = 1.75 fb (x 500)',
    'color': 801,
    'isSignal' : 2,
    'isData'   : 0,
    'scale'    : 500
    }

# # post-fit background (only in post-fit plots)

groupPlot['total_postfit_s'] = {
    'nameHR' : 'post-fit',
    'isSignal' : 2,
    'color': 616,
    'samples'  : ['total_postfit_s']
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

legend['lumi'] = '35.9 fb^{-1}'
#legend['lumi'] = 'L = 2.39/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'




