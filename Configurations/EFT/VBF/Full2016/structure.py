
# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py    
#                    

structure['ggH_T1'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ggH_T2'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ggH_T3'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }


###########################################

structure['VBF_T1'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['VBF_T2'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['VBF_T3'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['VBF_T4'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['VBF_T5'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

####################################

structure['WH_T1'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WH_T2'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WH_T3'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WH_T4'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WH_T5'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

#####################################


structure['ZH_T1'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ZH_T2'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ZH_T3'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ZH_T4'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ZH_T5'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

#####################################


structure['WW'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['DY'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['TTbar'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['qqH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['ggH_htt'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

# data

structure['DATA']  = { 
                  'isSignal' : 0,
                  'isData'   : 1 
              }

print "INSTRUCTURE"
print cuts
#print nuisances['WWresum0j']
print "OK"

#for nuis in nuisances.itervalues():
#  if 'cutspost' in nuis:
#    nuis['cuts'] = nuis['cutspost'](nuis, cuts)
#    print nuis



