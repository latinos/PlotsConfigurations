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

nuisances['QCDscale_WH_wh3l']  = {
               'name'  : 'QCDscale_WH_wh3l',
               'samples'  : {
                   'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }



nuisances['QCDscale_ZH_wh3l']  = {
               'name'  : 'QCDscale_ZH_wh3l',
               'samples'  : {
                   'ZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }



nuisances['QCDscale_ggZH_wh3l']  = {
               'name'  : 'QCDscale_ggZH_wh3l',
               'samples'  : {
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_H_htt_wh3l']  = {
               'name'  : 'QCDscale_ggH_wh3l',
               'samples'  : {
                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }



# pdf uncertainty

nuisances['pdf_gg_wh3l']  = {
               'name'  : 'pdf_gg_wh3l',
               'samples'  : {
                   #'ggWW'    : '1.05',    # --> no, since absorbed into k-scale factor
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','pdf','sm'),
                   },
               'type'  : 'lnN',
              }


nuisances['pdf_qqbar_wh3l']  = {
               'name'  : 'pdf_qqbar_wh3l',
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
                   'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH' ,'125.0','pdf','sm'),
                   'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.0','pdf','sm'),
#                   'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
                   },
              }

#pdf and qcd acceptnace

nuisances['pdf_gg_accept_wh3l']  = {
               'name'  : 'pdf_gg_accept_wh3l',
               'samples'  : {
                   'ggH_hww' : '1.005',
                   'ggH_htt' : '1.005',
                   'H_htt'   : '1.005',
                   'ggZH_hww': '1.005',
                   },
               'type'  : 'lnN',
              }


nuisances['pdf_qqbar_accept_wh3l']  = {
               'name'  : 'pdf_qqbar_accept_wh3l',
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'qqH_hww' : '1.011',
                   'qqH_htt' : '1.011',
                   'WH_hww'  : '1.007',
                   'ZH_hww'  : '1.012',
                   },
              }

nuisances['QCDscale_qqbar_accept']  = {
               'name'  : 'QCDscale_qqbar_accept', 
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : '1.007',
                   'qqH_htt' : '1.007',
                   'WH_hww'  : '1.05',
                   'ZH_hww'  : '1.04',
                   },
              }



nuisances['QCDscale_gg_accept']  = {
               'name'  : 'QCDscale_gg_accept', 
               'samples'  : {
                   'ggH_hww' : '1.027',
                   'ggH_htt' : '1.027',
                   'H_htt'   : '1.04',
                   'ggZH_hww': '1.003',                   

                   },
               'type'  : 'lnN',
              }


# PS/UE

# PS

nuisances['PS_wh3l']  = {
                'name'  : 'PS_wh3l',
 #               'kind'  : 'tree',
                'type'  : 'lnN',
                'samples'  : {
                   'WH_hww'   : '1.037',
                   'ZH_hww'   : '1.037',
                   'H_htt'    : '1.037',
                   'ggZH_hww'   : '1.037',
                   'ZH_htt'   : '1.037',
                },
  #              'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/',
  #              'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/',
}

#nuisances['UE_wh3l']  = {
#                'name'  : 'UE',
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'WW' :  ['1/0.978817', '1/1.0192'],
#                   'ggH_hww' : ['1/0.9262', '1/0.984785'],
#                   'qqH_hww' : ['1/0.951846', '1/1.00099'],
#                },
#                'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/',
#                'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/'
#                }


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


nuisances['fake_syst_wh3l']  = {
               'name'  : 'fake_syst_wh3l',
               'type'  : 'lnN',
               'samples'  : {
                   'Fake' : '1.35',
                   },
}



#nuisances['btag_TightWP']  = {
#                'name'  : 'btag_TightWP',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'WH_hww'  : ['(bPogSF_CMVAM_Up)/(bPogSF_CMVAM)', '(bPogSF_CMVAM_Down)/(bPogSF_CMVAM)'],
#                   'ZH_hww'  : ['(bPogSF_CMVAM_Up)/(bPogSF_CMVAM)', '(bPogSF_CMVAM_Down)/(bPogSF_CMVAM)'],
#                   'ggZH_hww'  : ['(bPogSF_CMVAM_Up)/(bPogSF_CMVAM)', '(bPogSF_CMVAM_Down)/(bPogSF_CMVAM)'],
#                   'H_htt'   : ['(bPogSF_CMVAM_Up)/(bPogSF_CMVAM)', '(bPogSF_CMVAM_Down)/(bPogSF_CMVAM)'],
#                   'VVV'     : ['(bPogSF_CMVAM_Up)/(bPogSF_CMVAM)', '(bPogSF_CMVAM_Down)/(bPogSF_CMVAM)'],
#                   'WZ'      : ['(bPogSF_CMVAM_Up)/(bPogSF_CMVAM)', '(bPogSF_CMVAM_Down)/(bPogSF_CMVAM)'],
#                   'ZZ'      : ['(bPogSF_CMVAM_Up)/(bPogSF_CMVAM)', '(bPogSF_CMVAM_Down)/(bPogSF_CMVAM)'],
#                   'WW'      : ['(bPogSF_CMVAM_Up)/(bPogSF_CMVAM)', '(bPogSF_CMVAM_Down)/(bPogSF_CMVAM)'],
#                   'Vg'      : ['(bPogSF_CMVAM_Up)/(bPogSF_CMVAM)', '(bPogSF_CMVAM_Down)/(bPogSF_CMVAM)'],
#                }
#}


nuisances['btag']  = {
                'name'  : 'btag',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww' : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'qqH_hww' : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'WH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'ZH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'H_htt'   : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'H_hww'   : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'WH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'DY'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'VVV'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'VZ'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'WW'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'ggWW'    : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'top'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'Vg'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'VgS'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                }
}


nuisances['trigg_wh3l']  = {
                'name'  : 'trigger_wh3l',
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



nuisances['idiso_ele_wh3l']  = {
                'name'  : 'idiso_ele_wh3l',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {
                  'WH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
                  'ZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
                  'ggZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
                  'H_htt' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
                  'WW' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
                  'Vg' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
                  'WZ' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
                  'ZZ' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
                  'ggWW' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
                  'VVV' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13)) * ((abs(std_vector_lepton_flavour[2]) == 11)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 13))'],
                 },
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
}


nuisances['idiso_mu_wh3l']  = {
                'name'  : 'idiso_mu_wh3l',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {
                  'WH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
                  'ZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
                  'ggZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
                  'H_htt' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
                  'WW' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
                  'Vg' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
                  'WZ' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
                  'ZZ' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))','((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
                  'ggWW' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
                  'VVV' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11))*((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))*((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Up[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11)) * ((abs(std_vector_lepton_flavour[2]) == 13)*(std_vector_lepton_idisoW_Down[2])/(std_vector_lepton_idisoW[2])+(abs(std_vector_lepton_flavour[2]) == 11))'],
                 },
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
}

# nuisances handled by means of a different set of trees


nuisances['jes_wh3l']  = {
                'name'  : 'scale_j_wh3l',
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
#                'folderUp'   : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup__vh3lSel__l3kin/',
 #               'folderDown' : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__vh3lSel__l3kin/'
                'folderUp'   : '/tmp/arun/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup__vh3lSel__l3kin/',
                'folderDown' : '/tmp/arun/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__vh3lSel__l3kin/'
}

nuisances['electronpt_wh3l']  = {
                'name'  : 'scale_e_wh3l',
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
 #               'folderUp'   : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__vh3lSel__l3kin/',
 #               'folderDown' : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__vh3lSel__l3kin/'
                'folderUp'   : '/tmp/arun/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__vh3lSel__l3kin/',
                'folderDown' : '/tmp/arun/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__vh3lSel__l3kin/'
}

nuisances['muonpt_wh3l']  = {
                'name'  : 'scale_m_wh3l',
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
 #               'folderUp'   : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__vh3lSel__l3kin/',
  #              'folderDown' : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__vh3lSel__l3kin/'
                'folderUp'   : '/tmp/arun/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__vh3lSel__l3kin/',
                'folderDown' : '/tmp/arun/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__vh3lSel__l3kin/'
}

nuisances['met_wh3l']  = {
                'name'  : 'scale_met_wh3l',
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
 #               'folderUp'   : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__vh3lSel__l3kin/',
 #               'folderDown' : '/tmp/arun/eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__vh3lSel__l3kin/'
                'folderUp'   : '/tmp/arun/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__vh3lSel__l3kin/',
                'folderDown' : '/tmp/arun/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__vh3lSel__l3kin/'
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


