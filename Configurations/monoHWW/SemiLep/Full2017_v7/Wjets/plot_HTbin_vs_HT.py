

HT_bins = ['0_70', '70_100', '100_200', '200_400', '400_600', '600_800', '800_1200', '1200_2500', '2500_inf']
HT_bins.reverse()
col_idx = 1
for HT in HT_bins:

    groupPlot['Wjets_HT'+HT] = {
        'nameHR' : "HT "+HT.replace('_', ' to '),
        'isSignal' : 0,
        'color': col_idx, #kRed +3
        'samples'  : ['Wjets_HT'+HT]
    }
    col_idx += 1

#plot = {}

# keys here must match keys in samples.py
#
col_idx = 1
for HT in ['0_70', '70_100', '100_200', '200_400', '400_600', '600_800', '800_1200', '1200_2500', '2500_inf']:

    plot['Wjets_HT'+HT]  = {
        'color': col_idx, # kAzure -4
        'isSignal' : 0,
        'isData'   : 0,
        'isBlind'  : 0,
        'scale'    : 1.0
    }
    col_idx += 1

plot['Wjets_HTkf']  = {
    'color': 856-1, # kAzure -4
    'isSignal' : 0,
    'isData'   : 1,
    'isBlind'  : 0,
    'scale'    : 1.0
}


# additional options
legend['lumi'] = 'L = 41.5/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
