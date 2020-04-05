# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py    
#                    
structure['DY']  = {  
                  'isSignal' : 0,
                  'isData'   : 0
              }

structure['top'] = {   
                  'isSignal' : 0,
                  'isData'   : 0 
                  }

structure['ttW']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ttZ']  = {
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

structure['VZ']  = { 
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
structure['WWW']  = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ZZ']  = {
                  'isSignal' : 0,
                  'isData'   : 0    
                  }

structure['ggH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['qqH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

structure['WH_hww'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }

#if os.path.exists('HTXS_stage1_categories.py') :
#    handle = open('HTXS_stage1_categories.py','r')
#    exec(handle)
#    handle.close()
 
#for cat in HTXSStage1_1Categories.iteritems():
#    if 'QQ2HLL' in cat:
#        structure['ZH_hww_'+cat.replace('QQ2HLL_','')] = {
#            'isSignal' : 1,
#            'isData'   : 0
#        }
#    if 'GG2HLL' in cat:
#        structure['ggZH_hww_'+cat.replace('GG2HLL_','')] = {
#            'isSignal' : 1,
#            'isData'   : 0
#        }

for bin in ['PTV_LT150','PTV_GT150','FWDH']:
    structure['ZH_hww_'+bin] = {
        'isSignal' : 1,
        'isData'   : 0
    }
    structure['ggZH_hww_'+bin] = {
        'isSignal' : 1,
        'isData'   : 0
    }

structure['ggH_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }

structure['qqH_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }

structure['WH_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }

structure['ZH_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0,
                  }

structure['H_htt'] = {
                  'isSignal' : 1,
                  'isData'   : 0    
                  }


# data


structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }




