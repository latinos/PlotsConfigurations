



#
# Theory uncertainty for ggH
#

nuisances['ggH_mu']  = {
                'name'  : 'ggH_mu',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_mu', '(1.-ggH_mu)'],
                   },
                }


