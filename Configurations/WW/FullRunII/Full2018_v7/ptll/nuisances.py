# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py 

# imported from samples.py:
# samples, treeBaseDir, mcProduction, mcSteps
# imported from cuts.py
# cuts

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, Sample):
    return getSampleFiles(inputDir, Sample, False, 'nanoLatino_')

try:
    mc_emb = [skey for skey in samples if skey != 'DATA' and skey != 'Dyveto' and not skey.startswith('Fake')]
    mc = [skey for skey in mc_emb if skey != 'Dyemb']
except NameError:
    mc = []
    cuts = {}
    nuisances = {}
    def makeMCDirectory(x=''):
        return ''

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()

############ Load norm factors / differential binning to normalize signal ####################
import os
import json
configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # dphijj
configurations = os.path.dirname(configurations) # Full2018_v7
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

diffcuts = samples['WW']['subsamples']
nfdict = json.load(open("%s/WW/FullRunII/Full2018_v7/ptll/WWnorm.json"%configurations))

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2018',
    'type': 'lnN',
    'samples': dict((skey, '1.015') for skey in mc if skey not in ['top'])
}

nuisances['lumi_Correlated'] = {
    'name': 'lumi_13TeV_correlated',
    'type': 'lnN',
    'samples': dict((skey, '1.020') for skey in mc if skey not in ['top'])
}

nuisances['lumi_1718'] = {
    'name': 'lumi_13TeV_1718',
    'type': 'lnN',
    'samples': dict((skey, '1.002') for skey in mc if skey not in ['top'])
}

#### FAKES

nuisances['fake_syst_em'] = {
    'name': 'CMS_fake_syst_em',
    'type': 'lnN',
    'samples': {
        'Fake_em': '1.3'
    },
}

nuisances['fake_syst_me'] = {
    'name': 'CMS_fake_syst_me',
    'type': 'lnN',
    'samples': {
        'Fake_me': '1.3'
    },
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
        'AsLnN': '1'
    }

##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_2l_u)/(TriggerEffWeight_2l))*(TriggerEffWeight_2l>0.02) + (TriggerEffWeight_2l<=0.02)', '(TriggerEffWeight_2l_d)/(TriggerEffWeight_2l)']

nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc_emb),
    'AsLnN': '1'
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc_emb),
    #'AsLnN': '1'
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
'''
if useEmbeddedDY:
  nuisances['electronpt_emb'] = {
    'name': 'CMS_scale_e_2018',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp' : 'ElepTup',
    'mapDown': 'ElepTdo',
    'samples': {'Dyemb': ['1', '1']},
    'folderUp': treeBaseDir+'/Embedding2018_102X_nAODv6_Full2018v6/DATAl1loose2018v6__l2loose__l2tightOR2018v6__Embedding__EmbElepTup_suffix/',
    'folderDown': treeBaseDir+'/Embedding2018_102X_nAODv6_Full2018v6/DATAl1loose2018v6__l2loose__l2tightOR2018v6__Embedding__EmbElepTdo_suffix/',
    'AsLnN': '1'
  }
'''
##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc_emb),
    #'AsLnN': '1'
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
'''
if useEmbeddedDY:
  nuisances['muonpt_emb'] = {
    'name': 'CMS_scale_m_2018',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp' : 'MupTup',
    'mapDown': 'MupTdo',
    'samples': {'Dyemb': ['1', '1']},
    'folderUp': treeBaseDir+'/Embedding2018_102X_nAODv6_Full2018v6/DATAl1loose2018v6__l2loose__l2tightOR2018v6__Embedding__EmbMupTup_suffix/',
    'folderDown': treeBaseDir+'/Embedding2018_102X_nAODv6_Full2018v6/DATAl1loose2018v6__l2loose__l2tightOR2018v6__Embedding__EmbMupTdo_suffix/',
    'AsLnN': '1'
  }
'''
##### Jet energy scale
jes_systs = ['JESAbsolute','JESAbsolute_2018','JESBBEC1','JESBBEC1_2018','JESEC2','JESEC2_2018','JESFlavorQCD','JESHF','JESHF_2018','JESRelativeBal','JESRelativeSample_2018']

for js in jes_systs:
  if 'Absolute' in js:
    folderup = makeMCDirectory('JESAbsoluteup_suffix')
    folderdo = makeMCDirectory('JESAbsolutedo_suffix')
  elif 'BBEC1' in js:
    folderup = makeMCDirectory('JESBBEC1up_suffix')
    folderdo = makeMCDirectory('JESBBEC1do_suffix')
  elif 'EC2' in js:
    folderup = makeMCDirectory('JESEC2up_suffix')
    folderdo = makeMCDirectory('JESEC2do_suffix')
  elif 'HF' in js:
    folderup = makeMCDirectory('JESHFup_suffix')
    folderdo = makeMCDirectory('JESHFdo_suffix')
  elif 'Relative' in js:
    folderup = makeMCDirectory('JESRelativeup_suffix')
    folderdo = makeMCDirectory('JESRelativedo_suffix')
  elif 'FlavorQCD' in js:
    folderup = makeMCDirectory('JESFlavorQCDup_suffix')
    folderdo = makeMCDirectory('JESFlavorQCDdo_suffix')

  nuisances[js] = {
      'name': 'CMS_scale_'+js,
      'kind': 'suffix',
      'type': 'shape',
      'mapUp': js+'up',
      'mapDown': js+'do',
      'samples': dict((skey, ['1', '1']) for skey in mc),
      'folderUp': folderup,
      'folderDown': folderdo,
      'AsLnN': '1'
  }

##### Jet energy resolution
nuisances['JER'] = {
    'name': 'CMS_res_j_2018',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'JERup',
    'mapDown': 'JERdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('JERup_suffix'),
    'folderDown': makeMCDirectory('JERdo_suffix'),
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
'''
##### Di-Tau vetoing for embedding
if useEmbeddedDY: 
  nuisances['embedveto']  = {
                  'name'  : 'CMS_embed_veto_2018',
                  'kind'  : 'weight',
                  'type'  : 'shape',
                  'samples'  : {
                     'Dyemb'    : ['1', '1'],
                     'Dyveto'   : ['0.1', '-0.1'],
                  }
  }
'''
##### Pileup

nuisances['PU'] = {
    'name': 'CMS_PU_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'DY'      : ['1.009793*(puWeightUp/puWeight)', '0.991033*(puWeightDown/puWeight)'],
        'WW'      : ['1.010996*(puWeightUp/puWeight)', '0.989136*(puWeightDown/puWeight)'],
        'ggWW'    : ['1.010540*(puWeightUp/puWeight)', '0.989944*(puWeightDown/puWeight)'],
        'WWewk'   : ['1.002531*(puWeightUp/puWeight)', '0.997567*(puWeightDown/puWeight)'],
        'Wg'      : ['0.984219*(puWeightUp/puWeight)', '1.014413*(puWeightDown/puWeight)'],
        'WgS'     : ['1.000596*(puWeightUp/puWeight)', '1.000260*(puWeightDown/puWeight)'],
        'Zg'      : ['1.010885*(puWeightUp/puWeight)', '0.985743*(puWeightDown/puWeight)'],
        'ZgS'     : ['1.053390*(puWeightUp/puWeight)', '0.950510*(puWeightDown/puWeight)'],
        'WZ'      : ['1.001859*(puWeightUp/puWeight)', '0.998242*(puWeightDown/puWeight)'],
        'ZZ'      : ['1.005540*(puWeightUp/puWeight)', '0.994286*(puWeightDown/puWeight)'],
        'VVV'     : ['1.007710*(puWeightUp/puWeight)', '0.992067*(puWeightDown/puWeight)'],
        'top'     : ['1.005290*(puWeightUp/puWeight)', '0.994964*(puWeightDown/puWeight)'],
        'ggH_htt' : ['1.003255*(puWeightUp/puWeight)', '0.996632*(puWeightDown/puWeight)'],
        'qqH_htt' : ['0.999568*(puWeightUp/puWeight)', '1.000504*(puWeightDown/puWeight)'],
        'WH_htt'  : ['1.009995*(puWeightUp/puWeight)', '0.990249*(puWeightDown/puWeight)'],
        'ZH_htt'  : ['1.007817*(puWeightUp/puWeight)', '0.991347*(puWeightDown/puWeight)'],
        'ggH_hww' : ['1.012350*(puWeightUp/puWeight)', '0.988249*(puWeightDown/puWeight)'],
        'qqH_hww' : ['1.009921*(puWeightUp/puWeight)', '0.989533*(puWeightDown/puWeight)'],
        'WH_hww'  : ['1.006620*(puWeightUp/puWeight)', '0.992165*(puWeightDown/puWeight)'],
        'ZH_hww'  : ['1.001434*(puWeightUp/puWeight)', '0.998009*(puWeightDown/puWeight)'],
        'ggZH_hww': ['1.009646*(puWeightUp/puWeight)', '0.990326*(puWeightDown/puWeight)'],
        'ttH_hww' : ['1.002873*(puWeightUp/puWeight)', '0.996800*(puWeightDown/puWeight)'],
    },
    'AsLnN': '1',
}

### PU ID SF uncertainty
puid_syst = ['Jet_PUIDSF_up/Jet_PUIDSF', 'Jet_PUIDSF_down/Jet_PUIDSF']

nuisances['jetPUID'] = {
    'name': 'CMS_PUID_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, puid_syst) for skey in mc)
}

##### PS
nuisances['PS_ISR']  = {
    'name': 'PS_ISR',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['PSWeight[2]', 'PSWeight[0]']) for skey in mc if skey not in ['WW','ggWW']),
}

norm_ISR_WW   = ['+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["PS_ISR"]["WW_"+binname][i]) for binname in diffcuts]) for i in range(2)]
norm_ISR_ggWW = ['+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["PS_ISR"]["ggWW_"+binname][i]) for binname in diffcuts]) for i in range(2)]

nuisances['PS_ISR_WW']  = {
    'name': 'PS_ISR',
    'kind' : 'weight',
    'type': 'shape',
    'samples': {        
        'WW'   : ['({})*PSWeight[3]'.format(norm_ISR_WW[0]),'({})*PSWeight[1]'.format(norm_ISR_WW[1])],
        'ggWW' : ['({})*PSWeight[3]'.format(norm_ISR_ggWW[0]),'({})*PSWeight[1]'.format(norm_ISR_ggWW[1])]
    }
}

nuisances['PS_FSR']  = {
    'name': 'PS_FSR',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['PSWeight[3]', 'PSWeight[1]']) for skey in mc if skey not in ['WW','ggWW']),
}

norm_FSR_WW   = ['+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["PS_FSR"]["WW_"+binname][i]) for binname in diffcuts]) for i in range(2)]
norm_FSR_ggWW = ['+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["PS_FSR"]["ggWW_"+binname][i]) for binname in diffcuts]) for i in range(2)]

nuisances['PS_FSR_WW']  = {
    'name': 'PS_FSR',
    'kind' : 'weight',
    'type': 'shape',
    'samples': {        
        'WW'   : ['({})*PSWeight[3]'.format(norm_FSR_WW[0]),'({})*PSWeight[1]'.format(norm_FSR_WW[1])],
        'ggWW' : ['({})*PSWeight[3]'.format(norm_FSR_ggWW[0]),'({})*PSWeight[1]'.format(norm_FSR_ggWW[1])]
    }
}

# An overall 1.5% UE uncertainty will cover all the UEup/UEdo variations
# And we don't observe any dependency of UE variations on njet
nuisances['UE']  = {
                'name'  : 'UE_CP5',
                'skipCMS' : 1,
                'type': 'lnN',
                'samples': dict((skey, '1.015') for skey in mc if skey not in ['WW','ggWW']), 
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


nuisances['WgStar'] = {
    'name': 'CMS_hww_WgStarScale',
    'type': 'lnN',
    'samples': {
        'WgS': '1.25'
    }
}
'''
nuisances['VZ'] = {
    'name': 'CMS_hww_VZScale',
    'type': 'lnN',
    'samples': {
        'WZ': '1.16'
    }
}
'''
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
        'Wg': '1.04',
        'Zg': '1.04',
        'ZZ': '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
        'WZ': '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
        'WgS': '1.04', # PDF: 0.0064 / 0.1427 = 0.0448493
        'ZgS': '1.04', # PDF: 0.0064 / 0.1427 = 0.0448493
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

#nuisances['pdf_gg_ACCEPT'] = {
#    'name': 'pdf_gg_ACCEPT',
#    'samples': {
#        'ggWW': '1.006',
#    },
#    'type': 'lnN',
#}

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
        'WZ': '1.001',
    },
}

varupstring   = "(     LHEPdfWeight[{i}]/LHEPdfWeight[0] *(abs(LHEPdfWeight[{i}]/LHEPdfWeight[0])<=100)+1.0*(abs(LHEPdfWeight[{i}]/LHEPdfWeight[0])>100))"
vardownstring = "((2.0-LHEPdfWeight[{i}]/LHEPdfWeight[0])*(abs(LHEPdfWeight[{i}]/LHEPdfWeight[0])<=100)+1.0*(abs(LHEPdfWeight[{i}]/LHEPdfWeight[0])>100))"

for i in range(1,33):
    # LHEPdfWeight are PDF4LHC variations, while nominal is NNPDF.
    # LHEPdfWeight[i] reweights from NNPDF nominal to PDF4LHC member i
    # LHEPdfWeight[0] in particular reweights from NNPDF nominal to PDF4LHC nominal
    norm_PDF = ['+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["pdf_WW_eigen%d"%i]["WW_"+binname][0]) for binname in diffcuts]),
                '+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["pdf_WW_eigen%d"%i]["WW_"+binname][1]) for binname in diffcuts])]
    
    nuisances['pdf_WW_eigen'+str(i)]  = {
        'name'  : 'CMS_hww_pdf_WW_eigen'+str(i),
        'kind'  : 'weight',
        'type'  : 'shape',
        'samples': {
            'WW' : [varupstring.format(i=i)+'*('+norm_PDF[0]+')', vardownstring.format(i=i)+'*('+norm_PDF[1]+')']
        },
    }
    
##### Renormalization & factorization scales

## Shape nuisance due to QCD scale variations for DY
# LHE scale variation weights (w_var / w_nominal)

## DY has 8 LHEScaleWeights; all others have 9 or 0
DYvariations = ['Alt$(LHEScaleWeight[0],1)', 'Alt$(LHEScaleWeight[1],1)', 'Alt$(LHEScaleWeight[3],1)', 'Alt$(LHEScaleWeight[4],1)', 'Alt$(LHEScaleWeight[6],1)', 'Alt$(LHEScaleWeight[7],1)']
variations   = ['Alt$(LHEScaleWeight[0],1)', 'Alt$(LHEScaleWeight[1],1)', 'Alt$(LHEScaleWeight[3],1)', 'Alt$(LHEScaleWeight[5],1)', 'Alt$(LHEScaleWeight[7],1)', 'Alt$(LHEScaleWeight[8],1)']

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'skipCMS': 1,
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {'DY': DYvariations},
    'AsLnN': '1'
}

nuisances['QCDscale_VV'] = {
    'name': 'QCDscale_VV',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'Wg': variations,
        'Zg': variations,
        'WZ': variations,
        'ZZ': variations,
        'WgS': variations,
        'ZgS': variations
    }
}

norm_QCD = ['+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["QCDscale_WW"]["WW_"+binname][0]) for binname in diffcuts]),
            '+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["QCDscale_WW"]["WW_"+binname][1]) for binname in diffcuts])]

nuisances['QCDscale_WW']  = {
    'name'  : 'QCDscale_WW',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'WW' : ['Alt$(LHEScaleWeight[0],1)*('+norm_QCD[0]+')','Alt$(LHEScaleWeight[8],1)*('+norm_QCD[1]+')'],
    }
}

## Factors computed to renormalize the top scale variations such that the integral is not changed in each RECO jet bin (we have rateParams for that)
topScaleNormFactors = {
    '0j' : {'Alt$(LHEScaleWeight[0],1)' : 1.080111, 'Alt$(LHEScaleWeight[8],1)' : 0.918951},
    '1j' : {'Alt$(LHEScaleWeight[0],1)' : 1.091556, 'Alt$(LHEScaleWeight[8],1)' : 0.906770},
    '2j' : {'Alt$(LHEScaleWeight[0],1)' : 1.106451, 'Alt$(LHEScaleWeight[8],1)' : 0.892341}
}


## QCD scale nuisances for top are decorrelated for each RECO jet bin: the QCD scale is different for different jet multiplicities so it doesn't make sense to correlate them
for ibin in cuts['ww2l2v_13TeV_top']['categories']:
    topvars = []
    topvars.append('Alt$(LHEScaleWeight[0],1)/'+str(topScaleNormFactors[ibin]['Alt$(LHEScaleWeight[0],1)']))
    topvars.append('Alt$(LHEScaleWeight[8],1)/'+str(topScaleNormFactors[ibin]['Alt$(LHEScaleWeight[8],1)']))

    nuisances['QCDscale_top_'+ibin]  = {
        'name'  : 'QCDscale_top_'+ibin,
        'kind'  : 'weight',
        'type'  : 'shape',
        'cutspost' : lambda self, cuts: [cut for cut in cuts if ibin in cut],
        'samples'  : {
            'top' : topvars,
        }
    }

'''
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
  'cuts'  : [cut for cut in cuts if '0j' in cut]
}

nuisances['WWqscale0j']  = {
   'name'  : 'CMS_hww_WWqscale_0j',
   'skipCMS' : 1,
   'kind'  : 'weight',
   'type'  : 'shape',
   'samples'  : {
      'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
    },
   'cuts'  : [cut for cut in cuts if '0j' in cut]
}

nuisances['WWresum1j']  = {
  'name'  : 'CMS_hww_WWresum_1j',
  'skipCMS' : 1,
  'kind'  : 'weight',
  'type'  : 'shape',
  'samples'  : {
     'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
   },
  'cuts'  : [cut for cut in cuts if '1j' in cut]
}

nuisances['WWqscale1j']  = {
   'name'  : 'CMS_hww_WWqscale_1j',
   'skipCMS' : 1,
   'kind'  : 'weight',
   'type'  : 'shape',
   'samples'  : {
      'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
    },
   'cuts'  : [cut for cut in cuts if '1j' in cut]
}

nuisances['WWresum2j']  = {
  'name'  : 'CMS_hww_WWresum_2j',
  'skipCMS' : 1,
  'kind'  : 'weight',
  'type'  : 'shape',
  'samples'  : {
     'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
   },
  'cuts'  : [cut for cut in cuts if '2j' in cut]
}

nuisances['WWqscale2j']  = {
   'name'  : 'CMS_hww_WWqscale_2j',
   'skipCMS' : 1,
   'kind'  : 'weight',
   'type'  : 'shape',
   'samples'  : {
      'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
    },
   'cuts'  : [cut for cut in cuts if '2j' in cut]
}

nuisances['WWresum3j']  = {
  'name'  : 'CMS_hww_WWresum_3j',
  'skipCMS' : 1,
  'kind'  : 'weight',
  'type'  : 'shape',
  'samples'  : {
     'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
   },
  'cuts'  : [cut for cut in cuts if '3j' in cut]
}

nuisances['WWqscale3j']  = {
   'name'  : 'CMS_hww_WWqscale_3j',
   'skipCMS' : 1,
   'kind'  : 'weight',
   'type'  : 'shape',
   'samples'  : {
      'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
    },
   'cuts'  : [cut for cut in cuts if '3j' in cut]
}
'''

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_top'] = {
    'name': 'CMS_hww_CRSR_accept_top',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    'cuts': [cut for cut in cuts if 'top' in cut],
}
'''
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

# Theory uncertainty for qqH 
#
#
#   see https://gitlab.cern.ch/LHCHIGGSXS/LHCHXSWG2/STXS/VBF-Uncertainties/-/blob/master/qq2Hqq_uncert_scheme.cpp

thusQQH = [
  ("THU_qqH_YIELD","qqH_YIELD"),
  ("THU_qqH_PTH200","qqH_PTH200"),
  ("THU_qqH_Mjj60","qqH_Mjj60"),
  ("THU_qqH_Mjj120","qqH_Mjj120"),
  ("THU_qqH_Mjj350","qqH_Mjj350"),
  ("THU_qqH_Mjj700","qqH_Mjj700"),
  ("THU_qqH_Mjj1000","qqH_Mjj1000"),
  ("THU_qqH_Mjj1500","qqH_Mjj1500"),
  ("THU_qqH_PTH25","qqH_PTH25"),
  ("THU_qqH_JET01","qqH_JET01"),
  ("THU_qqH_EWK","qqH_EWK"),
]

for name, vname in thusQQH:
    updown = [vname, '2.-%s' % vname]
    
    nuisances[name] = {
        'name': name,
        'skipCMS': 1,
        'kind': 'weight',
        'type': 'shape',
        'samples': {
          'qqH_hww': updown,
        }
    }
'''
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

#FIXME: these come from HIG-16-042, maybe should be recomputed?
nuisances['QCDscale_gg_ACCEPT'] = {
    'name': 'QCDscale_gg_ACCEPT',
    'samples': {
        'ggH_htt': '1.012',
        'ggH_hww': '1.012',
        'ggZH_hww': '1.012',
        #'ggWW': '1.012',
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

for ibin in cuts['ww2l2v_13TeV_top']['categories']:
    nuisances['Topnorm'+ibin]  = {
        'name'  : 'CMS_hww_Topnorm'+ibin,
        'samples'  : {
            'top' : '1.00',
        },
        'type'  : 'rateParam',
        'cutspost' : lambda self, cuts: [cut for cut in cuts if ibin in cut],
    }

for n in nuisances.values():
    n['skipCMS'] = 1

#print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))
