

#plot = {}

# keys here must match keys in samples.py
#
#plot['Wjets_LO']  = {
#    'color': 856, # kAzure -4
#    'isSignal' : 0,
#    'isData'   : 0,
#    'isBlind'  : 0,
#    'scale'    : 1.0
#}

plot['Wjets_NLOnj']  = {
    'color': 856-1, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    'isBlind'  : 0,
    'scale'    : 1.0
}

#plot['Wjets_NLOpt']  = {
#    'color': 856-2, # kAzure -4
#    'isSignal' : 0,
#    'isData'   : 0,
#    'isBlind'  : 0,
#    'scale'    : 1.0
#    #'scale'    : 5.75
#}

#plot['Wjets_HT']  = {
#    'color': 856-3, # kAzure -4
#    'isSignal' : 0,
#    'isData'   : 0,
#    'isBlind'  : 0,
#    'scale'    : 1.0
#}

plot['Wjets_NLOin']  = {
    'color': 856-2, # kAzure -4
    'isSignal' : 0,
    'isData'   : 1,
    'isBlind'  : 0,
    'scale'    : 1.0
    #'scale'    : 5.75
}

## data

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
