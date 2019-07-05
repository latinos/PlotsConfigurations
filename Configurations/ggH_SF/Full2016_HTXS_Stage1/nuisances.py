
# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py 

import os

if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

sampleNames = []
for cat in HTXSStage1Categories:
  if 'GG2H_' in cat:
    sampleNames.append(cat.replace('GG2H','ggH_hww'))
    sampleNames.append(cat.replace('GG2H','ggH_htt'))
  elif 'QQ2HQQ_' in cat:
    sampleNames.append(cat.replace('QQ2HQQ','qqH_hww'))
    sampleNames.append(cat.replace('QQ2HQQ','qqH_htt'))
    sampleNames.append(cat.replace('QQ2HQQ','WH_had_hww'))
    sampleNames.append(cat.replace('QQ2HQQ','WH_had_htt'))
    sampleNames.append(cat.replace('QQ2HQQ','ZH_had_hww'))
    sampleNames.append(cat.replace('QQ2HQQ','ZH_had_htt'))
  elif 'QQ2HLNU_' in cat:
    sampleNames.append(cat.replace('QQ2HLNU','WH_lep_hww'))
    sampleNames.append(cat.replace('QQ2HLNU','WH_lep_htt'))
  elif 'QQ2HLL_' in cat:
    sampleNames.append(cat.replace('QQ2HLL','ZH_lep_hww'))
    sampleNames.append(cat.replace('QQ2HLL','ZH_lep_htt'))
  elif 'GG2HLL_' in cat:
    sampleNames.append(cat.replace('GG2HLL','ggZH_lep_hww'))
  elif 'TTH' in cat:
    sampleNames.append(cat.replace('TTH','ttH_hww'))
  elif 'BBH' in cat:
    sampleNames.append(cat.replace('BBH','bbH_hww'))


################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV',
               'samples'  : {
                   #'DY'       : '1.025',  ## data driven    
                   #'top'      : '1.025',  ## data driven  
                   #'WW'       : '1.025',  ## data driven  
                   'ggWW'     : '1.025',
                   'Vg'       : '1.025',
                   'VgS'      : '1.025',
                   'WZgS_L'   : '1.025',
                   'WZgS_H'   : '1.025',
                   'VZ'       : '1.025',
                   'VVV'      : '1.025',
                   },
               'type'  : 'lnN',
              }

for name in sampleNames:
  nuisances['lumi']['samples'].update({name:'1.025'})

#### FAKES

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

#nuisances['fake_syst']  = {
#               'name'  : 'fake_syst',
#               'type'  : 'lnN',
#               'samples'  : {
#                             'Fake' : '1.30',
#                             },
#}

nuisances['fake_syst_ee']  = {
               'name'  : 'CMS_hwwee_fake_syst',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_ee' : '1.30',
                             },
               'cuts'  : [
                 'hww2l2v_13TeV_0jee',
                 'hww2l2v_13TeV_0jee_pt2ge20',
                 'hww2l2v_13TeV_0jee_pt2lt20',
                 'hww2l2v_13TeV_WW_0jee',
                 'hww2l2v_13TeV_top_0jee',
                 'hww2l2v_13TeV_1jee',
                 'hww2l2v_13TeV_1jee_pt2ge20',
                 'hww2l2v_13TeV_1jee_pt2lt20',
                 'hww2l2v_13TeV_WW_1jee',
                 'hww2l2v_13TeV_top_1jsf',
                         ]
}

nuisances['fake_syst_mm']  = {
               'name'  : 'CMS_hwwmm_fake_syst',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_mm' : '1.30',
                             },
               'cuts'  : [
                 'hww2l2v_13TeV_0jmm',
                 'hww2l2v_13TeV_0jmm_pt2ge20',
                 'hww2l2v_13TeV_0jmm_pt2lt20',
                 'hww2l2v_13TeV_WW_0jmm',
                 'hww2l2v_13TeV_top_0jmm',
                 'hww2l2v_13TeV_1jmm',
                 'hww2l2v_13TeV_1jmm_pt2ge20',
                 'hww2l2v_13TeV_1jmm_pt2lt20',
                 'hww2l2v_13TeV_WW_1jmm',
                 'hww2l2v_13TeV_top_1jsf',
                         ]
}


nuisances['fake_ele']  = {
                'name'  : 'hww_fake_ele',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_EleUp , fakeW_EleDown ],
                              'Fake_ee'     : [ fakeW_EleUp , fakeW_EleDown ],
                             },
               'cuts'  : [
                 'hww2l2v_13TeV_0jee',
                 'hww2l2v_13TeV_0jee_pt2ge20',
                 'hww2l2v_13TeV_0jee_pt2lt20',
                 'hww2l2v_13TeV_WW_0jee',
                 'hww2l2v_13TeV_top_0jee',
                 'hww2l2v_13TeV_1jee',
                 'hww2l2v_13TeV_1jee_pt2ge20',
                 'hww2l2v_13TeV_1jee_pt2lt20',
                 'hww2l2v_13TeV_WW_1jee',
                 'hww2l2v_13TeV_top_1jsf',
                         ]

}

nuisances['fake_ele_stat']  = {
                'name'  : 'hww_fake_ele_stat',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                              'Fake_ee'      : [ fakeW_statEleUp , fakeW_statEleDown ]
                             },
               'cuts'  : [
                 'hww2l2v_13TeV_0jee',
                 'hww2l2v_13TeV_0jee_pt2ge20',
                 'hww2l2v_13TeV_0jee_pt2lt20',
                 'hww2l2v_13TeV_WW_0jee',
                 'hww2l2v_13TeV_top_0jee',
                 'hww2l2v_13TeV_1jee',
                 'hww2l2v_13TeV_1jee_pt2ge20',
                 'hww2l2v_13TeV_1jee_pt2lt20',
                 'hww2l2v_13TeV_WW_1jee',
                 'hww2l2v_13TeV_top_1jsf',
                         ]
}

nuisances['fake_mu']  = {
                'name'  : 'hww_fake_mu',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_MuUp , fakeW_MuDown ],
                              'Fake_mm'     : [ fakeW_MuUp , fakeW_MuDown ],
                             },
               'cuts'  : [
                 'hww2l2v_13TeV_0jmm',
                 'hww2l2v_13TeV_0jmm_pt2ge20',
                 'hww2l2v_13TeV_0jmm_pt2lt20',
                 'hww2l2v_13TeV_WW_0jmm',
                 'hww2l2v_13TeV_top_0jmm',
                 'hww2l2v_13TeV_1jmm',
                 'hww2l2v_13TeV_1jmm_pt2ge20',
                 'hww2l2v_13TeV_1jmm_pt2lt20',
                 'hww2l2v_13TeV_WW_1jmm',
                 'hww2l2v_13TeV_top_1jsf',
                         ]

}


nuisances['fake_mu_stat']  = {
                'name'  : 'hww_fake_mu_stat',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                              'Fake_mm'     : [ fakeW_statMuUp , fakeW_statMuDown ]
                             },
               'cuts'  : [
                 'hww2l2v_13TeV_0jmm',
                 'hww2l2v_13TeV_0jmm_pt2ge20',
                 'hww2l2v_13TeV_0jmm_pt2lt20',
                 'hww2l2v_13TeV_WW_0jmm',
                 'hww2l2v_13TeV_top_0jmm',
                 'hww2l2v_13TeV_1jmm',
                 'hww2l2v_13TeV_1jmm_pt2ge20',
                 'hww2l2v_13TeV_1jmm_pt2lt20',
                 'hww2l2v_13TeV_WW_1jmm',
                 'hww2l2v_13TeV_top_1jsf',
                         ]
}

##### B-tagger
# Here we keep top and WW even if data driven because 0f x-talk between both regions

nuisances['btagbc']  = {
                'name'  : 'btag_heavy',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   #'DY'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],  # DATA Driven
                   'WW'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'ggWW'    : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'VVV'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'VZ'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WZgS_L'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WZgS_H'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'top'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'Vg'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'VgS'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                }
}

for name in sampleNames:
  nuisances['btagbc']['samples'].update({name:['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')']})

nuisances['btagudsg']  = {
                'name'  : 'btag_light',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   #'DY'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'], # DATA Driven
                   'VVV'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'VZ'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WZgS_L'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WZgS_H'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WW'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'ggWW'    : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'top'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'Vg'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'VgS'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                }
}
for name in sampleNames:
  nuisances['btagudsg']['samples'].update({name:['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')']})

##### Trigger Efficiency

if   Nlep == '2' : trig_syst = ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']
elif Nlep == '3' : trig_syst = ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)']
elif Nlep == '4' : trig_syst = ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW4l_Down)/(effTrigW4l)']

nuisances['trigg']  = {
                'name'  : 'hww_trigger',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   #'DY'      : trig_syst , # Data driven
                   'VVV'     : trig_syst ,
                   'VZ'      : trig_syst ,
                   'WZgS_L'  : trig_syst ,
                   'WZgS_H'  : trig_syst ,
                   'ggWW'    : trig_syst , 
                   #'WW'      : trig_syst , # Data driven
                   #'top'     : trig_syst , # Data driven
                   'Vg'      : trig_syst ,
                   'VgS'     : trig_syst ,
                },
}
for name in sampleNames:
  nuisances['trigg']['samples'].update({name : trig_syst})

##### Electron Efficiency and energy scale

id_syst_ele = [ 'LepSF'+Nlep+'l__ele_'+eleWP+'__Up' , 'LepSF'+Nlep+'l__ele_'+eleWP+'__Do' ]

nuisances['eff_e']  = {
                'name'  : 'eff_e',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   #'DY'      : id_syst_ele , # DATA Driven
                   'VVV'     : id_syst_ele ,
                   'VZ'      : id_syst_ele ,
                   'WZgS_L'  : id_syst_ele ,
                   'WZgS_H'  : id_syst_ele ,
                   'ggWW'    : id_syst_ele ,
                   #'WW'      : id_syst_ele , # Data driven
                   #'top'     : id_syst_ele , # Data driven
                   'Vg'      : id_syst_ele ,
                   'VgS'     : id_syst_ele ,
                },
}
for name in sampleNames:
  nuisances['eff_e']['samples'].update({name : id_syst_ele})

nuisances['electronpt']  = {
                'name'  : 'scale_e',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   #'DY' :  ['1', '1'], # Data driven
                   'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'], # Data driven
                   #'top' : ['1', '1'], # Data driven
                   'VZ' :  ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                 },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTdo'+skim,
}
for name in sampleNames:
  nuisances['electronpt']['samples'].update({name : ['1', '1']})

elePtCor_Syst = [ 'electron_ptW_'+Nlep+'l_Up / electron_ptW_'+Nlep+'l', 'electron_ptW_'+Nlep+'l_Down / electron_ptW_'+Nlep+'l']

nuisances['elePtCor']  = {
                'name'  : 'hww_elePtCor',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   #'DY'         : elePtCor_Syst , #Data driven
                   'ggWW'       : elePtCor_Syst ,
                   #'WW'         : elePtCor_Syst , #Data driven
                   #'top'        : elePtCor_Syst , #Data driven
                   'VZ'         : elePtCor_Syst ,
                   'WZgS_L'     : elePtCor_Syst ,
                   'WZgS_H'     : elePtCor_Syst ,
                   'VVV'        : elePtCor_Syst ,
                   'Vg'         : elePtCor_Syst ,
                   'VgS'        : elePtCor_Syst ,
                }
}
for name in sampleNames:
  nuisances['elePtCor']['samples'].update({name : elePtCor_Syst})

eleEtaCor_Syst = [ 'electron_etaW_'+Nlep+'l_Up / electron_etaW_'+Nlep+'l', 'electron_etaW_'+Nlep+'l_Down / electron_etaW_'+Nlep+'l']

nuisances['eleEtaCor']  = {
                'name'  : 'hww_eleEtaCor',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   #'DY'         : eleEtaCor_Syst , #Data driven
                   'ggWW'       : eleEtaCor_Syst ,
                   #'WW'         : eleEtaCor_Syst , #Data driven
                   #'top'        : eleEtaCor_Syst , #Data driven
                   'VZ'         : eleEtaCor_Syst ,
                   'WZgS_L'     : eleEtaCor_Syst ,
                   'WZgS_H'     : eleEtaCor_Syst ,
                   'VVV'        : eleEtaCor_Syst ,
                   'Vg'         : eleEtaCor_Syst ,
                   'VgS'        : eleEtaCor_Syst ,
                }
}
for name in sampleNames:
  nuisances['eleEtaCor']['samples'].update({name : eleEtaCor_Syst})

##### Muon Efficiency and energy scale

id_syst_mu = [ 'LepSF'+Nlep+'l__mu_'+muWP+'__Up' , 'LepSF'+Nlep+'l__mu_'+muWP+'__Do' ]

nuisances['eff_m']  = {
                'name'  : 'eff_m',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   #'DY'      : id_syst_mu , # Data driven
                   'VVV'     : id_syst_mu ,
                   'VZ'      : id_syst_mu ,
                   'WZgS_L'  : id_syst_mu ,
                   'WZgS_H'  : id_syst_mu ,
                   'ggWW'    : id_syst_mu ,
                   #'WW'      : id_syst_mu , # Data driven
                   #'top'     : id_syst_mu , # Data driven
                   'Vg'      : id_syst_mu ,
                   'VgS'     : id_syst_mu ,
                },
}
for name in sampleNames:
  nuisances['eff_m']['samples'].update({name : id_syst_mu})

nuisances['muonpt']  = {
                'name'  : 'scale_m',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'], # Data driven
                   #'DY' :  ['1', '1'], # Data driven
                   #'top' : ['1', '1'], # Data driven
                   'VZ' :  ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTdo'+skim,
}
for name in sampleNames:
  nuisances['muonpt']['samples'].update({name : ['1', '1']})

##### Jet energy scale

nuisances['jes']  = {
                'name'  : 'scale_j',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'], # Data driven
                   #'DY' :  ['1', '1'], # Data driven
                   #'top' : ['1', '1'], # Data driven
                   'VZ' :  ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__JESup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__JESdo'+skim,
}
for name in sampleNames:
  nuisances['jes']['samples'].update({name : ['1', '1']})

##### MET energy scale

nuisances['met']  = {
                'name'  : 'scale_met',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   #'WW' :  ['1', '1'], # Data driven
                   #'DY' :  ['1', '1'], # Data driven
                   #'top' : ['1', '1'], # Data driven
                   'VZ' :  ['1', '1'],
                   'WZgS_L'  : ['1', '1'],
                   'WZgS_H'  : ['1', '1'],
                   'VVV' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__METup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__METdo'+skim,
}
for name in sampleNames:
  nuisances['met']['samples'].update({name : ['1', '1']})        
 
#
# PS and UE
#

nuisances['PS']  = {
                'name'  : 'PS',
                'skipCMS'  : 1,
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                  'WW'          : ['0.91922', '1.'], #
                  'ggH_hww'     : ['0.91036', '1.'], # These numbers are used to normalize the PS variation to the same integral as the nominal after the wwSel skim
                  'ggH_fwd_hww' : ['0.91036', '1.'], # These numbers are used to normalize the PS variation to the same integral as the nominal after the wwSel skim
                  'qqH_hww'     : ['0.92010', '1.'], #
                  'qqH_fwd_hww' : ['0.92010', '1.'], #
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PS'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC'+skim,
                }
for name in sampleNames:
  if 'ggH_hww' in name:
    nuisances['PS']['samples'].update({name : ['0.91036', '1.']})
  elif 'qqH_hww' in name:
    nuisances['PS']['samples'].update({name : ['0.92010', '1.']})

nuisances['UE']  = {
                'name'  : 'UE',
                'skipCMS'  : 1,
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                  'WW'          : ['1.0336', '0.9863'], #
                  'ggH_hww'     : ['1.0019', '0.9254'], # These numbers are used to normalize the UE up/down variations to the same integral as the nominal after the wwSel skim
                  'ggH_fwd_hww' : ['1.0019', '0.9254'], # These numbers are used to normalize the UE up/down variations to the same integral as the nominal after the wwSel skim
                  'qqH_hww'     : ['1.0181', '0.9877'], #
                  'qqH_fwd_hww' : ['1.0181', '0.9877'], #
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEdo'+skim,
                }
for name in sampleNames:
  if 'ggH_hww' in name:
    nuisances['UE']['samples'].update({name : ['1.0019', '1.0211']})
  elif 'qqH_hww' in name:
    nuisances['PS']['samples'].update({name : ['1.0181', '0.9992']})
                
#
#
# Theory uncertainty for ggH
#
#
#   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
#
#   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools
#
#

nuisances['ggH_mu']  = {
                'name'  : 'THU_ggH_Mu',
                'skipCMS'  : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'       : ['ggH_mu', '1+(1.-ggH_mu)'],
                   'ggH_fwd_hww'   : ['ggH_mu', '1+(1.-ggH_mu)'],
                   'ggH_htt'       : ['ggH_mu', '1+(1.-ggH_mu)'],
                   'ggH_fwd_htt'   : ['ggH_mu', '1+(1.-ggH_mu)'],
                   },
                }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['ggH_mu']['samples'].update({name : ['ggH_mu', '1+(1.-ggH_mu)']})

nuisances['ggH_res']  = {
                'name'  : 'THU_ggH_Res',
                'skipCMS'  : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'       : ['ggH_res', '1+(1.-ggH_res)'],
                   'ggH_fwd_hww'   : ['ggH_res', '1+(1.-ggH_res)'],
                   'ggH_htt'       : ['ggH_res', '1+(1.-ggH_res)'],
                   'ggH_fwd_htt'   : ['ggH_res', '1+(1.-ggH_res)'],
                   },
                }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['ggH_res']['samples'].update({name : ['ggH_res', '1+(1.-ggH_res)']})

nuisances['ggH_mig01']  = {
                'name'  : 'THU_ggH_Mig01',
                'skipCMS'  : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'       : ['ggH_mig01', '1+(1.-ggH_mig01)'],
                   'ggH_fwd_hww'   : ['ggH_mig01', '1+(1.-ggH_mig01)'],
                   'ggH_htt'       : ['ggH_mig01', '1+(1.-ggH_mig01)'],
                   'ggH_fwd_htt'   : ['ggH_mig01', '1+(1.-ggH_mig01)'],
                   },
                }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['ggH_mig01']['samples'].update({name : ['ggH_mig01', '1+(1.-ggH_mig01)']})

nuisances['ggH_mig12']  = {
                'name'  : 'THU_ggH_Mig12',
                'skipCMS'  : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'       : ['ggH_mig12', '1+(1.-ggH_mig12)'],
                   'ggH_fwd_hww'   : ['ggH_mig12', '1+(1.-ggH_mig12)'],
                   'ggH_htt'       : ['ggH_mig12', '1+(1.-ggH_mig12)'],
                   'ggH_fwd_htt'   : ['ggH_mig12', '1+(1.-ggH_mig12)'],
                   },
                }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['ggH_mig12']['samples'].update({name : ['ggH_mig12', '1+(1.-ggH_mig12)']})

nuisances['ggH_pT60']  = {
                'name'  : 'THU_ggH_PT60',
                'skipCMS'  : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'       : ['ggH_pT60', '1+(1.-ggH_pT60)'],
                   'ggH_fwd_hww'   : ['ggH_pT60', '1+(1.-ggH_pT60)'],
                   'ggH_htt'       : ['ggH_pT60', '1+(1.-ggH_pT60)'],
                   'ggH_fwd_htt'   : ['ggH_pT60', '1+(1.-ggH_pT60)'],
                   },
                }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['ggH_pT60']['samples'].update({name : ['ggH_pT60', '1+(1.-ggH_pT60)']})

nuisances['ggH_pT120']  = {
                'name'  : 'THU_ggH_PT120',
                'skipCMS'  : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'       : ['ggH_pT120', '1+(1.-ggH_pT120)'],
                   'ggH_fwd_hww'   : ['ggH_pT120', '1+(1.-ggH_pT120)'],
                   'ggH_htt'       : ['ggH_pT120', '1+(1.-ggH_pT120)'],
                   'ggH_fwd_htt'   : ['ggH_pT120', '1+(1.-ggH_pT120)'],
                   },
                }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['ggH_pT120']['samples'].update({name : ['ggH_pT120', '1+(1.-ggH_pT120)']})

nuisances['ggH_VBF2j']  = {
                'name'  : 'THU_ggH_VBF2j',
                'skipCMS'  : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'       : ['ggH_VBF2j', '1+(1.-ggH_VBF2j)'],
                   'ggH_fwd_hww'   : ['ggH_VBF2j', '1+(1.-ggH_VBF2j)'],
                   'ggH_htt'       : ['ggH_VBF2j', '1+(1.-ggH_VBF2j)'],
                   'ggH_fwd_htt'   : ['ggH_VBF2j', '1+(1.-ggH_VBF2j)'],
                   },
                }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['ggH_VBF2j']['samples'].update({name : ['ggH_VBF2j', '1+(1.-ggH_VBF2j)']})

nuisances['ggH_VBF3j']  = {
                'name'  : 'THU_ggH_VBF3j',
                'skipCMS'  : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'       : ['ggH_VBF3j', '1+(1.-ggH_VBF3j)'],
                   'ggH_fwd_hww'   : ['ggH_VBF3j', '1+(1.-ggH_VBF3j)'],
                   'ggH_htt'       : ['ggH_VBF3j', '1+(1.-ggH_VBF3j)'],
                   'ggH_fwd_htt'   : ['ggH_VBF3j', '1+(1.-ggH_VBF3j)'],
                   },
                }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['ggH_VBF3j']['samples'].update({name : ['ggH_VBF3j', '1+(1.-ggH_VBF3j)']})

nuisances['ggH_qmtop']  = {
                'name'  : 'THU_ggH_qmtop',
                'skipCMS'  : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww'       : ['ggH_qmtop', '1+(1.-ggH_qmtop)'],
                   'ggH_fwd_hww'   : ['ggH_qmtop', '1+(1.-ggH_qmtop)'],
                   'ggH_htt'       : ['ggH_qmtop', '1+(1.-ggH_qmtop)'],
                   'ggH_fwd_htt'   : ['ggH_qmtop', '1+(1.-ggH_qmtop)'],
                   },
                }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['ggH_qmtop']['samples'].update({name : ['ggH_qmtop', '1+(1.-ggH_qmtop)']})

nuisances['QCDscale_CRSR_accept_top']  = {
               'name'  : 'CMS_hww_QCDscale_CRSR_accept_top', 
               'type'  : 'lnN',
               'samples'  : {
                   'top' : '1.01',
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_top_0jee',
                 'hww2l2v_13TeV_top_0jmm',
                 'hww2l2v_13TeV_top_1jsf',
                ]               
              }


nuisances['QCDscale_VZ']  = {
               'name'  : 'QCDscale_VZ', 
               'samples'  : {
                   'VZ' : '1.03',
                   },
               'type'  : 'lnN'
              }

#### QCD scale uncertainties for Higgs signals other than ggH

from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()

nuisances['QCDscale_ggH']  = {
               'name'  : 'QCDscale_ggH', 
               'samples'  : {
                   # QCD scale ggH is already in jet bin uncertainty !
                   #'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm'),
                   #'ggH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }


nuisances['QCDscale_qqH']  = {
               'name'  : 'QCDscale_qqH', 
               'samples'  : {
                   'qqH_hww'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
                   'qqH_fwd_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
                   'qqH_htt'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
                   'qqH_fwd_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }
for name in sampleNames:
  if 'qqH' in name:
    nuisances['QCDscale_qqH']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm')})

nuisances['QCDscale_VH']  = {
               'name'  : 'QCDscale_VH', 
               'samples'  : {
                   'WH_hww'         : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'WH_had_hww'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'WH_had_fwd_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'WH_lep_hww'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'WH_lep_fwd_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   #
                   'WH_htt'         : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'WH_had_htt'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'WH_had_fwd_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'WH_lep_htt'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'WH_lep_fwd_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   # 
                   'ZH_hww'         : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   'ZH_had_hww'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   'ZH_had_fwd_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   'ZH_lep_hww'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   'ZH_lep_fwd_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   # 
                   'ZH_htt'         : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   'ZH_had_htt'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   'ZH_had_fwd_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   'ZH_lep_htt'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   'ZH_lep_fwd_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }
for name in sampleNames:
  if 'WH' in name:
    nuisances['QCDscale_VH']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm')})
  elif 'ZH' in name:
    nuisances['QCDscale_VH']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm')})

nuisances['QCDscale_ggZH']  = {
               'name'  : 'QCDscale_ggZH', 
               'samples'  : {
                   'ggZH_hww'        : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm'),                  
                   'ggZH_lep_hww'    : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm'),                  
                   'ggZH_lep_fwd_hww': HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm'),                  
                   },
               'type'  : 'lnN',
              }
for name in sampleNames:
  if 'ggZH' in name:
    nuisances['QCDscale_ggZH']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm')})

nuisances['QCDscale_bbH']  = {
               'name'  : 'QCDscale_bbH',
               'samples'  : {
                   'bbH_hww'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','scale','sm'),
                   'bbH_fwd_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }
for name in sampleNames:
  if 'bbH' in name:
    nuisances['QCDscale_bbH']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','scale','sm')})

nuisances['QCDscale_ttH']  = {
               'name'  : 'QCDscale_ttH',
               'samples'  : {
                   'ttH_hww'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm'),
                   'ttH_fwd_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }
for name in sampleNames:
  if 'ttH' in name:
    nuisances['QCDscale_ttH']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm')})

nuisances['QCDscale_qqbar_ACCEPT']  = {
               'name'  : 'QCDscale_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   'VZ'      : '1.029',
                   #
                   'qqH_hww'     : '1.007',
                   'qqH_fwd_hww' : '1.007',
                   # 
                   'qqH_htt'     : '1.007',
                   'qqH_fwd_htt' : '1.007',
                   # 
                   'WH_hww'          : '1.05',
                   'WH_had_hww'      : '1.05',
                   'WH_had_fwd_hww'  : '1.05',
                   'WH_lep_hww'      : '1.05',
                   'WH_lep_fwd_hww'  : '1.05',
                   #
                   'WH_htt'          : '1.05',
                   'WH_had_htt'      : '1.05',
                   'WH_had_fwd_htt'  : '1.05',
                   'WH_lep_htt'      : '1.05',
                   'WH_lep_fwd_htt'  : '1.05',
                   # 
                   'ZH_hww'          : '1.04',
                   'ZH_had_hww'      : '1.04',
                   'ZH_had_fwd_hww'  : '1.04',
                   'ZH_lep_hww'      : '1.04',
                   'ZH_lep_fwd_hww'  : '1.04',
                   #
                   'ZH_htt'          : '1.04',
                   'ZH_had_htt'      : '1.04',
                   'ZH_had_fwd_htt'  : '1.04',
                   'ZH_lep_htt'      : '1.04',
                   'ZH_lep_fwd_htt'  : '1.04',
                   },
              }
for name in sampleNames:
  if 'qqH' in name:
    nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({name : '1.007'})
  elif 'WH' in name:
    nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({name : '1.05'})
  elif 'ZH' in name:
    nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({name : '1.04'})



nuisances['QCDscale_gg_ACCEPT']  = {
               'name'  : 'QCDscale_gg_ACCEPT',
               'samples'  : {
                   'ggWW'    : '1.027',
                   #
                   'ggH_hww'     : '1.027',
                   'ggH_fwd_hww' : '1.027',
                   # 
                   'ggH_htt'     : '1.027',
                   'ggH_fwd_htt' : '1.027',
                   #
                   'ggZH_hww'         : '1.027',
                   'ggZH_lep_hww'     : '1.027',
                   'ggZH_lep_fwd_hww' : '1.027',
                   },
               'type'  : 'lnN',
              }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['QCDscale_gg_ACCEPT']['samples'].update({name : '1.027'})
  elif 'ggZH' in name:
    nuisances['QCDscale_gg_ACCEPT']['samples'].update({name : '1.027'})


###### pdf uncertainty

nuisances['pdf_Higgs_gg']  = {
               'name'  : 'pdf_Higgs_gg', 
               'samples'  : {
                   #'ggWW'    : '1.05',    # --> no, since absorbed into k-scale factor
                   'ggH_hww'          : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','pdf','sm'),
                   'ggH_fwd_hww'      : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','pdf','sm'),
                   #
                   'ggH_htt'          : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','pdf','sm'),
                   'ggH_fwd_htt'      : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','pdf','sm'),
                   #
                   'ggZH_hww'         : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm'),                   
                   'ggZH_lep_hww'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm'),                   
                   'ggZH_lep_fwd_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm'),                   
                   #
                   'bbH_hww'          : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH' ,'125.09','pdf','sm'),
                   'bbH_fwd_hww'      : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH' ,'125.09','pdf','sm'),
                   },
               'type'  : 'lnN',
              }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['pdf_Higgs_gg']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','pdf','sm')})
  elif 'ggZH' in name:
    nuisances['pdf_Higgs_gg']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH' ,'125.09','pdf','sm')})
  elif 'bbH' in name:
    nuisances['pdf_Higgs_gg']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH' ,'125.09','pdf','sm')})

nuisances['pdf_Higgs_ttH']  = {
               'name'  : 'pdf_Higgs_ttH',
               'samples'  : {
                   'ttH_hww'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH' ,'125.09','pdf','sm'),
                   'ttH_fwd_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH' ,'125.09','pdf','sm'),
                   },
               'type'  : 'lnN',
              }
for name in sampleNames:
  if 'ttH' in name:
    nuisances['pdf_Higgs_ttH']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH' ,'125.09','pdf','sm')})


nuisances['pdf_Higgs_qqbar']  = {
               'name'  : 'pdf_Higgs_qqbar', 
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm'),
                   'qqH_fwd_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm'),
                   'qqH_htt'     : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm'),
                   'qqH_fwd_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm'),
                   #
                   'WH_hww'          : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_had_hww'      : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_had_fwd_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_lep_hww'      : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_lep_fwd_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   #
                   'WH_htt'          : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_had_htt'      : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_had_fwd_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_lep_htt'      : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_lep_fwd_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),      
                   # 
                   'ZH_hww'          : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   'ZH_had_hww'      : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   'ZH_had_fwd_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   'ZH_lep_hww'      : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   'ZH_lep_fwd_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   # 
                   'ZH_htt'          : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   'ZH_had_htt'      : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   'ZH_had_fwd_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   'ZH_lep_htt'      : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   'ZH_lep_fwd_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm'),
                   },
              }
for name in sampleNames:
  if 'qqH' in name:
    nuisances['pdf_Higgs_qqbar']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH' ,'125.09','pdf','sm')})
  elif 'WH' in name:
    nuisances['pdf_Higgs_qqbar']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm')})
  elif 'ZH' in name:
    nuisances['pdf_Higgs_qqbar']['samples'].update({name : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH' ,'125.09','pdf','sm')})

nuisances['pdf_qqbar']  = {
               'name'  : 'pdf_qqbar',
               'type'  : 'lnN',
               'samples'  : {
                   'VZ'      : '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
                   },
              }


nuisances['pdf_Higgs_gg_ACCEPT']  = {
               'name'  : 'pdf_Higgs_gg_ACCEPT',
               'samples'  : {
                   'ggH_hww'     : '1.005',
                   'ggH_fwd_hww' : '1.005',
                   # 
                   'ggH_htt'     : '1.005',
                   'ggH_fwd_htt' : '1.005',
                   # 
                   'ggZH_hww'         : '1.005',
                   'ggZH_lep_hww'     : '1.005',
                   'ggZH_lep_fwd_hww' : '1.005',
                   },
               'type'  : 'lnN',
              }
for name in sampleNames:
  if 'ggH' in name:
    nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({name : '1.005'})
  elif 'ggZH' in name:
    nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({name : '1.005'})

nuisances['pdf_gg_ACCEPT']  = {
               'name'  : 'pdf_gg_ACCEPT',
               'samples'  : {
                   'ggWW'    : '1.005',
                   },
               'type'  : 'lnN',
              }


nuisances['pdf_Higgs_qqbar_ACCEPT']  = {
               'name'  : 'pdf_Higgs_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'qqH_hww'     : '1.011',
                   'qqH_fwd_hww' : '1.011',
                   #
                   'qqH_htt' : '1.011',
                   'qqH_fwd_htt' : '1.011',
                   # 
                   'WH_hww'          : '1.007',
                   'WH_had_hww'      : '1.007',
                   'WH_had_fwd_hww'  : '1.007',
                   'WH_lep_hww'      : '1.007',
                   'WH_lep_fwd_hww'  : '1.007',
                   # 
                   'WH_htt'          : '1.007',
                   'WH_had_htt'      : '1.007',
                   'WH_had_fwd_htt'  : '1.007',
                   'WH_lep_htt'      : '1.007',
                   'WH_lep_fwd_htt'  : '1.007',
                   # 
                   'ZH_hww'          : '1.012',
                   'ZH_had_hww'      : '1.012',
                   'ZH_had_fwd_hww'  : '1.012',
                   'ZH_lep_hww'      : '1.012',
                   'ZH_lep_fwd_hww'  : '1.012',
                   #
                   'ZH_htt'          : '1.012',
                   'ZH_had_htt'      : '1.012',
                   'ZH_had_fwd_htt'  : '1.012',
                   'ZH_lep_htt'      : '1.012',
                   'ZH_lep_fwd_htt'  : '1.012', 
                   },
              }
for name in sampleNames:
  if 'qqH' in name:
    nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({name : '1.011'})
  elif 'WH' in name:
    nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({name : '1.007'})
  elif 'ZH' in name:
    nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({name : '1.012'})

nuisances['pdf_qqbar_ACCEPT']  = {
               'name'  : 'pdf_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'VZ'      : '1.005',
                   },
              }


# ggww and interference

nuisances['QCDscale_ggWW']  = {
               'name'  : 'QCDscale_ggWW',
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW' : '1.15',
                   },
              }

#  - WW shaping
nuisances['WWresum0j']  = {
                'name'  : 'WWresum0j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_0jee',
                 'hww2l2v_13TeV_0jee_pt2ge20',
                 'hww2l2v_13TeV_0jee_pt2lt20',
                 'hww2l2v_13TeV_WW_0jee',
                 'hww2l2v_13TeV_top_0jee',
                 'hww2l2v_13TeV_0jmm',
                 'hww2l2v_13TeV_0jmm_pt2ge20',
                 'hww2l2v_13TeV_0jmm_pt2lt20',
                 'hww2l2v_13TeV_WW_0jmm',
                 'hww2l2v_13TeV_top_0jmm',
#                 
                ]               
                
                }


nuisances['WWresum1j']  = {
                'name'  : 'WWresum1j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_1jee',
                 'hww2l2v_13TeV_1jee_pt2ge20',
                 'hww2l2v_13TeV_1jee_pt2lt20',
                 'hww2l2v_13TeV_WW_1jee',
                 'hww2l2v_13TeV_1jmm',
                 'hww2l2v_13TeV_1jmm_pt2ge20',
                 'hww2l2v_13TeV_1jmm_pt2lt20',
                 'hww2l2v_13TeV_WW_1jmm',
                 'hww2l2v_13TeV_top_1jsf',
#
                ]               
                }

nuisances['WWqscale0j']  = {
                'name'  : 'WWqscale0j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_0jee',
                 'hww2l2v_13TeV_0jee_pt2ge20',
                 'hww2l2v_13TeV_0jee_pt2lt20',
                 'hww2l2v_13TeV_WW_0jee',
                 'hww2l2v_13TeV_top_0jee',
                 'hww2l2v_13TeV_0jmm',
                 'hww2l2v_13TeV_0jmm_pt2ge20',
                 'hww2l2v_13TeV_0jmm_pt2lt20',
                 'hww2l2v_13TeV_WW_0jmm',
                 'hww2l2v_13TeV_top_0jmm',
#                 
                ] 
                }


nuisances['WWqscale1j']  = {
                'name'  : 'WWqscale1j',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   },
               'cuts'  : [
                 'hww2l2v_13TeV_1jee',
                 'hww2l2v_13TeV_1jee_pt2ge20',
                 'hww2l2v_13TeV_1jee_pt2lt20',
                 'hww2l2v_13TeV_WW_1jee',
                 'hww2l2v_13TeV_1jmm',
                 'hww2l2v_13TeV_1jmm_pt2ge20',
                 'hww2l2v_13TeV_1jmm_pt2lt20',
                 'hww2l2v_13TeV_WW_1jmm',
                 'hww2l2v_13TeV_top_1jsf',
#                 
                ] 
                }

nuisances['WgStarScale']  = {
               'name'  : 'CMS_hww_WgStarScale', 
               'type'  : 'lnN',
               'samples'  : {
                   'WgS' : '1.25',  
                   'VgS' : '1.25',  
                   'WZgS_L' : '1.25',  
                   },
                }

nuisances['WZScale'] = {
               'name'  : 'CMS_hww_WZScale',
               'type'  : 'lnN',
               'samples'  : {
                   'WZgS_H' : '1.16', 
                   },
                }
                
################################ DATA DRIVEN BACKGROUND UNCERTAINTIES  #################################

#### WW fit

nuisances['WWnorm0jsf']  = {
               'name'  : 'CMS_hww_WWnorm0jsf',
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                            'hww2l2v_13TeV_0jee',
                            'hww2l2v_13TeV_0jee_pt2ge20',
                            'hww2l2v_13TeV_0jee_pt2lt20',
                            'hww2l2v_13TeV_WW_0jee',
                            'hww2l2v_13TeV_top_0jee',
                            'hww2l2v_13TeV_0jmm',
                            'hww2l2v_13TeV_0jmm_pt2ge20',
                            'hww2l2v_13TeV_0jmm_pt2lt20',
                            'hww2l2v_13TeV_WW_0jmm',
                            'hww2l2v_13TeV_top_0jmm',
                         ],
              }

nuisances['WWnorm1jsf']  = {
               'name'  : 'CMS_hww_WWnorm1jsf',
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                            'hww2l2v_13TeV_1jee',
                            'hww2l2v_13TeV_1jee_pt2ge20',
                            'hww2l2v_13TeV_1jee_pt2lt20',
                            'hww2l2v_13TeV_WW_1jee',
                            'hww2l2v_13TeV_1jmm',
                            'hww2l2v_13TeV_1jmm_pt2ge20',
                            'hww2l2v_13TeV_1jmm_pt2lt20',
                            'hww2l2v_13TeV_WW_1jmm',
                            'hww2l2v_13TeV_top_1jsf',
                         ],
              }

#### Top fit

nuisances['Topnorm0jsf']  = {
               'name'  : 'CMS_hww_Topnorm0jsf',
               'samples'  : {
                   'top' : '1.00',
                   },  
               'type'  : 'rateParam',
               'cuts'  : [
                            'hww2l2v_13TeV_0jee',
                            'hww2l2v_13TeV_0jee_pt2ge20',
                            'hww2l2v_13TeV_0jee_pt2lt20',
                            'hww2l2v_13TeV_WW_0jee',
                            'hww2l2v_13TeV_top_0jee',
                            'hww2l2v_13TeV_0jmm',
                            'hww2l2v_13TeV_0jmm_pt2ge20',
                            'hww2l2v_13TeV_0jmm_pt2lt20',
                            'hww2l2v_13TeV_WW_0jmm',
                            'hww2l2v_13TeV_top_0jmm',
                         ],
              }

nuisances['Topnorm1jsf']  = {
               'name'  : 'CMS_hww_Topnorm1jsf',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                            'hww2l2v_13TeV_1jee',
                            'hww2l2v_13TeV_1jee_pt2ge20',
                            'hww2l2v_13TeV_1jee_pt2lt20',
                            'hww2l2v_13TeV_WW_1jee',
                            'hww2l2v_13TeV_1jmm',
                            'hww2l2v_13TeV_1jmm_pt2ge20',
                            'hww2l2v_13TeV_1jmm_pt2lt20',
                            'hww2l2v_13TeV_WW_1jmm',
                            'hww2l2v_13TeV_top_1jsf',
                         ],
              }


#### DY estimation (just create dummy histograms to be scaled by the DY Rin/out method)

nuisances['DYeenorm0j'] = {
                'name'  : 'hww_DYeenorm0j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    'DY' : ['1.','1.'] ,
                             },
                'cuts'  : [ 
                            'hww2l2v_13TeV_0jee', 
                            'hww2l2v_13TeV_0jee_pt2ge20', 
                            'hww2l2v_13TeV_0jee_pt2lt20', 
                            'hww2l2v_13TeV_WW_0jee', 
                            'hww2l2v_13TeV_top_0jee', 
                          ] ,
                }

nuisances['DYeenorm1j'] = {
                'name'  : 'hww_DYeenorm1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    'DY' : ['1.','1.'] ,
                             },
                'cuts'  : [ 
                            'hww2l2v_13TeV_1jee', 
                            'hww2l2v_13TeV_1jee_pt2ge20', 
                            'hww2l2v_13TeV_1jee_pt2lt20', 
                            'hww2l2v_13TeV_WW_1jee',
                          ] ,
                }

nuisances['DYmmnorm0j'] = {
                'name'  : 'hww_DYmmnorm0j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    'DY' : ['1.','1.'] ,
                             },
                'cuts'  : [ 
                            'hww2l2v_13TeV_0jmm', 
                            'hww2l2v_13TeV_0jmm_pt2ge20', 
                            'hww2l2v_13TeV_0jmm_pt2lt20', 
                            'hww2l2v_13TeV_WW_0jmm',
                            'hww2l2v_13TeV_top_0jmm',
                          ] ,
                }

nuisances['DYmmnorm1j'] = {
                'name'  : 'hww_DYmmnorm1j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                    'DY' : ['1.','1.'] ,
                             },
                'cuts'  : [ 
                            'hww2l2v_13TeV_1jmm', 
                            'hww2l2v_13TeV_1jmm_pt2ge20', 
                            'hww2l2v_13TeV_1jmm_pt2lt20', 
                            'hww2l2v_13TeV_WW_1jmm',
                          ] ,
                }


######## TOP UNCERTAINTIES

nuisances['singleTopToTTbar']  = {
                'name'  : 'singleTopToTTbar',   # Theory uncertainty
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {  # up              down
                   'top'     : ['((dataset==15 || dataset==16) * 1.0816 + (dataset==17 || dataset==18 || dataset==19))',
                                '((dataset==15 || dataset==16) * 0.9184 + (dataset==17 || dataset==18 || dataset==19))'],
                }
                # tt = 17/18/19 depending on the sample/generator
                # tW = 15/16
                
}

## Top pT reweighting uncertainty

nuisances['TopPtRew']  = {
                'name'  : 'TopPtRew',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : ["1.","((1./"+Top_pTrw+" - 1)*(dataset==19) + 1)"]
                }
         }


### FIXME: This must be implemented in mkDatacards.py using  a flag or something.
### Use the following if you want to apply the new combine MC stat nuisances.
### In this case remember to add the following line in the datacard
### * autoMCStats 10 1

nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {}
             }


###### Use the following if you want to apply the MC stat nuisances accoriding to the standard approach
###nuisances['stat']  = {
###                # apply to the following samples: name of samples here must match keys in samples.py
###               'samples'  : { 
###                   'ttbar': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'singletop': {
###                         'typeStat' : 'bbb',
###                         },
###                    
###                   'top': {
###                         'typeStat' : 'bbb',
###                         },
###
#### DATA DRIVEN:                    
####                  'DY': {
####                        'typeStat' : 'bbb',
####                        'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
####                        },
###                    
###                   'ggWW': {
###                         'typeStat' : 'bbb',
###                         },
###                    
###                   'ggWW_Int': {
###                         'typeStat' : 'bbb',
###                         },
###                    
###                   'WW': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'VZ': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'WZ': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'VVV': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'H_hww': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'ggH_hww': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'qqH_hww': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'WH_hww': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'ZH_hww': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'H_htt': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'ggH_htt': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'qqH_htt': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'WH_htt': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'ZH_htt': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'ggZH_hww': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'bbH_hww': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   'ttH_hww': {
###                         'typeStat' : 'bbb',
###                         },
###
###                   
###                   'Fake': {
###                         'typeStat' : 'bbb',
###                         },
###                   
###                   'Vg': {  
###                         'typeStat' : 'bbb',
###                         },
###
###                   'VgS':{  
###                         'typeStat' : 'bbb',
###                         },
###
###                   'WZgS_L':{
###                         'typeStat' : 'bbb',
###                         },
###
###                   'WZgS_H':{
###                         'typeStat' : 'bbb',
###                         },
###
###
###                 },
###               'type'  : 'shape'
###              }


try:
  for iNP in nuisances:
    if 'cuts' in nuisances[iNP] :
      newCuts = []
      for iCut in nuisances[iNP]['cuts']:
        for iOptim in optim:
           newCuts.append(iCut+'_'+iOptim)
      nuisances[iNP]['cuts'] = newCuts
except:
  print "No optim dictionary"

