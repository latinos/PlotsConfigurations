
# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity
# luminosity uncertainty is 2.3%

nuisances['lumi']  = {
    'name'  : 'lumi_13TeV_2017',
    'samples'  : {
        #'DY'       : '1.023',    |
        #'top'      : '1.023',    | These 3 backgrounds are data driven, no need to include the luminosity uncertainty
        #'WW'       : '1.023',    |
        'Vg'       : '1.023',
        #'VgS'      : '1.023',
        #'WZgS'     : '1.023',
        #'WZgS_L'   : '1.023',
        #'WZgS_H'   : '1.023',
        'ZZ'   : '1.023',
        'WZ'       : '1.023',
        'VVV'      : '1.023',
        'DPS'  : '1.023',
        'WW_strong'  : '1.023',
        'WpWp_EWK'   : '1.023',
    },
    'type'  : 'lnN',
}

################################ THEORY UNCERTAINTIES  #################################
nuisances['QCDscale']  = {
    'name'  : 'QCDscale',
    'type'  : 'lnN',
    'samples'  : {
        'WZ'   : '1.10',
        'ZZ'   : '1.10',
        'VVV'  : '1.10',
        'DPS'   : '1.10',
        'Vg'    : '1.10' ,
        'WpWp_EWK': '1.10' ,
        'WW_strong': '1.10' ,
    },
}

nuisances['QCDscale_gg_accept']  = {
    'name'  : 'QCDscale_gg_accept',
    'type'  : 'lnN',
    'samples'  : {
         'DY': '0.976/1.012' ,
         'WpWp_EWK': '0.994/0.981' ,
    },
 }


# pdf uncertainty

nuisances['pdf']  = {
    'name'  : 'pdf',
    'type'  : 'lnN',
    'samples'  : {
        'WZ'   : '1.01',
        'ZZ'   : '1.01',
        'VVV'  : '1.01',
        'DPS'   : '1.01',
        'Vg'    : '1.01' ,
        'WpWp_EWK': '1.01' ,
        'WW_strong': '1.01' ,
    },
}


################################ BKG ESTIMATION UNCERTAINTIES  #################################

nuisances['WZ_norm']  = {
               'name'  : 'WZ_norm',
               'samples'  : {
                   'WZ'   : '1.3',
		},
               'type'  : 'lnN',
}

#7% of uncertainty due to systematic uncertainties on simulations

# 30% of global uncertainty
nuisances['fake_syst']  = {
               'name'  : 'fake_syst',
               'type'  : 'lnN',
               'samples'  : {
                   'Fake_lep' : '1.30',
                   },
}



# statistical fluctuation
# on MC/data
# "stat" is a special word to identify this nuisance
# Use the following if you want to apply the automatic combine MC stat nuisances->Faster than bin-by-bin
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
              'samples' : {}
             }




# Differnt type of uncentainties: type->ln N: (modify only event yeld) use a lognorm distributions with sigma = uncertainty. For normalization rateParam
                                        # can be used--> use a uniform distribution;
                                      # Shape: modify not only the events yelds but the event selection too (the shape) will run the varied shapes
                                             # according to the following two possible kinds
                                # kind-> weight: Use the specified weight to reweight events;
                                       # tree: uses the provided alternative trees;
# The MC statistics is a particular uncertainty: is caused by our finite statistics used to elaborate the template fits. Two approach: unfied and bin-by-bin (bbb)
