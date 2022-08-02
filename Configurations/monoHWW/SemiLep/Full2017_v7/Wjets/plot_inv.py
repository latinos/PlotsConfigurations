groupPlot['Wjets_NLOnjE'] = { 
    'nameHR' : "nJet NLO no ext1",
    'isSignal' : 0,
    'color': 1, #kRed +3
    'samples'  : ['Wjets_NLOnjE']
}

##for idx,pt in enumerate(['0to50', '50to100', '100to250', '250to400', '400to600', '600toInf']):
#for idx,j in enumerate(['0J', '1J', '2J']):
#    col_idx = idx+2
#    groupPlot['Wjets_NLOn'+j]  = {
#        'nameHR' : j+" NLO",
#        'isSignal' : 0,
#        'color': col_idx, #kRed +3
#        'samples'  : ['Wjets_NLOn'+j]
#    }

#plot = {}

plot['Wjets_NLOnjE']  = {
    'color': 1, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    'isBlind'  : 0,
    'scale'    : 1.0
}

plot['Wjets_NLOnj']  = {
    'color': 1, # kAzure -4
    'isSignal' : 0,
    'isData'   : 1,
    'isBlind'  : 0,
    'scale'    : 1.0
}

#for idx,j in enumerate(['0J', '1J', '2J']):
#    col_idx = idx+2
#    plot['Wjets_NLOn'+j]  = {
#        'color': col_idx, # kAzure -4
#        'isSignal' : 0,
#        'isData'   : 0,
#        'isBlind'  : 0,
#        'scale'    : 1.
#        #'scale'    : 5.75
#    }

# additional options
legend['lumi'] = 'L = 35.9/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
