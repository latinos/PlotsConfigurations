# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

massesAndModelsFile = "../massesAndModels.py"
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

#structure['WWewk']  = {
#    'isSignal' : 0,
#    'isData'   : 0
#}

structure['ggWW']  = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['qqWWqq']  = {
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
#
# structure['bbH_hww'] = {
#                   'isSignal' : 0,
#                   'isData'   : 0
#                   }
#
# structure['ttH_hww'] = {
#                   'isSignal' : 0,
#                   'isData'   : 0
#                   }
#
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

structure['FAKE_mu'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }
structure['FAKE_el'] = {
                  'isSignal' : 0,
                  'isData'   : 0,
                  }

for MX in massggh:
  for model in models:
    model_name = '_'+model.replace('.','')
    model_I = model+'_I'
    model_I_H = model+'_I_Honly'
    model_I_B = model+'_I_Bonly'
    model_B = 'B'
    model_H = 'H'
    # Model dependent -> Xsec*BR is applied in later step, so remove "SM"-Xsec*BR
    # SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','GluGluHToWWToLNuQQ_M'+MX)['xs']

    structure['GGH_'+MX+model_name]  = {
        'isSignal': 1,
        'isData'  : 0,
    }
    
    structure['GGH_HSM_'+MX+model_name]  = {
        'isSignal': 1,
        'isData'  : 0,
    }

    structure['GGHINT_'+MX+model_name]  = {
        'isSignal': 1,
        'isData'  : 0,
    }

    structure['GGHSBI_'+MX+model_name]  = {
        'isSignal': 1,
        'isData'  : 0,
    }




############ VBF H->WW ############
for MX in massvbf:
  for model in models:
    model_name = '_'+model.replace('.','')
    model_I = model+'_I'
    model_I_H = model+'_I_Honly'
    model_I_B = model+'_I_Bonly'
    model_B = 'B'
    model_H = 'H' 
    # Model dependent -> Xsec*BR is applied in later step, so remove "SM"-Xsec*BR
    # SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','VBFHToWWToLNuQQ_M'+MX)['xs']
    # noSMxsec = '(1.0/{})'.format(SMxsec)

    structure['QQH_'+MX+model_name]  = {
        'isSignal': 1,
        'isData'  : 0,
    }
 
    structure['QQH_HSM_'+MX+model_name]  = {
        'isSignal': 1,
        'isData'  : 0,
    }
 
 
    structure['QQHINT_'+MX+model_name]  = {
        'isSignal': 1,
        'isData'  : 0,
    }
    structure['QQHSBI_'+MX+model_name]  = {
        'isSignal': 1,
        'isData'  : 0,
    }
 
 


#for MX in plotmasses:
#    xs_ggf = 2*HiggsXS.GetHiggsXS4Sample('YR4','13TeV','GluGluHToWWToLNuQQ_M{}'.format(MX))['xs']
#    xs_vbf = 2*HiggsXS.GetHiggsXS4Sample('YR4','13TeV','VBFHToWWToLNuQQ_M{}'.format(MX))['xs']
#    structure['GGH_'+MX+'_RelW002'] = {
#        'isSignal': 1,
#        'isData'  : 0,
#        'scaleSampleForDatacard' : {cut : xs_ggf for cut in cuts}
#    }
#    print xs_ggf
#
#    structure['QQH_'+MX+'_RelW002'] = {
#        'isSignal': 1,
#        'isData'  : 0,
#        'scaleSampleForDatacard' : {cut : xs_vbf for cut in cuts}
#    }
#


#for MX in ['500', '800', '1000','1500', '2000', '3000']:
#    structure['QQH_'+MX+'_RelW002'] = {
#        'isSignal': 1,
#        'isData'  : 0
#    }





# data


structure['data_obs']  = {
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
