# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py 

# imported from samples.py:
# samples, treeBaseDir, mcProduction, mcSteps
# imported from cuts.py
# cuts
import os                                                                 
                                                                          
if os.path.exists('HTXS_stage1_categories.py') :                          
  handle = open('HTXS_stage1_categories.py','r')                          
  exec(handle)                                                            
  handle.close()                                                          
                                                                          
if os.path.exists('UEnormfactors.py') :                                   
  handle = open('UEnormfactors.py','r')                                   
  exec(handle)                                                            
  handle.close()                                                          
                                                                          
if os.path.exists('thuNormFactors.py') :                                  
  handle = open('thuNormFactors.py','r')                                  
  exec(handle)                                                            
  handle.close()                                                    
                                                                        
sampleNames = []                                                          
for cat in HTXSStage1_1Categories:                                        
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
                                                                          

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, Sample):
    return getSampleFiles(inputDir, Sample, False, 'nanoLatino_')

try:
    mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
except NameError:
    mc = []
    cuts = {}
    nuisances = {}
    def makeMCDirectory(x=''):
        return ''

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()


cuts0j = []
cuts1j = []
cuts2j = []
cutsGT200 = []

for k in cuts:
  for cat in cuts[k]['categories']:
    if '0j' in cat: cuts0j.append(k+'_'+cat)
    elif '1j' in cat: cuts1j.append(k+'_'+cat)
    elif '2j' in cat: cuts2j.append(k+'_'+cat)
    else: cutsGT200.append(k+'_'+cat)     
    #else: print 'WARNING: name of category does not contain either 0j,1j,2j'

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

#nuisances['lumi'] = {
#    'name': 'lumi_13TeV_2016',
#    'type': 'lnN',
#    'samples': dict((skey, '1.025') for skey in mc if skey not in ['WW', 'top', 'DY'])
#}

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2016',
    'type': 'lnN',
    'samples': dict((skey, '1.022') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_XYFact'] = {
    'name': 'lumi_13TeV_XYFact',
    'type': 'lnN',
    'samples': dict((skey, '1.009') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_BBDefl'] = {
    'name': 'lumi_13TeV_BBDefl',
    'type': 'lnN',
    'samples': dict((skey, '1.004') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_DynBeta'] = {
    'name': 'lumi_13TeV_DynBeta',
    'type': 'lnN',
    'samples': dict((skey, '1.005') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_Ghosts'] = {
    'name': 'lumi_13TeV_Ghosts',
    'type': 'lnN',
    'samples': dict((skey, '1.004') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

#### FAKES

## FIXME: check the 30% lnN
nuisances['fake_syst_em'] = {
    'name': 'CMS_fake_syst_em',
    'type': 'lnN',
    'samples': {
        'Fake_em': '1.3'
    },
    'cutspost': lambda self, cuts: [cut for cut in cuts if '20me' not in cut],
    #'perRecoBin': True
}

nuisances['fake_syst_me'] = {
    'name': 'CMS_fake_syst_me',
    'type': 'lnN',
    'samples': {
        'Fake_me': '1.3'
    },
    'cutspost': lambda self, cuts: [cut for cut in cuts if '20em' not in cut],
    #'perRecoBin': True
}

nuisances['fake_ele'] = {
    'name': 'CMS_fake_e_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWEleUp', 'fakeWEleDown'],
    }
}

nuisances['fake_ele_stat'] = {
    'name': 'CMS_fake_stat_e_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown']
    }
}

nuisances['fake_mu'] = {
    'name': 'CMS_fake_m_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWMuUp', 'fakeWMuDown'],
    }
}

nuisances['fake_mu_stat'] = {
    'name': 'CMS_fake_stat_m_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatMuUp', 'fakeWStatMuDown'],
    }
}

##### B-tagger

for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    name = 'CMS_btag_%s' % shift
    if 'stats' in shift:
        name += '_2016'

    nuisances['btag_shape_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
    }

##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_2l_u)/(TriggerEffWeight_2l))*(TriggerEffWeight_2l>0.02) + (TriggerEffWeight_2l<=0.02)', '(TriggerEffWeight_2l_d)/(TriggerEffWeight_2l)']

nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc)
}

prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire'] = {
    'name': 'CMS_eff_prefiring_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, prefire_syst) for skey in mc)
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc)
}

nuisances['electronpt'] = {
    'name': 'CMS_scale_e_2016',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp' : 'ElepTup',
    'mapDown': 'ElepTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('ElepTup_suffix'),
    'folderDown': makeMCDirectory('ElepTdo_suffix'),
    'AsLnN': '0'
}

##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc)
}

nuisances['muonpt'] = {
    'name': 'CMS_scale_m_2016',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'MupTup',
    'mapDown': 'MupTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('MupTup_suffix'),
    'folderDown': makeMCDirectory('MupTdo_suffix'),
    'AsLnN': '0'
}

##### Jet energy scale
jes_systs = ['JESAbsolute','JESAbsolute_2016','JESBBEC1','JESBBEC1_2016','JESEC2','JESEC2_2016','JESFlavorQCD','JESHF','JESHF_2016','JESRelativeBal','JESRelativeSample_2016']

for js in jes_systs:
  nuisances[js] = {
      'name': 'CMS_scale_'+js,
      'kind': 'suffix',
      'type': 'shape',
      'mapUp': js+'up',
      'mapDown': js+'do',
      'samples': dict((skey, ['1', '1']) for skey in mc),
      'folderUp': makeMCDirectory('JESup_suffix'),
      'folderDown': makeMCDirectory('JESdo_suffix'),
      'AsLnN': '0'
  }


##### MET energy scale

nuisances['met'] = {
    'name': 'CMS_scale_met_2016',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'METup',
    'mapDown': 'METdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('METup_suffix'),
    'folderDown': makeMCDirectory('METdo_suffix'),
    'AsLnN': '0'
}

##### Pileup

nuisances['PU'] = {
    'name': 'CMS_PU_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'DY': ['0.993259983266*(puWeightUp/puWeight)', '0.997656381501*(puWeightDown/puWeight)'],
        'top': ['1.00331969187*(puWeightUp/puWeight)', '0.999199609528*(puWeightDown/puWeight)'],
        'WW': ['1.0033022059*(puWeightUp/puWeight)', '0.997085330608*(puWeightDown/puWeight)'],
        'ggH_hww': ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)'],
        'qqH_hww': ['1.00374694528*(puWeightUp/puWeight)', '0.995878596852*(puWeightDown/puWeight)'],
    },
    'AsLnN': '0',
}

##### PS and UE
nuisances['PS_ISR_0jet']  = {
    'name': 'PS_ISR',
    'type': 'lnN',
    'samples': {
        'WW'     : '1.0004147/0.9990865',
        'top'    : '1.0038372/0.9949470',
        'DY'     : '1.0040364/0.9947131',
        'ggH_hww': '1.0024342/0.9966181',
        'qqH_hww': '1.0004923/0.9995787',
        'WH_hww' : '1.0012062/0.9985316',
        'ZH_hww' : '1.0007957/0.9989884',
    },
    'cuts'  : cuts0j,
}

nuisances['PS_ISR_1jet']  = {
    'name': 'PS_ISR',
    'type': 'lnN',
    'samples': {
        'WW'     : '1.0160460/0.9801447',
        'top'    : '1.0051215/0.9934017',
        'DY'     : '1.0079131/0.9900890',
        'ggH_hww': '1.0170139/0.9790389',
        'qqH_hww': '1.0022875/0.9970339',
        'WH_hww' : '1.0017547/0.9978214',
        'ZH_hww' : '1.0015857/0.9980180',
    },
    'cuts'  : cuts1j,
}
nuisances['PS_ISR_2jet']  = {
    'name': 'PS_ISR',
    'type': 'lnN',
    'samples': {
        'WW'     : '0.9619687/1.0472157',
        'top'    : '1.0000271/0.9999406',
        'DY'     : '0.9984594/1.0020964',
        'ggH_hww': '0.9607736/1.0481858',
        'qqH_hww': '0.9998172/1.0001610',
        'WH_hww' : '0.9993065/1.0007548',
        'ZH_hww' : '0.9995627/1.0005501',
    },
    'cuts'  : cuts2j,
}
nuisances['PS_FSR_0jet']  = {
    'name': 'PS_FSR',
    'type': 'lnN',
    'samples': {
        'WW'     : '0.9968231/1.0051404',
        'top'    : '0.9705783/1.0474730',
        'DY'     : '0.9974074/1.0048384',
        'ggH_hww': '0.9955678/1.0060251',
        'qqH_hww': '0.9866768/1.0239547',
        'WH_hww' : '0.9891188/1.0215866',
        'ZH_hww' : '0.9896471/1.0173018',
    },
    'cuts'  : cuts0j,
}
nuisances['PS_FSR_1jet']  = {
    'name': 'PS_FSR',
    'type': 'lnN',
    'samples': {
        'WW'     : '1.0049297/0.9915376',
        'top'    : '0.9871745/1.0215966',
        'DY'     : '1.0049659/0.9909187',
        'ggH_hww': '1.0097427/0.9839139',
        'qqH_hww': '0.9939033/1.0115130',
        'WH_hww' : '0.9990734/1.0065910',
        'ZH_hww' : '0.9936971/1.0145482',
    },
    'cuts'  : cuts1j,
}
nuisances['PS_FSR_2jet']  = {
    'name': 'PS_FSR',
    'type': 'lnN',
    'samples': {
        'WW'     : '1.0084263/0.9843947',
        'top'    : '1.0075607/0.9876902',
        'DY'     : '1.0169378/0.9717602',
        'ggH_hww': '1.0168108/0.9673918',
        'qqH_hww': '1.0057013/0.9888023',
        'WH_hww' : '1.0174174/0.9737212',
        'ZH_hww' : '1.0079410/0.9854651',
    },
    'cuts'  : cuts2j,
}


# An overall 1.5% UE uncertainty will cover all the UEup/UEdo variations
# And we don't observe any dependency of UE variations on njet
nuisances['UE']  = { 
                'name'  : 'UE_CUET',
                'skipCMS' : 1,
                'type': 'lnN',
                'samples': dict((skey, '1.015') for skey in mc), 
}



for name in sampleNames:
  if 'ggH_hww' in name:
    nuisances['PS_ISR_0jet']['samples'].update({name: '1.0024342/0.9966181'})
    nuisances['PS_ISR_0jet']['samples'].update({'cuts': cuts0j})
    nuisances['PS_ISR_1jet']['samples'].update({name: '1.0170139/0.9790389'})
    nuisances['PS_ISR_1jet']['samples'].update({'cuts': cuts1j})
    nuisances['PS_ISR_2jet']['samples'].update({name: '0.9607736/1.0481858'})
    nuisances['PS_ISR_2jet']['samples'].update({'cuts': cuts2j})
    nuisances['PS_FSR_0jet']['samples'].update({name: '0.9955678/1.0060251'})
    nuisances['PS_FSR_0jet']['samples'].update({'cuts': cuts0j})
    nuisances['PS_FSR_1jet']['samples'].update({name: '1.0097427/0.9839139'})
    nuisances['PS_FSR_1jet']['samples'].update({'cuts': cuts1j})
    nuisances['PS_FSR_2jet']['samples'].update({name: '1.0168108/0.9673918'})
    nuisances['PS_FSR_2jet']['samples'].update({'cuts': cuts2j})
'''
nuisances['UE']  = {
    'name'  : 'UE_CUETP',
    'kind'  : 'tree',
    'type'  : 'shape',
    'samples'  : {
      'WW'      : [UEWWNormFactors[0],UEWWNormFactors[1]],
      # new:['0.96858435682', '1.00390617786']    old:['1.0240', '0.9916'],                                                                   
      'ggH_hww' : [UEggHNormFactors[0],UEggHNormFactors[1]],
      # new:['0.929425888608', '0.981263130815']  old:['1.0739', '1.0211'],                                                                   
      'qqH_hww' : [UEqqHNormFactors[0],UEqqHNormFactors[1]],
      # new:['0.967541914923', '1.01489538589']   old:['1.0137', '0.9781'],                                                                   
    },
    'folderUp': makeMCDirectory('UEup'),
    'folderDown': makeMCDirectory('UEdo'),
    'AsLnN'      : '1',
    'synchronized': False
}
'''
#FIXME:Missing information!                                                                                                                   
#for name in sampleNames:                                                                                                                    
#  if 'ggH_hww' in name:                                                                                                                      
#    if 'GT200' not in name:                                                                                                                  
#      scaleUp   = UEggHSTXSNormFactors[name.replace('ggH_hww','GG2H')][0]                                                                    
#      scaleDown = UEggHSTXSNormFactors[name.replace('ggH_hww','GG2H')][1]                                                                    
#      nuisances['UE']['samples'].update({name : [scaleUp, scaleDown]})                                                                       
#    else:                                                                                                                                    
#      nuisances['UE']['samples'].update({name : ['UEggHSTXSNormFactors[GG2H_PTH_200_300][0]',' UEggHSTXSNormFactors[GG2H_PTH_200_300][1]']}) 
#      nuisances['UE']['samples'].update({name : ['UEggHSTXSNormFactors[GG2H_PTH_300_450][0]',' UEggHSTXSNormFactors[GG2H_PTH_300_450][1]']}) 
#      nuisances['UE']['samples'].update({name : ['UEggHSTXSNormFactors[GG2H_PTH_450_650][0]',' UEggHSTXSNormFactors[GG2H_PTH_450_650][1]']}) 
#      nuisances['UE']['samples'].update({name : ['UEggHSTXSNormFactors[GG2H_PTH_GT650][0]'  ,' UEggHSTXSNormFactors[GG2H_PTH_GT650][1]']})   



####### Generic "cross section uncertainties"

apply_on = {
    'top': [
        '(topGenPt * antitopGenPt <= 0.) * 1.0816 + (topGenPt * antitopGenPt > 0.)',
        '(topGenPt * antitopGenPt <= 0.) * 0.9184 + (topGenPt * antitopGenPt > 0.)'
    ]
}

nuisances['singleTopToTTbar'] = {
    'name': 'singleTopToTTbar',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': apply_on
}

## Top pT reweighting uncertainty

nuisances['TopPtRew'] = {
    'name': 'CMS_topPtRew',   # Theory uncertainty
    'kind': 'weight',
    'type': 'shape',
    'samples': {'top': ["1.", "1./Top_pTrw"]},
    'symmetrize': True
}

nuisances['VgStar'] = {
    'name': 'CMS_hww_VgStarScale',
    'type': 'lnN',
    'samples': {
        'VgS_L': '1.25'
    }
}

nuisances['VZ'] = {
    'name': 'CMS_hww_VZScale',
    'type': 'lnN',
    'samples': {
        'VgS_H': '1.16'
    }
}

###### pdf uncertainties

valuesggh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','pdf','sm')
valuesggzh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm')
valuesbbh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','pdf','sm')

nuisances['pdf_Higgs_gg'] = {
    'name': 'pdf_Higgs_gg',
    'samples': {
        'ggH_hww': valuesggh,
        'ggH_htt': valuesggh,
        'ggZH_hww': valuesggzh,
        'bbH_hww': valuesbbh
    },
    'type': 'lnN',
}

values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','pdf','sm')

nuisances['pdf_Higgs_ttH'] = {
    'name': 'pdf_Higgs_ttH',
    'samples': {
        'ttH_hww': values
    },
    'type': 'lnN',
}

valuesqqh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm')
valueswh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','pdf','sm')
valueszh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','pdf','sm')

nuisances['pdf_Higgs_qqbar'] = {
    'name': 'pdf_Higgs_qqbar',
    'type': 'lnN',
    'samples': {
        'qqH_hww': valuesqqh,
        'qqH_htt': valuesqqh,
        'WH_hww': valueswh,
        'WH_htt': valueswh,
        'ZH_hww': valueszh,
        'ZH_htt': valueszh
    },
}

#FIXME: check this 4%
nuisances['pdf_qqbar'] = {
    'name': 'pdf_qqbar',
    'type': 'lnN',
    'samples': {
        'Vg': '1.04',
        'VZ': '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
        'VgS': '1.04', # PDF: 0.0064 / 0.1427 = 0.0448493
    },
}

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['pdf_Higgs_gg_ACCEPT'] = {
    'name': 'pdf_Higgs_gg_ACCEPT',
    'samples': {
        'ggH_hww': '1.006',
        'ggH_htt': '1.006',
        'ggZH_hww': '1.006',
        'bbH_hww': '1.006'
    },
    'type': 'lnN',
}

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['pdf_gg_ACCEPT'] = {
    'name': 'pdf_gg_ACCEPT',
    'samples': {
        'ggWW': '1.006',
    },
    'type': 'lnN',
}

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['pdf_Higgs_qqbar_ACCEPT'] = {
    'name': 'pdf_Higgs_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        'qqH_hww': '1.002',
        'qqH_htt': '1.002',
        'WH_hww': '1.003',
        'WH_htt': '1.003',
        'ZH_hww': '1.002',
        'ZH_htt': '1.002',
    },
}

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['pdf_qqbar_ACCEPT'] = {
    'name': 'pdf_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        'VZ': '1.001',
    },
}

##### Renormalization & factorization scales

#*Br    1 :LHEScaleWeight :                                                   *                                                               
#*         | Float_t LHE scale variation weights (w_var / w_nominal); [0] is MUR="0.5" MUF="0.5"; [1] is MUR="0.5" MUF="1.0"; [2] is MUR="0.5" MUF="2.0"; [3] is MUR="1.0" MUF="0.5"; [4] is MUR="1.0" MUF="2.0"; [5] is MUR="2.0" MUF="0.5"; [6] is MUR="2.0" MUF="1.0"; [7] is MUR="2.0" MUF="2.0"*                                                                                                                                     

variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'skipCMS': 1,
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {'DY': variations},
    'AsLnN': '0'
}

nuisances['QCDscale_VV'] = {
    'name': 'QCDscale_VV',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'Vg': variations,
        'VZ': variations,
        'VgS': variations
    }
}

# ggww and interference
nuisances['QCDscale_ggVV'] = {
    'name': 'QCDscale_ggVV',
    'type': 'lnN',
    'samples': {
        'ggWW': '1.15',
    },
}

# NLL resummation variations
nuisances['WWresum0j']  = {
  'name'  : 'CMS_hww_WWresum_0j',
  'skipCMS' : 1,
  'kind'  : 'weight',
  'type'  : 'shape',
  'samples'  : {
     'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
   },
  'cutspost'  : lambda self, cuts: [cut for cut in cuts if '0j' in cut]
} 

nuisances['WWqscale0j']  = {
   'name'  : 'CMS_hww_WWqscale_0j',
   'skipCMS' : 1,
   'kind'  : 'weight',
   'type'  : 'shape',
   'samples'  : {
      'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
    },
   'cutspost'  : lambda self, cuts: [cut for cut in cuts if '0j' in cut]
}

nuisances['WWresum1j']  = {
  'name'  : 'CMS_hww_WWresum_1j',
  'skipCMS' : 1,
  'kind'  : 'weight',
  'type'  : 'shape',
  'samples'  : {
     'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
   },
  'cutspost'  : lambda self, cuts: [cut for cut in cuts if '1j' in cut]
} 

nuisances['WWqscale1j']  = {
   'name'  : 'CMS_hww_WWqscale_1j',
   'skipCMS' : 1,
   'kind'  : 'weight',
   'type'  : 'shape',
   'samples'  : {
      'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
    },
   'cutspost'  : lambda self, cuts: [cut for cut in cuts if '1j' in cut]
}

nuisances['WWresum2j']  = {
  'name'  : 'CMS_hww_WWresum_2j',
  'skipCMS' : 1,
  'kind'  : 'weight',
  'type'  : 'shape',
  'samples'  : {
     'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
   },
  'cutspost'  : lambda self, cuts: [cut for cut in cuts if '2j' in cut]
} 

nuisances['WWqscale2j']  = {
   'name'  : 'CMS_hww_WWqscale_2j',
   'skipCMS' : 1,
   'kind'  : 'weight',
   'type'  : 'shape',
   'samples'  : {
      'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
    },
   'cutspost'  : lambda self, cuts: [cut for cut in cuts if '2j' in cut]
}
                                                                    
nuisances['WWresumGE200']  = {                                            
                'name'  : 'CMS_hww_WWresum_GE200',                        
                'skipCMS' : 1,                                            
                'kind'  : 'weight',                                       
                'type'  : 'shape',                                        
                'samples'  : {                                            
                'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],            
                },                                                        
               'cutspost'  : lambda self, cuts: [cut for cut in cuts if 'GE200' in cut]
                }                                                         
                                                                          
nuisances['WWqscaleGE200']  = {                                           
                'name'  : 'CMS_hww_WWqscale_GE200',                       
                'skipCMS' : 1,                                            
                'kind'  : 'weight',                                       
                'type'  : 'shape',                                        
                'samples'  : {                                            
                'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],            
                },                                                        
               'cutspost'  : lambda self, cuts: [cut for cut in cuts if 'GE200' in cut]    
                }                                                         
                                                        

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_DY'] = {
    'name': 'CMS_hww_CRSR_accept_DY',
    'type': 'lnN',
    'samples': {'DY': '1.02'},
    'cuts': [cut for cut in cuts if '_CR_' in cut],
    'cutspost': (lambda self, cuts: [cut for cut in cuts if '_DY_' in cut]),
}

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_top'] = {
    'name': 'CMS_hww_CRSR_accept_top',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    'cuts': [cut for cut in cuts if '_CR_' in cut],
    'cutspost': (lambda self, cuts: [cut for cut in cuts if '_top_' in cut]),
}

# Theory uncertainty for ggH
#
#
#   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
#
#   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools

thus = [
#    ('THU_ggH_Mu', 'ggH_mu'),
#    ('THU_ggH_Res', 'ggH_res'),
    ('THU_ggH_Mig01', 'ggH_mig01'),
    ('THU_ggH_Mig12', 'ggH_mig12'),
    ('THU_ggH_VBF2j', 'ggH_VBF2j'),
    ('THU_ggH_VBF3j', 'ggH_VBF3j'),
    ('THU_ggH_PT60', 'ggH_pT60'),
    ('THU_ggH_PT120', 'ggH_pT120'),
    ('THU_ggH_qmtop', 'ggH_qmtop')
]

for name, vname in thus:
    updown = [vname, '2.-%s' % vname]
    
    nuisances[name] = {
        'name': name,
        'skipCMS': 1,
        'kind': 'weight',
        'type': 'shape',
        'samples': {
          'ggH_hww': updown,
          #'ggH_htt': updown
        }
    }
    for sname in sampleNames:
        if 'ggH_hww' in sname:
          if 'GT200' not in sname:
            normthu = globals()[name.replace("THU_","thuNormFactors_")][sname.replace('ggH_hww','GG2H')][0]
            nuisances[name]['samples'].update({sname : [vname+'/'+normthu,'2.-'+vname+'/'+normthu]})
        else:
            nuisances[name]['samples'].update({name : [vname+'/'+globals()[name.replace("THU_","thuNormFactors_")]['GG2H_PTH_200_300'][0]
            ,'2.-'+vname+'/'+globals()[name.replace("THU_","thuNormFactors_")]['GG2H_PTH_200_300'][0]]})
            nuisances[name]['samples'].update({name : [vname+'/'+globals()[name.replace("THU_","thuNormFactors_")]['GG2H_PTH_300_450'][0]
            ,'2.-'+vname+'/'+globals()[name.replace("THU_","thuNormFactors_")]['GG2H_PTH_300_450'][0]]})
            nuisances[name]['samples'].update({name : [vname+'/'+globals()[name.replace("THU_","thuNormFactors_")]['GG2H_PTH_450_650'][0]
            ,'2.-'+vname+'/'+globals()[name.replace("THU_","thuNormFactors_")]['GG2H_PTH_450_650'][0]]})
            nuisances[name]['samples'].update({name : [vname+'/'+globals()[name.replace("THU_","thuNormFactors_")]['GG2H_PTH_GT650'][0]
            ,'2.-'+vname+'/'+globals()[name.replace("THU_","thuNormFactors_")]['GG2H_PTH_GT650'][0]]})

### QCD STXS accept                                                                                                                           
nuisances['QCDscale_0j_ggH_STXS_ACCEPT'] = {
               'name'  : 'QCDscale_0j_ggH_STXS_ACCEPT',
               'samples'  : { },
               'type'  : 'shape',
               'kind'  : 'weight',
              }
nuisances['QCDscale_0j_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_0J_PTH_0_10][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_0J_PTH_0_10][1]']})
nuisances['QCDscale_0j_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_0J_PTH_GT10][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_0J_PTH_GT10][1]']})

nuisances['QCDscale_1j_lowpt_ggH_STXS_ACCEPT'] = {
               'name'  : 'QCDscale_1j_lowpt_ggH_STXS_ACCEPT',
               'samples'  : { },
               'type'  : 'shape',
               'kind'  : 'weight',
              }
nuisances['QCDscale_1j_lowpt_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_1J_PTH_0_60][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_1J_PTH_0_60][1]']})
nuisances['QCDscale_1j_lowpt_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_1J_PTH_60_120][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_1J_PTH_120_200][1]']})
nuisances['QCDscale_1j_lowpt_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_1J_PTH_120_200][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_1J_PTH_120_200][1]']})

nuisances['QCDscale_2j_lowpt_ggH_STXS_ACCEPT'] = {
               'name'  : 'QCDscale_2j_lowpt_ggH_STXS_ACCEPT',
               'samples'  : { },
               'type'  : 'shape',
               'kind'  : 'weight',
              }
nuisances['QCDscale_2j_lowpt_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_GE2J_MJJ_0_350_PTH_0_60][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_GE2J_MJJ_0_350_PTH_0_60][1]']})
nuisances['QCDscale_2j_lowpt_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_GE2J_MJJ_0_350_PTH_60_120][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_GE2J_MJJ_0_350_PTH_60_120][1]']})
nuisances['QCDscale_2j_lowpt_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_GE2J_MJJ_0_350_PTH_60_120][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_GE2J_MJJ_0_350_PTH_60_120][1]']})

nuisances['QCDscale_highpt_ggH_STXS_ACCEPT'] = {
               'name'  : 'QCDscale_highpt_ggH_STXS_ACCEPT',
               'samples'  : { },
               'type'  : 'shape',
               'kind'  : 'weight',
              }
nuisances['QCDscale_highpt_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_PTH_200_300][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_PTH_200_300][1]']})
nuisances['QCDscale_highpt_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_PTH_300_450][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_PTH_300_450][1]']})

nuisances['QCDscale_very_highpt_ggH_STXS_ACCEPT'] = {
               'name'  : 'QCDscale_very_highpt_ggH_STXS_ACCEPT',
               'samples'  : { },
               'type'  : 'shape',
               'kind'  : 'weight',
              }
nuisances['QCDscale_very_highpt_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_PTH_450_650][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_PTH_450_650][1]']})
nuisances['QCDscale_very_highpt_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_PTH_GT650][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_PTH_GT650][1]']})

nuisances['QCDscale_vbf_ggH_STXS_ACCEPT'] = {
               'name'  : 'QCDscale_vbf_ggH_STXS_ACCEPT',
               'samples'  : { },
               'type'  : 'shape',
               'kind'  : 'weight',
              }
nuisances['QCDscale_vbf_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_GE2J_MJJ_350_700_PTHJJ_0_25][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_GE2J_MJJ_350_700_PTHJJ_0_25][1]']})
nuisances['QCDscale_vbf_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_GE2J_MJJ_350_700_PTHJJ_GT25][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_GE2J_MJJ_350_700_PTHJJ_GT25][1]']})
nuisances['QCDscale_vbf_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_GE2J_MJJ_GT700_PTHJJ_0_25][0]','LHEScaleWeight[0]/QCDScaleFactors[GG2H_GE2J_MJJ_GT700_PTHJJ_0_25][1]']})
nuisances['QCDscale_vbf_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_GE2J_MJJ_GT700_PTHJJ_GT25][0]','LHEScaleWeight[0]/QCDScaleFactors[GG2H_GE2J_MJJ_GT700_PTHJJ_GT25][1]']})


#### QCD scale uncertainties for Higgs signals other than ggH

values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm')

nuisances['QCDscale_qqH'] = {
    'name': 'QCDscale_qqH', 
    'samples': {
        'qqH_hww': values,
        'qqH_htt': values
    },
    'type': 'lnN'
}

valueswh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm')
valueszh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm')

nuisances['QCDscale_VH'] = {
    'name': 'QCDscale_VH', 
    'samples': {
        'WH_hww': valueswh,
        'WH_htt': valueswh,
        'ZH_hww': valueszh,
        'ZH_htt': valueszh
    },
    'type': 'lnN',
}

values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm')

nuisances['QCDscale_ggZH'] = {
    'name': 'QCDscale_ggZH', 
    'samples': {
        'ggZH_hww': values
    },
    'type': 'lnN',
}

values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm')

nuisances['QCDscale_ttH'] = {
    'name': 'QCDscale_ttH',
    'samples': {
        'ttH_hww': values
    },
    'type': 'lnN',
}

nuisances['QCDscale_WWewk'] = {
    'name': 'QCDscale_WWewk',
    'samples': {
        'WWewk': '1.11',
    },
    'type': 'lnN'
}

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['QCDscale_qqbar_ACCEPT'] = {
    'name': 'QCDscale_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        'qqH_hww': '1.003',
        'qqH_htt': '1.003',
        'WH_hww': '1.010',
        'WH_htt': '1.010',
        'ZH_hww': '1.015',
        'ZH_htt': '1.015',
        #'VZ': '1.029', # this shouldn't be here because we have full shape-based uncertainty for VZ
    }
}

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['QCDscale_gg_ACCEPT'] = {
    'name': 'QCDscale_gg_ACCEPT',
    'samples': {
        #'ggH_hww': '1.027', # shouldn't be here
        'ggH_htt': '1.012',
        'ggZH_hww': '1.012',
        'ggWW': '1.012',
    },
    'type': 'lnN',
}

## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat'] = {
    'type': 'auto',
    'maxPoiss': '10',
    'includeSignal': '0',
    #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
    #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
    'samples': {}
}

## rate parameters
nuisances['DYttnorm0j']  = {
               'name'  : 'CMS_hww_DYttnorm0j',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts0j
              }

nuisances['DYttnorm1j']  = {
               'name'  : 'CMS_hww_DYttnorm1j',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts1j+cutsGT200
              }

nuisances['DYttnorm2j']  = {
                 'name'  : 'CMS_hww_DYttnorm2j',
                 'samples'  : {
                     'DY' : '1.00',
                     },
                 'type'  : 'rateParam',
                 'cuts'  : cuts2j
                }


nuisances['WWnorm0j']  = {
               'name'  : 'CMS_hww_WWnorm0j',
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts0j
              }

nuisances['ggWWnorm0j']  = {
               'name'  : 'CMS_hww_WWnorm0j',
               'samples'  : {
                   'ggWW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts0j
              }


nuisances['WWnorm1j']  = {
               'name'  : 'CMS_hww_WWnorm1j',
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts1j+cutsGT200
              }

nuisances['ggWWnorm1j']  = {
               'name'  : 'CMS_hww_WWnorm1j',
               'samples'  : {
                   'ggWW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts1j+cutsGT200
              }


nuisances['WWnorm2j']  = {
               'name'  : 'CMS_hww_WWnorm2j',
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts2j
              }


nuisances['ggWWnorm2j']  = {
               'name'  : 'CMS_hww_WWnorm2j',
               'samples'  : {
                   'ggWW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts2j
              }


nuisances['Topnorm0j']  = {
               'name'  : 'CMS_hww_Topnorm0j',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts0j
              }

nuisances['Topnorm1j']  = {
               'name'  : 'CMS_hww_Topnorm1j',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts1j+cutsGT200
              }

nuisances['Topnorm2j']  = {
               'name'  : 'CMS_hww_Topnorm2j',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts2j
              }



for n in nuisances.values():
    n['skipCMS'] = 1

print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))
