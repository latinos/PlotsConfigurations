
### SIGNAL
if os.path.exists(signal_file) :
    handle = open(signal_file,'r')
    exec(handle)
    handle.close()
else:
    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')


### Signal
for mp in signal:
    mpo = mp.replace('darkHiggs_', '')
    mhs = mpo.split('_')[1] 
    mx  = mpo.split('_')[3] 
    mZp = mpo.split('_')[5] 

    #if not mZp == '500': continue
    #if not mZp == '1200': continue
    if not mZp == '200': continue

    plot['Ce_'+mp] = {
        'nameHR'   : 'Central '+signal[mp]['plot_name'],
        'isSignal' : 1,
        'isData'   : 0,
        'isBlind'  : 0,
        'color'    : 1,#signal[mp]['color'],   # kViolet + 1
        #'samples'  : [mp],
        #'scale'    : 100000,
        #'scale'    : 1./262.7,
    }
    plot['Pr_'+mp] = {
        'nameHR'   : 'Private '+signal[mp]['plot_name'],
        'isSignal' : 1,
        'isData'   : 0,
        'isBlind'  : 0,
        'color'    : 2,#signal[mp]['color'],   # kViolet + 1
        #'samples'  : [mp],
        'scale'    : 2./(0.1086*3.),
        #'scale'    : 1./43.5,
    }

plot['Ce_darkHiggs_mhs_160_mx_150_mZp_300'] = {
    'nameHR'   : ' ',
    'isSignal' : 0,
    'isData'   : 0,
    'color'    : 0,#signal[mp]['color'],   # kViolet + 1
    #'samples'  : [mp],
    'scale'    : 0.,

}

for hit in plot:
    groupPlot[hit] = copy.deepcopy(plot[hit])
    groupPlot[hit]['samples'] = [hit]
#groupPlot['multiB']

# additional options
legend['lumi'] = 'L = 41.5/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
