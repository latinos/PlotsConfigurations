# plot configuration

from ROOT import TColor
from itertools import product
from random import choice

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

wjets = ['Wjets_HT_70_100','Wjets_HT_100_200',
        'Wjets_HT_200_400', 'Wjets_HT_400_600', 'Wjets_HT_600_800','Wjets_HT_800_1200',
        'Wjets_HT_1200_2500','Wjets_HT_2500_inf']

colors = ["MediumBlue2","LightBlue","Yellow","Orange","LightGreen","Green3","Violet","Pink"]

for w,c in zip(wjets, colors):
    groupPlot[w]  = {  
                    'nameHR' : w ,
                    'isSignal' : 0,
                    'color': palette[c], 
                    'samples'  : [w],
                    'fill': 1001
                }
    plot[w]  = { 
                  'color': palette[c],
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['Wjets_LO'] ={
    'color': 1,    
    'isSignal' : 0,
    'isData'   : 1,
    'scale'    : 1.0
}

# additional options

legend['lumi'] = 'L = 41.5/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'


