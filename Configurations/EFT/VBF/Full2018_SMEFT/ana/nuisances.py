# nuisances

# nuisances = {}

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
    gghAC = [skey for skey in samples if (skey.startswith('ggH_T') or skey.startswith('ggHjj_T'))]
    qqhAC = [skey for skey in samples if skey.startswith('VBF_T')]
    whAC  = [skey for skey in samples if skey.startswith('WH_T')]
    zhAC  = [skey for skey in samples if skey.startswith('ZH_T')]
except NameError:
    mc = []
    cuts = {}
    nuisances = {}
    def makeMCDirectory(x=''):
        return ''

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()

'''
cuts0j = []
cuts1j = []
cuts2j = []

for k in cuts:
  for cat in cuts[k]['categories']:
    if '0j' in cat: cuts0j.append(k+'_'+cat)
    elif '1j' in cat: cuts1j.append(k+'_'+cat)
    elif '2j' in cat: cuts2j.append(k+'_'+cat)
    else: print 'WARNING: name of category does not contain either 0j,1j,2j'
'''
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

#hf
for shift in ['jes', 'lf','hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    name = 'CMS_btag_DeepFlav_%s' % shift
    if 'stats' in shift:
        name += '_2018'

    nuisances['btag_shape_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
    }

##### Trigger Efficiency

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

#trig_drll_rw_syst = ['1.', '1./trig_drll_rw']
trig_drll_rw_syst = ['2. - 1/trig_drll_rw', '1./trig_drll_rw']

nuisances['trigg_drll_rw_unc'] = {
    'name': 'CMS_eff_hwwtrigger_drllrw_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_drll_rw_syst) for skey in mc),
}
#    'symmetrize' : True,

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc_emb),
    'cuts': [cut for cut in cuts if not ('_CR_' in cut or 'top' in cut or 'dytt' in cut or 'WW' in cut)],
    'perRecoBin': True
}

nuisances['eff_e_CR'] = {
    'name': 'CMS_eff_e_CR_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc_emb),
    'cuts': [cut for cut in cuts if '_CR_' in cut or 'top' in cut or 'dytt' in cut or 'WW' in cut],
    'perRecoBin': True
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

'''
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
'''
if useEmbeddedDY:
  nuisances['electronpt_emb'] = {
    'name': 'CMS_scale_e_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {'Dyemb': ['1.003048852', '0.994417762']},
    'AsLnN': '1'
  }
##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2018',
    'kind': 'weight',
    'type': 'shape',
    # 'samples': dict((skey, ['ttHMVA_2l_mu_SF_Up', 'ttHMVA_2l_mu_SF_Down']) for skey in mc_emb)
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc_emb),
    'cuts': [cut for cut in cuts if not ('_CR_' in cut or 'top' in cut or 'dytt' in cut or 'WW' in cut)],
    'perRecoBin': True
}

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2018',
    'kind': 'weight',
    'type': 'shape',
    # 'samples': dict((skey, ['ttHMVA_2l_mu_SF_Up', 'ttHMVA_2l_mu_SF_Down']) for skey in mc_emb)
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc_emb),
    'cuts': [cut for cut in cuts if '_CR_' in cut or 'top' in cut or 'dytt' in cut or 'WW' in cut],
    'perRecoBin': True
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

'''
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
'''
if useEmbeddedDY:
  nuisances['muonpt_emb'] = {
    'name': 'CMS_scale_m_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {'Dyemb': ['1.003048852', '0.995615456']},
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
      'samples': dict((skey, ['1', '1']) for skey in mc if skey not in ['VZ', 'Vg', 'VgS_L','VgS_H']),
      'folderUp': folderup,
      'folderDown': folderdo,
      'AsLnN': '1'
  }

##### Jet energy resolution
##CR dictionaries
WWdic = {'WW':['1.042121137','0.9923541107'], 'top': ['1.01122449','0.9971833975']}
dyttdic = {'top': ['0.9966506491','1.007485145'], 'DY': ['1.051410195','0.9523834389'], 'WW':['1.020055375','0.9967475401']}
topdic = {'WW':['1.033528972','0.9872317807'], 'top': ['0.9862727582','1.007347052']}

##SR dictionaries
vbfdic = {'WW':['1.059283341','0.9800987808'], 'top': ['1.00248847','0.9992857364']}
vbfdic.update(dict((skey, ['0.97435237', '1.017059067']) for skey in qqhAC))
vbfdic.update(dict((skey, ['1.075103755','0.9627059055']) for skey in gghAC))

vhdic = {'top': ['0.9808777063','1.014796023'], 'WW':['0.983959566','0.9952959675']}
vhdic.update(dict((skey, ['0.9898468575', '1.009762474']) for skey in whAC))
vhdic.update(dict((skey, ['0.9711226412','1.015296079']) for skey in zhAC))

gghtdic = {'WW':['1.061632276','0.9788255862'], 'top': ['1.0162976','0.9908861454']}
gghtdic.update(dict((skey, ['1.087473189', '0.9551229137']) for skey in gghAC))
gghtdic.update(dict((skey, ['0.9743060498', '1.01676037']) for skey in qqhAC))

gghuntdic = {'WW':['0.9981448898','1.003236117'], 'top': ['0.9988008218','0.9981614319']}
gghuntdic.update(dict((skey, ['0.9968768189', '1.004767371']) for skey in gghAC))
gghuntdic.update(dict((skey, ['0.9940492956', '1.006006723']) for skey in qqhAC))
#gghuntdic.update(dict((skey, ['0.9979255', '0.9950424']) for skey in zhAC))
#gghuntdic.update(dict((skey, ['0.9983327', '1.0023855']) for skey in whAC))

key_dic = {
	'hww2l2v_13TeV_WW_of2j':WWdic,
        'hww2l2v_13TeV_of2j_ggh_t':gghtdic,
        'hww2l2v_13TeV_of2j_vbf':vbfdic,
        'hww2l2v_13TeV_of2j_vbf_hmin':vbfdic,
        'hww2l2v_13TeV_of2j_vbf_hmip':vbfdic,
        'hww2l2v_13TeV_of2j_vbf_hpin':vbfdic,
        'hww2l2v_13TeV_of2j_vbf_hpip':vbfdic,
        'hww2l2v_13TeV_of2j_vh':vhdic,
        'hww2l2v_13TeV_of2j_vh_hmin':vhdic,
        'hww2l2v_13TeV_of2j_vh_hmip':vhdic,
        'hww2l2v_13TeV_of2j_vh_hpin':vhdic,
        'hww2l2v_13TeV_of2j_vh_hpip':vhdic,
        'hww2l2v_13TeV_dytt_of2j':dyttdic,
        'hww2l2v_13TeV_top_of2j':topdic,
        'hww2l2v_13TeV_of2j_ggh_untagged':gghuntdic,
}

for key,dic in key_dic.iteritems():
  nuisances['JER'+'_'+key]  = {
                      'name'  : 'CMS_res_j_2018',
                      'kind' : 'weight',
                      'type'  : 'shape',
                      'samples'  : dic,
                      'cuts': [key],
                      'AsLnN': '1'
                     }


'''
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
'''
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
      # These hardcoded numbers have been obtained by running the full Dyveto (with runDYveto=True in samples.py) 
      # and computing the lnN uncertainty as variation of the up/down integral with respect to the nominal Dyemb integral
      unc_dict = {}
      unc_dict['hww2l2v_13TeV_WW_of2j']  =   '1.03888833435'
      unc_dict['hww2l2v_13TeV_of2j_ggh_thmin']  =   '1.00860538361'
      unc_dict['hww2l2v_13TeV_of2j_ggh_thmip']  =   '1.00860538361'
      unc_dict['hww2l2v_13TeV_of2j_vbf']  =   '1.0075176059'
      unc_dict['hww2l2v_13TeV_of2j_vbf_hmin']  =   '1.0075176059'
      unc_dict['hww2l2v_13TeV_of2j_vbf_hmip']  =   '1.0075176059'
      unc_dict['hww2l2v_13TeV_of2j_vbf_hpin']  =   '1.0075176059'
      unc_dict['hww2l2v_13TeV_of2j_vbf_hpip']  =   '1.0075176059'
      unc_dict['hww2l2v_13TeV_of2j_vh']  =   '1.01151460549'
      unc_dict['hww2l2v_13TeV_of2j_vh_hmin']  =   '1.01151460549'
      unc_dict['hww2l2v_13TeV_of2j_vh_hmip']  =   '1.01151460549'
      unc_dict['hww2l2v_13TeV_of2j_vh_hpin']  =   '1.01151460549'
      unc_dict['hww2l2v_13TeV_of2j_vh_hpip']  =   '1.01151460549'
      unc_dict['hww2l2v_13TeV_dytt_of2j']  =   '1.00314261038'
      unc_dict['hww2l2v_13TeV_top_of2j']  =   '1.04994935116'
      unc_dict['hww2l2v_13TeV_of2j_ggh_untagged']  =   '1.01611795904'
      unc_dict['hww2l2v_13TeV_top_of2j_nofjveto']  =   '1.04994935116'

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

PUDict = { 'DY': ['0.993259983266*(puWeightUp/puWeight)', '0.997656381501*(puWeightDown/puWeight)'],
           'top': ['1.00331969187*(puWeightUp/puWeight)', '0.999199609528*(puWeightDown/puWeight)'],
           'WW': ['1.0033022059*(puWeightUp/puWeight)', '0.997085330608*(puWeightDown/puWeight)'],
           'ggH_hww': ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)'],
           'qqH_hww': ['1.00374694528*(puWeightUp/puWeight)', '0.995878596852*(puWeightDown/puWeight)'], }
PUDict.update(dict((skey, ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)']) for skey in gghAC))
PUDict.update(dict((skey, ['1.00374694528*(puWeightUp/puWeight)', '0.995878596852*(puWeightDown/puWeight)']) for skey in qqhAC))

nuisances['PU'] = {
    'name': 'CMS_PU_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': PUDict,
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
    },
}

nuisances['PS_FSR_ForBuggySamples']  = {
    'name': 'PS_FSR',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Vg'     : ['0.999935529935028*(nCleanGenJet==0) + 0.997948255568351*(nCleanGenJet==1) + 1.00561645493085*(nCleanGenJet==2) + 1.0212896960035*(nCleanGenJet>=3)', '1.00757702771109*(nCleanGenJet==0) + 1.00256681166083*(nCleanGenJet==1) + 0.93676371569867*(nCleanGenJet==2) + 0.956448336052435*(nCleanGenJet>=3)'],
        'VgS'    : ['0.9976593177227735*(nCleanGenJet==0) + 1.0016125187585532*(nCleanGenJet==1) + 1.0049344618055556*(nCleanGenJet==2) + 1.0195631514301164*(nCleanGenJet>=3)', '1.0026951855766457*(nCleanGenJet==0) + 1.0008132148661049*(nCleanGenJet==1) + 1.003949291087963*(nCleanGenJet==2) + 0.9708160910230832*(nCleanGenJet>=3)'],
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

#nuisances['UE']  = {
#                'name'  : 'UE_CP5',
#                'skipCMS' : 1,
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                  'WW'      : ['1.0017139', '0.99350287'],
#                  'ggH_hww' : ['1.0272226', '1.0123689'],
#                  'qqH_hww' : ['1.0000192', '0.98367442']
#                },
#                'folderUp': makeMCDirectory('UEup'),
#                'folderDown': makeMCDirectory('UEdo'),
#                'AsLnN'      : '1',
#}

####### Generic "cross section uncertainties"

# From 2018 v6
# apply_on = {
#     'top': [
#         'isSingleTop * 1.0816 + isTTbar',
#         'isSingleTop * 0.9184 + isTTbar'
#     ]
# }

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

# nuisances['TopPtRew'] = {
#     'name': 'CMS_topPtRew',   # Theory uncertainty
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {'top': ["Top_pTrw*Top_pTrw", "1."]},
#     'symmetrize': True
# }

nuisances['VgStar'] = {
    'name': 'CMS_hww_VgStarScale',
    'type': 'lnN',
    'samples': {
        'VgS_L': '1.25'
    }
}
if useWgFXFX:
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

for i in range(1,3)+range(5,6)+range(7,10)+range(13,18)+range(19,20)+range(23,24)+range(25,26)+range(29,33):
#  if str(i) is not '3' or str(i) is not '12':
  print("i", i)   
#BAD STATISTICAL FLUCTUATIONS KILL IT
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

PDFHqqDict = {'qqH_hww': valuesqqh,                                                                                     
              'qqH_htt': valuesqqh,                                                                                     
              'WH_hww': valueswh,                                                                                       
              'WH_htt': valueswh,                                                                                       
              'ZH_hww': valueszh,                                                                                       
              'ZH_htt': valueszh }
PDFHqqDict.update(dict((skey, valuesqqh) for skey in qqhAC))
PDFHqqDict.update(dict((skey, valueswh) for skey in whAC))
PDFHqqDict.update(dict((skey, valueszh) for skey in zhAC))

nuisances['pdf_Higgs_qqbar'] = {
    'name': 'pdf_Higgs_qqbar',
    'type': 'lnN',
    'samples': PDFHqqDict
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

PDFHggADict = { 'ggH_hww': '1.006',  
                'ggH_htt': '1.006',
                'ggZH_hww': '1.006',
                'bbH_hww': '1.006' }
PDFHggADict.update(dict((skey, '1.006') for skey in gghAC))

nuisances['pdf_Higgs_gg_ACCEPT'] = {
    'name': 'pdf_Higgs_gg_ACCEPT',
    'samples': PDFHggADict,
    'type': 'lnN',
}

nuisances['pdf_gg_ACCEPT'] = {
    'name': 'pdf_gg_ACCEPT',
    'samples': {
        'ggWW': '1.006',
    },
    'type': 'lnN',
}

PDFHqqADict = { 'qqH_hww': '1.002',
                'qqH_htt': '1.002',
                'WH_hww': '1.003',
                'WH_htt': '1.003',
                'ZH_hww': '1.002',
                'ZH_htt': '1.002'}
PDFHqqADict.update(dict((skey, '1.002') for skey in qqhAC))
PDFHqqADict.update(dict((skey, '1.003') for skey in whAC))
PDFHqqADict.update(dict((skey, '1.003') for skey in zhAC))

nuisances['pdf_Higgs_qqbar_ACCEPT'] = {
    'name': 'pdf_Higgs_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': PDFHqqADict,
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

## This should work for samples with either 8 or 9 LHE scale weights (Length$(LHEScaleWeight) == 8 or 9)
variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']

#topvars0j = []
#topvars1j = []
topvars2j = []

# FIXME these need to be recalculated for 2018
## Factors computed to renormalize the top scale variations such that the integral is not changed in each RECO jet bin (we have rateParams for that)
#topScaleNormFactors0j = {'LHEScaleWeight[3]': 1.0026322046882807, 'LHEScaleWeight[0]': 1.0761381504953040, 'LHEScaleWeight[1]': 1.0758902481739956, 'LHEScaleWeight[Length$(LHEScaleWeight)-1]': 0.9225780960271310, 'LHEScaleWeight[Length$(LHEScaleWeight)-4]': 1.0006689791003040, 'LHEScaleWeight[Length$(LHEScaleWeight)-2]': 0.9242759920995479}
#topScaleNormFactors1j = {'LHEScaleWeight[3]': 1.0088973745933350, 'LHEScaleWeight[0]': 1.0858717477880675, 'LHEScaleWeight[1]': 1.0809970696561464, 'LHEScaleWeight[Length$(LHEScaleWeight)-1]': 0.9115155831354494, 'LHEScaleWeight[Length$(LHEScaleWeight)-4]': 0.9950909615738225, 'LHEScaleWeight[Length$(LHEScaleWeight)-2]': 0.9194241285459210}
topScaleNormFactors2j = {'LHEScaleWeight[3]': 1.01676762423417, 'LHEScaleWeight[0]': 1.1025115936138077, 'LHEScaleWeight[1]': 1.091629994134873, 'LHEScaleWeight[Length$(LHEScaleWeight)-2]': 0.9109113094808436, 'LHEScaleWeight[8]': 0.8952146701676956, 'LHEScaleWeight[Length$(LHEScaleWeight)-4]': 0.9879368275826537} #2jets

topvars2j.append('Alt$(LHEScaleWeight[0], 1.)/'+str(topScaleNormFactors2j['LHEScaleWeight[0]']))
topvars2j.append('Alt$(LHEScaleWeight[8], 1.)/'+str(topScaleNormFactors2j['LHEScaleWeight[8]']))

'''
for var in variations:
  #topvars0j.append(var+'/'+str(topScaleNormFactors0j[var]))
  #topvars1j.append(var+'/'+str(topScaleNormFactors1j[var]))
  topvars2j.append(var+'/'+str(topScaleNormFactors2j[var]))
'''
## QCD scale nuisances for top are decorrelated for each RECO jet bin: the QCD scale is different for different jet multiplicities so it doesn't make sense to correlate them

nuisances['QCDscale_top_2j']  = {
    'name'  : 'QCDscale_top_2j_2018',
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
       'top' : topvars2j,
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

nuisances['QCDscale_ggVV'] = {
    'name': 'QCDscale_ggVV',
    'type': 'lnN',
    'samples': {
        'ggWW': '1.15',
    },
}

##### Renormalization & factorization scales

nuisances['WWresum2j']  = {
  'name'  : 'CMS_hww_WWresum_2j',
  'skipCMS' : 1,
  'kind'  : 'weight',
  'type'  : 'shape',
  'samples'  : {
     'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
   },
}

nuisances['WWqscale2j']  = {
   'name'  : 'CMS_hww_WWqscale_2j',
   'skipCMS' : 1,
   'kind'  : 'weight',
   'type'  : 'shape',
   'samples'  : {
      'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
    },
}

nuisances['EWKcorr_WW'] = {
    'name': 'CMS_hww_EWKcorr_WW',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'WW': ['2. - 1./ewknloW', '1./ewknloW']
    },
}
#    'symmetrize' : True,

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_DY'] = {
    'name': 'CMS_hww_CRSR_accept_DY',
    'type': 'lnN',
    'samples': {'DY': '1.02'},
    'cuts': [
            'hww2l2v_13TeV_dytt_of2j'
    ]   
}

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_top'] = {
    'name': 'CMS_hww_CRSR_accept_top',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    'cuts': [
           'hww2l2v_13TeV_top_of2j'
    ]   
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

    GGHDict = { 'ggH_hww': updown }  #'ggH_htt': updown
    GGHDict.update(dict((skey, updown) for skey in gghAC))

    nuisances[name] = {
        'name': name,
        'skipCMS': 1,
        'kind': 'weight',
        'type': 'shape',
        'samples': GGHDict,
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

    QQHDict = { 'qqH_hww': updown }
    QQHDict.update(dict((skey, updown) for skey in qqhAC))

    nuisances[name] = {
        'name': name,
        'skipCMS': 1,
        'kind': 'weight',
        'type': 'shape',
        'samples': QQHDict
    }

#### QCD scale uncertainties for Higgs signals other than ggH

values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm')

QCDHqqDict = {'qqH_hww': values,
              'qqH_htt': values }
QCDHqqDict.update(dict((skey, values) for skey in qqhAC))

nuisances['QCDscale_qqH'] = {
    'name': 'QCDscale_qqH', 
    'samples': QCDHqqDict,
    'type': 'lnN'
}

valueswh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm')
valueszh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm')

QCDvhDict = {'WH_hww': valueswh,
             'WH_htt': valueswh,
             'ZH_hww': valueszh,
             'ZH_htt': valueszh }
QCDvhDict.update(dict((skey, valueswh) for skey in whAC))
QCDvhDict.update(dict((skey, valueszh) for skey in zhAC))

nuisances['QCDscale_VH'] = {
    'name': 'QCDscale_VH', 
    'samples': QCDvhDict,
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

QCDHqqADict = {'qqH_hww': '1.003',
               'qqH_htt': '1.003',
               'WH_hww': '1.010',
               'WH_htt': '1.010',
               'ZH_hww': '1.015',
               'ZH_htt': '1.015'} #'VZ': '1.004', # this shouldn't be here because we have full shape-based uncertainty for VZ
QCDHqqADict.update(dict((skey, '1.003') for skey in qqhAC))
QCDHqqADict.update(dict((skey, '1.010') for skey in whAC))
QCDHqqADict.update(dict((skey, '1.015') for skey in zhAC))

nuisances['QCDscale_qqbar_ACCEPT'] = {
    'name': 'QCDscale_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': QCDHqqADict
}

QCDHggADict = {#'ggH_hww': '1.012', # Shoudlnt be here according to legacy ana?
               'ggH_htt': '1.012',
               'ggZH_hww': '1.012',
               'ggWW': '1.012'}
#QCDHggADict.update(dict((skey, '1.012') for skey in gghAC))

nuisances['QCDscale_gg_ACCEPT'] = {
    'name': 'QCDscale_gg_ACCEPT',
    'samples': QCDHggADict,
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



nuisances['DYembnorm2j']  = {
                 'name'  : 'CMS_hww_DYttnorm2j_2018',
                 'samples'  : {
                   'Dyemb' : '1.00',
                     },
                 'type'  : 'rateParam',
                }


nuisances['WWnorm2j']  = {
               'name'  : 'CMS_hww_WWnorm2j',
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
              }

nuisances['ggWWnorm2j']  = {
               'name'  : 'CMS_hww_WWnorm2j',
               'samples'  : {
                   'ggWW' : '1.00',
                   },
               'type'  : 'rateParam',
              }


nuisances['Topnorm2j']  = {
               'name'  : 'CMS_hww_Topnorm2j',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
              }


for n in nuisances.values():
    n['skipCMS'] = 1

print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))
