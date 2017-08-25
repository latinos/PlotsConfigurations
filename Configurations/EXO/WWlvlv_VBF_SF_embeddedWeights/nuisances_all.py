#Controllare idiso_ele, muon rispetto alle nuisances ggH

# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#

import os.path
import copy

massesAndModelsFile = "massesAndModels.py"

regions0j = ['hww2l2v_13TeV_top_of0j',
             'hww2l2v_13TeV_top_mu_mu_0j',
             'hww2l2v_13TeV_top_e_e_0j',
             'hww2l2v_13TeV_dytt_of0j',
             'hww2l2v_13TeV_dy_mu_mu_0j',
             'hww2l2v_13TeV_dy_e_e_0j',
             'hwwhm_13TeV_of_0j',
             'hwwhm_13TeV_mu_mu_0j',
             'hwwhm_13TeV_e_e_0j',]

regions1j = ['hww2l2v_13TeV_top_of1j',
             'hww2l2v_13TeV_top_mu_mu_1j',
             'hww2l2v_13TeV_top_e_e_1j',
             'hww2l2v_13TeV_dytt_of1j',
             'hww2l2v_13TeV_dy_mu_mu_1j',
             'hww2l2v_13TeV_dy_e_e_1j',
             'hwwhm_13TeV_of_1j',
             'hwwhm_13TeV_mu_mu_1j',
             'hwwhm_13TeV_e_e_1j',]

regions2j = ['hww2l2v_13TeV_top_of2j',
             'hww2l2v_13TeV_top_mu_mu_2j',
             'hww2l2v_13TeV_top_e_e_2j',
             'hww2l2v_13TeV_dytt_of2j',
             'hww2l2v_13TeV_dy_mu_mu_2j',
             'hww2l2v_13TeV_dy_e_e_2j',
             'hwwhm_13TeV_of_2j',
             'hwwhm_13TeV_mu_mu_2j',
             'hwwhm_13TeV_e_e_2j',]

regions2j_VBF = ['hww2l2v_13TeV_top_of2j_VBF',
             'hww2l2v_13TeV_top_mu_mu_2j_VBF',
             'hww2l2v_13TeV_top_e_e_2j_VBF',
             'hww2l2v_13TeV_dytt_of2j_VBF',
             'hww2l2v_13TeV_dy_mu_mu_2j_VBF',
             'hww2l2v_13TeV_dy_e_e_2j_VBF',
             'hwwhm_13TeV_of_2j_VBF',
             'hwwhm_13TeV_mu_mu_2j_VBF',
             'hwwhm_13TeV_e_e_2j_VBF',]

regions0j_of = [ item for item in regions0j if "of" in item]
regions1j_of = [ item for item in regions1j if "of" in item]
regions2j_of = [ item for item in regions2j if "of" in item]
regions2j_VBF_of = [ item for item in regions2j_VBF if "of" in item]

regions0j_sf = [ item for item in regions0j if "of" not in item]
regions1j_sf = [ item for item in regions1j if "of" not in item]
regions2j_sf = [ item for item in regions2j if "of" not in item]
regions2j_VBF_sf = [ item for item in regions2j_VBF if "of" not in item]

#print "regions0j", regions0j
#print "regions1j", regions1j
#print "regions2j", regions2j
#print "regions2j_VBF", regions2j_VBF

#print "regions0j_sf", regions0j_sf
#print "regions1j_sf", regions1j_sf
#print "regions2j_sf", regions2j_sf
#print "regions2j_VBF_sf", regions2j_VBF_sf

#print "regions0j_of", regions0j_of
#print "regions1j_of", regions1j_of
#print "regions2j_of", regions2j_of
#print "regions2j_VBF_of", regions2j_VBF_of

if os.path.exists(massesAndModelsFile) :
  handle = open(massesAndModelsFile,'r')
  exec(handle)
  handle.close()
else:
  print "!!! ERROR file ", massesAndModelsFile, " does not exist."

Top_pTrw   = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) )'
Top_pTrwUp = '1.'
Top_pTrwDo = '(1./(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) ))'

nuisances['TopPtRew']  = {
                'name'  : 'TopPtRew',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : [Top_pTrwUp+"/"+Top_pTrw,
                               Top_pTrwDo+"/"+Top_pTrw]
                }

}

weightMetDY ='((0.306383+0.0270402*metPfType1)*(njet==0)'
weightMetDY+='+(0.304908+0.023131 *metPfType1)*(njet==1)'
weightMetDY+='+(0.503422+0.0153159*metPfType1)*(njet>=2 && (mjj < 500 || detajj<3.5))'
weightMetDY+='+(0.524127+0.0318181*metPfType1)*(njet>=2 && (mjj > 500 && detajj>3.5)))'

# up variation is p0+error + (p1-error) * met
weightMetDYUp ='((0.306383+0.0585451+(0.0270402-0.0021439) *metPfType1)*(njet==0)'
weightMetDYUp+='+(0.304908+0.0324019+(0.023131-0.00112073) *metPfType1)*(njet==1)'
weightMetDYUp+='+(0.503422+0.0327627+(0.0153159-0.00105088)*metPfType1)*(njet>=2 && (mjj < 500 || detajj<3.5))'
weightMetDYUp+='+(0.524127+0.209824+(0.0318181-0.00636618) *metPfType1)*(njet>=2 && (mjj > 500 && detajj>3.5)))'

# down variation is p0-error + (p1+error) * met
weightMetDYDo ='((0.306383-0.0585451+(0.0270402+0.0021439) *metPfType1)*(njet==0)'
weightMetDYDo+='+(0.304908-0.0324019+(0.023131+0.00112073) *metPfType1)*(njet==1)'
weightMetDYDo+='+(0.503422-0.0327627+(0.0153159+0.00105088)*metPfType1)*(njet>=2 && (mjj < 500 || detajj<3.5))'
weightMetDYDo+='+(0.524127-0.209824+(0.0318181+0.00636618) *metPfType1)*(njet>=2 && (mjj > 500 && detajj>3.5)))'

nuisances['DYMetRew'] = {
  'name'  : 'DYMetRew',
  'kind'  : 'weight',
  'type'  : 'shape',
  'cuts'  :  regions0j_sf + regions1j_sf + regions2j_sf + regions2j_VBF_sf,
  'samples': { 
    'DY': [ weightMetDYDo+"/"+weightMetDY, 
            weightMetDYUp+"/"+weightMetDY ]
   }   
  }


nuisances['lumi']  = {
               'name'  : 'lumi_ICHEP_13TeV', 
               'samples'  : {
                   'ggH_hww_750_NWA'  : '1.050',
                   'qqH_hww_750_NWA'  : '1.050',
                   'ggH_hww'  : '1.050',
                   'qqH_hww'  : '1.050',
                   'WH_hww'   : '1.050',
                   'ZH_hww'   : '1.050',
                   'H_htt'    : '1.050',
                   'H_hww'    : '1.050',
                   'WH_hww'   : '1.050',
                   'ggZH_hww' : '1.050',
                   'VVV'      : '1.050',
                   'VZ'       : '1.050',
                   'ggWW'     : '1.050',
                   'Vg'       : '1.050',
                   'VgS'      : '1.050',
                   },
               'type'  : 'lnN',
              }
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['lumi']['samples'].update({'ggH_hww_'+m+'_'+model_name:'1.050'})
    nuisances['lumi']['samples'].update({'qqH_hww_'+m+'_'+model_name:'1.050'})
    nuisances['lumi']['samples'].update({'ggH_hww_INT'+m+'_'+model_name:'1.050'})

# theory uncertainties


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
                   'ggH_hww' : '1.08539',
                   },
               'type'  : 'lnN',
               'cuts'  : regions0j 
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
                   'qqH_hww_750_NWA' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','750','scale','bsm'),
                   },
               'type'  : 'lnN',
              }
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['QCDscale_qqH']['samples'].update({'qqH_hww_'+m+'_'+model_name:HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH',m,'scale','bsm')})
    #print "QCDscale_qqH ", m, " = ", HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH',m,'scale','bsm')


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
                   'qqH_hww_750_NWA' : '1.02'
                   },
              }
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['QCDscale_qqbar_accept']['samples'].update({'qqH_hww_'+m+'_'+model_name:'1.02'})

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
                   'ggH_hww_750_NWA' : '1.027',
                   },
               'type'  : 'lnN',
              }
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['QCDscale_gg_accept']['samples'].update({'ggH_hww_'+m+'_'+model_name:'1.027'})
    nuisances['QCDscale_gg_accept']['samples'].update({'ggH_hww_INT'+m+'_'+model_name:'1.027'})


# pdf uncertainty

nuisances['pdf_gg']  = {
               'name'  : 'pdf_gg', 
               'samples'  : {
                   #'ggWW'    : '1.05',    # --> no, since absorbed into k-scale factor
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','pdf','sm'),                   
                   'ggH_hww_750_NWA' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','750','pdf','bsm'),
                   },
               'type'  : 'lnN',
              }
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['pdf_gg']['samples'].update({'ggH_hww_'+m+'_'+model_name: HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,m,'pdf','bsm')})
    nuisances['pdf_gg']['samples'].update({'ggH_hww_INT'+m+'_'+model_name: HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,m,'pdf','bsm')})


nuisances['pdf_qqbar']  = {
               'name'  : 'pdf_qqbar', 
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
                   'qqH_hww_750_NWA' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','750','pdf','bsm'),
                   'qqH_htt' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
                   'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH' ,'125.0','pdf','sm'),
                   'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.0','pdf','sm'),
                   'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
                   },
              }
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['pdf_qqbar']['samples'].update({'qqH_hww_'+m+'_'+model_name:HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH',m,'pdf','bsm')})



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
                   'ggH_hww_750_NWA' :  '1.005',
                   },
               'type'  : 'lnN',
              }
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['pdf_gg_accept']['samples'].update({'ggH_hww_'+m+'_'+model_name:'1.005'})
    nuisances['pdf_gg_accept']['samples'].update({'ggH_hww_INT'+m+'_'+model_name:'1.005'})


nuisances['pdf_qqbar_accept']  = {
               'name'  : 'pdf_qqbar_accept', 
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'qqH_hww' : '1.011',
                   'qqH_hww_750_NWA' : '1.011',
                   'qqH_htt' : '1.011',
                   'WH_hww'  : '1.007',
                   'ZH_hww'  : '1.012',
                   'VZ'      : '1.005',                   
                   },
              }
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['pdf_qqbar_accept']['samples'].update({'qqH_hww_'+m+'_'+model_name:'1.011'})


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
               'cuts'  : regions0j 
                
                }


nuisances['WWresum1j']  = {
                'name'  : 'WWresum1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : regions1j 
                }

nuisances['WWresum2j']  = {
                'name'  : 'WWresum2j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : regions2j + regions2j_VBF
                }

nuisances['WWqscale0j']  = {
                'name'  : 'WWqscale0j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : regions0j 
                }


nuisances['WWqscale1j']  = {
                'name'  : 'WWqscale1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : regions1j
                }

nuisances['WWqscale2j']  = {
                'name'  : 'WWqscale2j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : regions2j + regions2j_VBF 
                }


# PS/UE

# PS

'''

nuisances['PS']  = {
                'name'  : 'PS', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1./1.03295', '1.'],  # latino_WWTo2L2NuHerwigPS.root moved with different name in __PS folder
                },
                'folderUp'   : 'root://eosuser.cern.ch//eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS',
                'folderDown' : 'root://eosuser.cern.ch//eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS' 
                }

'''

nuisances['UE']  = {
                'name'  : 'UE', 
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1/0.978817', '1/1.0192'], 
                },
                }

nuisances['WgStarScale']  = {
               'name'  : 'WgStarScale', 
               'type'  : 'lnN',
               'samples'  : {
                   'WgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'VgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   },
                }
 

nuisances['DYttnorm0j']  = {
               'name'  : 'ICHEP_DYttnorm0j', 
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions0j_of
              }

nuisances['DYttnorm1j']  = {
               'name'  : 'ICHEP_DYttnorm1j', 
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions1j_of 
              }

nuisances['DYttnorm2j']  = {
               'name'  : 'ICHEP_DYttnorm2j',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j_of 
              }

nuisances['DYttnorm2jVBF']  = {
               'name'  : 'ICHEP_DYttnorm2jVBF',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j_VBF_of 
              }

nuisances['DYnorm0j']  = {
               'name'  : 'ICHEP_DYnorm0j',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions0j_sf 
              }

nuisances['DYnorm1j']  = {
               'name'  : 'ICHEP_DYnorm1j',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions1j_sf 
              }

nuisances['DYnorm2j']  = {
               'name'  : 'ICHEP_DYnorm2j',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j_sf 
              }

nuisances['DYnorm2jVBF']  = {
               'name'  : 'ICHEP_DYnorm2jVBF',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j_VBF_sf 
              }
'''
nuisances['WWnorm0j']  = {
               'name'  : 'ICHEP_WWnorm0j', 
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions0j 
              }

nuisances['WWnorm1j']  = {
               'name'  : 'ICHEP_WWnorm1j', 
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions1j 
              }

nuisances['WWnorm2j']  = {
               'name'  : 'ICHEP_WWnorm2j',
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j 
              }

nuisances['WWnorm2jVBF']  = {
               'name'  : 'ICHEP_WWnorm2jVBF',
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j_VBF 
              }
'''
nuisances['Topnorm0j']  = {
               'name'  : 'ICHEP_Topnorm0j', 
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  :  regions0j
              }

nuisances['Topnorm1j']  = {
               'name'  : 'ICHEP_Topnorm1j', 
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions1j 
              }

nuisances['Topnorm2j']  = {
               'name'  : 'ICHEP_Topnorm2j',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j 
              }

nuisances['Topnorm2jVBF']  = {
               'name'  : 'ICHEP_Topnorm2jVBF',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j_VBF
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
                'name'  : 'ICHEP_btag',
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
                   'ggH_hww_750_NWA' : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'qqH_hww_750_NWA' : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                }
}
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['btag']['samples'].update({'ggH_hww_'+m+'_'+model_name:['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)']})
    nuisances['btag']['samples'].update({'qqH_hww_'+m+'_'+model_name:['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)']}) 
#    nuisances['btag']['samples'].update({'ggH_hww_INT'+m+'_'+model_name:['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)']}) 
 

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
  
nuisances['TopPS']  = {
                'name'  : 'TopPS',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : ['(1+0.000067*mTi*0.5)','1/(1+0.000067*mTi*0.5)']
                }

} 
  
# DY pt corrections
#nuisances['DYptRew']  = {
#                'name'  : 'DYptRew',   # Theory uncertainty
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {  # up              down
#                   'DY'     : ['(0.95 - 0.1*TMath::Erf((gen_ptll-14.4)/9.0))/(0.95 - 0.1*TMath::Erf((gen_ptll-14)/8.8))',
#                               '(0.95 - 0.1*TMath::Erf((gen_ptll-13.6)/8.6))/(0.95 - 0.1*TMath::Erf((gen_ptll-14)/8.8))'],
#                }
#                # tt = 17/18/19 depending on the sample/generator
#                # tW = 15/16
#                
#}

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
                   'ggH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'qqH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ZH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ggZH_hww': ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'H_htt'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'H_hww'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'DY'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'VVV'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'VZ'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ggWW'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WW'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'top'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'Vg'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'VgS'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ggH_hww_750_NWA' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'qqH_hww_750_NWA' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                },
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__TrigEff/',    # uncertainties fixed!
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__TrigEff/' 
}
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['trigg']['samples'].update({'ggH_hww_'+m+'_'+model_name:['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']})
    nuisances['trigg']['samples'].update({'qqH_hww_'+m+'_'+model_name:['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']})
#    nuisances['trigg']['samples'].update({'ggH_hww_INT'+m+'_'+model_name:['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']})

nuisances['idiso_ele']  = {
                'name'  : 'idiso_ele',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'qqH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'WH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'ZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'ggZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'H_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'WH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'DY' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'VVV' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'VZ' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'ggWW' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'WW' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'top' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'Vg' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'VgS' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                 
                 },
}
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['idiso_ele']['samples'].update({'ggH_hww_'+m+'_'+model_name:['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))']})
    nuisances['idiso_ele']['samples'].update({'qqH_hww_'+m+'_'+model_name:['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))']})
               

nuisances['idiso_mu']  = {
                'name'  : 'idiso_mu',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {

                   'ggH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'qqH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'WH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'ZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'ggZH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'H_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'WH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'DY' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'VVV' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'VZ' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'ggWW' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'WW' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'top' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'Vg' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'VgS' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                 

                },
}
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['idiso_mu']['samples'].update({'ggH_hww_'+m+'_'+model_name:['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))']})
    nuisances['idiso_mu']['samples'].update({'qqH_hww_'+m+'_'+model_name:['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))']})
# nuisances handled by means of a different set of trees

nuisances['jes']  = {
                'name'  : 'scale_j', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   #'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'DY' :  ['1', '1'], # messa
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww' :  ['1', '1'],
                   'H_hww'  :  ['1', '1'],
                   'H_htt'  : ['1', '1'],
                   'Vg' : ['1', '1'], #messa
                   'VgS': ['1', '1'],
                   'ggH_hww_750_NWA' : ['1', '1'],
                   'qqH_hww_750_NWA' : ['1', '1'],
                },
                'folderUp'   : '###root://eosuser.cern.ch//eos/user/l/lenzip/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__JESup__sfSel__genericFormulas/',
                'folderDown' : '###root://eosuser.cern.ch//eos/user/l/lenzip/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__JESdo__sfSel__genericFormulas/' 
}
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
#tolto    nuisances['jes']['samples'].update({'ggH_hww_'+m+'_'+model_name:['1', '1']})
#tolto    nuisances['jes']['samples'].update({'qqH_hww_'+m+'_'+model_name:['1', '1']})
#    nuisances['jes']['samples'].update({'ggH_hww_INT'+m+'_'+model_name:['1', '1']})



nuisances['electronpt']  = {
                'name'  : 'scale_e', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'DY' :  ['1', '1'], # messa
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww'  :  ['1', '1'],
                   'ZH_hww'  :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'H_hww'   :  ['1', '1'],
                   'H_htt'   : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                   'ggH_hww_750_NWA' : ['1', '1'],
                   'qqH_hww_750_NWA' : ['1', '1'],
                },
                'folderUp'   : '###root://eoscms.cern.ch//eos/cms/store/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepElepTCutup__sfSel__genericFormulas/',
                'folderDown' : '###root://eoscms.cern.ch//eos/cms/store/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepElepTCutdo__sfSel__genericFormulas/' 
}
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
#tolto    nuisances['electronpt']['samples'].update({'ggH_hww_'+m+'_'+model_name:['1', '1']})
#tolto    nuisances['electronpt']['samples'].update({'qqH_hww_'+m+'_'+model_name:['1', '1']})
#    nuisances['electronpt']['samples'].update({'ggH_hww_INT'+m+'_'+model_name:['1', '1']})                
     
nuisances['muonpt']  = {
                'name'  : 'scale_m', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'DY' :  ['1', '1'], # messa
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'H_hww' :  ['1', '1'],
                   'H_htt' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                   'ggH_hww_750_NWA' : ['1', '1'],
                   'qqH_hww_750_NWA' : ['1', '1'],
                },
                'folderUp'   : '###root://eoscms.cern.ch//eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepMupTCutup__sfSel__genericFormulas/',
                'folderDown' : '###root://eoscms.cern.ch//eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepMupTCutdo__sfSel__genericFormulas/' 
}


for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
#tolto    nuisances['muonpt']['samples'].update({'ggH_hww_'+m+'_'+model_name:['1', '1']})
#tolto    nuisances['muonpt']['samples'].update({'qqH_hww_'+m+'_'+model_name:['1', '1']})
#    nuisances['muonpt']['samples'].update({'ggH_hww_INT'+m+'_'+model_name:['1', '1']})

nuisances['met']  = {
                'name'  : 'scale_met', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'DY' :  ['1', '1'], #messa
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'H_hww' :  ['1', '1'],
                   'H_htt' : ['1', '1'],
                   #'Vg' : ['1', '1'], #messa
                   'VgS': ['1', '1'],
                   'ggH_hww_750_NWA' : ['1', '1'],
                   'qqH_hww_750_NWA' : ['1', '1'],
                },
                'folderUp'   : '###root://eosuser.cern.ch//eos/user/l/lenzip/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__METup__sfSel__genericFormulas/',
                'folderDown' : '###root://eosuser.cern.ch//eos/user/l/lenzip/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__METdo__sfSel__genericFormulas/' 
}
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
#tolto    nuisances['met']['samples'].update({'ggH_hww_'+m+'_'+model_name:['1', '1']})
#tolto    nuisances['met']['samples'].update({'qqH_hww_'+m+'_'+model_name:['1', '1']})
#    nuisances['met']['samples'].update({'ggH_hww_INT'+m+'_'+model_name:['1', '1']})
                
# statistical fluctuation
# on MC/data
# "stat" is a special word to identify this nuisance
nuisances['stat']  = {
                # apply to the following samples: name of samples here must match keys in samples.py
               'samples'  : {
                   
                   'ttbar': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'singletop': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },
                    
                   'top': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },
                    
                   'DY': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },
                    
                   'ggWW': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },
                    
                   'ggWW_Int': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },
                    
                   'WW': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'VZ': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'WZ': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'VVV': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'H_hww': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'ggH_hww': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'qqH_hww': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'WH_hww': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'ZH_hww': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'H_htt': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'ggH_htt': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'qqH_htt': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'WH_htt': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'ZH_htt': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'ggZH_hww': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },
                   
                   'Fake': {  # needed? da rimettere
                         'typeStat' : 'bbb',
                         },
                   
                   'Vg': {  
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'VgS':{  
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },
#                   'ggH_hww_750_NWA' : {
#                         'typeStat' : 'bbb',
#                         },
#                   'qqH_hww_750_NWA' : {
#                         'typeStat' : 'bbb',
#                         },
                 },
               'type'  : 'shape'
              }
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['stat']['samples'].update({'ggH_hww_'+m+'_'+model_name:{'typeStat' : 'bbb'}})
    nuisances['stat']['samples'].update({'qqH_hww_'+m+'_'+model_name:{'typeStat' : 'bbb'}})

if os.path.exists("STUnc.py") :
  handle = open("STUnc.py",'r')
  exec(handle)
  handle.close()
else:
  print "!!! ERROR file STUnc.py does not exist."

nuisances['QCDscale']  = {
                'name'  : 'QCDscale',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww' : ['1.', 
                                '1.'],
                },                
                'cuts'  : [
                          'hwwhm_13TeV_of_0j',
                          'hwwhm_13TeV_of_1j',
                          'hwwhm_13TeV_of_2j',
                          'hwwhm_13TeV_of_2j_VBF',

                          'hwwhm_13TeV_mu_mu_0j',
                          'hwwhm_13TeV_mu_mu_1j',
                          'hwwhm_13TeV_mu_mu_2j',
                          'hwwhm_13TeV_mu_mu_2j_VBF',

                          'hwwhm_13TeV_e_e_0j',
                          'hwwhm_13TeV_e_e_1j',
                          'hwwhm_13TeV_e_e_2j',
                          'hwwhm_13TeV_e_e_2j_VBF',

                         ],

}                                       

nuisances['QCDscale1in']  = {
                'name'  : 'QCDscale1in',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww' : ['1.',
                                '1.'],
                },
                'cuts'  : [
                          'hwwhm_13TeV_of_0j',
                          'hwwhm_13TeV_of_1j',
                          'hwwhm_13TeV_of_2j',
                          'hwwhm_13TeV_of_2j_VBF',

                          'hwwhm_13TeV_mu_mu_0j',
                          'hwwhm_13TeV_mu_mu_1j',
                          'hwwhm_13TeV_mu_mu_2j',
                          'hwwhm_13TeV_mu_mu_2j_VBF',

                          'hwwhm_13TeV_e_e_0j',
                          'hwwhm_13TeV_e_e_1j',
                          'hwwhm_13TeV_e_e_2j',
                          'hwwhm_13TeV_e_e_2j_VBF',
                         ],

}

nuisances['QCDscale2in']  = {
                'name'  : 'QCDscale2in',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww' : ['1.',
                                '1.'],
                },
                'cuts'  : [
                          'hwwhm_13TeV_of_0j',
                          'hwwhm_13TeV_of_1j',
                          'hwwhm_13TeV_of_2j',
                          'hwwhm_13TeV_of_2j_VBF',

                          'hwwhm_13TeV_mu_mu_0j',
                          'hwwhm_13TeV_mu_mu_1j',
                          'hwwhm_13TeV_mu_mu_2j',
                          'hwwhm_13TeV_mu_mu_2j_VBF',

                          'hwwhm_13TeV_e_e_0j',
                          'hwwhm_13TeV_e_e_1j',
                          'hwwhm_13TeV_e_e_2j',
                          'hwwhm_13TeV_e_e_2j_VBF',
                         ],

}

nuisances['QCDscale3in']  = {
                'name'  : 'QCDscale3in',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww' : ['1.',
                                '1.'],
                },
                'cuts'  : [
                          'hwwhm_13TeV_of_0j',
                          'hwwhm_13TeV_of_1j',
                          'hwwhm_13TeV_of_2j',
                          'hwwhm_13TeV_of_2j_VBF',

                          'hwwhm_13TeV_mu_mu_0j',
                          'hwwhm_13TeV_mu_mu_1j',
                          'hwwhm_13TeV_mu_mu_2j',
                          'hwwhm_13TeV_mu_mu_2j_VBF',

                          'hwwhm_13TeV_e_e_0j',
                          'hwwhm_13TeV_e_e_1j',
                          'hwwhm_13TeV_e_e_2j',
                          'hwwhm_13TeV_e_e_2j_VBF',
                         ],

}

def findClosestMass(m):
  mindistance=99999
  for mass in STUnc.keys():
    if abs(float(mass) - float(m)) < mindistance:
      thekey=mass
      mindistance = abs(float(mass) - float(m))
  
  return STUnc[thekey]

for m in masses:
  unc=findClosestMass(m)
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    unc0jet=str(unc["QCDscale"]["0jet"])
    unc1jet=str(unc["QCDscale"]["1jet"])
    unc2jet=str(unc["QCDscale"]["2jet"])
    unc3jet=str(unc["QCDscale"]["VBF"])
    nuisances['QCDscale']['samples'].update({'ggH_hww_'+m+'_'+model_name:[
         "("+unc0jet+"*(std_vector_jet_pt[0] < 30)+"+unc1jet+"*(std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30)+"+unc2jet+"*((std_vector_jet_pt[1]> 30 ) && (mjj<500 || detajj<3.5))+"+unc3jet+"*(std_vector_jet_pt[1]> 30)*(mjj>500 && detajj>3.5))",
         "(1./("+unc0jet+"*(std_vector_jet_pt[0] < 30)+"+unc1jet+"*(std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30)+"+unc2jet+"*((std_vector_jet_pt[1]> 30 ) && (mjj<500 || detajj<3.5))+"+unc3jet+"*(std_vector_jet_pt[1]> 30)*(mjj>500 && detajj>3.5)))"
                                                                         ]
                                            })
    

    unc0jet=str(unc["QCDscale1in"]["0jet"])
    unc1jet=str(unc["QCDscale1in"]["1jet"])
    unc2jet=str(unc["QCDscale1in"]["2jet"])
    unc3jet=str(unc["QCDscale1in"]["VBF"])
    nuisances['QCDscale1in']['samples'].update({'ggH_hww_'+m+'_'+model_name:[
         "("+unc0jet+"*(std_vector_jet_pt[0] < 30)+"+unc1jet+"*(std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30)+"+unc2jet+"*((std_vector_jet_pt[1]> 30) && (mjj<500 || detajj<3.5))+"+unc3jet+"*(std_vector_jet_pt[1]> 30 )*(mjj>500 && detajj>3.5))",
         "(1./("+unc0jet+"*(std_vector_jet_pt[0] < 30)+"+unc1jet+"*(std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30)+"+unc2jet+"*((std_vector_jet_pt[1]> 30) && (mjj<500 || detajj<3.5))+"+unc3jet+"*(std_vector_jet_pt[1]> 30 )*(mjj>500 && detajj>3.5)))"
                                                                         ]
                                            })
    
    unc0jet=str(unc["QCDscale2in"]["0jet"])
    unc1jet=str(unc["QCDscale2in"]["1jet"])
    unc2jet=str(unc["QCDscale2in"]["2jet"])
    unc3jet=str(unc["QCDscale2in"]["VBF"])
    nuisances['QCDscale2in']['samples'].update({'ggH_hww_'+m+'_'+model_name:[
         "("+unc0jet+"*(std_vector_jet_pt[0] < 30)+"+unc1jet+"*(std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30)+"+unc2jet+"*((std_vector_jet_pt[1]> 30) && (mjj<500 || detajj<3.5))+"+unc3jet+"*(std_vector_jet_pt[1]> 30 )*(mjj>500 && detajj>3.5))",
         "(1./("+unc0jet+"*(std_vector_jet_pt[0] < 30)+"+unc1jet+"*(std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30)+"+unc2jet+"*((std_vector_jet_pt[1]> 30) && (mjj<500 || detajj<3.5))+"+unc3jet+"*(std_vector_jet_pt[1]> 30 )*(mjj>500 && detajj>3.5)))"
                                                                         ]
                                            })

    unc0jet=str(unc["QCDscale3in"]["0jet"])
    unc1jet=str(unc["QCDscale3in"]["1jet"])
    unc2jet=str(unc["QCDscale3in"]["2jet"])
    unc3jet=str(unc["QCDscale3in"]["VBF"])
    nuisances['QCDscale3in']['samples'].update({'ggH_hww_'+m+'_'+model_name:[
         "("+unc0jet+"*(std_vector_jet_pt[0] < 30)+"+unc1jet+"*(std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30)+"+unc2jet+"*((std_vector_jet_pt[1]> 30) && (mjj<500 || detajj<3.5))+"+unc3jet+"*(std_vector_jet_pt[1]> 30 )*(mjj>500 && detajj>3.5))",
         "(1./("+unc0jet+"*(std_vector_jet_pt[0] < 30)+"+unc1jet+"*(std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30)+"+unc2jet+"*((std_vector_jet_pt[1]> 30) && (mjj<500 || detajj<3.5))+"+unc3jet+"*(std_vector_jet_pt[1]> 30 )*(mjj>500 && detajj>3.5)))"
                                                                         ]
                                            })
  
