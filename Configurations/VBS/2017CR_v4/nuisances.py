
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

#### FAKES
'''
if Nlep == '2' :
    # already divided by central values in formulas !
    fakeW_EleUp       = fakeW+'_EleUp'
    fakeW_EleDown     = fakeW+'_EleDown'
    fakeW_MuUp        = fakeW+'_MuUp'
    fakeW_MuDown      = fakeW+'_MuDown'
    fakeW_statEleUp   = fakeW+'_statEleUp'
    fakeW_statEleDown = fakeW+'_statEleDown'
    fakeW_statMuUp    = fakeW+'_statMuUp'
    fakeW_statMuDown  = fakeW+'_statMuDown'

else:
    fakeW_EleUp       = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lElUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
    fakeW_EleDown     = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lElDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
    fakeW_MuUp        = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lMuUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
    fakeW_MuDown      = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lMuDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
    fakeW_statEleUp   = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatElUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
    fakeW_statEleDown = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatElDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
    fakeW_statMuUp    = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatMuUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
    fakeW_statMuDown  = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatMuDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'

## FIXME: check the 30% lnN
nuisances['fake_syst']  = {
    'name'  : 'CMS_fake_syst',
    'type'  : 'lnN',
    'samples'  : {
        'Fake_lep' : '1.30',
    },
}

nuisances['fake_ele']  = {
    'name'  : 'fake_ele',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake_lep'     : [ fakeW_EleUp , fakeW_EleDown ],
    },
}
nuisances['fake_ele_stat']  = {
    'name'  : 'fake_ele_stat',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake_lep'      : [ fakeW_statEleUp , fakeW_statEleDown ],
    },
}

nuisances['fake_mu']  = {
    'name'  : 'fake_mu',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake_lep'     : [ fakeW_MuUp , fakeW_MuDown ],
    },
}


nuisances['fake_mu_stat']  = {
    'name'  : 'hww_fake_mu_stat',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'Fake_lep'     : [ fakeW_statMuUp , fakeW_statMuDown ],
    },
}



################################ THEORY UNCERTAINTIES  #################################
nuisances['QCDscale']  = {
    'name'  : 'QCDscale',
    'type'  : 'lnN',
    'samples'  : {
        'ChMisId'  : '1.10',
	    'ttbar'   : '1.10',
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
        'ChMisId'  : '1.005',
	'ttbar'   : '1.01',
        'WZ'   : '1.04',
        'ZZ'   : '1.04',
        'VVV'  : '1.01',
        'DPS'   : '1.01',
        'Vg'    : '1.01' ,
        'WpWp_EWK': '1.01' ,
        'WW_strong': '1.01' ,
    },
}

#FIXME: check this 3%
nuisances['QCDscale_VZ']  = {
    'name'  : 'QCDscale_VZ',
    'samples'  : {
        'WZ' : '1.03',
        'ZZ' : '1.03',
    },
    'type'  : 'lnN'
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
nuisances['charge_flip']  = {
               'name'  : 'charge_flip',
               'samples'  : {
                   'ChMisId'   : '1.07',
				   'ttbar'   : '1.01',
                   },
               'type'  : 'lnN',
              }
'''

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
