# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#

nuisances['lumi']  = {
               'name'  : 'lumi', 
               'all'   : 1 ,     # apply to all samples
               'type'  : 'lnN',
               'value' : 1.05 
              }


nuisances['WWnorm']  = {
               'name'  : 'WWnorm', 
               'samples'  : {
                   'WW' : 2.00,
                   },
               'type'  : 'lnU',
              }



## nuisances handled by means of a weight in the tree

#nuisances['pileup']  = {
                #'name'  : 'pileup', 
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   ##'ttbar' : ['puWup/puW', 'puWdown/puW'],
                   ##'DY'    : ['puWup/puW', 'puWdown/puW']
                   #'ttbar' : ['3./puW', '0.3/puW'],
                   #'DY'    : ['3./puW', '0.3/puW']
                #}
#}


# nuisances handled by means of a different set of trees

#nuisances['eleScale']  = {
                #'name'  : 'eleScale', 
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ttbar' : ['1', '1'],
                   #'Wjets' : ['1', '1']
                #},
                #'folderUp'   : '/tmp/amassiro/Tree_eleScaleUp/',
                #'folderDown' : '/tmp/amassiro/Tree_eleScaleDown/' 
#}

# statistical fluctuation
# on MC/data
# "stat" is a special word to identify this nuisance
nuisances['stat']  = {
                # apply to the following samples: name of samples here must match keys in samples.py
               'samples'  : {
                   
                   'ttbar': {
                         'typeStat' : 'bbb',
                         },

                   'top': {
                         'typeStat' : 'bbb',
                         },
                    
                   'DY': {
                         'typeStat' : 'bbb',
                         'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
                         },
                    
                   'WW': {
                         'typeStat' : 'bbb',
                         },

                   'WZ': {
                         'typeStat' : 'bbb',
                         },

                   'VVV': {
                         'typeStat' : 'bbb',
                         },

                   'ggH': {
                         'typeStat' : 'bbb',
                         },

                 },
               'type'  : 'shape'
              }


