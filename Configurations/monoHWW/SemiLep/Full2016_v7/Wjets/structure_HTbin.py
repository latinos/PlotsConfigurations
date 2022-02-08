# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# MC
for HT in ['0_70', '70_100', '100_200', '200_400', '400_600', '600_800', '800_1200', '1200_2500', '2500_inf']:
    structure['Wjets_HT'+HT] = {
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
