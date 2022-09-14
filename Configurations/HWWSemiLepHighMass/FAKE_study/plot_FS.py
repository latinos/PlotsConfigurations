# plot configuration

massesAndModelsFile = "massesAndModels.py"
if os.path.exists(massesAndModelsFile) :
    handle = open(massesAndModelsFile,'r')
    exec(handle)
    handle.close()
else:
    print "!!! ERROR file ", massesAndModelsFile, " does not exist."

#groupPlot = {}
#
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

#groupPlot['SM Higgs'] = {
# 'nameHR': 'SM Higgs',
# 'isSignal' : 0,
# 'color': 863, # kAzure +3
# 'samples'  : [] #['ggH_hww', 'qqH_hww', 'ZH_hww', 'WH_hww', 'ggH_htt', 'qqH_htt', 'ZH_htt', 'WH_htt']
##}

groupPlot['multiboson']  = {
'nameHR' : 'multiboson',
'isSignal' : 0,
'color': 857, # kAzure -3
#'samples'  : ['WW', 'ggWW', 'WWewk', 'qqWWqq', 'WW2J', 'VVV', 'VZ', 'Vg', 'VgS_H',  'VgS_L']
'samples'  : ['WW', 'ggWW', 'WWewk', 'qqWWqq', 'VVV', 'VZ', 'Vg', 'VgS_H',  'VgS_L', 'ggH_hww', 'qqH_hww', 'ZH_hww', 'WH_hww', 'ggH_htt', 'qqH_htt', 'ZH_htt', 'WH_htt']
}
groupPlot['FAKE'] = {
'nameHR' : "Fake",
'isSignal' : 0,
'color'    : 617,   # kViolet + 1
'samples'  : ['FAKE']
}
##groupPlot['QCD'] = {
## 'nameHR' : "QCD",
## 'isSignal' : 0,
## 'color'    : 617,   # kViolet + 1
## 'samples'  : ['QCD']
##}
groupPlot['DY']  = {
'nameHR' : "DY",
'isSignal' : 0,
'color': 418,    # kGreen+2
'samples'  : ['DY', 'DYlow']
}
groupPlot['Wjets'] = {
    'nameHR' : "W+jets",
    'isSignal' : 0,
    'color': 921,      # kGray + 1
    'samples'  : ['Wjets'],
}


groupPlot['top']  = {
    'nameHR' : 't#bar{t}',
    'isSignal' : 0,
    'color': 400,   # kYellow
    'samples'  : ['top']
}




plot = {}

# keys here must match keys in samples.py


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
#
plot['Wjets']  = {
    'color': 856, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['top']  = {
    'color': 400, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
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
plot['DATA']  = {
    'nameHR' : 'Data',
    'color': 1 ,
    'isSignal' : 0,
    'isData'   : 1 ,
    'isBlind'  : 0,
}




# additional options

legend['lumi'] = 'L = 41.5/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
