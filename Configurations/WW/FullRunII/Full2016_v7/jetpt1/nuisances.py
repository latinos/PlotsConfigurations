
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
configurations = os.path.dirname(configurations) # jetpt1
configurations = os.path.dirname(configurations) # Full2016_v7
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

diffcuts = samples['WW']['subsamples'] if 'WW' in samples else {}
allcuts = [cut+'_'+cat for cut in cuts for cat in cuts[cut]['categories']]
nfdict = json.load(open("%s/WW/FullRunII/Full2016_v7/jetpt1/WWnorm.json"%configurations))
sfdict = json.load(open("%s/WW/FullRunII/Full2016_v7/jetpt1/sampleFrac.json"%configurations))

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
    'samples': {
        'Fake': ['fakeWEleUp', 'fakeWEleDown']
    }
}

nuisances['fake_ele_stat'] = {
    'name': 'CMS_fake_stat_e_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown'],
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

###### B-tagger

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
        'AsLnN': '1'
    }

##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_2l_u)/(TriggerEffWeight_2l))*(TriggerEffWeight_2l>0.02) + (TriggerEffWeight_2l<=0.02)', '(TriggerEffWeight_2l_d)/(TriggerEffWeight_2l)']

nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc),
    'AsLnN': '1'
}

prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire'] = {
    'name': 'CMS_eff_prefiring_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, prefire_syst) for skey in mc),
    'AsLnN': '1'
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc),
    #'AsLnN': '1'
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
    'AsLnN': '1'
}

##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc),
    #'AsLnN': '1'
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
    'AsLnN': '1'
}

###### Jet energy scale

##### Jet energy scale
jes_systs = ['JESAbsolute','JESAbsolute_2016','JESBBEC1','JESBBEC1_2016','JESEC2','JESEC2_2016','JESFlavorQCD','JESHF','JESHF_2016','JESRelativeBal','JESRelativeSample_2016']
folderup = ""
folderdo = ""

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
      'samples': dict((skey, ['1', '1']) for skey in mc),
      'folderUp': folderup,
      'folderDown': folderdo,
      'AsLnN': '1'
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
    'AsLnN': '1'
}

### PU ID SF uncertainty
puid_syst = ['Jet_PUIDSF_up/Jet_PUIDSF', 'Jet_PUIDSF_down/Jet_PUIDSF']

nuisances['jetPUID'] = {
    'name': 'CMS_PUID_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, puid_syst) for skey in mc)
}

##### Pileup

nuisances['PU'] = {
    'name': 'CMS_PU_2016',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'DY'      : ['0.997972*(puWeightUp/puWeight)', '1.002311*(puWeightDown/puWeight)'],
        'WW'      : ['1.005742*(puWeightUp/puWeight)', '0.994523*(puWeightDown/puWeight)'],
        'ggWW'    : ['1.004407*(puWeightUp/puWeight)', '0.995770*(puWeightDown/puWeight)'],
        'Vg'      : ['1.003011*(puWeightUp/puWeight)', '0.997502*(puWeightDown/puWeight)'],
        'WZ'      : ['0.996128*(puWeightUp/puWeight)', '1.003751*(puWeightDown/puWeight)'],
        'ZZ'      : ['1.000313*(puWeightUp/puWeight)', '0.998217*(puWeightDown/puWeight)'],
        'VVV'     : ['1.002442*(puWeightUp/puWeight)', '0.998130*(puWeightDown/puWeight)'],
        'top'     : ['1.004342*(puWeightUp/puWeight)', '0.995847*(puWeightDown/puWeight)'],
        'Higgs'   : ['1.006574*(puWeightUp/puWeight)', '0.993670*(puWeightDown/puWeight)'],
    },
    'AsLnN': '1',
}

nuisances['PS_ISR']  = {
    'name': 'PS_ISR',
    'kind' : 'weight',
    'type': 'shape',
    'samples': {
        'DY' : ['0.985440537674*(nCleanGenJet==0) + 1.02638180215*(nCleanGenJet==1) + 1.03421524738*(nCleanGenJet==2) + 1.02164156161*(nCleanGenJet>=3)', '1.01981055284*(nCleanGenJet==0) + 0.967816399042*(nCleanGenJet==1) + 0.958365174347*(nCleanGenJet==2) + 0.974128844617*(nCleanGenJet>=3)'],
        'top' : ['1.00310494175*(nCleanGenJet==0) + 1.00448162172*(nCleanGenJet==1) + 1.00759806378*(nCleanGenJet==2) + 0.99273296777*(nCleanGenJet>=3)', '0.996748431798*(nCleanGenJet==0) + 0.995124711561*(nCleanGenJet==1) + 0.991357055388*(nCleanGenJet==2) + 1.01006497507*(nCleanGenJet>=3)'],
        'WWewk' : ['1.00130276597*(nCleanGenJet==0) + 1.01574481738*(nCleanGenJet==1) + 1.01853470643*(nCleanGenJet==2) + 0.965430113576*(nCleanGenJet>=3)', '0.999755205017*(nCleanGenJet==0) + 0.981919078707*(nCleanGenJet==1) + 0.978330331874*(nCleanGenJet==2) + 1.04643758776*(nCleanGenJet>=3)'],
        'Vg' : ['1.00395638344*(nCleanGenJet==0) + 1.00647898885*(nCleanGenJet==1) + 0.993768654346*(nCleanGenJet==2) + 0.960125992608*(nCleanGenJet>=3)', '0.995466036899*(nCleanGenJet==0) + 0.992960407351*(nCleanGenJet==1) + 1.00876153617*(nCleanGenJet==2) + 1.05304136549*(nCleanGenJet>=3)'],
        'WZ' : ['1.00299713875*(nCleanGenJet==0) + 1.01943485859*(nCleanGenJet==1) + 1.00910533031*(nCleanGenJet==2) + 0.982077222876*(nCleanGenJet>=3)', '0.996520605154*(nCleanGenJet==0) + 0.976836751779*(nCleanGenJet==1) + 0.98971945742*(nCleanGenJet==2) + 1.02461772899*(nCleanGenJet>=3)'],
        'ZZ' : ['1.00353805641*(nCleanGenJet==0) + 1.01883467177*(nCleanGenJet==1) + 1.0134834166*(nCleanGenJet==2) + 0.987256038157*(nCleanGenJet>=3)', '0.995767500709*(nCleanGenJet==0) + 0.977406949327*(nCleanGenJet==1) + 0.984223148462*(nCleanGenJet==2) + 1.01776727574*(nCleanGenJet>=3)'],
        'VVV' : ['1.02898908893*(nCleanGenJet==0) + 1.02145356118*(nCleanGenJet==1) + 1.01340018265*(nCleanGenJet==2) + 0.986639400724*(nCleanGenJet>=3)', '0.966314484219*(nCleanGenJet==0) + 0.975572768266*(nCleanGenJet==1) + 0.985231148645*(nCleanGenJet==2) + 1.01953430171*(nCleanGenJet>=3)'],
        'Higgs' : ['1.00104318674*(nCleanGenJet==0) + 1.01448985575*(nCleanGenJet==1) + 0.983557638182*(nCleanGenJet==2) + 0.978450698368*(nCleanGenJet>=3)', '0.998754124399*(nCleanGenJet==0) + 0.982634184821*(nCleanGenJet==1) + 1.01955499249*(nCleanGenJet==2) + 1.02881144381*(nCleanGenJet>=3)'],
    }
}

norm_ISR_WW   = ['+'.join(['({})*({})'.format(diffcuts[binname],nfdict["PS_ISR"]["WW_"+binname][i]) for binname in diffcuts]) for i in range(8)]
norm_ISR_ggWW = ['+'.join(['({})*({})'.format(diffcuts[binname],nfdict["PS_ISR"]["ggWW_"+binname][i]) for binname in diffcuts]) for i in range(8)]

nuisances['PS_ISR_WW']  = {
    'name': 'PS_ISR',
    'kind' : 'weight',
    'type': 'shape',
    'samples': {        
        'WW'   : ['({})*(nCleanGenJet==0) + ({})*(nCleanGenJet==1) + ({})*(nCleanGenJet==2) + ({})*(nCleanGenJet>=3)'.format(*norm_ISR_WW[:4]), '({})*(nCleanGenJet==0) + ({})*(nCleanGenJet==1) + ({})*(nCleanGenJet==2) + ({})*(nCleanGenJet>=3)'.format(*norm_ISR_WW[4:])],
        'ggWW' : ['({})*(nCleanGenJet==0) + ({})*(nCleanGenJet==1) + ({})*(nCleanGenJet==2) + ({})*(nCleanGenJet>=3)'.format(*norm_ISR_ggWW[:4]), '({})*(nCleanGenJet==0) + ({})*(nCleanGenJet==1) + ({})*(nCleanGenJet==2) + ({})*(nCleanGenJet>=3)'.format(*norm_ISR_ggWW[4:])],
            }
}

nuisances['PS_FSR']  = {
    'name': 'PS_FSR',
    'kind' : 'weight',
    'type': 'shape',
    'samples': {
        'DY' : ['0.999034943442*(nCleanGenJet==0) + 1.01048258595*(nCleanGenJet==1) + 1.02686861439*(nCleanGenJet==2) + 1.04528303751*(nCleanGenJet>=3)', '1.00187061921*(nCleanGenJet==0) + 0.983954838312*(nCleanGenJet==1) + 0.960151681064*(nCleanGenJet==2) + 0.932643380237*(nCleanGenJet>=3)'],
        'top' : ['0.968583092212*(nCleanGenJet==0) + 0.986351880374*(nCleanGenJet==1) + 1.00018267642*(nCleanGenJet==2) + 1.0104588116*(nCleanGenJet>=3)', '1.0522390504*(nCleanGenJet==0) + 1.02340713009*(nCleanGenJet==1) + 1.00165176093*(nCleanGenJet==2) + 0.98327330073*(nCleanGenJet>=3)'],
        'WWewk' : ['0.994199235812*(nCleanGenJet==0) + 0.992834453851*(nCleanGenJet==1) + 1.00309615752*(nCleanGenJet==2) + 1.00570717429*(nCleanGenJet>=3)', '1.01213557622*(nCleanGenJet==0) + 1.01387241327*(nCleanGenJet==1) + 1.00087902037*(nCleanGenJet==2) + 0.989680037573*(nCleanGenJet>=3)'],
        'Vg' : ['0.998253394984*(nCleanGenJet==0) + 1.00344286425*(nCleanGenJet==1) + 1.01001539183*(nCleanGenJet==2) + 1.0108720073*(nCleanGenJet>=3)', '1.00376725475*(nCleanGenJet==0) + 0.995415232856*(nCleanGenJet==1) + 0.984563183926*(nCleanGenJet==2) + 0.980996565597*(nCleanGenJet>=3)'],
        'WZ' : ['0.992635980783*(nCleanGenJet==0) + 0.997040150074*(nCleanGenJet==1) + 1.01133185292*(nCleanGenJet==2) + 1.01428967784*(nCleanGenJet>=3)', '1.01258517727*(nCleanGenJet==0) + 1.00569421309*(nCleanGenJet==1) + 0.984327801316*(nCleanGenJet==2) + 0.978031865216*(nCleanGenJet>=3)'],
        'ZZ' : ['0.991730714434*(nCleanGenJet==0) + 0.993542723151*(nCleanGenJet==1) + 1.01484404591*(nCleanGenJet==2) + 1.01842693137*(nCleanGenJet>=3)', '1.01387410188*(nCleanGenJet==0) + 1.01088820242*(nCleanGenJet==1) + 0.978459837909*(nCleanGenJet==2) + 0.971776819933*(nCleanGenJet>=3)'],
        'VVV' : ['0.985336718207*(nCleanGenJet==0) + 0.982590559736*(nCleanGenJet==1) + 0.999610278411*(nCleanGenJet==2) + 1.00823953062*(nCleanGenJet>=3)', '1.03073292399*(nCleanGenJet==0) + 1.0345245633*(nCleanGenJet==1) + 1.00289740392*(nCleanGenJet==2) + 0.98810694336*(nCleanGenJet>=3)'],
        'Higgs' : ['0.99392939497*(nCleanGenJet==0) + 1.00482981882*(nCleanGenJet==1) + 1.00924109163*(nCleanGenJet==2) + 1.00809455774*(nCleanGenJet>=3)', '1.01058514031*(nCleanGenJet==0) + 0.992424383266*(nCleanGenJet==1) + 0.985767775435*(nCleanGenJet==2) + 0.986343023988*(nCleanGenJet>=3)'],
    },
}

norm_FSR_WW   = ['+'.join(['({})*({})'.format(diffcuts[binname],nfdict["PS_FSR"]["WW_"+binname][i]) for binname in diffcuts]) for i in range(8)]
norm_FSR_ggWW = ['+'.join(['({})*({})'.format(diffcuts[binname],nfdict["PS_FSR"]["ggWW_"+binname][i]) for binname in diffcuts]) for i in range(8)]

nuisances['PS_FSR_WW']  = {
    'name': 'PS_FSR',
    'kind' : 'weight',
    'type': 'shape',
    'samples': {        
        'WW'   : ['({})*(nCleanGenJet==0) + ({})*(nCleanGenJet==1) + ({})*(nCleanGenJet==2) + ({})*(nCleanGenJet>=3)'.format(*norm_FSR_WW[:4]), '({})*(nCleanGenJet==0) + ({})*(nCleanGenJet==1) + ({})*(nCleanGenJet==2) + ({})*(nCleanGenJet>=3)'.format(*norm_FSR_WW[4:])],
        'ggWW' : ['({})*(nCleanGenJet==0) + ({})*(nCleanGenJet==1) + ({})*(nCleanGenJet==2) + ({})*(nCleanGenJet>=3)'.format(*norm_FSR_ggWW[:4]), '({})*(nCleanGenJet==0) + ({})*(nCleanGenJet==1) + ({})*(nCleanGenJet==2) + ({})*(nCleanGenJet>=3)'.format(*norm_FSR_ggWW[4:])],
            }
}

# PS and UE
nuisances['UE']  = {
                'name'  : 'UE_CUET',
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
pdf_variations = ["LHEPdfWeight[%d]" %i for i in range(100)] # Float_t LHE pdf variation weights (w_var / w_nominal) for LHA IDs 260001 - 260100
nuisances['pdf_WW']  = {
    'name'  : 'CMS_hww_pdf_WW_2016',
    'kind'  : 'weight_rms',
    'type'  : 'shape',
    'samples'  : {
        'WW'   : pdf_variations,
    },
    'scale' : nfdict["pdf_WW_2016"]
}

##### Renormalization & factorization scales

## Shape nuisance due to QCD scale variations for DY
# LHE scale variation weights (w_var / w_nominal)

## All 2016 samples have either 0 or 9 LHEScaleWeights
variations = ['Alt$(LHEScaleWeight[0],1)', 'Alt$(LHEScaleWeight[1],1)', 'Alt$(LHEScaleWeight[3],1)', 'Alt$(LHEScaleWeight[5],1)', 'Alt$(LHEScaleWeight[7],1)', 'Alt$(LHEScaleWeight[8],1)']

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {'DY': variations},
    'AsLnN': '1'
}

nuisances['QCDscale_VV'] = {
    'name': 'QCDscale_VV',
    'kind': 'weight_envelope',
    'type': 'shape',
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
    'samples'  : {
        'WW' : ['Alt$(LHEScaleWeight[0],1)*('+norm_QCD[0]+')','Alt$(LHEScaleWeight[8],1)*('+norm_QCD[1]+')'],
    }
}

## Factors computed to renormalize the top scale variations such that the integral is not changed in each RECO jet bin (we have rateParams for that)
topScaleNormFactors = {
    '2j' : {'Alt$(LHEScaleWeight[0],1)' : 1.128013, 'Alt$(LHEScaleWeight[1],1)' : 1.107372, 'Alt$(LHEScaleWeight[3],1)' : 1.024307, 'Alt$(LHEScaleWeight[5],1)' : 0.981511, 'Alt$(LHEScaleWeight[7],1)' : 0.902678, 'Alt$(LHEScaleWeight[8],1)' : 0.881620},
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

