# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV', 
               'all'   : 1 ,     # apply to all samples
               'type'  : 'lnN',
               'value' : '1.027' 
              }


# theory uncertainties

#nuisances['QCDscale_ggH0j']  = {
               #'name'  : 'QCDscale_ggH0j', 
               #'samples'  : {
                   #'ggH_hww' : '1.056',
                   #},
               #'type'  : 'lnN',
               #'cuts'  : [
                 #'hww2l2v_13TeV_of0j',
                 #'hww2l2v_13TeV_top_of0j',
                 #'hww2l2v_13TeV_dytt_of0j'
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


#nuisances['pdf_gg']  = {
               #'name'  : 'pdf_gg', 
               #'samples'  : {
                   #'ggH_hww' : '0.929/1.060',
                   #'ggH_htt' : '0.929/1.060',
                   #'H_htt'   : '0.929/1.060',
                   #'ggZH_hww': '0.949/1.051',                   
                   #},
               #'type'  : 'lnN',
              #}


#nuisances['pdf_gg_accept']  = {
               #'name'  : 'pdf_gg_accept', 
               #'samples'  : {
                   #'ggH_hww' : '1.03',
                   #'ggH_htt' : '1.03',
                   #'H_htt'   : '1.03',
                   #'ggZH_hww': '1.03',                   
                   #},
               #'type'  : 'lnN',
              #}


#nuisances['QCDscale_gg_accept']  = {
               #'name'  : 'QCDscale_gg_accept', 
               #'samples'  : {
                   #'ggH_hww' : '1.03',
                   #'ggH_htt' : '1.03',
                   #'H_htt'   : '1.03',
                   #'ggZH_hww': '1.03',                   
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
                   ##'VZ'      : '',
                   #},
              #}

#nuisances['pdf_qqbar_accept']  = {
               #'name'  : 'pdf_qqbar_accept', 
               #'type'  : 'lnN',
               #'samples'  : {
                   #'qqH_hww' : '1.03',
                   #'qqH_htt' : '1.03',
                   #'WH_hww'  : '1.03',
                   #'ZH_hww'  : '1.03',
                   #},
              #}

#nuisances['QCDscale_qqbar_accept']  = {
               #'name'  : 'QCDscale_qqbar_accept', 
               #'type'  : 'lnN',
               #'samples'  : {
                   #'qqH_hww' : '1.02',
                   #'qqH_htt' : '1.02',
                   #'WH_hww'  : '1.02',
                   #'ZH_hww'  : '1.02',
                   #},
              #}



#nuisances['kfactggww']  = {
               #'name'  : 'kfactggww', 
               #'type'  : 'lnN',
               #'samples'  : {
                   #'ggWW' : '1.15',
                   #},
              #}


#nuisances['kfactggwwInt']  = {
               #'name'  : 'kfactggwwInt', 
               #'type'  : 'lnN',
               #'samples'  : {
                   #'ggWW_Int' : '1.25',
                   #},
              #}

##  - WW shaping
#nuisances['WWresum0j']  = {
                #'name'  : 'WWresum0j',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   #}
                #}


#nuisances['WWresum1j']  = {
                #'name'  : 'WWresum1j',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   #}
                #}

#nuisances['WWqscale0j']  = {
                #'name'  : 'WWqscale0j',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   #}
                #}


#nuisances['WWqscale1j']  = {
                #'name'  : 'WWqscale1j',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   #}
                #}


## PS/UE

## PS

#nuisances['PS']  = {
                #'name'  : 'PS', 
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   ##'WW' :  ['1', '1'], latino_WWTo2L2NuHerwigPS.root missing
                   #'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                #},
                #'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/../MCl2loose__hadd__bSFL2pTEff__l2tight__PS/',
                #'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/' 

                #}




## experimental uncertainties


##nuisances['WgStarScale']  = {
                ##'name'  : 'WgStarScale',
                ##'kind'  : 'weight',
                ##'type'  : 'shape',
                ##'samples'  : {
                   ##'VZ'   : ['(dataset==6)*1.30+(dataset!=6)', '(dataset==6)*0.70+(dataset!=6)'],
                   ##}
                ##}

#nuisances['WgStarScale']  = {
               #'name'  : 'pdf_qqbar_accept', 
               #'type'  : 'lnN',
               #'samples'  : {
                   #'Wg' : '1.25',  # 0.3 / 1.2  --> k_factor = 1.2 +/- 0.3
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
                 #'hww2l2v_13TeV_dytt_of0j'
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
                 #'hww2l2v_13TeV_dytt_of1j'
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
                 #'hww2l2v_13TeV_dytt_of0j'              
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
                 #'hww2l2v_13TeV_dytt_of1j'              
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
                 #'hww2l2v_13TeV_dytt_of0j'              
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
                 #'hww2l2v_13TeV_dytt_of1j'              
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


##nuisances['fake']  = {
                ##'name'  : 'fakehww',
                ##'kind'  : 'weight',
                ##'type'  : 'shape',
                ##'samples'  : {
                   ##'Fake'      : ['(fakeW2l0jUp*(njet==0)+fakeW2l1jUp*(njet==1)+fakeW2l2jUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  ##'(fakeW2l0jDown*(njet==0)+fakeW2l1jDown*(njet==1)+fakeW2l2jDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                ##}
##}
 

##nuisances['fakestat']  = {
                ##'name'  : 'fakestathww',
                ##'kind'  : 'weight',
                ##'type'  : 'shape',
                ##'samples'  : {
                   ##'Fake'      : ['(fakeW2l0jstatUp*(njet==0)+fakeW2l1jstatUp*(njet==1)+fakeW2l2jstatUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  ##'(fakeW2l0jstatDown*(njet==0)+fakeW2l1jstatDown*(njet==1)+fakeW2l2jstatDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                ##}
##}
 
 
  
#nuisances['btag']  = {
                #'name'  : 'btag',
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   #'DY'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'VVV'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'VZ'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'WW'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   #'top'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
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
                #'type'  : 'shape',
                #'samples'  : {
                   #'DY'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'VVV'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'VZ'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'WW'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   #'top'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                #}
#}




# nuisances handled by means of a different set of trees


#nuisances['jes']  = {
                #'name'  : 'scale_j', 
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'WW' :  ['1', '1'],
                   ##'DY' :  ['1', '1'],
                   #'top' : ['1', '1'],
                   #'VZ' :  ['1', '1'],
                   #'VVV' : ['1', '1'],
                   ##'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                   #'WH_hww' :  ['1', '1'],
                   #'ZH_hww' :  ['1', '1'],
                   #'H_hww' :  ['1', '1'],
                   #'H_htt' : ['1', '1'],
                #},
                #'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESup/',
                #'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESdo/' 
#}

#nuisances['electronpt']  = {
                #'name'  : 'scale_e', 
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'],
                   ##'DY' :  ['1', '1'],
                   #'top' : ['1', '1'],
                   ##'VZ' :  ['1', '1'],
                   #'VVV' : ['1', '1'],
                   ##'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                   #'WH_hww' :  ['1', '1'],
                   #'ZH_hww' :  ['1', '1'],
                   #'H_hww' :  ['1', '1'],
                   #'H_htt' : ['1', '1'],
                #},
                #'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup/',
                #'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo/' 
#}


#nuisances['muonpt']  = {
                #'name'  : 'scale_m', 
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'],
                   ##'DY' :  ['1', '1'],
                   #'top' : ['1', '1'],
                   ##'VZ' :  ['1', '1'],
                   #'VVV' : ['1', '1'],
                   ##'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                   #'WH_hww' :  ['1', '1'],
                   #'ZH_hww' :  ['1', '1'],
                   #'H_hww' :  ['1', '1'],
                   #'H_htt' : ['1', '1'],
                #},
                #'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup/',
                #'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo/' 
#}



#nuisances['met']  = {
                #'name'  : 'scale_met', 
                #'kind'  : 'tree',
                #'type'  : 'shape',
                #'samples'  : {
                   #'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'],
                   ##'DY' :  ['1', '1'],
                   #'top' : ['1', '1'],
                   #'VZ' :  ['1', '1'],
                   #'VVV' : ['1', '1'],
                   ##'ggH_hww' : ['1', '1'],
                   #'qqH_hww' : ['1', '1'],
                   #'WH_hww' :  ['1', '1'],
                   #'ZH_hww' :  ['1', '1'],
                   #'H_hww' :  ['1', '1'],
                   #'H_htt' : ['1', '1'],
                #},
                #'folderUp'   : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup/',
                #'folderDown' : 'eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo/' 
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


