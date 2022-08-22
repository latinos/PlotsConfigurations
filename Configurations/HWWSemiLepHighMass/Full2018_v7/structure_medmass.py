# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

massesAndModelsFile = "massesAndModels.py"
if os.path.exists(massesAndModelsFile) :
    handle = open(massesAndModelsFile,'r')
    exec(handle)
    handle.close()
else:
    print "!!! ERROR file ", massesAndModelsFile, " does not exist."

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

structure['qqWWqq']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['WW2J']  = {
    'isSignal' : 0,
    'isData'   : 0
}

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

structure['VZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }


structure['VVV']  = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

#structure['QCD'] = {
#    'isSignal' : 0,
#    'isData'   : 0
##}

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

# structure['ttH_hww'] = {
#                   'isSignal' : 0,
#                   'isData'   : 0
#                   }

structure['ggH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['qqH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['WH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

structure['ZH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }


structure['FAKE'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }


for MX in plotmasses:
    xs_ggf = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','GluGluHToWWToLNuQQ_M{}'.format(MX))['xs']
    xs_vbf = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','VBFHToWWToLNuQQ_M{}'.format(MX))['xs']
    structure['GGH_'+MX+'_RelW002'] = {
        'isSignal': 1,
        'isData'  : 0,
        'scaleSampleForDatacard' : {cut : xs_ggf for cut in cuts}
    }
    print xs_ggf

    structure['QQH_'+MX+'_RelW002'] = {
        'isSignal': 1,
        'isData'  : 0,
        'scaleSampleForDatacard' : {cut : xs_vbf for cut in cuts}
    }



#for MX in ['500', '800', '1000','1500', '2000', '3000']:
#    structure['QQH_'+MX+'_RelW002'] = {
#        'isSignal': 1,
#        'isData'  : 0
#    }





# data


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
