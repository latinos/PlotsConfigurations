
# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi2016']  = {
               'name'  : 'lumi_13TeV_2016', 
               'samples'  : {
                   'ChMisId'  : '1.025',
                   'Vg'   : '1.025',
                   'WZ'   : '1.058',
                   'ZZ'   : '1.025',
                   'VVV'  : '1.025',
                   'DPS'   : '1.025',
                   'WW_EWK'    : '1.025',
                   'WW_strong'    : '1.025',
                   },
               'type'  : 'lnN',
              }



## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
              'samples' : {}
             }


