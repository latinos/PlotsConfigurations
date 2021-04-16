#groupPlot['Wjets_NLO'] = { 
#    'nameHR' : "nJet NLO",
#    'isSignal' : 0,
#    'color': 1, #kRed +3
#    'samples'  : ['Wjets_NLO']
#}

#for idx,pt in enumerate(['0To50', '50To100', '100To250', '250To400', '400To600', '600ToInf']):
#for idx,pt in enumerate(['600ToInf', '400To600', '250To400', '100To250', '50To100', '0To50']):
for idx,pt in enumerate(['600ToInf', '400To600', '250To400', '100To250']):
    col_idx = idx+2
    groupPlot['Wjets_NLOpt'+pt]  = {
        'nameHR' : pt+" NLO",
        'isSignal' : 0,
        'color': col_idx, #kRed +3
        'samples'  : ['Wjets_NLOpt'+pt]
    }

#plot = {}

plot['Wjets_NLOptM']  = {
    'color': 1, # kAzure -4
    'isSignal' : 0,
    'isData'   : 1,
    'isBlind'  : 0,
    'scale'    : 1.0
}

for idx,pt in enumerate(['600ToInf', '400To600', '250To400', '100To250']):
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
legend['lumi'] = 'L = 35.9/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
