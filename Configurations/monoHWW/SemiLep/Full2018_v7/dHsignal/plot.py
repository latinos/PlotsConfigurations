### SIGNAL
if os.path.exists(signal_file) :
    handle = open(signal_file,'r')
    exec(handle)
    handle.close()
else:
    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')

#mhs_list = ['160', '180', '200']
#mx_list = ['100', '150', '200']
#mZp_list = ['195', '200', '295', '300', '400', '500', '800', '1000', '1200', '1500']
#
#models = []
#for mhs in mhs_list:
#    for mx in mx_list:
#        for mZp in mZp_list:
#            mp = 'mhs_'+mhs+'_mx_'+mx+'_mZp_'+mZp
for mp in signal:
    #if not 'mA_400' in mp: continue
    mpo = mp.replace('darkHiggs_', '')
    mhs = mpo.split('_')[1] 
    mx  = mpo.split('_')[3] 
    mZp = mpo.split('_')[5] 
    #if not 'mA_400' in mp: continue
    #if not mhs == '160' and not mx == '100' in mp: continue
    #if not mhs in ['160', '180', '200', '300', '400']: continue 
    if not mhs in ['160', '180', '200']: continue 
    if not mx in ['100']: continue
    if not mZp in ['1500']: continue

    col_idx = 632
    if mhs == '160': col_idx += 0 
    if mhs == '180': col_idx += 1 
    if mhs == '200': col_idx += 2 
    if mhs == '300': col_idx += 3 
    if mhs == '400': col_idx += 4 

    groupPlot[mp] = {
        'nameHR'   : 'm_{s} '+mhs,
#        'isSignal' : 2,
        'isSignal' : 2,
        'color'    : col_idx,
        'samples'  : [mp],
        #'scale'    : 100000,
    }

#groupPlot['DATA'] = {


#plot = {}

### Signal
for mp in signal:
    mpo = mp.replace('darkHiggs_', '')
    mhs = mpo.split('_')[1] 
    mx  = mpo.split('_')[3] 
    mZp = mpo.split('_')[5] 
    #if not 'mA_400' in mp: continue
    #if not mhs in ['160', '180', '200', '300', '400']: continue 
    if not mhs in ['160', '180', '200']: continue 
    if not mx in ['100']: continue
    if not mZp in ['1500']: continue
    plot[mp] = {
    'nameHR'   : signal[mp]['plot_name'],
    'isSignal' : 2,
    'isData'   : 0,
    'color'    : signal[mp]['color'],   # kViolet + 1
    'samples'  : [mp],
    #'scale'    : 100000,
    }

## data
plot['darkHiggs_mhs_160_mx_100_mZp_1200']  = {
    'nameHR' : 'MC',
    'color': 0 ,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1    #
}

plot['darkHiggs_mhs_160_mx_100_mZp_2500']  = {
    'nameHR' : 'Data',
    'color': 1 ,
    'isSignal' : 0,
    'isData'   : 1 ,
    'isBlind'  : 1
}

# additional options
legend['lumi'] = 'L = 59.7/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'


