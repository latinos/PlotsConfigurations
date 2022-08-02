
groupPlot['Wjets_NLOnjRaw'] = { 
    'nameHR' : "nJet binned true MC count",
    'isSignal' : 0,
    'color': 3, #kRed +3
    'samples'  : ['Wjets_NLOnjRaw']
}
groupPlot['Wjets_NLOptMRaw'] = { 
    'nameHR' : "Vpt binned true MC count",
    'isSignal' : 0,
    'color': 2, #kRed +3
    'samples'  : ['Wjets_NLOptMRaw']
}




plot['Wjets_NLOptMRaw']  = {
    'color': 2, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    'isBlind'  : 0,
    'scale'    : 1.0
}

plot['Wjets_NLOnjRaw']  = {
    'color': 3, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    'isBlind'  : 0,
    'scale'    : 1.0
}

# additional options
legend['lumi'] = 'L = 35.9/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
