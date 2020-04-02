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


cuts0j  = []
cuts1j  = []
cuts2j  = []
cutshpt = []

for k in cuts:
  for cat in cuts[k]['categories']:
    if '0j' in cat: cuts0j.append(k+'_'+cat)
    elif '1j' in cat: cuts1j.append(k+'_'+cat)
    elif '2j' in cat: cuts2j.append(k+'_'+cat)
    elif 'hpt' in cat: cutshpt.append(k+'_'+cat)
    else: print 'WARNING: name of category does not contain on either 0j,1j,2j'

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

#nuisances['lumi'] = {
#    'name': 'lumi_13TeV_2017',
#    'type': 'lnN',
#    'samples': dict((skey, '1.023') for skey in mc if skey not in ['WW', 'top', 'DY'])
#}

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_XYFact'] = {
    'name': 'lumi_13TeV_XYFact',
    'type': 'lnN',
    'samples': dict((skey, '1.008') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_LScale'] = {
    'name': 'lumi_13TeV_LSCale',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['WW', 'top', 'DY'])
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

nuisances['lumi_CurrCalib'] = {
    'name': 'lumi_13TeV_CurrCalib',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_Ghosts'] = {
    'name': 'lumi_13TeV_Ghosts',
    'type': 'lnN',
    'samples': dict((skey, '1.001') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

#### FAKES

nuisances['fake_syst_ee'] = {
    'name': 'CMS_fake_syst_ee',
    'type': 'lnN',
    'samples': {
        'Fake_ee': '1.3'
    },
    'cutspost': lambda self, cuts: [cut for cut in cuts if 'ee' in cut],
}

nuisances['fake_syst_mm'] = {
    'name': 'CMS_fake_syst_mm',
    'type': 'lnN',
    'samples': {
        'Fake_mm': '1.3'
    },
    'cutspost': lambda self, cuts: [cut for cut in cuts if 'mm' in cut],
}

nuisances['fake_ele'] = {
    'name': 'CMS_fake_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWEleUp', 'fakeWEleDown'],
    }
}

nuisances['fake_ele_stat'] = {
    'name': 'CMS_fake_stat_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown']
    }
}

nuisances['fake_mu'] = {
    'name': 'CMS_fake_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWMuUp', 'fakeWMuDown'],
    }
}

nuisances['fake_mu_stat'] = {
    'name': 'CMS_fake_stat_m_2017',
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
        name += '_2017'

    nuisances['btag_shape_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc if skey not in ['DY']),
    }

##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_2l_u)/(TriggerEffWeight_2l))*(TriggerEffWeight_2l>0.02) + (TriggerEffWeight_2l<=0.02)', '(TriggerEffWeight_2l_d)/(TriggerEffWeight_2l)']

nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc if skey not in ['WW', 'top', 'DY']),
}

prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire'] = {
    'name': 'CMS_eff_prefiring_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, prefire_syst) for skey in mc if skey not in ['WW', 'top', 'DY']),
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc if skey not in ['WW', 'top', 'DY']),
}

#nuisances['electronpt'] = {
#    'name': 'CMS_scale_e_2017',
#    'kind': 'suffix',
#    'type': 'shape',
#    'mapUp': 'ElepTup',
#    'mapDown': 'ElepTdo',
#    'samples': dict((skey, ['1', '1']) for skey in mc if skey not in ['WW', 'top', 'DY']),
#    'folderUp': makeMCDirectory('ElepTup_suffix'),
#    'folderDown': makeMCDirectory('ElepTdo_suffix'),
#    'AsLnN': '1'
#}

##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc if skey not in ['WW', 'top', 'DY']),
}

#nuisances['muonpt'] = {
#    'name': 'CMS_scale_m_2017',
#    'kind': 'suffix',
#    'type': 'shape',
#    'mapUp': 'MupTup',
#    'mapDown': 'MupTdo',
#    'samples': dict((skey, ['1', '1']) for skey in mc if skey not in ['WW', 'top', 'DY']),
#    'folderUp': makeMCDirectory('MupTup_suffix'),
#    'folderDown': makeMCDirectory('MupTdo_suffix'),
#    'AsLnN': '1'
#}

##### Jet energy scale

#nuisances['jes'] = {
#    'name': 'CMS_scale_j_2017',
#    'kind': 'suffix',
#    'type': 'shape',
#    'mapUp': 'JESup',
#    'mapDown': 'JESdo',
#    'samples': dict((skey, ['1', '1']) for skey in mc if skey not in ['WW', 'top', 'DY','VZ','Vg','VgS']),
#    'folderUp': makeMCDirectory('JESup_suffix'),
#    'folderDown': makeMCDirectory('JESdo_suffix'),
#    'AsLnN': '1'
#}


##### MET energy scale

#nuisances['met'] = {
#    'name': 'CMS_scale_met_2017',
#    'kind': 'suffix',
#    'type': 'shape',
#    'mapUp': 'METup',
#    'mapDown': 'METdo',
#    'samples': dict((skey, ['1', '1']) for skey in mc if skey not in ['WW', 'top', 'DY']),
#    'folderUp': makeMCDirectory('METup_suffix'),
#    'folderDown': makeMCDirectory('METdo_suffix'),
#    'AsLnN': '1'
#}

##### Pileup

nuisances['PU'] = {
    'name': 'CMS_PU_2017',
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

##### PS and UE

nuisances['PS']  = {
    'name': 'PS',
    'type': 'shape',
    'kind': 'weight_envelope',
    'samples': {
        'WW': ['PSWeight[0]', 'PSWeight[1]', 'PSWeight[2]', 'PSWeight[3]'],
        'ggH_hww': ['PSWeight[0]', 'PSWeight[1]', 'PSWeight[2]', 'PSWeight[3]'],
        'qqH_hww': ['PSWeight[0]', 'PSWeight[1]', 'PSWeight[2]', 'PSWeight[3]'],
    },
    'AsLnN': '1',
    'samplespost': lambda self, samples: dict([('WW', ['1.', '1.'])] + [(sname, ['1.', '1.']) for sname in samples if 'ggH_hww' in sname or 'qqH_hww' in sname])
}

nuisances['UE']  = {
                'name'  : 'UE',
                'skipCMS' : 1,
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                  #'WW'      : ['0.983486179', '0.99458805'], 
                  'ggH_hww' : ['0.994216746291', '1.020025863'],
                  'qqH_hww' : ['0.980501317842', '1.00876768329'],
                },
                'folderUp': treeBaseDir+'/'+mcProduction+'/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__UEup__DYMVA_alt',
                'folderDown': treeBaseDir+'/'+mcProduction+'/MCl1loose2017v6__MCCorr2017v6__l2loose__l2tightOR2017v6__UEdo__DYMVA_alt',
                #'folderUp': makeMCDirectory('UEup'),
                #'folderDown': makeMCDirectory('UEdo'),
                'AsLnN'      : '1',
                'synchronized': False
}

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

#*Br    1 :LHEScaleWeight :                                                   *
#*         | Float_t LHE scale variation weights (w_var / w_nominal); [0] is MUR="0.5" MUF="0.5"; [1] is MUR="0.5" MUF="1.0"; [2] is MUR="0.5" MUF="2.0"; [3] is MUR="1.0" MUF="0.5"; [4] is MUR="1.0" MUF="2.0"; [5] is MUR="2.0" MUF="0.5"; [6] is MUR="2.0" MUF="1.0"; [7] is MUR="2.0" MUF="2.0"*

variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 4, 6, 7]]

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'skipCMS': 1,
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {'DY': variations},
    'AsLnN': '1'
}

#*         | Float_t LHE scale variation weights (w_var / w_nominal); [0] is renscfact=0.5d0 facscfact=0.5d0 ; [1] is renscfact=0.5d0 facscfact=1d0 ; [2] is renscfact=0.5d0 facscfact=2d0 ; [3] is renscfact=1d0 facscfact=0.5d0 ; [4] is renscfact=1d0 facscfact=1d0 ; [5] is renscfact=1d0 facscfact=2d0 ; [6] is renscfact=2d0 facscfact=0.5d0 ; [7] is renscfact=2d0 facscfact=1d0 ; [8] is renscfact=2d0 facscfact=2d0 *

variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]

nuisances['QCDscale_VV'] = {
    'name': 'QCDscale_VV',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'Vg': variations,
        'VZ': variations,
        'VgS': variations,
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

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_WW'] = {
    'name': 'CMS_hww_CRSR_accept_WW',
    'type': 'lnN',
    'samples': {'WW': '1.01'},
    'cuts': [cut for cut in cuts if '_CR_' in cut],
    'cutspost': (lambda self, cuts: [cut for cut in cuts if '_WW_' in cut]),
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
        'qqH_hww': '1.007',
        'qqH_htt': '1.007',
        'WH_hww': '1.05',
        'WH_htt': '1.05',
        'ZH_hww': '1.04',
        'ZH_htt': '1.04',
        'VZ': '1.029',
    }
}

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['QCDscale_gg_ACCEPT'] = {
    'name': 'QCDscale_gg_ACCEPT',
    'samples': {
        'ggH_hww': '1.027',
        'ggH_htt': '1.027',
        'ggZH_hww': '1.027',
        'ggWW': '1.027',
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
nuisances['WWnorm0j']  = {
   'name'     : 'CMS_hww_WWnorm0j',
   'samples'  : {
      'WW'    : '1.00',
      },
   'type'     : 'rateParam',
   #'cutspost' : lambda self, cuts: [cut for cut in cuts if '0j' in cut]
   'cuts'     : cuts0j
}

nuisances['WWnorm1j']  = {
   'name'     : 'CMS_hww_WWnorm1j',
   'samples'  : {
      'WW'    : '1.00',
      },
   'type'     : 'rateParam',
   #'cutspost' : lambda self, cuts: [cut for cut in cuts if '1j' in cut]
   'cuts'     : cuts1j
}

nuisances['WWnorm2j']  = {
   'name'     : 'CMS_hww_WWnorm2j',
   'samples'  : {
      'WW'    : '1.00',
      },
   'type'     : 'rateParam',
   #'cutspost' : lambda self, cuts: [cut for cut in cuts if '2j' in cut]
   'cuts'     : cuts2j
}

#nuisances['ggWWnorm0j']  = {
#   'name'     : 'CMS_hww_ggWWnorm0j',
#   'samples'  : {
#      'ggWW'  : '1.00',
#      },
#   'type'     : 'rateParam', 
#   #'cutspost' : lambda self, cuts: [cut for cut in cuts if '0j' in cut]
#   'cuts'     : cuts0j
#}
#
#nuisances['ggWWnorm1j']  = {
#   'name'     : 'CMS_hww_ggWWnorm1j',
#   'samples'  : {
#      'ggWW'  : '1.00',
#      },
#   'type'     : 'rateParam',
#   #'cutspost' : lambda self, cuts: [cut for cut in cuts if '1j' in cut]
#   'cuts'     : cuts1j
#}
#
#nuisances['ggWWnorm2j']  = {
#   'name'     : 'CMS_hww_ggWWnorm2j',
#   'samples'  : {
#      'ggWW'  : '1.00',
#      },
#   'type'     : 'rateParam',
#   #'cutspost' : lambda self, cuts: [cut for cut in cuts if '2j' in cut]
#   'cuts'     : cuts2j
#}

nuisances['Topnorm0j']  = {
   'name'     : 'CMS_hww_Topnorm0j',
   'samples'  : {
      'top'   : '1.00',
      },
   'type'     : 'rateParam',
   #'cutspost' : lambda self, cuts: [cut for cut in cuts if '0j' in cut]
   'cuts'     : cuts0j
}

nuisances['Topnorm1j']  = {
   'name'     : 'CMS_hww_Topnorm1j',
   'samples'  : {
      'top'   : '1.00',
      },
   'type'     : 'rateParam',
   #'cutspost' : lambda self, cuts: [cut for cut in cuts if '1j' in cut]
   'cuts'     : cuts1j
}

nuisances['Topnorm2j']  = {
   'name'     : 'CMS_hww_Topnorm2j',
   'samples'  : {
      'top'   : '1.00',
      },
   'type'     : 'rateParam',
   #'cutspost' : lambda self, cuts: [cut for cut in cuts if '2j' in cut]
   'cuts'     : cuts2j
}

nuisances['DYeenorm0j']  = {
   'name'     : 'DYeenorm0j',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   #'cuts'     : [cut for cut in cuts0j if 'ee' in cut]
   'cutspost' : lambda self, cuts: [cut for cut in cuts if '0j' in cut and 'ee' in cut]
}

nuisances['DYmmnorm0j']  = {
   'name'     : 'DYmmnorm0j',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   #'cuts'     : [cut for cut in cuts0j if 'mm' in cut]
   'cutspost' : lambda self, cuts: [cut for cut in cuts if '0j' in cut and 'mm' in cut]
}

nuisances['DYeenorm1j']  = {
   'name'     : 'DYeenorm1j',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   #'cuts'     : [cut for cut in cuts1j if 'ee' in cut]
   'cutspost' : lambda self, cuts: [cut for cut in cuts if '1j' in cut and 'ee' in cut]
}

nuisances['DYmmnorm1j']  = {
   'name'     : 'DYmmnorm1j',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   #'cuts'     : [cut for cut in cuts1j if 'mm' in cut]
   'cutspost' : lambda self, cuts: [cut for cut in cuts if '1j' in cut and 'mm' in cut]
}

nuisances['DYeenorm2j']  = {
   'name'     : 'DYeenorm2j',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   #'cuts'     : [cut for cut in cuts2j if 'ee' in cut]
   'cutspost' : lambda self, cuts: [cut for cut in cuts if '2j' in cut and 'ee' in cut and 'vh' not in cut and 'vbf' not in cut]
}

nuisances['DYmmnorm2j']  = {
   'name'     : 'DYmmnorm2j',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   #'cuts'     : [cut for cut in cuts2j if 'mm' in cut]
   'cutspost' : lambda self, cuts: [cut for cut in cuts if '2j' in cut and 'mm' in cut and 'vh' not in cut and 'vbf' not in cut]
}

nuisances['DYeenormvbf']  = {
   'name'     : 'DYeenormvbf',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   'cutspost' : lambda self, cuts: [cut for cut in cuts if 'vbf' in cut and 'ee' in cut]
   #'cuts'     : [cut for cut in cutsvbf if 'ee' in cut]
}

nuisances['DYmmnormvbf']  = {
   'name'     : 'DYmmnormvbf',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   'cutspost' : lambda self, cuts: [cut for cut in cuts if 'vbf' in cut and 'mm' in cut]
   #'cuts'     : [cut for cut in cutsvbf if 'mm' in cut]
}

nuisances['DYeenormvh']  = {
   'name'     : 'DYeenormvh',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   'cutspost' : lambda self, cuts: [cut for cut in cuts if 'vh' in cut and 'ee' in cut]
   #'cuts'     : [cut for cut in cutsvh if 'ee' in cut]
}

nuisances['DYmmnormvh']  = {
   'name'     : 'DYmmnormvh',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   'cutspost' : lambda self, cuts: [cut for cut in cuts if 'vh' in cut and 'mm' in cut]
   #'cuts'     : [cut for cut in cutsvh if 'mm' in cut]
}

nuisances['DYeenormhpt']  = {
   'name'     : 'DYeenormhpt',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   'cutspost' : lambda self, cuts: [cut for cut in cuts if 'hpt' in cut and 'ee' in cut]
   #'cuts'     : [cut for cut in cutsvh if 'ee' in cut]
}

nuisances['DYmmnormhpt']  = {
   'name'     : 'DYmmnormhpt',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   'cutspost' : lambda self, cuts: [cut for cut in cuts if 'hpt' in cut and 'mm' in cut]
   #'cuts'     : [cut for cut in cutsvh if 'mm' in cut]
}

for n in nuisances.values():
    n['skipCMS'] = 1

print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))

try:
  for iNP in nuisances:
    if 'cuts' in nuisances[iNP] :
      newCuts = []
      for iCut in nuisances[iNP]['cuts']:
        for iOptim in optim:
           newCuts.append(iCut)
      nuisances[iNP]['cuts'] = newCuts
except:
  print "No optim dictionary"

