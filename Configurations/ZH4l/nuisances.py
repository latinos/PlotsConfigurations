# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#

nuisances['lumi2016']  = {
             #  'name'  : 'lumi_13TeV', 
               'name'  : 'lumi_13TeV_2016', 
               'samples'  : {
                   'WH_hww'   : '1.058',
                   'ZH_hww'   : '1.058',
                   'WH_htt'    : '1.058',
                   'ZH_htt'   : '1.058',
                   'ggH_hzz'  : '1.058',
                   'VVV'      : '1.058',
                   'ZZ'       : '1.058',
    #               'WZ'       : '1.050',
                   'WW'       : '1.058',
               #    'ggWW'     : '1.050',
                   'Vg'       : '1.058',
                   },
               'type'  : 'lnN',
              }

# Theoritical Systematics

from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()

nuisances['QCDscale_ZH_zh4l']  = {
               'name'  : 'QCDscale_ZH',
               'samples'  : {
                   'ZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }



nuisances['QCDscale_ggZH_wh3l']  = {
               'name'  : 'QCDscale_ggZH',
               'samples'  : {
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }


# pdf uncertainty

nuisances['pdf_gg_wh3l']  = {
               'name'  : 'pdf_gg',
               'samples'  : {
                   #'ggWW'    : '1.05',    # --> no, since absorbed into k-scale factor
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'WH_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','pdf','sm'),
                   },
               'type'  : 'lnN',
              }


nuisances['pdf_qqbar_wh3l']  = {
               'name'  : 'pdf_qqbar',
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
                   'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH' ,'125.0','pdf','sm'),
                   'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.0','pdf','sm'),
                   },
              }

#pdf and qcd acceptnace
#
#nuisances['pdf_gg_accept_wh3l']  = {
#               'name'  : 'pdf_gg_accept',
#               'samples'  : {
#                   'ggH_hww' : '1.005',
#                   'ggH_htt' : '1.005',
#                   'WH_htt'   : '1.005',
#                   'ggZH_hww': '1.005',
#                   },
#               'type'  : 'lnN',
#              }
#
#
#nuisances['pdf_qqbar_accept_wh3l']  = {
#               'name'  : 'pdf_qqbar_accept',
#               'type'  : 'lnN',
#               'samples'  : {
#                   #
#                   'qqH_hww' : '1.011',
#                   'qqH_htt' : '1.011',
#                   'WH_hww'  : '1.007',
#                   'ZH_hww'  : '1.012',
#                   'WZ'      : '1.006',
#                   },
#              }
#
#nuisances['QCDscale_qqbar_accept']  = {
#               'name'  : 'QCDscale_qqbar_accept', 
#               'type'  : 'lnN',
#               'samples'  : {
#                   'qqH_hww' : '1.007',
#                   'qqH_htt' : '1.007',
#                   'WH_hww'  : '1.05',
#                   'ZH_hww'  : '1.04',
#                   'WZ'      : '1.001'
#                   },
#              }
#
#
#
#nuisances['QCDscale_gg_accept']  = {
#               'name'  : 'QCDscale_gg_accept', 
#               'samples'  : {
#                   'ggH_hww' : '1.027',
#                   'ggH_htt' : '1.027',
#                   'WH_htt'   : '1.04',
#                   'ggZH_hww': '1.003',                   
#
#                   },
#               'type'  : 'lnN',
#              }
#
#
## PS/UE
#
## PS
#
nuisances['PS_zh4l']  = {
                'name'  : 'PS_zh4l',
 #               'kind'  : 'tree',
                'type'  : 'lnN',
                'samples'  : {
                   'WH_hww'   : '1.037',
                   'ZH_hww'   : '1.037',
                   'WH_htt'    : '1.037',
                   'ZH_htt'   : '1.037',
                   'ggH_hzz'  : '1.037',
                },
  #              'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/',
  #              'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/',
}

nuisances['UE_zh4l']  = {
                'name'  : 'UE_zh4l',
                'type'  : 'lnN',
                'samples'  : {
                   'WH_hww'   : '1.010',
                   'ZH_hww'   : '1.010',
                   'WH_htt'    : '1.010',
                   'ZH_htt'   : '1.010',
                   'ggH_hzz'  : '1.010',
                },
                }


#nuisances['Zg3lnorm']  = {
#               'name'  : 'Zg3lnorm',
#               'samples'  : {
#                   'Vg' : '1.00',
#                   },
#               'type'  : 'rateParam',
#               'cuts'  : [
#                 'wh3l_zg_13TeV',
#                 'wh3l_13TeV_sssf',
#                 'wh3l_13TeV_ossf',
#                 'wh3l_wz_13TeV',
#                ]
#              }
#
#nuisances['WZ3lnorm']  = {
#               'name'  : 'WZ3lnorm',
#               'samples'  : {
#                   'WZ' : '1.00',
#                   },
#               'type'  : 'rateParam',
#               'cuts'  : [
#                 'wh3l_wz_13TeV',
#                 'wh3l_13TeV_sssf',
#                 'wh3l_13TeV_ossf',
#                 'wh3l_zg_13TeV',
#                ]
#              }
#
# Other Systematics

# fakes 


#nuisances['fake_syst_zh4l']  = {
#               'name'  : 'fake_syst_zh4l',
#               'type'  : 'lnN',
#               'samples'  : {
#                   'Fake' : '1.30',
#                   },
#}
#
#nuisances['fake_ele_zh4l']  = {
#                'name'  : 'fake_ele',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'Fake'      : ['fakeW4lElUp/fakeW4l','fakeW4lElDown/fakeW4l'],
#                }
#}
#
#
#nuisances['fake_ele_stat']  = {
#                'name'  : 'fake_ele_stat',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'Fake'      : ['fakeW4lstatElUp/fakeW4l','fakeW4lstatElDown/fakeW4l'],
#
#                }
#}
#
#
#nuisances['fake_mu_zh4l']  = {
#                'name'  : 'fake_mu_wh',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'Fake'      : ['fakeW4lMuUp/fakeW4l','fakeW4lMuDown/fakeW4l'],
#                  
#                }
#}
#
#
#nuisances['fake_mu_stat']  = {
#                'name'  : 'fake_mu_stat',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'Fake'      : ['fakeW4lstatMuUp/fakeW4l','fakeW4lstatMuDown/fakeW4l'], 
#                }
#}


#nuisances['btag']  = {
#                'name'  : 'btag',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'ggH_hww' : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'qqH_hww' : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'WH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'ZH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'WH_htt'   : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'H_hww'   : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'WH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'DY'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'VVV'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'VZ'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'WW'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'ggWW'    : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'top'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'Vg'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                   'VgS'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
#                }
#}

nuisances['btagbc']  = {
                'name'  : 'ICHEP_btag_bc',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'qqH_hww' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'WH_hww'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'ZH_hww'  : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'H_htt'   : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'H_hww'   : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'ggH_hzz' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'DY'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'VVV'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'VZ'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'WW'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'ggWW'    : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'top'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'Vg'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                   'VgS'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
                }
}

nuisances['btagudsg']  = {
                'name'  : 'ICHEP_btag_udsg',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'qqH_hww' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'WH_hww'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'ZH_hww'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'H_htt'   : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'H_hww'   : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'WH_hww'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'ggH_hzz'  : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'DY'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'VVV'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'VZ'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'WW'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'ggWW'    : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'top'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'Vg'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                   'VgS'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
                }
}


nuisances['trigg_zh4l']  = {
                'name'  : 'trigger',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WH_hww'  : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'ZH_hww'  : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'ggZH_hww'  : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'WH_htt'   : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'ggH_hzz' : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'VVV'     : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'WZ'      : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'ZZ'      : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'WW'      : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                   'Vg'      : ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)'],
                },
}
#
#
#
#nuisances['idiso_ele_wh3l']  = {
#                'name'  : 'idiso_ele',
#                'kind'  : 'weight',
#                #'kind'  : 'tree', #'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                  'WH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
#                  'ZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
#                  'ggZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
#                  'WH_htt' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
#                  'WW' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
#                  'Vg' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
#                  'WZ' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
#                  'ZZ' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
#                  'ggWW' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
#                  'VVV' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
#                 },
#                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
#                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
#}
#
#
#nuisances['idiso_mu_wh3l']  = {
#                'name'  : 'idiso_mu',
#                'kind'  : 'weight',
#                #'kind'  : 'tree', #'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                  'WH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
#                  'ZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
#                  'ggZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
#                  'WH_htt' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
#                  'WW' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
#                  'Vg' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
#                  'WZ' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
#                  'ZZ' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))','((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
#                  'ggWW' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
#                  'VVV' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
#                 },
#}

# nuisances handled by means of a different set of trees


nuisances['jes_zh4l']  = {
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
                   'ZH_htt' :  ['1', '1'],
                   'ggH_hzz' : ['1', '1'],
                  'WH_htt'  : ['1', '1'],
                   'Vg' : ['1', '1'],
                },
                'folderUp'   : '/tmp/arun/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup__vh3lSel__l3kin__l4kin/',
                'folderDown' : '/tmp/arun/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__vh3lSel__l3kin__l4kin/'

}

nuisances['electronpt_zh4l']  = {
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
                   'ggH_hzz' : ['1', '1'],
                   'ZH_htt'  :  ['1', '1'],
                   'WH_htt'   : ['1', '1'],
                   'Vg' : ['1', '1'],
                },
               'folderUp'   : '/tmp/arun/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__vh3lSel__l3kin__l4kin/',
               'folderDown' : '/tmp/arun/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__vh3lSel__l3kin__l4kin/'
}

nuisances['muonpt_zh4l']  = {
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
                   'ZH_htt' :  ['1', '1'],
                   'ggH_hzz' : ['1', '1'],
                   'WH_htt' : ['1', '1'],
                   'Vg' : ['1', '1'],
                },
              'folderUp'   : '/tmp/arun/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__vh3lSel__l3kin__l4kin/',
              'folderDown' : '/tmp/arun/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__vh3lSel__l3kin__l4kin/'
}

nuisances['met_zh4l']  = {
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
                   'ZH_htt' :  ['1', '1'],
                   'ggH_hzz' : ['1', '1'],
                   'WH_htt' : ['1', '1'],
                   'Vg' : ['1', '1'],
                },
               'folderUp'   : '/tmp/arun/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__vh3lSel__l3kin__l4kin/',
               'folderDown' : '/tmp/arun/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__vh3lSel__l3kin__l4kin/'
}

# statistical fluctuation
# on MC/data
# "stat" is a special word to identify this nuisance
nuisances['stat']  = {
                # apply to the following samples: name of samples here must match keys in samples.py
               'samples'  : {
                   
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

                   'WH_hww': {
                         'typeStat' : 'bbb',
                         },

                   'ZH_hww': {
                         'typeStat' : 'bbb',
                         },

                   'WH_htt': {
                         'typeStat' : 'bbb',
                         },


                   'ZH_htt': {
                         'typeStat' : 'bbb',
                         },
                   'ggH_hzz': {
                         'typeStat' : 'bbb',
                         },
                   
                   'Fake': { 
                         'typeStat' : 'bbb',
                         },
                   
                   'Vg': {  
                         'typeStat' : 'bbb',
                         },

                 },
               'type'  : 'shape'
              }


