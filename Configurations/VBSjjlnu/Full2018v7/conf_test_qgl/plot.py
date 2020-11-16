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



groupPlot['others']  = {  
                  'nameHR' : "Others",
                  'isSignal' : 1,
                  'color'    : palette["MediumBlue"],
                  'samples'  : ['Fake'],
                  'fill': 1001
              }

# the vjet1 is vjet0, just an error in then name@@@@@@@@@@@@@@@@
groupPlot['quark']  = {  
                  'nameHR' : "quark Jet",
                  'isSignal' : 0,
                  'color'    : palette["LightBlue"],
                  'samples'  : [],
                  'fill': 1001
              }


groupPlot['gluon']  = {  
                  'nameHR' : 'gluon Jet',
                  'isSignal' : 0,
                  'color': palette["Green3"],  
                  'samples'  : [ ],
                  'fill': 1001
              }




#plot = {}

# keys here must match keys in samples.py    
# # 

# # the vjet1 is vjet0, just an error in then name
# for b in ["vjet0_gluon","vjet0_quark"]:
#     plot['Wjets_HT_'+b] = {   
#                     'color': colors['kAzure']-1,
#                     'isSignal' : 0,
#                     'isData'   : 0, 
#                     'scale'    : 1.0 
#                     }
#     plot['DY_'+b] = {   
#                     'color': colors['kAzure']-1,
#                     'isSignal' :  0,
#                     'isData'   : 0, 
#                     'scale'    : 1.0 
#                     }
    

#     plot['VVV_'+b]  = { 
#                   'color': colors["kAzure"] -3,    
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0
#                   }

#     plot['VV_'+b]  = {
#                     'color': colors['kGreen']+3,  
#                     'isSignal' : 0,
#                     'isData'   : 0,
#                     'scale'    : 1.   ,
#                 }   
        

#     plot['VBF-V_'+b]  = {
#                     'color': colors['kYellow']+3,  
#                     'isSignal' : 0,
#                     'isData'   : 0,
#                     'scale'    : 1.   ,
#                 }

#     plot['Vg_'+b]  = {
#                     'color': colors['kGreen']+3,  
#                     'isSignal' : 0,
#                     'isData'   : 0,
#                     'scale'    : 1.   ,
#                 }   
        

#     plot['VgS_'+b]  = {  
#                     'color': colors['kMagenta']+1,
#                     'isSignal' : 0,
#                     'isData'   : 0, 
#                     'scale'    : 1.0,
#                 }


#     plot['top_'+b] = {   
#                     'color': colors['kAzure']-1,
#                     'isSignal' : 0,
#                     'isData'   : 0, 
#                     'scale'    : 1.0 
#                     }

#     plot['VBS_'+b]  = {
#                     'color': colors["kCyan"]+1, 
#                     'isSignal' : 0,
#                     'isData'   : 0,
#                     'scale'    : 1.   ,
#                 }


plot['Fake']  = {  
                    'color': colors['kTeal'],
                    'isSignal' : 0,
                    'isData'   : 0, 
                    'scale'    : 1.0,
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

legend['lumi'] = 'L = 59.74/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'


