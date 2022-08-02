groupPlot['Wjets_NLOptM'] = { 
    'nameHR' : "merged pt bins NLO",
    'isSignal' : 0,
    'color': 2, #kRed +3
    'samples'  : ['Wjets_NLOptM']
}


plot['Wjets_NLOptM']  = {
    'color': 2, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    'isBlind'  : 0,
    'scale'    : 1.0
}

plot['Wjets_NLOin']  = {
    'color': 1, # kAzure -4
    'isSignal' : 0,
    'isData'   : 1,
    'isBlind'  : 0,
    'scale'    : 1.0
}

# additional options
legend['lumi'] = 'L = 35.9/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
