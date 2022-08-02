groupPlot['Wjets_NLOin'] = { 
    'nameHR' : "NLO old stat",
    'isSignal' : 0,
    'color': 2, #kRed +3
    'samples'  : ['Wjets_NLOin']
}


plot['Wjets_NLOstatM']  = {
    'color': 1, # kAzure -4
    'isSignal' : 0,
    'isData'   : 1,
    'isBlind'  : 0,
    'scale'    : 1.0
}

plot['Wjets_NLOin']  = {
    'color': 2, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    'isBlind'  : 0,
    'scale'    : 1.0
}

# additional options
legend['lumi'] = 'L = 35.9/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
