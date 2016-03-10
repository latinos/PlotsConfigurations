
nuisances['btag']  = {
                'name'  : 'btag',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'VVV'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'VZ'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'WW'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'top'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                }
}
 

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV', 
               'all'   : 1 ,     # apply to all samples
               'type'  : 'lnN',
               'value' : '1.027' 
              }

nuisances['QCDscale_ggH0j']  = {
               'name'  : 'QCDscale_ggH0j', 
               'samples'  : {
                   'ggH_hww' : '1.056',
                   },
               'type'  : 'lnN',
               'cuts'  : [
                 'hww2l2v_13TeV_of0j',
                 'hww2l2v_13TeV_top_of0j',
                 'hww2l2v_13TeV_dytt_of0j'
                ]               
              }


nuisances['QCDscale_ggH1j']  = {
               'name'  : 'QCDscale_ggH1j', 
               'samples'  : {
                   'ggH_hww' : '1.13',
                   },
               'type'  : 'lnN',
               'cuts'  : [
                 'hww2l2v_13TeV_of1j',
                 'hww2l2v_13TeV_top_of1j',
                 'hww2l2v_13TeV_dytt_of1j'              
                ]
              }


nuisances['QCDscale_ggH']  = {
               'name'  : 'QCDscale_ggH', 
               'samples'  : {
                   'ggH_hww' : '0.921/1.074',
                   'ggH_htt' : '0.921/1.074',
                   'H_htt'   : '0.921/1.074',
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_qqH']  = {
               'name'  : 'QCDscale_qqH', 
               'samples'  : {
                   'qqH_hww' : '0.993/1.007',
                   'qqH_htt' : '0.993/1.007',
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_WH']  = {
               'name'  : 'QCDscale_WH', 
               'samples'  : {
                   'WH_hww' : '0.985/1.007',
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_ZH']  = {
               'name'  : 'QCDscale_ZH', 
               'samples'  : {
                   'ZH_hww' : '0.962/1.038',
                   },
               'type'  : 'lnN',
              }


nuisances['QCDscale_ggZH']  = {
               'name'  : 'QCDscale_ggZH', 
               'samples'  : {
                   'ggZH_hww': '0.795/1.257',                   
                   },
               'type'  : 'lnN',
              }


nuisances['pdf_gg']  = {
               'name'  : 'pdf_gg', 
               'samples'  : {
                   'ggH_hww' : '0.929/1.060',
                   'ggH_htt' : '0.929/1.060',
                   'H_htt'   : '0.929/1.060',
                   'ggZH_hww': '0.949/1.051',                   
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_gg_accept']  = {
               'name'  : 'QCDscale_gg_accept', 
               'samples'  : {
                   'ggH_hww' : '1.03',
                   'ggH_htt' : '1.03',
                   'H_htt'   : '1.03',
                   'ggZH_hww': '1.03',                   
                   },
               'type'  : 'lnN',
              }



nuisances['pdf_qqbar']  = {
               'name'  : 'pdf_qqbar', 
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : '0.97/1.03',
                   'qqH_htt' : '0.97/1.03',
                   'WH_hww'  : '0.978/1.022',
                   'ZH_hww'  : '0.978/1.022',
                   #'VZ'      : '',
                   },
              }

nuisances['pdf_gg_accept']  = {
               'name'  : 'pdf_gg_accept', 
               'samples'  : {
                   'ggH_hww' : '1.022',
                   'ggH_htt' : '1.022',
                   'H_htt'   : '1.022',
                   'ggZH_hww': '1.022', 
                   #'top'     : '1.015',    # ---> not needed                
                   },
               'type'  : 'lnN',
              }


nuisances['pdf_qqbar_accept']  = {
               'name'  : 'pdf_qqbar_accept', 
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : '1.018',
                   'qqH_htt' : '1.018',
                   'WH_hww'  : '1.018',
                   'ZH_hww'  : '1.018',
                   #'WW'      : '1.015',    # ---> not needed
                   'VW'      : '1.015',
                   },
              }

nuisances['QCDscale_qqbar_accept']  = {
               'name'  : 'QCDscale_qqbar_accept', 
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : '1.02',
                   'qqH_htt' : '1.02',
                   'WH_hww'  : '1.02',
                   'ZH_hww'  : '1.02',
                   },
              }


# ggww and interference

nuisances['kfactggww']  = {
               'name'  : 'kfactggww', 
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW' : '1.15',
                   },
              }


nuisances['kfactggwwInt']  = {
               'name'  : 'kfactggwwInt', 
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW_Int' : '1.25',
                   },
              }

nuisances['WgStarScale']  = {
               'name'  : 'pdf_qqbar_accept', 
               'type'  : 'lnN',
               'samples'  : {
                   'Wg' : '1.25',  # 0.3 / 1.2  --> k_factor = 1.2 +/- 0.3
                   },
                }

# statistical fluctuation
# on MC/data
# "stat" is a special word to identify this nuisance
nuisances['stat']  = {
                # apply to the following samples: name of samples here must match keys in samples.py
               'samples'  : {
                   
                   'ttbar': {
                         'typeStat' : 'bbb',
                         },

                   'singletop': {
                         'typeStat' : 'bbb',
                         },
                    
                   'top': {
                         'typeStat' : 'bbb',
                         },
                    
                   'DY': {
                         'typeStat' : 'bbb',
                         'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
                         },
                    
                   'ggWW': {
                         'typeStat' : 'bbb',
                         },
                    
                   'ggWW_Int': {
                         'typeStat' : 'bbb',
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

                   'H_hww': {
                         'typeStat' : 'bbb',
                         },

                   'ggH_hww': {
                         'typeStat' : 'bbb',
                         },

                   'qqH_hww': {
                         'typeStat' : 'bbb',
                         },

                   'WH_hww': {
                         'typeStat' : 'bbb',
                         },

                   'ZH_hww': {
                         'typeStat' : 'bbb',
                         },

                   'H_htt': {
                         'typeStat' : 'bbb',
                         },

                   'ggH_htt': {
                         'typeStat' : 'bbb',
                         },

                   'qqH_htt': {
                         'typeStat' : 'bbb',
                         },

                   'WH_htt': {
                         'typeStat' : 'bbb',
                         },

                   'ZH_htt': {
                         'typeStat' : 'bbb',
                         },


                 },
               'type'  : 'shape'
              }



