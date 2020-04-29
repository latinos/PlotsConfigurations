# structure configuration for datacard

#structure = {}

#if os.path.exists('HTXS_stage1_categories.py') :
#    handle = open('HTXS_stage1_categories.py','r')
#    exec(handle)
#    handle.close()

#for cat,num in HTXSStage1_1Categories.iteritems():
#    if 'QQ2HLNU_' in cat:
#        structure['WH_hww_'+cat.replace('QQ2HLNU_','')] = {
#            'isSignal' : 1,
#            'isData'   : 0
#        }

for bin in ['PTV_LT150','PTV_GT150','FWDH']:
    structure['WH_hww_'+bin] = {
        'isSignal' : 1,
        'isData'   : 0
    }

# keys here must match keys in samples.py
#
structure['Fake']  = {
                  'isSignal' : 0,
                  'isData'   : 0
              }

#structure['DY']  = {
#                  'isSignal' : 0,
#                  'isData'   : 0
#                  }
#
#structure['top']  = {
#                  'isSignal' : 0,
#                  'isData'   : 0
#                  }

structure['WW']  = {
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

structure['VgS']  = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }


structure['WZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }


structure['VVV']  = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ZZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

#structure['ggZZ_tt']  = {
#                  'isSignal' : 0,
#                  'isData'   : 0
#                  }
#
#structure['ggZZ_em']  = {
#                  'isSignal' : 0,
#                  'isData'   : 0
#                  }
#
#structure['ggZZ_ee']  = {
#                  'isSignal' : 0,
#                  'isData'   : 0
#                  }
#
#structure['ggZZ_mm']  = {
#                  'isSignal' : 0,
#                  'isData'   : 0
#                  }

#structure['WH_hww'] = {
#                  'isSignal' : 1,
#                  'isData'   : 0
#                  }

#structure['ZH_hww'] = {
#                  'isSignal' : 1,
#                  'isData'   : 0
#                  }

#structure['ggZH_hww'] = {
#                  'isSignal' : 1,
#                  'isData'   : 0
#                  }

structure['WH_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }


# data


structure['DATA']  = {
                  'isSignal' : 0,
                  'isData'   : 1
              }




