# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV', 
               'samples'  : {
#                   'ggH_hww'  : '1.027',
#                   'qqH_hww'  : '1.027',
                   'WH_hww'   : '1.027',
                   'ZH_hww'   : '1.027',
                   'H_htt'    : '1.027',
  #                 'H_hww'    : '1.027',
   #                'WH_hww'   : '1.027',
                   'ggZH_hww'   : '1.027',
                   'VVV'      : '1.027',
                   'ZZ'       : '1.027',
    #               'WZ'       : '1.027',
                   'WW'       : '1.027',
               #    'ggWW'     : '1.027',
                   'Vg'       : '1.027',
     #              'VgS'      : '1.027',
                   #'DY'       : '1.027',    # --> datadriven
                   #'WW'       : '1.027',    # --> datadriven
                   #'top'      : '1.027',    # --> datadriven
                   },
               'type'  : 'lnN',
              }

# Theoritical Systematics

from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()

nuisances['QCDscale_WH']  = {
               'name'  : 'QCDscale_WH',
               'samples'  : {
                   'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }



nuisances['QCDscale_ZH']  = {
               'name'  : 'QCDscale_ZH',
               'samples'  : {
                   'ZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }



nuisances['QCDscale_ggZH']  = {
               'name'  : 'QCDscale_ggZH',
               'samples'  : {
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }

# pdf uncertainty

nuisances['pdf_gg']  = {
               'name'  : 'pdf_gg',
               'samples'  : {
                   #'ggWW'    : '1.05',    # --> no, since absorbed into k-scale factor
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','pdf','sm'),
                   },
               'type'  : 'lnN',
              }


nuisances['pdf_qqbar']  = {
               'name'  : 'pdf_qqbar',
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
                   'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH' ,'125.0','pdf','sm'),
                   'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.0','pdf','sm'),
#                   'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
                   },
              }

nuisances['Zg3lnorm']  = {
               'name'  : 'Zg3lnorm',
               'samples'  : {
                   'Vg' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'wh3l_zg_13TeV',
                ]
              }

nuisances['WZ3lnorm']  = {
               'name'  : 'WZ3lnorm',
               'samples'  : {
                   'WZ' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'wh3l_wz_13TeV',
                ]
              }

# Other Systematics

# fakes 


nuisances['fake_syst']  = {
               'name'  : 'fake_syst',
               'type'  : 'lnN',
               'samples'  : {
                   'Fake' : '1.30',
                   },
}



nuisances['btag_TightWP']  = {
                'name'  : 'btag_TightWP',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WH_hww'  : ['(bPogSF_CMVAT_Up)/(bPogSF_CMVAT)', '(bPogSF_CMVAT_Down)/(bPogSF_CMVAT)'],
                   'ZH_hww'  : ['(bPogSF_CMVAT_Up)/(bPogSF_CMVAT)', '(bPogSF_CMVAT_Down)/(bPogSF_CMVAT)'],
                   'ggZH_hww'  : ['(bPogSF_CMVAT_Up)/(bPogSF_CMVAT)', '(bPogSF_CMVAT_Down)/(bPogSF_CMVAT)'],
                   'H_htt'   : ['(bPogSF_CMVAT_Up)/(bPogSF_CMVAT)', '(bPogSF_CMVAT_Down)/(bPogSF_CMVAT)'],
                   'VVV'     : ['(bPogSF_CMVAT_Up)/(bPogSF_CMVAT)', '(bPogSF_CMVAT_Down)/(bPogSF_CMVAT)'],
                   'WZ'      : ['(bPogSF_CMVAT_Up)/(bPogSF_CMVAT)', '(bPogSF_CMVAT_Down)/(bPogSF_CMVAT)'],
                   'ZZ'      : ['(bPogSF_CMVAT_Up)/(bPogSF_CMVAT)', '(bPogSF_CMVAT_Down)/(bPogSF_CMVAT)'],
                   'WW'      : ['(bPogSF_CMVAT_Up)/(bPogSF_CMVAT)', '(bPogSF_CMVAT_Down)/(bPogSF_CMVAT)'],
                   'Vg'      : ['(bPogSF_CMVAT_Up)/(bPogSF_CMVAT)', '(bPogSF_CMVAT_Down)/(bPogSF_CMVAT)'],
                }
}


nuisances['trigg']  = {
                'name'  : 'trigger',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WH_hww'  : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'ZH_hww'  : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'ggZH_hww'  : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'H_htt'   : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'VVV'     : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'WZ'      : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'ZZ'      : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'WW'      : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'Vg'      : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                },
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
}

#nuisances['idiso_ele']  = {
#                'name'  : 'idiso_ele',
#                'kind'  : 'weight',
#                #'kind'  : 'tree', #'weight',
 #               'type'  : 'shape',
 #               'samples'  : {
 #                 'WH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
  #                'H_htt' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],               
   #               'VVV' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
    #              'WZ' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
     #             'ZZ' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
      #            'WW' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
       #           'Vg' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],

        #         },
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
#}

# nuisances handled by means of a different set of trees


nuisances['jes']  = {
                'name'  : 'scale_j',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1', '1'],
                   'WZ' :  ['1', '1'],
                   'ZZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww' :  ['1', '1'],
                   'H_htt'  : ['1', '1'],
                   'Vg' : ['1', '1'],
                },
                'folderUp'   : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup__vh3lSel__l3kin/',
                'folderDown' : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__vh3lSel__l3kin/'
}

nuisances['electronpt']  = {
                'name'  : 'scale_e',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1', '1'],
                   'WZ' :  ['1', '1'],
                   'ZZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'WH_hww'  :  ['1', '1'],
                   'ZH_hww'  :  ['1', '1'],
                   'ggZH_hww'  :  ['1', '1'],
                   'H_htt'   : ['1', '1'],
                   'Vg' : ['1', '1'],
                },
                'folderUp'   : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__vh3lSel__l3kin/',
                'folderDown' : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__vh3lSel__l3kin/'
}

nuisances['muonpt']  = {
                'name'  : 'scale_m',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1', '1'],
                   'WZ' :  ['1', '1'],
                   'ZZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww' :  ['1', '1'],
                   'H_htt' : ['1', '1'],
                   'Vg' : ['1', '1'],
                },
                'folderUp'   : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__vh3lSel__l3kin/',
                'folderDown' : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__vh3lSel__l3kin/'
}

nuisances['met']  = {
                'name'  : 'scale_met',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1', '1'],
                   'WZ' :  ['1', '1'],
                   'ZZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww' :  ['1', '1'],
                   'H_htt' : ['1', '1'],
                   'Vg' : ['1', '1'],
                },
                'folderUp'   : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__vh3lSel__l3kin/',
                'folderDown' : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__vh3lSel__l3kin/'
}

# statistical fluctuation
# on MC/data
# "stat" is a special word to identify this nuisance
nuisances['stat']  = {
                # apply to the following samples: name of samples here must match keys in samples.py
               'samples'  : {
                   
              #     'ttbar': {
              #           'typeStat' : 'bbb',
              #           },

              #     'singletop': {
              #           'typeStat' : 'bbb',
              #           },
                    
              #     'top': {
              #           'typeStat' : 'bbb',
              #           },
                    
              #     'DY': {
              #           'typeStat' : 'bbb',
              #           'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
              #           },
                    
               #    'ggWW': {
               #          'typeStat' : 'bbb',
               #          },
                    
              #     'ggWW_Int': {
              #           'typeStat' : 'bbb',
              #           },
                    
                   'WW': {
                         'typeStat' : 'bbb',
                         },

                   'ZZ': {
                         'typeStat' : 'bbb',
                         },

                   'WZ': {
                         'typeStat' : 'bbb',
                         },

                   'VVV': {
                         'typeStat' : 'bbb',
                         },

       #            'H_hww': {
       #                  'typeStat' : 'bbb',
       #                  },

        #           'ggH_hww': {
        #                 'typeStat' : 'bbb',
        #                 },

         #          'qqH_hww': {
         #                'typeStat' : 'bbb',
         #                },

                   'WH_hww': {
                         'typeStat' : 'bbb',
                         },

                   'ZH_hww': {
                         'typeStat' : 'bbb',
                         },

                   'H_htt': {
                         'typeStat' : 'bbb',
                         },

         #          'ggH_htt': {
         #                'typeStat' : 'bbb',
         #                },

          #         'qqH_htt': {
          #               'typeStat' : 'bbb',
          #               },

           #        'WH_htt': {
           #              'typeStat' : 'bbb',
           #              },

           #        'ZH_htt': {
           #              'typeStat' : 'bbb',
           #              },

                   'ggZH_hww': {
                         'typeStat' : 'bbb',
                         },
                   
                   'Fake': {  # needed?
                         'typeStat' : 'bbb',
                         },
                   
                   'Vg': {  
                         'typeStat' : 'bbb',
                         },

             #      'VgS':{  
             #            'typeStat' : 'bbb',
             #            },
                            
                 },
               'type'  : 'shape'
              }


