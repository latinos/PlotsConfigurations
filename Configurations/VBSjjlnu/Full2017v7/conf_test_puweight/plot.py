# plot configuration

from ROOT import TColor
from itertools import product

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
    "Green3": (16,235,52),#10eb34
    "LightGreen" : (82, 221, 135), #52dd87
    "Violet": (242, 67, 114), #f24372  
    "Pink": (247, 191, 223)
}


groupPlot['top_oldPUWeight']  = {  
                  'nameHR' : "Top old puW",
                  'isSignal' : 0,
                  'color'    : palette["Green"],
                  'samples'  : ['top_oldPUWeight'],
                  'fill': 1001
              }

groupPlot['Top']  = {  
                  'nameHR' : 'Top no puW',
                  'isSignal' : 2,
                  'color': palette["LightBlue"],  
                  'samples'  : ['top_noPUweight'],
                  'fill': 1001
              }


# groupPlot['top_newPUWeight']  = {  
#                 'nameHR' : "Top new puW",
#                 'isSignal' : 2,
#                 'color': palette["Green2"],    
#                 'samples'  : ['top_newPUWeight'],
#                 'fill': 1001
#             }


#plot = {}

# keys here must match keys in samples.py    
# 


plot['top_noPUweight']  = {  
                'color': palette["LightBlue"],
                'isSignal' : 2,
                'isData'   : 0, 
                'scale'    : 1.0,
            }

plot['top_oldPUWeight']  = {
                  'color': palette["Green"],  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0 ,
              }

plot['top_newPUWeight']  = {
                  'color': 1,  
                  'isSignal' : 0,
                  'isData'   : 1,
                  'scale'    : 1.,
                  'isBlind'  : 0
              }   
         

# additional options

legend['lumi'] = 'L = 41.5/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'


