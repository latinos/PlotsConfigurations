# nuisances
#FIXME: TO BE UPDATED FOR 2017!

# name of samples here must match keys in samples.py 

import os

if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

sampleNames = []
for cat in HTXSStage1Categories:
  if 'GG2H_' in cat:
    sampleNames.append(cat.replace('GG2H','ggH_hww'))
    sampleNames.append(cat.replace('GG2H','ggH_htt'))
  elif 'QQ2HQQ_' in cat:
    sampleNames.append(cat.replace('QQ2HQQ','qqH_hww'))
    sampleNames.append(cat.replace('QQ2HQQ','qqH_htt'))
    sampleNames.append(cat.replace('QQ2HQQ','WH_had_hww'))
    sampleNames.append(cat.replace('QQ2HQQ','WH_had_htt'))
    sampleNames.append(cat.replace('QQ2HQQ','ZH_had_hww'))
    sampleNames.append(cat.replace('QQ2HQQ','ZH_had_htt'))
  elif 'QQ2HLNU_' in cat:
    sampleNames.append(cat.replace('QQ2HLNU','WH_lep_hww'))
    sampleNames.append(cat.replace('QQ2HLNU','WH_lep_htt'))
  elif 'QQ2HLL_' in cat:
    sampleNames.append(cat.replace('QQ2HLL','ZH_lep_hww'))
    sampleNames.append(cat.replace('QQ2HLL','ZH_lep_htt'))
  elif 'GG2HLL_' in cat:
    sampleNames.append(cat.replace('GG2HLL','ggZH_lep_hww'))
  elif 'TTH' in cat:
    sampleNames.append(cat.replace('TTH','ttH_hww'))
  elif 'BBH' in cat:
    sampleNames.append(cat.replace('BBH','bbH_hww'))


################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV_2017',
               'samples'  : {
                   #'DY'       : '1.023',    |
                   #'top'      : '1.023',    | These 3 backgrounds are data driven, no need to include the luminosity uncertainty
                   #'WW'       : '1.023',    |
                   'WWewk'    : '1.023',
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
for name in sampleNames:
  nuisances['lumi']['samples'].update({name:'1.025'})


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
               'name'  : 'CMS_hwwem_fake_syst_2017',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_em' : '1.30',
                             },
               }

nuisances['fake_syst_me']  = {
               'name'  : 'CMS_hwwme_fake_syst_2017',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_me' : '1.30',
                             },
               }

nuisances['fake_ele']  = {
                'name'  : 'hww_fake_ele_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_EleUp , fakeW_EleDown ],
                              'Fake_me'     : [ fakeW_EleUp , fakeW_EleDown ],
                             },
}

nuisances['fake_ele_stat']  = {
                'name'  : 'hww_fake_ele_stat_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                              'Fake_me'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                             },
}

nuisances['fake_mu']  = {
                'name'  : 'hww_fake_mu_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_MuUp , fakeW_MuDown ],
                              'Fake_me'     : [ fakeW_MuUp , fakeW_MuDown ],
                             },
}


nuisances['fake_mu_stat']  = {
                'name'  : 'hww_fake_mu_stat_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                              'Fake_me'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                             },
}

##### B-tagger
nuisances['btag_shape_jes']  = {
                'name'  : 'btag_shape_jes_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'WW'      : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'WWewk'   : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ggWW'    : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'VVV'     : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'VZ'      : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'WZgS'    : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'WZgS_L'  : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'WZgS_H'  : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'top'     : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'Vg'      : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'VgS'     : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ggH_hww' : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'qqH_hww' : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'WH_hww'  : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ZH_hww'  : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ggZH_hww': ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'H_htt'   : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'bbH_hww' : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ttH_hww' : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ggH_htt' : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'qqH_htt' : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'ZH_htt'  : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                   'WH_htt'  : ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)'],
                }
}
for name in sampleNames:
  nuisances['btag_shape_jes']['samples'].update({name: ['(btagSFjesup/btagSF)', '(btagSFjesdown/btagSF)']})


nuisances['btag_shape_lf']  = {
                'name'  : 'btag_shape_lf_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'VVV'     : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'VZ'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'WZgS'    : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'WZgS_L'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'WZgS_H'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'WW'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'WWewk'   : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ggWW'    : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'top'     : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'Vg'      : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'VgS'     : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ggH_hww' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'qqH_hww' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'WH_hww'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ZH_hww'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ggZH_hww': ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'bbH_hww' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ttH_hww' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'H_htt'   : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ggH_htt' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'qqH_htt' : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'ZH_htt'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                   'WH_htt'  : ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)'],
                }
}
for name in sampleNames:
  nuisances['btag_shape_lf']['samples'].update({name: ['(btagSFlfup/btagSF)', '(btagSFlfdown/btagSF)']})


nuisances['btag_shape_hf']  = {
                'name'  : 'btag_shape_hf_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'VVV'     : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'VZ'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'WZgS'    : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'WZgS_L'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'WZgS_H'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'WW'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'WWewk'   : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ggWW'    : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'top'     : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'Vg'      : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'VgS'     : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ggH_hww' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'qqH_hww' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'WH_hww'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ZH_hww'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ggZH_hww': ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'bbH_hww' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ttH_hww' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'H_htt'   : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ggH_htt' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'qqH_htt' : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'ZH_htt'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                   'WH_htt'  : ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)'],
                }
}
for name in sampleNames:
  nuisances['btag_shape_hf']['samples'].update({name: ['(btagSFhfup/btagSF)', '(btagSFhfdown/btagSF)']})

nuisances['btag_shape_hfstats1']  = {
                'name'  : 'btag_shape_hfstats1_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'VVV'     : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'VZ'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'WZgS'    : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'WZgS_L'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'WZgS_H'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'WW'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'WWewk'   : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ggWW'    : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'top'     : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'Vg'      : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'VgS'     : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ggH_hww' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'qqH_hww' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'WH_hww'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ZH_hww'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ggZH_hww': ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'bbH_hww' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ttH_hww' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'H_htt'   : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ggH_htt' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'qqH_htt' : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'ZH_htt'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                   'WH_htt'  : ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)'],
                }
}
for name in sampleNames:
  nuisances['btag_shape_hfstats1']['samples'].update({name: ['(btagSFhfstats1up/btagSF)', '(btagSFhfstats1down/btagSF)']})

nuisances['btag_shape_hfstats2']  = {
                'name'  : 'btag_shape_hfstats2_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'VVV'     : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'VZ'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'WZgS'    : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'WZgS_L'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'WZgS_H'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'WW'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'WWewk'   : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ggWW'    : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'top'     : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'Vg'      : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'VgS'     : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ggH_hww' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'qqH_hww' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'WH_hww'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ZH_hww'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ggZH_hww': ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'bbH_hww' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ttH_hww' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'H_htt'   : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ggH_htt' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'qqH_htt' : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'ZH_htt'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                   'WH_htt'  : ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)'],
                }
}
for name in sampleNames:
  nuisances['btag_shape_hfstats2']['samples'].update({name: ['(btagSFhfstats2up/btagSF)', '(btagSFhfstats2down/btagSF)']})

nuisances['btag_shape_lfstats1']  = {
                'name'  : 'btag_shape_lfstats1_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'VVV'     : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'VZ'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'WZgS'    : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'WZgS_L'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'WZgS_H'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'WW'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'WWewk'   : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ggWW'    : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'top'     : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'Vg'      : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'VgS'     : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ggH_hww' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'qqH_hww' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'WH_hww'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ZH_hww'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ggZH_hww': ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'bbH_hww' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ttH_hww' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'H_htt'   : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ggH_htt' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'qqH_htt' : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'ZH_htt'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                   'WH_htt'  : ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)'],
                }
}
for name in sampleNames:
  nuisances['btag_shape_lfstats1']['samples'].update({name: ['(btagSFlfstats1up/btagSF)', '(btagSFlfstats1down/btagSF)']})

nuisances['btag_shape_lfstats2']  = {
                'name'  : 'btag_shape_lfstats2_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'VVV'     : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'VZ'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'WZgS'    : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'WZgS_L'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'WZgS_H'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'WW'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'WWewk'   : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ggWW'    : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'top'     : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'Vg'      : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'VgS'     : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ggH_hww' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'qqH_hww' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'WH_hww'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ZH_hww'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ggZH_hww': ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'bbH_hww' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ttH_hww' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'H_htt'   : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ggH_htt' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'qqH_htt' : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'ZH_htt'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                   'WH_htt'  : ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)'],
                }
}
for name in sampleNames:
  nuisances['btag_shape_lfstats2']['samples'].update({name: ['(btagSFlfstats2up/btagSF)', '(btagSFlfstats2down/btagSF)']})

nuisances['btag_shape_cferr1']  = {
                'name'  : 'btag_shape_cferr1_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'VVV'     : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'VZ'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'WZgS'    : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'WZgS_L'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'WZgS_H'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'WW'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'WWewk'   : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ggWW'    : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'top'     : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'Vg'      : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'VgS'     : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ggH_hww' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'qqH_hww' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'WH_hww'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ZH_hww'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ggZH_hww': ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'bbH_hww' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ttH_hww' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'H_htt'   : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ggH_htt' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'qqH_htt' : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'ZH_htt'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                   'WH_htt'  : ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)'],
                }
}
for name in sampleNames:
  nuisances['btag_shape_cferr1']['samples'].update({name: ['(btagSFcferr1up/btagSF)', '(btagSFcferr1down/btagSF)']})

nuisances['btag_shape_cferr2']  = {
                'name'  : 'btag_shape_cferr2_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'VVV'     : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'VZ'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'WZgS'    : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'WZgS_L'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'WZgS_H'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'WW'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'WWewk'   : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ggWW'    : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'top'     : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'Vg'      : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'VgS'     : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ggH_hww' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'qqH_hww' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'WH_hww'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ZH_hww'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ggZH_hww': ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'bbH_hww' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ttH_hww' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'H_htt'   : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ggH_htt' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'qqH_htt' : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'ZH_htt'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                   'WH_htt'  : ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)'],
                }
}
for name in sampleNames:
  nuisances['btag_shape_cferr2']['samples'].update({name: ['(btagSFcferr2up/btagSF)', '(btagSFcferr2down/btagSF)']})


if useEmbeddedDY:
  del nuisances['btag_shape_jes']['samples']['DY']
  del nuisances['btag_shape_lf']['samples']['DY']
  del nuisances['btag_shape_hf']['samples']['DY']
  del nuisances['btag_shape_hfstats1']['samples']['DY']
  del nuisances['btag_shape_hfstats2']['samples']['DY']
  del nuisances['btag_shape_lfstats1']['samples']['DY']
  del nuisances['btag_shape_lfstats2']['samples']['DY']
  del nuisances['btag_shape_cferr1']['samples']['DY']
  del nuisances['btag_shape_cferr2']['samples']['DY']

##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_'+Nlep+'l_u)/(TriggerEffWeight_'+Nlep+'l))*(TriggerEffWeight_'+Nlep+'l>0.02) + (TriggerEffWeight_'+Nlep+'l<=0.02)', '(TriggerEffWeight_'+Nlep+'l_d)/(TriggerEffWeight_'+Nlep+'l)']

nuisances['trigg']  = {
                'name'  : 'hww_trigger_2017',
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
                   'WWewk'   : trig_syst ,
                   'top'     : trig_syst ,
                   'Vg'      : trig_syst ,
                   'VgS'     : trig_syst ,
                   'ggH_hww' : trig_syst ,
                   'qqH_hww' : trig_syst ,
                   'WH_hww'  : trig_syst ,
                   'ZH_hww'  : trig_syst ,
                   'ggZH_hww': trig_syst ,
                   'bbH_hww' : trig_syst ,
                   'ttH_hww' : trig_syst ,
                   'H_htt'   : trig_syst ,
                   'ggH_htt' : trig_syst ,
                   'qqH_htt' : trig_syst ,
                   'ZH_htt'  : trig_syst ,
                   'WH_htt'  : trig_syst ,
                },
}
for name in sampleNames:
  nuisances['trigg']['samples'].update({name: trig_syst})

##### Electron Efficiency and energy scale

id_syst_ele = [ 'LepSF'+Nlep+'l__ele_'+eleWP+'__Up' , 'LepSF'+Nlep+'l__ele_'+eleWP+'__Do' ]

nuisances['eff_e']  = {
                'name'  : 'eff_e_2017',
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
                   'WWewk'   : id_syst_ele ,
                   'top'     : id_syst_ele ,
                   'Vg'      : id_syst_ele ,
                   'VgS'     : id_syst_ele ,
                   'ggH_hww' : id_syst_ele ,
                   'qqH_hww' : id_syst_ele ,
                   'WH_hww'  : id_syst_ele ,
                   'ZH_hww'  : id_syst_ele ,
                   'ggZH_hww': id_syst_ele ,
                   'bbH_hww' : id_syst_ele ,
                   'ttH_hww' : id_syst_ele ,
                   'H_htt'   : id_syst_ele ,
                   'ggH_htt' : id_syst_ele ,
                   'qqH_htt' : id_syst_ele ,
                   'ZH_htt'  : id_syst_ele ,
                   'WH_htt'  : id_syst_ele ,
                },
}
for name in sampleNames:
  nuisances['eff_e']['samples'].update({name: id_syst_ele})

nuisances['electronpt']  = {
                'name'  : 'scale_e_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'WWewk'   : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                   'WZgS'    : ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV'     : ['1', '1'],
                   'Vg'      : ['1', '1'],
                   'VgS'     : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww'  : ['1', '1'],
                   'ZH_hww'  : ['1', '1'],
                   'ggZH_hww': ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'ttH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                   'ggH_htt' : ['1', '1'] ,
                   'qqH_htt' : ['1', '1'] ,
                   'ZH_htt'  : ['1', '1'] ,
                   'WH_htt'  : ['1', '1'] ,
                 },
                'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2LP19/MCl1loose2017__MCCorr2017LP19__l2loose__l2tightOR2017__ElepTupLP19__PUFIXLP19'+skim, #xrootdPath+treeBaseDir
                'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2LP19/MCl1loose2017__MCCorr2017LP19__l2loose__l2tightOR2017__ElepTdoLP19__PUFIXLP19'+skim,
}
for name in sampleNames:
  nuisances['electronpt']['samples'].update({name: ['1', '1']})

if useEmbeddedDY:
  DYvetosamples = ['DY', 'ggWW', 'WW', 'WWewk', 'top', 'VZ', 'Vg', 'VgS']
  for samp in DYvetosamples:
    del nuisances['electronpt']['samples'][samp]

  nuisances['electronpt_embveto']  = {
                  'name'  : 'scale_e_2017',
                  'kind'  : 'tree',
                  'type'  : 'shape',
                  'samples'  : {
                     'ggWW'    : ['1', '1'],
                     'WW'      : ['1', '1'],
                     'WWewk'   : ['1', '1'],
                     'top'     : ['1', '1'],
                     'VZ'      : ['1', '1'],
                     'Vg'      : ['1', '1'],
                     'VgS'     : ['1', '1'],
                   },
                  'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__ElepTup'+skim, #xrootdPath+treeBaseDir
                  'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__ElepTdo'+skim,
  }

  nuisances['electronpt_emb']  = {
                  'name'  : 'scale_e_2017',
                  'kind'  : 'tree',
                  'type'  : 'shape',
                  'samples'  : {
                     'DY'      : ['1', '1'],
                   },
                  'folderUp'   : treeBaseDir+'Embedding2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbElepTup'+skim, #xrootdPath+treeBaseDir
                  'folderDown' : treeBaseDir+'Embedding2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbElepTdo'+skim,
  }

#FIXME: The following should not be needed for 2017
#elePtCor_Syst = [ 'electron_ptW_'+Nlep+'l_Up / electron_ptW_'+Nlep+'l', 'electron_ptW_'+Nlep+'l_Down / electron_ptW_'+Nlep+'l']
#nuisances['elePtCor']  = {
#                'name'  : 'hww_elePtCor',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'         : elePtCor_Syst ,
#                   'ggWW'       : elePtCor_Syst ,
#                   'WW'         : elePtCor_Syst ,
#                   'top'        : elePtCor_Syst ,
#                   'VZ'         : elePtCor_Syst ,
#                   'WZgS_L'     : elePtCor_Syst ,
#                   'WZgS_H'     : elePtCor_Syst ,
#                   'VVV'        : elePtCor_Syst ,
#                   'Vg'         : elePtCor_Syst ,
#                   'VgS'        : elePtCor_Syst ,
#                   'ggH_hww'    : elePtCor_Syst ,
#                   'qqH_hww'    : elePtCor_Syst ,
#                   'WH_hww'     : elePtCor_Syst ,
#                   'ZH_hww'     : elePtCor_Syst ,
#                   'ggZH_hww'   : elePtCor_Syst ,
#                   'bbH_hww'    : elePtCor_Syst ,
#                   'ttH_hww'    : elePtCor_Syst ,
#                   'H_htt'      : elePtCor_Syst ,
#                   'ggH_htt'    : elePtCor_Syst ,
#                   'qqH_htt'    : elePtCor_Syst ,
#                   'ZH_htt'     : elePtCor_Syst ,
#                   'WH_htt'     : elePtCor_Syst ,
#                }
#}
#
#eleEtaCor_Syst = [ 'electron_etaW_'+Nlep+'l_Up / electron_etaW_'+Nlep+'l', 'electron_etaW_'+Nlep+'l_Down / electron_etaW_'+Nlep+'l']
#
#nuisances['eleEtaCor']  = {
#                'name'  : 'hww_eleEtaCor',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'         : eleEtaCor_Syst ,
#                   'ggWW'       : eleEtaCor_Syst ,
#                   'WW'         : eleEtaCor_Syst ,
#                   'top'        : eleEtaCor_Syst ,
#                   'VZ'         : eleEtaCor_Syst ,
#                   'WZgS_L'     : eleEtaCor_Syst ,
#                   'WZgS_H'     : eleEtaCor_Syst ,
#                   'VVV'        : eleEtaCor_Syst ,
#                   'Vg'         : eleEtaCor_Syst ,
#                   'VgS'        : eleEtaCor_Syst ,
#                   'ggH_hww'    : eleEtaCor_Syst ,
#                   'qqH_hww'    : eleEtaCor_Syst ,
#                   'WH_hww'     : eleEtaCor_Syst ,
#                   'ZH_hww'     : eleEtaCor_Syst ,
#                   'ggZH_hww'   : eleEtaCor_Syst ,
#                   'bbH_hww'    : eleEtaCor_Syst ,
#                   'ttH_hww'    : eleEtaCor_Syst ,
#                   'H_htt'      : eleEtaCor_Syst ,
#                   'ggH_htt'    : eleEtaCor_Syst ,
#                   'qqH_htt'    : eleEtaCor_Syst ,
#                   'ZH_htt'     : eleEtaCor_Syst ,
#                   'WH_htt'     : eleEtaCor_Syst ,
#                }
#}


##### Muon Efficiency and energy scale

id_syst_mu = [ 'LepSF'+Nlep+'l__mu_'+muWP+'__Up' , 'LepSF'+Nlep+'l__mu_'+muWP+'__Do' ]

nuisances['eff_m']  = {
                'name'  : 'eff_m_2017',
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
                   'WWewk'   : id_syst_mu ,
                   'top'     : id_syst_mu ,
                   'Vg'      : id_syst_mu ,
                   'VgS'     : id_syst_mu ,
                   'ggH_hww' : id_syst_mu ,
                   'qqH_hww' : id_syst_mu ,
                   'WH_hww'  : id_syst_mu ,
                   'ZH_hww'  : id_syst_mu ,
                   'ggZH_hww': id_syst_mu ,
                   'bbH_hww' : id_syst_mu ,
                   'ttH_hww' : id_syst_mu ,
                   'H_htt'   : id_syst_mu ,
                   'ggH_htt' : id_syst_mu ,
                   'qqH_htt' : id_syst_mu ,
                   'ZH_htt'  : id_syst_mu ,
                   'WH_htt'  : id_syst_mu ,
                },
}
for name in sampleNames:
  nuisances['eff_m']['samples'].update({name: id_syst_mu})

nuisances['muonpt']  = {
                'name'  : 'scale_m_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'WWewk'   : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                   'WZgS'    : ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV'     : ['1', '1'],
                   'Vg'      : ['1', '1'],
                   'VgS'     : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww'  : ['1', '1'],
                   'ZH_hww'  : ['1', '1'],
                   'ggZH_hww': ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'ttH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                   'ggH_htt' : ['1', '1'] ,
                   'qqH_htt' : ['1', '1'] ,
                   'ZH_htt'  : ['1', '1'] ,
                   'WH_htt'  : ['1', '1'] ,
                },
                'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2LP19/MCl1loose2017__MCCorr2017LP19__l2loose__l2tightOR2017__MupTupLP19__PUFIXLP19'+skim,
                'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2LP19/MCl1loose2017__MCCorr2017LP19__l2loose__l2tightOR2017__MupTdoLP19__PUFIXLP19'+skim,
}
for name in sampleNames:
  nuisances['muonpt']['samples'].update({name: ['1', '1']})

if useEmbeddedDY:
  for samp in DYvetosamples:
    del nuisances['muonpt']['samples'][samp]

  nuisances['muonpt_embveto']  = {
                  'name'  : 'scale_m_2017',
                  'kind'  : 'tree',
                  'type'  : 'shape',
                  'samples'  : {
                     'ggWW'    : ['1', '1'],
                     'WW'      : ['1', '1'],
                     'WWewk'   : ['1', '1'],
                     'top'     : ['1', '1'],
                     'VZ'      : ['1', '1'],
                     'Vg'      : ['1', '1'],
                     'VgS'     : ['1', '1'],
                   },
                  'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__MupTup'+skim, #xrootdPath+treeBaseDir
                  'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__MupTdo'+skim,
  }

  nuisances['muonpt_emb']  = {
                  'name'  : 'scale_m_2017',
                  'kind'  : 'tree',
                  'type'  : 'shape',
                  'samples'  : {
                     'DY'      : ['1', '1'],
                   },
                  'folderUp'   : treeBaseDir+'Embedding2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbMupTup'+skim, #xrootdPath+treeBaseDir
                  'folderDown' : treeBaseDir+'Embedding2017_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbMupTdo'+skim,
  }


##### Jet energy scale

nuisances['jes']  = {
                'name'  : 'scale_j_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'WWewk'   : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                   'WZgS'    : ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV'     : ['1', '1'],
                   'Vg'      : ['1', '1'],
                   'VgS'     : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww'  : ['1', '1'],
                   'ZH_hww'  : ['1', '1'],
                   'ggZH_hww': ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'ttH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                   'ggH_htt' : ['1', '1'] ,
                   'qqH_htt' : ['1', '1'] ,
                   'ZH_htt'  : ['1', '1'] ,
                   'WH_htt'  : ['1', '1'] ,
                },
                'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2LP19/MCl1loose2017__MCCorr2017LP19__l2loose__l2tightOR2017__JESupLP19__PUFIXLP19'+skim,
                'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2LP19/MCl1loose2017__MCCorr2017LP19__l2loose__l2tightOR2017__JESdoLP19__PUFIXLP19'+skim,
}
for name in sampleNames:
  nuisances['jes']['samples'].update({name: ['1', '1']})

if useEmbeddedDY:
  for samp in DYvetosamples:
    del nuisances['jes']['samples'][samp]

  nuisances['jes_embveto']  = {
                  'name'  : 'scale_j_2017',
                  'kind'  : 'tree',
                  'type'  : 'shape',
                  'samples'  : {
                     'ggWW'    : ['1', '1'],
                     'WW'      : ['1', '1'],
                     'WWewk'   : ['1', '1'],
                     'top'     : ['1', '1'],
                     'VZ'      : ['1', '1'],
                     'Vg'      : ['1', '1'],
                     'VgS'     : ['1', '1'],
                  },
                  'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__JESup'+skim,
                  'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__JESdo'+skim,
  }

##### MET energy scale

nuisances['met']  = {
                'name'  : 'scale_met_2017',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['1', '1'],
                   'ggWW'    : ['1', '1'],
                   'WW'      : ['1', '1'],
                   'WWewk'   : ['1', '1'],
                   'top'     : ['1', '1'],
                   'VZ'      : ['1', '1'],
                   'WZgS'    : ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV'     : ['1', '1'],
                   'Vg'      : ['1', '1'],
                   'VgS'     : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww'  : ['1', '1'],
                   'ZH_hww'  : ['1', '1'],
                   'ggZH_hww': ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'ttH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                   'ggH_htt' : ['1', '1'] ,
                   'qqH_htt' : ['1', '1'] ,
                   'ZH_htt'  : ['1', '1'] ,
                   'WH_htt'  : ['1', '1'] ,
                },
                'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2LP19/MCl1loose2017__MCCorr2017LP19__l2loose__l2tightOR2017__METupLP19__PUFIXLP19'+skim,
                'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2LP19/MCl1loose2017__MCCorr2017LP19__l2loose__l2tightOR2017__METdoLP19__PUFIXLP19'+skim,
}
for name in sampleNames:
  nuisances['met']['samples'].update({name: ['1', '1']})

if useEmbeddedDY:
  for samp in DYvetosamples:
    del nuisances['met']['samples'][samp]

  nuisances['met_embveto']  = {
                  'name'  : 'scale_met_2017',
                  'kind'  : 'tree',
                  'type'  : 'shape',
                  'samples'  : {
                     'ggWW'    : ['1', '1'],
                     'WW'      : ['1', '1'],
                     'WWewk'   : ['1', '1'],
                     'top'     : ['1', '1'],
                     'VZ'      : ['1', '1'],
                     'Vg'      : ['1', '1'],
                     'VgS'     : ['1', '1'],
                  },
                  'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__METup'+skim,
                  'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__METdo'+skim,
  }

# Prefire correction
prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire']  = {
                'name'  : 'CMS_eff_prefiring_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : prefire_syst ,
                   'VVV'     : prefire_syst ,
                   'VZ'      : prefire_syst ,
                   'WZgS'    : prefire_syst ,
                   'WZgS_L'  : prefire_syst ,
                   'WZgS_H'  : prefire_syst ,
                   'ggWW'    : prefire_syst ,
                   'WW'      : prefire_syst ,
                   'WWewk'   : prefire_syst ,
                   'top'     : prefire_syst ,
                   'Vg'      : prefire_syst ,
                   'VgS'     : prefire_syst ,
                   'ggH_hww' : prefire_syst ,
                   'qqH_hww' : prefire_syst ,
                   'WH_hww'  : prefire_syst ,
                   'ZH_hww'  : prefire_syst ,
                   'ggZH_hww': prefire_syst ,
                   'bbH_hww' : prefire_syst ,
                   'ttH_hww' : prefire_syst ,
                   'H_htt'   : prefire_syst ,
                   'ggH_htt' : prefire_syst ,
                   'qqH_htt' : prefire_syst ,
                   'ZH_htt'  : prefire_syst ,
                   'WH_htt'  : prefire_syst ,
                }
}
if useEmbeddedDY: del nuisances['prefire']['samples']['DY']


# Di-Tau vetoing for embedding
if useEmbeddedDY: 
  nuisances['embedveto']  = {
                  'name'  : 'CMS_embed_veto',
                  'kind'  : 'weight',
                  'type'  : 'shape',
                  'samples'  : {
                     'DY'       : ['1', '1'],
                     'DYveto'   : ['0.1', '-0.1'],
                  }
  }


#
# PS and UE
#
nuisances['PS']  = {
                'name'  : 'PS',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                  'WW'      : ['PSWeight[0]', 'PSWeight[3]'],
                  },
                }

##nuisances['UE']  = {
##                'name'  : 'UE', 
##                'skipCMS' : 1,
##                'kind'  : 'tree',
##                'type'  : 'shape',
##                'samples'  : {
###                  'WW'      : ['1.12720771849', '1.13963144574'],
##                  'ggH_hww' : ['1.00211385568', '0.994966378288'], 
##                  'qqH_hww' : ['1.00367895901', '0.994831373195']
##                },
##                'folderUp'   : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEup',
##                'folderDown' : treeBaseDir+'Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEdo',
##                'AsLnN'      : '1',
##}


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
for name in sampleNames:
  if 'ggH_hww' in name:
    nuisances['PU']['samples'].update({name: ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)']})
  elif 'qqH_hww' in name:
    nuisances['PU']['samples'].update({name: ['1.00374694528*(puWeightUp/puWeight)', '0.995878596852*(puWeightDown/puWeight)']})

if useEmbeddedDY: del nuisances['PU']['samples']['DY']

## Shape nuisance due to QCD scale variations for DY
# LHE scale variation weights (w_var / w_nominal)
# [0] is muR=0.50000E+00 muF=0.50000E+00
# [8] is muR=0.20000E+01 muF=0.20000E+01
if not useEmbeddedDY:
  nuisances['DYQCDscale']  = {
                  'name'  : 'QCDscale_V',
                  'skipCMS' : 1,
                  'kind'  : 'weight',
                  'type'  : 'shape',
                  'samples'  : {
                     'DY'      : ['LHEScaleWeight[8]', 'LHEScaleWeight[0]'],
                  }
  }


#
#
# Theory uncertainty for ggH
#
#
#   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
#
#   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools
#
# FIXME: Add these uncertainties

thus = [
    ('THU_ggH_Mu', 'ggH_mu'),
    ('THU_ggH_Res', 'ggH_res'),
    ('THU_ggH_Mig01', 'ggH_mig01'),
    ('THU_ggH_Mig12', 'ggH_mig12'),
    ('THU_ggH_VBF2j', 'ggH_VBF2j'),
    ('THU_ggH_VBF3j', 'ggH_VBF3j'),
    ('THU_ggH_PT60', 'ggH_pT60'),
    ('THU_ggH_PT120', 'ggH_pT120'),
    ('THU_ggH_qmtop', 'ggH_qmtop')
]

for name, vname in thus:
    nuisances[vname]  = {
      'name'  : name,
      'skipCMS' : 1,
      'kind'  : 'weight',
      'type'  : 'shape',
      'samples'  : {
        'ggH_hww': [vname, '1+(1.-'+vname+')'],
       #'ggH_htt': [vname, '1+(1.-'+vname+')'],
      },
    }
    for name in sampleNames:
      if 'ggH' in name:
        nuisances[vname]['samples'].update({name : [vname, '1+(1.-'+vname+')']})

if not useEmbeddedDY:
  nuisances['QCDscale_CRSR_accept_dytt']  = {
                 'name'  : 'CMS_hww_QCDscale_CRSR_accept_dytt', 
                 'type'  : 'lnN',
                 'samples'  : {
                     'DY' : '1.02',
                     },
                 'cuts'  : [ k for k in cuts if 'dytt' in k ]
                }

nuisances['QCDscale_CRSR_accept_top']  = {
               'name'  : 'CMS_hww_QCDscale_CRSR_accept_top', 
               'type'  : 'lnN',
               'samples'  : {
                   'top' : '1.01',
                   },
                 'cuts'  : [ k for k in cuts if 'top' in k ]
              }

#FIXME: check this 3%
nuisances['QCDscale_VZ']  = {
               'name'  : 'QCDscale_VZ', 
               'samples'  : {
                   'VZ' : '1.03',
                   },
               'type'  : 'lnN'
              }



#### QCD scale uncertainties for Higgs signals other than ggH

from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()

nuisances['QCDscale_ggH']  = {
               'name'  : 'QCDscale_ggH', 
               'samples'  : {
                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }


nuisances['QCDscale_ggH_STXS_ACCEPT'] = {
               'name'  : 'QCDscale_ggH_STXS_ACCEPT',
               'samples'  : { },
               'type'  : 'shape',
               'kind'  : 'weight',
              }
for name in sampleNames:
  if 'ggH_hww' in name:
    scale2d0 = QCDScaleFactors[name.replace('ggH_hww','GG2H')][0]
    scale0d5 = QCDScaleFactors[name.replace('ggH_hww','GG2H')][1]
    nuisances['QCDscale_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/'+scale2d0, 'LHEScaleWeight[0]/'+scale0d5]})


nuisances['QCDscale_qqH']  = {
               'name'  : 'QCDscale_qqH', 
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }
for name in sampleNames:
  if 'qqH' in name:
    nuisances['QCDscale_qqH']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm')})


nuisances['QCDscale_VH']  = {
               'name'  : 'QCDscale_VH', 
               'samples'  : {
                   'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'WH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'ZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   'ZH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_ggZH']  = {
               'name'  : 'QCDscale_ggZH', 
               'samples'  : {
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm'),                  
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_bbH']  = {
               'name'  : 'QCDscale_bbH',
               'samples'  : {
                   'bbH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_ttH']  = {
               'name'  : 'QCDscale_ttH',
               'samples'  : {
                   'ttH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_WWewk']  = {
               'name'  : 'QCDscale_WWewk',
               'samples'  : {
                   'WWewk' : '1.11',
                   },
               'type'  : 'lnN'
              }


#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['QCDscale_qqbar_ACCEPT']  = {
               'name'  : 'QCDscale_qqbar_ACCEPT', 
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : '1.007',
                   'qqH_htt' : '1.007',
                   'WH_hww'  : '1.05',
                   'WH_htt'  : '1.05',
                   'ZH_hww'  : '1.04',
                   'ZH_htt'  : '1.04',
                   'VZ'      : '1.029',
                   },
              }
for name in sampleNames:
  if 'qqH' in name:
    nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({name : '1.007'})


#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['QCDscale_gg_ACCEPT']  = {
               'name'  : 'QCDscale_gg_ACCEPT', 
               'samples'  : {
                   'ggWW'    : '1.027',
                   'ggH_hww' : '1.027',
                   'ggH_htt' : '1.027',
                   'H_htt'   : '1.027',
                   'ggZH_hww': '1.027',                   
                   },
               'type'  : 'lnN',
              }

###### pdf uncertainty

nuisances['pdf_Higgs_gg']  = {
               'name'  : 'pdf_Higgs_gg', 
               'samples'  : {
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','pdf','sm'),
                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','pdf','sm'),
                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','pdf','sm'),
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm'), 
                   'bbH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH' ,'125.09','pdf','sm'),
                   },
               'type'  : 'lnN',
              }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['pdf_Higgs_gg']['samples'].update({name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','pdf','sm')})

nuisances['pdf_Higgs_ttH']  = {
               'name'  : 'pdf_Higgs_ttH',
               'samples'  : {
                   'ttH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH' ,'125.09','pdf','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['pdf_Higgs_qqbar']  = {
               'name'  : 'pdf_Higgs_qqbar', 
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm'),
                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm'),
                   'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   'ZH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   },
              }
for name in sampleNames:
  if 'qqH' in name:
    nuisances['pdf_Higgs_qqbar']['samples'].update({name: HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH' ,'125.09','pdf','sm')})


#FIXME: check this 4%
nuisances['pdf_qqbar']  = {
               'name'  : 'pdf_qqbar',
               'type'  : 'lnN',
               'samples'  : {
                   'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
                   },
              }

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['pdf_Higgs_gg_ACCEPT']  = {
               'name'  : 'pdf_Higgs_gg_ACCEPT', 
               'samples'  : {
                   'ggH_hww' : '1.005',
                   'ggH_htt' : '1.005',
                   'H_htt'   : '1.005',
                   'ggZH_hww': '1.005', 
                   },
               'type'  : 'lnN',
              }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({name : '1.005'})

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['pdf_gg_ACCEPT']  = {
               'name'  : 'pdf_gg_ACCEPT',
               'samples'  : {
                   'ggWW'    : '1.005',
                   },
               'type'  : 'lnN',
              }

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['pdf_Higgs_qqbar_ACCEPT']  = {
               'name'  : 'pdf_Higgs_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'qqH_hww' : '1.011',
                   'qqH_htt' : '1.011',
                   'WH_hww'  : '1.007',
                   'WH_htt'  : '1.007',
                   'ZH_hww'  : '1.012',
                   'ZH_htt'  : '1.012',
                   },
              }
for name in sampleNames:
  if 'qqH' in name:
    nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({name : '1.011'})

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['pdf_qqbar_ACCEPT']  = {
               'name'  : 'pdf_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'VZ'      : '1.005',
                   },
              }

# ggww and interference

nuisances['QCDscale_ggWW']  = {
               'name'  : 'QCDscale_ggWW',
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW' : '1.15',
                   },
              }

#  - WW shaping
nuisances['WWresum0j']  = {
                'name'  : 'WWresum0j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : [ k for k in cuts if '0j' in k ]
                }


nuisances['WWresum1j']  = {
                'name'  : 'WWresum1j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : [ k for k in cuts if '1j' in k ]
                }

nuisances['WWqscale0j']  = {
                'name'  : 'WWqscale0j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : [ k for k in cuts if '0j' in k ]
                }


nuisances['WWqscale1j']  = {
                'name'  : 'WWqscale1j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : [ k for k in cuts if '1j' in k ]
                }

nuisances['WWresum2j']  = {
                'name'  : 'WWresum2j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                },
               'cuts'  : [ k for k in cuts if '2j' in k ]
                }

nuisances['WWqscale2j']  = {
                'name'  : 'WWqscale2j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                },
               'cuts'  : [ k for k in cuts if '2j' in k ]
                }


nuisances['WgStarScale']  = {
               'name'  : 'CMS_hww_WgStarScale', 
               'type'  : 'lnN',
               'samples'  : {
                   'WgS'    : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'VgS'    : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'WZgS_L' : '1.25',  
                   },
                }
 
nuisances['WZScale'] = {
               'name'  : 'CMS_hww_WZScale',
               'type'  : 'lnN',
               'samples'  : {
                   'WZgS' : '1.16', 
                   },
                }

if not useEmbeddedDY:
  nuisances['DYttnorm0j']  = {
                 'name'  : 'CMS_hww_DYttnorm0j', 
                 'samples'  : {
                     'DY' : '1.00',
                     },
                 'type'  : 'rateParam',
                 'cuts'  : [ k for k in cuts if '0j' in k ]
                }

  nuisances['DYttnorm1j']  = {
                 'name'  : 'CMS_hww_DYttnorm1j', 
                 'samples'  : {
                     'DY' : '1.00',
                     },
                 'type'  : 'rateParam',
                 'cuts'  : [ k for k in cuts if '1j' in k ]
                }

  nuisances['DYttnorm2j']  = {
                 'name'  : 'CMS_hww_DYttnorm2j',
                 'samples'  : {
                     'DY' : '1.00',
                     },
                 'type'  : 'rateParam',
                 'cuts'  : [ k for k in cuts if '2j' in k ]
                }

nuisances['WWnorm0j']  = {
               'name'  : 'CMS_hww_WWnorm0j', 
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [ k for k in cuts if '0j' in k ]
              }

nuisances['WWnorm1j']  = {
               'name'  : 'CMS_hww_WWnorm1j', 
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [ k for k in cuts if '1j' in k ]
              }

nuisances['WWnorm2j']  = {
               'name'  : 'CMS_hww_WWnorm2j',
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [ k for k in cuts if '2j' in k ]
              }

nuisances['Topnorm0j']  = {
               'name'  : 'CMS_hww_Topnorm0j', 
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [ k for k in cuts if '0j' in k ]
              }

nuisances['Topnorm1j']  = {
               'name'  : 'CMS_hww_Topnorm1j', 
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [ k for k in cuts if '1j' in k ]
              }

nuisances['Topnorm2j']  = {
               'name'  : 'CMS_hww_Topnorm2j',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [ k for k in cuts if '2j' in k ]
              }

nuisances['singleTopToTTbar']  = {
                'name'  : 'singleTopToTTbar',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : { 
                   'top'     : ['(( (topGenPt>0 && antitopGenPt<=0) || (topGenPt<=0 && antitopGenPt>0)  ) * 1.0816 + ( topGenPt>0 && antitopGenPt>0 ))',
                                '(( (topGenPt>0 && antitopGenPt<=0) || (topGenPt<=0 && antitopGenPt>0)  ) * 0.9184 + ( topGenPt>0 && antitopGenPt>0 ))'],
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
