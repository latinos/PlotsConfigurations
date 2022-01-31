

NLOb_bins = ['0J', '1J', '2J', 'pt100to250', 'pt250to400', 'pt400to600', 'pt600toInf']
NLOb_bins.reverse()
col_idx = 1
for NLOb in NLOb_bins:

    groupPlot['Wjets_NLOm_'+NLOb] = {
        'nameHR' : "NLO "+NLOb.replace('_', ' to '),
        'isSignal' : 0,
        'color': col_idx, #kRed +3
        'samples'  : ['Wjets_NLOm_'+NLOb]
    }
    col_idx += 1

#plot = {}

# keys here must match keys in samples.py
#
col_idx = 1
for NLOb in NLOb_bins: 

    plot['Wjets_NLOm_'+NLOb]  = {
        'color': col_idx, # kAzure -4
        'isSignal' : 0,
        'isData'   : 0,
        'isBlind'  : 0,
        'scale'    : 1.0
    }
    col_idx += 1

plot['Wjets_NLOmerge']  = {
    'color': 856-1, # kAzure -4
    'isSignal' : 0,
    'isData'   : 1,
    'isBlind'  : 0,
    'scale'    : 1.0
}


# additional options
legend['lumi'] = 'L = 59.7/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
