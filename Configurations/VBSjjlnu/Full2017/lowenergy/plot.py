# plot configuration

from ROOT import TColor

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used

colors = {
    # https://root.cern.ch/doc/master/classTColor.html#C02
    'kWhite'   : 0,
    'kBlack'   : 1,
    'kGray'    : 920,
    'kRed'     : 632,
    'kGreen'   : 416,
    'kBlue'    : 600,
    'kYellow'  : 400,
    'kMagenta' : 616,
    'kCyan'    : 432,
    'kOrange'  : 800,
    'kSpring'  : 820,
    'kTeal'    : 840,
    'kAzure'   : 860,
    'kViolet'  : 880,
    'kPink'    : 900, 
}

palette = {
    "Wjets": (229, 94, 41), #e55e29
    "Wjets+1": (211, 87, 38), #d34912 
    "top": (247, 195, 7), #f7c307
    "Fake": (153, 204, 255), #99ccff
    "DY": (72, 145, 234),  #4891ea
    "VVV+VV": (47, 181, 85), #2fb555
    "VBF-V": (242, 67, 114), #f24372
    "VBS": (8, 103, 136) #086788
}

#
groupPlot['VBS']  = {  
                 'nameHR' : 'VBS',
                 'isSignal' : 1,
                 'color': palette["VBS"],   
                 'samples'  : ['VBS']
              } 


groupPlot['VBF-V']  = {  
                 'nameHR' : 'VBF-V',
                 'isSignal' : 0,
                 'color':  palette["VBF-V"],  
                 'samples'  : ['VBF-V']
              }


groupPlot['VVV+VV']  = {  
                  'nameHR' : 'VVV+VV',
                  'isSignal' : 0,
                  'color': palette["VVV+VV"],  
                  'samples'  : ['VVV','VV']
              }

groupPlot['Fake']  = {  
                'nameHR' : "Fake",
                'isSignal' : 0,
                'color': palette["Fake"],   
                'samples'  : ['Fake']
            }

groupPlot['DY']  = {  
                'nameHR' : "DY",
                'isSignal' : 0,
                'color': palette["DY"],    
                'samples'  : ['DY']
            }

groupPlot['top']  = {  
                 'nameHR' : 'top',
                 'isSignal' : 0,
                 'color':  palette["top"],  
                 'samples'  : ['singleTop', 'ttbar']
             }


groupPlot['Wjets']  = {  
                  'nameHR' : 'W+Jets',
                  'isSignal' : 0,
                  'color':   palette["Wjets"],
                  'samples'  : ['Wjets']
              }



# groupPlot['VZ']  = {  
#                   'nameHR' : "VZ",
#                   'isSignal' : 0,
#                   'color'    : 617,   # kViolet + 1  
#                   'samples'  : ['VZ', 'WZ', 'ZZ']
#               }

# groupPlot['Vg']  = {  
#                   'nameHR' : "V#gamma",
#                   'isSignal' : 0,
#                   'color'    : 810,   # kOrange + 10
#                   'samples'  : ['Vg', 'Wg']
#               }

# groupPlot['VgS']  = {
#                   'nameHR' : "V#gamma*",
#                   'isSignal' : 0,
#                   'color'    : 409,   # kGreen - 9
#                   'samples'  : ['VgS']
#               }





#plot = {}

# keys here must match keys in samples.py    
# 

plot['VBS']  = {
                  'color': colors["kCyan"]+1, 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }

plot['VVV']  = { 
                  'color': colors["kAzure"] -3,    
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


plot['VV']  = {
                  'color': colors['kGreen']+3,  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }   
         


plot['DY']  = {  
                'color': colors['kMagenta']+1,
                'isSignal' : 0,
                'isData'   : 0, 
                'scale'    : 1.0,
            }

plot['VBF-V']  = {
                  'color': colors['kYellow']+3,  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }


plot['Fake']  = {  
                'color': colors['kTeal'],
                'isSignal' : 0,
                'isData'   : 0, 
                'scale'    : 1.0,
            }


plot['singleTop'] = {   
                 'nameHR' : 'singleTop',
                 'color': colors['kAzure']+1,   
                 'isSignal' : 0,
                 'isData'   : 0, 
                 'scale'    : 1.0,
                 }

plot['ttbar'] = {   
                 'nameHR' : 'ttbar',
                 'color': colors['kAzure']-1,
                 'isSignal' : 0,
                 'isData'   : 0, 
                 'scale'    : 1.0,
                 }


plot['Wjets']  = {
                  'color':  colors['kRed']-3,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   ,
              }


# # data

plot['DATA']  = { 
                 'nameHR' : 'Data',
                 'color': 1 ,  
                 'isSignal' : 0,
                 'isData'   : 1 ,
                 'isBlind'  : 0
             }




# additional options

legend['lumi'] = 'L = 41.5/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'



# plot['WW']  = {
#                   'color': 851, # kAzure -9 
#                   'isSignal' : 0,
#                   'isData'   : 0,    
#                   'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
#                   }

# plot['ggWW']  = {
#                   'color': 850, # kAzure -10
#                   'isSignal' : 0,
#                   'isData'   : 0,    
#                   'scale'    : 1.0
#                   }

# plot['WWewk']  = {
#                   'color': 851, # kAzure -9 
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
#                   }


# plot['Vg']  = { 
#                   'color': 859, # kAzure -1  
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0
#                   }

# plot['VgS'] = { 
#                   'color'    : 617,   # kViolet + 1  
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0
#                   }

# plot['VZ']  = { 
#                   'color': 858, # kAzure -2  
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0
#                   }
