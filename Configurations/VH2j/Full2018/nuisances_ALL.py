# nuisances
#FIXME: TO BE UPDATED FOR 2018!

# name of samples here must match keys in samples.py 

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV_2018',
               'samples'  : {
                   #'DY'       : '1.025',
                   #'top'      : '1.025',
                   'WW'       : '1.025',
                   'WWewk'    : '1.025',
                   'ggWW'     : '1.025',
                   'Vg'       : '1.025',
                   'VgS'      : '1.025',
                   'WZgS'     : '1.025',
                   'WZgS_L'   : '1.025',
                   'WZgS_H'   : '1.025',
                   'VZ'       : '1.025',
                   'VVV'      : '1.025',
                   'ggH_hww'  : '1.025',
                   'qqH_hww'  : '1.025',
                   'ZH_hww'   : '1.025',
                   'ggZH_hww' : '1.025',
                   'WH_hww'   : '1.025',
                   'bbH_hww'  : '1.025',
                   'ttH_hww'  : '1.025',
                   'ggH_htt'  : '1.025',
                   'qqH_htt'  : '1.025',
                   'ZH_htt'   : '1.025',
                   'WH_htt'   : '1.025',
                   'H_htt'    : '1.025',
                   },
               'type'  : 'lnN',
              }

##### B-tagger
nuisances['btag_shape_jes']  = {
                'name'  : 'btag_shape_jes_2018',
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

nuisances['btag_shape_lf']  = {
                'name'  : 'btag_shape_lf_2018',
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

nuisances['btag_shape_hf']  = {
                'name'  : 'btag_shape_hf_2018',
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

nuisances['btag_shape_hfstats1']  = {
                'name'  : 'btag_shape_hfstats1_2018',
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

nuisances['btag_shape_hfstats2']  = {
                'name'  : 'btag_shape_hfstats2_2018',
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

nuisances['btag_shape_lfstats1']  = {
                'name'  : 'btag_shape_lfstats1_2018',
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

nuisances['btag_shape_lfstats2']  = {
                'name'  : 'btag_shape_lfstats2_2018',
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

nuisances['btag_shape_cferr1']  = {
                'name'  : 'btag_shape_cferr1_2018',
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

nuisances['btag_shape_cferr2']  = {
                'name'  : 'btag_shape_cferr2_2018',
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


##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_'+Nlep+'l_u)/(TriggerEffWeight_'+Nlep+'l))*(TriggerEffWeight_'+Nlep+'l>0.02) + (TriggerEffWeight_'+Nlep+'l<=0.02)', '(TriggerEffWeight_'+Nlep+'l_d)/(TriggerEffWeight_'+Nlep+'l)']

nuisances['trigg']  = {
                'name'  : 'hww_trigger_2018',
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

##### Electron Efficiency and energy scale

id_syst_ele = [ 'LepSF'+Nlep+'l__ele_'+eleWP+'__Up' , 'LepSF'+Nlep+'l__ele_'+eleWP+'__Do' ]

nuisances['eff_e']  = {
                'name'  : 'eff_e_2018',
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

#nuisances['electronpt']  = {
#                'name'  : 'scale_e_2018',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'      : ['1', '1'],
#                   'ggWW'    : ['1', '1'],
#                   'WW'      : ['1', '1'],
#                   'WWewk'   : ['1', '1'],
#                   'top'     : ['1', '1'],
#                   'VZ'      : ['1', '1'],
#                   'WZgS'    : ['1', '1'],
#                   'WZgS_L'  : ['1', '1'],
#                   'WZgS_H'  : ['1', '1'],
#                   'VVV'     : ['1', '1'],
#                   'Vg'      : ['1', '1'],
#                   'VgS'     : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww'  : ['1', '1'],
#                   'ZH_hww'  : ['1', '1'],
#                   'ggZH_hww': ['1', '1'],
#                   'bbH_hww' : ['1', '1'],
#                   'ttH_hww' : ['1', '1'],
#                   'H_htt'   : ['1', '1'],
#                   'ggH_htt' : ['1', '1'] ,
#                   'qqH_htt' : ['1', '1'] ,
#                   'ZH_htt'  : ['1', '1'] ,
#                   'WH_htt'  : ['1', '1'] ,
#                 },
#                'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__ElepTup', #xrootdPath+treeBaseDir
#                'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__ElepTdo',
#}
#
#if useEmbeddedDY:
#  DYvetosamples = ['DY', 'ggWW', 'WW', 'WWewk', 'top', 'VZ', 'Vg', 'VgS']
#  for samp in DYvetosamples:
#    del nuisances['electronpt']['samples'][samp]
#
#  nuisances['electronpt_embveto']  = {
#                  'name'  : 'scale_e_2018',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'ggWW'    : ['1', '1'],
#                     'WW'      : ['1', '1'],
#                     'WWewk'   : ['1', '1'],
#                     'top'     : ['1', '1'],
#                     'VZ'      : ['1', '1'],
#                     'Vg'      : ['1', '1'],
#                     'VgS'     : ['1', '1'],
#                   },
#                  'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__ElepTup', #xrootdPath+treeBaseDir
#                  'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__ElepTdo',
#  }
#
#  nuisances['electronpt_emb']  = {
#                  'name'  : 'scale_e_2018',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'DY'      : ['1', '1'],
#                   },
#                  'folderUp'   : treeBaseDir+'Embedding2018_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbElepTup', #xrootdPath+treeBaseDir
#                  'folderDown' : treeBaseDir+'Embedding2018_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbElepTdo',
#  }

#FIXME: The following should not be needed for 2018
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
                'name'  : 'eff_m_2018',
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

#nuisances['muonpt']  = {
#                'name'  : 'scale_m_2018',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'      : ['1', '1'],
#                   'ggWW'    : ['1', '1'],
#                   'WW'      : ['1', '1'],
#                   'WWewk'   : ['1', '1'],
#                   'top'     : ['1', '1'],
#                   'VZ'      : ['1', '1'],
#                   'WZgS'    : ['1', '1'],
#                   'WZgS_L'  : ['1', '1'],
#                   'WZgS_H'  : ['1', '1'],
#                   'VVV'     : ['1', '1'],
#                   'Vg'      : ['1', '1'],
#                   'VgS'     : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww'  : ['1', '1'],
#                   'ZH_hww'  : ['1', '1'],
#                   'ggZH_hww': ['1', '1'],
#                   'bbH_hww' : ['1', '1'],
#                   'ttH_hww' : ['1', '1'],
#                   'H_htt'   : ['1', '1'],
#                   'ggH_htt' : ['1', '1'] ,
#                   'qqH_htt' : ['1', '1'] ,
#                   'ZH_htt'  : ['1', '1'] ,
#                   'WH_htt'  : ['1', '1'] ,
#                },
#                'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__MupTup',
#                'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__MupTdo',
#}
#
#if useEmbeddedDY:
#  for samp in DYvetosamples:
#    del nuisances['muonpt']['samples'][samp]
#
#  nuisances['muonpt_embveto']  = {
#                  'name'  : 'scale_m_2018',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'ggWW'    : ['1', '1'],
#                     'WW'      : ['1', '1'],
#                     'WWewk'   : ['1', '1'],
#                     'top'     : ['1', '1'],
#                     'VZ'      : ['1', '1'],
#                     'Vg'      : ['1', '1'],
#                     'VgS'     : ['1', '1'],
#                   },
#                  'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__MupTup', #xrootdPath+treeBaseDir
#                  'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__MupTdo',
#  }
#
#  nuisances['muonpt_emb']  = {
#                  'name'  : 'scale_m_2018',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'DY'      : ['1', '1'],
#                   },
#                  'folderUp'   : treeBaseDir+'Embedding2018_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbMupTup', #xrootdPath+treeBaseDir
#                  'folderDown' : treeBaseDir+'Embedding2018_nAOD_v1_Full2017v2/DATAl1loose2017v2__DATACorr2017__l2loose__l2tightOR2017__Embedding2017__hadd__EmbMupTdo',
#  }
#
#
###### Jet energy scale
#
#nuisances['jes']  = {
#                'name'  : 'scale_j_2018',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'      : ['1', '1'],
#                   'ggWW'    : ['1', '1'],
#                   'WW'      : ['1', '1'],
#                   'WWewk'   : ['1', '1'],
#                   'top'     : ['1', '1'],
#                   'VZ'      : ['1', '1'],
#                   'WZgS'    : ['1', '1'],
#                   'WZgS_L'  : ['1', '1'],
#                   'WZgS_H'  : ['1', '1'],
#                   'VVV'     : ['1', '1'],
#                   'Vg'      : ['1', '1'],
#                   'VgS'     : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww'  : ['1', '1'],
#                   'ZH_hww'  : ['1', '1'],
#                   'ggZH_hww': ['1', '1'],
#                   'bbH_hww' : ['1', '1'],
#                   'ttH_hww' : ['1', '1'],
#                   'H_htt'   : ['1', '1'],
#                   'ggH_htt' : ['1', '1'] ,
#                   'qqH_htt' : ['1', '1'] ,
#                   'ZH_htt'  : ['1', '1'] ,
#                   'WH_htt'  : ['1', '1'] ,
#                },
#                'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__JESup',
#                'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__JESdo',
#}
#
#if useEmbeddedDY:
#  for samp in DYvetosamples:
#    del nuisances['jes']['samples'][samp]
#
#  nuisances['jes_embveto']  = {
#                  'name'  : 'scale_j_2018',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'ggWW'    : ['1', '1'],
#                     'WW'      : ['1', '1'],
#                     'WWewk'   : ['1', '1'],
#                     'top'     : ['1', '1'],
#                     'VZ'      : ['1', '1'],
#                     'Vg'      : ['1', '1'],
#                     'VgS'     : ['1', '1'],
#                  },
#                  'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__JESup',
#                  'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__JESdo',
#  }
#
###### MET energy scale
#
#nuisances['met']  = {
#                'name'  : 'scale_met_2018',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'      : ['1', '1'],
#                   'ggWW'    : ['1', '1'],
#                   'WW'      : ['1', '1'],
#                   'WWewk'   : ['1', '1'],
#                   'top'     : ['1', '1'],
#                   'VZ'      : ['1', '1'],
#                   'WZgS'    : ['1', '1'],
#                   'WZgS_L'  : ['1', '1'],
#                   'WZgS_H'  : ['1', '1'],
#                   'VVV'     : ['1', '1'],
#                   'Vg'      : ['1', '1'],
#                   'VgS'     : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww'  : ['1', '1'],
#                   'ZH_hww'  : ['1', '1'],
#                   'ggZH_hww': ['1', '1'],
#                   'bbH_hww' : ['1', '1'],
#                   'ttH_hww' : ['1', '1'],
#                   'H_htt'   : ['1', '1'],
#                   'ggH_htt' : ['1', '1'] ,
#                   'qqH_htt' : ['1', '1'] ,
#                   'ZH_htt'  : ['1', '1'] ,
#                   'WH_htt'  : ['1', '1'] ,
#                },
#                'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__METup',
#                'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__METdo',
#}
#
#if useEmbeddedDY:
#  for samp in DYvetosamples:
#    del nuisances['met']['samples'][samp]
#
#  nuisances['met_embveto']  = {
#                  'name'  : 'scale_met_2018',
#                  'kind'  : 'tree',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'ggWW'    : ['1', '1'],
#                     'WW'      : ['1', '1'],
#                     'WWewk'   : ['1', '1'],
#                     'top'     : ['1', '1'],
#                     'VZ'      : ['1', '1'],
#                     'Vg'      : ['1', '1'],
#                     'VgS'     : ['1', '1'],
#                  },
#                  'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__METup',
#                  'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__EmbeddingVeto__METdo',
#  }
#
## Prefire correction
#prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']
#
#nuisances['prefire']  = {
#                'name'  : 'CMS_eff_prefiring_2018',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'      : prefire_syst ,
#                   'VVV'     : prefire_syst ,
#                   'VZ'      : prefire_syst ,
#                   'WZgS'    : prefire_syst ,
#                   'WZgS_L'  : prefire_syst ,
#                   'WZgS_H'  : prefire_syst ,
#                   'ggWW'    : prefire_syst ,
#                   'WW'      : prefire_syst ,
#                   'WWewk'   : prefire_syst ,
#                   'top'     : prefire_syst ,
#                   'Vg'      : prefire_syst ,
#                   'VgS'     : prefire_syst ,
#                   'ggH_hww' : prefire_syst ,
#                   'qqH_hww' : prefire_syst ,
#                   'WH_hww'  : prefire_syst ,
#                   'ZH_hww'  : prefire_syst ,
#                   'ggZH_hww': prefire_syst ,
#                   'bbH_hww' : prefire_syst ,
#                   'ttH_hww' : prefire_syst ,
#                   'H_htt'   : prefire_syst ,
#                   'ggH_htt' : prefire_syst ,
#                   'qqH_htt' : prefire_syst ,
#                   'ZH_htt'  : prefire_syst ,
#                   'WH_htt'  : prefire_syst ,
#                }
#}
#if useEmbeddedDY: del nuisances['prefire']['samples']['DY']
#
#
## Di-Tau vetoing for embedding
#if useEmbeddedDY: 
#  nuisances['embedveto']  = {
#                  'name'  : 'CMS_embed_veto',
#                  'kind'  : 'weight',
#                  'type'  : 'shape',
#                  'samples'  : {
#                     'DY'       : ['1', '1'],
#                     'DYveto'   : ['0.1', '-0.1'],
#                  }
#  }
#
#
##
## PS and UE
##
#nuisances['PS']  = {
#                'name'  : 'PS',
#                'skipCMS' : 1,
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                  'WW'      : ['PSWeight[0]', 'PSWeight[3]'],
#                  },
#                }
#
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
##                'folderUp'   : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEup',
##                'folderDown' : treeBaseDir+'Fall2018_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__UEdo',
##                'AsLnN'      : '1',
##}


nuisances['PU']  = {
                'name'  : 'PU_2018',
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

#nuisances['QCDscale_CRSR_accept_top']  = {
#               'name'  : 'CMS_hww_QCDscale_CRSR_accept_top', 
#               'type'  : 'lnN',
#               'samples'  : {
#                   'top' : '1.01',
#                   },
#               'cuts'  : [
#                 'hww2l2v_13TeV_top_of0j',
#                 'hww2l2v_13TeV_top_of1j',
#                 'hww2l2v_13TeV_top_of2j',
#                 'hww2l2v_13TeV_top_of2j_vbf',
#                 'hww2l2v_13TeV_top_of2j_vh2j'
#                ]               
#              }

#FIXME: check this 3%
nuisances['QCDscale_VZ']  = {
               'name'  : 'QCDscale_VZ', 
               'samples'  : {
                   'VZ' : '1.03',
                   },
               'type'  : 'lnN'
              }


nuisances['QCDscale_WWewk']  = {
               'name'  : 'QCDscale_WWewk',
               'samples'  : {
                   'WWewk' : '1.11',
                   },
               'type'  : 'lnN'
              }


nuisances['pdf_qqbar']  = {
               'name'  : 'pdf_qqbar',
               'type'  : 'lnN',
               'samples'  : {
                   'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
                   },
              }

nuisances['pdf_gg_ACCEPT']  = {
               'name'  : 'pdf_gg_ACCEPT',
               'samples'  : {
                   'ggWW'    : '1.005',
                   },
               'type'  : 'lnN',
              }

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



## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              #nuisance ['includeSignal'] = 1, # Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {}
             }


nuisances['Topnorm']  = {
    'name'  : 'Topnorm',
    'samples'  : {
        'top' : '1.00',
        },
    'type'  : 'rateParam',
    'cuts'  : [
        'VH_2j_emu',
        'VH_2j_topemu',
        'VH_2j_DYtautau',
        #                                                                                                                         
        ]
    }


nuisances['DYnorm']  = {                                                                                                           
    'name'  : 'DYnorm',                                                                                                            
    'samples'  : {                                                                                                                 
        'top' : '1.00',                                                                                                            
        },                                                                                                                         
    'type'  : 'rateParam',                                                                                                         
   'cuts'  : [                                                                                                                    
        'VH_2j_emu',
        'VH_2j_topemu',                                                                                                            # 
        'VH_2j_DYtautau',                                                                                                          
        #                                                                                                                          
        ]                                                                                                                          
    } 
