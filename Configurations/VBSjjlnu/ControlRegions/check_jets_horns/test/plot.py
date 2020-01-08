# plot configuration



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
    'kPink'    : 900
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

#
groupPlot['DATA16']  = {  
                 'nameHR' : 'Data 2016',
                 'isSignal' : 1,
                 'color': palette["Orange"],   
                 'samples'  : ['DATA16']
              } 

groupPlot['DATA17']  = {  
                  'nameHR' : 'Data 2017',
                  'isSignal' : 0,
                  'color': palette["Green"],  
                  'samples'  : ['DATA17']
              }

groupPlot['DATA18']  = {  
                 'nameHR' : 'Data 2018',
                 'isSignal' : 0,
                 'color':  palette["MediumBlue"], 
                 'samples'  : ['DATA18']
              }


# # data

plot['DATA16']  = { 
                 'nameHR' : 'Data 2016',
                 'color': palette["Orange"] ,  
                 'isSignal' : 1,
                 'isData'   : 0 ,
                 'isBlind'  : 0
             }

plot['DATA17']  = { 
                 'nameHR' : 'Data 2017',
                 'color': palette["Green"],
                 'isSignal' : 0,
                 'isData'   : 0 ,
                 'isBlind'  : 0
             }


plot['DATA18']  = { 
                 'nameHR' : 'Data 2018',
                 'color': palette["MediumBlue"] ,  
                 'isSignal' : 0,
                 'isData'   : 0 ,
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
