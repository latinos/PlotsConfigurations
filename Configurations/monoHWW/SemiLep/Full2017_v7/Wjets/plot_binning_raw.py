groupPlot['Wjets_NLOnjR'] = { 
    'nameHR' : "nJet binned NLO",
    'isSignal' : 0,
    'color': 2, #kRed +3
    'samples'  : ['Wjets_NLOnjR']
}

groupPlot['Wjets_NLOptR'] = { 
    'nameHR' : "p_{T} binned NLO",
    'isSignal' : 0,
    'color': 3, #kRed +3
    'samples'  : ['Wjets_NLOptR']
}


#for idx,pt in enumerate(['0to50', '50to100', '100to250', '250to400', '400to600', '600toInf']):
#for idx,pt in enumerate(['600toInf', '400to600', '250to400', '100to250', '50to100', '0to50']):
#for idx,pt in enumerate(['600toInf', '400to600', '250to400', '100to250']):
#    col_idx = idx+2
#    groupPlot['Wjets_NLOpt'+pt]  = {
#        'nameHR' : pt+" NLO",
#        'isSignal' : 0,
#        'color': col_idx, #kRed +3
#        'samples'  : ['Wjets_NLOpt'+pt]
#    }

#plot = {}

#plot['Wjets_NLOstatM']  = {
#    'color': 1, # kAzure -4
#    'isSignal' : 0,
#    'isData'   : 1,
#    'isBlind'  : 0,
#    'scale'    : 1.0
#}

plot['Wjets_NLOptR']  = {
    'color': 3, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    'isBlind'  : 0,
    'scale'    : 1.0
}
plot['Wjets_NLOnjR']  = {
    'color': 2, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    'isBlind'  : 0,
    'scale'    : 1.0
}

plot['Wjets_NLOmergR']  = {
    'color': 1, # kAzure -4
    'isSignal' : 0,
    'isData'   : 1,
    'isBlind'  : 0,
    'scale'    : 1.0
}

#for idx,pt in enumerate(['600toInf', '400to600', '250to400', '100to250']):
#    col_idx = idx+2
#    plot['Wjets_NLOpt'+pt]  = {
#        'color': col_idx, # kAzure -4
#        'isSignal' : 0,
#        'isData'   : 0,
#        'isBlind'  : 0,
#        'scale'    : 1.
#        #'scale'    : 5.75
#    }

# additional options
legend['lumi'] = 'L = 41.5/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
