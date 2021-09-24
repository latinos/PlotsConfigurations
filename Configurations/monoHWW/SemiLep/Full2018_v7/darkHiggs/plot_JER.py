groupPlot['allMC'] = {
    'nameHR' : "all MC",
    'isSignal' : 0,
    'color': 632+3, #kRed +3
    'samples'  : ['Higgs', 'WW', 'WWewk', 'ggWW', 'WZqcd', 'WZewk', 'ZZ', 'VVV', 'Vg', 'VgS_L', 'VgS_H', 'DY', 'top', 'Wjets']
}


#### SIGNAL
#if os.path.exists(signal_file) :
#    handle = open(signal_file,'r')
#    exec(handle)
#    handle.close()
#else:
#    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')

#mhs_list = ['160', '180', '200']
#mx_list = ['100', '150', '200']
#mZp_list = ['195', '200', '295', '300', '400', '500', '800', '1000', '1200', '1500']
#
#models = []
#for mhs in mhs_list:
#    for mx in mx_list:
#        for mZp in mZp_list:
#            mp = 'mhs_'+mhs+'_mx_'+mx+'_mZp_'+mZp
#for mp in signal:
#    #if not 'mA_400' in mp: continue
#    mpo = mp.replace('darkHiggs_', '')
#    mhs = mpo.split('_')[1] 
#    mx  = mpo.split('_')[3] 
#    mZp = mpo.split('_')[5] 
#    #if not 'mA_400' in mp: continue
#    #if not mhs == '160' and not mx == '100' in mp: continue
#    if not mhs == '160': continue 
#    if not mx == '100' : continue
#    if not mZp in ['200', '400', '1200']: continue
#    groupPlot[mp] = {
#    'nameHR'   : signal[mp]['plot_name'],
##    'isSignal' : 2,
#    'isSignal' : 1,
#    'color'    : signal[mp]['color'],   # kViolet + 1
#    'samples'  : [mp],
#    #'scale'    : 100000,
#    }

#groupPlot['DATA'] = {


#plot = {}

# keys here must match keys in samples.py
#
plot['DY']  = {
    'color': 418,    # kGreen+2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
}

#plot['DYlow']  = {
#    'color': 416,    # kGreen+2
#    'isSignal' : 0,
#    'isData'   : 0,
#    'scale'    : 1.0,
#}

plot['top'] = {
    'nameHR' : 'tW and t#bar{t}',
    'color': 400,   # kYellow
    'isSignal' : 0,
    'isData'   : 0,
    #'scale'    : 1.0,
    'scale'    : 1.04,
}


plot['WW']  = {
    'color': 851, # kAzure -9
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

plot['ggWW']  = {
    'color': 850, # kAzure -10
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['WWewk']  = {
    'color': 851, # kAzure -9
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

#plot['qqWWqq']  = {
#    'color': 852, # kAzure -8
#    'isSignal' : 0,
#    'isData'   : 0,
#    'scale'    : 1.0
#}
#
#plot['WW2J']  = {
#    'color': 852, # kAzure -8
#    'isSignal' : 0,
#    'isData'   : 0,
#    'scale'    : 1.0
#}

plot['Vg']  = {
    'color': 859, # kAzure -1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VgS_H'] = {
    'color'    : 617,   # kViolet + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VgS_L'] = {
    'color'    : 617,   # kViolet + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

#plot['VBF-V']  = {
#    'color': 859, # kAzure -2
#    'isSignal' : 0,
#    'isData'   : 0,
#    'scale'    : 1.0
#}

plot['WZqcd']  = {
    'color': 858, # kAzure -2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}
plot['WZewk']  = {
    'color': 861, # kAzure -2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['ZZ']  = {
    'color': 860, # kAzure -2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VVV']  = {
    'color': 857, # kAzure -3
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['Wjets']  = {
    'color': 856, # kAzure -4
    'isSignal' : 0,
    'isData'   : 0,
    #'scale'    : 1.0
    'scale'    : 0.98
}

#plot['FAKE']  = {
#    'color': 855, # kAzure -5
#    'isSignal' : 0,
#    'isData'   : 0,
#    'scale'    : 1.0
#}


# HWW

plot['Higgs'] = {
    'nameHR' : 'SM Higgs',
    'color': 632+3, # kRed+3
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1    #
}


#### Signal
#for mp in signal:
#    mpo = mp.replace('darkHiggs_', '')
#    mhs = mpo.split('_')[1] 
#    mx  = mpo.split('_')[3] 
#    mZp = mpo.split('_')[5] 
#    #if not 'mA_400' in mp: continue
#    if not mhs == '160': continue 
#    if not mx == '100' : continue
#    if not mZp in ['200', '400', '1200']: continue
#    plot[mp] = {
#    'nameHR'   : signal[mp]['plot_name'],
#    'isSignal' : 2,
#    'isData'   : 0,
#    'color'    : signal[mp]['color'],   # kViolet + 1
#    'samples'  : [mp],
#    #'scale'    : 100000,
#    }

## data

#plot['DATA']  = {
#                  'nameHR' : 'Data',
#                  'color': 1 ,
#                  'isSignal' : 0,
#                  'isData'   : 1 ,
#                  'isBlind'  : 0
#              }




# additional options
legend['lumi'] = 'L = 59.7/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'





# samples['ggZH_hww'] = {
# samples['ggZH_htt'] = {
# samples['WH_htt'] = {
