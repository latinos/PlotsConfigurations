# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# MC

structure['DY']  = {
    'isSignal' : 0,
    'isData'   : 0
}

#wjets_split = ['2j_dRjj_low', '3j_dRjj_low', '4j_dRjj_low', '2j_dRjj_hig', '3j_dRjj_hig', '4j_dRjj_hig']
#wjets_samples = []
#for fix in wjets_split:
#    wjets_samples.append('Wjets_'+fix)
#
#for samp in wjets_samples:
#    structure[samp]  = {
#        'isSignal' : 0,
#        'isData'   : 0
#    }
structure['Wjets']  = {
    'isSignal' : 0,
    'isData'   : 0
}
structure['WjetsMjj']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['top'] = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['WW']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['WWewk']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['ggWW']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['Vg']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['VgS_L'] = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['VgS_H'] = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['VBF-V']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['WZqcd']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['WZewk']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['ZZ']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['VVV']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['FAKE'] = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['Higgs'] = {
    'isSignal' : 0,
    'isData'   : 0
}

# SIGNAL

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
#for mp in signal:
#    structure[mp] = {
#for mp in ['mhs_160_mx_100_mZp_500', 'mhs_180_mx_100_mZp_1200', 'mhs_180_mx_100_mZp_1500', 'mhs_180_mx_100_mZp_2000']:
for mp in ['mhs_160_mx_100_mZp_500']:
    structure['darkHiggs_'+mp] = {
        'isSignal': 2,
        'isData'  : 0,
    }

# DATA
structure['DATA']  = {
    'isSignal' : 0,
    'isData'   : 1
}



# print "INSTRUCTURE"
# print cuts
# print nuisances['WWresum0j']
# print "OK"

#for nuis in nuisances.itervalues():
#  if 'cutspost' in nuis:
#    nuis['cuts'] = nuis['cutspost'](nuis, cuts)
#
#    print nuis
