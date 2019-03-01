
# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py

mc = [name for name in samples.keys() if name not in ['DATA', 'Fake_em', 'Fake_me']]

dycr = [cut for cut in cuts.keys() if 'hww_CR_catDY' in cut]
topcr = [cut for cut in cuts.keys() if 'hww_CR_cattop' in cut]
sr = [cut for cut in cuts.keys() if 'hww' in cut and 'CR' not in cut]

jetCuts = {
  '0j': [cut for cut in (dycr + topcr) if '_0j_' in cut] + [cut for cut in sr if 'NJ_0' in cut],
  '1j': [cut for cut in (dycr + topcr) if '_1j_' in cut] + [cut for cut in sr if 'NJ_1' in cut],
  '2j': [cut for cut in (dycr + topcr) if '_2j_' in cut] + [cut for cut in sr if 'NJ_2' in cut],
  '3j': [cut for cut in (dycr + topcr) if '_3j_' in cut] + [cut for cut in sr if 'NJ_3' in cut],
  'ge4j': [cut for cut in (dycr + topcr) if '_ge4j_' in cut] + [cut for cut in sr if 'NJ_GE4' in cut]
}

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

# DY, top, and WW are data driven, no need to include the luminosity uncertainty
nuisances['lumi']  = {
               'name'  : 'lumi_13TeV',
               'samples'  : dict((name, '1.025') for name in mc if name not in ['DY', 'top', 'WW']),
               'type'  : 'lnN',
              }

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

nuisances['fake_syst_em']  = {
               'name'  : 'CMS_fake_hwwem_2016',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_em' : '1.30',
                             },
               }

nuisances['fake_syst_me']  = {
               'name'  : 'CMS_fake_hwwme_2016',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake_me' : '1.30',
                             },
               }

nuisances['fake_ele']  = {
                'name'  : 'CMS_fake_e_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_EleUp , fakeW_EleDown ],
                              'Fake_me'     : [ fakeW_EleUp , fakeW_EleDown ],
                             },
}

nuisances['fake_ele_stat']  = {
                'name'  : 'CMS_fake_stat_e_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                              'Fake_me'      : [ fakeW_statEleUp , fakeW_statEleDown ],
                             },
}

nuisances['fake_mu']  = {
                'name'  : 'CMS_fake_m_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_MuUp , fakeW_MuDown ],
                              'Fake_me'     : [ fakeW_MuUp , fakeW_MuDown ],
                             },
}


nuisances['fake_mu_stat']  = {
                'name'  : 'CMS_fake_stat_m_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                              'Fake_em'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                              'Fake_me'     : [ fakeW_statMuUp , fakeW_statMuDown ],
                             },
}

##### B-tagger

nuisances['btagbc']  = {
  'name'  : 'CMS_btag_heavy_2016',
  'kind'  : 'weight',
  'type'  : 'shape',
  'samples': dict((name, ['('+bSF+'_bc_up)/('+bSF+')', '('+bSF+'_bc_down)/('+bSF+')']) for name in mc)
}

nuisances['btagudsg']  = {
  'name'  : 'CMS_btag_light_2016',
  'kind'  : 'weight',
  'type'  : 'shape',
  'samples': dict((name, ['('+bSF+'_udsg_up)/('+bSF+')', '('+bSF+'_udsg_down)/('+bSF+')']) for name in mc)
}

##### Trigger Efficiency

if   Nlep == '2' : trig_syst = ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)']
elif Nlep == '3' : trig_syst = ['(effTrigW3l_Up)/(effTrigW3l)', '(effTrigW3l_Down)/(effTrigW3l)']
elif Nlep == '4' : trig_syst = ['(effTrigW4l_Up)/(effTrigW4l)', '(effTrigW3l_Down)/(effTrigW4l)']

nuisances['trigg']  = {
                'name'  : 'CMS_eff_hwwtrigger_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((name, trig_syst) for name in mc)
}

##### Electron Efficiency and energy scale

id_syst_ele = [ 'LepSF'+Nlep+'l__ele_'+eleWP+'__Up' , 'LepSF'+Nlep+'l__ele_'+eleWP+'__Do' ]

nuisances['eff_e']  = {
                'name'  : 'CMS_eff_e_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((name, id_syst_ele) for name in mc)
}

nuisances['electronpt']  = {
                'name'  : 'CMS_scale_e_2016',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : dict((name, ['1', '1']) for name in mc),
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepElepTdo'+skim,
}


elePtCor_Syst = [ 'electron_ptW_'+Nlep+'l_Up / electron_ptW_'+Nlep+'l', 'electron_ptW_'+Nlep+'l_Down / electron_ptW_'+Nlep+'l']
nuisances['elePtCor']  = {
                'name'  : 'CMS_eff_e_residual_pt_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((name, elePtCor_Syst) for name in mc)
}

eleEtaCor_Syst = [ 'electron_etaW_'+Nlep+'l_Up / electron_etaW_'+Nlep+'l', 'electron_etaW_'+Nlep+'l_Down / electron_etaW_'+Nlep+'l']

nuisances['eleEtaCor']  = {
                'name'  : 'CMS_eff_e_residual_eta_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((name, eleEtaCor_Syst) for name in mc)
}


##### Muon Efficiency and energy scale

id_syst_mu = [ 'LepSF'+Nlep+'l__mu_'+muWP+'__Up' , 'LepSF'+Nlep+'l__mu_'+muWP+'__Do' ]

nuisances['eff_m']  = {
                'name'  : 'CMS_eff_m_2016',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : dict((name, id_syst_mu) for name in mc)
}

nuisances['muonpt']  = {
                'name'  : 'CMS_scale_m_2016',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : dict((name, ['1', '1']) for name in mc),
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__LepMupTdo'+skim,
}


##### Jet energy scale

nuisances['jes']  = {
                'name'  : 'CMS_scale_j_2016',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : dict((name, ['1', '1']) for name in mc),
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__JESup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__JESdo'+skim,
}

##### MET energy scale

nuisances['met']  = {
                'name'  : 'CMS_scale_met_2016',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : dict((name, ['1', '1']) for name in mc),
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__METup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__METdo'+skim,
}

#
# PS and UE
#

nuisances['PS']  = {
                'name'  : 'PS',
                'skipCMS' : 1,
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                  'WW': ['0.92657', '1.'], #
                  'ggH_hww': ['0.98554', '1.'], # These numbers are used to normalize the PS variation to the same integral as the nominal after the wwSel skim
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
                  'ggH_hww': ['1.0739', '1.0211'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__UEdo'+skim,
                'AsLnN'      : '1',
                }

nuisances['PU']  = {
                'name'  : 'PU',
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                  'WW'      : ['1.01244825559', '0.989356107719'],
                  'ggH_hww':  ['1.01372240456', '0.987061972012'],
                  'qqH_hww':  ['1.01939300826', '0.990627253001'],
                  'top':      ['1.03521043346', '1.00269118365'], # we don't have some of the ST samples in the PU varied directories, so the factors are both above 1 
                  'DY':       ['1.01057222659', '0.989724928521'],
                },
                'folderUp'   : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PUup'+skim,
                'folderDown' : xrootdPath+treeBaseDir+'Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__PUdo'+skim,
                'AsLnN'      : '1',
                }



## Shape nuisance due to QCD scale variations for DY
nuisances['DYQCDscale']  = {
                'name'  : 'QCDscale_V',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'DY'      : ['std_vector_LHE_weight[8]/std_vector_LHE_weight[0]', 'std_vector_LHE_weight[4]/std_vector_LHE_weight[0]'],
                }
}

#
#
# Theory uncertainty for ggH
#
#
#   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
#
#   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools
#
#  Renormalize at datacard generation step

thus = [
    ('THU_ggH_Mu', 'ggH_mu'),
    ('THU_ggH_Res', 'ggH_res'),
    ('THU_ggH_Mig01', 'ggH_mig01'),
    ('THU_ggH_Mig12', 'ggH_mig12'),
    ('THU_ggH_VBF2j', 'ggH_VBF2j'),
    ('THU_ggH_VBF3j', 'ggH_VBF3j'),
    ('THU_ggH_PT60', 'ggH_pT60'),
    ('THU_ggH_PT120', 'ggH_pT120'),
    ('THU_ggH_qmtop', 'ggH_qmtop')
]

# manual renormalizations
#'ggH_hww': ['0.956862481999*ggH_mu', '1.04721061556*(1+(1.-ggH_mu))'],
#'ggH_hww': ['0.976053022102*ggH_res', '1.02515158689*(1+(1.-ggH_res))'],
#'ggH_hww': ['0.978541312796*ggH_mig01', '1.02242093486*(1+(1.-ggH_mig01))'],
#'ggH_hww': ['1.03354649125*ggH_mig12', '0.968562729019*(1+(1.-ggH_mig12))'],
#'ggH_hww': ['0.986873455747*ggH_pT60', '1.01348044764*(1+(1.-ggH_pT60))'],
#'ggH_hww': ['0.991114238973*ggH_pT120', '1.00904653166*(1+(1.-ggH_pT120))'],
#'ggH_hww': ['0.99565225214*ggH_VBF2j', '1.00438588531*(1+(1.-ggH_VBF2j))'],
#'ggH_hww': ['0.999899080749*ggH_VBF3j', '1.00010093962*(1+(1.-ggH_VBF3j))'],
#'ggH_hww': ['0.995393164223*ggH_qmtop', '1.00464967637*(1+(1.-ggH_qmtop))'],

for name, vname in thus:
    nuisances[vname]  = {
      'name'  : name,
      'skipCMS' : 1,
      'kind'  : 'weight',
      'type'  : 'shape',
      'samples'  : {
        'ggH_hww': [vname, '1+(1.-'+vname+')'],
        'ggH_htt': [vname, '1+(1.-'+vname+')'],
      },
    }

nuisances['CRSR_accept_dytt']  = {
               'name'  : 'CMS_hww_CRSR_accept_dytt',
               'type'  : 'lnN',
               'samples'  : {
                   'DY' : '1.02',
                   },
               'cuts'  : dycr
              }

nuisances['CRSR_accept_top']  = {
               'name'  : 'CMS_hww_CRSR_accept_top',
               'type'  : 'lnN',
               'samples'  : {
                   'top' : '1.01',
                   },
               'cuts'  : topcr
              }


nuisances['QCDscale_VV']  = {
               'name'  : 'QCDscale_VV',
               'samples'  : {
                   'VZ' : '1.03',
                   'WZgS_L': '1.03',
                   'WZgS_H': '1.03',
                   },
               'type'  : 'lnN'
              }


#### QCD scale uncertainties for Higgs signals other than ggH

from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()

#nuisances['QCDscale_ggH']  = {
#               'name'  : 'QCDscale_ggH', 
#               'samples'  : {
#                   'H_htt'   : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.09','scale','sm'),
#                   },
#               'type'  : 'lnN',
#              }


nuisances['QCDscale_qqH']  = {
               'name'  : 'QCDscale_qqH', 
               'samples'  : {
                   'qqH_hww'     : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.09','scale','sm'),
                   'qqH_htt'     : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_VH']  = {
               'name'  : 'QCDscale_VH', 
               'samples'  : {
                   'WH_hww'         : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.09','scale','sm'),
                   'WH_htt'         : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH','125.09','scale','sm'),
                   'ZH_hww'         : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.09','scale','sm'),
                   'ZH_htt'         : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_ggZH']  = {
               'name'  : 'QCDscale_ggZH', 
               'samples'  : {
                   'ggZH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_bbH']  = {
               'name'  : 'QCDscale_bbH',
               'samples'  : {
                   'bbH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','bbH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_ttH']  = {
               'name'  : 'QCDscale_ttH',
               'samples'  : {
                   'ttH_hww': HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ttH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_WWewk']  = {
               'name'  : 'QCDscale_WWewk',
               'samples'  : {
                   'WWewk' : '1.11',
                   },
               'type'  : 'lnN'
              }

# why are we correlating all these unrelated processes?
nuisances['QCDscale_qqbar_ACCEPT']  = {
               'name'  : 'QCDscale_qqbar_ACCEPT', 
               'type'  : 'lnN',
               'samples'  : {
                   'VZ'      : '1.029',
                   'qqH_hww'     : '1.007',
                   'qqH_htt'     : '1.007',
                   'WH_hww'          : '1.05',
                   'WH_htt'          : '1.05',
                   'ZH_hww'          : '1.05',
                   'ZH_htt'          : '1.04',
                   },
              }

nuisances['QCDscale_gg_ACCEPT']  = {
               'name'  : 'QCDscale_gg_ACCEPT', 
               'samples'  : {
                   'ggWW'    : '1.027',
                   'ggH_hww'     : '1.027',
                   'ggH_htt'     : '1.027',
                   'ggZH_hww'         : '1.027',
                   },
               'type'  : 'lnN',
              }

###### pdf uncertainty

nuisances['pdf_Higgs_gg']  = {
               'name'  : 'pdf_Higgs_gg', 
               'samples'  : {
                   'ggH_hww'          : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.09','pdf','sm'),
                   'ggH_htt'          : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.09','pdf','sm'),
                   'ggZH_hww'         : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggZH','125.09','pdf','sm'),                   
                   'bbH_hww'          : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','bbH' ,'125.09','pdf','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['pdf_Higgs_ttH']  = {
               'name'  : 'pdf_Higgs_ttH',
               'samples'  : {
                   'ttH_hww'     : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ttH' ,'125.09','pdf','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['pdf_Higgs_qqbar']  = {
               'name'  : 'pdf_Higgs_qqbar', 
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww'     : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.09','pdf','sm'),
                   'qqH_htt'     : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.09','pdf','sm'),
                   'WH_hww'          : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_htt'          : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','WH' ,'125.09','pdf','sm'),     
                   'ZH_hww'          : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.09','pdf','sm'),
                   'ZH_htt'          : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ZH' ,'125.09','pdf','sm'),
                   },
              }

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
                   'ggH_htt'     : '1.005',
                   'ggZH_hww'         : '1.005',
                   },
               'type'  : 'lnN',
              }

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
                   'qqH_hww'     : '1.011',
                   'qqH_htt' : '1.011',
                   'WH_hww'          : '1.007',
                   'WH_htt'          : '1.007',
                   'ZH_hww'          : '1.012',
                   'ZH_htt'          : '1.012',
                   },
              }

nuisances['pdf_qqbar_ACCEPT']  = {
               'name'  : 'pdf_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'VZ'      : '1.005',
                   },
              }

# ggww and interference

nuisances['QCDscale_ggVV']  = {
               'name'  : 'QCDscale_ggVV',
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW' : '1.15',
                   },
              }

nuisances['WgStarScale']  = {
               'name'  : 'CMS_hww_WgStarScale', 
               'type'  : 'lnN',
               'samples'  : {
                   'WgS'    : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'VgS'    : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
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


# by-jet-bin nuisances

for nj in ['0j', '1j', '2j', '3j', 'ge4j']:
  nuisances['WWresum_' + nj]  = {
                  'name'  : 'CMS_hww_WWresum_' + nj,
                  'skipCMS' : 1,
                  'kind'  : 'weight',
                  'type'  : 'shape',
                  'samples'  : {
                     'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                  },
                  'cuts'  : jetCuts[nj]
  }

  nuisances['WWqscale_' + nj]  = {
                  'name'  : 'CMS_hww_WWqscale_' + nj,
                  'skipCMS' : 1,
                  'kind'  : 'weight',
                  'type'  : 'shape',
                  'samples'  : {
                     'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                     },
                 'cuts'  : jetCuts[nj]
  }

  nuisances['DYnorm_' + nj]  = {
               'name'  : 'CMS_hww_DYnorm_' + nj,
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : jetCuts[nj]
  }

  nuisances['WWnorm_' + nj]  = {
               'name'  : 'CMS_hww_WWnorm_' + nj,
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : jetCuts[nj]
  }

  nuisances['Topnorm_' + nj]  = {
               'name'  : 'CMS_hww_topnorm_' + nj,
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : jetCuts[nj]
  }

nuisances['singleTopToTTbar']  = {
                'name'  : 'singleTopToTTbar',
                'skipCMS' : 1,
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : { 
                   'top'     : ['((dataset==15 || dataset==16) * 1.0816 + (dataset==17 || dataset==18 || dataset==19))',
                                '((dataset==15 || dataset==16) * 0.9184 + (dataset==17 || dataset==18 || dataset==19))'],
                }
                # tt = 17/18/19 depending on the sample/generator
                # tW = 15/16
           }

## Top pT reweighting uncertainty

nuisances['topPtRew']  = {
                'name'  : 'CMS_topPtRew',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : ["1.","((1./"+Top_pTrw+" - 1)*(dataset==19) + 1)"]
                }
         }


## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
              'type'  : 'auto',
              'maxPoiss'  : '10',
              'includeSignal'  : '1',
              #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
              #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
              'samples' : {}
             }

#### Use the following if you want to apply the MC stat nuisances accoriding to the standard approach
#nuisances['stat']  = {
#                # apply to the following samples: name of samples here must match keys in samples.py
#               'samples'  : { 
#                   'ttbar': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'singletop': {
#                         'typeStat' : 'bbb',
#                         },
#                    
#                   'top': {
#                         'typeStat' : 'bbb',
#                         },
#                    
#                   'DY': {
#                         'typeStat' : 'bbb',
#                         'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
#                         },
#                    
#                   'ggWW': {
#                         'typeStat' : 'bbb',
#                         },
#                    
#                   'ggWW_Int': {
#                         'typeStat' : 'bbb',
#                         },
#                    
#                   'WW': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'VZ': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'WZ': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'VVV': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'H_hww': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'ggH_hww_0j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ggH_hww_1j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ggH_hww_2j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ggH_hww_3j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ggH_hww_4j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ggH_hww_0j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ggH_hww_1j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ggH_hww_2j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ggH_hww_3j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ggH_hww_4j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'qqH_hww_0j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'qqH_hww_1j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'qqH_hww_2j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'qqH_hww_3j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'qqH_hww_4j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'qqH_hww_0j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'qqH_hww_1j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'qqH_hww_2j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'qqH_hww_3j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'qqH_hww_4j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ZH_hww_0j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ZH_hww_1j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ZH_hww_2j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ZH_hww_3j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ZH_hww_4j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ZH_hww_0j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ZH_hww_1j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ZH_hww_2j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ZH_hww_3j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'ZH_hww_4j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         }, 
#                         
#                   'WH_hww_0j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'WH_hww_1j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'WH_hww_2j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'WH_hww_3j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'WH_hww_4j_fid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'WH_hww_0j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'WH_hww_1j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'WH_hww_2j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'WH_hww_3j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         },
#                         
#                   'WH_hww_4j_nonfid': {
#                         'typeStat' : 'bbb',
#                         'zeroMCError' : '1',
#                         }, 
#
#                   'qqH_hww': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'WH_hww': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'ZH_hww': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'H_htt': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'ggH_htt': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'qqH_htt': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'WH_htt': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'ZH_htt': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'ggZH_hww': {
#                         'typeStat' : 'bbb',
#                         },
#
#                   'bbH_hww': {
#                         'typeStat' : 'bbb',
#                         },
#                   
#                   'Fake': {
#                         'typeStat' : 'bbb',
#                         },
#                   
#                   'Vg': {  
#                         'typeStat' : 'bbb',
#                         },
#
#                   'VgS':{  
#                         'typeStat' : 'bbb',
#                         },
#                 },
#               'type'  : 'shape'
#              }

for n in nuisances.values():
  n['skipCMS'] = 1
