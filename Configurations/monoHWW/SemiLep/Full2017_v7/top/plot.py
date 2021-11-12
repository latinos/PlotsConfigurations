groupPlot['Others'] = {
    'nameHR' : "Others",
    'isSignal' : 0,
    'color': 632+3, #kRed +3
    'samples'  : ['Higgs', 'WW', 'WWewk', 'ggWW', 'VBF-V', 'WZqcd', 'WZewk', 'ZZ', 'VVV', 'Vg', 'VgS_L', 'VgS_H', 'DY']
}

groupPlot['FAKE'] = {
    'nameHR' : "Fake",
    'isSignal' : 0,
    'color'    : 617,   # kViolet + 1
    'samples'  : ['FAKE']
}

groupPlot['top_T'] = {
    'nameHR' : 't',
    'isSignal' : 0,
    'color': 400+2,   # kYellow
    #'samples'  : ['ttop', 'stop'],
    #'scale'    : 1.11,
    'samples'  : ['top_T']
}

groupPlot['top_TW'] = {
    'nameHR' : 'tW',
    'isSignal' : 0,
    'color': 400+3,   # kYellow
    #'samples'  : ['ttop', 'stop'],
    #'scale'    : 1.11,
    'samples'  : ['top_TW']
}

groupPlot['top_TTV'] = {
    'nameHR' : 't#bar{t} V',
    'isSignal' : 0,
    'color': 400+1,   # kYellow
    #'samples'  : ['ttop', 'stop'],
    #'scale'    : 1.11,
    'samples'  : ['top_TTV']
}

groupPlot['top_TT'] = {
    'nameHR' : 't#bar{t}',
    'isSignal' : 0,
    'color': 400,   # kYellow
    #'samples'  : ['ttop', 'stop'],
    #'scale'    : 1.11,
    'samples'  : ['top_TT']
}

groupPlot['Wjets'] = {
    'nameHR' : "W+jets",
    'isSignal' : 0,
    'color': 921,      # kGray + 1
    'samples'  : ['Wjets']
}


#plot = {}

# keys here must match keys in samples.py
#
plot['DY']  = {
    'color': 418,    # kGreen+2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}

#plot['DYlow']  = {
#    'color': 416,    # kGreen+2
#    'isSignal' : 0,
#    'isData'   : 0,
#    'scale'    : 1.0,
#}

top_scale = 1.06
plot['top_TT'] = {
    'nameHR' : 't#bar{t}',
    'color': 400,   # kYellow
    'isSignal' : 0,
    'isData'   : 0,
    #'scale'    : 1.0,
    'scale'    : top_scale,
}
plot['top_TTV'] = {
    'nameHR' : 't#bar{t} V',
    'color': 400+1,   # kYellow
    'isSignal' : 0,
    'isData'   : 0,
    #'scale'    : 1.0,
    'scale'    : top_scale,
}
plot['top_T'] = {
    'nameHR' : 't',
    'color': 400+2,   # kYellow
    'isSignal' : 0,
    'isData'   : 0,
    #'scale'    : 1.0,
    'scale'    : top_scale,
}
plot['top_TW'] = {
    'nameHR' : 'tW',
    'color': 400+3,   # kYellow
    'isSignal' : 0,
    'isData'   : 0,
    #'scale'    : 1.0,
    'scale'    : top_scale,
}


plot['WW']  = {
    'color': 851, # kAzure -9
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

plot['ggWW']  = {
    'color': 850, # kAzure -10
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['WWewk']  = {
    'color': 851, # kAzure -9
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

#plot['qqWWqq']  = {
#    'color': 852, # kAzure -8
#    'isSignal' : 0,
#    'isData'   : 0,
#    'scale'    : 1.0
#}
#
#plot['WW2J']  = {
#    'color': 852, # kAzure -8
#    'isSignal' : 0,
#    'isData'   : 0,
#    'scale'    : 1.0
#}

plot['Vg']  = {
    'color': 859, # kAzure -1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VgS_H'] = {
    'color'    : 617,   # kViolet + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VgS_L'] = {
    'color'    : 617,   # kViolet + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VBF-V']  = {
    'color': 859, # kAzure -2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['WZqcd']  = {
    'color': 858, # kAzure -2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}
plot['WZewk']  = {
    'color': 861, # kAzure -2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['ZZ']  = {
    'color': 860, # kAzure -2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VVV']  = {
    'color': 857, # kAzure -3
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['Wjets']  = {
    'color': 856, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    #'scale'    : 1.0
    'scale'    : 1.04,
}

plot['FAKE']  = {
    'color': 855, # kAzure -5
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}


# HWW
plot['Higgs'] = {
    'nameHR' : 'Higgs',
    'color': 632+3, # kRed+3
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1    #
}


## data

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





# samples['ggZH_hww'] = {
# samples['ggZH_htt'] = {
# samples['WH_htt'] = {
