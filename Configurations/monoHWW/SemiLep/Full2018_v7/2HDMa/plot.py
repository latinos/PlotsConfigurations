groupPlot['Higgs'] = {
    'nameHR' : "SM Higgs",
    'isSignal' : 0,
    'color': 632+3, #kRed +3
    'samples'  : ['Higgs']
}

groupPlot['multiB'] = {
    'nameHR' : 'multiB',
    'isSignal' : 0,
    #'isSignal' : 1,
    'color': 857, # kAzure -3  
    #'samples'  : ['WW', 'WWewk', 'ggWW', 'VBF-V', 'WZqcd', 'WZewk', 'ZZ', 'VVV', 'Vg', 'VgS_L', 'VgS_H', 'ggH_hww', 'qqH_hww', 'ZH_hww', 'WH_hww', 'ttH_hww', 'ggH_htt', 'ZH_htt']
    #'samples'  : ['WW', 'WWewk', 'ggWW', 'WZqcd', 'WZewk', 'ZZ', 'VVV', 'Vg', 'VgS_L', 'VgS_H', 'ggH_hww', 'qqH_hww', 'ZH_hww', 'WH_hww', 'ttH_hww', 'ggH_htt', 'ZH_htt'] #, 'VBF-V'
    #'samples'  : ['WW', 'WWewk', 'ggWW', 'WZqcd', 'WZewk', 'ZZ', 'VVV', 'Vg', 'VgS_L', 'VgS_H', 'Higgs'] #, 'VBF-V'
    'samples'  : ['WW', 'WWewk', 'ggWW', 'WZqcd', 'WZewk', 'ZZ', 'VVV', 'Vg', 'VgS_L', 'VgS_H'] #, 'VBF-V'
}

groupPlot['DY'] = {
    'nameHR' : "DY",
    'isSignal' : 0,
    'color': 418,    # kGreen+2
    'samples'  : ['DY']
    #'samples'  : ['DY', 'DYlow']
}

groupPlot['FAKE'] = {
    'nameHR' : "Fake",
    'isSignal' : 0,
    'color'    : 617,   # kViolet + 1
    'samples'  : ['FAKE']
}


groupPlot['top'] = {
    'nameHR' : 'tW and t#bar{t}',
    'isSignal' : 0,
    'color': 400,   # kYellow
    #'samples'  : ['ttop', 'stop'],
    #'scale'    : 1.11,
    'samples'  : ['top']
}

groupPlot['Wjets'] = {
    'nameHR' : "W+jets",
    'isSignal' : 0,
    'color': 921,      # kGray + 1
    'samples'  : ['Wjets']
}


### SIGNAL
if os.path.exists(signal_file) :
    handle = open(signal_file,'r')
    exec(handle)
    handle.close()
else:
    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')

for mp in signal:
    groupPlot[mp] = {
    'nameHR'   : signal[mp]['plot_name'],
#    'isSignal' : 2,
    'isSignal' : 1,
    'color'    : signal[mp]['color'],   # kViolet + 1
    'samples'  : [mp],
    #'scale'    : 100000,
    }

#groupPlot['DATA'] = {


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

plot['top'] = {
    'nameHR' : 'tW and t#bar{t}',
    'color': 400,   # kYellow
    'isSignal' : 0,
    'isData'   : 0,
    #'scale'    : 1.0,
    'scale'    : 1.04,
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

#plot['VBF-V']  = {
#    'color': 859, # kAzure -2
#    'isSignal' : 0,
#    'isData'   : 0,
#    'scale'    : 1.0
#}

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
    'scale'    : 0.98
}

plot['FAKE']  = {
    'color': 855, # kAzure -5
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}


# HWW

plot['Higgs'] = {
    'nameHR' : 'SM Higgs',
    'color': 632+3, # kRed+3
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1    #
}


### Signal
for mp in signal:
    plot[mp] = {
    'nameHR'   : signal[mp]['plot_name'],
    'isSignal' : 2,
    'isData'   : 0,
    'color'    : signal[mp]['color'],   # kViolet + 1
    'samples'  : [mp],
    #'scale'    : 100000,
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
legend['lumi'] = 'L = 59.7/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'

