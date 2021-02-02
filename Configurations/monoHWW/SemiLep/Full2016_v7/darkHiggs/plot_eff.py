noP_samples = [skey for skey in samples if skey.startswith('noP_')]
noT_samples = [skey for skey in samples if skey.startswith('noT_')]
mc_samples  = [skey for skey in samples if not skey in noT_samples and not skey in noP_samples]

groupPlot['MC'] = {
    'nameHR' : "all MC",
    'isSignal' : 0,
    'color': 632, #kRed +3
    'samples'  : mc_samples
}

groupPlot['noT_MC'] = {
    'nameHR' : "MC no trigger",
    'isSignal' : 0,
    'color': 857, #kRed +3
    'samples'  : noT_samples
}

groupPlot['noP_MC'] = {
    'nameHR' : "MC no prefire",
    'isSignal' : 0,
    'color': 418, #kRed +3
    'samples'  : noP_samples
}


# keys here must match keys in samples.py
#

for sample in samples:
    plot[sample] = {
        'color': 418,    # kGreen+2
        'isSignal' : 0,
        'isData'   : 0,
        'scale'    : 1.0,
    }

# additional options
legend['lumi'] = 'L = 41.5/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'





# samples['ggZH_hww'] = {
# samples['ggZH_htt'] = {
# samples['WH_htt'] = {
