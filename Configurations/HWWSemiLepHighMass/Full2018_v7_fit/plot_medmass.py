# plot configuration

massesAndModelsFile = "massesAndModels.py"
if os.path.exists(massesAndModelsFile) :
    handle = open(massesAndModelsFile,'r')
    exec(handle)
    handle.close()
else:
    print "!!! ERROR file ", massesAndModelsFile, " does not exist."


# groupPlot = {}
#
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

#groupPlot['SM Higgs'] = {
# 'nameHR': 'SM Higgs',
# 'isSignal' : 0,
# 'color': 863, # kAzure +3
# 'samples'  : [] #['ggH_hww', 'qqH_hww', 'ZH_hww', 'WH_hww', 'ggH_htt', 'qqH_htt', 'ZH_htt', 'WH_htt']
#}
groupPlot['multiboson']  = {
'nameHR' : 'multiboson',
'isSignal' : 0,
'color': 857, # kAzure -3
#'samples'  : ['WW', 'ggWW', 'WWewk', 'qqWWqq', 'WW2J', 'VVV', 'VZ', 'Vg', 'VgS_H',  'VgS_L']
'samples'  : ['WW', 'ggWW', 'WWewk', 'qqWWqq', 'WW2J', 'VVV', 'VZ', 'Vg', 'VgS_H',  'VgS_L', 'ggH_hww', 'qqH_hww', 'ZH_hww', 'WH_hww', 'ggH_htt', 'qqH_htt', 'ZH_htt', 'WH_htt'],
}
groupPlot['FAKE'] = {
'nameHR' : "Fake",
'isSignal' : 0,
'color'    : 617,   # kViolet + 1
'samples'  : ['FAKE'],
#'scale': 1/479866.,
}
#groupPlot['QCD'] = {
# 'nameHR' : "QCD",
# 'isSignal' : 0,
# 'color'    : 617,   # kViolet + 1
# 'samples'  : ['QCD']
#}
groupPlot['DY']  = {
'nameHR' : "DY",
'isSignal' : 0,
'color': 418,    # kGreen+2
'samples'  : ['DY'],
}
groupPlot['top']  = {
    'nameHR' : 't#bar{t} and ST',
    'isSignal' : 0,
    'color': 400,   # kYellow
    'samples'  : ['top'],
}
groupPlot['Wjets'] = {
    'nameHR' : "W+jets",
    'isSignal' : 0,
    'color': 921,      # kGray + 1
    'samples'  : ['Wjets'],
}

#for counter, MX in enumerate(plotmasses):
#    groupPlot['Higgs{}'.format(MX)] = {
#        'nameHR'  : 'Higgs {}'.format(MX),
#        'isSignal': 1,
#        'color'   : counter+1,
#        'samples' : ['GGH_{}_RelW002'.format(MX), 'QQH_{}_RelW002'.format(MX)] #'GGHINT_{}_RelW002'.format(MX), 'QQH_{}_RelW002'.format(MX),'QQHINT_{}_RelW002'.format(MX), 'QQHSBI_{}_RelW002'.format(MX), 'GGHSBI_{}_RelW002'.format(MX)]
#    }





#plot = {}

# keys here must match keys in samples.py
#

#plot['FAKE']  = {
#    'color': 855, # kAzure -5
#    'isSignal' : 0,
#    'isData'   : 0,
#    'scale'    : 1.0
#}

#plot['QCD']  = {
#    'color': 1,
#    'isSignal' : 0,
#    'isData'   : 0 ,
#    'isBlind'   :  0 ,
#    'scale'    : 1.0
#}


plot['FAKE']  = {
    'color': 855, # kAzure -5
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

#plot['QCD']  = {
#    'color': 1,
#    'isSignal' : 0,
#    'isData'   : 0 ,
#    'isBlind'   :  0 ,
#    'scale'    : 1.0
#}

plot['DY']  = {
    'color': 418,    # kGreen+2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}

plot['top'] = {
   # 'nameHR' : 'tW and t#bar{t}',
    'color': 400,   # kYellow
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}


plot['WW']  = {
    'color': 851, # kAzure -9
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
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
    'scale'    : 1.0
}

plot['qqWWqq']  = {
    'color': 852, # kAzure -8
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['WW2J']  = {
    'color': 852, # kAzure -8
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
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

plot['VZ']  = {
    'color': 858, # kAzure -2
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
    'scale'    : 1.0
}



# HWW
plot['qqH_hww'] = {
    # 'nameHR' : 'qqH',
    'color': 632+1, # kRed+1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1    #
}
plot['ggH_hww'] = {
    # 'nameHR' : 'ggH',
    'color': 632, # kRed
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1    #
}
plot['ZH_hww'] = {
    # 'nameHR' : 'ZH',
    'color': 632+3, # kRed+3
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1    #
}
plot['WH_hww'] = {
    # 'nameHR' : 'WH',
    'color': 632+2, # kRed+2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1    #
}


plot['ggH_htt']  = {
    'color': 428,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}
plot['qqH_htt']  = {
    'color': 428,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}
plot['ZH_htt']  = {
    'color': 428,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}
plot['WH_htt']  = {
    'color': 428,    # kGreen+12
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}


## Signal
#for MX in plotmasses:
#    xs_ggf = 2*HiggsXS.GetHiggsXS4Sample('YR4','13TeV','GluGluHToWWToLNuQQ_M{}'.format(MX))['xs']
#    xs_vbf = 2*HiggsXS.GetHiggsXS4Sample('YR4','13TeV','VBFHToWWToLNuQQ_M{}'.format(MX))['xs']
#    plot['QQH_{}_RelW002'.format(MX)] = {
#        'nameHR'  : 'qqH{}'.format(MX),
#        'color'   : 1,
#        'isSignal': 1,
#        'isData'  : 0,
#        'scale'   : 1.0 * xs_ggf
#    }
#   # plot['QQHINT_{}_RelW002'.format(MX)] = {
#   #     'nameHR'  : 'qqH{}'.format(MX),
#   #     'color'   : 1,
#   #     'isSignal': 1,
#   #     'isData'  : 0,
#   #     'scale'   : 1.0 * xs_ggf
#   # }
#   # plot['QQHSBI_{}_RelW002'.format(MX)] = {
#   #     'nameHR'  : 'qqH{}'.format(MX),
#   #     'color'   : 1,
#   #     'isSignal': 1,
#   #     'isData'  : 0,
#   #     'scale'   : 1.0 * xs_ggf
#   # }
#    plot['GGH_{}_RelW002'.format(MX)] = {
#        'nameHR'  : 'ggH{}'.format(MX),
#        'color'   : 1,
#        'isSignal': 1,
#        'isData'  : 0,
#        'scale'   : 1.0 * xs_vbf
#    }
#   # plot['GGHINT_{}_RelW002'.format(MX)] = {
#   #     'nameHR'  : 'ggH{}'.format(MX),
#   #     'color'   : 1,
#   #     'isSignal': 1,
#   #     'isData'  : 0,
#   #     'scale'   : 1.0 * xs_vbf
#   # }
#
#   # plot['GGHSBI_{}_RelW002'.format(MX)] = {
#   #     'nameHR'  : 'ggH{}'.format(MX),
#   #     'color'   : 1,
#   #     'isSignal': 1,
#   #     'isData'  : 0,
#   #     'scale'   : 1.0 * xs_vbf
#   # }
#


# data

plot['DATA']  = {
    'nameHR' : 'Data',
    'color': 1 ,
    'isSignal' : 0,
    'isData'   : 1 ,
    'isBlind'  : 0,
}




# additional options

legend['lumi'] = 'L =59.7/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
