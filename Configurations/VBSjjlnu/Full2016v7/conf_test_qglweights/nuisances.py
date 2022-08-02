## Use the following if you want to apply the automatic combine MC stat nuisances.

mc =["DY", "top",  "Wjets_HT", "VV", "VVV", "Vg", "VgS", "VBS"]

nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {}
             }


# #FatJet mass scale and resolution
nuisances['QGLmorphing']  = {
    'name': 'QGLmorph',
    'kind': 'suffix',
    'type': 'shape',
    'samples': dict((skey, ['1.','1.']) for skey in mc),

}