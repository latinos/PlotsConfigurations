# nuisances
#FIXME: TO BE UPDATED FOR 2017!

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV',
               'samples'  : {
                   'WW'       : '1.023',
                   'ggWW'     : '1.023',
                   'top'      : '1.023',
                   'DY'       : '1.023',
                   'Vg'       : '1.023',
                   'VgS'      : '1.023',
                   'WZgS'     : '1.023',
                   'WZgS_L'   : '1.023',
                   'WZgS_H'   : '1.023',
                   'VZ'       : '1.023',
                   'VVV'      : '1.023',
                   'Higgs'    : '1.023',
                   },
               'type'  : 'lnN',
              }

#### FAKES

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
nuisances['fake_syst_em']  = {
               'name'  : 'CMS_hwwem_fake_syst',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_em' : '1.30',
                             },
               }

nuisances['fake_syst_me']  = {
               'name'  : 'CMS_hwwme_fake_syst',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_me' : '1.30',
                             },
               }

nuisances['fake_ele']  = {
                'name'  : 'hww_fake_ele',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_EleUp , fakeW_EleDown ],
                              'Fake_me'     : [ fakeW_EleUp , fakeW_EleDown ],
                             },
}

nuisances['fake_ele_stat']  = {
                'name'  : 'hww_fake_ele_stat',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                              'Fake_me'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                             },
}

nuisances['fake_mu']  = {
                'name'  : 'hww_fake_mu',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_MuUp , fakeW_MuDown ],
                              'Fake_me'     : [ fakeW_MuUp , fakeW_MuDown ],
                             },
}


nuisances['fake_mu_stat']  = {
                'name'  : 'hww_fake_mu_stat',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                              'Fake_me'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                             },
}

##### B-tagger
nuisances['btag_shape_jes']  = {
                'name'  : 'btag_shape_jes',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['('+btagSF+'_up_jes)/('+btagSF+')', '('+btagSF+'_down_jes)/('+btagSF+')'],
                   'WW'      : ['('+btagSF+'_up_jes)/('+btagSF+')', '('+btagSF+'_down_jes)/('+btagSF+')'],
                   'ggWW'    : ['('+btagSF+'_up_jes)/('+btagSF+')', '('+btagSF+'_down_jes)/('+btagSF+')'],
                   'VVV'     : ['('+btagSF+'_up_jes)/('+btagSF+')', '('+btagSF+'_down_jes)/('+btagSF+')'],
                   'VZ'      : ['('+btagSF+'_up_jes)/('+btagSF+')', '('+btagSF+'_down_jes)/('+btagSF+')'],
                   'WZgS'    : ['('+btagSF+'_up_jes)/('+btagSF+')', '('+btagSF+'_down_jes)/('+btagSF+')'],
                   'WZgS_L'  : ['('+btagSF+'_up_jes)/('+btagSF+')', '('+btagSF+'_down_jes)/('+btagSF+')'],
                   'WZgS_H'  : ['('+btagSF+'_up_jes)/('+btagSF+')', '('+btagSF+'_down_jes)/('+btagSF+')'],
                   'top'     : ['('+btagSF+'_up_jes)/('+btagSF+')', '('+btagSF+'_down_jes)/('+btagSF+')'],
                   'Vg'      : ['('+btagSF+'_up_jes)/('+btagSF+')', '('+btagSF+'_down_jes)/('+btagSF+')'],
                   'VgS'     : ['('+btagSF+'_up_jes)/('+btagSF+')', '('+btagSF+'_down_jes)/('+btagSF+')'],
                   'Higgs'   : ['('+btagSF+'_up_jes)/('+btagSF+')', '('+btagSF+'_down_jes)/('+btagSF+')'],
                }
}

nuisances['btag_shape_lf']  = {
                'name'  : 'btag_shape_lf',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['('+btagSF+'_up_lf)/('+btagSF+')', '('+btagSF+'_down_lf)/('+btagSF+')'],
                   'VVV'     : ['('+btagSF+'_up_lf)/('+btagSF+')', '('+btagSF+'_down_lf)/('+btagSF+')'],
                   'VZ'      : ['('+btagSF+'_up_lf)/('+btagSF+')', '('+btagSF+'_down_lf)/('+btagSF+')'],
                   'WZgS'    : ['('+btagSF+'_up_lf)/('+btagSF+')', '('+btagSF+'_down_lf)/('+btagSF+')'],
                   'WZgS_L'  : ['('+btagSF+'_up_lf)/('+btagSF+')', '('+btagSF+'_down_lf)/('+btagSF+')'],
                   'WZgS_H'  : ['('+btagSF+'_up_lf)/('+btagSF+')', '('+btagSF+'_down_lf)/('+btagSF+')'],
                   'WW'      : ['('+btagSF+'_up_lf)/('+btagSF+')', '('+btagSF+'_down_lf)/('+btagSF+')'],
                   'ggWW'    : ['('+btagSF+'_up_lf)/('+btagSF+')', '('+btagSF+'_down_lf)/('+btagSF+')'],
                   'top'     : ['('+btagSF+'_up_lf)/('+btagSF+')', '('+btagSF+'_down_lf)/('+btagSF+')'],
                   'Vg'      : ['('+btagSF+'_up_lf)/('+btagSF+')', '('+btagSF+'_down_lf)/('+btagSF+')'],
                   'VgS'     : ['('+btagSF+'_up_lf)/('+btagSF+')', '('+btagSF+'_down_lf)/('+btagSF+')'],
                   'Higgs'   : ['('+btagSF+'_up_lf)/('+btagSF+')', '('+btagSF+'_down_lf)/('+btagSF+')'],
                }
}

nuisances['btag_shape_hf']  = {
                'name'  : 'btag_shape_hf',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['('+btagSF+'_up_hf)/('+btagSF+')', '('+btagSF+'_down_hf)/('+btagSF+')'],
                   'VVV'     : ['('+btagSF+'_up_hf)/('+btagSF+')', '('+btagSF+'_down_hf)/('+btagSF+')'],
                   'VZ'      : ['('+btagSF+'_up_hf)/('+btagSF+')', '('+btagSF+'_down_hf)/('+btagSF+')'],
                   'WZgS'    : ['('+btagSF+'_up_hf)/('+btagSF+')', '('+btagSF+'_down_hf)/('+btagSF+')'],
                   'WZgS_L'  : ['('+btagSF+'_up_hf)/('+btagSF+')', '('+btagSF+'_down_hf)/('+btagSF+')'],
                   'WZgS_H'  : ['('+btagSF+'_up_hf)/('+btagSF+')', '('+btagSF+'_down_hf)/('+btagSF+')'],
                   'WW'      : ['('+btagSF+'_up_hf)/('+btagSF+')', '('+btagSF+'_down_hf)/('+btagSF+')'],
                   'ggWW'    : ['('+btagSF+'_up_hf)/('+btagSF+')', '('+btagSF+'_down_hf)/('+btagSF+')'],
                   'top'     : ['('+btagSF+'_up_hf)/('+btagSF+')', '('+btagSF+'_down_hf)/('+btagSF+')'],
                   'Vg'      : ['('+btagSF+'_up_hf)/('+btagSF+')', '('+btagSF+'_down_hf)/('+btagSF+')'],
                   'VgS'     : ['('+btagSF+'_up_hf)/('+btagSF+')', '('+btagSF+'_down_hf)/('+btagSF+')'],
                   'Higgs'   : ['('+btagSF+'_up_hf)/('+btagSF+')', '('+btagSF+'_down_hf)/('+btagSF+')'],
                }
}

nuisances['btag_shape_hfstats1']  = {
                'name'  : 'btag_shape_hfstats1',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['('+btagSF+'_up_hfstats1)/('+btagSF+')', '('+btagSF+'_down_hfstats1)/('+btagSF+')'],
                   'VVV'     : ['('+btagSF+'_up_hfstats1)/('+btagSF+')', '('+btagSF+'_down_hfstats1)/('+btagSF+')'],
                   'VZ'      : ['('+btagSF+'_up_hfstats1)/('+btagSF+')', '('+btagSF+'_down_hfstats1)/('+btagSF+')'],
                   'WZgS'    : ['('+btagSF+'_up_hfstats1)/('+btagSF+')', '('+btagSF+'_down_hfstats1)/('+btagSF+')'],
                   'WZgS_L'  : ['('+btagSF+'_up_hfstats1)/('+btagSF+')', '('+btagSF+'_down_hfstats1)/('+btagSF+')'],
                   'WZgS_H'  : ['('+btagSF+'_up_hfstats1)/('+btagSF+')', '('+btagSF+'_down_hfstats1)/('+btagSF+')'],
                   'WW'      : ['('+btagSF+'_up_hfstats1)/('+btagSF+')', '('+btagSF+'_down_hfstats1)/('+btagSF+')'],
                   'ggWW'    : ['('+btagSF+'_up_hfstats1)/('+btagSF+')', '('+btagSF+'_down_hfstats1)/('+btagSF+')'],
                   'top'     : ['('+btagSF+'_up_hfstats1)/('+btagSF+')', '('+btagSF+'_down_hfstats1)/('+btagSF+')'],
                   'Vg'      : ['('+btagSF+'_up_hfstats1)/('+btagSF+')', '('+btagSF+'_down_hfstats1)/('+btagSF+')'],
                   'VgS'     : ['('+btagSF+'_up_hfstats1)/('+btagSF+')', '('+btagSF+'_down_hfstats1)/('+btagSF+')'],
                   'Higgs'   : ['('+btagSF+'_up_hfstats1)/('+btagSF+')', '('+btagSF+'_down_hfstats1)/('+btagSF+')'],
                }
}

nuisances['btag_shape_hfstats2']  = {
                'name'  : 'btag_shape_hfstats2',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['('+btagSF+'_up_hfstats2)/('+btagSF+')', '('+btagSF+'_down_hfstats2)/('+btagSF+')'],
                   'VVV'     : ['('+btagSF+'_up_hfstats2)/('+btagSF+')', '('+btagSF+'_down_hfstats2)/('+btagSF+')'],
                   'VZ'      : ['('+btagSF+'_up_hfstats2)/('+btagSF+')', '('+btagSF+'_down_hfstats2)/('+btagSF+')'],
                   'WZgS'    : ['('+btagSF+'_up_hfstats2)/('+btagSF+')', '('+btagSF+'_down_hfstats2)/('+btagSF+')'],
                   'WZgS_L'  : ['('+btagSF+'_up_hfstats2)/('+btagSF+')', '('+btagSF+'_down_hfstats2)/('+btagSF+')'],
                   'WZgS_H'  : ['('+btagSF+'_up_hfstats2)/('+btagSF+')', '('+btagSF+'_down_hfstats2)/('+btagSF+')'],
                   'WW'      : ['('+btagSF+'_up_hfstats2)/('+btagSF+')', '('+btagSF+'_down_hfstats2)/('+btagSF+')'],
                   'ggWW'    : ['('+btagSF+'_up_hfstats2)/('+btagSF+')', '('+btagSF+'_down_hfstats2)/('+btagSF+')'],
                   'top'     : ['('+btagSF+'_up_hfstats2)/('+btagSF+')', '('+btagSF+'_down_hfstats2)/('+btagSF+')'],
                   'Vg'      : ['('+btagSF+'_up_hfstats2)/('+btagSF+')', '('+btagSF+'_down_hfstats2)/('+btagSF+')'],
                   'VgS'     : ['('+btagSF+'_up_hfstats2)/('+btagSF+')', '('+btagSF+'_down_hfstats2)/('+btagSF+')'],
                   'Higgs'   : ['('+btagSF+'_up_hfstats2)/('+btagSF+')', '('+btagSF+'_down_hfstats2)/('+btagSF+')'],
                }
}

nuisances['btag_shape_lfstats1']  = {
                'name'  : 'btag_shape_lfstats1',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['('+btagSF+'_up_lfstats1)/('+btagSF+')', '('+btagSF+'_down_lfstats1)/('+btagSF+')'],
                   'VVV'     : ['('+btagSF+'_up_lfstats1)/('+btagSF+')', '('+btagSF+'_down_lfstats1)/('+btagSF+')'],
                   'VZ'      : ['('+btagSF+'_up_lfstats1)/('+btagSF+')', '('+btagSF+'_down_lfstats1)/('+btagSF+')'],
                   'WZgS'    : ['('+btagSF+'_up_lfstats1)/('+btagSF+')', '('+btagSF+'_down_lfstats1)/('+btagSF+')'],
                   'WZgS_L'  : ['('+btagSF+'_up_lfstats1)/('+btagSF+')', '('+btagSF+'_down_lfstats1)/('+btagSF+')'],
                   'WZgS_H'  : ['('+btagSF+'_up_lfstats1)/('+btagSF+')', '('+btagSF+'_down_lfstats1)/('+btagSF+')'],
                   'WW'      : ['('+btagSF+'_up_lfstats1)/('+btagSF+')', '('+btagSF+'_down_lfstats1)/('+btagSF+')'],
                   'ggWW'    : ['('+btagSF+'_up_lfstats1)/('+btagSF+')', '('+btagSF+'_down_lfstats1)/('+btagSF+')'],
                   'top'     : ['('+btagSF+'_up_lfstats1)/('+btagSF+')', '('+btagSF+'_down_lfstats1)/('+btagSF+')'],
                   'Vg'      : ['('+btagSF+'_up_lfstats1)/('+btagSF+')', '('+btagSF+'_down_lfstats1)/('+btagSF+')'],
                   'VgS'     : ['('+btagSF+'_up_lfstats1)/('+btagSF+')', '('+btagSF+'_down_lfstats1)/('+btagSF+')'],
                   'Higgs'   : ['('+btagSF+'_up_lfstats1)/('+btagSF+')', '('+btagSF+'_down_lfstats1)/('+btagSF+')'],
                }
}

nuisances['btag_shape_lfstats2']  = {
                'name'  : 'btag_shape_lfstats2',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['('+btagSF+'_up_lfstats2)/('+btagSF+')', '('+btagSF+'_down_lfstats2)/('+btagSF+')'],
                   'VVV'     : ['('+btagSF+'_up_lfstats2)/('+btagSF+')', '('+btagSF+'_down_lfstats2)/('+btagSF+')'],
                   'VZ'      : ['('+btagSF+'_up_lfstats2)/('+btagSF+')', '('+btagSF+'_down_lfstats2)/('+btagSF+')'],
                   'WZgS'    : ['('+btagSF+'_up_lfstats2)/('+btagSF+')', '('+btagSF+'_down_lfstats2)/('+btagSF+')'],
                   'WZgS_L'  : ['('+btagSF+'_up_lfstats2)/('+btagSF+')', '('+btagSF+'_down_lfstats2)/('+btagSF+')'],
                   'WZgS_H'  : ['('+btagSF+'_up_lfstats2)/('+btagSF+')', '('+btagSF+'_down_lfstats2)/('+btagSF+')'],
                   'WW'      : ['('+btagSF+'_up_lfstats2)/('+btagSF+')', '('+btagSF+'_down_lfstats2)/('+btagSF+')'],
                   'ggWW'    : ['('+btagSF+'_up_lfstats2)/('+btagSF+')', '('+btagSF+'_down_lfstats2)/('+btagSF+')'],
                   'top'     : ['('+btagSF+'_up_lfstats2)/('+btagSF+')', '('+btagSF+'_down_lfstats2)/('+btagSF+')'],
                   'Vg'      : ['('+btagSF+'_up_lfstats2)/('+btagSF+')', '('+btagSF+'_down_lfstats2)/('+btagSF+')'],
                   'VgS'     : ['('+btagSF+'_up_lfstats2)/('+btagSF+')', '('+btagSF+'_down_lfstats2)/('+btagSF+')'],
                   'Higgs'   : ['('+btagSF+'_up_lfstats2)/('+btagSF+')', '('+btagSF+'_down_lfstats2)/('+btagSF+')'],
                }
}

nuisances['btag_shape_cferr1']  = {
                'name'  : 'btag_shape_cferr1',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['('+btagSF+'_up_cferr1)/('+btagSF+')', '('+btagSF+'_down_cferr1)/('+btagSF+')'],
                   'VVV'     : ['('+btagSF+'_up_cferr1)/('+btagSF+')', '('+btagSF+'_down_cferr1)/('+btagSF+')'],
                   'VZ'      : ['('+btagSF+'_up_cferr1)/('+btagSF+')', '('+btagSF+'_down_cferr1)/('+btagSF+')'],
                   'WZgS'    : ['('+btagSF+'_up_cferr1)/('+btagSF+')', '('+btagSF+'_down_cferr1)/('+btagSF+')'],
                   'WZgS_L'  : ['('+btagSF+'_up_cferr1)/('+btagSF+')', '('+btagSF+'_down_cferr1)/('+btagSF+')'],
                   'WZgS_H'  : ['('+btagSF+'_up_cferr1)/('+btagSF+')', '('+btagSF+'_down_cferr1)/('+btagSF+')'],
                   'WW'      : ['('+btagSF+'_up_cferr1)/('+btagSF+')', '('+btagSF+'_down_cferr1)/('+btagSF+')'],
                   'ggWW'    : ['('+btagSF+'_up_cferr1)/('+btagSF+')', '('+btagSF+'_down_cferr1)/('+btagSF+')'],
                   'top'     : ['('+btagSF+'_up_cferr1)/('+btagSF+')', '('+btagSF+'_down_cferr1)/('+btagSF+')'],
                   'Vg'      : ['('+btagSF+'_up_cferr1)/('+btagSF+')', '('+btagSF+'_down_cferr1)/('+btagSF+')'],
                   'VgS'     : ['('+btagSF+'_up_cferr1)/('+btagSF+')', '('+btagSF+'_down_cferr1)/('+btagSF+')'],
                   'Higgs'   : ['('+btagSF+'_up_cferr1)/('+btagSF+')', '('+btagSF+'_down_cferr1)/('+btagSF+')'],
                }
}

nuisances['btag_shape_cferr2']  = {
                'name'  : 'btag_shape_cferr2',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['('+btagSF+'_up_cferr2)/('+btagSF+')', '('+btagSF+'_down_cferr2)/('+btagSF+')'],
                   'VVV'     : ['('+btagSF+'_up_cferr2)/('+btagSF+')', '('+btagSF+'_down_cferr2)/('+btagSF+')'],
                   'VZ'      : ['('+btagSF+'_up_cferr2)/('+btagSF+')', '('+btagSF+'_down_cferr2)/('+btagSF+')'],
                   'WZgS'    : ['('+btagSF+'_up_cferr2)/('+btagSF+')', '('+btagSF+'_down_cferr2)/('+btagSF+')'],
                   'WZgS_L'  : ['('+btagSF+'_up_cferr2)/('+btagSF+')', '('+btagSF+'_down_cferr2)/('+btagSF+')'],
                   'WZgS_H'  : ['('+btagSF+'_up_cferr2)/('+btagSF+')', '('+btagSF+'_down_cferr2)/('+btagSF+')'],
                   'WW'      : ['('+btagSF+'_up_cferr2)/('+btagSF+')', '('+btagSF+'_down_cferr2)/('+btagSF+')'],
                   'ggWW'    : ['('+btagSF+'_up_cferr2)/('+btagSF+')', '('+btagSF+'_down_cferr2)/('+btagSF+')'],
                   'top'     : ['('+btagSF+'_up_cferr2)/('+btagSF+')', '('+btagSF+'_down_cferr2)/('+btagSF+')'],
                   'Vg'      : ['('+btagSF+'_up_cferr2)/('+btagSF+')', '('+btagSF+'_down_cferr2)/('+btagSF+')'],
                   'VgS'     : ['('+btagSF+'_up_cferr2)/('+btagSF+')', '('+btagSF+'_down_cferr2)/('+btagSF+')'],
                   'Higgs'   : ['('+btagSF+'_up_cferr2)/('+btagSF+')', '('+btagSF+'_down_cferr2)/('+btagSF+')'],
                }
}

##### Trigger Efficiency

trig_syst = ['(TriggerEffWeight_'+Nlep+'l_u)/(TriggerEffWeight_'+Nlep+'l)', '(TriggerEffWeight_'+Nlep+'l_d)/(TriggerEffWeight_'+Nlep+'l)']

nuisances['trigg']  = {
                'name'  : 'hww_trigger',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : trig_syst ,
                   'VVV'     : trig_syst ,
                   'VZ'      : trig_syst ,
                   'WZgS'    : trig_syst ,
                   'WZgS_L'  : trig_syst ,
                   'WZgS_H'  : trig_syst ,
                   'ggWW'    : trig_syst ,
                   'WW'      : trig_syst ,
                   'top'     : trig_syst ,
                   'Vg'      : trig_syst ,
                   'VgS'     : trig_syst ,
                   'Higgs'   : trig_syst ,
                },
}

##### Electron Efficiency and energy scale

id_syst_ele = [ 'LepSF'+Nlep+'l__ele_'+eleWP+'__Up' , 'LepSF'+Nlep+'l__ele_'+eleWP+'__Do' ]

nuisances['eff_e']  = {
                'name'  : 'eff_e',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : id_syst_ele ,
                   'VVV'     : id_syst_ele ,
                   'VZ'      : id_syst_ele ,
                   'WZgS'    : id_syst_ele ,
                   'WZgS_L'  : id_syst_ele ,
                   'WZgS_H'  : id_syst_ele ,
                   'ggWW'    : id_syst_ele ,
                   'WW'      : id_syst_ele ,
                   'top'     : id_syst_ele ,
                   'Vg'      : id_syst_ele ,
                   'VgS'     : id_syst_ele ,
                   'Higgs'   : id_syst_ele ,
                },
}

nuisances['electronpt']  = {
                'name'  : 'scale_e',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                   #'WZgS'    : ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV'     : ['1', '1'],
                   #'Vg'      : ['1', '1'],
                   'VgS'     : ['1', '1'],
                   'Higgs'   : ['1', '1'],
                 },
                'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__ElepTup', #xrootdPath+treeBaseDir
                'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__ElepTdo',
}

##### Muon Efficiency and energy scale

id_syst_mu = [ 'LepSF'+Nlep+'l__mu_'+muWP+'__Up' , 'LepSF'+Nlep+'l__mu_'+muWP+'__Do' ]

nuisances['eff_m']  = {
                'name'  : 'eff_m',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : id_syst_mu ,
                   'VVV'     : id_syst_mu ,
                   'VZ'      : id_syst_mu ,
                   'WZgS'    : id_syst_mu ,
                   'WZgS_L'  : id_syst_mu ,
                   'WZgS_H'  : id_syst_mu ,
                   'ggWW'    : id_syst_mu ,
                   'WW'      : id_syst_mu ,
                   'top'     : id_syst_mu ,
                   'Vg'      : id_syst_mu ,
                   'VgS'     : id_syst_mu ,
                   'Higgs'   : id_syst_mu ,
                },
}

nuisances['muonpt']  = {
                'name'  : 'scale_m',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                   #'WZgS'    : ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV'     : ['1', '1'],
                   #'Vg'      : ['1', '1'],
                   'VgS'     : ['1', '1'],
                   'Higgs'   : ['1', '1'],
                },
                'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__MupTup',
                'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__MupTdo',
}


##### Jet energy scale

nuisances['jes']  = {
                'name'  : 'scale_j',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                   #'WZgS'    : ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV'     : ['1', '1'],
                   #'Vg'      : ['1', '1'],
                   'VgS'     : ['1', '1'],
                   'Higgs'   : ['1', '1'],
                },
                'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__JESup',
                'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__JESdo',
}

##### MET energy scale

nuisances['met']  = {
                'name'  : 'scale_met',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                   #'WZgS'    : ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV'     : ['1', '1'],
                   #'Vg'      : ['1', '1'],
                   'VgS'     : ['1', '1'],
                   'Higgs'   : ['1', '1'],
                },
                'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__METup',
                'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__METdo',
}


nuisances['singleTopToTTbar']  = {
                'name'  : 'singleTopToTTbar',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : { 
                   'top'     : ['(( (topGenPt>0 && antitopGenPt<0) || (topGenPt<0 && antitopGenPt>0)  ) * 1.0816 + ( topGenPt>0 && antitopGenPt>0 ))',
                                '(( (topGenPt>0 && antitopGenPt<0) || (topGenPt<0 && antitopGenPt>0)  ) * 0.9184 + ( topGenPt>0 && antitopGenPt>0 ))'],
                }
                # tt = 17/18/19 depending on the sample/generator
                # tW = 15/16
           }

## Top pT reweighting uncertainty

nuisances['TopPtRew']  = {
                'name'  : 'TopPtRew',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : ["1.","((1./"+Top_pTrw+" - 1)*(topGenPt>0 && antitopGenPt>0) + 1)"]
                }
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

