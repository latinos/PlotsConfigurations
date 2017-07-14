



#
# Theory uncertainty for ggH
#

nuisances['ggH_mu']  = {
                'name'  : 'ggH_mu',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_mu', '1+(1.-ggH_mu)'],
                   },
                }


nuisances['ggH_res']  = {
                'name'  : 'ggH_res',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_res', '1+(1.-ggH_res)'],
                   },
                }

nuisances['ggH_mig01']  = {
                'name'  : 'ggH_mig01',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_mig01', '1+(1.-ggH_mig01)'],
                   },
                }

nuisances['ggH_mig12']  = {
                'name'  : 'ggH_mig12',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_mig12', '1+(1.-ggH_mig12)'],
                   },
                }

nuisances['ggH_pT60']  = {
                'name'  : 'ggH_pT60',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_pT60', '1+(1.-ggH_pT60)'],
                   },
                }

nuisances['ggH_pT120']  = {
                'name'  : 'ggH_pT120',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_pT120', '1+(1.-ggH_pT120)'],
                   },
                }

nuisances['ggH_VBF2j']  = {
                'name'  : 'ggH_VBF2j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_VBF2j', '1+(1.-ggH_VBF2j)'],
                   },
                }

nuisances['ggH_VBF3j']  = {
                'name'  : 'ggH_VBF3j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_VBF3j', '1+(1.-ggH_VBF3j)'],
                   },
                }

nuisances['ggH_qmtop']  = {
                'name'  : 'ggH_qmtop',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'   : ['ggH_qmtop', '1+(1.-ggH_qmtop)'],
                   },
                }


