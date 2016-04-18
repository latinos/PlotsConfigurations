# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV', 
               'samples'  : {
                   'ggH_hww'  : '1.027',
                   'qqH_hww'  : '1.027',
                   'WH_hww'   : '1.027',
                   'ZH_hww'   : '1.027',
                   'H_htt'    : '1.027',
                   'H_hww'    : '1.027',
                   'WH_hww'   : '1.027',
                   'ggZH_hww'   : '1.027',
                   #'DY'       : '1.027',
                   'VVV'      : '1.027',
                   'VZ'       : '1.027',
                   #'WW'       : '1.027',
                   'ggWW'     : '1.027',
                   #'top'      : '1.027',
                   'Vg'       : '1.027',
                   },
               'type'  : 'lnN',
              }


## theory uncertainties

## WZ from 
## https://twiki.cern.ch/twiki/bin/view/CMS/StandardModelCrossSectionsat13TeV
##
#nuisances['QCDscale_VW']  = {
               #'name'  : 'QCDscale_VW', 
               #'samples'  : {
                   #'VW' : '1.03',
                   #},
               #'type'  : 'lnN'
              #}

## PDF: 0.0064 / 0.1427 = 0.0448493
## QCD: 0.0046 / 0.1427 = 0.0322355



#nuisances['QCDscale_ggH0j']  = {
               #'name'  : 'QCDscale_ggH0j', 
               #'samples'  : {
                   #'ggH_hww' : '1.056',
                   #},
               #'type'  : 'lnN',
               #'cuts'  : [
                 #'hww2l2v_13TeV_of0j',
                 #'hww2l2v_13TeV_top_of0j',
                 #'hww2l2v_13TeV_dytt_of0j',
##                 
                 #'hww2l2v_13TeV_me_0j',
                 #'hww2l2v_13TeV_em_0j',
##
                 #'hww2l2v_13TeV_me_mp_0j',
                 #'hww2l2v_13TeV_me_pm_0j',
                 #'hww2l2v_13TeV_em_mp_0j',
                 #'hww2l2v_13TeV_em_pm_0j',
##                 
                #]               
              #}


#nuisances['QCDscale_ggH1j']  = {
               #'name'  : 'QCDscale_ggH1j', 
               #'samples'  : {
                   #'ggH_hww' : '1.13',
                   #},
               #'type'  : 'lnN',
               #'cuts'  : [
                 #'hww2l2v_13TeV_of1j',
                 #'hww2l2v_13TeV_top_of1j',
                 #'hww2l2v_13TeV_dytt_of1j'              
##                 
                 #'hww2l2v_13TeV_me_1j',
                 #'hww2l2v_13TeV_em_1j',
##
                 #'hww2l2v_13TeV_me_mp_1j',
                 #'hww2l2v_13TeV_me_pm_1j',
                 #'hww2l2v_13TeV_em_mp_1j',
                 #'hww2l2v_13TeV_em_pm_1j',
##                 
                #]
              #}


#nuisances['QCDscale_ggH']  = {
               #'name'  : 'QCDscale_ggH', 
               #'samples'  : {
                   #'ggH_hww' : '0.921/1.074',
                   #'ggH_htt' : '0.921/1.074',
                   #'H_htt'   : '0.921/1.074',
                   #},
               #'type'  : 'lnN',
              #}

#nuisances['QCDscale_qqH']  = {
               #'name'  : 'QCDscale_qqH', 
               #'samples'  : {
                   #'qqH_hww' : '0.993/1.007',
                   #'qqH_htt' : '0.993/1.007',
                   #},
               #'type'  : 'lnN',
              #}

#nuisances['QCDscale_WH']  = {
               #'name'  : 'QCDscale_WH', 
               #'samples'  : {
                   #'WH_hww' : '0.985/1.007',
                   #},
               #'type'  : 'lnN',
              #}

#nuisances['QCDscale_ZH']  = {
               #'name'  : 'QCDscale_ZH', 
               #'samples'  : {
                   #'ZH_hww' : '0.962/1.038',
                   #},
               #'type'  : 'lnN',
              #}


#nuisances['QCDscale_ggZH']  = {
               #'name'  : 'QCDscale_ggZH', 
               #'samples'  : {
                   #'ggZH_hww': '0.795/1.257',                   
                   #},
               #'type'  : 'lnN',
              #}


#nuisances['QCDscale_qqbar_accept']  = {
               #'name'  : 'QCDscale_qqbar_accept', 
               #'type'  : 'lnN',
               #'samples'  : {
                   ##'qqH_hww' : '1.02',
                   ##'qqH_htt' : '1.02',
                   ##'WH_hww'  : '1.02',
                   ##'ZH_hww'  : '1.02',
                   ##
                   ##'WW'      : '1.015', -> not included since part of weights from WWqscale0j and WWqscale1j
                   #'qqH_hww' : '1.015',
                   #'qqH_htt' : '1.015',
                   #'WH_hww'  : '1.015',
                   #'ZH_hww'  : '1.015',
                   #'VZ'      : '1.005',
                   #},
              #}



#nuisances['QCDscale_gg_accept']  = {
               #'name'  : 'QCDscale_gg_accept', 
               #'samples'  : {
                   ##'ggWW'    : '1.03',
                   ##'ggH_hww' : '1.03',
                   ##'ggH_htt' : '1.03',
                   ##'H_htt'   : '1.03',
                   ##'ggZH_hww': '1.03',                   
                   ##
                   #'ggWW'    : '1.03',
                   #'ggH_hww' : '1.03',
                   #'ggH_htt' : '1.03',
                   #'H_htt'   : '1.03',
                   #'ggZH_hww': '1.03',                   

                   #},
               #'type'  : 'lnN',
              #}



##    
##    
##    
##    =====
##    0 jet
##    =====
##    =====================================================================
##     QCD// first row (2,2), 2nd row (0.5, 0.5)
##    =====================================================================
##    WWTo2L2Nu                       -- xs = 1.01233     -- acc = 0.99381
##                                    -- xs = 0.992596    -- acc = 1.00544
##    
##    WZTo3LNu                        -- xs = 1.01781     -- acc = 0.99276
##                                    -- xs = 0.986751    -- acc = 1.00652
##    
##    GluGluHToWWTo2L2Nu_M126         -- xs = 1.18068     -- acc = 0.972935
##                                    -- xs = 0.861719    -- acc = 1.02189
##    
##    VBFHToWWTo2L2Nu_M126            -- xs = 0.993296    -- acc = 1.01637
##                                    -- xs = 1.00686     -- acc = 0.989379
##    =====================================================================
##    
##    
##    
##    =====
##    1 jet
##    =====
##    =====================================================================
##     QCD// first row (2,2), 2nd row (0.5, 0.5)
##    =====================================================================
##    WWTo2L2Nu                        -- xs = 1.01274    -- acc = 1.01662
##                                     -- xs = 0.992221   -- acc = 0.984641
##    
##    WZTo3LNu                         -- xs = 1.01775    -- acc = 1.00981
##                                     -- xs = 0.986676   -- acc = 0.990711
##    
##    GluGluHToWWTo2L2Nu_M126          -- xs = 1.18068    -- acc = 1.01736
##                                     -- xs = 0.861719   -- acc = 0.985408
##    
##    VBFHToWWTo2L2Nu_M126             -- xs = 0.993296   -- acc = 1.00332
##                                     -- xs = 1.00686    -- acc = 0.997308
##    =====================================================================
##    
##    




## pdf uncertainty

#nuisances['pdf_gg']  = {
               #'name'  : 'pdf_gg', 
               #'samples'  : {
                   ##'ggWW'    : '1.05',    # --> no, since absorbed into k-scale factor
                   #'ggH_hww' : '0.929/1.060',
                   #'ggH_htt' : '0.929/1.060',
                   #'H_htt'   : '0.929/1.060',
                   #'ggZH_hww': '0.949/1.051',                   
                   #},
               #'type'  : 'lnN',
              #}


#nuisances['pdf_qqbar']  = {
               #'name'  : 'pdf_qqbar', 
               #'type'  : 'lnN',
               #'samples'  : {
                   #'qqH_hww' : '0.97/1.03',
                   #'qqH_htt' : '0.97/1.03',
                   #'WH_hww'  : '0.978/1.022',
                   #'ZH_hww'  : '0.978/1.022',
                   #'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
                   #},
              #}


##  sample: GluGluHToTauTau_M125              PDF unc = 2.17926 %     renorm/fact-up unc = 16.1205 %     renorm/fact-down unc = 12.6629 %
##  sample: GluGluHToTauTau_M130              PDF unc = 2.22151 %     renorm/fact-up unc = 17.6231 %     renorm/fact-down unc = 13.3184 %
##  sample: GluGluHToWWTo2L2NuPowheg_M125     PDF unc = 2.14268 %     renorm/fact-up unc = 15.403  %     renorm/fact-down unc = 12.2896 %
##  sample: TTTo2L2Nu                         PDF unc = 1.4951  %     renorm/fact-up unc = 10.4983 %     renorm/fact-down unc = 10.8503 %
##  sample: VBFHToTauTau_M125                 PDF unc = 1.78633 %     renorm/fact-up unc = 1.55808 %     renorm/fact-down unc = 1.65156 %
##  sample: WWTo2L2Nu                         PDF unc = 1.53441 %     renorm/fact-up unc = 0.605996%     renorm/fact-down unc = 0.200891%
##  sample: WZTo3LNu                          PDF unc = 1.48919 %     renorm/fact-up unc = 1.04377 %     renorm/fact-down unc = 0.681094%


#nuisances['pdf_gg_accept']  = {
               #'name'  : 'pdf_gg_accept', 
               #'samples'  : {
                   #'ggWW'    : '1.001',     # 
                   #'ggH_hww' : '1.001',
                   #'ggH_htt' : '1.001',
                   #'H_htt'   : '1.001',
                   #'ggZH_hww': '1.001', 
                   ##'top'     : '1.015',    # ---> not needed                
                   #},
               #'type'  : 'lnN',
              #}


#nuisances['pdf_qqbar_accept']  = {
               #'name'  : 'pdf_qqbar_accept', 
               #'type'  : 'lnN',
               #'samples'  : {
                   ##'qqH_hww' : '1.018',
                   ##'qqH_htt' : '1.018',
                   ##'WH_hww'  : '1.018',
                   ##'ZH_hww'  : '1.018',
                   ###'WW'      : '1.015',    # ---> not needed
                   ##'VW'      : '1.015',
                   ##
                   #'qqH_hww' : '1.001',
                   #'qqH_htt' : '1.001',
                   #'WH_hww'  : '1.001',
                   #'ZH_hww'  : '1.001',
                   ##'WW'      : '1.015',    # ---> not needed
                   #'VZ'      : '1.001',                   
                   #},
              #}


##    
##    =====
##    0 jet
##    =====
##    PDF 
##    =====================================================================
##    WWTo2L2Nu                         -- xs = 1.0148     -- acc = 1.00054
##    WZTo3LNu                          -- xs = 1.01442    -- acc = 1.00047
##    GluGluHToWWTo2L2Nu_M126           -- xs = 1.02063    -- acc = 1.00124
##    VBFHToWWTo2L2Nu_M126              -- xs = 1.01409    -- acc = 1.00122
##    
##    =====
##    1 jet
##    =====
##    PDF 
##    =====================================================================
##    WWTo2L2Nu                        -- xs = 1.01482    -- acc = 0.999089
##    WZTo3LNu                         -- xs = 1.01441    -- acc = 0.999825
##    GluGluHToWWTo2L2Nu_M126          -- xs = 1.02063    -- acc = 0.999853
##    VBFHToWWTo2L2Nu_M126             -- xs = 1.01409    -- acc = 1.0007
##    
##    
##    
##    





## ggww and interference

#nuisances['kfactggww']  = {
               #'name'  : 'kfactggww', 
               #'type'  : 'lnN',
               #'samples'  : {
                   #'ggWW' : '1.15',
                   #},
              #}


##nuisances['kfactggwwInt']  = {
               ##'name'  : 'kfactggwwInt', 
               ##'type'  : 'lnN',
               ##'samples'  : {
                   ##'ggWW_Int' : '1.25',
                   ##},
              ##}

##  - WW shaping
#nuisances['WWresum0j']  = {
                #'name'  : 'WWresum0j',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   #},
               #'cuts'  : [
                 #'hww2l2v_13TeV_of0j',
                 #'hww2l2v_13TeV_top_of0j',
                 #'hww2l2v_13TeV_dytt_of0j',
##                 
                 #'hww2l2v_13TeV_me_0j',
                 #'hww2l2v_13TeV_em_0j',
##
                 #'hww2l2v_13TeV_me_mp_0j',
                 #'hww2l2v_13TeV_me_pm_0j',
                 #'hww2l2v_13TeV_em_mp_0j',
                 #'hww2l2v_13TeV_em_pm_0j',
##                 
                #]               
                
                #}


#nuisances['WWresum1j']  = {
                #'name'  : 'WWresum1j',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   #},
               #'cuts'  : [
                 #'hww2l2v_13TeV_of1j',
                 #'hww2l2v_13TeV_top_of1j',
                 #'hww2l2v_13TeV_dytt_of1j',
##                 
                 #'hww2l2v_13TeV_me_1j',
                 #'hww2l2v_13TeV_em_1j',
##
                 #'hww2l2v_13TeV_me_mp_1j',
                 #'hww2l2v_13TeV_me_pm_1j',
                 #'hww2l2v_13TeV_em_mp_1j',
                 #'hww2l2v_13TeV_em_pm_1j',
##                 
                #]               
                #}

#nuisances['WWqscale0j']  = {
                #'name'  : 'WWqscale0j',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   #},
               #'cuts'  : [
                 #'hww2l2v_13TeV_of0j',
                 #'hww2l2v_13TeV_top_of0j',
                 #'hww2l2v_13TeV_dytt_of0j',
##                 
                 #'hww2l2v_13TeV_me_0j',
                 #'hww2l2v_13TeV_em_0j',
##
                 #'hww2l2v_13TeV_me_mp_0j',
                 #'hww2l2v_13TeV_me_pm_0j',
                 #'hww2l2v_13TeV_em_mp_0j',
                 #'hww2l2v_13TeV_em_pm_0j',
##                 
                #] 
                #}


#nuisances['WWqscale1j']  = {
                #'name'  : 'WWqscale1j',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   #},
               #'cuts'  : [
                 #'hww2l2v_13TeV_of1j',
                 #'hww2l2v_13TeV_top_of1j',
                 #'hww2l2v_13TeV_dytt_of1j',
##                 
                 #'hww2l2v_13TeV_me_1j',
                 #'hww2l2v_13TeV_em_1j',
##
                 #'hww2l2v_13TeV_me_mp_1j',
                 #'hww2l2v_13TeV_me_pm_1j',
                 #'hww2l2v_13TeV_em_mp_1j',
                 #'hww2l2v_13TeV_em_pm_1j',
##                 
                #] 
                #}


## PS/UE

## PS

#nuisances['PS']  = {
                #'name'  : 'PS', 
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'WW' :  ['1', '1'],  # latino_WWTo2L2NuHerwigPS.root moved with different name in __PS folder
                   #'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                #},
                #'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/',
                #'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/' 
                ##'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__PS/',
                ##'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/' 
                ##'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/../MCl2loose__hadd__bSFL2pTEff__l2tight__PS/',
                ##'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/' 
                #}


##mkdir eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS

##cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2NuHerwigPS_M125.root   eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/latino_GluGluHToWWTo2L2NuPowheg_M125.root
##cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2NuHerwigPS_M125.root   eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/latino_GluGluHToWWTo2L2Nu_M125.root
##cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_VBFHToWWTo2L2NuHerwigPS_M125.root      eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/latino_VBFHToWWTo2L2Nu_M125.root
##cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WWTo2L2NuHerwigPS.root                 eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/latino_WWTo2L2Nu.root




#nuisances['UE']  = {
                #'name'  : 'UE', 
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'WW' :  ['1', '1'], 
                   #'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                #},
                #'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/',
                #'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/' 
                #}



##mkdir eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo
##mkdir eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup

##cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M125_CUETDown.root   eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/latino_GluGluHToWWTo2L2NuPowheg_M125.root
##cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M125_CUETDown.root   eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/latino_GluGluHToWWTo2L2Nu_M125.root
##cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_VBFHToWWTo2L2Nu_M125_CUETDown.root      eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/latino_VBFHToWWTo2L2Nu_M125.root
##cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WWTo2L2Nu_CUETDown.root                 eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEdo/latino_WWTo2L2Nu.root

##cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M125_CUETUp.root     eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/latino_GluGluHToWWTo2L2Nu_M125.root
##cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_GluGluHToWWTo2L2Nu_M125_CUETUp.root     eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/latino_GluGluHToWWTo2L2NuPowheg_M125.root
##cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_VBFHToWWTo2L2Nu_M125_CUETUp.root        eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/latino_VBFHToWWTo2L2Nu_M125.root
##cp eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WWTo2L2Nu_CUETUp.root                   eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__UEup/latino_WWTo2L2Nu.root





## experimental uncertainties


##nuisances['WgStarScale']  = {
                ##'name'  : 'WgStarScale',
                ##'kind'  : 'weight',
                ##'type'  : 'shape',
                ##'samples'  : {
                   ##'VZ'   : ['(dataset==6)*1.30+(dataset!=6)', '(dataset==6)*0.70+(dataset!=6)'],
                   ##}
                ##}

## K factor (Data/Wg*) = 1.23 + 0.33
#nuisances['WgStarScale']  = {
               #'name'  : 'WgStarScale', 
               #'type'  : 'lnN',
               #'samples'  : {
                   #'Wg' : '1.27',  # 0.3 / 1.23  --> k_factor = 1.23 +/- 0.33
                   #'Vg' : '1.27',  # 0.3 / 1.23  --> k_factor = 1.23 +/- 0.33
                   #},
                #}
 

#nuisances['DYttnorm0j']  = {
               #'name'  : 'DYttnorm0j', 
               #'samples'  : {
                   #'DY' : '1.00',
                   #},
               #'type'  : 'rateParam',
               #'cuts'  : [
                 #'hww2l2v_13TeV_of0j',
                 #'hww2l2v_13TeV_top_of0j',
                 #'hww2l2v_13TeV_dytt_of0j',
##                 
                 #'hww2l2v_13TeV_me_0j',
                 #'hww2l2v_13TeV_em_0j',
##
                 #'hww2l2v_13TeV_me_mp_0j',
                 #'hww2l2v_13TeV_me_pm_0j',
                 #'hww2l2v_13TeV_em_mp_0j',
                 #'hww2l2v_13TeV_em_pm_0j',
##                 
                #]
              #}

#nuisances['DYttnorm1j']  = {
               #'name'  : 'DYttnorm1j', 
               #'samples'  : {
                   #'DY' : '1.00',
                   #},
               #'type'  : 'rateParam',
               #'cuts'  : [
                 #'hww2l2v_13TeV_of1j',
                 #'hww2l2v_13TeV_top_of1j',
                 #'hww2l2v_13TeV_dytt_of1j',
##                 
                 #'hww2l2v_13TeV_me_1j',
                 #'hww2l2v_13TeV_em_1j',
##
                 #'hww2l2v_13TeV_me_mp_1j',
                 #'hww2l2v_13TeV_me_pm_1j',
                 #'hww2l2v_13TeV_em_mp_1j',
                 #'hww2l2v_13TeV_em_pm_1j',
##                 
                #]
              #}




## old style "free floating", but still working!
##nuisances['WWnorm']  = {
               ##'name'  : 'WWnorm', 
               ##'samples'  : {
                   ##'WW' : 2.00,
                   ##},
               ##'type'  : 'lnU',
              ##}

## new style "free floating" background
## e.g. " z_norm rateParam  htsearch zll 1 "
#nuisances['WWnorm0j']  = {
               #'name'  : 'WWnorm0j', 
               #'samples'  : {
                   #'WW' : '1.00',
                   #},
               #'type'  : 'rateParam',
               #'cuts'  : [
                 #'hww2l2v_13TeV_of0j',
                 #'hww2l2v_13TeV_top_of0j',
                 #'hww2l2v_13TeV_dytt_of0j',              
##                 
                 #'hww2l2v_13TeV_me_0j',
                 #'hww2l2v_13TeV_em_0j',
##
                 #'hww2l2v_13TeV_me_mp_0j',
                 #'hww2l2v_13TeV_me_pm_0j',
                 #'hww2l2v_13TeV_em_mp_0j',
                 #'hww2l2v_13TeV_em_pm_0j',
##                 
                #]
              #}

#nuisances['WWnorm1j']  = {
               #'name'  : 'WWnorm1j', 
               #'samples'  : {
                   #'WW' : '1.00',
                   #},
               #'type'  : 'rateParam',
               #'cuts'  : [
                 #'hww2l2v_13TeV_of1j',
                 #'hww2l2v_13TeV_top_of1j',
                 #'hww2l2v_13TeV_dytt_of1j',              
##                 
                 #'hww2l2v_13TeV_me_1j',
                 #'hww2l2v_13TeV_em_1j',
##
                 #'hww2l2v_13TeV_me_mp_1j',
                 #'hww2l2v_13TeV_me_pm_1j',
                 #'hww2l2v_13TeV_em_mp_1j',
                 #'hww2l2v_13TeV_em_pm_1j',
##                 
                #]
              #}


#nuisances['Topnorm0j']  = {
               #'name'  : 'Topnorm0j', 
               #'samples'  : {
                   #'top' : '1.00',
                   #},
               #'type'  : 'rateParam',
               #'cuts'  : [
                 #'hww2l2v_13TeV_of0j',
                 #'hww2l2v_13TeV_top_of0j',
                 #'hww2l2v_13TeV_dytt_of0j',              
##                 
                 #'hww2l2v_13TeV_me_0j',
                 #'hww2l2v_13TeV_em_0j',
##
                 #'hww2l2v_13TeV_me_mp_0j',
                 #'hww2l2v_13TeV_me_pm_0j',
                 #'hww2l2v_13TeV_em_mp_0j',
                 #'hww2l2v_13TeV_em_pm_0j',
##                 
                #]
              #}

#nuisances['Topnorm1j']  = {
               #'name'  : 'Topnorm1j', 
               #'samples'  : {
                   #'top' : '1.00',
                   #},
               #'type'  : 'rateParam',
               #'cuts'  : [
                 #'hww2l2v_13TeV_of1j',
                 #'hww2l2v_13TeV_top_of1j',
                 #'hww2l2v_13TeV_dytt_of1j',              
##                 
                 #'hww2l2v_13TeV_me_1j',
                 #'hww2l2v_13TeV_em_1j',
##
                 #'hww2l2v_13TeV_me_mp_1j',
                 #'hww2l2v_13TeV_me_pm_1j',
                 #'hww2l2v_13TeV_em_mp_1j',
                 #'hww2l2v_13TeV_em_pm_1j',
##                 
                #]
              #}





## FIXME: to be added and split
## - lepton resolution
## - pileup


### nuisances handled by means of a weight in the tree

##nuisances['pileup']  = {
                ##'name'  : 'pileup', 
                ##'kind'  : 'weight',
                ##'type'  : 'shape',
                ##'samples'  : {
                   ###'ttbar' : ['puWup/puW', 'puWdown/puW'],
                   ###'DY'    : ['puWup/puW', 'puWdown/puW']
                   ##'ttbar' : ['3./puW', '0.3/puW'],
                   ##'DY'    : ['3./puW', '0.3/puW']
                ##}
##}


## fakes 


#nuisances['fake_syst']  = {
               #'name'  : 'fake_syst', 
               #'type'  : 'lnN',
               #'samples'  : {
                   #'Fake' : '1.30',
                   #},
#}
 


#nuisances['fake_ele']  = {
                #'name'  : 'fake_ele_hww',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'Fake'      : ['(fakeW2l0jElUp*(njet==0)+fakeW2l1jElUp*(njet==1)+fakeW2l2jElUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  #'(fakeW2l0jElDown*(njet==0)+fakeW2l1jElDown*(njet==1)+fakeW2l2jElDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                #}
#}
 

#nuisances['fake_ele_stat']  = {
                #'name'  : 'fake_ele_stat_hww',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'Fake'      : ['(fakeW2l0jstatElUp*(njet==0)+fakeW2l1jstatElUp*(njet==1)+fakeW2l2jstatElUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  #'(fakeW2l0jstatElDown*(njet==0)+fakeW2l1jstatElDown*(njet==1)+fakeW2l2jstatElDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                #}
#}


#nuisances['fake_mu']  = {
                #'name'  : 'fake_mu_hww',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'Fake'      : ['(fakeW2l0jMuUp*(njet==0)+fakeW2l1jMuUp*(njet==1)+fakeW2l2jMuUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  #'(fakeW2l0jMuDown*(njet==0)+fakeW2l1jMuDown*(njet==1)+fakeW2l2jMuDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                #}
#}
 

#nuisances['fake_mu_stat']  = {
                #'name'  : 'fake_mu_stat_hww',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'Fake'      : ['(fakeW2l0jstatMuUp*(njet==0)+fakeW2l1jstatMuUp*(njet==1)+fakeW2l2jstatMuUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  #'(fakeW2l0jstatMuDown*(njet==0)+fakeW2l1jstatMuDown*(njet==1)+fakeW2l2jstatMuDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                #}
#}


## others ... 
  
  
##nuisances['eleadhoc']  = {
                ##'name'  : 'eleadhoc',
                ##'kind'  : 'weight',
                ##'type'  : 'shape',
                ##'samples'  : {
                   ##'ggH_hww' : ['1./ ( ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1])) )', '1.'],
                   ##'qqH_hww' : ['1./ ( ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1])) )', '1.'],
                   ##'WH_hww'  : ['1./ ( ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1])) )', '1.'],
                   ##'ZH_hww'  : ['1./ ( ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1])) )', '1.'],
                   ##'H_htt'   : ['1./ ( ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1])) )', '1.'],
                   ##'H_hww'   : ['1./ ( ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1])) )', '1.'],
                   ##'WH_hww'  : ['1./ ( ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1])) )', '1.'],
                   ##'DY'      : ['1./ ( ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1])) )', '1.'],
                   ##'VVV'     : ['1./ ( ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1])) )', '1.'],
                   ##'VZ'      : ['1./ ( ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1])) )', '1.'],
                   ##'WW'      : ['1./ ( ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1])) )', '1.'],
                   ##'top'     : ['1./ ( ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1])) )', '1.'],
                   ##'Vg'      : ['1./ ( ((abs(std_vector_lepton_flavour[0]) ==  13) + (abs(std_vector_lepton_flavour[0]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[0] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] - 0.0103375 * std_vector_lepton_eta[0] * std_vector_lepton_eta[0] * std_vector_lepton_eta[0])) * ((abs(std_vector_lepton_flavour[1]) ==  13) + (abs(std_vector_lepton_flavour[1]) ==  11) * sqrt(0.9677 + std_vector_lepton_eta[1] * 0.0158768 - 0.0167529 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] - 0.0103375 * std_vector_lepton_eta[1] * std_vector_lepton_eta[1] * std_vector_lepton_eta[1])) )', '1.'],
                ##}
##}


                                 
                                 
  
#nuisances['btag']  = {
                #'name'  : 'btag',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ggH_hww' : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'qqH_hww' : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'WH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'ZH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'H_htt'   : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'H_hww'   : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'WH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'DY'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'VVV'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'VZ'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'WW'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'ggWW'    : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'top'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'Vg'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                #}
#}
 
 
 

#nuisances['tttwTh']  = {
                #'name'  : 'tttwTh',   # Theory uncertainty
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {  # up              down
                   #'top'     : ['((dataset==15 || dataset==16) * 1.0816 + (dataset==17 || dataset==18 || dataset==19))',
                                #'((dataset==15 || dataset==16) * 0.9184 + (dataset==17 || dataset==18 || dataset==19))'],
                #}
                ## tt = 17/18/19 depending on the sample/generator
                ## tW = 15/16
                
#}
  
  
  

#nuisances['trigg']  = {
                #'name'  : 'trigger',
                #'kind'  : 'weight',
                ##'kind'  : 'tree', #'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ggH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'qqH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'WH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'ZH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'ggZH_hww': ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'H_htt'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'H_hww'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'WH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'DY'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'VVV'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'VZ'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'ggWW'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'WW'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'top'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'Vg'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                #},
                ##'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
                ##'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
#}



#nuisances['idiso']  = {
                #'name'  : 'idiso',
                #'kind'  : 'weight',
                ##'kind'  : 'tree', #'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ggH_hww' : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'qqH_hww' : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'WH_hww'  : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'ZH_hww'  : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'ggZH_hww': ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'H_htt'   : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'H_hww'   : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'WH_hww'  : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'DY'      : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'VVV'     : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'VZ'      : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'ggWW'    : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'WW'      : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'top'     : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                   #'Vg'      : ['(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])', '(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])'],
                #},
                ##'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
                ##'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
#}


## nuisances handled by means of a different set of trees


#nuisances['jes']  = {
                #'name'  : 'scale_j', 
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'],
                   #'DY' :  ['1', '1'],
                   #'top' : ['1', '1'],
                   #'VZ' :  ['1', '1'],
                   #'VVV' : ['1', '1'],
                   #'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                   #'WH_hww' :  ['1', '1'],
                   #'ZH_hww' :  ['1', '1'],
                   #'ggZH_hww' :  ['1', '1'],
                   #'H_hww'  :  ['1', '1'],
                   #'H_htt'  : ['1', '1'],
                   #'Vg' : ['1', '1'],
                #},
                #'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup__wwSel/',
                #'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__wwSel/' 
                ##'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup/',
                ##'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo/' 
                ##'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESup/',
                ##'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESdo/' 
                ##'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESup__wwSel/',
                ##'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESdo__wwSel/' 
#}





#nuisances['electronpt']  = {
                #'name'  : 'scale_e', 
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'],
                   #'DY' :  ['1', '1'],
                   #'top' : ['1', '1'],
                   #'VZ' :  ['1', '1'],
                   #'VVV' : ['1', '1'],
                   #'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                   #'WH_hww'  :  ['1', '1'],
                   #'ZH_hww'  :  ['1', '1'],
                   #'ggZH_hww':  ['1', '1'],
                   #'H_hww'   :  ['1', '1'],
                   #'H_htt'   : ['1', '1'],
                   #'Vg' : ['1', '1'],
                #},
                #'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__wwSel/',
                #'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__wwSel/' 
                ##'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup/',
                ##'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo/' 
                ##'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__wwSel/',
                ##'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__wwSel/' 
#}
                
     
#nuisances['muonpt']  = {
                #'name'  : 'scale_m', 
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'],
                   #'DY' :  ['1', '1'],
                   #'top' : ['1', '1'],
                   #'VZ' :  ['1', '1'],
                   #'VVV' : ['1', '1'],
                   #'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                   #'WH_hww' :  ['1', '1'],
                   #'ZH_hww' :  ['1', '1'],
                   #'ggZH_hww':  ['1', '1'],
                   #'H_hww' :  ['1', '1'],
                   #'H_htt' : ['1', '1'],
                   #'Vg' : ['1', '1'],
                #},
                #'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__wwSel/',
                #'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__wwSel/' 
                ##'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup/',
                ##'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup/',
                ##'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo/' 
                ##'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__wwSel/',
                ##'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__wwSel/' 
#}


#nuisances['met']  = {
                #'name'  : 'scale_met', 
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'],
                   #'DY' :  ['1', '1'],
                   #'top' : ['1', '1'],
                   #'VZ' :  ['1', '1'],
                   #'VVV' : ['1', '1'],
                   #'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                   #'WH_hww' :  ['1', '1'],
                   #'ZH_hww' :  ['1', '1'],
                   #'ggZH_hww':  ['1', '1'],
                   #'H_hww' :  ['1', '1'],
                   #'H_htt' : ['1', '1'],
                   #'Vg' : ['1', '1'],
                #},
                #'folderUp'   : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__wwSel/',
                #'folderDown' : 'eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__wwSel/' 
                ##'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup/',
                ##'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo/' 
                ##'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__wwSel/',
                ##'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__wwSel/' 
#}


                
                
## statistical fluctuation
## on MC/data
## "stat" is a special word to identify this nuisance
#nuisances['stat']  = {
                ## apply to the following samples: name of samples here must match keys in samples.py
               #'samples'  : {
                   
                   #'ttbar': {
                         #'typeStat' : 'bbb',
                         #},

                   #'singletop': {
                         #'typeStat' : 'bbb',
                         #},
                    
                   #'top': {
                         #'typeStat' : 'bbb',
                         #},
                    
                   #'DY': {
                         #'typeStat' : 'bbb',
                         #'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
                         #},
                    
                   #'ggWW': {
                         #'typeStat' : 'bbb',
                         #},
                    
                   #'ggWW_Int': {
                         #'typeStat' : 'bbb',
                         #},
                    
                   #'WW': {
                         #'typeStat' : 'bbb',
                         #},

                   #'VZ': {
                         #'typeStat' : 'bbb',
                         #},

                   #'WZ': {
                         #'typeStat' : 'bbb',
                         #},

                   #'VVV': {
                         #'typeStat' : 'bbb',
                         #},

                   #'H_hww': {
                         #'typeStat' : 'bbb',
                         #},

                   #'ggH_hww': {
                         #'typeStat' : 'bbb',
                         #},

                   #'qqH_hww': {
                         #'typeStat' : 'bbb',
                         #},

                   #'WH_hww': {
                         #'typeStat' : 'bbb',
                         #},

                   #'ZH_hww': {
                         #'typeStat' : 'bbb',
                         #},

                   #'H_htt': {
                         #'typeStat' : 'bbb',
                         #},

                   #'ggH_htt': {
                         #'typeStat' : 'bbb',
                         #},

                   #'qqH_htt': {
                         #'typeStat' : 'bbb',
                         #},

                   #'WH_htt': {
                         #'typeStat' : 'bbb',
                         #},

                   #'ZH_htt': {
                         #'typeStat' : 'bbb',
                         #},

                   #'ggZH_hww': {
                         #'typeStat' : 'bbb',
                         #},
                   
                   #'Fake': {  # needed?
                         #'typeStat' : 'bbb',
                         #},
                   
                   #'Vg': {  
                         #'typeStat' : 'bbb',
                         #},
                            
                 #},
               #'type'  : 'shape'
              #}


