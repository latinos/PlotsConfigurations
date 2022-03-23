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
    gghAC = [skey for skey in samples if (skey.startswith('H0') or skey.startswith('GGHjj_H0'))]
    qqhAC = [skey for skey in samples if skey.startswith('VBF_H0')]
    whAC  = [skey for skey in samples if skey.startswith('WH_H0')]
    zhAC  = [skey for skey in samples if skey.startswith('ZH_H0')]
except NameError:
    mc = []
    mc_emb = []
    cuts = {}
    nuisances = {}
    useEmbeddedDY = True
    treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
    def makeMCDirectory(x=''):
        return ''
print("Loading NO set of nuinsances.")
runDYveto = False
useWgFXFX = True

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()

cuts0j = []
cuts1j = []
cuts2j = []

for k in cuts:
  if 'categories' not in cuts[k]: continue
  for cat in cuts[k]['categories']:
    if '0j' in cat: cuts0j.append(k+'_'+cat)
    elif '1j' in cat: cuts1j.append(k+'_'+cat)
    elif '2j' in cat: cuts2j.append(k+'_'+cat)
    else: print 'WARNING: name of category does not contain on either 0j,1j,2j'

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity according to new LumiPOG recommendations
# Lumi uncertainties computed on top and WW samples, therefore we dont apply this on WW and top
'''
nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2018',
    'type': 'lnN',
    'samples': dict((skey, '1.015') for skey in mc if skey not in ['WW', 'top'])
}

nuisances['lumi_correlated'] = {
    'name': 'lumi_13TeV_correlated',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc if skey not in ['WW', 'top'])
}

nuisances['lumi_correlated_1718'] = {
    'name': 'lumi_13TeV_correlated_1718',
    'type': 'lnN',
    'samples': dict((skey, '1.002') for skey in mc if skey not in ['WW', 'top'])
}

#### FAKES
## no need to tread fakes as decorelated to em and me 

nuisances['fake_syst'] = {
    'name': 'CMS_fake_syst_2018',
    'type': 'lnN',
    'samples': {
        'Fake': '1.3'
    },
    'perRecoBin': True
}

nuisances['fake_ele'] = {
    'name': 'CMS_fake_e_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWEleUp', 'fakeWEleDown'],
    },
    'perRecoBin': True
}

nuisances['fake_ele_stat'] = {
    'name': 'CMS_fake_stat_e_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown']
    },
    'perRecoBin': True
}

nuisances['fake_mu'] = {
    'name': 'CMS_fake_m_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWMuUp', 'fakeWMuDown'],
    },
    'perRecoBin': True
}

nuisances['fake_mu_stat'] = {
    'name': 'CMS_fake_stat_m_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatMuUp', 'fakeWStatMuDown'],
    },
    'perRecoBin': True
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
## bug which was not seen for years was discovered -> applying drll re-weighting now
## extra change: symmetrize feature is bugged so not using anymore

trig_drll_rw_syst = ['2. - 1/trig_drll_rw', '1./trig_drll_rw']

nuisances['trigg_drll_rw_unc'] = {
    'name': 'CMS_eff_hwwtrigger_drllrw_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_drll_rw_syst) for skey in mc),
}

trig_syst = ['((TriggerAltEffWeight_2l_u)/(TriggerAltEffWeight_2l))*(TriggerAltEffWeight_2l>0.02) + (TriggerAltEffWeight_2l<=0.02)', '(TriggerAltEffWeight_2l_d)/(TriggerAltEffWeight_2l)']

nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc),
}

trig_syst_emb = ['((TriggerEffWeight_2l_u)/(TriggerEffWeight_2l))*(TriggerEffWeight_2l>0.02) + (TriggerEffWeight_2l<=0.02)', '(TriggerEffWeight_2l_d)/(TriggerEffWeight_2l)']

nuisances['trigg_emb'] = {
    'name': 'CMS_eff_hwwtrigger_embedded_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {'Dyemb' : trig_syst_emb},
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc_emb),
    'cuts': [cut for cut in cuts if not ('_CR_' in cut or 'top' in cut or 'dytt' in cut)]
}

nuisances['eff_e_CR'] = {
    'name': 'CMS_eff_e_CR_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc_emb),
    'cuts': [cut for cut in cuts if '_CR_' in cut or 'top' in cut or 'dytt' in cut]
}

nuisances['electronpt'] = {
    'name': 'CMS_scale_e_2018',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'ElepTup',
    'mapDown': 'ElepTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': 'root://eoscms.cern.ch/'+makeMCDirectory('trigFix__ElepTup_suffix'),
    'folderDown': 'root://eoscms.cern.ch/'+makeMCDirectory('trigFix__ElepTdo_suffix'),
    'AsLnN': '1'
}

if useEmbeddedDY:
  nuisances['electronpt_emb'] = {
    'name': 'CMS_scale_e_2018',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp' : 'ElepTup',
    'mapDown': 'ElepTdo',
    'samples': {'Dyemb': ['1', '1']},
    'folderUp': treeBaseDir+'/Embedding2018_102X_nAODv7_Full2018v7/DATAl1loose2018v7__l2loose__l2tightOR2018v7__Embedding__EmbElepTup_suffix/',
    'folderDown': treeBaseDir+'/Embedding2018_102X_nAODv7_Full2018v7/DATAl1loose2018v7__l2loose__l2tightOR2018v7__Embedding__EmbElepTdo_suffix/',
    'AsLnN': '1'
  }

##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc_emb),
    'cuts': [cut for cut in cuts if not ('_CR_' in cut or 'top' in cut or 'dytt' in cut)]
}

nuisances['eff_m_CR'] = {
    'name': 'CMS_eff_m_CR_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc_emb),
    'cuts': [cut for cut in cuts if '_CR_' in cut or 'top' in cut or 'dytt' in cut]
}

nuisances['muonpt'] = {
    'name': 'CMS_scale_m_2018',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'MupTup',
    'mapDown': 'MupTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': 'root://eoscms.cern.ch/'+makeMCDirectory('trigFix__MupTup_suffix'),
    'folderDown': 'root://eoscms.cern.ch/'+makeMCDirectory('trigFix__MupTdo_suffix'),
    'AsLnN': '1'
}

if useEmbeddedDY:
  nuisances['muonpt_emb'] = {
    'name': 'CMS_scale_m_2018',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp' : 'MupTup',
    'mapDown': 'MupTdo',
    'samples': {'Dyemb': ['1', '1']},
    'folderUp': treeBaseDir+'/Embedding2018_102X_nAODv7_Full2018v7/DATAl1loose2018v7__l2loose__l2tightOR2018v7__Embedding__EmbMupTup_suffix/',
    'folderDown': treeBaseDir+'/Embedding2018_102X_nAODv7_Full2018v7/DATAl1loose2018v7__l2loose__l2tightOR2018v7__Embedding__EmbMupTdo_suffix/',
    'AsLnN': '1'
  }

##### Jet energy scale
jes_systs = ['JESAbsolute','JESAbsolute_2018','JESBBEC1','JESBBEC1_2018','JESEC2','JESEC2_2018','JESFlavorQCD','JESHF','JESHF_2018','JESRelativeBal','JESRelativeSample_2018']

for js in jes_systs:
  if 'Absolute' in js: 
    folderup = 'root://eoscms.cern.ch/'+makeMCDirectory('JESAbsoluteup_suffix')
    folderdo = 'root://eoscms.cern.ch/'+makeMCDirectory('JESAbsolutedo_suffix')
  elif 'BBEC1' in js:
    folderup = 'root://eoscms.cern.ch/'+makeMCDirectory('JESBBEC1up_suffix')
    folderdo = 'root://eoscms.cern.ch/'+makeMCDirectory('JESBBEC1do_suffix')
  elif 'EC2' in js:
    folderup = 'root://eoscms.cern.ch/'+makeMCDirectory('JESEC2up_suffix')
    folderdo = 'root://eoscms.cern.ch/'+makeMCDirectory('JESEC2do_suffix')
  elif 'HF' in js:
    folderup = 'root://eoscms.cern.ch/'+makeMCDirectory('JESHFup_suffix')
    folderdo = 'root://eoscms.cern.ch/'+makeMCDirectory('JESHFdo_suffix')
  elif 'Relative' in js:
    folderup = 'root://eoscms.cern.ch/'+makeMCDirectory('JESRelativeup_suffix')
    folderdo = 'root://eoscms.cern.ch/'+makeMCDirectory('JESRelativedo_suffix')
  elif 'FlavorQCD' in js:
    folderup = 'root://eoscms.cern.ch/'+makeMCDirectory('JESFlavorQCDup_suffix')
    folderdo = 'root://eoscms.cern.ch/'+makeMCDirectory('JESFlavorQCDdo_suffix')

  nuisances[js] = {
      'name': 'CMS_scale_'+js,
      'kind': 'suffix',
      'type': 'shape',
      'mapUp': js+'up',
      'mapDown': js+'do',
      'samples': dict((skey, ['1', '1']) for skey in mc if skey not in ['VZ', 'Vg', 'VgS']),
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
    'samples': dict((skey, ['1', '1']) for skey in mc if skey not in ['VZ', 'Vg', 'VgS']),
    'folderUp': 'root://eoscms.cern.ch/'+makeMCDirectory('JERup_suffix'),
    'folderDown': 'root://eoscms.cern.ch/'+makeMCDirectory('JERdo_suffix'),
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
    'folderUp': 'root://eoscms.cern.ch/'+makeMCDirectory('METup_suffix'),
    'folderDown': 'root://eoscms.cern.ch/'+makeMCDirectory('METdo_suffix'),
    'AsLnN': '1'
}

##### Di-Tau vetoing for embedding
if useEmbeddedDY: 
  if runDYveto:
    nuisances['embedveto']  = {
                    'name'  : 'CMS_embed_veto_2018',
                    'kind'  : 'weight',
                    'type'  : 'shape',
                    'samples'  : {
                       'Dyemb'    : ['1', '1'],
                       'Dyveto'   : ['0.1', '-0.1'],
                    }
             }
  else:
        unc_dict = {}
        unc_dict['hww2l2v_13TeV_mth125_mllCut_0j']  = '1.01977'
        unc_dict['hww2l2v_13TeV_mth125_mllCut_1j']  = '1.01402'
        unc_dict['hww2l2v_13TeV_mth125_0j']  = '1.02022'
        unc_dict['hww2l2v_13TeV_mth125_1j']  = '1.01467'
        unc_dict['hww2l2v_13TeV_0j']  = '1.02372'
        unc_dict['hww2l2v_13TeV_1j']  = '1.01703'
        unc_dict['hww2l2v_13TeV_top_0j'] = '1.01696'
        unc_dict['hww2l2v_13TeV_top_1j'] = '1.02461'
        unc_dict['hww2l2v_13TeV_dytt_0j'] = '1.00365'
        unc_dict['hww2l2v_13TeV_dytt_1j'] = '1.00178'

        for category,uncertainty in unc_dict.iteritems():
            nuisances['embedveto_'+category]  = {
                            'name'  : 'CMS_embed_veto_2018',
                            'type'  : 'lnN',
                            'samples'  : {
                                'Dyemb'    : uncertainty,
                                },
                            'cuts': [category],
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
nuisances['PU']['samples'].update(dict((skey, ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)']) for skey in gghAC))
nuisances['PU']['samples'].update(dict((skey, ['1.00374694528*(puWeightUp/puWeight)', '0.995878596852*(puWeightDown/puWeight)']) for skey in qqhAC))

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
    'samples': dict((skey, ['PSWeight[2]', 'PSWeight[0]']) for skey in mc if skey not in ['Vg','VgS','WWewk']), #PSWeights are buggy for some samples, we add them back by hand below
}

nuisances['PS_FSR']  = {
    'name': 'PS_FSR',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['PSWeight[3]', 'PSWeight[1]']) for skey in mc if skey not in ['Vg','VgS','WWewk']), #PSWeights are buggy for some samples, we add them back by hand below
}

## PS nuisances computed by hand as a function of nCleanGenJets using alternative samples (when available). Needed if nominal samples have buggy PSWeights
nuisances['PS_ISR_ForBuggySamples']  = {
    'name': 'PS_ISR',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Vg'     : ['1.00227428567253*(nCleanGenJet==0) + 1.00572014989997*(nCleanGenJet==1) + 0.970824885256465*(nCleanGenJet==2) + 0.927346068071086*(nCleanGenJet>=3)', '0.996488506572636*(nCleanGenJet==0) + 0.993582795375765*(nCleanGenJet==1) + 1.03643678934568*(nCleanGenJet==2) + 1.09735277266955*(nCleanGenJet>=3)'],
        'VgS'    : ['1.0000536116408023*(nCleanGenJet==0) + 1.0100100693580492*(nCleanGenJet==1) + 0.959068359375*(nCleanGenJet==2) + 0.9117049260469496*(nCleanGenJet>=3)', '0.9999367833485968*(nCleanGenJet==0) + 0.9873682892005163*(nCleanGenJet==1) + 1.0492717737268518*(nCleanGenJet==2) + 1.1176958835210322*(nCleanGenJet>=3)'],
        'WWewk'  : ['1./1.00259*(nCleanGenJet==0) + 1./1.0179*(nCleanGenJet==1) + 1./1.01821*(nCleanGenJet==2) + 1./0.965982*(nCleanGenJet>=3)', '1./0.998322*(nCleanGenJet==0) + 1./0.979654*(nCleanGenJet==1) + 1./0.978425*(nCleanGenJet==2) + 1./1.04488*(nCleanGenJet>=3)']
    },
}

nuisances['PS_FSR_ForBuggySamples']  = {
    'name': 'PS_FSR',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Vg'     : ['0.999935529935028*(nCleanGenJet==0) + 0.997948255568351*(nCleanGenJet==1) + 1.00561645493085*(nCleanGenJet==2) + 1.0212896960035*(nCleanGenJet>=3)', '1.00757702771109*(nCleanGenJet==0) + 1.00256681166083*(nCleanGenJet==1) + 0.93676371569867*(nCleanGenJet==2) + 0.956448336052435*(nCleanGenJet>=3)'],
        'VgS'    : ['0.9976593177227735*(nCleanGenJet==0) + 1.0016125187585532*(nCleanGenJet==1) + 1.0049344618055556*(nCleanGenJet==2) + 1.0195631514301164*(nCleanGenJet>=3)', '1.0026951855766457*(nCleanGenJet==0) + 1.0008132148661049*(nCleanGenJet==1) + 1.003949291087963*(nCleanGenJet==2) + 0.9708160910230832*(nCleanGenJet>=3)'],
        'WWewk'  : ['1./0.991982*(nCleanGenJet==0) + 1./0.995154*(nCleanGenJet==1) + 1./1.00456*(nCleanGenJet==2) + 1./1.00597*(nCleanGenJet>=3)', '1./1.01669*(nCleanGenJet==0) + 1./1.01253*(nCleanGenJet==1) + 1./0.997909*(nCleanGenJet==2) + 1./0.991305*(nCleanGenJet>=3)']
    },
}

# An overall 1.5% UE uncertainty will cover all the UEup/UEdo variations
# And we don't observe any dependency of UE variations on njet
nuisances['UE']  = {
                'name'  : 'UE_CP5',
                'skipCMS' : 1,
                'type': 'lnN',
                'samples': dict((skey, '1.015') for skey in mc), 
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

nuisances['VgStar'] = {
    'name': 'CMS_hww_VgStarScale',
    'type': 'lnN',
    'samples': {
        'VgS_L': '1.25'
    }
}

if useWgFXFX:
    #helps to solve goodness of fit issues in HWW Legacy
    nuisances['VgScale'] = {
      'name': 'CMS_hww_VgScale',
      'type': 'shape',
      'kind': 'weight',
      'samples': {
          'Vg': ['0.984 * (nCleanGenJet==0) + 1.015 * (nCleanGenJet==1) + 1.09 * ( nCleanGenJet>1)',
                 '1.014 * (nCleanGenJet==0) + 0.985 * (nCleanGenJet==1) + 0.93 * ( nCleanGenJet>1)']
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

# PDF eigenvariations for WW and top
for i in range(1,33):
  # LHEPdfWeight are PDF4LHC variations, while nominal is NNPDF.
  # LHEPdfWeight[i] reweights from NNPDF nominal to PDF4LHC member i
  # LHEPdfWeight[0] in particular reweights from NNPDF nominal to PDF4LHC nominal
  pdf_variations = ["LHEPdfWeight[%d]/LHEPdfWeight[0]" %i, "2. - LHEPdfWeight[%d]/LHEPdfWeight[0]" %i ]

  nuisances['pdf_WW_eigen'+str(i)]  = {
    'name'  : 'CMS_hww_pdf_WW_eigen'+str(i),
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
      'WW'   : pdf_variations,
    },
  }
  nuisances['pdf_top_eigen'+str(i)]  = {
    'name'  : 'CMS_hww_pdf_top_eigen'+str(i),
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
      'top'   : pdf_variations,
    },
  }

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
nuisances['pdf_Higgs_gg']['samples'].update(dict((skey, valuesggh) for skey in gghAC))


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
nuisances['pdf_Higgs_qqbar']['samples'].update(dict((skey, valuesqqh) for skey in qqhAC))
nuisances['pdf_Higgs_qqbar']['samples'].update(dict((skey, valueswh) for skey in whAC))
nuisances['pdf_Higgs_qqbar']['samples'].update(dict((skey, valueszh) for skey in zhAC))

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
nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update(dict((skey, '1.006') for skey in gghAC))

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
nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update(dict((skey, '1.002') for skey in qqhAC))
nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update(dict((skey, '1.003') for skey in whAC))
nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update(dict((skey, '1.002') for skey in zhAC))

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

## This should work for samples with either 8 or 9 LHE scale weights (Length$(LHEScaleWeight) == 8 or 9)
variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']
topvars0j = []
topvars1j = []
topvars2j = []

# FIXME these need to be recalculated for 2018
## Factors computed to renormalize the top scale variations such that the integral is not changed in each RECO jet bin (we have rateParams for that)

topScaleNormFactors0j = {'LHEScaleWeight[3]': 1.0026322046882807, 'LHEScaleWeight[0]': 1.0761381504953040, 'LHEScaleWeight[1]': 1.0758902481739956, 'LHEScaleWeight[8]': 0.9225780960271310, 'LHEScaleWeight[Length$(LHEScaleWeight)-4]': 1.0006689791003040, 'LHEScaleWeight[Length$(LHEScaleWeight)-2]': 0.9242759920995479}
topScaleNormFactors1j = {'LHEScaleWeight[3]': 1.0088973745933350, 'LHEScaleWeight[0]': 1.0858717477880675, 'LHEScaleWeight[1]': 1.0809970696561464, 'LHEScaleWeight[8]': 0.9115155831354494, 'LHEScaleWeight[Length$(LHEScaleWeight)-4]': 0.9950909615738225, 'LHEScaleWeight[Length$(LHEScaleWeight)-2]': 0.9194241285459210}
topScaleNormFactors2j = {'LHEScaleWeight[3]': 1.0236911155246506, 'LHEScaleWeight[0]': 1.1249360990045656, 'LHEScaleWeight[1]': 1.1054771659922622, 'LHEScaleWeight[8]': 0.8819750427294990, 'LHEScaleWeight[Length$(LHEScaleWeight)-4]': 0.9819208264038879, 'LHEScaleWeight[Length$(LHEScaleWeight)-2]': 0.9025818187649589}

topvars0j.append('Alt$(LHEScaleWeight[0], 1.)/'+str(topScaleNormFactors0j['LHEScaleWeight[0]']))
topvars0j.append('Alt$(LHEScaleWeight[8], 1.)/'+str(topScaleNormFactors0j['LHEScaleWeight[8]']))

topvars1j.append('Alt$(LHEScaleWeight[0], 1.)/'+str(topScaleNormFactors1j['LHEScaleWeight[0]']))
topvars1j.append('Alt$(LHEScaleWeight[8], 1.)/'+str(topScaleNormFactors1j['LHEScaleWeight[8]']))

topvars2j.append('Alt$(LHEScaleWeight[0], 1.)/'+str(topScaleNormFactors2j['LHEScaleWeight[0]']))
topvars2j.append('Alt$(LHEScaleWeight[8], 1.)/'+str(topScaleNormFactors2j['LHEScaleWeight[8]']))


## QCD scale nuisances for top are decorrelated for each RECO jet bin: the QCD scale is different for different jet multiplicities so it doesn't make sense to correlate them
#weight_envelope->weight and decorrelated per year
nuisances['QCDscale_top_0j']  = {
    'name'  : 'QCDscale_top_0j_2018',
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
    'cutspost' : lambda self, cuts: [cut for cut in cuts if '0j' in cut],
    'samples'  : {
       'top' : topvars0j,
    }
}

nuisances['QCDscale_top_1j']  = {
    'name'  : 'QCDscale_top_1j_2018',
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
    'cutspost' : lambda self, cuts: [cut for cut in cuts if '1j' in cut],
    'samples'  : {
       'top' : topvars1j,
    }
}

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'skipCMS': 1,
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {'DY': variations},
    'AsLnN': '1'
}

if useWgFXFX:
  nuisances['QCDscale_VV'] = {
      'name': 'QCDscale_VV',
      'kind': 'weight_envelope',
      'type': 'shape',
      'samples': {
          'VZ': variations,
      }
  }

else:
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

#removing symmetrize as it is bugged
nuisances['EWKcorr_WW'] = {
    'name': 'CMS_hww_EWKcorr_WW',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'WW': ['2. - 1./ewknloW', '1./ewknloW'] 
    },
}


# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_DY'] = {
    'name': 'CMS_hww_CRSR_accept_DY',
    'type': 'lnN',
    'samples': {'DY': '1.02'},
    'cuts': ['hww2l2v_13TeV_dytt_0j','hww2l2v_13TeV_dytt_1j'],
    'cutspost': (lambda self, cuts: ['hww2l2v_13TeV_dytt_0j','hww2l2v_13TeV_dytt_1j']),
}

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_top'] = {
    'name': 'CMS_hww_CRSR_accept_top',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    'cuts': ['hww2l2v_13TeV_top_0j','hww2l2v_13TeV_top_1j'],
    'cutspost': (lambda self, cuts: ['hww2l2v_13TeV_top_0j','hww2l2v_13TeV_top_1j']),
}

# Theory uncertainty for ggH
#
#
#   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
#
#   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools

thus = [
    ('THU_ggH_Mu', 'ggH_mu_2'),
    ('THU_ggH_Res', 'ggH_res_2'),
    ('THU_ggH_Mig01', 'ggH_mig01_2'),
    ('THU_ggH_Mig12', 'ggH_mig12_2'),
    ('THU_ggH_VBF2j', 'ggH_VBF2j_2'),
    ('THU_ggH_VBF3j', 'ggH_VBF3j_2'),
    ('THU_ggH_PT60', 'ggH_pT60_2'),
    ('THU_ggH_PT120', 'ggH_pT120_2'),
    ('THU_ggH_qmtop', 'ggH_qmtop_2')
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
        }
    }
    nuisances[name]['samples'].update(dict((skey, updown) for skey in gghAC))
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
    nuisances[name]['samples'].update(dict((skey, updown) for skey in qqhAC))

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
nuisances['QCDscale_qqH']['samples'].update(dict((skey, values) for skey in qqhAC))

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
nuisances['QCDscale_VH']['samples'].update(dict((skey, valueswh) for skey in whAC))
nuisances['QCDscale_VH']['samples'].update(dict((skey, valueszh) for skey in zhAC))


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
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'WWewk': ['LHEScaleWeight[0]', 'LHEScaleWeight[2]']
    }
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
nuisances['QCDscale_qqbar_ACCEPT']['samples'].update(dict((skey, '1.003') for skey in qqhAC))
nuisances['QCDscale_qqbar_ACCEPT']['samples'].update(dict((skey, '1.010') for skey in whAC))
nuisances['QCDscale_qqbar_ACCEPT']['samples'].update(dict((skey, '1.015') for skey in zhAC))

nuisances['QCDscale_gg_ACCEPT'] = {
    'name': 'QCDscale_gg_ACCEPT',
    'samples': {
        'ggH_htt': '1.012',
        'ggH_hww': '1.012',
        'ggZH_hww': '1.012',
        'ggWW': '1.012',
    },
    'type': 'lnN',
}
nuisances['QCDscale_gg_ACCEPT']['samples'].update(dict((skey, '1.012') for skey in gghAC))

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
nuisances['DYembnorm0j']  = {
               'name'  : 'CMS_hww_DYttnorm0j_2018',
               'samples'  : {
                   'Dyemb' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts0j
              }

nuisances['DYembnorm1j']  = {
               'name'  : 'CMS_hww_DYttnorm1j_2018',
               'samples'  : {
                   'Dyemb' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts1j
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
               'cuts'  : cuts1j
              }

nuisances['ggWWnorm1j']  = {
               'name'  : 'CMS_hww_WWnorm1j',
               'samples'  : {
                   'ggWW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts1j
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
               'cuts'  : cuts1j
              }
'''
for n in nuisances.values():
    n['skipCMS'] = 1

print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))

print("SHAPE UP/DO NUISANCE LIST:")
print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if ((nuis['type'] == 'shape' or 'folderUp' in nuis.keys()) and (len(nuis['samples'].keys())==0 or "VBF_H0PM" in nuis['samples'].keys() or "H0PM" in nuis['samples'].keys() or "WH_H0PM" in nuis['samples'].keys() or "ZH_H0PM" in nuis['samples'].keys() )))
