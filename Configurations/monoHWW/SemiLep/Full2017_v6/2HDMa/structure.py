# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# MC

structure['DY']  = {
    'isSignal' : 0,
    'isData'   : 0
}


structure['Wjets']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['top'] = {
    'isSignal' : 0,
    'isData'   : 0
}
structure['missing_top'] = {
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

#structure['qqWWqq']  = {
#    'isSignal' : 0,
#    'isData'   : 0
#}
#
#structure['WW2J']  = {
#    'isSignal' : 0,
#    'isData'   : 0
#}

# structure['Wg']  = {
#                   'isSignal' : 0,
#                   'isData'   : 0
#                   }

structure['Vg']  = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['VgS'] = {
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

# structure['Zg']  = {
#                   'isSignal' : 0,
#                   'isData'   : 0
#                   }

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

structure['ggH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['qqH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['WH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ZH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

# structure['ggZH_hww'] = {
#                   'isSignal' : 0,
#                   'isData'   : 0
#                   }

# structure['bbH_hww'] = {
#                   'isSignal' : 0,
#                   'isData'   : 0
#                   }

structure['ttH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ggH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['qqH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

# structure['WH_htt'] = {
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   }

structure['ZH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

# SIGNAL

if os.path.exists(signal_file) :
    handle = open(signal_file,'r')
    exec(handle)
    handle.close()
else:
    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')

for mp in signal:
    structure[mp] = {
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

for nuis in nuisances.itervalues():
  if 'cutspost' in nuis:
    nuis['cuts'] = nuis['cutspost'](nuis, cuts)

    print nuis
