# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# MC
for HT in ['0J', '1J', '2J', 'pt100to250', 'pt250to400', 'pt400to600', 'pt600toInf']: 
    structure['Wjets_NLOm_'+HT] = {
        'isSignal' : 0,
        'isData'   : 0
    }
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
