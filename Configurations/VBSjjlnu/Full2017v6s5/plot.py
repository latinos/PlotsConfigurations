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
    "Orange": (242, 108, 13), #f26c0d  
    "Yellow": (247, 195, 7), #f7c307
    "LightBlue": (153, 204, 255), #99ccff
    "MediumBlue": (72, 145, 234),  #4891ea
    "MediumBlue2": (56, 145, 224),    #3891e0
    "DarkBlue": (8, 103, 136), #086788
    "Green": (47, 181, 85), #2fb555
    "Green2": (55, 183, 76),  #37b74c
    "LightGreen" : (82, 221, 135), #52dd87
    "Violet": (242, 67, 114), #f24372   
}

'''
Colors
"Wjets6": ( 246, 137, 61 ), #f6893d 
"Wjets2": (240, 115, 66), #f07342
"Wjets3": (233, 119, 73), #e97749
"Wjets4": (229, 94, 41), #e55e29
"Wjets5": (211, 87, 38), #d34912 
'''
#
 


# groupPlot['VBF-V']  = {  
#                  'nameHR' : 'VBF-V',
#                  'isSignal' : 0,
#                  'color':  palette["VBF-V"],  
#                  'samples'  : ['VBF-V']
#               }

groupPlot['Fake']  = {  
                'nameHR' : "Fake",
                'isSignal' : 0,
                'color': palette["LightBlue"],   
                'samples'  : ['Fake'],
                'fill': 1001
            }

groupPlot['vbfV+VV+VVV']  = {  
                  'nameHR' : 'vbfV+VV+VVV',
                  'isSignal' : 0,
                  'color': palette["MediumBlue2"],  
                  'samples'  : ['VBF-F','VVV'],  # !!!!!!!!!!!!!!!!!!!!!!! MISSING VV
                  'fill': 1001
              }


groupPlot['DY']  = {  
                'nameHR' : "DY",
                'isSignal' : 0,
                'color': palette["Green2"],    
                'samples'  : ['DY'],
                'fill': 1001
            }

groupPlot['top']  = {  
                 'nameHR' : 'top',
                 'isSignal' : 0,
                 'color':  palette["Orange"],  
                 'samples'  : ['singleTop', 'ttbar'],
                 'fill': 1001
             }


groupPlot['Wjets']  = {  
                  'nameHR' : 'W+Jets',
                  'isSignal' : 0,
                  'color':   palette["Yellow"],
                  'samples'  : ['Wjets'],
                  'fill': 1001

              }

groupPlot['VBS']  = {  
                 'nameHR' : 'VBS',
                 'isSignal' : 1,
                 'color': colors["kRed"]+1,   
                 'samples'  : ['VBS'],
                 'fill': 1001
              }



#plot = {}

# keys here must match keys in samples.py    
# 

plot['VVV']  = { 
                  'color': colors["kAzure"] -3,    
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


# plot['VV']  = {
#                   'color': colors['kGreen']+3,  
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.   ,
#               }   
         


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

plot['VBS']  = {
                  'color': colors["kCyan"]+1, 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1.   ,
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


