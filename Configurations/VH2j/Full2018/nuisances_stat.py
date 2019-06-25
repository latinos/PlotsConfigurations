# nuisances
#FIXME: TO BE UPDATED FOR 2017!

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV',
               'samples'  : {
                   'DY'       : '1.023',
                   #'top'      : '1.023',    | These 3 backgrounds are data driven, no need to include the luminosity uncertainty
                   'WW'       : '1.023',    
                   'ggWW'     : '1.023',
                   'Vg'       : '1.023',
                   'VgS'      : '1.023',
                   'WZgS'     : '1.023',
                   'WZgS_L'   : '1.023',
                   'WZgS_H'   : '1.023',
                   'VZ'       : '1.023',
                   'VVV'      : '1.023',
                   'ggH_hww'  : '1.023',
                   'qqH_hww'  : '1.023',
                   'ZH_hww'   : '1.023',
                   'ggZH_hww' : '1.023',
                   'WH_hww'   : '1.023',
                   'bbH_hww'  : '1.023',
                   'ttH_hww'  : '1.023',
                   'ggH_htt'  : '1.023',
                   'qqH_htt'  : '1.023',
                   'ZH_htt'   : '1.023',
                   'WH_htt'   : '1.023',
                   'H_htt'    : '1.023',
                   },
               'type'  : 'lnN',
              }



## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {}
             }

