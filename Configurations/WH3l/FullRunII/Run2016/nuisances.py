# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#
Nlep = '3'
eleWP='mva_90p_Iso2016'
muWP='cut_Tight80x'
# eleWP='mvaFall17Iso_WP90'
# muWP='cut_Tight_HWWW'
treeBaseDir = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/"
xrootdPath = ""

#### Luminosity

nuisances['lumi']  = { 
               'name'  : 'lumi_13TeV_2016',
               'samples'  : { 
                   'WW'       : '1.025',
                   'ZZ'       : '1.025',
                   'VVV'      : '1.025',
                   'ZH_hww'   : '1.025',
                   'ggZH_hww' : '1.025',
                   'WH_hww'   : '1.025',
                   'WH_htt'    : '1.025',
                   },  
               'type'  : 'lnN',
              }



# Theoritical Systematics

from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()

nuisances['QCDscale_WH']  = {
               'name'  : 'QCDscale_WH',
               'samples'  : {
                   'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'WH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   # 'ZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   # 'ZH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }


nuisances['QCDscale_qqbar_ACCEPT']  = {
               'name'  : 'QCDscale_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   'WH_htt'  : '1.05',
                   'WH_hww'  : '1.05',
                   'WZ'      : '1.029'
                   },
              }


# ## pdf uncertainty


nuisances['pdf_Higgs_qqbar_wh3l']  = {
               'name'  : 'pdf_Higgs_qqbar',
               'type'  : 'lnN',
               'samples'  : {
                   'WH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   },
              }


nuisances['pdf_Higgs_qqbar_ACCEPT_wh3l']  = {
               'name'  : 'pdf_Higgs_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'WH_htt'  : '1.007',
                   'WH_hww'  : '1.007',
                   'WZ'      : '1.005'
                   },
              }

# # PS/UE

# # PS
nuisances['PS_wh3l']  = {
                'name'  : 'PS_wh3l',
                'skipCMS' : 1,
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   # 'WH_hww' : '1.037',
                   # 'WH_htt' : '1.037',
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016__PS'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016'+skim,
                'AsLnN'      : '1',

}

nuisances['UE_wh3l']  = {
                'name'  : 'UE_wh3l',
                'skipCMS' : 1,
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   # 'WH_hww' : '1.010',
                   # 'WH_htt' : '1.010',
               },
                'folderUp'   : xrootdPath+treeBaseDir+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016__UEup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016__UEdo'+skim,
                'AsLnN'      : '1',
                }

# nuisances['PS_wh3l']  = {
                # 'name'  : 'PS_wh3l',
                # 'skipCMS' : 1,
                # 'type'  : 'lnN',
                # 'samples'  : {
                   # 'WH_hww'   : '1.037',
                   # 'WH_htt'    : '1.037',
                # },
# }

# nuisances['UE_wh3l']  = {
                # 'name'  : 'UE_wh3l',
                # 'skipCMS' : 1,
                # 'type'  : 'lnN',
                # 'samples'  : {
                   # 'WH_hww'   : '1.010',
                   # 'WH_htt'    : '1.010',
               # },
                # }


nuisances['Zg3lnorm']  = {
               'name'  : 'CMS_hww_Zg3lnorm',
               'samples'  : {
                   'Vg' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'wh3l_zg_13TeV',
                 'wh3l_13TeV_ossf',
                 'wh3l_13TeV_sssf',
                 'wh3l_wz_13TeV',
                ]
              }

nuisances['WZ3lnorm']  = {
               'name'  : 'CMS_hww_WZ3lnorm',
               'samples'  : {
                   'WZ' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'wh3l_wz_13TeV',
                 'wh3l_13TeV_ossf',
                 'wh3l_13TeV_sssf',
                 'wh3l_zg_13TeV',
                ]
              }

# # Other Systematics
# #
# ## fakes 
# #
# #
# #### FAKES

if Nlep == '2' :
  # already divided by central values in formulas !
  fakeW_EleUp       = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleUp'
  fakeW_EleDown     = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleDown'
  fakeW_MuUp        = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuUp'
  fakeW_MuDown      = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuDown'
  fakeW_statEleUp   = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleUp'
  fakeW_statEleDown = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleDown'
  fakeW_statMuUp    = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuUp'
  fakeW_statMuDown  = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuDown'

else:
  fakeW_EleUp       = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lElUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_EleDown     = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lElDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_MuUp        = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lMuUp       / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_MuDown      = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lMuDown     / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_statEleUp   = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatElUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_statEleDown = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatElDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_statMuUp    = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatMuUp   / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'
  fakeW_statMuDown  = '( fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'lstatMuDown / fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l )'

nuisances['fake_syst_wh3l']  = {
               'name'  : 'fake_syst_wh3l',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake' : '1.30',
                             },
}

nuisances['fake_ele']  = {
                'name'  : 'fake_ele_wh3l',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_EleUp , fakeW_EleDown ],
                             },
}

nuisances['fake_ele_stat']  = {
                'name'  : 'fake_ele_stat_wh3l',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'      : [ fakeW_statEleUp , fakeW_statEleDown ]
                             },
}

nuisances['fake_mu']  = {
                'name'  : 'fake_mu_wh3l',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_MuUp , fakeW_MuDown ],
                             },
}

nuisances['fake_mu_stat']  = {
                'name'  : 'fake_mu_stat_wh3l',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_statMuUp , fakeW_statMuDown ]
                             },
}

###### B-tagger

# nuisances['btagbc']  = {
                # 'name'  : 'btag_heavy',
                # 'kind'  : 'weight',
               # 'type'  : 'shape',
                # 'samples'  : {
                   # ' WW     ' : [ '(' +bSF+ '_bc_up)/(' +bSF+ ')' , '(' +bSF+ '_bc_down)/(' +bSF+ ')' ],
                   # ' VVV    ' : [ '(' +bSF+ '_bc_up)/(' +bSF+ ')' , '(' +bSF+ '_bc_down)/(' +bSF+ ')' ],
                   # ' WZ     ' : [ '(' +bSF+ '_bc_up)/(' +bSF+ ')' , '(' +bSF+ '_bc_down)/(' +bSF+ ')' ],
                   # ' ZZ     ' : [ '(' +bSF+ '_bc_up)/(' +bSF+ ')' , '(' +bSF+ '_bc_down)/(' +bSF+ ')' ],
                   # ' Vg     ' : [ '(' +bSF+ '_bc_up)/(' +bSF+ ')' , '(' +bSF+ '_bc_down)/(' +bSF+ ')' ],
                   # ' WH_hww ' : [ '(' +bSF+ '_bc_up)/(' +bSF+ ')' , '(' +bSF+ '_bc_down)/(' +bSF+ ')' ],
                   # ' WH_htt ' : [ '(' +bSF+ '_bc_up)/(' +bSF+ ')' , '(' +bSF+ '_bc_down)/(' +bSF+ ')' ],
                # }
# }

# nuisances['btagudsg']  = {
                # 'name'  : 'btag_light',
                # 'kind'  : 'weight',
                # 'type'  : 'shape',
                # 'samples'  : {
                   # ' VVV    ' : [ '(' +bSF+ '_udsg_up)/(' +bSF+ ')' , '(' +bSF+ '_udsg_down)/(' +bSF+ ')' ],
                   # ' WZ     ' : [ '(' +bSF+ '_udsg_up)/(' +bSF+ ')' , '(' +bSF+ '_udsg_down)/(' +bSF+ ')' ],
                   # ' ZZ     ' : [ '(' +bSF+ '_udsg_up)/(' +bSF+ ')' , '(' +bSF+ '_udsg_down)/(' +bSF+ ')' ],
                   # ' WW     ' : [ '(' +bSF+ '_udsg_up)/(' +bSF+ ')' , '(' +bSF+ '_udsg_down)/(' +bSF+ ')' ],
                   # ' Vg     ' : [ '(' +bSF+ '_udsg_up)/(' +bSF+ ')' , '(' +bSF+ '_udsg_down)/(' +bSF+ ')' ],
                   # ' WH_hww ' : [ '(' +bSF+ '_udsg_up)/(' +bSF+ ')' , '(' +bSF+ '_udsg_down)/(' +bSF+ ')' ],
                   # ' WH_htt ' : [ '(' +bSF+ '_udsg_up)/(' +bSF+ ')' , '(' +bSF+ '_udsg_down)/(' +bSF+ ')' ],
                # }
# }

# #### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_'+Nlep+'l_u)/(TriggerEffWeight_'+Nlep+'l))*(TriggerEffWeight_'+Nlep+'l>0.02) + (TriggerEffWeight_'+Nlep+'l<=0.02)', '(TriggerEffWeight_'+Nlep+'l_d)/(TriggerEffWeight_'+Nlep+'l)']

# if   Nlep == '2' : trig_syst = ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']
# elif Nlep == '3' : trig_syst = ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)']
# # !!!!! We don't have the trigger formula implemented for 4l !!!! -> Use 3l but not correct
# elif Nlep == '4' : trig_syst = ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)']

nuisances['trigg_wh3l']  = {
                'name'  : 'hww_trigger_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'VVV'     : trig_syst ,
                   'WZ'      : trig_syst ,
                   'ZZ'      : trig_syst ,
                   'WW'      : trig_syst ,
                   'Vg'      : trig_syst ,
                   'WH_hww'  : trig_syst ,
                   'WH_htt'  : trig_syst ,
                },
}

# ##### Electron Efficiency and energy scale
id_syst_ele = [ 'LepSF'+Nlep+'l__ele_'+eleWP+'__Up' , 'LepSF'+Nlep+'l__ele_'+eleWP+'__Do' ]

nuisances['eff_e_wh3l']  = {
                'name'  : 'eff_e_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'VVV'     : id_syst_ele ,
                   'WZ'      : id_syst_ele ,
                   'ZZ'      : id_syst_ele ,
                   'WW'      : id_syst_ele ,
                   'Vg'      : id_syst_ele ,
                   'WH_hww'  : id_syst_ele ,
                   'WH_htt'  : id_syst_ele ,
                },
}
nuisances['electronpt_wh3l']  = {
                'name'  : 'scale_e_2016',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW'     : ['1', '1'],
                   'WZ'     : ['1', '1'],
                   'ZZ'     : ['1', '1'],
                   'VVV'    : ['1', '1'],
                   'Vg'     : ['1', '1'],
                   'WH_hww' : ['1', '1'],
                   'WH_htt' : ['1', '1'],
                 },
                'folderUp'   : xrootdPath+treeBaseDir+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016__ElepTup',
                'folderDown' : xrootdPath+treeBaseDir+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016__ElepTdo',
}


# elePtCor_Syst_wh3l = [ 'electron_ptW_'+Nlep+'l_Up / electron_ptW_'+Nlep+'l', 'electron_ptW_'+Nlep+'l_Down / electron_ptW_'+Nlep+'l']
# nuisances['elePtCor']  = {
                # 'name'  : 'hww_elePtCor',
                # 'kind'  : 'weight',
                # 'type'  : 'shape',
                # 'samples'  : {
                   # 'WW'         : elePtCor_Syst_wh3l ,
                   # 'WZ'         : elePtCor_Syst_wh3l ,
                   # 'VVV'        : elePtCor_Syst_wh3l ,
                   # 'Vg'         : elePtCor_Syst_wh3l ,
                   # 'ZZ'         : elePtCor_Syst_wh3l ,
                   # 'WH_hww'     : elePtCor_Syst_wh3l ,
                   # 'WH_htt'     : elePtCor_Syst_wh3l ,
                # }
# }

# eleEtaCor_Syst_wh3l = [ 'electron_etaW_'+Nlep+'l_Up / electron_etaW_'+Nlep+'l', 'electron_etaW_'+Nlep+'l_Down / electron_etaW_'+Nlep+'l']
# nuisances['eleEtaCor']  = {
                # 'name'  : 'hww_eleEtaCor',
                # 'kind'  : 'weight',
                # 'type'  : 'shape',
                # 'samples'  : {
                   # 'WW'         : eleEtaCor_Syst_wh3l ,
                   # 'WZ'         : eleEtaCor_Syst_wh3l ,
                   # 'ZZ'         : eleEtaCor_Syst_wh3l ,
                   # 'VVV'        : eleEtaCor_Syst_wh3l ,
                   # 'Vg'         : eleEtaCor_Syst_wh3l ,
                   # 'WH_hww'     : eleEtaCor_Syst_wh3l ,
                   # 'WH_htt'      : eleEtaCor_Syst_wh3l ,
                # }
# }

# ###### Muon Efficiency and energy scale
id_syst_mu = [ 'LepSF'+Nlep+'l__mu_'+muWP+'__Up' , 'LepSF'+Nlep+'l__mu_'+muWP+'__Do' ]

nuisances['eff_m_wh3l']  = {
                'name'  : 'eff_m_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'VVV'     : id_syst_mu ,
                   'WZ'      : id_syst_mu ,
                   'ZZ'      : id_syst_mu ,
                   'WW'      : id_syst_mu ,
                   'Vg'      : id_syst_mu ,
                   'WH_hww'  : id_syst_mu ,
                   'WH_htt'   : id_syst_mu ,
                },
}
nuisances['muonpt_wh3l']  = {
                'name'  : 'scale_m_2016',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW'     : ['1', '1'],
                   'WZ'     : ['1', '1'],
                   'ZZ'     : ['1', '1'],
                   'VVV'    : ['1', '1'],
                   'Vg'     : ['1', '1'],
                   'WH_hww' : ['1', '1'],
                   'WH_htt' : ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016__MupTup',
                'folderDown' : xrootdPath+treeBaseDir+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016__MupTdo',
}

# ###### Jet energy scale

nuisances['jes_wh3l']  = {
                'name'  : 'scale_j_2016',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW'     : ['1', '1'],
                   'WZ'     : ['1', '1'],
                   'ZZ'     : ['1', '1'],
                   'VVV'    : ['1', '1'],
                   'Vg'     : ['1', '1'],
                   'WH_hww' : ['1', '1'],
                   'WH_htt' : ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016__JESup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016__JESdo'+skim,
}


# ##### MET energy scale

nuisances['met_wh3l']  = {
                'name'  : 'scale_met_2016',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW'     : ['1', '1'],
                   'WZ'     : ['1', '1'],
                   'ZZ'     : ['1', '1'],
                   'VVV'    : ['1', '1'],
                   'Vg'     : ['1', '1'],
                   'WH_hww' : ['1', '1'],
                   'WH_htt' : ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016__METup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Summer16_102X_nAODv4_Full2016v4/MCl1loose2016__MCCorr2016__l2loose__l2tightOR2016__METdo'+skim,
}


# # Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {}
             }

