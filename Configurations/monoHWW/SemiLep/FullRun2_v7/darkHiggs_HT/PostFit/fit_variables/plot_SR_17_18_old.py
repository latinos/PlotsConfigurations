groupPlot['Higgs'] = {
    'nameHR' : "SM Higgs",
    'isSignal' : 0,
    'color': 632+3, #kRed +3
    'samples'  : ['Higgs']
}

groupPlot['multiB'] = {
    'nameHR' : 'multi boson',
    'isSignal' : 0,
    'color': 857, # kAzure -3  
    'samples'  : ['WW', 'WWewk', 'ggWW', 'WZqcd', 'WZewk', 'ZZ', 'VVV', 'Vg', 'VgS_L', 'VgS_H', 'VBF-V'] 
}

groupPlot['DY'] = {
    'nameHR' : "DY",
    'isSignal' : 0,
    'color': 418,    # kGreen+2
    'samples'  : ['DY']
}

groupPlot['FAKE'] = {
    'nameHR' : "non-prompt",
    'isSignal' : 0,
    'color'    : 617,   # kViolet + 1
    'samples'  : ['FAKE']
    #'samples'  : ['FAKE_HT']
}


groupPlot['top'] = {
    'nameHR' : 'tW and t#bar{t}',
    'isSignal' : 0,
    'color': 400,   # kYellow
    #'samples'  : ['ttop', 'stop'],
    #'scale'    : 1.11,
    'samples'  : ['top']
}


#wjets_split = ['2j_dRjj_hig', '3j_dRjj_hig', '4j_dRjj_hig', '2j_dRjj_low', '3j_dRjj_low', '4j_dRjj_low']
#wjets_samples = []
#for fix in wjets_split:
#    wjets_samples.append('Wjets_'+fix)
#
#col_idx = 0
#for samp in wjets_samples:
#    groupPlot[samp] = {
#        'nameHR' : samp,
#        'isSignal' : 0,
#        'color': 2+col_idx, #921
#        'samples'  : [samp]
#    }
#    col_idx += 1

groupPlot['Wjets'] = {
    'nameHR' : "W+jets",
    'isSignal' : 0,
    'color': 921,      # kGray + 1
    'samples'  : ['Wjets']
}

### SIGNAL
#if os.path.exists(signal_file) :
#    handle = open(signal_file,'r')
#    exec(handle)
#    handle.close()
#else:
#    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')

signal = {
    'darkHiggs_mhs_160_mx_100_mZp_500' : {
        'plot_name': 'signal mZp 500',
        'color': 632,
    },
}

for mp in signal:
    #if not 'mA_400' in mp: continue
    mpo = mp.replace('darkHiggs_', '')
    mhs = mpo.split('_')[1] 
    mx  = mpo.split('_')[3] 
    mZp = mpo.split('_')[5] 
    #if not 'mA_400' in mp: continue
    #if not mhs == '160' and not mx == '100' in mp: continue
    if not mhs == '160': continue 
    if not mx == '100' : continue
    #if not mZp in ['200', '400', '1200']: continue
    if not mZp in ['500']: continue
    groupPlot[mp] = {
    'nameHR'   : signal[mp]['plot_name'],
#    'isSignal' : 2,
    'isSignal' : 1,
    'color'    : signal[mp]['color'],   # kViolet + 1
    'samples'  : [mp],
    }

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

plot['top'] = {
    'nameHR' : 'tW and t#bar{t}',
    'color': 400,   # kYellow
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0,
    #'scale'    : 1.003 # CRonly fit CR=1bin r=0 frozen
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

plot['VBF-V']  = {
    'color': 859, # kAzure -2
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

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
    'scale'    : 1.0
    #'scale'    : 0.965 # CRonly fit CR=1bin r=0 frozen
}

##sf_dict = {
##    'Wjets_2j_dRjj_hig': 1.,
##    'Wjets_3j_dRjj_low': 1.,
##    'Wjets_4j_dRjj_hig': 1.,
##    'Wjets_3j_dRjj_hig': 1.,
##    'Wjets_4j_dRjj_low': 1.,
##    'Wjets_2j_dRjj_low': 1.,
##}
#sf_dict = {
#    'Wjets_2j_dRjj_low': 1.1173687209537642,
#    'Wjets_2j_dRjj_hig': 0.9008660566546975,
#    'Wjets_3j_dRjj_low': 1.155846474531934,
#    'Wjets_3j_dRjj_hig': 1.0256131556183152,
#    'Wjets_4j_dRjj_low': 1.3431281129338135,
#    'Wjets_4j_dRjj_hig': 1.3508900102095747,
#}
#for samp in wjets_samples:
#    plot[samp]  = {
#        'color': 856, # kAzure -4
#        'isSignal' : 0,
#        'isData'   : 0,
#        'scale'    : sf_dict[samp]
#        #'scale'    : 0.98
#    }

#plot['FAKE_HT']  = {
plot['FAKE']  = {
    'color': 855, # kAzure -5
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}


# HWW

plot['Higgs'] = {
    'nameHR' : 'SM Higgs',
    'color': 632+3, # kRed+3
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1    #
}


### Signal
for mp in signal:
    mpo = mp.replace('darkHiggs_', '')
    mhs = mpo.split('_')[1] 
    mx  = mpo.split('_')[3] 
    mZp = mpo.split('_')[5] 
    #if not 'mA_400' in mp: continue
    if not mhs == '160': continue 
    if not mx == '100' : continue
    if not mZp in ['500']: continue
    plot[mp] = {
        'nameHR'   : signal[mp]['plot_name'],
        'isSignal' : 2,
        'isData'   : 0,
        'color'    : signal[mp]['color'],   # kViolet + 1
        'samples'  : [mp],
        #'scale'    : 100000,
    }

## data

plot['DATA']  = {
    'nameHR' : 'Data',
    'color': 1 ,
    'isSignal' : 0,
    'isData'   : 1 ,
    'isBlind'  : 0
}

# additional options
legend['sqrt'] = '#sqrt{s} = 13 TeV'
legend['lumi'] = 'L = 101.2/fb'  

