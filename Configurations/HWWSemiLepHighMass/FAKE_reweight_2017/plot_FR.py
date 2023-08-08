
groupPlot['DY'] = {
    'nameHR' : "DY",
    'isSignal' : 0,
    'color': 418,    # kGreen+2
    'samples'  : ['DY'] #, 'DYlow']
}
groupPlot['QCD'] = {
    'nameHR' : "QCD",
    'isSignal' : 0,
    'color': 800,    # kGreen+2
    'samples'  : ['QCD'] #, 'DYlow']
}

groupPlot['top'] = {
    'nameHR' : "top",
    'isSignal' : 0,
    'color': 400,    # kGreen+2
    'samples'  : ['top'] #, 'DYlow']
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
plot['QCD'] = {
    'color': 350,   # kYellow
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}

plot['top'] = {
    'color': 400,   # kYellow
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}
plot['Wjets']  = {
    'color': 856, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}
# data

#plot['DATA']  = {
#                  'nameHR' : 'Data',
#                  'color': 1 ,
#                  'isSignal' : 0,
#                  'isData'   : 1 ,
#                  'isBlind'  : 0
#              }




# additional options
legend['lumi'] = 'L = 41.5/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'





# samples['ggZH_hww'] = {
# samples['ggZH_htt'] = {
# samples['WH_htt'] = {
