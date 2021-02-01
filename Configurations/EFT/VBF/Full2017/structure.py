
# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py    
#                    


structure['WH_H0PM'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['WH_H0M'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ZH_H0PM'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

structure['ZH_H0M'] = {
                  'isSignal' : 1,
                  'isData'   : 0
                  }

#############

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

structure['ggH_hww'] = {
                  'isSignal' : 0,
                  'isData'   : 0
                  }

structure['qqH_hww'] = {
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



