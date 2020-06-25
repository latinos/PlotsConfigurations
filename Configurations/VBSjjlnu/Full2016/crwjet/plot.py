# plot configuration

#legend['lumi'] = 'L = 6.3/fb'
legend['lumi'] = 'L = 35.9/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#
# THE ORDER IS IMPORTANT!
# from lower to upper in stack

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

# signal

groupPlot['VBS']  = {  
    'nameHR'   : 'VBS',
    'isSignal' : 1,
    'color'    : colors['kCyan']+1,
    'samples'  : ['VBS']
}

# bkg
# CR wjet
# | VBS     | 57109.7132139 |
# | TTWJets | 2318.48238068 |
# | VV_VVV  | 707041.421493 |
# | QCD_VV  | 925695.329647 |
# | DYJets  | 1776569.18116 |
# | ST      | 599969.433875 |
# | TT      | 2741140.55356 |
# | Wjets   | 68538043.7307 |

groupPlot['TTWJets']  = {  
    'nameHR'   : 'TTWJets',
    'isSignal' : 0,
    'color'    : colors['kRed'],
    'samples'  : ['TTWJets']
}
groupPlot['VV_VVV']  = {
    'nameHR'   : 'VV_VVV',
    'isSignal' : 0,
    'color'    : colors['kOrange'],
    'samples'  : ['VV_VVV']
}
groupPlot['QCD_VV'] = {
    'nameHR'   : 'QCD_VV',
    'isSignal' : 0,
    'color'    : colors['kGreen']+3,
    'samples'  : ['QCD_VV']
}
groupPlot['DYJets']  = {
    'nameHR'   : 'DYJets',
    'isSignal' : 0,
    'color'    : colors['kMagenta']+1,
    'samples'  : ['DYJets']
}

## groupPlot['ST'] = {
##     'nameHR'   : 'ST',
##     'isSignal' : 0,
##     'color'    : colors['kBlue'],
##     'samples'  : ['ST']
## }
groupPlot['TT']  = {    
    'nameHR'   : 'ST TT',
    'isSignal' : 0,
    'color'    : colors['kAzure'],
    'samples' : ['TT','ST']
}

groupPlot['Wjets']  = {
    'nameHR'   : 'W+Jets',
    'isSignal' : 0,
    'color'    : colors['kRed']-3,
    'samples'  : ['Wjets']
}

# groupPlot['QCD_Pt'] = {
#     'nameHR'   : 'QCD_Pt',
#     'isSignal' : 0,
#     'color'    : colors['kOrange']-3,
#     'samples'  : ['QCD_Pt']
# }




#plot = {}

# keys here must match keys in samples.py    
#                    
# cr top
plot['VBS']  = {  
    'color'    : colors['kGreen']-1,
    'isSignal' : 1,
    'isData'   : 0, 
    'scale'    : 1.
}

plot['TT']  = {
    'color'    : colors['kOrange']-3,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}

plot['ST'] = {
    'color'    : colors['kAzure'],
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}

plot['Wjets']  = {
    'color'    : colors['kRed']-3,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}

plot['TTWJets']  = {  
    'color'    : colors['kAzure']+1,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}

plot['VV_VVV']  = {
    'color'    : colors['kRed'],
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}

plot['DYJets']  = {
    'color'    : colors['kMagenta']+1,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}


plot['QCD_VV']=  {
    'color'    : colors['kGreen']+3,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.,
}

# plot['QCD_Pt'] = {
#     'color'    : colors['kMagenta']+4,
#     'isSignal' : 0,
#     'isData'   : 0,
#     'scale'    : 1.
# }

# DATA

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0 ,
		          'scale'    : 1.0
              }