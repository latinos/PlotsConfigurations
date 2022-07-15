
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
configurations = os.path.dirname(configurations) # jetpt0
configurations = os.path.dirname(configurations) # Full2016_v7
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

diffcuts = samples['WW']['subsamples'] if 'WW' in samples else {}
nfdict = json.load(open("%s/WW/FullRunII/Full2016_v7/jetpt0/WWnorm.json"%configurations))

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
        'Wg'      : ['1.003449*(puWeightUp/puWeight)', '0.994471*(puWeightDown/puWeight)'],
        'WgS'     : ['1.011419*(puWeightUp/puWeight)', '0.988532*(puWeightDown/puWeight)'],
        'Zg'      : ['1.001969*(puWeightUp/puWeight)', '0.998883*(puWeightDown/puWeight)'],
        'ZgS'     : ['0.987158*(puWeightUp/puWeight)', '1.013052*(puWeightDown/puWeight)'],
        'WZ'      : ['0.996128*(puWeightUp/puWeight)', '1.003751*(puWeightDown/puWeight)'],
        'ZZ'      : ['1.000313*(puWeightUp/puWeight)', '0.998217*(puWeightDown/puWeight)'],
        'VVV'     : ['1.002442*(puWeightUp/puWeight)', '0.998130*(puWeightDown/puWeight)'],
        'top'     : ['1.004342*(puWeightUp/puWeight)', '0.995847*(puWeightDown/puWeight)'],
        'ggH_htt' : ['1.002599*(puWeightUp/puWeight)', '0.998040*(puWeightDown/puWeight)'],
        'qqH_htt' : ['1.001258*(puWeightUp/puWeight)', '0.999380*(puWeightDown/puWeight)'],
        'WH_htt'  : ['1.005544*(puWeightUp/puWeight)', '0.993659*(puWeightDown/puWeight)'],
        'ZH_htt'  : ['0.999916*(puWeightUp/puWeight)', '0.998152*(puWeightDown/puWeight)'],
        'ggH_hww' : ['1.007089*(puWeightUp/puWeight)', '0.993263*(puWeightDown/puWeight)'],
        'qqH_hww' : ['1.010403*(puWeightUp/puWeight)', '0.989428*(puWeightDown/puWeight)'],
        'WH_hww'  : ['1.003999*(puWeightUp/puWeight)', '0.996201*(puWeightDown/puWeight)'],
        'ZH_hww'  : ['0.991079*(puWeightUp/puWeight)', '1.008521*(puWeightDown/puWeight)'],
        'ggZH_hww': ['1.004855*(puWeightUp/puWeight)', '0.993307*(puWeightDown/puWeight)'],
        'ttH_hww' : ['1.002693*(puWeightUp/puWeight)', '0.997429*(puWeightDown/puWeight)'],
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
        'Wg' : ['1.01413446394*(nCleanGenJet==0) + 1.0200293271*(nCleanGenJet==1) + 1.02664937106*(nCleanGenJet==2) + 1.01687421291*(nCleanGenJet>=3)', '0.982180609174*(nCleanGenJet==0) + 0.975566617544*(nCleanGenJet==1) + 0.967630874339*(nCleanGenJet==2) + 0.979539715261*(nCleanGenJet>=3)'],
        'Zg' : ['1.00483960633*(nCleanGenJet==0) + 1.00566057582*(nCleanGenJet==1) + 0.997165975993*(nCleanGenJet==2) + 0.962710034668*(nCleanGenJet>=3)', '0.994479127985*(nCleanGenJet==0) + 0.994074640477*(nCleanGenJet==1) + 1.00464516524*(nCleanGenJet==2) + 1.04945946796*(nCleanGenJet>=3)'],
        'ZgS' : ['1.00446124252*(nCleanGenJet==0) + 1.00686034242*(nCleanGenJet==1) + 0.982749275023*(nCleanGenJet==2) + 0.947024687562*(nCleanGenJet>=3)', '0.995204061177*(nCleanGenJet==0) + 0.992695489328*(nCleanGenJet==1) + 1.02196797265*(nCleanGenJet==2) + 1.07151632305*(nCleanGenJet>=3)'],
        'WgS' : ['1.00162607175*(nCleanGenJet==0) + 1.01076021151*(nCleanGenJet==1) + 0.965329289621*(nCleanGenJet==2) + 0.934253052983*(nCleanGenJet>=3)', '0.998052819158*(nCleanGenJet==0) + 0.987112102624*(nCleanGenJet==1) + 1.04323441024*(nCleanGenJet==2) + 1.08887553954*(nCleanGenJet>=3)'],
        'WZ' : ['1.00299713875*(nCleanGenJet==0) + 1.01943485859*(nCleanGenJet==1) + 1.00910533031*(nCleanGenJet==2) + 0.982077222876*(nCleanGenJet>=3)', '0.996520605154*(nCleanGenJet==0) + 0.976836751779*(nCleanGenJet==1) + 0.98971945742*(nCleanGenJet==2) + 1.02461772899*(nCleanGenJet>=3)'],
        'ZZ' : ['1.00353805641*(nCleanGenJet==0) + 1.01883467177*(nCleanGenJet==1) + 1.0134834166*(nCleanGenJet==2) + 0.987256038157*(nCleanGenJet>=3)', '0.995767500709*(nCleanGenJet==0) + 0.977406949327*(nCleanGenJet==1) + 0.984223148462*(nCleanGenJet==2) + 1.01776727574*(nCleanGenJet>=3)'],
        'VVV' : ['1.02898908893*(nCleanGenJet==0) + 1.02145356118*(nCleanGenJet==1) + 1.01340018265*(nCleanGenJet==2) + 0.986639400724*(nCleanGenJet>=3)', '0.966314484219*(nCleanGenJet==0) + 0.975572768266*(nCleanGenJet==1) + 0.985231148645*(nCleanGenJet==2) + 1.01953430171*(nCleanGenJet>=3)'],
        'ggH_hww' : ['1.00105785908*(nCleanGenJet==0) + 1.01789823317*(nCleanGenJet==1) + 0.965110606027*(nCleanGenJet==2) + 0.919216674555*(nCleanGenJet>=3)', '0.99886858413*(nCleanGenJet==0) + 0.978698037502*(nCleanGenJet==1) + 1.04139342082*(nCleanGenJet==2) + 1.10574836802*(nCleanGenJet>=3)'],
        'qqH_hww' : ['1.00098678619*(nCleanGenJet==0) + 1.00129151703*(nCleanGenJet==1) + 1.00186464138*(nCleanGenJet==2) + 0.989340162982*(nCleanGenJet>=3)', '0.99921370008*(nCleanGenJet==0) + 0.9988882169*(nCleanGenJet==1) + 0.998130102022*(nCleanGenJet==2) + 1.01471664219*(nCleanGenJet>=3)'],
        'ZH_hww' : ['1.00103196718*(nCleanGenJet==0) + 1.0013347957*(nCleanGenJet==1) + 1.00168419218*(nCleanGenJet==2) + 0.997776033293*(nCleanGenJet>=3)', '0.99908158841*(nCleanGenJet==0) + 0.998674841907*(nCleanGenJet==1) + 0.998215355011*(nCleanGenJet==2) + 1.00338954316*(nCleanGenJet>=3)'],
        'ggZH_hww' : ['1.06858192843*(nCleanGenJet==0) + 1.02503320856*(nCleanGenJet==1) + 1.02190285627*(nCleanGenJet==2) + 0.949650533979*(nCleanGenJet>=3)', '0.919439849605*(nCleanGenJet==0) + 0.967570390729*(nCleanGenJet==1) + 0.973268327072*(nCleanGenJet==2) + 1.06261930574*(nCleanGenJet>=3)'],
        'WH_hww' : ['1.00144260946*(nCleanGenJet==0) + 1.00146776932*(nCleanGenJet==1) + 1.00177757517*(nCleanGenJet==2) + 0.997573060819*(nCleanGenJet>=3)', '0.998574801767*(nCleanGenJet==0) + 0.998617702556*(nCleanGenJet==1) + 0.99826400411*(nCleanGenJet==2) + 1.00386007209*(nCleanGenJet>=3)'],
        'ttH_hww' : ['1.00347789798*(nCleanGenJet==0) + 1.00482550745*(nCleanGenJet==1) + 1.00759934464*(nCleanGenJet==2) + 1.00030524481*(nCleanGenJet>=3)', '0.996144343946*(nCleanGenJet==0) + 0.994823067317*(nCleanGenJet==1) + 0.991392742226*(nCleanGenJet==2) + 1.00068351641*(nCleanGenJet>=3)'],
        'ggH_htt' : ['1.00097525758*(nCleanGenJet==0) + 1.01767682451*(nCleanGenJet==1) + 0.966730328818*(nCleanGenJet==2) + 0.919948920589*(nCleanGenJet>=3)', '0.998694487949*(nCleanGenJet==0) + 0.978554125014*(nCleanGenJet==1) + 1.03921319299*(nCleanGenJet==2) + 1.1045549565*(nCleanGenJet>=3)'],
        'qqH_htt' : ['1.00148706688*(nCleanGenJet==0) + 1.00113347691*(nCleanGenJet==1) + 1.00205592345*(nCleanGenJet==2) + 0.989085882482*(nCleanGenJet>=3)', '0.998189157179*(nCleanGenJet==0) + 0.998816246805*(nCleanGenJet==1) + 0.997667601061*(nCleanGenJet==2) + 1.01476730259*(nCleanGenJet>=3)'],
        'ZH_htt' : ['1.00098411822*(nCleanGenJet==0) + 1.00112017797*(nCleanGenJet==1) + 1.00159685386*(nCleanGenJet==2) + 0.993243490186*(nCleanGenJet>=3)', '0.99885657529*(nCleanGenJet==0) + 0.99873159193*(nCleanGenJet==1) + 0.998192936009*(nCleanGenJet==2) + 1.00888405731*(nCleanGenJet>=3)'],
        'WH_htt' : ['1.0011518207*(nCleanGenJet==0) + 1.00151612758*(nCleanGenJet==1) + 1.00215926694*(nCleanGenJet==2) + 0.990861486803*(nCleanGenJet>=3)', '0.998714889246*(nCleanGenJet==0) + 0.998364470791*(nCleanGenJet==1) + 0.997638812079*(nCleanGenJet==2) + 1.01242136791*(nCleanGenJet>=3)'],
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
        'Wg' : ['0.998528328566*(nCleanGenJet==0) + 1.00298975355*(nCleanGenJet==1) + 1.01155338451*(nCleanGenJet==2) + 1.02367310417*(nCleanGenJet>=3)', '1.00255752739*(nCleanGenJet==0) + 0.995648537441*(nCleanGenJet==1) + 0.985184149062*(nCleanGenJet==2) + 0.963826005923*(nCleanGenJet>=3)'],
        'Zg' : ['0.998198313098*(nCleanGenJet==0) + 1.00278367171*(nCleanGenJet==1) + 1.00957031538*(nCleanGenJet==2) + 1.00994035619*(nCleanGenJet>=3)', '1.00414055807*(nCleanGenJet==0) + 0.996938800806*(nCleanGenJet==1) + 0.985648642754*(nCleanGenJet==2) + 0.982638426891*(nCleanGenJet>=3)'],
        'ZgS' : ['0.995820472365*(nCleanGenJet==0) + 1.00380962932*(nCleanGenJet==1) + 1.00777699514*(nCleanGenJet==2) + 1.02112039086*(nCleanGenJet>=3)', '1.00984231193*(nCleanGenJet==0) + 0.989287770416*(nCleanGenJet==1) + 0.989546806509*(nCleanGenJet==2) + 0.987447787622*(nCleanGenJet>=3)'],
        'WgS' : ['0.998534603585*(nCleanGenJet==0) + 1.00688658779*(nCleanGenJet==1) + 1.01410290774*(nCleanGenJet==2) + 1.01967528225*(nCleanGenJet>=3)', '1.0024506556*(nCleanGenJet==0) + 0.987863046627*(nCleanGenJet==1) + 0.974641197133*(nCleanGenJet==2) + 0.963153338687*(nCleanGenJet>=3)'],
        'WZ' : ['0.992635980783*(nCleanGenJet==0) + 0.997040150074*(nCleanGenJet==1) + 1.01133185292*(nCleanGenJet==2) + 1.01428967784*(nCleanGenJet>=3)', '1.01258517727*(nCleanGenJet==0) + 1.00569421309*(nCleanGenJet==1) + 0.984327801316*(nCleanGenJet==2) + 0.978031865216*(nCleanGenJet>=3)'],
        'ZZ' : ['0.991730714434*(nCleanGenJet==0) + 0.993542723151*(nCleanGenJet==1) + 1.01484404591*(nCleanGenJet==2) + 1.01842693137*(nCleanGenJet>=3)', '1.01387410188*(nCleanGenJet==0) + 1.01088820242*(nCleanGenJet==1) + 0.978459837909*(nCleanGenJet==2) + 0.971776819933*(nCleanGenJet>=3)'],
        'VVV' : ['0.985336718207*(nCleanGenJet==0) + 0.982590559736*(nCleanGenJet==1) + 0.999610278411*(nCleanGenJet==2) + 1.00823953062*(nCleanGenJet>=3)', '1.03073292399*(nCleanGenJet==0) + 1.0345245633*(nCleanGenJet==1) + 1.00289740392*(nCleanGenJet==2) + 0.98810694336*(nCleanGenJet>=3)'],
        'ggH_hww' : ['0.994121107057*(nCleanGenJet==0) + 1.00815577993*(nCleanGenJet==1) + 1.01549228324*(nCleanGenJet==2) + 1.00694930929*(nCleanGenJet>=3)', '1.01077211015*(nCleanGenJet==0) + 0.986560584318*(nCleanGenJet==1) + 0.975620345777*(nCleanGenJet==2) + 0.988232901036*(nCleanGenJet>=3)'],
        'qqH_hww' : ['0.988540259523*(nCleanGenJet==0) + 0.995460902773*(nCleanGenJet==1) + 1.0029923985*(nCleanGenJet==2) + 1.01015397456*(nCleanGenJet>=3)', '1.01917892144*(nCleanGenJet==0) + 1.00931082215*(nCleanGenJet==1) + 0.995951333429*(nCleanGenJet==2) + 0.981790670801*(nCleanGenJet>=3)'],
        'ZH_hww' : ['0.986749537737*(nCleanGenJet==0) + 0.9896727508*(nCleanGenJet==1) + 1.0021049134*(nCleanGenJet==2) + 1.01021793338*(nCleanGenJet>=3)', '1.02532580649*(nCleanGenJet==0) + 1.01685827613*(nCleanGenJet==1) + 0.998161268083*(nCleanGenJet==2) + 0.980179506471*(nCleanGenJet>=3)'],
        'ggZH_hww' : ['0.989766640077*(nCleanGenJet==0) + 0.995886277294*(nCleanGenJet==1) + 1.00106694842*(nCleanGenJet==2) + 1.00586583722*(nCleanGenJet>=3)', '1.0173223182*(nCleanGenJet==0) + 1.00910824738*(nCleanGenJet==1) + 0.999818799238*(nCleanGenJet==2) + 0.989128964476*(nCleanGenJet>=3)'],
        'WH_hww' : ['0.984627490561*(nCleanGenJet==0) + 0.991796997819*(nCleanGenJet==1) + 1.00441108567*(nCleanGenJet==2) + 1.01419380641*(nCleanGenJet>=3)', '1.0273817844*(nCleanGenJet==0) + 1.01342713428*(nCleanGenJet==1) + 0.993657106218*(nCleanGenJet==2) + 0.97548886182*(nCleanGenJet>=3)'],
        'ttH_hww' : ['0.964517261436*(nCleanGenJet==0) + 0.97668786149*(nCleanGenJet==1) + 0.983313699328*(nCleanGenJet==2) + 1.0047518176*(nCleanGenJet>=3)', '1.04919690491*(nCleanGenJet==0) + 1.0404990363*(nCleanGenJet==1) + 1.027496367*(nCleanGenJet==2) + 0.993415347035*(nCleanGenJet>=3)'],
        'ggH_htt' : ['0.994264476199*(nCleanGenJet==0) + 1.00729149431*(nCleanGenJet==1) + 1.0153702392*(nCleanGenJet==2) + 1.0093041208*(nCleanGenJet>=3)', '1.00951348904*(nCleanGenJet==0) + 0.988694938402*(nCleanGenJet==1) + 0.975538504823*(nCleanGenJet==2) + 0.982292707597*(nCleanGenJet>=3)'],
        'qqH_htt' : ['0.989853695401*(nCleanGenJet==0) + 0.995382642632*(nCleanGenJet==1) + 1.00260280327*(nCleanGenJet==2) + 1.01153721967*(nCleanGenJet>=3)', '1.01683592386*(nCleanGenJet==0) + 1.00739314187*(nCleanGenJet==1) + 0.996680906651*(nCleanGenJet==2) + 0.980014121579*(nCleanGenJet>=3)'],
        'ZH_htt' : ['0.993028706237*(nCleanGenJet==0) + 0.994614533828*(nCleanGenJet==1) + 1.00765951428*(nCleanGenJet==2) + 1.01248486855*(nCleanGenJet>=3)', '1.01147354983*(nCleanGenJet==0) + 1.01026926444*(nCleanGenJet==1) + 0.988171114077*(nCleanGenJet==2) + 0.978017093191*(nCleanGenJet>=3)'],
        'WH_htt' : ['0.994578161618*(nCleanGenJet==0) + 0.997095960776*(nCleanGenJet==1) + 1.00897262496*(nCleanGenJet==2) + 1.01302598407*(nCleanGenJet>=3)', '1.00908031106*(nCleanGenJet==0) + 1.00489452892*(nCleanGenJet==1) + 0.986833856649*(nCleanGenJet==2) + 0.978573005202*(nCleanGenJet>=3)'],
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
        'Zg': variations,
        'Wg': variations,
        'ZZ': variations,
        'WZ': variations,
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
    '1j' : {'Alt$(LHEScaleWeight[0],1)' : 1.097179, 'Alt$(LHEScaleWeight[1],1)' : 1.084588, 'Alt$(LHEScaleWeight[3],1)' : 1.017078, 'Alt$(LHEScaleWeight[5],1)' : 0.987431, 'Alt$(LHEScaleWeight[7],1)' : 0.920468, 'Alt$(LHEScaleWeight[8],1)' : 0.904932},
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
        'cutspost' : lambda self, cuts: [cut for cut in cuts if ibin in cut],
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
for ibin in cuts['ww2l2v_13TeV_top']['categories']:
    nuisances['WWresum'+ibin]  = {
        'name'  : 'CMS_hww_WWresum_'+ibin,
        'kind'  : 'weight',
        'type'  : 'shape',
        'samples'  : {
            'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
        },
        'cutspost' : lambda self, cuts: [cut for cut in cuts if ibin in cut],
    }

    nuisances['WWqscale'+ibin]  = {
        'name'  : 'CMS_hww_WWqscale_'+ibin,
        'kind'  : 'weight',
        'type'  : 'shape',
        'samples'  : {
            'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
        },
        'cutspost' : lambda self, cuts: [cut for cut in cuts if ibin in cut],
    }

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
        'ggH_htt': '1.012',
        'ggZH_hww': '1.012',
        #'ggWW': '1.012',
    },
    'type': 'lnN',
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
    nuisances['Topnorm'+ibin]  = {
        'name'  : 'CMS_hww_Topnorm'+ibin,
        'samples'  : {
            'top' : '1.00',
        },
        'type'  : 'rateParam',
        'cutspost' : lambda self, cuts: [cut for cut in cuts if ibin in cut],
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

