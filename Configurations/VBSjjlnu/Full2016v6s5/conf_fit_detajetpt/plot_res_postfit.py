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
    "LightGreen" : (82, 221, 135), #52dd87
    "Violet": (242, 67, 114), #f24372  
    "Pink": (247, 191, 223)
}

'''
    "Wjets_deta5": (247, 155, 7),#f79b07
    "Wjets_deta4": (247, 175, 7), #f7af07
    "Wjets_deta3": (247, 195, 7), #f7c307
    "Wjets_deta2": (247, 215, 7), #f7d707
    "Wjets_deta1": (247, 235, 7), #f7eb07
'''

jetbin_detabins = [3,3,2]
wjets_palette = ['#FFF59D', '#FFEE58', '#FFD54F', '#FFB300', '#FF8F00', '#F57C00', '#E65100','#BF360C']
wjets_palette = ['#DD2C00', '#FF3D00',  '#FF6D00','#F57C00', '#FFAB00', '#FFC400', '#FFEA00', '#FFFF00']

icw = 0
for il in range(1,4):
    for j in range(1,jetbin_detabins[il-1]+1):
        color = wjets_palette[icw]
        icw+=1
        palette["Wjets_deta{}_jpt{}".format(j, il)] = color



groupPlot['Fake']  = {  
                'nameHR' : "Fake",
                'isSignal' : 0,
                'color': palette["LightBlue"],   
                'samples'  : ['Fake'],
                'fill': 1001
            }

# groupPlot['Vg']  = {  
#                   'nameHR' : "V#gamma+V#gamma*",
#                   'isSignal' : 0,
#                   'color'    : 409,   # kOrange + 10
#                   'samples'  : ['Vg','VgS']
#               }

groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': palette["Pink"],  
                  'samples'  : ['VVV'],
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
                 'color':  palette["MediumBlue2"],  
                 'samples'  : ['top'],
                 'fill': 1001
             }

for  jbin in range(3,0,-1): 
    for dbin in range(jetbin_detabins[jbin-1], 0,-1):
        wname = "Wjets_deta{}_jpt{}".format(dbin,jbin)
        groupPlot[wname]  = {  
                        'nameHR' : 'W+Jets_{}_{}'.format(dbin,jbin),
                        'isSignal' : 0,
                        'color':   palette[wname],
                        'samples'  : [wname],
                        'fill': 1001
                }

groupPlot['VBS']  = {  
                 'nameHR' : 'VBS',
                 'isSignal' : 1,
                 'color': colors["kRed"]+1,   
                 'samples'  : ['VBS'],
                 'fill': 1001
              }

groupPlot['total_prefit'] = {
    'nameHR' : 'pre-fit',
    'isSignal' : 2,
    'color': 616,   
    'samples'  : ['total_prefit'],
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


plot['DY']  = {  
                'color': colors['kMagenta']+1,
                'isSignal' : 0,
                'isData'   : 0, 
                'scale'    : 1.0,
            }

# plot['VBF-V']  = {
#                   'color': colors['kYellow']+3,  
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.   ,
#               }


plot['Fake']  = {  
                'color': colors['kTeal'],
                'isSignal' : 0,
                'isData'   : 0, 
                'scale'    : 1.0,
            }


plot['top'] = {   
                 'color': colors['kAzure']-1,
                 'isSignal' : 0,
                 'isData'   : 0, 
                 'scale'    : 1.0 #1.08
                 }


#wfactors = {
#    (1,1): 0.89,
#    (1,2): 0.88,
#    (1,3): 0.66,
#    (2,1): 1.08,
#    (2,2): 0.92,
#    (2,3): 0.65,
#    (3,1): 1.36,
#    (3,2): 1.00,
#}

for  jbin in range(3,0,-1): 
    for dbin in range(jetbin_detabins[jbin-1], 0,-1):
        wname = "Wjets_deta{}_jpt{}".format(dbin,jbin)
        plot[wname] = {  
                        'color':  colors['kRed']-3,
                        'isSignal' : 0,
                        'isData'   : 0,
                        'scale': 1.0
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

plot['total_prefit'] = {
     'nameHR' : 'pre-fit',
     'color': 616, 
     'isSignal' : 2,
     'isData'   : 0,
     'scale'    : 1.   ,
}


# additional options

legend['lumi'] = 'L = 35.9/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'


