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

                
groupPlot['Wjets_LO']  = {  
                 'nameHR' : 'W+Jets LO',
                 'isSignal' : 0,
                 'color': palette["Yellow"],   
                 'samples'  : ['Wjets_LO'],
                 'fill': 1001
              }


plot['Wjets'] = {   
                 'color': 1,
                 'isSignal' : 0,
                 'isData'   : 1, 
                 'cuts'    : {
                    'res_wjetcr_dnnall_mu': 1.0360,
                    'res_wjetcr_dnnall_ele': 1.0675,
                    'boost_wjetcr_dnnall_mu': 1.0983,
                    'boost_wjetcr_dnnall_ele': 1.3121
                    }
                 }


plot['Wjets_LO'] = {   
                 'color': colors['kAzure']-1,
                 'isSignal' : 0,
                 'isData'   : 0, 
                 'scale'    : 1.0 
                 }



# additional options

legend['lumi'] = 'L = 59.74/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'


