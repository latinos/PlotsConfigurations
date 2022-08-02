# structure configuration for datacard

#structure = {}

# keys here must match keys in samples.py
#

# MC
for HT in ['in', 'pt100To250', 'pt250To400', 'pt400To600', 'pt600ToInf']: 
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
