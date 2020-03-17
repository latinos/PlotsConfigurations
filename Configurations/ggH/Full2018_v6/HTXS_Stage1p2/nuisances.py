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

if os.path.exists('HTXS_Stage1/UEnormfactors.py') :
  handle = open('HTXS_Stage1/UEnormfactors.py','r')
  exec(handle)
  handle.close()

if os.path.exists('HTXS_Stage1/thuNormFactors.py') :
  handle = open('HTXS_Stage1/thuNormFactors.py','r')
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
    #elif 'GT200' in cat: cutsGT200.append(k+'_'+cat)
    else: cutsGT200.append(k+'_'+cat)
    #else: print 'WARNING: name of category does not contain either 0j,1j,2j,GT200', cat

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

#nuisances['lumi'] = {
#    'name': 'lumi_13TeV_2018',
#    'type': 'lnN',
#    'samples': dict((skey, '1.025') for skey in mc if skey not in ['WW', 'top', 'DY'])
#}

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2018',
    'type': 'lnN',
    'samples': dict((skey, '1.015') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_XYFact'] = {
    'name': 'lumi_13TeV_XYFact',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_LScale'] = {
    'name': 'lumi_13TeV_LSCale',
    'type': 'lnN',
    'samples': dict((skey, '1.002') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_CurrCalib'] = {
    'name': 'lumi_13TeV_CurrCalib',
    'type': 'lnN',
    'samples': dict((skey, '1.002') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

#### FAKES

nuisances['fake_syst_em'] = {
    'name': 'CMS_fake_syst_em',
    'type': 'lnN',
    'samples': {
        'Fake_em': '1.3'
    },
    'cutspost': lambda self, cuts: [cut for cut in cuts if '20me' not in cut],
}

nuisances['fake_syst_me'] = {
    'name': 'CMS_fake_syst_me',
    'type': 'lnN',
    'samples': {
        'Fake_me': '1.3'
    },
    'cutspost': lambda self, cuts: [cut for cut in cuts if '20em' not in cut],
}

nuisances['fake_ele'] = {
    'name': 'CMS_fake_e_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWEleUp', 'fakeWEleDown'],
    }
}

nuisances['fake_ele_stat'] = {
    'name': 'CMS_fake_stat_e_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown']
    }
}

nuisances['fake_mu'] = {
    'name': 'CMS_fake_m_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWMuUp', 'fakeWMuDown'],
    }
}

nuisances['fake_mu_stat'] = {
    'name': 'CMS_fake_stat_m_2018',
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
        name += '_2018'

    nuisances['btag_shape_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
    }

##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_2l_u)/(TriggerEffWeight_2l))*(TriggerEffWeight_2l>0.02) + (TriggerEffWeight_2l<=0.02)', '(TriggerEffWeight_2l_d)/(TriggerEffWeight_2l)']

nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc)
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc)
}

nuisances['electronpt'] = {
    'name': 'CMS_scale_e_2018',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'ElepTup',
    'mapDown': 'ElepTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('ElepTup_suffix'),
    'folderDown': makeMCDirectory('ElepTdo_suffix'),
    'AsLnN': '1'
}

##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc)
}

nuisances['muonpt'] = {
    'name': 'CMS_scale_m_2018',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'MupTup',
    'mapDown': 'MupTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('MupTup_suffix'),
    'folderDown': makeMCDirectory('MupTdo_suffix'),
    'AsLnN': '1'
}

##### Jet energy scale
jes_systs = ['JESAbsolute','JESAbsolute_2018','JESBBEC1','JESBBEC1_2018','JESEC2','JESEC2_2018','JESFlavorQCD','JESHF','JESHF_2018','JESRelativeBal','JESRelativeSample_2018']

for js in jes_systs:
  nuisances[js] = {
      'name': 'CMS_scale_'+js,
      'kind': 'suffix',
      'type': 'shape',
      'mapUp': js+'up',
      'mapDown': js+'do',
      'samples': dict((skey, ['1', '1']) for skey in mc if skey not in ['VZ','Vg','VgS']),
      'folderUp': makeMCDirectory('JESup_suffix'),
      'folderDown': makeMCDirectory('JESdo_suffix'),
      'AsLnN': '1'
  }

##### MET energy scale

nuisances['met'] = {
    'name': 'CMS_scale_met_2018',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'METup',
    'mapDown': 'METdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('METup_suffix'),
    'folderDown': makeMCDirectory('METdo_suffix'),
    'AsLnN': '1'
}

##### Pileup

nuisances['PU'] = {
    'name': 'CMS_PU_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'DY': ['0.993259983266*(puWeightUp/puWeight)', '0.997656381501*(puWeightDown/puWeight)'],
        'top': ['1.00331969187*(puWeightUp/puWeight)', '0.999199609528*(puWeightDown/puWeight)'],
        'WW': ['1.0033022059*(puWeightUp/puWeight)', '0.997085330608*(puWeightDown/puWeight)'],
        'ggH_hww': ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)'],
        'qqH_hww': ['1.00374694528*(puWeightUp/puWeight)', '0.995878596852*(puWeightDown/puWeight)'],
    },
    'AsLnN': '1',
}
for name in sampleNames:
  if 'ggH_hww' in name:
    nuisances['PU']['samples'].update({name: ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)']})

##### PS and UE
nuisances['PS0jet']  = {
    'name': 'PS',
    'type': 'lnN',
    'samples': {
        'WW'     : '1.0051/0.9968',
        'top'    : '1.0474/0.9705',
        'DY'     : '1.0048/0.9947',
        'ggH_hww': '1.0059/0.9955',
        'qqH_hww': '1.0241/0.9866',
        'WH_hww' : '1.0213/0.9891',
        'ZH_hww' : '1.0171/0.9897',
    },
    'cuts'  : cuts0j,
}

nuisances['PS1jet']  = {
    'name': 'PS',
    'type': 'lnN',
    'samples': {
        'WW'     : '1.0160/0.9801',
        'top'    : '1.0216/0.9871',
        'DY'     : '1.0079/0.9900',
        'ggH_hww': '1.0170/0.9790',
        'qqH_hww': '1.0116/0.9938',
        'WH_hww' : '1.0066/0.9978',
        'ZH_hww' : '1.0145/0.9937',
    },
    'cuts'  : cuts1j,
}

nuisances['PS2jet']  = {
    'name': 'PS',
    'type': 'lnN',
    'samples': {
        'WW'     : '1.0472/0.9619',
        'top'    : '1.0075/0.9876' ,
        'DY'     : '1.0169/0.9717',
        'ggH_hww': '1.0481/0.9607',
        'qqH_hww': '1.0057/0.9888',
        'WH_hww' : '1.0174/0.9737',
        'ZH_hww' : '1.0079/0.9854',
    },
    'cuts'  : cuts2j,
}

for name in sampleNames:
  if 'ggH_hww' in name:
    nuisances['PS']['samples'].update({name: ['PSWeight[0]', 'PSWeight[1]', 'PSWeight[2]', 'PSWeight[3]']})

#Normalization factors have been recomputed for 2018
nuisances['UE']  = {
                'name'  : 'UE_CP5',
                'skipCMS' : 1,
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                  'WW'      : [UEWWNormFactors[0],UEWWNormFactors[1]],
                  # new: ['1.02963742701', '1.00534389668']  old:['1.12720771849', '1.13963144574']
                  'ggH_hww' : [UEggHNormFactors[0],UEggHNormFactors[1]],
                  # new: ['0.949039088454', '1.00604178956'] old:['1.00211385568', '0.994966378288']
                  'qqH_hww' : [UEqqHNormFactors[0],UEqqHNormFactors[1]],
                  # new: ['0.996426044615', '1.00037976527'] old:['1.00367895901', '0.994831373195']
                },
                'folderUp': makeMCDirectory('UEup'),
                'folderDown': makeMCDirectory('UEdo'),
                'AsLnN'      : '1',
                'synchronized': False
}

for name in sampleNames:
  if 'ggH_hww' in name:
    if 'GT200' not in name:
      scaleUp   = UEggHSTXSNormFactors[name.replace('ggH_hww','GG2H')][0]
      scaleDown = UEggHSTXSNormFactors[name.replace('ggH_hww','GG2H')][1]
      nuisances['UE']['samples'].update({name : [scaleUp, scaleDown]})
    else:
      nuisances['UE']['samples'].update({name : ['UEggHSTXSNormFactors[GG2H_PTH_200_300][0]',' UEggHSTXSNormFactors[GG2H_PTH_200_300][1]']})
      nuisances['UE']['samples'].update({name : ['UEggHSTXSNormFactors[GG2H_PTH_300_450][0]',' UEggHSTXSNormFactors[GG2H_PTH_300_450][1]']})
      nuisances['UE']['samples'].update({name : ['UEggHSTXSNormFactors[GG2H_PTH_450_650][0]',' UEggHSTXSNormFactors[GG2H_PTH_450_650][1]']})
      nuisances['UE']['samples'].update({name : ['UEggHSTXSNormFactors[GG2H_PTH_GT650][0]'  ,' UEggHSTXSNormFactors[GG2H_PTH_GT650][1]']})


####### Generic "cross section uncertainties"

apply_on = {
    'top': [
        'isSingleTop * 1.0816 + isTTbar',
        'isSingleTop * 0.9184 + isTTbar'
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

nuisances['pdf_qqbar'] = {
    'name': 'pdf_qqbar',
    'type': 'lnN',
    'samples': {
        'Vg': '1.04',
        'VZ': '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
        'VgS': '1.04', # PDF: 0.0064 / 0.1427 = 0.0448493
    },
}

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


nuisances['pdf_gg_ACCEPT'] = {
    'name': 'pdf_gg_ACCEPT',
    'samples': {
        'ggWW': '1.006',
    },
    'type': 'lnN',
}

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

nuisances['pdf_qqbar_ACCEPT'] = {
    'name': 'pdf_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        'VZ': '1.001',
    },
}

##### Renormalization & factorization scales                                                                                                   

## Shape nuisance due to QCD scale variations for DY                                                                                           
# LHE scale variation weights (w_var / w_nominal)                                                                                              
#[0] is MUR="0.5" MUF="0.5";                                                                                                                   
#[1] is MUR="0.5" MUF="1.0";                                                                                                                   
#[2] is MUR="0.5" MUF="2.0";                                                                                                                   
#[3] is MUR="1.0" MUF="0.5";                                                                                                                   
#[4] is MUR="1.0" MUF="2.0";                                                                                                                   
#[5] is MUR="2.0" MUF="0.5";                                                                                                                   
#[6] is MUR="2.0" MUF="1.0";                                                                                                                   
#[7] is MUR="2.0" MUF="2.0"*                                                                                                                   

variationsDY = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 4, 6, 7]]

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'skipCMS': 1,
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {'DY': variationsDY},
    'AsLnN': '1'
}
## Shape nuisance due to QCD scale variations for other samples                                                                                
# LHE scale variation weights (w_var / w_nominal)                                                                                              
# [0] is muR=0.50000E+00 muF=0.50000E+00                                                                                                       
# [1] is muR=0.50000E+00 muF=0.10000E+01                                                                                                       
# [2] is muR=0.50000E+00 muF=0.20000E+01                                                                                                       
# [3] is muR=0.10000E+01 muF=0.50000E+00                                                                                                       
# [4] is muR=0.10000E+01 muF=0.10000E+01                                                                                                       
# [5] is muR=0.10000E+01 muF=0.20000E+01                                                                                                       
# [6] is muR=0.20000E+01 muF=0.50000E+00                                                                                                       
# [7] is muR=0.20000E+01 muF=0.10000E+01                                                                                                       
# [8] is muR=0.20000E+01 muF=0.20000E+01                                                                                                       

variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]


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
nuisances['QCDscale_ggVV'] = {
    'name': 'QCDscale_ggVV',
    'type': 'lnN',
    'samples': {
        'ggWW': '1.15',
    },
}

##### Renormalization & factorization scales                                                                                                   
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
    #'samples': {'DY': '1.1'},
    'cuts': [cut for cut in cuts if '_CR_' in cut],
    #'cutspost': (lambda self, cuts: [cut for cut in cuts if '_DY_' in cut and cut in self['cuts']]),
    'cutspost': (lambda self, cuts: [cut for cut in cuts if '_DY_' in cut]),
    #'perRecoBin': True
}

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_top'] = {
    'name': 'CMS_hww_CRSR_accept_top',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    #'samples': {'top': '1.05'},
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
            #print globals()                                                                                                                   
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

nuisances['QCDscale_veryhighpt_ggH_STXS_ACCEPT'] = {                                                                                          
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
nuisances['QCDscale_vbf_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_GE2J_MJJ_GT700_PTHJJ_0_25][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_GE2J_MJJ_GT700_PTHJJ_0_25][1]']})
nuisances['QCDscale_vbf_ggH_STXS_ACCEPT']['samples'].update({name : ['LHEScaleWeight[8]/QCDScaleFactors[GG2H_GE2J_MJJ_GT700_PTHJJ_GT25][0]',' LHEScaleWeight[0]/QCDScaleFactors[GG2H_GE2J_MJJ_GT700_PTHJJ_GT25][1]']})


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
    }
}

nuisances['QCDscale_gg_ACCEPT'] = {
    'name': 'QCDscale_gg_ACCEPT',
    'samples': {
        'ggH_hww': '1.012',
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

##rate parameters
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
