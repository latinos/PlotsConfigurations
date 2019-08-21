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

# vbslike
# | VBS     |      280038.7181 | 1.0688164e-5 |                                                                                                                 
# | DYJets  |       40566.4109 | 1.5482875e-6 |                                                                                                                 
# | TTWJets |       81244.4187 | 3.1008343e-6 |                                                                                                                 
# | VV_VVV  |      155632.8318 | 5.9399972e-6 |                                                                                                                 
# | QCD_WW  |      411841.6989 | 1.5718653e-5 |                                                                                                                 
# | Wjets   |     3913300.6399 | 1.4935791e-4 |                                                                                                                 
# | ST      |     4701211.1259 | 1.7942988e-4 |                                                                                                                 
# | TT      |    64815821.5381 | 2.4738084e-3 |                                                                                                                 
# | QCD_Pt  | 26200825730.3069 |           1. |   

# groupPlot['DYJets']  = {
#     'nameHR'   : 'DYJets',
#     'isSignal' : 0,
#     'color'    : colors['kMagenta']+1,
#     'samples'  : ['DYJets']
# }

groupPlot['TTWJets']  = {  
    'nameHR'   : 'TTWJets VV-VVV DYJets',
    'isSignal' : 0,
    'color'    : colors['kViolet']-1,
    'samples'  : ['TTWJets', 'VV_VVV', 'DYJets']
}


# groupPlot['VV_VVV']  = {
#     'nameHR'   : 'VV_VVV',
#     'isSignal' : 0,
#     'color'    : colors['kRed'],
#     'samples'  : ['VV_VVV']
# }

groupPlot['QCD_WW'] = {
    'nameHR'   : 'QCD_WW',
    'isSignal' : 0,
    'color'    : colors['kGreen']+3,
    'samples'  : ['QCD_WW']
}
groupPlot['Wjets']  = {
    'nameHR'   : 'W+Jets',
    'isSignal' : 0,
    'color'    : colors['kRed']-3,
    'samples'  : ['Wjets']
}

# groupPlot['ST'] = {
#     'nameHR'   : 'ST',
#     'isSignal' : 0,
#     'color'    : colors['kAzure'],
#     'samples'  : ['ST']
# }


groupPlot['TT']  = {    
    'nameHR'   : 'ST TT',
    'isSignal' : 0,
    'color'    : colors['kAzure'],
    'samples' : ['TT', 'ST']
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

plot['ST'] = {
    'color'    : colors['kAzure'],
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.
}

# plot['QCD_Pt'] = {
#     'color'    : colors['kMagenta']+4,
#     'isSignal' : 0,
#     'isData'   : 0,
#     'scale'    : 1.
# }

plot['QCD_WW']=  {
    'color'    : colors['kGreen']+3,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.,
}

# DATA

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 1 ,
		          'scale'    : 1.0
              }