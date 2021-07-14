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


cuts0j = []
cuts1j = []
cuts2j = []

for k in cuts:
  for cat in cuts[k]['categories']:
    if '0j' in cat: cuts0j.append(k+'_'+cat)
    elif '1j' in cat: cuts1j.append(k+'_'+cat)
    elif '2j' in cat: cuts2j.append(k+'_'+cat)
    else: print 'WARNING: name of category does not contain on either 0j,1j,2j'

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.020') for skey in mc if skey not in ['top'])
}

nuisances['lumi_Correlated'] = {
    'name': 'lumi_13TeV_correlated',
    'type': 'lnN',
    'samples': dict((skey, '1.009') for skey in mc if skey not in ['top'])
}

nuisances['lumi_1718'] = {
    'name': 'lumi_13TeV_1718',
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
    'name': 'CMS_fake_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWEleUp', 'fakeWEleDown']
    }
}

nuisances['fake_ele_stat'] = {
    'name': 'CMS_fake_stat_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown'],
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

###### B-tagger

for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    name = 'CMS_btag_%s' % shift
    if 'stats' in shift:
        name += '_2017'

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
    'name': 'CMS_eff_hwwtrigger_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc),
    'AsLnN': '1'
}

prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire'] = {
    'name': 'CMS_eff_prefiring_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, prefire_syst) for skey in mc),
    'AsLnN': '1'
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc),
#    'AsLnN': '1'
}

nuisances['electronpt'] = {
    'name': 'CMS_scale_e_2017',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp' : 'ElepTup',
    'mapDown': 'ElepTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('ElepTup_suffix'),
    'folderDown': makeMCDirectory('ElepTdo_suffix'),
    'AsLnN': '1'
}

##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc),
#    'AsLnN': '1'
}

nuisances['muonpt'] = {
    'name': 'CMS_scale_m_2017',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'MupTup',
    'mapDown': 'MupTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('MupTup_suffix'),
    'folderDown': makeMCDirectory('MupTdo_suffix'),
    'AsLnN': '1'
}

###### Jet energy scale

##### Jet energy scale
jes_systs = ['JESAbsolute','JESAbsolute_2017','JESBBEC1','JESBBEC1_2017','JESEC2','JESEC2_2017','JESFlavorQCD','JESHF','JESHF_2017','JESRelativeBal','JESRelativeSample_2017']
folderup = ""
folderdo = ""

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
    'name': 'CMS_res_j_2017',
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
    'name': 'CMS_scale_met_2017',
    'kind': 'suffix',
    'type': 'shape',
    'mapUp': 'METup',
    'mapDown': 'METdo',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('METup_suffix'),
    'folderDown': makeMCDirectory('METdo_suffix'),
    'AsLnN': '1'
}

### PU ID SF uncertainty
puid_syst = ['Jet_PUIDSF_up/Jet_PUIDSF', 'Jet_PUIDSF_down/Jet_PUIDSF']

nuisances['jetPUID'] = {
    'name': 'CMS_PUID_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, puid_syst) for skey in mc)
}

##### Pileup
nuisances['PU'] = {
    'name': 'CMS_PU_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'DY'      : ['1.005442*(puWeightUp/puWeight)', '0.997306*(puWeightDown/puWeight)'],
        'WW'      : ['1.005595*(puWeightUp/puWeight)', '0.995128*(puWeightDown/puWeight)'],
        'ggWW'    : ['1.006793*(puWeightUp/puWeight)', '0.993846*(puWeightDown/puWeight)'],
        'Wg'      : ['0.987987*(puWeightUp/puWeight)', '1.002624*(puWeightDown/puWeight)'],
        'WgS'     : ['1.022388*(puWeightUp/puWeight)', '0.984038*(puWeightDown/puWeight)'],
        'Zg'      : ['1.017654*(puWeightUp/puWeight)', '0.984169*(puWeightDown/puWeight)'],
        'ZgS'     : ['0.994019*(puWeightUp/puWeight)', '0.995307*(puWeightDown/puWeight)'],
        'WZ'      : ['1.003433*(puWeightUp/puWeight)', '0.996847*(puWeightDown/puWeight)'],
        'ZZ'      : ['1.001819*(puWeightUp/puWeight)', '0.998331*(puWeightDown/puWeight)'],
        'VVV'     : ['1.005570*(puWeightUp/puWeight)', '0.992936*(puWeightDown/puWeight)'],
        'top'     : ['1.004435*(puWeightUp/puWeight)', '0.996045*(puWeightDown/puWeight)'],
        'ggH_htt' : ['1.004937*(puWeightUp/puWeight)', '0.994581*(puWeightDown/puWeight)'],
        'qqH_htt' : ['1.006474*(puWeightUp/puWeight)', '0.995437*(puWeightDown/puWeight)'],
        'WH_htt'  : ['1.007642*(puWeightUp/puWeight)', '0.992562*(puWeightDown/puWeight)'],
        'ZH_htt'  : ['1.006509*(puWeightUp/puWeight)', '0.995197*(puWeightDown/puWeight)'],
        'ggH_hww' : ['1.012883*(puWeightUp/puWeight)', '0.988162*(puWeightDown/puWeight)'],
        'qqH_hww' : ['1.008240*(puWeightUp/puWeight)', '0.991381*(puWeightDown/puWeight)'],
        'WH_hww'  : ['1.000874*(puWeightUp/puWeight)', '0.996329*(puWeightDown/puWeight)'],
        'ZH_hww'  : ['1.007779*(puWeightUp/puWeight)', '0.993029*(puWeightDown/puWeight)'],
        'ggZH_hww': ['1.011625*(puWeightUp/puWeight)', '0.989982*(puWeightDown/puWeight)'],
        'ttH_hww' : ['0.999573*(puWeightUp/puWeight)', '1.000442*(puWeightDown/puWeight)']
    },
    'AsLnN': '1',
}

nuisances['PS_ISR']  = {
    'name': 'PS_ISR',
    'kind' : 'weight',
    'type': 'shape',
    'samples': {
        'Wg' : ['1.014304*(nCleanGenJet==0) + 1.018703*(nCleanGenJet==1) + 1.026550*(nCleanGenJet==2) + 1.017949*(nCleanGenJet>=3)', '0.981961*(nCleanGenJet==0) + 0.977149*(nCleanGenJet==1) + 0.967787*(nCleanGenJet==2) + 0.978191*(nCleanGenJet>=3)'],
        'qqH_htt' : ['1.001636*(nCleanGenJet==0) + 1.001440*(nCleanGenJet==1) + 1.001425*(nCleanGenJet==2) + 0.999432*(nCleanGenJet>=3)', '0.997969*(nCleanGenJet==0) + 0.998348*(nCleanGenJet==1) + 0.998412*(nCleanGenJet==2) + 1.001137*(nCleanGenJet>=3)'],
        'ggZH_hww' : ['1.069218*(nCleanGenJet==0) + 1.032507*(nCleanGenJet==1) + 1.024448*(nCleanGenJet==2) + 0.957216*(nCleanGenJet>=3)', '0.918649*(nCleanGenJet==0) + 0.959342*(nCleanGenJet==1) + 0.969951*(nCleanGenJet==2) + 1.053126*(nCleanGenJet>=3)'],
        'ZgS' : ['1.004636*(nCleanGenJet==0) + 1.006154*(nCleanGenJet==1) + 0.990664*(nCleanGenJet==2) + 0.963996*(nCleanGenJet>=3)', '0.994919*(nCleanGenJet==0) + 0.993443*(nCleanGenJet==1) + 1.012717*(nCleanGenJet==2) + 1.048817*(nCleanGenJet>=3)'],
        'WWewk' : ['1.001360*(nCleanGenJet==0) + 1.013643*(nCleanGenJet==1) + 1.018233*(nCleanGenJet==2) + 0.978900*(nCleanGenJet>=3)', '0.999573*(nCleanGenJet==0) + 0.984542*(nCleanGenJet==1) + 0.978716*(nCleanGenJet==2) + 1.029163*(nCleanGenJet>=3)'],
        'ZZ' : ['1.003577*(nCleanGenJet==0) + 1.017518*(nCleanGenJet==1) + 1.014146*(nCleanGenJet==2) + 0.991771*(nCleanGenJet>=3)', '0.995710*(nCleanGenJet==0) + 0.978990*(nCleanGenJet==1) + 0.983367*(nCleanGenJet==2) + 1.011966*(nCleanGenJet>=3)'],
        'qqH_hww' : ['1.001109*(nCleanGenJet==0) + 1.001298*(nCleanGenJet==1) + 1.001838*(nCleanGenJet==2) + 0.993539*(nCleanGenJet>=3)', '0.999032*(nCleanGenJet==0) + 0.998879*(nCleanGenJet==1) + 0.998157*(nCleanGenJet==2) + 1.009187*(nCleanGenJet>=3)'],
        'VVV' : ['1.029801*(nCleanGenJet==0) + 1.023223*(nCleanGenJet==1) + 1.014967*(nCleanGenJet==2) + 0.988107*(nCleanGenJet>=3)', '0.965169*(nCleanGenJet==0) + 0.973398*(nCleanGenJet==1) + 0.983274*(nCleanGenJet==2) + 1.017666*(nCleanGenJet>=3)'],
        'top' : ['1.003249*(nCleanGenJet==0) + 1.004238*(nCleanGenJet==1) + 1.007028*(nCleanGenJet==2) + 0.994845*(nCleanGenJet>=3)', '0.996583*(nCleanGenJet==0) + 0.995410*(nCleanGenJet==1) + 0.992050*(nCleanGenJet==2) + 1.007418*(nCleanGenJet>=3)'],
        'Zg' : ['1.004975*(nCleanGenJet==0) + 1.005094*(nCleanGenJet==1) + 0.999746*(nCleanGenJet==2) + 0.972614*(nCleanGenJet>=3)', '0.994292*(nCleanGenJet==0) + 0.994702*(nCleanGenJet==1) + 1.001410*(nCleanGenJet==2) + 1.036578*(nCleanGenJet>=3)'],
        'WH_htt' : ['1.001389*(nCleanGenJet==0) + 1.001266*(nCleanGenJet==1) + 1.001466*(nCleanGenJet==2) + 0.998421*(nCleanGenJet>=3)', '0.998367*(nCleanGenJet==0) + 0.998580*(nCleanGenJet==1) + 0.998398*(nCleanGenJet==2) + 1.002523*(nCleanGenJet>=3)'],
        'ggH_htt' : ['1.001442*(nCleanGenJet==0) + 1.003629*(nCleanGenJet==1) + 1.007302*(nCleanGenJet==2) + 0.975903*(nCleanGenJet>=3)', '0.998076*(nCleanGenJet==0) + 0.995487*(nCleanGenJet==1) + 0.991072*(nCleanGenJet==2) + 1.030245*(nCleanGenJet>=3)'],
        'WW' : ['1.000417*(nCleanGenJet==0) + 1.011606*(nCleanGenJet==1) + 0.987783*(nCleanGenJet==2) + 0.942440*(nCleanGenJet>=3)', '0.999138*(nCleanGenJet==0) + 0.985791*(nCleanGenJet==1) + 1.014839*(nCleanGenJet==2) + 1.075442*(nCleanGenJet>=3)'],
        'ggWW' : ['1.041220*(nCleanGenJet==0) + 0.980674*(nCleanGenJet==1) + 0.930022*(nCleanGenJet==2) + 0.883283*(nCleanGenJet>=3)', '0.949892*(nCleanGenJet==0) + 1.020565*(nCleanGenJet==1) + 1.087697*(nCleanGenJet==2) + 1.158449*(nCleanGenJet>=3)'],
        'WH_hww' : ['1.001589*(nCleanGenJet==0) + 1.001313*(nCleanGenJet==1) + 1.001779*(nCleanGenJet==2) + 0.997988*(nCleanGenJet>=3)', '0.998331*(nCleanGenJet==0) + 0.998817*(nCleanGenJet==1) + 0.998250*(nCleanGenJet==2) + 1.003334*(nCleanGenJet>=3)'],
        'WgS' : ['1.001626*(nCleanGenJet==0) + 1.009729*(nCleanGenJet==1) + 0.973977*(nCleanGenJet==2) + 0.942461*(nCleanGenJet>=3)', '0.998044*(nCleanGenJet==0) + 0.988403*(nCleanGenJet==1) + 1.032467*(nCleanGenJet==2) + 1.077206*(nCleanGenJet>=3)'],
        'DY' : ['0.985171*(nCleanGenJet==0) + 1.022800*(nCleanGenJet==1) + 1.031006*(nCleanGenJet==2) + 1.020337*(nCleanGenJet>=3)', '1.020163*(nCleanGenJet==0) + 0.972308*(nCleanGenJet==1) + 0.962288*(nCleanGenJet==2) + 0.975766*(nCleanGenJet>=3)'],
        'ttH_hww' : ['1.007367*(nCleanGenJet==0) + 1.004293*(nCleanGenJet==1) + 1.006553*(nCleanGenJet==2) + 1.000628*(nCleanGenJet>=3)', '0.991053*(nCleanGenJet==0) + 0.995519*(nCleanGenJet==1) + 0.992692*(nCleanGenJet==2) + 1.000272*(nCleanGenJet>=3)'],
        'ZH_htt' : ['1.000841*(nCleanGenJet==0) + 1.001182*(nCleanGenJet==1) + 1.001219*(nCleanGenJet==2) + 0.998623*(nCleanGenJet>=3)', '0.999036*(nCleanGenJet==0) + 0.998601*(nCleanGenJet==1) + 0.998586*(nCleanGenJet==2) + 1.002005*(nCleanGenJet>=3)'],
        'ggH_hww' : ['1.001146*(nCleanGenJet==0) + 1.015768*(nCleanGenJet==1) + 0.977128*(nCleanGenJet==2) + 0.931272*(nCleanGenJet>=3)', '0.998761*(nCleanGenJet==0) + 0.981259*(nCleanGenJet==1) + 1.027158*(nCleanGenJet==2) + 1.088906*(nCleanGenJet>=3)'],
        'WZ' : ['1.003084*(nCleanGenJet==0) + 1.017410*(nCleanGenJet==1) + 1.011448*(nCleanGenJet==2) + 0.985965*(nCleanGenJet>=3)', '0.996397*(nCleanGenJet==0) + 0.979282*(nCleanGenJet==1) + 0.986800*(nCleanGenJet==2) + 1.019525*(nCleanGenJet>=3)'],
        'ZH_hww' : ['1.001094*(nCleanGenJet==0) + 1.001365*(nCleanGenJet==1) + 1.001625*(nCleanGenJet==2) + 0.998067*(nCleanGenJet>=3)', '0.999004*(nCleanGenJet==0) + 0.998607*(nCleanGenJet==1) + 0.998286*(nCleanGenJet==2) + 1.003031*(nCleanGenJet>=3)']
    }
}

nuisances['PS_FSR']  = {
    'name': 'PS_FSR',
    'kind' : 'weight',
    'type': 'shape',
    'samples': {
        'Wg' : ['0.998499*(nCleanGenJet==0) + 1.002516*(nCleanGenJet==1) + 1.010931*(nCleanGenJet==2) + 1.022480*(nCleanGenJet>=3)', '1.002691*(nCleanGenJet==0) + 0.996103*(nCleanGenJet==1) + 0.986051*(nCleanGenJet==2) + 0.965687*(nCleanGenJet>=3)'],
        'qqH_htt' : ['0.989338*(nCleanGenJet==0) + 0.993552*(nCleanGenJet==1) + 0.997811*(nCleanGenJet==2) + 1.003063*(nCleanGenJet>=3)', '1.017324*(nCleanGenJet==0) + 1.010448*(nCleanGenJet==1) + 1.003853*(nCleanGenJet==2) + 0.995370*(nCleanGenJet>=3)'],
        'ggZH_hww' : ['0.989364*(nCleanGenJet==0) + 0.994689*(nCleanGenJet==1) + 1.000746*(nCleanGenJet==2) + 1.005121*(nCleanGenJet>=3)', '1.019046*(nCleanGenJet==0) + 1.010387*(nCleanGenJet==1) + 0.999806*(nCleanGenJet==2) + 0.991099*(nCleanGenJet>=3)'],
        'ZgS' : ['0.995934*(nCleanGenJet==0) + 0.999515*(nCleanGenJet==1) + 1.011560*(nCleanGenJet==2) + 1.012256*(nCleanGenJet>=3)', '1.009319*(nCleanGenJet==0) + 0.999850*(nCleanGenJet==1) + 0.980498*(nCleanGenJet==2) + 0.991662*(nCleanGenJet>=3)'],
        'WWewk' : ['0.995947*(nCleanGenJet==0) + 0.992510*(nCleanGenJet==1) + 1.001655*(nCleanGenJet==2) + 1.005298*(nCleanGenJet>=3)', '1.010954*(nCleanGenJet==0) + 1.013522*(nCleanGenJet==1) + 1.002440*(nCleanGenJet==2) + 0.992618*(nCleanGenJet>=3)'],
        'ZZ' : ['0.991587*(nCleanGenJet==0) + 0.992929*(nCleanGenJet==1) + 1.012970*(nCleanGenJet==2) + 1.016515*(nCleanGenJet>=3)', '1.014142*(nCleanGenJet==0) + 1.011743*(nCleanGenJet==1) + 0.981318*(nCleanGenJet==2) + 0.975038*(nCleanGenJet>=3)'],
        'qqH_hww' : ['0.988529*(nCleanGenJet==0) + 0.995156*(nCleanGenJet==1) + 1.002831*(nCleanGenJet==2) + 1.006874*(nCleanGenJet>=3)', '1.019434*(nCleanGenJet==0) + 1.009592*(nCleanGenJet==1) + 0.996446*(nCleanGenJet==2) + 0.987870*(nCleanGenJet>=3)'],
        'VVV' : ['0.983508*(nCleanGenJet==0) + 0.981997*(nCleanGenJet==1) + 0.997410*(nCleanGenJet==2) + 1.007869*(nCleanGenJet>=3)', '1.033115*(nCleanGenJet==0) + 1.037701*(nCleanGenJet==1) + 1.005039*(nCleanGenJet==2) + 0.989125*(nCleanGenJet>=3)'],
        'top' : ['0.967216*(nCleanGenJet==0) + 0.985317*(nCleanGenJet==1) + 0.998997*(nCleanGenJet==2) + 1.009215*(nCleanGenJet>=3)', '1.054514*(nCleanGenJet==0) + 1.025097*(nCleanGenJet==1) + 1.003452*(nCleanGenJet==2) + 0.985540*(nCleanGenJet>=3)'],
        'Zg' : ['0.998215*(nCleanGenJet==0) + 1.001862*(nCleanGenJet==1) + 1.007594*(nCleanGenJet==2) + 1.010195*(nCleanGenJet>=3)', '1.004154*(nCleanGenJet==0) + 0.998441*(nCleanGenJet==1) + 0.988809*(nCleanGenJet==2) + 0.982113*(nCleanGenJet>=3)'],
        'WH_htt' : ['0.995061*(nCleanGenJet==0) + 0.995369*(nCleanGenJet==1) + 0.998315*(nCleanGenJet==2) + 1.006990*(nCleanGenJet>=3)', '1.007351*(nCleanGenJet==0) + 1.008102*(nCleanGenJet==1) + 1.003708*(nCleanGenJet==2) + 0.988784*(nCleanGenJet>=3)'],
        'ggH_htt' : ['0.995097*(nCleanGenJet==0) + 0.997162*(nCleanGenJet==1) + 1.001839*(nCleanGenJet==2) + 1.009490*(nCleanGenJet>=3)', '1.007767*(nCleanGenJet==0) + 1.004924*(nCleanGenJet==1) + 0.997556*(nCleanGenJet==2) + 0.984463*(nCleanGenJet>=3)'],
        'WW' : ['0.996535*(nCleanGenJet==0) + 1.002706*(nCleanGenJet==1) + 1.007174*(nCleanGenJet==2) + 1.008299*(nCleanGenJet>=3)', '1.005489*(nCleanGenJet==0) + 0.995874*(nCleanGenJet==1) + 0.989286*(nCleanGenJet==2) + 0.984020*(nCleanGenJet>=3)'],
        'ggWW' : ['0.992769*(nCleanGenJet==0) + 1.004026*(nCleanGenJet==1) + 1.011888*(nCleanGenJet==2) + 1.016305*(nCleanGenJet>=3)', '1.011983*(nCleanGenJet==0) + 0.993649*(nCleanGenJet==1) + 0.981041*(nCleanGenJet==2) + 0.967968*(nCleanGenJet>=3)'],
        'WH_hww' : ['0.983519*(nCleanGenJet==0) + 0.990857*(nCleanGenJet==1) + 1.003508*(nCleanGenJet==2) + 1.013440*(nCleanGenJet>=3)', '1.028846*(nCleanGenJet==0) + 1.015130*(nCleanGenJet==1) + 0.995645*(nCleanGenJet==2) + 0.976518*(nCleanGenJet>=3)'],
        'WgS' : ['0.998573*(nCleanGenJet==0) + 1.005628*(nCleanGenJet==1) + 1.012487*(nCleanGenJet==2) + 1.021938*(nCleanGenJet>=3)', '1.002361*(nCleanGenJet==0) + 0.990041*(nCleanGenJet==1) + 0.977852*(nCleanGenJet==2) + 0.960815*(nCleanGenJet>=3)'],
        'DY' : ['0.999082*(nCleanGenJet==0) + 1.008946*(nCleanGenJet==1) + 1.021937*(nCleanGenJet==2) + 1.036636*(nCleanGenJet>=3)', '1.001778*(nCleanGenJet==0) + 0.986464*(nCleanGenJet==1) + 0.967420*(nCleanGenJet==2) + 0.945891*(nCleanGenJet>=3)'],
        'ttH_hww' : ['0.950068*(nCleanGenJet==0) + 0.967830*(nCleanGenJet==1) + 0.978124*(nCleanGenJet==2) + 1.004002*(nCleanGenJet>=3)', '1.080054*(nCleanGenJet==0) + 1.051037*(nCleanGenJet==1) + 1.037129*(nCleanGenJet==2) + 0.994590*(nCleanGenJet>=3)'],
        'ZH_htt' : ['0.993117*(nCleanGenJet==0) + 0.993923*(nCleanGenJet==1) + 0.997415*(nCleanGenJet==2) + 1.006050*(nCleanGenJet>=3)', '1.009033*(nCleanGenJet==0) + 1.011145*(nCleanGenJet==1) + 1.005303*(nCleanGenJet==2) + 0.990038*(nCleanGenJet>=3)'],
        'ggH_hww' : ['0.994251*(nCleanGenJet==0) + 1.006168*(nCleanGenJet==1) + 1.014524*(nCleanGenJet==2) + 1.007508*(nCleanGenJet>=3)', '1.010724*(nCleanGenJet==0) + 0.989138*(nCleanGenJet==1) + 0.979000*(nCleanGenJet==2) + 0.986060*(nCleanGenJet>=3)'],
        'WZ' : ['0.992511*(nCleanGenJet==0) + 0.996287*(nCleanGenJet==1) + 1.009594*(nCleanGenJet==2) + 1.012830*(nCleanGenJet>=3)', '1.012632*(nCleanGenJet==0) + 1.006897*(nCleanGenJet==1) + 0.987080*(nCleanGenJet==2) + 0.980566*(nCleanGenJet>=3)'],
        'ZH_hww' : ['0.986658*(nCleanGenJet==0) + 0.989349*(nCleanGenJet==1) + 1.000700*(nCleanGenJet==2) + 1.009635*(nCleanGenJet>=3)', '1.025451*(nCleanGenJet==0) + 1.017128*(nCleanGenJet==1) + 1.000351*(nCleanGenJet==2) + 0.981914*(nCleanGenJet>=3)']
    },
}

# PS and UE
nuisances['UE_whss']  = {
                'name'  : 'UE_CP5',
                'skipCMS' : 1,
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
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
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

nuisances['WgStar'] = {
    'name': 'CMS_hww_WgStarScale',
    'type': 'lnN',
    'samples': {
        'WgS': '1.25'
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

# TODO update
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

# TODO update
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

# TODO update
#nuisances['pdf_gg_ACCEPT'] = {
#    'name': 'pdf_gg_ACCEPT',
#    'samples': {
#        'ggWW': '1.006',
#    },
#    'type': 'lnN',
#}

# TODO update
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

# TODO update
nuisances['pdf_qqbar_ACCEPT'] = {
    'name': 'pdf_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        'ZZ': '1.001',
        'WZ': '1.001',
    },
}

pdf_norms = [[0.9926293515867235, 1.0074809269784344], [0.993430536129811, 1.006656928776381], [1.0007956085185976, 0.9992056554560176], 
             [1.0057963212947436, 0.9942701033492457], [1.0048851192877943, 0.9951621476835255], [0.9991922980606357, 1.000809008815328], 
             [1.0006026960790046, 0.9993980295315091], [0.9978613728530958, 1.0021478138931186], [1.000772019740213, 0.9992291704511164], 
             [1.001421170915018, 0.9985828570895556], [0.9972881285341085, 1.0027266601697586], [1.0012979766592474, 0.9987053841031743], 
             [0.9988421079922084, 1.0011605796596084], [0.9998249608270352, 1.0001751004718966], [0.9975820342480453, 1.0024297156906075], 
             [1.0000348819358866, 0.9999651204974808], [1.0013388688610882, 0.9986647067041442], [0.9990761453803424, 1.0009255647942974], 
             [0.9991032574730263, 1.0008983537109821], [1.0048928547139298, 0.9951545613408622], [1.0022304224254086, 0.9977794829566731], 
             [1.0001801347922588, 0.9998199300814778], [0.999827377533836, 1.0001726820837669], [1.000887832296483, 0.9991137414015449], 
             [0.9986383979830774, 1.0013653200620265], [1.0008053009366746, 0.9991959939969272], [1.0022492875919622, 0.9977607856820001], 
             [1.0014431046686858, 0.9985610484467491], [0.9985059905145097, 1.0014984869931032], [0.9978199321936398, 1.0021896148239309], 
             [1.0097499032899515, 0.9904365815206302], [0.9926322726029488, 1.0074779179185471]]

varupstring   = "(     LHEPdfWeight[{i}]/LHEPdfWeight[0] *(abs(LHEPdfWeight[{i}]/LHEPdfWeight[0])<=100)+1.0*(abs(LHEPdfWeight[{i}]/LHEPdfWeight[0])>100))*{w}"
vardownstring = "((2.0-LHEPdfWeight[{i}]/LHEPdfWeight[0])*(abs(LHEPdfWeight[{i}]/LHEPdfWeight[0])<=100)+1.0*(abs(LHEPdfWeight[{i}]/LHEPdfWeight[0])>100))*{w}"

for i in range(1,33):
  # LHEPdfWeight are PDF4LHC variations, while nominal is NNPDF.
  # LHEPdfWeight[i] reweights from NNPDF nominal to PDF4LHC member i
  # LHEPdfWeight[0] in particular reweights from NNPDF nominal to PDF4LHC nominal

  nuisances['pdf_WW_eigen'+str(i)]  = {
    'name'  : 'CMS_hww_pdf_WW_eigen'+str(i),
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
      'WW'   : [varupstring.format(i=i,w=pdf_norms[i-1][0]), vardownstring.format(i=i,w=pdf_norms[i-1][1])]
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
        'Zg': variations,
        'Wg': variations,
        'ZZ': variations,
        'WZ': variations,
        'WgS': variations,
        'ZgS': variations
    }
}

nuisances['QCDscale_WW']  = {
    'name'  : 'QCDscale_WW',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
       'WW' : ['Alt$(LHEScaleWeight[0],1)*0.986929','Alt$(LHEScaleWeight[8],1)*1.008908']
    }
}

topvars0j = []
topvars1j = []
topvars2j = []

## Factors computed to renormalize the top scale variations such that the integral is not changed in each RECO jet bin (we have rateParams for that)
topScaleNormFactors0j = {'Alt$(LHEScaleWeight[0],1)' : 1.072860, 'Alt$(LHEScaleWeight[1],1)' : 1.074110, 'Alt$(LHEScaleWeight[5],1)' : 1.002207, 'Alt$(LHEScaleWeight[8],1)' : 0.925373, 'Alt$(LHEScaleWeight[3],1)' : 1.001139, 'Alt$(LHEScaleWeight[7],1)' : 0.925621}
topScaleNormFactors1j = {'Alt$(LHEScaleWeight[0],1)' : 1.084216, 'Alt$(LHEScaleWeight[1],1)' : 1.080157, 'Alt$(LHEScaleWeight[5],1)' : 0.995984, 'Alt$(LHEScaleWeight[8],1)' : 0.913038, 'Alt$(LHEScaleWeight[3],1)' : 1.008039, 'Alt$(LHEScaleWeight[7],1)' : 0.920094}
topScaleNormFactors2j = {'Alt$(LHEScaleWeight[0],1)' : 1.123153, 'Alt$(LHEScaleWeight[1],1)' : 1.104644, 'Alt$(LHEScaleWeight[5],1)' : 0.982576, 'Alt$(LHEScaleWeight[8],1)' : 0.882969, 'Alt$(LHEScaleWeight[3],1)' : 1.022923, 'Alt$(LHEScaleWeight[7],1)' : 0.903047}

topvars0j.append('Alt$(LHEScaleWeight[0],1)/'+str(topScaleNormFactors0j['Alt$(LHEScaleWeight[0],1)']))
topvars0j.append('Alt$(LHEScaleWeight[8],1)/'+str(topScaleNormFactors0j['Alt$(LHEScaleWeight[8],1)']))

topvars1j.append('Alt$(LHEScaleWeight[0],1)/'+str(topScaleNormFactors1j['Alt$(LHEScaleWeight[0],1)']))
topvars1j.append('Alt$(LHEScaleWeight[8],1)/'+str(topScaleNormFactors1j['Alt$(LHEScaleWeight[8],1)']))

topvars2j.append('Alt$(LHEScaleWeight[0],1)/'+str(topScaleNormFactors2j['Alt$(LHEScaleWeight[0],1)']))
topvars2j.append('Alt$(LHEScaleWeight[8],1)/'+str(topScaleNormFactors2j['Alt$(LHEScaleWeight[8],1)']))

## QCD scale nuisances for top are decorrelated for each RECO jet bin: the QCD scale is different for different jet multiplicities so it doesn't make sense to correlate them
nuisances['QCDscale_top_0j']  = {
    'name'  : 'QCDscale_top_0j',
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
    'cuts' : [cut for cut in cuts if '0j' in cut],
    'samples'  : {
       'top' : topvars0j,
    }
}

nuisances['QCDscale_top_1j']  = {
    'name'  : 'QCDscale_top_1j',
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
    'cuts' : [cut for cut in cuts if '1j' in cut],
    'samples'  : {
       'top' : topvars1j,
    }
}

nuisances['QCDscale_top_2j']  = {
    'name'  : 'QCDscale_top_2j',
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
    'cuts' : [cut for cut in cuts if '2j' in cut],
    'samples'  : {
       'top' : topvars2j,
    }
}

# TODO update
# ggww and interference
#nuisances['QCDscale_ggVV'] = {
#    'name': 'QCDscale_ggVV',
#    'type': 'lnN',
#    'samples': {
#        'ggWW': '1.15',
#    },
#}

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

# TODO update
nuisances['QCDscale_WWewk'] = {
    'name': 'QCDscale_WWewk',
    'samples': {
        'WWewk': '1.11',
    },
    'type': 'lnN'
}

# TODO update
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

# TODO update
nuisances['QCDscale_gg_ACCEPT'] = {
    'name': 'QCDscale_gg_ACCEPT',
    'samples': {
        'ggH_htt': '1.012',
        'ggZH_hww': '1.012',
        #'ggWW': '1.012',
    },
    'type': 'lnN',
}

# Resummation
# TODO -- leaving skeleton for now
'''
nuisances['WWresum0j']  = {
    'name'  : 'CMS_hww_WWresum_0j',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
    },
    'cuts'  : [cut for cut in cuts if '0j' in cut]
}

nuisances['WWqscale0j']  = {
    'name'  : 'CMS_hww_WWqscale_0j',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
    },
    'cuts'  : [cut for cut in cuts if '0j' in cut]
}

nuisances['WWresum1j']  = {
    'name'  : 'CMS_hww_WWresum_1j',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
    },
    'cuts'  : [cut for cut in cuts if '1j' in cut]
}

nuisances['WWqscale1j']  = {
    'name'  : 'CMS_hww_WWqscale_1j',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
    },
    'cuts'  : [cut for cut in cuts if '1j' in cut]
}

nuisances['WWresum2j']  = {
    'name'  : 'CMS_hww_WWresum_2j',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
    },
    'cuts'  : [cut for cut in cuts if '2j' in cut]
}

nuisances['WWqscale2j']  = {
    'name'  : 'CMS_hww_WWqscale_2j',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
        'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
    },
    'cuts'  : [cut for cut in cuts if '2j' in cut]
}
'''

# Uncertainty on SR/CR ratio
#nuisances['CRSR_accept_DY'] = {
#    'name': 'CMS_hww_CRSR_accept_DY',
#    'type': 'lnN',
#    'samples': {'DY': '1.02'},
#    'cuts': [cut for cut in cuts if '_dytt_' in cut],
#}

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_top'] = {
    'name': 'CMS_hww_CRSR_accept_top',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    'cuts': [cut for cut in cuts if '_top_' in cut],
}

## rate parameters
'''
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
               'cuts'  : cuts1j
              }

nuisances['DYttnorm2j']  = {
                 'name'  : 'CMS_hww_DYttnorm2j',
                 'samples'  : {
                   'DY' : '1.00',
                     },
                 'type'  : 'rateParam',
                 'cuts'  : cuts2j
                }
'''
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

nuisances['Topnorm2j']  = {
               'name'  : 'CMS_hww_Topnorm2j',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : cuts2j
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

