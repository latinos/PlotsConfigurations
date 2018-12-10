# nuisances
# name of samples here must match keys in samples.py 

#########################################################
import os.path
import copy

massesAndModelsFile = "massesAndModels.py"

regions0j = ['hww2l2v_13TeV_dy_of0j',             
             'hww2l2v_13TeV_top_of0j',             
             'hwwhm_13TeV_of0j',
             ]

regions1j = ['hww2l2v_13TeV_dy_of1j',             
             'hww2l2v_13TeV_top_of1j',             
             'hwwhm_13TeV_of1j',
             ]

regions2j = ['hww2l2v_13TeV_dy_of2j',             
             'hww2l2v_13TeV_top_of2j',
             'hwwhm_13TeV_of2j',             
             ]

regions2j_VBF = ['hww2l2v_13TeV_dy_ofVBF',
                 'hww2l2v_13TeV_top_ofVBF',
                 'hwwhm_13TeV_ofVBF',
                 ]




massesAndModelsFile = "massesAndModels.py"
if os.path.exists(massesAndModelsFile) :
  handle = open(massesAndModelsFile,'r')
  exec(handle)
  handle.close()
else:
  print "!!! ERROR file ", massesAndModelsFile, " does not exist."


Top_pTrw   = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) )'
Top_pTrwUp = '1.'
Top_pTrwDo = '1./(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) )'



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




################################ EXPERIMENTAL UNCERTAINTIES  #################################
###############################################################################
#### Luminosity
nuisances['lumi']  = {
               'name'  : 'lumi_13TeV',
               'samples'  : {
                   #'DY'       : '1.025',              \
                   #'top'      : '1.025'          ,    |--> controlled via rateParams
                   #'WW' 'qqWWqq' 'WW2J': '1.025',     /                  
                   'ggWW'     : '1.025',
                   'Vg'       : '1.025',
                   'VgS'      : '1.025',
                   'VZ'       : '1.025',
                   'VVV'      : '1.025',
                   'ggH_hww'  : '1.025',
                   'qqH_hww'  : '1.025',
                   'ZH_hww'   : '1.025',
                   'ggZH_hww' : '1.025',
                   'WH_hww'   : '1.025',
                   'bbH_hww'  : '1.025',
                   'H_htt'    : '1.025',
                   },
               'type'  : 'lnN',
              }

for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['lumi']['samples'].update({'ggH_hww_'+m+'_'+model_name:'1.025'})
    nuisances['lumi']['samples'].update({'qqH_hww_'+m+'_'+model_name:'1.025'})
    nuisances['lumi']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name:'1.025'})
    nuisances['lumi']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name:'1.025'})


############################ FAKES ###################################################################################### 

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

nuisances['fake_syst']  = {
               'name'  : 'CMS_hww_fake_syst_OF',
               'type'  : 'lnN',
               'samples'  : {
                             'FakeOF' : '1.30',
                             },
}

nuisances['fake_ele']  = {
                'name'  : 'hww_fake_ele',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'FakeOF'     : [ fakeW_EleUp , fakeW_EleDown ],
                             },
}

nuisances['fake_ele_stat']  = {
                'name'  : 'hww_fake_ele_stat',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'FakeOF'      : [ fakeW_statEleUp , fakeW_statEleDown ]
                             },
}

nuisances['fake_mu']  = {
                'name'  : 'hww_fake_mu',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'FakeOF'     : [ fakeW_MuUp , fakeW_MuDown ],
                             },
}


nuisances['fake_mu_stat']  = {
                'name'  : 'hww_fake_mu_stat',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'FakeOF'     : [ fakeW_statMuUp , fakeW_statMuDown ]
                             },
}


####################### B-tagger ################################################################

nuisances['btagbc']  = {
                'name'  : 'btag_heavy',
                'kind'  : 'weight',
               'type'  : 'shape',
                'samples'  : {
                  
                   'DY'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WW'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'qqWWqq'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WW2J'    : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'ggWW'    : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'VVV'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'VZ'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'top'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'Vg'      : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'VgS'     : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'ggH_hww' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'qqH_hww' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'WH_hww'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'ZH_hww'  : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'H_htt'   : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                   'bbH_hww' : ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')'],
                }
}

for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['btagbc']['samples'].update({'ggH_hww_'+m+'_'+model_name: ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')']})
    nuisances['btagbc']['samples'].update({'qqH_hww_'+m+'_'+model_name: ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')']}) 
    nuisances['btagbc']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name: ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')']}) 
    nuisances['btagbc']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name: ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')']}) 


nuisances['btagudsg']  = {
                'name'  : 'btag_light',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                  
                   'DY'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'VVV'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'VZ'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WW'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'qqWWqq'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WW2J'    : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'ggWW'    : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'top'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'Vg'      : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'VgS'     : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'ggH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'qqH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'WH_hww'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'ZH_hww'  : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'bbH_hww' : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                   'H_htt'   : ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')'],
                }
}

for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['btagudsg']['samples'].update({'ggH_hww_'+m+'_'+model_name:['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')']})
    nuisances['btagudsg']['samples'].update({'qqH_hww_'+m+'_'+model_name:['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')']}) 
    nuisances['btagudsg']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name:['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')']}) 
    nuisances['btagudsg']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name:['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')']}) 


############################ Trigger Efficiency ###########
if   Nlep == '2' : trig_syst = ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']
elif Nlep == '3' : trig_syst = ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)']
# !!!!! We don't have the trigger formula implemented for 4l !!!! -> Use 3l but not correct
elif Nlep == '4' : trig_syst = ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)']

nuisances['trigg']  = {
                'name'  : 'hww_trigger',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                  
                   'DY'      : trig_syst ,
                   'VVV'     : trig_syst ,
                   'VZ'      : trig_syst ,
                   'ggWW'    : trig_syst ,
                   'WW'      : trig_syst ,
                   'qqWWqq'  : trig_syst ,
                   'WW2J'    : trig_syst ,
                   'top'     : trig_syst ,
                   'Vg'      : trig_syst ,
                   'VgS'     : trig_syst ,
                   'ggH_hww' : trig_syst ,
                   'qqH_hww' : trig_syst ,
                   'WH_hww'  : trig_syst ,
                   'ZH_hww'  : trig_syst ,
                   'ggZH_hww': trig_syst ,
                   'bbH_hww' : trig_syst ,
                   'H_htt'   : trig_syst ,
                },
}


for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['trigg']['samples'].update({'ggH_hww_'+m+'_'+model_name: trig_syst })
    nuisances['trigg']['samples'].update({'qqH_hww_'+m+'_'+model_name:  trig_syst})
    nuisances['trigg']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name: trig_syst})
    nuisances['trigg']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name: trig_syst})


################### Electron Efficiency and energy scale ##########ok!

id_syst_ele = [ 'LepSF'+Nlep+'l__ele_'+eleWP+'__Up' , 'LepSF'+Nlep+'l__ele_'+eleWP+'__Do' ]

nuisances['eff_e']  = {
                'name'  : 'eff_e',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   
                   'DY'      : id_syst_ele ,
                   'VVV'     : id_syst_ele ,
                   'VZ'      : id_syst_ele ,
                   'ggWW'    : id_syst_ele ,
                   'WW'      : id_syst_ele ,
                   'qqWWqq'  : id_syst_ele ,
                   'WW2J'    : id_syst_ele ,
                   'top'     : id_syst_ele ,
                   'Vg'      : id_syst_ele ,
                   'VgS'     : id_syst_ele ,
                   'ggH_hww' : id_syst_ele ,
                   'qqH_hww' : id_syst_ele ,
                   'WH_hww'  : id_syst_ele ,
                   'ZH_hww'  : id_syst_ele ,
                   'ggZH_hww': id_syst_ele ,
                   'bbH_hww' : id_syst_ele ,
                   'H_htt'   : id_syst_ele ,
                },
}

for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['eff_e']['samples'].update({'ggH_hww_'+m+'_'+model_name: id_syst_ele })
    nuisances['eff_e']['samples'].update({'qqH_hww_'+m+'_'+model_name: id_syst_ele })
    nuisances['eff_e']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name: id_syst_ele })
    nuisances['eff_e']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name: id_syst_ele })


nuisances['electronpt']  = {
                'name'  : 'scale_e',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   
                   'DY' :  ['1', '1'],
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'qqWWqq' :  ['1', '1'],
                   'WW2J' :  ['1', '1'],
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww'  :  ['1', '1'],
                   'ZH_hww'  :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'H_htt'   : ['1', '1'],
                 },

                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTdo'+skim,
}
                

for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['electronpt']['samples'].update({'ggH_hww_'+m+'_'+model_name:['1', '1']})
    nuisances['electronpt']['samples'].update({'qqH_hww_'+m+'_'+model_name:['1', '1']})
    nuisances['electronpt']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name:['1', '1']})                
    nuisances['electronpt']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name:['1', '1']})    



elePtCor_Syst = [ 'electron_ptW_'+Nlep+'l_Up / electron_ptW_'+Nlep+'l', 'electron_ptW_'+Nlep+'l_Down / electron_ptW_'+Nlep+'l']
nuisances['elePtCor']  = {
                'name'  : 'hww_elePtCor',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                  
                   'DY'         : elePtCor_Syst ,
                   'ggWW'       : elePtCor_Syst ,
                   'WW'         : elePtCor_Syst ,
                   'qqWWqq'     : elePtCor_Syst ,
                   'WW2J'       : elePtCor_Syst ,
                   'top'        : elePtCor_Syst ,
                   'VZ'         : elePtCor_Syst ,
                   'VVV'        : elePtCor_Syst ,
                   'Vg'         : elePtCor_Syst ,
                   'VgS'        : elePtCor_Syst ,
                   'ggH_hww'    : elePtCor_Syst ,
                   'qqH_hww'    : elePtCor_Syst ,
                   'WH_hww'     : elePtCor_Syst ,
                   'ZH_hww'     : elePtCor_Syst ,
                   'ggZH_hww'   : elePtCor_Syst ,
                   'bbH_hww'    : elePtCor_Syst ,
                   'H_htt'      : elePtCor_Syst ,

                   
                                  
                }
}

for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['elePtCor']['samples'].update({'ggH_hww_'+m+'_'+model_name: elePtCor_Syst})
    nuisances['elePtCor']['samples'].update({'qqH_hww_'+m+'_'+model_name: elePtCor_Syst})
    nuisances['elePtCor']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name: elePtCor_Syst}) 
    nuisances['elePtCor']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name: elePtCor_Syst}) 

eleEtaCor_Syst = [ 'electron_etaW_'+Nlep+'l_Up / electron_etaW_'+Nlep+'l', 'electron_etaW_'+Nlep+'l_Down / electron_etaW_'+Nlep+'l']

nuisances['eleEtaCor']  = {
                'name'  : 'hww_eleEtaCor',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                  
                   'DY'         : eleEtaCor_Syst, 
                   'ggWW'       : eleEtaCor_Syst, 
                   'WW'         : eleEtaCor_Syst, 
                   'qqWWqq'     : eleEtaCor_Syst, 
                   'WW2J'       : eleEtaCor_Syst, 
                   'top'        : eleEtaCor_Syst, 
                   'VZ'         : eleEtaCor_Syst, 
                   'VVV'        : eleEtaCor_Syst, 
                   'Vg'         : eleEtaCor_Syst, 
                   'VgS'        : eleEtaCor_Syst, 
                   'ggH_hww'    : eleEtaCor_Syst, 
                   'qqH_hww'    : eleEtaCor_Syst, 
                   'WH_hww'     : eleEtaCor_Syst, 
                   'ZH_hww'     : eleEtaCor_Syst, 
                   'ggZH_hww'   : eleEtaCor_Syst, 
                   'bbH_hww'    : eleEtaCor_Syst, 
                   'H_htt'      : eleEtaCor_Syst, 

                                  }
}


for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['eleEtaCor']['samples'].update({'ggH_hww_'+m+'_'+model_name:  eleEtaCor_Syst})
    nuisances['eleEtaCor']['samples'].update({'qqH_hww_'+m+'_'+model_name:  eleEtaCor_Syst})
    nuisances['eleEtaCor']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name:  eleEtaCor_Syst}) 
    nuisances['eleEtaCor']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name:  eleEtaCor_Syst}) 

############# Muon Efficiency and energy scale  #######

id_syst_mu = [ 'LepSF'+Nlep+'l__mu_'+muWP+'__Up' , 'LepSF'+Nlep+'l__mu_'+muWP+'__Do' ]



nuisances['eff_m']  = {
                'name'  : 'eff_m',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   
                   'DY'      : id_syst_mu ,
                   'VVV'     : id_syst_mu ,
                   'VZ'      : id_syst_mu ,
                   'ggWW'    : id_syst_mu ,
                   'WW'      : id_syst_mu ,
                   'qqWWqq'  : id_syst_mu ,
                   'WW2J'    : id_syst_mu ,
                   'top'     : id_syst_mu ,
                   'Vg'      : id_syst_mu ,
                   'VgS'     : id_syst_mu ,
                   'ggH_hww' : id_syst_mu ,
                   'qqH_hww' : id_syst_mu ,
                   'WH_hww'  : id_syst_mu ,
                   'ZH_hww'  : id_syst_mu ,
                   'ggZH_hww': id_syst_mu ,
                   'bbH_hww' : id_syst_mu ,
                   'H_htt'   : id_syst_mu ,
                },
}

for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['eff_m']['samples'].update({'ggH_hww_'+m+'_'+model_name: id_syst_mu })
    nuisances['eff_m']['samples'].update({'qqH_hww_'+m+'_'+model_name: id_syst_mu })
    nuisances['eff_m']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name: id_syst_mu })
    nuisances['eff_m']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name: id_syst_mu })


nuisances['muonpt']  = {
                'name'  : 'scale_m',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'qqWWqq' :  ['1', '1'],
                   'WW2J' :  ['1', '1'],
                   'DY' :  ['1', '1'],
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'H_htt' : ['1', '1'],
                },


                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTdo'+skim,
}



for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['muonpt']['samples'].update({'ggH_hww_'+m+'_'+model_name:['1', '1']})
    nuisances['muonpt']['samples'].update({'qqH_hww_'+m+'_'+model_name:['1', '1']})
    nuisances['muonpt']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name:['1', '1']})
    nuisances['muonpt']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name:['1', '1']})


##### Jet energy scale

nuisances['jes']  = {
                'name'  : 'scale_j',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                  
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'qqWWqq' :  ['1', '1'],
                   'WW2J' :  ['1', '1'],
                   'DY' :  ['1', '1'],
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'H_htt' : ['1', '1'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__JESup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__JESdo'+skim,
}


for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['jes']['samples'].update({'ggH_hww_'+m+'_'+model_name:['1', '1']})
    nuisances['jes']['samples'].update({'qqH_hww_'+m+'_'+model_name:['1', '1']})
    nuisances['jes']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name:['1', '1']})
    nuisances['jes']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name:['1', '1']})


##### MET energy scale##########

nuisances['met']  = {
                'name'  : 'scale_met',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'qqWWqq' :  ['1', '1'],
                   'WW2J' :  ['1', '1'],
                   'DY' :  ['1', '1'],
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'bbH_hww' : ['1', '1'],
                   'H_htt' : ['1', '1'],
                },

                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__METup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__METdo'+skim,
}
                

for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['met']['samples'].update({'ggH_hww_'+m+'_'+model_name:['1', '1']})
    nuisances['met']['samples'].update({'qqH_hww_'+m+'_'+model_name:['1', '1']})
    nuisances['met']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name:['1', '1']})
    nuisances['met']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name:['1', '1']})


###############################################
# PS/UE
# PS

nuisances['PS']  = {
                'name'  : 'PS',
                'skipCMS' : 1,
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                  'WW'      : ['0.92657', '1.'],                   
                  #'ggH_hww' : ['0.98554', '1.'], #
                  #'qqH_hww' : ['0.92511', '1.'], #
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PS'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC'+skim,
                'AsLnN'      : '1',
}

nuisances['UE']  = {
                'name'  : 'UE', 
                'skipCMS' : 1,
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                  'WW'      : ['1.0226', '0.9897'],                   
                  #'ggH_hww' : ['1.0739', '1.0211'], # 
                  #'qqH_hww' : ['1.0560', '0.9992'], #
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEdo'+skim,
                'AsLnN'      : '1',
                }



################################## theory uncertainties ##############################################

nuisances['DYQCDscale']  = {
                'name'  : 'QCDscale_V',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['std_vector_LHE_weight[8]/std_vector_LHE_weight[0]', 'std_vector_LHE_weight[4]/std_vector_LHE_weight[0]'],
                }
}


nuisances['WW2JQCDscale']  = {
                'name'  : 'QCDscale_WWJJ',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'qqWWqq'      : ['std_vector_LHE_weight[8]/std_vector_LHE_weight[0]', 'std_vector_LHE_weight[4]/std_vector_LHE_weight[0]'],
                   'WW2J'      : ['std_vector_LHE_weight[8]/std_vector_LHE_weight[0]', 'std_vector_LHE_weight[4]/std_vector_LHE_weight[0]'],
                }
}




from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()


####################QCD scale uncertainties for Higgs signals other than ggH

nuisances['QCDscale_ggH']  = {
               'name'  : 'QCDscale_ggH', 
               'samples'  : {
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),                   
                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }


nuisances['QCDscale_qqH']  = {
               'name'  : 'QCDscale_qqH', 
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','scale','sm'),
                                     
                   },
               'type'  : 'lnN',
              }



nuisances['QCDscale_VH']  = {
               'name'  : 'QCDscale_VH',
               'samples'  : {
                   'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.0','scale','sm'),                 
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



######################
#For the HM singals, the un. are taken from in 0 jet
nuisances['QCDscale_gg_ACCEPT']  = {
               'name'  : 'QCDscale_gg_ACCEPT', 
               'samples'  : {
                   
                   'ggWW'    : '1.027',
                   'ggH_hww' : '1.027',                  
                   'H_htt'   : '1.027',
                   'ggZH_hww': '1.027',                                                        
                   },
               'type'  : 'lnN',
              }


for m in masses:
  massA=int(m)
  weightA1=1.04802  + (massA*3.62976e-05)+(massA*massA*-2.61565e-08 )+(massA*massA*massA*4.20694e-12 )
  weightA=str(weightA1)

  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['QCDscale_gg_ACCEPT']['samples'].update({'ggH_hww_'+m+'_'+model_name: weightA})
    nuisances['QCDscale_gg_ACCEPT']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name: weightA})


########################################################
#For the HM singals, the un. are taken from in VBF categories

nuisances['QCDscale_qqbar_ACCEPT']  = {
               'name'  : 'QCDscale_qqbar_ACCEPT', 
               'type'  : 'lnN',
               'samples'  : {
                   
                   'qqH_hww' : '1.007',
                   'WH_hww'  : '1.05',
                   'ZH_hww'  : '1.04',
                   'VZ'      : '1.029',                  
                   },
              }
for m in masses:
  
  mass=int(m)
  weight1= ((0.971893 + (mass*8.75961e-05 )+(mass*mass*-3.9762e-08)+(mass*mass*mass*6.78212e-12 ))*(mass>449) + 1.003*(mass<449))
  weight=str(weight1)
  #print  weight
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({'qqH_hww_'+m+'_'+model_name: weight})
    nuisances['QCDscale_qqbar_ACCEPT']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name: weight})




####QCD scale
#QCDcale_ are placeholders, desciption below
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
                            'hwwhm_13TeV_of0j',
                            'hwwhm_13TeV_of1j',
                            'hwwhm_13TeV_of2j',
                            'hwwhm_13TeV_ofVBF',
                                               
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
                            'hwwhm_13TeV_of0j',
                            'hwwhm_13TeV_of1j',
                            'hwwhm_13TeV_of2j',
                            'hwwhm_13TeV_ofVBF',
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
                          'hwwhm_13TeV_of0j',
                          'hwwhm_13TeV_of1j',
                          'hwwhm_13TeV_of2j',
                          'hwwhm_13TeV_ofVBF',
                         
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
                           'hwwhm_13TeV_of0j',
                           'hwwhm_13TeV_of1j',
                           'hwwhm_13TeV_of2j',
                           'hwwhm_13TeV_ofVBF',

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


############################ pdf uncertainty ################ ok!

nuisances['pdf_Higgs_gg']  = {
               'name'  : 'pdf_Higgs_gg', 
               'samples'  : {
                   #'ggWW'    : '1.05',    # --> no, since absorbed into k-scale factor
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),                  
                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.0','pdf','sm'),                   
                  
                   },
               'type'  : 'lnN',
              }
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['pdf_Higgs_gg']['samples'].update({'ggH_hww_'+m+'_'+model_name: HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,m,'pdf','bsm')})
    nuisances['pdf_Higgs_gg']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name: HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,m,'pdf','bsm')})


nuisances['pdf_Higgs_qqbar']  = {
               'name'  : 'pdf_Higgs_qqbar', 
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),                                      
                   'WH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH' ,'125.0','pdf','sm'),
                   'ZH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.0','pdf','sm'),
                   'VZ'      : '1.04',  
                   },
              }
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['pdf_Higgs_qqbar']['samples'].update({'qqH_hww_'+m+'_'+model_name:HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH',m,'pdf','bsm')})
    nuisances['pdf_Higgs_qqbar']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name:HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH',m,'pdf','bsm')})             


#For the HM singals, the un. are taken from in 0 jet
nuisances['pdf_Higgs_gg_ACCEPT']  = {
               'name'  : 'pdf_Higgs_gg_ACCEPT', 
               'samples'  : {
                   'ggWW'    : '1.005',    
                   'ggH_hww' : '1.005',                   
                   'H_htt'   : '1.005',
                   'ggZH_hww': '1.005',                                     
                   },
               'type'  : 'lnN',
              }
for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    if m<1500:    
      nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'ggH_hww_'+m+'_'+model_name:'1.007'})
      nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name:'1.010'})
    if m>1499:
      nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'ggH_hww_'+m+'_'+model_name:'1.012'})           
      nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name:'1.035'})




#For the HM singals, the un. are taken from in VBF cat
nuisances['pdf_Higgs_qqbar_ACCEPT']  = {
               'name'  : 'pdf_Higgs_qqbar_ACCEPT', 
               'type'  : 'lnN',
               'samples'  : {
                  
                   'qqH_hww' : '1.011',                  
                   'WH_hww'  : '1.007',
                   'ZH_hww'  : '1.012',
                   'VZ'      : '1.005',                                     
                   },
              }


for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    if m<1000:  
      nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'qqH_hww_'+m+'_'+model_name:'1.005'})
      nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name:'1.005'})
    if m>999:  
      nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'qqH_hww_'+m+'_'+model_name:'1.015'})
      nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'qqH_hww_SBI'+m+'_'+model_name:'1.015'})


#######################################
# ggww and interference
nuisances['QCDscale_ggWW']  = {
               'name'  : 'QCDscale_ggWW', 
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW' : '1.15',
                   },
              }

for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
    nuisances['QCDscale_ggWW']['samples'].update({'ggH_hww_SBI'+m+'_'+model_name:'1.15'})

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
                   'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW']
                   
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
               'cuts'  : regions2j+regions2j_VBF 
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



nuisances['WgStarScale']  = {
               'name'  : 'CMS_hww_WgStarScale', 
               'type'  : 'lnN',
               'samples'  : {
                   'WgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'VgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   },
                }
 
####### rateParam   ##########

nuisances['DYttnorm0j']  = {
               'name'  : 'CMS_hwwhmof_DYttnorm0j', 
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions0j
              }

nuisances['DYttnorm1j']  = {
               'name'  : 'CMS_hwwhmof_DYttnorm1j', 
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions1j
              }

nuisances['DYttnorm2j']  = {
               'name'  : 'CMS_hwwhmof_DYttnorm2j',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j
              }

nuisances['DYttnorm2jVBF']  = {
               'name'  : 'CMS_hwwhmof_DYttnorm2jVBF',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j_VBF
              }



nuisances['WWofnorm0j_WW']  = {
               'name'  : 'CMS_hwwhmof_WWofnorm0j', 
               'samples'  : {
                   'WW' : '1.00',
                   #'WW2J' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions0j 
              }



nuisances['WWofnorm0j_WW2J']  = {
               'name'  : 'CMS_hwwhmof_WWofnorm0j', 
               'samples'  : {
                   #'WW' : '1.00',
                   'WW2J' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions0j 
              }


nuisances['WWofnorm1j_WW']  = {
               'name'  : 'CMS_hwwhmof_WWnorm1j', 
               'samples'  : {
                   'WW' : '1.00',
                   #'WW2J' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions1j 
              }



nuisances['WWofnorm1j_WW2J']  = {
               'name'  : 'CMS_hwwhmof_WWnorm1j', 
               'samples'  : {
                   #'WW' : '1.00',
                   'WW2J' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions1j 
              }

nuisances['WWofnorm2j_WW']  = {
               'name'  : 'CMS_hwwhmof_WWnorm2j',
               'samples'  : {
                   'WW' : '1.00',
                   #'WW2J' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j
              }


nuisances['WWofnorm2j_WW2J']  = {
               'name'  : 'CMS_hwwhmof_WWnorm2j',
               'samples'  : {
                   #'WW' : '1.00',
                   'WW2J' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j
              }



nuisances['WWofnorm2jVBF_WW']  = {
               'name'  : 'CMS_hwwhmof_WWnorm2jVBF',
               'samples'  : {
                   'WW' : '1.00',
                   #'WW2J' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j_VBF 
              }



nuisances['WWofnorm2jVBF_WW2J']  = {
               'name'  : 'CMS_hwwhmof_WWnorm2jVBF',
               'samples'  : {
                   #'WW' : '1.00',
                   'WW2J' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j_VBF 
              }


nuisances['Topofnorm0j']  = {
               'name'  : 'CMS_hwwhmof_Topnorm0j', 
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  :  regions0j
              }

nuisances['Topofnorm1j']  = {
               'name'  : 'CMS_hwwhmof_Topnorm1j', 
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions1j 
              }

nuisances['Topofnorm2j']  = {
               'name'  : 'CMS_hwwhmof_Topnorm2j',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j 
              }

nuisances['Topofnorm2jVBF']  = {
               'name'  : 'CMS_hwwhmof_Topnorm2jVBF',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : regions2j_VBF
              }




nuisances['singleTopToTTbar']  = {
                'name'  : 'singleTopToTTbar',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {  # up              down
                   'top'     : ['((dataset==15 || dataset==16) * 1.0816 + (dataset==17 || dataset==18 || dataset==19))',
                                '((dataset==15 || dataset==16) * 0.9184 + (dataset==17 || dataset==18 || dataset==19))'],
                }
                # tt = 17/18/19 depending on the sample/generator
                # tW = 15/16
                
}


nuisances['TopPtRew']  = {
                'name'  : 'TopPtRew',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : ["1.","((1./"+Top_pTrw+" - 1)*(dataset==19) + 1)"]
                }
         }



nuisances['TopPS']  = {
                'name'  : 'TopPS',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : ['(1+0.000067*mTi*0.5)','1/(1+0.000067*mTi*0.5)']
                }

} 



## Use the following if you want to apply the automatic combine MC stat nuisances.
#nuisances['stat']  = {
#              'type'  : 'auto',
#              'maxPoiss'  : '10',
#              'includeSignal'  : '1',
#              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
#              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
#              'samples' : {}
#             }

# on MC/data
# "stat" is a special word to identify this nuisance
nuisances['stat']  = {
                # apply to the following samples: name of samples here must match keys in samples.py
               'samples'  : {

                   'ggWW': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         'correlate': [] 
                         },
                   'ggH_hww':{
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         'correlate': []
                   },
                   'qqWWqq': {
                        'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         'correlate': []  
                   },
                   'qqH_hww':{
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         'correlate': []
                   },
   

                 },
               'type'  : 'shape'
              }

for m in masses:
  for model in models:
    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")  
    nuisances['stat']['samples']['ggWW']["correlate"].append('ggH_hww_SBI'+m+"_"+model_name)
    nuisances['stat']['samples']['ggH_hww']["correlate"].append('ggH_hww_SBI'+m+"_"+model_name)
    nuisances['stat']['samples']['ggH_hww_'+m+"_"+model_name] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [], 'errorsFrom': [] }

    
    nuisances['stat']['samples']['qqWWqq']["correlate"].append('qqH_hww_SBI'+m+"_"+model_name)
    nuisances['stat']['samples']['qqH_hww']["correlate"].append('qqH_hww_SBI'+m+"_"+model_name)
    nuisances['stat']['samples']['qqH_hww_'+m+"_"+model_name] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [], 'errorsFrom': [] }

#print nuisances['stat']['samples']['ggWW']
#print nuisances['stat']['samples']['ggH_hww']
#print nuisances['stat']['samples']['qqWWqq']
#print nuisances['stat']['samples']['qqH_hww']


#print nuisances['stat']

for m in masses:
  for model in models:

    for item in nuisances['stat']['samples']['ggH_hww']["correlate"]:
      if ("SBI"+m+"_"+model_name) in item:
        nuisances['stat']['samples']['ggH_hww_'+m+"_"+model_name]['correlate'].append(item)
        nuisances['stat']['samples']['ggH_hww_'+m+"_"+model_name]['errorsFrom'].append(item.replace("SBI", "SI"))
    print ("_"+m+"_"+model_name),nuisances['stat']['samples']['ggH_hww_'+m+"_"+model_name]['correlate']
    for item in nuisances['stat']['samples']['qqH_hww']["correlate"]:
      if ("SBI"+m+"_"+model_name) in item:
        nuisances['stat']['samples']['qqH_hww_'+m+"_"+model_name]['correlate'].append(item)
        nuisances['stat']['samples']['qqH_hww_'+m+"_"+model_name]['errorsFrom'].append(item.replace("SBI", "SI"))
    print ("_"+m+"_"+model_name),nuisances['stat']['samples']['qqH_hww_'+m+"_"+model_name]['correlate']

print nuisances['stat']['samples']
