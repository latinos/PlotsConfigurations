# nuisances
# name of samples here must match keys in samples.py 
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

############ Load norm factors / differential binning to normalize signal ####################
import os
import json
configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # mjj
configurations = os.path.dirname(configurations) # Full2016_HIPM_v9
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

diffcuts = samples['WW']['subsamples'] if 'WW' in samples else {}
allcuts = [cut+'_'+cat for cut in cuts for cat in cuts[cut]['categories']]
nfdict = json.load(open("%s/WW/FullRunII/Full2016_HIPM_v9/mjj/WWnorm.json"%configurations))
sfdict = json.load(open("%s/WW/FullRunII/Full2016_HIPM_v9/mjj/sampleFrac.json"%configurations))

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2016',
    'type': 'lnN',
    'samples': dict((skey, '1.010') for skey in mc if skey not in ['top'])
}

nuisances['lumi_Correlated'] = {
    'name': 'lumi_13TeV_correlated',
    'type': 'lnN',
    'samples': dict((skey, '1.006') for skey in mc if skey not in ['top'])
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
    'name': 'CMS_fake_e_2016',
    'kind': 'weight',
    'type': 'shape',
    'AsLnN': '0',
    'samples': {
        'Fake': ['fakeWEleUp', 'fakeWEleDown']
    }
}

nuisances['fake_ele_stat'] = {
    'name': 'CMS_fake_stat_e_2016',
    'kind': 'weight',
    'type': 'shape',
    'AsLnN': '0',
    'samples': {
        'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown'],
    }
}

nuisances['fake_mu'] = {
    'name': 'CMS_fake_m_2016',
    'kind': 'weight',
    'type': 'shape',
    'AsLnN': '0',
    'samples': {
        'Fake': ['fakeWMuUp', 'fakeWMuDown'],
    }
}

nuisances['fake_mu_stat'] = {
    'name': 'CMS_fake_stat_m_2016',
    'kind': 'weight',
    'type': 'shape',
    'AsLnN': '0',
    'samples': {
        'Fake': ['fakeWStatMuUp', 'fakeWStatMuDown'],
    }
}

###### B-tagger
for shift in ['lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    name = 'CMS_btag_%s' % shift
    if 'stats' in shift:
        name += '_2016'

    nuisances['btag_shape_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
        'AsLnN': '0'
    }

##### Trigger Efficiency

trig_syst = ['((TriggerSFWeight_2l_u)/(TriggerSFWeight_2l))*(TriggerSFWeight_2l>0.02) + (TriggerSFWeight_2l<=0.02)', '(TriggerSFWeight_2l_d)/(TriggerSFWeight_2l)']

nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc),
    'AsLnN': '0'
}

prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire'] = {
    'name': 'CMS_eff_prefiring_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, prefire_syst) for skey in mc),
    'AsLnN': '0'
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc),
    'AsLnN': '0'
}

nuisances['electronpt'] = {
    'name': 'CMS_scale_e_2016',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp' : 'ElepTup',
    'mapDown': 'ElepTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': 'root://eoscms.cern.ch/'+makeMCDirectory('ElepTup_suffix'),
    'folderDown': 'root://eoscms.cern.ch/'+makeMCDirectory('ElepTdo_suffix'),
    'AsLnN': '0'
}

##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc),
    'AsLnN': '0'
}

nuisances['muonpt'] = {
    'name': 'CMS_scale_m_2016',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'MupTup',
    'mapDown': 'MupTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': 'root://eoscms.cern.ch/'+makeMCDirectory('MupTup_suffix'),
    'folderDown': 'root://eoscms.cern.ch/'+makeMCDirectory('MupTdo_suffix'),
    'AsLnN': '0'
}

###### Jet energy scale
jes_systs = ['JESAbsolute','JESAbsolute_2016','JESBBEC1','JESBBEC1_2016','JESEC2','JESEC2_2016','JESFlavorQCD','JESHF','JESHF_2016','JESRelativeBal','JESRelativeSample_2016']

for js in jes_systs:
    nuisances[js] = {
        'name': 'CMS_scale_'+js,
        'kind': 'suffix',
        'type': 'shape',
        'mapUp': js+'up',
        'mapDown': js+'do',
        'samples': dict((skey, ['1', '1']) for skey in mc),
        'folderUp': 'root://eoscms.cern.ch/'+makeMCDirectory('RDF__JESup_suffix'),
        'folderDown': 'root://eoscms.cern.ch/'+makeMCDirectory('RDF__JESdo_suffix'),
        'reweight' : ['btagSF'+js.replace('JES','jes')+'up/btagSF','btagSF'+js.replace('JES','jes')+'down/btagSF'],
        'AsLnN': '0'
    }

##### Jet energy resolution
nuisances['JER'] = {
    'name': 'CMS_res_j_2016',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'JERup',
    'mapDown': 'JERdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': 'root://eoscms.cern.ch/'+makeMCDirectory('JERup_suffix'),
    'folderDown': 'root://eoscms.cern.ch/'+makeMCDirectory('JERdo_suffix'),
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
    'folderUp': 'root://eoscms.cern.ch/'+makeMCDirectory('METup_suffix'),
    'folderDown': 'root://eoscms.cern.ch/'+makeMCDirectory('METdo_suffix'),
    'AsLnN': '0'
}

### PU ID SF uncertainty
puid_syst = ['Jet_PUIDSF_up/Jet_PUIDSF', 'Jet_PUIDSF_down/Jet_PUIDSF']

nuisances['jetPUID'] = {
    'name': 'CMS_PUID_2016',
    'kind': 'weight',
    'type': 'shape',
    'AsLnN': '0',
    'samples': dict((skey, puid_syst) for skey in mc)
}

##### Pileup

nuisances['PU'] = {
    'name': 'CMS_PU_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'DY'      : ['1.008421*(puWeightUp/puWeight)', '0.992494*(puWeightDown/puWeight)'],
        'WW'      : ['1.010428*(puWeightUp/puWeight)', '0.990400*(puWeightDown/puWeight)'],
        'ggWW'    : ['1.012367*(puWeightUp/puWeight)', '0.988402*(puWeightDown/puWeight)'],
        'Vg'      : ['0.995630*(puWeightUp/puWeight)', '1.007076*(puWeightDown/puWeight)'],
        'WZ'      : ['1.002037*(puWeightUp/puWeight)', '0.997721*(puWeightDown/puWeight)'],
        'ZZ'      : ['1.006574*(puWeightUp/puWeight)', '0.993175*(puWeightDown/puWeight)'],
        'VVV'     : ['1.012827*(puWeightUp/puWeight)', '0.989623*(puWeightDown/puWeight)'],
        'top'     : ['1.009336*(puWeightUp/puWeight)', '0.991324*(puWeightDown/puWeight)'],
        'Higgs'   : ['1.011609*(puWeightUp/puWeight)', '0.989039*(puWeightDown/puWeight)'],
    },
    'AsLnN': '0',
}

##### PS
nuisances['PS_ISR']  = {
    'name': 'PS_ISR',
    'kind': 'weight',
    'type': 'shape',
    'AsLnN': '0',
    'samples': dict((skey, ['PSWeight[2]', 'PSWeight[0]']) for skey in mc if skey not in ['WW','ggWW']),
}

norm_ISR_WW   = ['+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["PS_ISR"]["WW_"+binname][i]) for binname in diffcuts]) for i in range(2)]
norm_ISR_ggWW = ['+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["PS_ISR"]["ggWW_"+binname][i]) for binname in diffcuts]) for i in range(2)]

nuisances['PS_ISR_WW']  = {
    'name': 'PS_ISR',
    'kind' : 'weight',
    'type': 'shape',
    'AsLnN': '0',
    'samples': {        
        'WW'   : ['({})*PSWeight[2]'.format(norm_ISR_WW[0]),'({})*PSWeight[0]'.format(norm_ISR_WW[1])],
        'ggWW' : ['({})*PSWeight[2]'.format(norm_ISR_ggWW[0]),'({})*PSWeight[0]'.format(norm_ISR_ggWW[1])]
    }
}

nuisances['PS_FSR']  = {
    'name': 'PS_FSR',
    'kind': 'weight',
    'type': 'shape',
    'AsLnN': '0',
    'samples': dict((skey, ['PSWeight[3]', 'PSWeight[1]']) for skey in mc if skey not in ['WW','ggWW']),
}

norm_FSR_WW   = ['+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["PS_FSR"]["WW_"+binname][i]) for binname in diffcuts]) for i in range(2)]
norm_FSR_ggWW = ['+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["PS_FSR"]["ggWW_"+binname][i]) for binname in diffcuts]) for i in range(2)]

nuisances['PS_FSR_WW']  = {
    'name': 'PS_FSR',
    'kind' : 'weight',
    'type': 'shape',
    'AsLnN': '0',
    'samples': {        
        'WW'   : ['({})*PSWeight[3]'.format(norm_FSR_WW[0]),  '({})*PSWeight[1]'.format(norm_FSR_WW[1])],
        'ggWW' : ['({})*PSWeight[3]'.format(norm_FSR_ggWW[0]),'({})*PSWeight[1]'.format(norm_FSR_ggWW[1])]
    }
}

# PS and UE
nuisances['UE']  = {
                'name'  : 'UE_CP5',
                'type'  : 'lnN',
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
    'kind': 'weight',
    'type': 'shape',
    'AsLnN': '0',
    'samples': apply_on
}

## Top pT reweighting uncertainty

#nuisances['TopPtRew'] = {
#    'name': 'CMS_topPtRew',   # Theory uncertainty
#    'kind': 'weight',
#    'type': 'shape',
#    'samples': {'top': ["1.", "1./Top_pTrw"]},
#    'symmetrize': True
#}

for cut in allcuts:
    nuisances['WgStar_'+cut] = {
        'name': 'CMS_hww_WgStarScale',
        'type': 'lnN',
        'samples': {
            'Vg': '{:.3f}'.format(1.25*sfdict[cut]['Vg']['WgS']+1.0*(1.0-sfdict[cut]['Vg']['WgS']))
        },
        'cuts' : [cut]
    }


###### pdf uncertainties

values = {
    'ggH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH', '125.09','pdf','sm'),
    'qqH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm'),
    'WH_hww'   : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH',  '125.09','pdf','sm'),
    'ZH_hww'   : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH',  '125.09','pdf','sm'),
    'ggZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm'),
    'ttH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH', '125.09','pdf','sm'),
    'ggH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH', '125.09','pdf','sm'),
    'qqH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm'),
    'WH_htt'   : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH',  '125.09','pdf','sm'),
    'ZH_htt'   : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH',  '125.09','pdf','sm')
}

for cut in allcuts:
    nuisances['pdf_Higgs_'+cut] = {
        'name': 'pdf_Higgs',
        'samples': {
            'Higgs' : '{:.3f}'.format(sum([float(values[subsample])*sfdict[cut]['Higgs'][subsample] for subsample in values]))
        },
        'type': 'lnN',
        'cuts' : [cut]
    }

nuisances['pdf_qqbar'] = {
    'name': 'pdf_qqbar',
    'type': 'lnN',
    'samples': {
        'Vg': '1.04',
        'ZZ': '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
        'WZ': '1.04',  # PDF: 0.0064 / 0.1427 = 0.0448493
    },
}

values = {'ggH_hww' : '1.006',
          'qqH_hww' : '1.002',
          'WH_hww'  : '1.003',
          'ZH_hww'  : '1.002',
          'ggZH_hww': '1.006',
          'ttH_hww' : '1.000', #No value for ttH_hww?
          'ggH_htt' : '1.006',
          'qqH_htt' : '1.002',
          'WH_htt'  : '1.003',
          'ZH_htt'  : '1.002'}

for cut in allcuts:
    nuisances['pdf_Higgs_ACCEPT_'+cut] = {
        'name': 'pdf_Higgs_ACCEPT',
        'samples': {
            'Higgs' : '{:.3f}'.format(sum([float(values[subsample])*sfdict[cut]['Higgs'][subsample] for subsample in values]))
        },
        'type': 'lnN',
        'cuts' : [cut]
    }

#nuisances['pdf_gg_ACCEPT'] = {
#    'name': 'pdf_gg_ACCEPT',
#    'samples': {
#        'ggWW': '1.006',
#    },
#    'type': 'lnN',
#}

nuisances['pdf_qqbar_ACCEPT'] = {
    'name': 'pdf_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        'ZZ': '1.001',
        'WZ': '1.001',
    },
}

# PDF
pdf_variations = ["LHEPdfWeight[%d]" %i for i in range(1,101)] # Float_t LHE pdf variation weights (w_var / w_nominal) for LHA IDs 320901 - 321000
nuisances['pdf_WW']  = {
    'name'  : 'CMS_hww_pdf_WW',
    'kind'  : 'weight_rms',
    'type'  : 'shape',
    'AsLnN': '0',
    'samples'  : {
        'WW'   : pdf_variations,
    },
    'scale' : nfdict["pdf_WW"]
}

##### Renormalization & factorization scales

## Shape nuisance due to QCD scale variations for DY
# LHE scale variation weights (w_var / w_nominal)

## This should work for samples with either 8 or 9 LHE scale weights (Length$(LHEScaleWeight) == 8 or 9)
variations   = ['Alt$(LHEScaleWeight[0],1)', 'Alt$(LHEScaleWeight[1],1)', 'Alt$(LHEScaleWeight[3],1)', 'Alt$(LHEScaleWeight[nLHEScaleWeight-4],1)', 'Alt$(LHEScaleWeight[nLHEScaleWeight-2],1)', 'Alt$(LHEScaleWeight[nLHEScaleWeight-1],1)']

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {'DY': variations},
    'AsLnN': '0'
}

nuisances['QCDscale_VV'] = {
    'name': 'QCDscale_VV',
    'kind': 'weight_envelope',
    'type': 'shape',
    'AsLnN': '0',
    'samples': {
        'Vg': variations,
        'ZZ': variations,
        'WZ': variations,
    }
}

norm_QCD = ['+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["QCDscale_WW"]["WW_"+binname][0]) for binname in diffcuts]),
            '+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["QCDscale_WW"]["WW_"+binname][1]) for binname in diffcuts])]

nuisances['QCDscale_WW']  = {
    'name'  : 'QCDscale_WW',
    'kind'  : 'weight',
    'type'  : 'shape',
    'AsLnN': '0',
    'samples'  : {
        'WW' : ['Alt$(LHEScaleWeight[0],1)*('+norm_QCD[0]+')','Alt$(LHEScaleWeight[8],1)*('+norm_QCD[1]+')'],
    }
}

## Factors computed to renormalize the top scale variations such that the integral is not changed in each RECO jet bin (we have rateParams for that)
topScaleNormFactors = {
    '2j' : {'Alt$(LHEScaleWeight[0],1)' : 1.124499, 'Alt$(LHEScaleWeight[1],1)' : 1.105351, 'Alt$(LHEScaleWeight[3],1)' : 1.023423, 'Alt$(LHEScaleWeight[5],1)' : 0.982153, 'Alt$(LHEScaleWeight[7],1)' : 0.902495, 'Alt$(LHEScaleWeight[8],1)' : 0.882074},
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
        'AsLnN': '0',
        'cutspost' : lambda self, cuts: [cut for cut in cuts if self['name'].split('_')[-1] in cut],
        'samples'  : {
            'top' : topvars,
        }
    }

# ggww and interference
#nuisances['QCDscale_ggVV'] = {
#    'name': 'QCDscale_ggVV',
#    'type': 'lnN',
#    'samples': {
#        'ggWW': '1.15',
#    },
#}

# WW resummation (to be updated, but keep for now)
norm_WWresum = ['+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["CMS_hww_WWresum"]["WW_"+binname][0]) for binname in diffcuts]),
                '+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["CMS_hww_WWresum"]["WW_"+binname][1]) for binname in diffcuts])]

nuisances['WWresum']  = {
    'name'  : 'CMS_hww_WWresum',
    'kind'  : 'weight',
    'type'  : 'shape',
    'AsLnN': '0',
    'samples'  : {
        'WW'   : ['nllW_Rup/nllW*('+norm_WWresum[0]+')', 'nllW_Rdown/nllW*('+norm_WWresum[1]+')'],
    },
}

norm_WWqscale = ['+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["CMS_hww_WWqscale"]["WW_"+binname][0]) for binname in diffcuts]),
                 '+'.join(['({})*1.0'.format(diffcuts[binname]) if binname == "nonfid" else '({})*({})'.format(diffcuts[binname],nfdict["CMS_hww_WWqscale"]["WW_"+binname][1]) for binname in diffcuts])]

nuisances['WWqscale']  = {
    'name'  : 'CMS_hww_WWqscale',
    'kind'  : 'weight',
    'type'  : 'shape',
    'AsLnN': '0',
    'samples'  : {
        'WW'   : ['nllW_Qup/nllW*('+norm_WWqscale[0]+')', 'nllW_Qdown/nllW*('+norm_WWqscale[1]+')'],
    },
}

#### QCD scale uncertainties for Higgs signals other than ggH

values = {
    'ggH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','scale','sm'),
    'qqH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
    'WH_hww'   : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH'  ,'125.09','scale','sm'),
    'ZH_hww'   : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH'  ,'125.09','scale','sm'),
    'ggZH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm'),
    'ttH_hww'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH' ,'125.09','scale','sm'),
    'ggH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH' ,'125.09','scale','sm'),
    'qqH_htt'  : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm'),
    'WH_htt'   : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH'  ,'125.09','scale','sm'),
    'ZH_htt'   : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH'  ,'125.09','scale','sm')
}

for cut in allcuts:
    nuisances['QCDscale_Higgs_'+cut] = {
        'name': 'QCDscale_Higgs',
        'samples': {
            'Higgs' : '{:.3f}/{:.3f}'.format(sum([float(values[subsample].split('/')[0])*sfdict[cut]['Higgs'][subsample] for subsample in values]),
                                             sum([float(values[subsample].split('/')[1])*sfdict[cut]['Higgs'][subsample] for subsample in values]))
        },
        'type': 'lnN',
        'cuts' : [cut]
    }
    
nuisances['QCDscale_WWewk'] = {
    'name': 'QCDscale_WWewk',
    'samples': {
        'WWewk': '1.11',
    },
    'type': 'lnN'
}

values = {'ggH_hww' : '1.012',
          'qqH_hww' : '1.003',
          'WH_hww'  : '1.010',
          'ZH_hww'  : '1.015',
          'ggZH_hww': '1.012',
          'ttH_hww' : '1.000', #Missing value for ttH
          'ggH_htt' : '1.012',
          'qqH_htt' : '1.003',
          'WH_htt'  : '1.010',
          'ZH_htt'  : '1.015'}

for cut in allcuts:
    nuisances['QCDscale_Higgs_ACCEPT_'+cut] = {
        'name': 'QCDscale_Higgs_ACCEPT',
        'type': 'lnN',
        'samples': {
            'Higgs' : '{:.3f}'.format(sum([float(values[subsample])*sfdict[cut]['Higgs'][subsample] for subsample in values]))
        },
        'cuts' : [cut]
    }

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_top'] = {
    'name': 'CMS_hww_CRSR_accept_top',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    'cuts': [cut for cut in cuts if 'top' in cut],
}

## rate parameters

for ibin in cuts['ww2l2v_13TeV_top']['categories']:
    nuisances['Topnorm_'+ibin]  = {
        'name'  : 'CMS_hww_Topnorm_'+ibin,
        'samples'  : {
            'top' : '1.00',
        },
        'type'  : 'rateParam',
        'cutspost' : lambda self, cuts: [cut for cut in cuts if self['name'].split('_')[-1] in cut],
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

for n in nuisances.values():
    n['skipCMS'] = 1

#print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))
