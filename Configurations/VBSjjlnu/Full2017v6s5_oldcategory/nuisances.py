# # nuisances
# #FIXME: TO BE UPDATED FOR 2017!

# # name of samples here must match keys in samples.py 

# ################################ EXPERIMENTAL UNCERTAINTIES  #################################

# #### Luminosity

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV_2017',
               'samples'  : {
                   'Wjets'    : '1.023',
                   'VV'       : '1.023',
                   'VVV'    : '1.023',
                   'VBF-V'       : '1.023',
                   'top'    : '1.023',
                   'DY'       : '1.023',
                   'VBS'       : '1.023',
                   },
               'type'  : 'lnN',
              }

# #### FAKES

# if Nlep == '2' :
#   # already divided by central values in formulas !
#   fakeW_EleUp       = fakeW+'_EleUp'
#   fakeW_EleDown     = fakeW+'_EleDown'
#   fakeW_MuUp        = fakeW+'_MuUp'
#   fakeW_MuDown      = fakeW+'_MuDown'
#   fakeW_statEleUp   = fakeW+'_statEleUp'
#   fakeW_statEleDown = fakeW+'_statEleDown'
#   fakeW_statMuUp    = fakeW+'_statMuUp'
#   fakeW_statMuDown  = fakeW+'_statMuDown'

# else:
#   fakeW_EleUp       = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lElUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#   fakeW_EleDown     = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lElDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#   fakeW_MuUp        = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lMuUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#   fakeW_MuDown      = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lMuDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#   fakeW_statEleUp   = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatElUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#   fakeW_statEleDown = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatElDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#   fakeW_statMuUp    = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatMuUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
#   fakeW_statMuDown  = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatMuDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'

nuisances['fake_syst']  = {
               'name'  : 'CMS_vbsjjlnu_fake_syst_2017',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_me' : '1.30',
                             },
               }

# nuisances['fake_ele']  = {
#                 'name'  : 'hww_fake_ele_2017',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {
#                               'Fake_em'     : [ fakeW_EleUp , fakeW_EleDown ],
#                               'Fake_me'     : [ fakeW_EleUp , fakeW_EleDown ],
#                              },
# }

# nuisances['fake_ele_stat']  = {
#                 'name'  : 'hww_fake_ele_stat_2017',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {
#                               'Fake_em'      : [ fakeW_statEleUp , fakeW_statEleDown ],
#                               'Fake_me'      : [ fakeW_statEleUp , fakeW_statEleDown ],
#                              },
# }

# nuisances['fake_mu']  = {
#                 'name'  : 'hww_fake_mu_2017',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {
#                               'Fake_em'     : [ fakeW_MuUp , fakeW_MuDown ],
#                               'Fake_me'     : [ fakeW_MuUp , fakeW_MuDown ],
#                              },
# }


# nuisances['fake_mu_stat']  = {
#                 'name'  : 'hww_fake_mu_stat_2017',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {
#                               'Fake_em'     : [ fakeW_statMuUp , fakeW_statMuDown ],
#                               'Fake_me'     : [ fakeW_statMuUp , fakeW_statMuDown ],
#                              },
# }

##### B-tagger
nuisances['btag_shape_jes']  = {
                'name'  : 'btag_shape_jes_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples': {
                   'DY'      : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'VV'      : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'VVV'     : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'VBF-V'   : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'top'   : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'VBS'    : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'Wjets'  : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                }
}

# nuisances['btag_shape_lf']  = {
#                 'name'  : 'btag_shape_lf_2017',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {
#                    'DY'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'VVV'     : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'VZ'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'WZgS'    : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'WZgS_L'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'WZgS_H'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'WW'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'WWewk'   : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'ggWW'    : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'top'     : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'Vg'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'VgS'     : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'ggH_hww' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'qqH_hww' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'WH_hww'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'ZH_hww'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'ggZH_hww': ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'bbH_hww' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'ttH_hww' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'H_htt'   : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'ggH_htt' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'qqH_htt' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'ZH_htt'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                    'WH_htt'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
#                 }
# }

# nuisances['btag_shape_hf']  = {
#                 'name'  : 'btag_shape_hf_2017',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {
#                    'DY'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'VVV'     : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'VZ'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'WZgS'    : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'WZgS_L'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'WZgS_H'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'WW'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'WWewk'   : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'ggWW'    : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'top'     : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'Vg'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'VgS'     : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'ggH_hww' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'qqH_hww' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'WH_hww'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'ZH_hww'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'ggZH_hww': ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'bbH_hww' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'ttH_hww' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'H_htt'   : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'ggH_htt' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'qqH_htt' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'ZH_htt'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                    'WH_htt'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
#                 }
# }

# nuisances['btag_shape_hfstats1']  = {
#                 'name'  : 'btag_shape_hfstats1_2017',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {
#                    'DY'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'VVV'     : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'VZ'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'WZgS'    : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'WZgS_L'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'WZgS_H'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'WW'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'WWewk'   : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'ggWW'    : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'top'     : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'Vg'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'VgS'     : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'ggH_hww' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'qqH_hww' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'WH_hww'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'ZH_hww'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'ggZH_hww': ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'bbH_hww' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'ttH_hww' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'H_htt'   : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'ggH_htt' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'qqH_htt' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'ZH_htt'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                    'WH_htt'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
#                 }
# }

# nuisances['btag_shape_hfstats2']  = {
#                 'name'  : 'btag_shape_hfstats2_2017',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {
#                    'DY'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'VVV'     : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'VZ'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'WZgS'    : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'WZgS_L'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'WZgS_H'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'WW'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'WWewk'   : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'ggWW'    : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'top'     : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'Vg'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'VgS'     : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'ggH_hww' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'qqH_hww' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'WH_hww'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'ZH_hww'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'ggZH_hww': ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'bbH_hww' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'ttH_hww' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'H_htt'   : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'ggH_htt' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'qqH_htt' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'ZH_htt'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                    'WH_htt'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
#                 }
# }

# nuisances['btag_shape_lfstats1']  = {
#                 'name'  : 'btag_shape_lfstats1_2017',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {
#                    'DY'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'VVV'     : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'VZ'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'WZgS'    : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'WZgS_L'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'WZgS_H'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'WW'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'WWewk'   : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'ggWW'    : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'top'     : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'Vg'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'VgS'     : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'ggH_hww' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'qqH_hww' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'WH_hww'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'ZH_hww'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'ggZH_hww': ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'bbH_hww' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'ttH_hww' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'H_htt'   : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'ggH_htt' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'qqH_htt' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'ZH_htt'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                    'WH_htt'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
#                 }
# }

# nuisances['btag_shape_lfstats2']  = {
#                 'name'  : 'btag_shape_lfstats2_2017',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {
#                    'DY'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'VVV'     : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'VZ'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'WZgS'    : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'WZgS_L'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'WZgS_H'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'WW'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'WWewk'   : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'ggWW'    : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'top'     : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'Vg'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'VgS'     : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'ggH_hww' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'qqH_hww' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'WH_hww'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'ZH_hww'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'ggZH_hww': ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'bbH_hww' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'ttH_hww' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'H_htt'   : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'ggH_htt' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'qqH_htt' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'ZH_htt'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                    'WH_htt'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
#                 }
# }

# nuisances['btag_shape_cferr1']  = {
#                 'name'  : 'btag_shape_cferr1_2017',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {
#                    'DY'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'VVV'     : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'VZ'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'WZgS'    : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'WZgS_L'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'WZgS_H'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'WW'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'WWewk'   : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'ggWW'    : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'top'     : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'Vg'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'VgS'     : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'ggH_hww' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'qqH_hww' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'WH_hww'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'ZH_hww'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'ggZH_hww': ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'bbH_hww' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'ttH_hww' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'H_htt'   : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'ggH_htt' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'qqH_htt' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'ZH_htt'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                    'WH_htt'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
#                 }
# }

# nuisances['btag_shape_cferr2']  = {
#                 'name'  : 'btag_shape_cferr2_2017',
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {
#                    'DY'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'VVV'     : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'VZ'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'WZgS'    : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'WZgS_L'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'WZgS_H'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'WW'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'WWewk'   : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'ggWW'    : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'top'     : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'Vg'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'VgS'     : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'ggH_hww' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'qqH_hww' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'WH_hww'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'ZH_hww'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'ggZH_hww': ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'bbH_hww' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'ttH_hww' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'H_htt'   : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'ggH_htt' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'qqH_htt' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'ZH_htt'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                    'WH_htt'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
#                 }
# }

# if useEmbeddedDY:
#   del nuisances['btag_shape_jes']['samples']['DY']
#   del nuisances['btag_shape_lf']['samples']['DY']
#   del nuisances['btag_shape_hf']['samples']['DY']
#   del nuisances['btag_shape_hfstats1']['samples']['DY']
#   del nuisances['btag_shape_hfstats2']['samples']['DY']
#   del nuisances['btag_shape_lfstats1']['samples']['DY']
#   del nuisances['btag_shape_lfstats2']['samples']['DY']
#   del nuisances['btag_shape_cferr1']['samples']['DY']
#   del nuisances['btag_shape_cferr2']['samples']['DY']

# ##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_'+Nlep+'l_u)/(TriggerEffWeight_'+Nlep+'l))*(TriggerEffWeight_'+Nlep+'l>0.02) + (TriggerEffWeight_'+Nlep+'l<=0.02)', '(TriggerEffWeight_'+Nlep+'l_d)/(TriggerEffWeight_'+Nlep+'l)']

nuisances['trigg']  = {
                'name'  : 'trigger_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : trig_syst,
                   'VV'      : trig_syst,
                   'VVV'     : trig_syst,
                   'VBF-V'   : trig_syst,
                   'top'   : trig_syst,
                   'VBS'     : trig_syst,
                   'Wjets'   : trig_syst,
                },
}

# ##### Electron Efficiency and energy scale

ele_id_syst_up = '(abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF'+'_Up[0])/\
                    (Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (abs(Lepton_pdgId[0]) == 13)'
ele_id_syst_do = '(abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF'+'_Down[0])/\
                    (Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (abs(Lepton_pdgId[0]) == 13)'
mu_id_syst_up = '(abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF'+'_Up[0])/\
                    (Lepton_tightMuon_'+muWP+'_TotSF[0]) + (abs(Lepton_pdgId[0]) == 11)'
mu_id_syst_do = '(abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF'+'_Down[0])/\
                    (Lepton_tightMuon_'+muWP+'_TotSF[0]) + (abs(Lepton_pdgId[0]) == 11)'

id_syst_ele = [ ele_id_syst_up, ele_id_syst_do ]
id_syst_mu = [ mu_id_syst_up, mu_id_syst_do ]

nuisances['eff_e']  = {
                'name'  : 'eff_e_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  :  {
                   'DY'      : id_syst_ele,
                   'VV'      : id_syst_ele,
                   'VVV'     : id_syst_ele,
                   'VBF-V'   : id_syst_ele,
                   'top'   : id_syst_ele,
                   'VBS'     : id_syst_ele,
                   'Wjets'   : id_syst_ele
                },
}

nuisances['electronpt']  = {
                'name'  : 'scale_e_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1','1'],
                   'VV'      : ['1','1'],
                   'VVV'     : ['1','1'],
                   'VBF-V'   : ['1','1'],
                   'top'   : ['1','1'],
                   'VBS'     : ['1','1'],
                   'Wjets'   : ['1','1']
                 },
                'folderUp'   :  directory_bkg +"_ElepTup",
                'folderDown' : directory_bkg +"_ElepTdo",
}



# ##### Muon Efficiency and energy scale


nuisances['eff_m']  = {
                'name'  : 'eff_m_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : id_syst_mu,
                   'VV'      : id_syst_mu,
                   'VVV'     : id_syst_mu,
                   'VBF-V'   : id_syst_mu,
                   'top'   : id_syst_mu,
                   'VBS'     : id_syst_mu,
                   'Wjets'   : id_syst_mu
                },
}

nuisances['muonpt']  = {
                'name'  : 'scale_m_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1','1'],
                   'VV'      : ['1','1'],
                   'VVV'     : ['1','1'],
                   'VBF-V'   : ['1','1'],
                   'top'   : ['1','1'],
                   'VBS'     : ['1','1'],
                   'Wjets'   : ['1','1']
                },
                'folderUp'   : directory_bkg +"_MupTup",
                'folderDown' : directory_bkg +"_MupTdo",
}


##### Jet energy scale

nuisances['jes']  = {
                'name'  : 'scale_j_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1','1'],
                   'VV'      : ['1','1'],
                   'VVV'     : ['1','1'],
                   'VBF-V'   : ['1','1'],
                   'top'   : ['1','1'],
                   'VBS'     : ['1','1'],
                   'Wjets'   : ['1','1']
                },
                'folderUp'   : directory_bkg +"_JESup",
                'folderDown' : directory_bkg +"_JESdo",
}


# ##### MET energy scale

nuisances['met']  = {
                'name'  : 'scale_met_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                 'samples'  : {
                   'DY'      : ['1','1'],
                   'VV'      : ['1','1'],
                   'VVV'     : ['1','1'],
                   'VBF-V'   : ['1','1'],
                   'top'   : ['1','1'],
                   'VBS'     : ['1','1'],
                   'Wjets'   : ['1','1']
                },
                'folderUp'   : directory_bkg +"_METup",
                'folderDown' : directory_bkg +"_METdo",
}

# # Prefire correction
prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire']  = {
                'name'  : 'CMS_eff_prefiring_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    'DY'      : prefire_syst,
                   'VV'      : prefire_syst,
                   'VVV'     : prefire_syst,
                   'VBF-V'   : prefire_syst,
                   'top'   : prefire_syst,
                   'VBS'     : prefire_syst,
                   'Wjets'   : prefire_syst
                }
}
# if useEmbeddedDY: del nuisances['prefire']['samples']['DY']


# # Di-Tau vetoing for embedding
# if useEmbeddedDY: 
#   nuisances['embedveto']  = {
#                   'name'  : 'CMS_embed_veto',
#                   'kind'  : 'weight',
#                   'type'  : 'shape',
#                   'samples'  : {
#                      'DY'       : ['1', '1'],
#                      'DYveto'   : ['0.1', '-0.1'],
#                   }
#   }


# #
# # PS and UE
# #
# nuisances['PS']  = {
#                 'name'  : 'PS',
#                 'skipCMS' : 1,
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples'  : {
#                   'WW'      : ['PSWeight[0]', 'PSWeight[3]'],
#                   },
#                 }

# nuisances['UE']  = {
#                 'name'  : 'UE', 
#                 'skipCMS' : 1,
#                 'kind'  : 'tree',
#                 'type'  : 'shape',
#                 'samples'  : {
# #                  'WW'      : ['1.12720771849', '1.13963144574'],
#                   'ggH_hww' : ['1.00211385568', '0.994966378288'], 
#                   'qqH_hww' : ['1.00367895901', '0.994831373195']
#                 },
#                 'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEup',
#                 'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEdo',
#                 'AsLnN'      : '1',
# }


nuisances['PU']  = {
                'name'  : 'PU_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                  'DY': ['0.993259983266*(puWeightUp/puWeight)', '0.997656381501*(puWeightDown/puWeight)'],
                  'top': ['1.00331969187*(puWeightUp/puWeight)', '0.999199609528*(puWeightDown/puWeight)'],
                  'WW': ['1.0033022059*(puWeightUp/puWeight)', '0.997085330608*(puWeightDown/puWeight)'],
                  'ggH_hww': ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)'],
                  'qqH_hww': ['1.00374694528*(puWeightUp/puWeight)', '0.995878596852*(puWeightDown/puWeight)'],
                },
                'AsLnN'      : '1',
}



nuisances['Top_norm']  = {
               'name'  : 'CMS_Top_norm',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'lowen_CR_looseVBS_ele',
                 'lowen_CR_looseVBS_mu',
                 'lowen_CR_top_ele',
                 'lowen_CR_top_mu',
                 'lowen_SR_tightVBS_ele',
                 'lowen_SR_tightVBS_mu',
                 'lowen_SR_top_ele',
                 'lowen_SR_top_mu',
                 'lowen_cutDNN_signal_ele',
                 'lowen_cutDNN_signal_mu',
                 'lowen_cutDNN_top_ele',
                 'lowen_cutDNN_top_mu',
                ]
              }

nuisances['Wjets_norm']  = {
               'name'  : 'CMS_Wjets_norm',
               'samples'  : {
                   'Wjets' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'lowen_CR_looseVBS_ele',
                 'lowen_CR_looseVBS_mu',
                 'lowen_CR_wjets_ele',
                 'lowen_CR_wjets_mu',
                 'lowen_SR_tightVBS_ele',
                 'lowen_SR_tightVBS_mu',
                 'lowen_SR_wjets_ele',
                 'lowen_SR_wjets_mu',
                 'lowen_cutDNN_signal_ele',
                 'lowen_cutDNN_signal_mu',
                 'lowen_cutDNN_wjets_ele',
                 'lowen_cutDNN_wjets_mu',
                ]
              }

## Top pT reweighting uncertainty
nuisances['TopPtRew']  = {
                'name'  : 'TopPtRew',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : ["1.","((1./Top_pTrw - 1)*(topGenPtOTF>0 && antitopGenPtOTF>0) + 1)"]
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
