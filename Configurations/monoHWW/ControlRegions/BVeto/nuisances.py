# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV', 
               'samples'  : {
                   'monoH_600': '1.027',
                   'ggH_hww'  : '1.027',
                   'qqH_hww'  : '1.027',
                   'WH_hww'   : '1.027',
                   'ZH_hww'   : '1.027',
                   'H_htt'    : '1.027',
                   'H_hww'    : '1.027',
                   'WH_hww'   : '1.027',
                   'ggZH_hww' : '1.027',
                   'VVV'      : '1.027',
                   'VZ'       : '1.027',
                   'ggWW'     : '1.027',
                   'Vg'       : '1.027',
                   'VgS'      : '1.027',
                   #'DY'       : '1.027',    # --> datadriven
                   #'WW'       : '1.027',    # --> datadriven
                   #'top'      : '1.027',    # --> datadriven
                   'monoH_600': '1.027',
                   },
               'type'  : 'lnN',
              }


# theory uncertainties

# WZ from 
# https://twiki.cern.ch/twiki/bin/view/CMS/StandardModelCrossSectionsat13TeV
#
nuisances['QCDscale_VW']  = {
               'name'  : 'QCDscale_VW', 
               'samples'  : {
                   'VW' : '1.03',
                   },
               'type'  : 'lnN'
              }

# PDF: 0.0064 / 0.1427 = 0.0448493
# QCD: 0.0046 / 0.1427 = 0.0322355



nuisances['QCDscale_ggH0j']  = {
               'name'  : 'QCDscale_ggH0j', 
               'samples'  : {
                   'ggH_hww' : '1.056',
                   },
               'type'  : 'lnN',
               'cuts'  : [
                 'hww2l2v_13TeV_of0j',
                 'hww2l2v_13TeV_top_of0j',
                 'hww2l2v_13TeV_dytt_of0j',
#                 
                 'hww2l2v_13TeV_me_0j',
                 'hww2l2v_13TeV_em_0j',
#
                 'hww2l2v_13TeV_me_mp_0j',
                 'hww2l2v_13TeV_me_pm_0j',
                 'hww2l2v_13TeV_em_mp_0j',
                 'hww2l2v_13TeV_em_pm_0j',
#                 
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
#                 
                 'hww2l2v_13TeV_me_1j',
                 'hww2l2v_13TeV_em_1j',
#
                 'hww2l2v_13TeV_me_mp_1j',
                 'hww2l2v_13TeV_me_pm_1j',
                 'hww2l2v_13TeV_em_mp_1j',
                 'hww2l2v_13TeV_em_pm_1j',
#                 
                ]
              }


from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()


nuisances['QCDscale_ggH']  = {
               'name'  : 'QCDscale_ggH', 
               'samples'  : {
                   #'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),     ----> already included in jet bin migration QCD uncertainty?
                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),
                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }



nuisances['QCDscale_qqH']  = {
               'name'  : 'QCDscale_qqH', 
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','scale','sm'),
                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }



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


nuisances['QCDscale_qqbar_accept']  = {
               'name'  : 'QCDscale_qqbar_accept', 
               'type'  : 'lnN',
               'samples'  : {
                   #'qqH_hww' : '1.02',
                   #'qqH_htt' : '1.02',
                   #'WH_hww'  : '1.02',
                   #'ZH_hww'  : '1.02',
                   #
                   #'WW'      : '1.015', -> not included since part of weights from WWqscale0j and WWqscale1j
                   'qqH_hww' : '1.007',
                   'qqH_htt' : '1.007',
                   'WH_hww'  : '1.05',
                   'ZH_hww'  : '1.04',
                   'VZ'      : '1.029',
                   },
              }



nuisances['QCDscale_gg_accept']  = {
               'name'  : 'QCDscale_gg_accept', 
               'samples'  : {
                   #'ggWW'    : '1.03',
                   #'ggH_hww' : '1.03',
                   #'ggH_htt' : '1.03',
                   #'H_htt'   : '1.03',
                   #'ggZH_hww': '1.03',                   
                   #
                   'ggWW'    : '1.027',
                   'ggH_hww' : '1.027',
                   'ggH_htt' : '1.027',
                   'H_htt'   : '1.027',
                   'ggZH_hww': '1.027',                   

                   },
               'type'  : 'lnN',
              }



#
#     WWTo2L2Nu 0jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   0.53% / 0.52%
#     alpha_s     265000 / 266000   0.02% / 0.02%
#     PDF                           0.25%
#     PDF+alpha_s                   0.25%
#    
#    
#     WWTo2L2Nu 1jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   1.54% / 1.38%
#     alpha_s     265000 / 266000   0.01% / 0.01%
#     PDF                           0.27%
#     PDF+alpha_s                   0.27%
#    
#    
#     VBFHToWWTo2L2Nu_M125 0jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   0.68% / 0.60%
#     alpha_s     265000 / 266000   1.14% / 0.82%
#     PDF                           0.51%
#     PDF+alpha_s                   1.12%
#    
#    
#     VBFHToWWTo2L2Nu_M125 1jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   0.11% / 0.01%
#     alpha_s     265000 / 266000   0.22% / 0.29%
#     PDF                           0.31%
#     PDF+alpha_s                   0.40%
#    
#    
#     GluGluHToWWTo2L2Nu_M125 0jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   2.71% / 2.26%
#     alpha_s     265000 / 266000   0.11% / 0.04%
#     PDF                           0.56%
#     PDF+alpha_s                   0.57%
#    
#    
#     GluGluHToWWTo2L2Nu_M125 1jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   2.00% / 1.66%
#     alpha_s     265000 / 266000   0.29% / 0.31%
#     PDF                           0.37%
#     PDF+alpha_s                   0.48%
#     
#
#
#     WZTo3LNu 0jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   1.70% / 1.47%
#     alpha_s     265000 / 266000   0.15% / 0.26%
#     PDF                           0.48%
#     PDF+alpha_s                   0.52%
#    
#    
#     WZTo3LNu 1jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   2.94% / 2.57%
#     alpha_s     265000 / 266000   0.21% / 0.27%
#     PDF                           0.48%
#     PDF+alpha_s                   0.54%
#    
#     
#     
#     HWminusJ_HToWW_M125 0jet acceptance uncertainties
#     -----------------------------------------
#      QCD         mu=0.5 / mu=2.0   5.99% / 4.42%
#      alpha_s     265000 / 266000   0.29% / 0.28%
#      PDF                           0.55%
#      PDF+alpha_s                   0.62%
#     
#     
#      HWminusJ_HToWW_M125 1jet acceptance uncertainties
#     -----------------------------------------
#      QCD         mu=0.5 / mu=2.0   0.99% / 1.36%
#      alpha_s     265000 / 266000   0.05% / 0.02%
#      PDF                           0.47%
#      PDF+alpha_s                   0.48%
#     
#     
#      HWplusJ_HToWW_M125 0jet acceptance uncertainties
#     -----------------------------------------
#      QCD         mu=0.5 / mu=2.0   2.17% / 3.38%
#      alpha_s     265000 / 266000   0.20% / 0.13%
#      PDF                           0.47%
#      PDF+alpha_s                   0.50%
#     
#     
#      HWplusJ_HToWW_M125 1jet acceptance uncertainties
#     -----------------------------------------
#      QCD         mu=0.5 / mu=2.0   4.71% / 3.58%
#      alpha_s     265000 / 266000   0.10% / 0.03%
#      PDF                           0.36%
#      PDF+alpha_s                   0.36%
#     
#     
#      HZJ_HToWW_M125 0jet acceptance uncertainties
#     -----------------------------------------
#      QCD         mu=0.5 / mu=2.0   2.16% / 3.30%
#      alpha_s     265000 / 266000   0.06% / 0.30%
#      PDF                           1.20%
#      PDF+alpha_s                   1.22%
#     
#     
#      HZJ_HToWW_M125 1jet acceptance uncertainties
#     -----------------------------------------
#      QCD         mu=0.5 / mu=2.0   3.74% / 1.18%
#      alpha_s     265000 / 266000   0.12% / 0.03%
#      PDF                           0.88%
#      PDF+alpha_s                   0.89%
#      
#


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
                   'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
                   },
              }



#    
#    
#    
#    


nuisances['pdf_gg_accept']  = {
               'name'  : 'pdf_gg_accept', 
               'samples'  : {
                   'ggWW'    : '1.005',    
                   'ggH_hww' : '1.005',
                   'ggH_htt' : '1.005',
                   'H_htt'   : '1.005',
                   'ggZH_hww': '1.005', 
                   },
               'type'  : 'lnN',
              }


nuisances['pdf_qqbar_accept']  = {
               'name'  : 'pdf_qqbar_accept', 
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'qqH_hww' : '1.011',
                   'qqH_htt' : '1.011',
                   'WH_hww'  : '1.007',
                   'ZH_hww'  : '1.012',
                   'VZ'      : '1.005',                   
                   },
              }



#
#     WWTo2L2Nu 0jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   0.53% / 0.52%
#     alpha_s     265000 / 266000   0.02% / 0.02%
#     PDF                           0.25%
#     PDF+alpha_s                   0.25%
#    
#    
#     WWTo2L2Nu 1jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   1.54% / 1.38%
#     alpha_s     265000 / 266000   0.01% / 0.01%
#     PDF                           0.27%
#     PDF+alpha_s                   0.27%
#    
#    
#     VBFHToWWTo2L2Nu_M125 0jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   0.68% / 0.60%
#     alpha_s     265000 / 266000   1.14% / 0.82%
#     PDF                           0.51%
#     PDF+alpha_s                   1.12%
#    
#    
#     VBFHToWWTo2L2Nu_M125 1jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   0.11% / 0.01%
#     alpha_s     265000 / 266000   0.22% / 0.29%
#     PDF                           0.31%
#     PDF+alpha_s                   0.40%
#    
#    
#     GluGluHToWWTo2L2Nu_M125 0jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   2.71% / 2.26%
#     alpha_s     265000 / 266000   0.11% / 0.04%
#     PDF                           0.56%
#     PDF+alpha_s                   0.57%
#    
#    
#     GluGluHToWWTo2L2Nu_M125 1jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   2.00% / 1.66%
#     alpha_s     265000 / 266000   0.29% / 0.31%
#     PDF                           0.37%
#     PDF+alpha_s                   0.48%
#     
#
#     WZTo3LNu 0jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   1.70% / 1.47%
#     alpha_s     265000 / 266000   0.15% / 0.26%
#     PDF                           0.48%
#     PDF+alpha_s                   0.52%
#    
#    
#     WZTo3LNu 1jet acceptance uncertainties
#    -----------------------------------------
#     QCD         mu=0.5 / mu=2.0   2.94% / 2.57%
#     alpha_s     265000 / 266000   0.21% / 0.27%
#     PDF                           0.48%
#     PDF+alpha_s                   0.54%
#    
#    
#    
#     
#     HWminusJ_HToWW_M125 0jet acceptance uncertainties
#     -----------------------------------------
#      QCD         mu=0.5 / mu=2.0   5.99% / 4.42%
#      alpha_s     265000 / 266000   0.29% / 0.28%
#      PDF                           0.55%
#      PDF+alpha_s                   0.62%
#     
#     
#      HWminusJ_HToWW_M125 1jet acceptance uncertainties
#     -----------------------------------------
#      QCD         mu=0.5 / mu=2.0   0.99% / 1.36%
#      alpha_s     265000 / 266000   0.05% / 0.02%
#      PDF                           0.47%
#      PDF+alpha_s                   0.48%
#     
#     
#      HWplusJ_HToWW_M125 0jet acceptance uncertainties
#     -----------------------------------------
#      QCD         mu=0.5 / mu=2.0   2.17% / 3.38%
#      alpha_s     265000 / 266000   0.20% / 0.13%
#      PDF                           0.47%
#      PDF+alpha_s                   0.50%
#     
#     
#      HWplusJ_HToWW_M125 1jet acceptance uncertainties
#     -----------------------------------------
#      QCD         mu=0.5 / mu=2.0   4.71% / 3.58%
#      alpha_s     265000 / 266000   0.10% / 0.03%
#      PDF                           0.36%
#      PDF+alpha_s                   0.36%
#     
#     
#      HZJ_HToWW_M125 0jet acceptance uncertainties
#     -----------------------------------------
#      QCD         mu=0.5 / mu=2.0   2.16% / 3.30%
#      alpha_s     265000 / 266000   0.06% / 0.30%
#      PDF                           1.20%
#      PDF+alpha_s                   1.22%
#     
#     
#      HZJ_HToWW_M125 1jet acceptance uncertainties
#     -----------------------------------------
#      QCD         mu=0.5 / mu=2.0   3.74% / 1.18%
#      alpha_s     265000 / 266000   0.12% / 0.03%
#      PDF                           0.88%
#      PDF+alpha_s                   0.89%
#      
#





# ggww and interference

nuisances['kfactggww']  = {
               'name'  : 'kfactggww', 
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW' : '1.15',
                   },
              }


#nuisances['kfactggwwInt']  = {
               #'name'  : 'kfactggwwInt', 
               #'type'  : 'lnN',
               #'samples'  : {
                   #'ggWW_Int' : '1.25',
                   #},
              #}

#  - WW shaping
nuisances['WWresum0j']  = {
                'name'  : 'WWresum0j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_of0j',
                 'hww2l2v_13TeV_top_of0j',
                 'hww2l2v_13TeV_dytt_of0j',
#                 
                 'hww2l2v_13TeV_me_0j',
                 'hww2l2v_13TeV_em_0j',
#
                 'hww2l2v_13TeV_me_mp_0j',
                 'hww2l2v_13TeV_me_pm_0j',
                 'hww2l2v_13TeV_em_mp_0j',
                 'hww2l2v_13TeV_em_pm_0j',
#                 
                ]               
                
                }


nuisances['WWresum1j']  = {
                'name'  : 'WWresum1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_of1j',
                 'hww2l2v_13TeV_top_of1j',
                 'hww2l2v_13TeV_dytt_of1j',
#                 
                 'hww2l2v_13TeV_me_1j',
                 'hww2l2v_13TeV_em_1j',
#
                 'hww2l2v_13TeV_me_mp_1j',
                 'hww2l2v_13TeV_me_pm_1j',
                 'hww2l2v_13TeV_em_mp_1j',
                 'hww2l2v_13TeV_em_pm_1j',
#                 
                ]               
                }

nuisances['WWqscale0j']  = {
                'name'  : 'WWqscale0j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_of0j',
                 'hww2l2v_13TeV_top_of0j',
                 'hww2l2v_13TeV_dytt_of0j',
#                 
                 'hww2l2v_13TeV_me_0j',
                 'hww2l2v_13TeV_em_0j',
#
                 'hww2l2v_13TeV_me_mp_0j',
                 'hww2l2v_13TeV_me_pm_0j',
                 'hww2l2v_13TeV_em_mp_0j',
                 'hww2l2v_13TeV_em_pm_0j',
#                 
                ] 
                }


nuisances['WWqscale1j']  = {
                'name'  : 'WWqscale1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_of1j',
                 'hww2l2v_13TeV_top_of1j',
                 'hww2l2v_13TeV_dytt_of1j',
#                 
                 'hww2l2v_13TeV_me_1j',
                 'hww2l2v_13TeV_em_1j',
#
                 'hww2l2v_13TeV_me_mp_1j',
                 'hww2l2v_13TeV_me_pm_1j',
                 'hww2l2v_13TeV_em_mp_1j',
                 'hww2l2v_13TeV_em_pm_1j',
#                 
                ] 
                }


# PS/UE

# PS

nuisances['PS']  = {
                'name'  : 'PS', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1./1.03295', '1.'],  # latino_WWTo2L2NuHerwigPS.root moved with different name in __PS folder
                   'ggH_hww' : ['1./1.00702', '1.'],
                   'qqH_hww' : ['1./1.06362', '1.'],
                },
                'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/',
                'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/',
                #'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__PS/',
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/' 
                #'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/../MCl2loose__hadd__bSFL2pTEff__l2tight__PS/',
                #'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/' 
                #
                #'symmetrize' : True   # default is False
                #
                }


#mkdir eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS

#cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2NuHerwigPS_M125.root   eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/latino_GluGluHToWWTo2L2NuPowheg_M125.root
#cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2NuHerwigPS_M125.root   eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/latino_GluGluHToWWTo2L2Nu_M125.root
#cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_VBFHToWWTo2L2NuHerwigPS_M125.root      eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/latino_VBFHToWWTo2L2Nu_M125.root
#cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WWTo2L2NuHerwigPS.root                 eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/latino_WWTo2L2Nu.root


#mkdir eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS

#cp eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2NuHerwigPS_M125.root   eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/latino_GluGluHToWWTo2L2NuPowheg_M125.root
#cp eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2NuHerwigPS_M125.root   eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/latino_GluGluHToWWTo2L2Nu_M125.root
#cp eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_VBFHToWWTo2L2NuHerwigPS_M125.root      eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/latino_VBFHToWWTo2L2Nu_M125.root
#cp eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WWTo2L2NuHerwigPS.root                 eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/latino_WWTo2L2Nu.root



nuisances['UE']  = {
                'name'  : 'UE', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1/0.978817', '1/1.0192'], 
                   'ggH_hww' : ['1/0.9262', '1/0.984785'],
                   'qqH_hww' : ['1/0.951846', '1/1.00099'],
                },
                'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/',
                'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/' 
                }

#
# ue up/nom = 0.978817           ue up/nom = 0.9262                ue up/nom = 0.951846
# ue do/nom = 1.0192             ue do/nom = 0.984785              ue do/nom = 1.00099
# PS   /nom = 1.03295            PS   /nom = 1.00702               PS   /nom = 1.06362
#



#mkdir eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo
#mkdir eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup

#cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M125_CUETDown.root   eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/latino_GluGluHToWWTo2L2NuPowheg_M125.root
#cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M125_CUETDown.root   eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/latino_GluGluHToWWTo2L2Nu_M125.root
#cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_VBFHToWWTo2L2Nu_M125_CUETDown.root      eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/latino_VBFHToWWTo2L2Nu_M125.root
#cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WWTo2L2Nu_CUETDown.root                 eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/latino_WWTo2L2Nu.root

#cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M125_CUETUp.root     eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/latino_GluGluHToWWTo2L2Nu_M125.root
#cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M125_CUETUp.root     eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/latino_GluGluHToWWTo2L2NuPowheg_M125.root
#cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_VBFHToWWTo2L2Nu_M125_CUETUp.root        eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/latino_VBFHToWWTo2L2Nu_M125.root
#cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WWTo2L2Nu_CUETUp.root                   eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/latino_WWTo2L2Nu.root



#mkdir eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo
#mkdir eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup

#cp eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M125_CUETDown.root   eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/latino_GluGluHToWWTo2L2NuPowheg_M125.root
#cp eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M125_CUETDown.root   eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/latino_GluGluHToWWTo2L2Nu_M125.root
#cp eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_VBFHToWWTo2L2Nu_M125_CUETDown.root      eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/latino_VBFHToWWTo2L2Nu_M125.root
#cp eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WWTo2L2Nu_CUETDown.root                 eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/latino_WWTo2L2Nu.root

#cp eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M125_CUETUp.root     eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/latino_GluGluHToWWTo2L2Nu_M125.root
#cp eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M125_CUETUp.root     eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/latino_GluGluHToWWTo2L2NuPowheg_M125.root
#cp eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_VBFHToWWTo2L2Nu_M125_CUETUp.root        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/latino_VBFHToWWTo2L2Nu_M125.root
#cp eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WWTo2L2Nu_CUETUp.root                   eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/latino_WWTo2L2Nu.root





# experimental uncertainties

# K factor (Data/Wg*) = 2.0 +/- 0.5
nuisances['WgStarScale']  = {
               'name'  : 'WgStarScale', 
               'type'  : 'lnN',
               'samples'  : {
                   'WgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'VgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   },
                }
 

nuisances['DYttnorm0j']  = {
               'name'  : 'DYttnorm0j', 
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'hww2l2v_13TeV_of0j',
                 'hww2l2v_13TeV_top_of0j',
                 'hww2l2v_13TeV_dytt_of0j',
#                 
                 'hww2l2v_13TeV_me_0j',
                 'hww2l2v_13TeV_em_0j',
#
                 'hww2l2v_13TeV_me_mp_0j',
                 'hww2l2v_13TeV_me_pm_0j',
                 'hww2l2v_13TeV_em_mp_0j',
                 'hww2l2v_13TeV_em_pm_0j',
#                 
                ]
              }

nuisances['DYttnorm1j']  = {
               'name'  : 'DYttnorm1j', 
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'hww2l2v_13TeV_of1j',
                 'hww2l2v_13TeV_top_of1j',
                 'hww2l2v_13TeV_dytt_of1j',
#                 
                 'hww2l2v_13TeV_me_1j',
                 'hww2l2v_13TeV_em_1j',
#
                 'hww2l2v_13TeV_me_mp_1j',
                 'hww2l2v_13TeV_me_pm_1j',
                 'hww2l2v_13TeV_em_mp_1j',
                 'hww2l2v_13TeV_em_pm_1j',
#                 
                ]
              }




# old style "free floating", but still working!
#nuisances['WWnorm']  = {
               #'name'  : 'WWnorm', 
               #'samples'  : {
                   #'WW' : 2.00,
                   #},
               #'type'  : 'lnU',
              #}

# new style "free floating" background
# e.g. " z_norm rateParam  htsearch zll 1 "
nuisances['WWnorm0j']  = {
               'name'  : 'WWnorm0j', 
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'hww2l2v_13TeV_of0j',
                 'hww2l2v_13TeV_top_of0j',
                 'hww2l2v_13TeV_dytt_of0j',              
#                 
                 'hww2l2v_13TeV_me_0j',
                 'hww2l2v_13TeV_em_0j',
#
                 'hww2l2v_13TeV_me_mp_0j',
                 'hww2l2v_13TeV_me_pm_0j',
                 'hww2l2v_13TeV_em_mp_0j',
                 'hww2l2v_13TeV_em_pm_0j',
#                 
                 ]
              }

nuisances['WWnorm1j']  = {
               'name'  : 'WWnorm1j', 
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'hww2l2v_13TeV_of1j',
                 'hww2l2v_13TeV_top_of1j',
                 'hww2l2v_13TeV_dytt_of1j',              
#                 
                 'hww2l2v_13TeV_me_1j',
                 'hww2l2v_13TeV_em_1j',
#
                 'hww2l2v_13TeV_me_mp_1j',
                 'hww2l2v_13TeV_me_pm_1j',
                 'hww2l2v_13TeV_em_mp_1j',
                 'hww2l2v_13TeV_em_pm_1j',
#                 
                ]
              }


nuisances['Topnorm0j']  = {
               'name'  : 'Topnorm0j', 
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'hww2l2v_13TeV_of0j',
                 'hww2l2v_13TeV_top_of0j',
                 'hww2l2v_13TeV_dytt_of0j',              
#                 
                 'hww2l2v_13TeV_me_0j',
                 'hww2l2v_13TeV_em_0j',
#
                 'hww2l2v_13TeV_me_mp_0j',
                 'hww2l2v_13TeV_me_pm_0j',
                 'hww2l2v_13TeV_em_mp_0j',
                 'hww2l2v_13TeV_em_pm_0j',
#                 
                ]
              }

nuisances['Topnorm1j']  = {
               'name'  : 'Topnorm1j', 
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'hww2l2v_13TeV_of1j',
                 'hww2l2v_13TeV_top_of1j',
                 'hww2l2v_13TeV_dytt_of1j',              
#                 
                 'hww2l2v_13TeV_me_1j',
                 'hww2l2v_13TeV_em_1j',
#
                 'hww2l2v_13TeV_me_mp_1j',
                 'hww2l2v_13TeV_me_pm_1j',
                 'hww2l2v_13TeV_em_mp_1j',
                 'hww2l2v_13TeV_em_pm_1j',
#                 
                ]
              }





# FIXME: to be added and split
# - lepton resolution
# - pileup


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


# fakes 


nuisances['fake_syst']  = {
               'name'  : 'fake_syst', 
               'type'  : 'lnN',
               'samples'  : {
                   'Fake' : '1.30',
                   },
}
 


nuisances['fake_ele']  = {
                'name'  : 'fake_ele_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'Fake'      : ['(fakeW2l0jElUp*(njet==0)+fakeW2l1jElUp*(njet==1)+fakeW2l2jElUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  '(fakeW2l0jElDown*(njet==0)+fakeW2l1jElDown*(njet==1)+fakeW2l2jElDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                }
}
 

nuisances['fake_ele_stat']  = {
                'name'  : 'fake_ele_stat_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'Fake'      : ['(fakeW2l0jstatElUp*(njet==0)+fakeW2l1jstatElUp*(njet==1)+fakeW2l2jstatElUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  '(fakeW2l0jstatElDown*(njet==0)+fakeW2l1jstatElDown*(njet==1)+fakeW2l2jstatElDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                }
}


nuisances['fake_mu']  = {
                'name'  : 'fake_mu_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'Fake'      : ['(fakeW2l0jMuUp*(njet==0)+fakeW2l1jMuUp*(njet==1)+fakeW2l2jMuUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  '(fakeW2l0jMuDown*(njet==0)+fakeW2l1jMuDown*(njet==1)+fakeW2l2jMuDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                }
}
 

nuisances['fake_mu_stat']  = {
                'name'  : 'fake_mu_stat_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'Fake'      : ['(fakeW2l0jstatMuUp*(njet==0)+fakeW2l1jstatMuUp*(njet==1)+fakeW2l2jstatMuUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  '(fakeW2l0jstatMuDown*(njet==0)+fakeW2l1jstatMuDown*(njet==1)+fakeW2l2jstatMuDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                }
}


# others ... 
  
                                 
                                 
  
nuisances['btag']  = {
                'name'  : 'btag',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'monoH_600': ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'ggH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'qqH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'WH_hww'   : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'ZH_hww'   : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'H_htt'    : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'H_hww'    : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'WH_hww'   : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'DY'       : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'VVV'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'VZ'       : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'WW'       : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'ggWW'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'top'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'Vg'       : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'VgS'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                }
}
 
 
 

nuisances['tttwTh']  = {
                'name'  : 'tttwTh',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {  # up              down
                   'top'     : ['((dataset==15 || dataset==16) * 1.0816 + (dataset==17 || dataset==18 || dataset==19))',
                                '((dataset==15 || dataset==16) * 0.9184 + (dataset==17 || dataset==18 || dataset==19))'],
                }
                # tt = 17/18/19 depending on the sample/generator
                # tW = 15/16
                
}
  
  
  
# DY pt corrections
nuisances['DYptRew']  = {
                'name'  : 'DYptRew',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {  # up              down
                   'DY'     : ['(0.95 - 0.1*TMath::Erf((gen_ptll-14.4)/9.0))/(0.95 - 0.1*TMath::Erf((gen_ptll-14)/8.8))',
                               '(0.95 - 0.1*TMath::Erf((gen_ptll-13.6)/8.6))/(0.95 - 0.1*TMath::Erf((gen_ptll-14)/8.8))'],
                }
                # tt = 17/18/19 depending on the sample/generator
                # tW = 15/16
                
}

#
#         1  p0           1.42199e+01   2.00614e-01   7.49397e-04  -3.24175e-03
#         2  p1           8.78770e+00   2.36675e-01   1.47925e-03  -1.11709e-03
#  
#      (0.95 - 0.1*TMath::Erf((x-14)/8.8))
#


  

nuisances['trigg']  = {
                'name'  : 'trigger',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {
                   'monoH_600': ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ggH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'qqH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WH_hww'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ZH_hww'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ggZH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'H_htt'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'H_hww'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WH_hww'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'DY'       : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'VVV'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'VZ'       : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ggWW'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WW'       : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'top'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'Vg'       : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'VgS'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                },
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
}



nuisances['idiso']  = {
                'name'  : 'idiso',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {
                   'monoH_600': ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'ggH_hww'  : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'qqH_hww'  : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'WH_hww'   : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'ZH_hww'   : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'ggZH_hww' : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'H_htt'    : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'H_hww'    : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'WH_hww'   : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'DY'       : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'VVV'      : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'VZ'       : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'ggWW'     : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'WW'       : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'top'      : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'Vg'       : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   'VgS'      : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                },
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
}


# nuisances handled by means of a different set of trees


nuisances['jes']  = {
                'name'  : 'scale_j', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'monoH_600' : ['1', '1'],
                   'ggWW'      : ['1', '1'],
                   'WW'        : ['1', '1'],
                   'DY'        : ['1', '1'],
                   'top'       : ['1', '1'],
                   'VZ'        : ['1', '1'],
                   'VVV'       : ['1', '1'],
                   'ggH_hww'   : ['1', '1'],
                   'qqH_hww'   : ['1', '1'],
                   'WH_hww'    : ['1', '1'],
                   'ZH_hww'    : ['1', '1'],
                   'ggZH_hww'  : ['1', '1'],
                   'H_hww'     : ['1', '1'],
                   'H_htt'     : ['1', '1'],
                   'Vg'        : ['1', '1'],
                   'VgS'       : ['1', '1'],
                },
                'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup__wwSel/',
                'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__wwSel/' 
                #'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup/',
                #'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo/' 
                #'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESup/',
                #'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESdo/' 
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESup__wwSel/',
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESdo__wwSel/' 
}





nuisances['electronpt']  = {
                'name'  : 'scale_e', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'monoH_600' : ['1', '1'],
                   'ggWW'      : ['1', '1'],
                   'WW'        : ['1', '1'],
                   'DY'        : ['1', '1'],
                   'top'       : ['1', '1'],
                   'VZ'        : ['1', '1'],
                   'VVV'       : ['1', '1'],
                   'ggH_hww'   : ['1', '1'],
                   'qqH_hww'   : ['1', '1'],
                   'WH_hww'    : ['1', '1'],
                   'ZH_hww'    : ['1', '1'],
                   'ggZH_hww'  : ['1', '1'],
                   'H_hww'     : ['1', '1'],
                   'H_htt'     : ['1', '1'],
                   'Vg'        : ['1', '1'],
                   'VgS'       : ['1', '1'],
                },
                'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__wwSel/',
                'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__wwSel/' 
                #'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup/',
                #'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo/' 
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__wwSel/',
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__wwSel/' 
}
                
     
nuisances['muonpt']  = {
                'name'  : 'scale_m', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'monoH_600' : ['1', '1'],
                   'ggWW'      : ['1', '1'],
                   'WW'        : ['1', '1'],
                   'DY'        : ['1', '1'],
                   'top'       : ['1', '1'],
                   'VZ'        : ['1', '1'],
                   'VVV'       : ['1', '1'],
                   'ggH_hww'   : ['1', '1'],
                   'qqH_hww'   : ['1', '1'],
                   'WH_hww'    : ['1', '1'],
                   'ZH_hww'    : ['1', '1'],
                   'ggZH_hww'  : ['1', '1'],
                   'H_hww'     : ['1', '1'],
                   'H_htt'     : ['1', '1'],
                   'Vg'        : ['1', '1'],
                   'VgS'       : ['1', '1'],
                },
                'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__wwSel/',
                'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__wwSel/' 
                #'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup/',
                #'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup/',
                #'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo/' 
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__wwSel/',
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__wwSel/' 
}


nuisances['met']  = {
                'name'  : 'scale_met', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'monoH_600' : ['1', '1'],
                   'ggWW'      : ['1', '1'],
                   'WW'        : ['1', '1'],
                   'DY'        : ['1', '1'],
                   'top'       : ['1', '1'],
                   'VZ'        : ['1', '1'],
                   'VVV'       : ['1', '1'],
                   'ggH_hww'   : ['1', '1'],
                   'qqH_hww'   : ['1', '1'],
                   'WH_hww'    : ['1', '1'],
                   'ZH_hww'    : ['1', '1'],
                   'ggZH_hww'  : ['1', '1'],
                   'H_hww'     : ['1', '1'],
                   'H_htt'     : ['1', '1'],
                   'Vg'        : ['1', '1'],
                   'VgS'       : ['1', '1'],
                },
                'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__wwSel/',
                'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__wwSel/' 
                #'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup/',
                #'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo/' 
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__wwSel/',
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__wwSel/' 
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

                   'VZ': {
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

                   'ggZH_hww': {
                         'typeStat' : 'bbb',
                         },
                   
                   'Fake': {  # needed?
                         'typeStat' : 'bbb',
                         },
                   
                   'Vg': {  
                         'typeStat' : 'bbb',
                         },

                   'VgS':{  
                         'typeStat' : 'bbb',
                         },
                            
                   'monoH_600':{  
                         'typeStat' : 'bbb',
                         },
                            
                 },

               'type'  : 'shape'

              }


