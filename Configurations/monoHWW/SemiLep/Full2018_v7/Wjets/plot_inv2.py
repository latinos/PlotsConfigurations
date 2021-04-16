#groupPlot['Wjets_NLO'] = { 
#    'nameHR' : "nJet NLO",
#    'isSignal' : 0,
#    'color': 1, #kRed +3
#    'samples'  : ['Wjets_NLO']
#}

#for idx,pt in enumerate(['0to50', '50to100', '100to250', '250to400', '400to600', '600toInf']):
#for idx,pt in enumerate(['600toInf', '400to600', '250to400', '100to250', '50to100', '0to50']):
#for idx,pt in enumerate(['600toInf', '400to600', '250to400', '100to250', '50to100']):
for idx,pt in enumerate(['600toInf', '400to600', '250to400', '100to250']):
    col_idx = idx+2
    groupPlot['Wjets_NLOpt'+pt]  = {
        'nameHR' : pt+" NLO",
        'isSignal' : 0,
        'color': col_idx, #kRed +3
        'samples'  : ['Wjets_NLOpt'+pt]
    }

#groupPlot['Wjets_NLOnj']  = {
#    'nameHR' : "nJet NLO",
#    'isSignal' : 0,
#    'isData'   : 1,
#    'color': 1, 
#    'samples'  : ['Wjets_NLOnj']
#}

#plot = {}

plot['Wjets_NLOnj']  = {
    'color': 1, # kAzure -4
    'isSignal' : 0,
    'isData'   : 1,
    'isBlind'  : 0,
    'scale'    : 1.0
}

#for idx,pt in enumerate(['600toInf', '400to600', '250to400', '100to250', '50to100']):
for idx,pt in enumerate(['600toInf', '400to600', '250to400', '100to250']):
    col_idx = idx+2
    plot['Wjets_NLOpt'+pt]  = {
        'color': col_idx, # kAzure -4
        'isSignal' : 0,
        'isData'   : 0,
        'isBlind'  : 0,
        'scale'    : 1.
        #'scale'    : 5.75
    }

# additional options
legend['lumi'] = 'L = 59.7/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
