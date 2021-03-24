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
    "Green4": (68, 175, 105), #44af69
    "Green5": (29,194,106),#1DC26A
    "Green6" : (27,177,97), #1BB161
    "Green7": (108, 198, 140), # 6CC68C
    "GreenLighter": (93, 192, 128),  #5DC080
    "GreenDarker": (14, 150, 78), # 14, 150, 78
    "LightGreen" : (82, 221, 135), #52dd87
    "Violet": (242, 67, 114), #f24372  
    "Pink": (247, 191, 223), #F7BFDF,
    "Peach": (255, 143, 133), #F7C59F
    "Peach2": (255, 146, 51), #FF9233
    "Peach3": (255, 157, 71), #
    "Pink2" : (253, 161, 155), #FD9BA1
    "Orange": (255,156, 51),
    "Orange2": (255,135, 31)
}

'''
    "Wjets_deta5": (247, 155, 7),#f79b07
    "Wjets_deta4": (247, 175, 7), #f7af07
    "Wjets_deta3": (247, 195, 7), #f7c307
    "Wjets_deta2": (247, 215, 7), #f7d707
    "Wjets_deta1": (247, 235, 7), #f7eb07
'''

jetbin_detabins = [3,3,2]
#wjets_palette = ['#FFF59D', '#FFEE58', '#FFD54F', '#FFB300', '#FF8F00', '#F57C00', '#E65100','#BF360C']
wjets_palette = ['#DD2C00', '#FF3D00',  '#FF6D00','#F57C00', '#FFAB00', '#FFC400', '#FFEA00', '#FFFF00']

DNNcolors = [ palette["GreenLighter"],palette["LightBlue"],palette["MediumBlue"], palette["Yellow"], colors["kRed"]+1] 

boost_bins = ['0.','0.1','0.2','0.4','0.65','1.']
res_bins =   ['0.','0.2','0.4','0.6','0.8','1.']

samples = ['Wjets_HT','DY','top','VV','VVV','VBF-V','Vg','VgS','ggWW', 'Fake'] #,'VBS'
# samples = ['VBS']

for i in range(5,0,-1):
    groupPlot['resDNN'+str(i)]  = {  
                  'nameHR' : 'DNN ({}, {})'.format(res_bins[i-1], res_bins[i]),
                  'isSignal' : i == 5,
                  'color':  DNNcolors[i-1], #palette["Peach3"],  
                  'samples'  : [s+ "_res_"+ str(i) for s in samples],
                  'fill': 1001
              }

    groupPlot['boostDNN'+str(i)]  = {  
                  'nameHR' : 'DNN ({}, {})'.format(boost_bins[i-1], boost_bins[i]),
                  'isSignal' : i == 5,
                  'color':  DNNcolors[i-1], #palette["Peach3"],  
                  'samples'  : [s+ "_boost_"+ str(i) for s in samples],
                  'fill': 1001
              }

for s in samples:
    for i in range(1,6):
        plot[s+'_res_'+str(i)]  = { 
                  'color': colors["kAzure"] -3,    
                  'isSignal' : i==5,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
        plot[s+'_boost_'+str(i)]  = { 
                  'color': colors["kAzure"] -3,    
                  'isSignal' : i==5,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


# additional options

legend['lumi'] = 'L = 59.74/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'


