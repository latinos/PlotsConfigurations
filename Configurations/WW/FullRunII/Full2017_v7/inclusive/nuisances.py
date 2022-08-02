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
configurations = os.path.dirname(configurations) # inclusive
configurations = os.path.dirname(configurations) # Full2017_v7
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

diffcuts = samples['WW']['subsamples'] if 'WW' in samples else {}
nfdict = json.load(open("%s/WW/FullRunII/Full2017_v7/inclusive/WWnorm.json"%configurations))

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.020') for skey in mc if skey not in ['top', 'DY'])
}

nuisances['lumi_Correlated'] = {
    'name': 'lumi_13TeV_correlated',
    'type': 'lnN',
    'samples': dict((skey, '1.009') for skey in mc if skey not in ['top', 'DY'])
}

nuisances['lumi_1718'] = {
    'name': 'lumi_13TeV_1718',
    'type': 'lnN',
    'samples': dict((skey, '1.006') for skey in mc if skey not in ['top', 'DY'])
}

#### FAKES

nuisances['fake_syst'] = {
    'name': 'CMS_fake_syst',
    'type': 'lnN',
    'samples': {
        'Fake': '1.3'
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
#        'AsLnN': '1'
    }

##### Trigger Efficiency

trig_syst = ['((TriggerEffWeight_2l_u)/(TriggerEffWeight_2l))*(TriggerEffWeight_2l>0.02) + (TriggerEffWeight_2l<=0.02)', '(TriggerEffWeight_2l_d)/(TriggerEffWeight_2l)']

nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc),
#    'AsLnN': '1'
}

prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire'] = {
    'name': 'CMS_eff_prefiring_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, prefire_syst) for skey in mc),
#    'AsLnN': '1'
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc),
#    'AsLnN': '1' #already uncommented
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
#    'AsLnN': '1'
}

##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc),
#    'AsLnN': '1' #already uncommented
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
#    'AsLnN': '1'
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
#      'AsLnN': '1'
  }

# ##### Jet energy resolution
# nuisances['JER'] = {
#     'name': 'CMS_res_j_2017',
#     'kind': 'suffix',
#     'type': 'shape',
#     'mapUp': 'JERup',
#     'mapDown': 'JERdo',
#     'samples': dict((skey, ['1', '1']) for skey in mc),
#     'folderUp': makeMCDirectory('JERup_suffix'),
#     'folderDown': makeMCDirectory('JERdo_suffix'),
#     'AsLnN': '1'
# }

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
#    'AsLnN': '1'
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
        'WWewk'   : ['1.004402*(puWeightUp/puWeight)', '0.996370*(puWeightDown/puWeight)'],
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
        'ttH_hww' : ['0.999573*(puWeightUp/puWeight)', '1.000442*(puWeightDown/puWeight)'],
    },
#    'AsLnN': '1',
}

nuisances['PS_ISR']  = {
    'name': 'PS_ISR',
    'kind' : 'weight',
    'type': 'shape',
    'samples': {
        'DY' : ['0.985176934778*(nCleanGenJet==0) + 1.02323860953*(nCleanGenJet==1) + 1.03082511304*(nCleanGenJet==2) + 1.01947279737*(nCleanGenJet>=3)', '1.02015597861*(nCleanGenJet==0) + 0.971760878961*(nCleanGenJet==1) + 0.962506779109*(nCleanGenJet==2) + 0.9768548489*(nCleanGenJet>=3)'],
        'top' : ['1.00325369023*(nCleanGenJet==0) + 1.004355005*(nCleanGenJet==1) + 1.00713416196*(nCleanGenJet==2) + 0.994607130333*(nCleanGenJet>=3)', '0.996582006386*(nCleanGenJet==0) + 0.995269592073*(nCleanGenJet==1) + 0.991921077786*(nCleanGenJet==2) + 1.00771424365*(nCleanGenJet>=3)'],
        'WWewk' : ['1.00132725511*(nCleanGenJet==0) + 1.01356864238*(nCleanGenJet==1) + 1.0180806123*(nCleanGenJet==2) + 0.978869056285*(nCleanGenJet>=3)', '0.999620635899*(nCleanGenJet==0) + 0.984636444212*(nCleanGenJet==1) + 0.978912874008*(nCleanGenJet==2) + 1.02920126514*(nCleanGenJet>=3)'],
        'Wg' : ['1.01420874665*(nCleanGenJet==0) + 1.01939705021*(nCleanGenJet==1) + 1.02673313097*(nCleanGenJet==2) + 1.01780915721*(nCleanGenJet>=3)', '0.982084767776*(nCleanGenJet==0) + 0.976332495428*(nCleanGenJet==1) + 0.967555642784*(nCleanGenJet==2) + 0.978363005886*(nCleanGenJet>=3)'],
        'Zg' : ['1.00491227182*(nCleanGenJet==0) + 1.00522828538*(nCleanGenJet==1) + 0.998894705495*(nCleanGenJet==2) + 0.971779562299*(nCleanGenJet>=3)', '0.994388808831*(nCleanGenJet==0) + 0.994590606313*(nCleanGenJet==1) + 1.00244040112*(nCleanGenJet==2) + 1.03764073868*(nCleanGenJet>=3)'],
        'ZgS' : ['1.00448753268*(nCleanGenJet==0) + 1.00654349602*(nCleanGenJet==1) + 0.988105767554*(nCleanGenJet==2) + 0.962657164497*(nCleanGenJet>=3)', '0.995150128091*(nCleanGenJet==0) + 0.992950392994*(nCleanGenJet==1) + 1.01585375554*(nCleanGenJet==2) + 1.05046532307*(nCleanGenJet>=3)'],
        'WgS' : ['1.00164764324*(nCleanGenJet==0) + 1.00998494487*(nCleanGenJet==1) + 0.972298377337*(nCleanGenJet==2) + 0.940415610535*(nCleanGenJet>=3)', '0.99802458982*(nCleanGenJet==0) + 0.98805816126*(nCleanGenJet==1) + 1.03465015473*(nCleanGenJet==2) + 1.07998143797*(nCleanGenJet>=3)'],
        'WZ' : ['1.00313994326*(nCleanGenJet==0) + 1.01747117582*(nCleanGenJet==1) + 1.01123574346*(nCleanGenJet==2) + 0.985667560902*(nCleanGenJet>=3)', '0.996335715368*(nCleanGenJet==0) + 0.979220440117*(nCleanGenJet==1) + 0.987074127946*(nCleanGenJet==2) + 1.01989195144*(nCleanGenJet>=3)'],
        'ZZ' : ['1.00367458922*(nCleanGenJet==0) + 1.0175554907*(nCleanGenJet==1) + 1.01398918265*(nCleanGenJet==2) + 0.991547317998*(nCleanGenJet>=3)', '0.995598399921*(nCleanGenJet==0) + 0.978958765834*(nCleanGenJet==1) + 0.983568031759*(nCleanGenJet==2) + 1.0122357345*(nCleanGenJet>=3)'],
        'VVV' : ['1.02958042511*(nCleanGenJet==0) + 1.02301516113*(nCleanGenJet==1) + 1.01470697995*(nCleanGenJet==2) + 0.988033013718*(nCleanGenJet>=3)', '0.96548726255*(nCleanGenJet==0) + 0.973653831033*(nCleanGenJet==1) + 0.98361482315*(nCleanGenJet==2) + 1.01775270293*(nCleanGenJet>=3)'],
        'ggH_hww' : ['1.0011070978*(nCleanGenJet==0) + 1.01603199818*(nCleanGenJet==1) + 0.975551211524*(nCleanGenJet==2) + 0.929966387951*(nCleanGenJet>=3)', '0.998813455072*(nCleanGenJet==0) + 0.980939746317*(nCleanGenJet==1) + 1.02900762234*(nCleanGenJet==2) + 1.09077018276*(nCleanGenJet>=3)'],
        'qqH_hww' : ['1.00113027181*(nCleanGenJet==0) + 1.00130119433*(nCleanGenJet==1) + 1.00183278736*(nCleanGenJet==2) + 0.993077084895*(nCleanGenJet>=3)', '0.999008172529*(nCleanGenJet==0) + 0.99887124899*(nCleanGenJet==1) + 0.99816928367*(nCleanGenJet==2) + 1.00979154508*(nCleanGenJet>=3)'],
        'ZH_hww' : ['1.00112085156*(nCleanGenJet==0) + 1.0013271097*(nCleanGenJet==1) + 1.00165030298*(nCleanGenJet==2) + 0.9980106927*(nCleanGenJet>=3)', '0.998947690416*(nCleanGenJet==0) + 0.998674502993*(nCleanGenJet==1) + 0.998262772415*(nCleanGenJet==2) + 1.00309112232*(nCleanGenJet>=3)'],
        'ggZH_hww' : ['1.06871513463*(nCleanGenJet==0) + 1.03153252941*(nCleanGenJet==1) + 1.02406085729*(nCleanGenJet==2) + 0.956054127506*(nCleanGenJet>=3)', '0.919211678357*(nCleanGenJet==0) + 0.960442716311*(nCleanGenJet==1) + 0.970441928845*(nCleanGenJet==2) + 1.05458644495*(nCleanGenJet>=3)'],
        'WH_hww' : ['1.00156071774*(nCleanGenJet==0) + 1.00132732611*(nCleanGenJet==1) + 1.00173817939*(nCleanGenJet==2) + 0.997973569973*(nCleanGenJet>=3)', '0.998389738959*(nCleanGenJet==0) + 0.998793970662*(nCleanGenJet==1) + 0.998302952172*(nCleanGenJet==2) + 1.00335110757*(nCleanGenJet>=3)'],
        'ttH_hww' : ['1.00719077266*(nCleanGenJet==0) + 1.0044378987*(nCleanGenJet==1) + 1.0069261949*(nCleanGenJet==2) + 1.00058258773*(nCleanGenJet>=3)', '0.991510996864*(nCleanGenJet==0) + 0.995431172163*(nCleanGenJet==1) + 0.992186574943*(nCleanGenJet==2) + 1.00033048119*(nCleanGenJet>=3)'],
        'ggH_htt' : ['1.0014432163*(nCleanGenJet==0) + 1.00362949045*(nCleanGenJet==1) + 1.00730189833*(nCleanGenJet==2) + 0.975899359535*(nCleanGenJet>=3)', '0.998074622697*(nCleanGenJet==0) + 0.995486140809*(nCleanGenJet==1) + 0.991072351679*(nCleanGenJet==2) + 1.03024962307*(nCleanGenJet>=3)'],
        'qqH_htt' : ['1.00164847292*(nCleanGenJet==0) + 1.0014383077*(nCleanGenJet==1) + 1.00142466256*(nCleanGenJet==2) + 0.99943230568*(nCleanGenJet>=3)', '0.997954764522*(nCleanGenJet==0) + 0.998350847504*(nCleanGenJet==1) + 0.99841307734*(nCleanGenJet==2) + 1.0011365305*(nCleanGenJet>=3)'],
        'ZH_htt' : ['1.00084785829*(nCleanGenJet==0) + 1.00118805118*(nCleanGenJet==1) + 1.00123197356*(nCleanGenJet==2) + 0.998606690242*(nCleanGenJet>=3)', '0.999028819145*(nCleanGenJet==0) + 0.998595312614*(nCleanGenJet==1) + 0.99856655912*(nCleanGenJet==2) + 1.00202569533*(nCleanGenJet>=3)'],
        'WH_htt' : ['1.00134699818*(nCleanGenJet==0) + 1.00126693453*(nCleanGenJet==1) + 1.00148170243*(nCleanGenJet==2) + 0.998411237514*(nCleanGenJet>=3)', '0.998424319972*(nCleanGenJet==0) + 0.998576991316*(nCleanGenJet==1) + 0.99838111352*(nCleanGenJet==2) + 1.00253332342*(nCleanGenJet>=3)'],
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
        'DY' : ['0.999089159903*(nCleanGenJet==0) + 1.0090730348*(nCleanGenJet==1) + 1.02215905663*(nCleanGenJet==2) + 1.03710984189*(nCleanGenJet>=3)', '1.00176684986*(nCleanGenJet==0) + 0.986302285469*(nCleanGenJet==1) + 0.967150715958*(nCleanGenJet==2) + 0.944746219279*(nCleanGenJet>=3)'],
        'top' : ['0.967995118052*(nCleanGenJet==0) + 0.985683982729*(nCleanGenJet==1) + 0.999141130059*(nCleanGenJet==2) + 1.0092875985*(nCleanGenJet>=3)', '1.05306011639*(nCleanGenJet==0) + 1.02459546223*(nCleanGenJet==1) + 1.00318304321*(nCleanGenJet==2) + 0.985414605486*(nCleanGenJet>=3)'],
        'WWewk' : ['0.995992453553*(nCleanGenJet==0) + 0.992473853455*(nCleanGenJet==1) + 1.00183031673*(nCleanGenJet==2) + 1.00517758237*(nCleanGenJet>=3)', '1.01094240515*(nCleanGenJet==0) + 1.01359230377*(nCleanGenJet==1) + 1.00242299759*(nCleanGenJet==2) + 0.99251735466*(nCleanGenJet>=3)'],
        'Wg' : ['0.998502747186*(nCleanGenJet==0) + 1.0029987788*(nCleanGenJet==1) + 1.01082156404*(nCleanGenJet==2) + 1.02290801666*(nCleanGenJet>=3)', '1.00262755161*(nCleanGenJet==0) + 0.995588093119*(nCleanGenJet==1) + 0.985990521253*(nCleanGenJet==2) + 0.965281766517*(nCleanGenJet>=3)'],
        'Zg' : ['0.998252228709*(nCleanGenJet==0) + 1.00246821773*(nCleanGenJet==1) + 1.00793966381*(nCleanGenJet==2) + 1.00948473619*(nCleanGenJet>=3)', '1.00410762222*(nCleanGenJet==0) + 0.99735833536*(nCleanGenJet==1) + 0.988476936942*(nCleanGenJet==2) + 0.983074733115*(nCleanGenJet>=3)'],
        'ZgS' : ['0.995840439673*(nCleanGenJet==0) + 1.00065020022*(nCleanGenJet==1) + 1.01289495098*(nCleanGenJet==2) + 1.01313830019*(nCleanGenJet>=3)', '1.00956189018*(nCleanGenJet==0) + 0.996484931507*(nCleanGenJet==1) + 0.980174366645*(nCleanGenJet==2) + 0.993059218331*(nCleanGenJet>=3)'],
        'WgS' : ['0.998540001705*(nCleanGenJet==0) + 1.00645535939*(nCleanGenJet==1) + 1.01192904104*(nCleanGenJet==2) + 1.02204132654*(nCleanGenJet>=3)', '1.00246326655*(nCleanGenJet==0) + 0.988553284711*(nCleanGenJet==1) + 0.978241595068*(nCleanGenJet==2) + 0.959600681907*(nCleanGenJet>=3)'],
        'WZ' : ['0.992550803859*(nCleanGenJet==0) + 0.996519645202*(nCleanGenJet==1) + 1.00972663507*(nCleanGenJet==2) + 1.01285720326*(nCleanGenJet>=3)', '1.01257053665*(nCleanGenJet==0) + 1.00654245803*(nCleanGenJet==1) + 0.986969045837*(nCleanGenJet==2) + 0.980384384221*(nCleanGenJet>=3)'],
        'ZZ' : ['0.99159863999*(nCleanGenJet==0) + 0.993373093063*(nCleanGenJet==1) + 1.0131497005*(nCleanGenJet==2) + 1.0164848396*(nCleanGenJet>=3)', '1.01409496137*(nCleanGenJet==0) + 1.01110400822*(nCleanGenJet==1) + 0.981042755566*(nCleanGenJet==2) + 0.975034731042*(nCleanGenJet>=3)'],
        'VVV' : ['0.983998221581*(nCleanGenJet==0) + 0.982330048447*(nCleanGenJet==1) + 0.997374453674*(nCleanGenJet==2) + 1.00792881546*(nCleanGenJet>=3)', '1.03234158634*(nCleanGenJet==0) + 1.03676778702*(nCleanGenJet==1) + 1.00508560651*(nCleanGenJet==2) + 0.989098428184*(nCleanGenJet>=3)'],
        'ggH_hww' : ['0.99421718067*(nCleanGenJet==0) + 1.00639801454*(nCleanGenJet==1) + 1.01521572804*(nCleanGenJet==2) + 1.00713086944*(nCleanGenJet>=3)', '1.0106214912*(nCleanGenJet==0) + 0.988942605129*(nCleanGenJet==1) + 0.978037671105*(nCleanGenJet==2) + 0.987219030074*(nCleanGenJet>=3)'],
        'qqH_hww' : ['0.988612514892*(nCleanGenJet==0) + 0.99528416976*(nCleanGenJet==1) + 1.00277651098*(nCleanGenJet==2) + 1.00735105321*(nCleanGenJet>=3)', '1.01911293108*(nCleanGenJet==0) + 1.00951449737*(nCleanGenJet==1) + 0.996320764825*(nCleanGenJet==2) + 0.987410047263*(nCleanGenJet>=3)'],
        'ZH_hww' : ['0.98647673709*(nCleanGenJet==0) + 0.989946794651*(nCleanGenJet==1) + 1.0008857858*(nCleanGenJet==2) + 1.0094917705*(nCleanGenJet>=3)', '1.02537402909*(nCleanGenJet==0) + 1.01659419264*(nCleanGenJet==1) + 0.999867485887*(nCleanGenJet==2) + 0.9820290477*(nCleanGenJet>=3)'],
        'ggZH_hww' : ['0.989355129199*(nCleanGenJet==0) + 0.994958491826*(nCleanGenJet==1) + 1.00093886915*(nCleanGenJet==2) + 1.00510971771*(nCleanGenJet>=3)', '1.01926185628*(nCleanGenJet==0) + 1.00983055953*(nCleanGenJet==1) + 0.999398285561*(nCleanGenJet==2) + 0.991139573452*(nCleanGenJet>=3)'],
        'WH_hww' : ['0.983587063226*(nCleanGenJet==0) + 0.991066123201*(nCleanGenJet==1) + 1.00370470037*(nCleanGenJet==2) + 1.01353930294*(nCleanGenJet>=3)', '1.02882875047*(nCleanGenJet==0) + 1.01490909401*(nCleanGenJet==1) + 0.994969449674*(nCleanGenJet==2) + 0.97649938466*(nCleanGenJet>=3)'],
        'ttH_hww' : ['0.951969698067*(nCleanGenJet==0) + 0.971087979904*(nCleanGenJet==1) + 0.97941757105*(nCleanGenJet==2) + 1.00407171448*(nCleanGenJet>=3)', '1.07476046256*(nCleanGenJet==0) + 1.04622644594*(nCleanGenJet==1) + 1.03483003622*(nCleanGenJet==2) + 0.994484820199*(nCleanGenJet>=3)'],
        'ggH_htt' : ['0.995104166339*(nCleanGenJet==0) + 0.997159986465*(nCleanGenJet==1) + 1.00183639687*(nCleanGenJet==2) + 1.00949365088*(nCleanGenJet>=3)', '1.00775578577*(nCleanGenJet==0) + 1.00492514043*(nCleanGenJet==1) + 0.997562295158*(nCleanGenJet==2) + 0.984457908736*(nCleanGenJet>=3)'],
        'qqH_htt' : ['0.989278428544*(nCleanGenJet==0) + 0.993573147796*(nCleanGenJet==1) + 0.997813235374*(nCleanGenJet==2) + 1.0030600786*(nCleanGenJet>=3)', '1.01744731746*(nCleanGenJet==0) + 1.0104049528*(nCleanGenJet==1) + 1.00385638902*(nCleanGenJet==2) + 0.995371449127*(nCleanGenJet>=3)'],
        'ZH_htt' : ['0.9932709083*(nCleanGenJet==0) + 0.993909902023*(nCleanGenJet==1) + 0.997436157734*(nCleanGenJet==2) + 1.00605547728*(nCleanGenJet>=3)', '1.0088781548*(nCleanGenJet==0) + 1.01116873159*(nCleanGenJet==1) + 1.00527699548*(nCleanGenJet==2) + 0.990013981584*(nCleanGenJet>=3)'],
        'WH_htt' : ['0.995170990821*(nCleanGenJet==0) + 0.995361212843*(nCleanGenJet==1) + 0.998325964348*(nCleanGenJet==2) + 1.00699111071*(nCleanGenJet>=3)', '1.00719667391*(nCleanGenJet==0) + 1.00813526091*(nCleanGenJet==1) + 1.00366931115*(nCleanGenJet==2) + 0.988782902658*(nCleanGenJet>=3)'],
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
nuisances['pdf_gg_ACCEPT'] = {
   'name': 'pdf_gg_ACCEPT',
   'samples': {
       'ggWW': '1.006',
   },
   'type': 'lnN',
}

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
#    'AsLnN': '1'
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
topScaleNormFactors0j = {'Alt$(LHEScaleWeight[0],1)' : 1.072860, 'Alt$(LHEScaleWeight[1],1)' : 1.074110, 'Alt$(LHEScaleWeight[5],1)' : 1.002207, 'Alt$(LHEScaleWeight[8],1)' : 0.925373, 'Alt$(LHEScaleWeight[3],1)' : 1.001139, 'Alt$(LHEScaleWeight[7],1)' : 0.925621}
topScaleNormFactors1j = {'Alt$(LHEScaleWeight[0],1)' : 1.084216, 'Alt$(LHEScaleWeight[1],1)' : 1.080157, 'Alt$(LHEScaleWeight[5],1)' : 0.995984, 'Alt$(LHEScaleWeight[8],1)' : 0.913038, 'Alt$(LHEScaleWeight[3],1)' : 1.008039, 'Alt$(LHEScaleWeight[7],1)' : 0.920094}
topScaleNormFactors2j = {'Alt$(LHEScaleWeight[0],1)' : 1.123153, 'Alt$(LHEScaleWeight[1],1)' : 1.104644, 'Alt$(LHEScaleWeight[5],1)' : 0.982576, 'Alt$(LHEScaleWeight[8],1)' : 0.882969, 'Alt$(LHEScaleWeight[3],1)' : 1.022923, 'Alt$(LHEScaleWeight[7],1)' : 0.903047}


topvars0j = []
topvars1j = []
topvars2j = []

topvars0j.append('Alt$(LHEScaleWeight[0],1)/'+str(topScaleNormFactors0j['Alt$(LHEScaleWeight[0],1)']))
topvars0j.append('Alt$(LHEScaleWeight[8],1)/'+str(topScaleNormFactors0j['Alt$(LHEScaleWeight[8],1)']))

topvars1j.append('Alt$(LHEScaleWeight[0],1)/'+str(topScaleNormFactors1j['Alt$(LHEScaleWeight[0],1)']))
topvars1j.append('Alt$(LHEScaleWeight[8],1)/'+str(topScaleNormFactors1j['Alt$(LHEScaleWeight[8],1)']))

topvars2j.append('Alt$(LHEScaleWeight[0],1)/'+str(topScaleNormFactors2j['Alt$(LHEScaleWeight[0],1)']))
topvars2j.append('Alt$(LHEScaleWeight[8],1)/'+str(topScaleNormFactors2j['Alt$(LHEScaleWeight[8],1)']))

nuisances['QCDscale_top_0j']  = {
    'name'  : 'QCDscale_top_0j',
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
    'cutspost' : lambda self, cuts: [cut for cut in cuts if '0j' in cut],
    'samples'  : {
       'top' : topvars0j,
    }
}

nuisances['QCDscale_top_1j']  = {
    'name'  : 'QCDscale_top_1j',
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
    'cutspost' : lambda self, cuts: [cut for cut in cuts if '1j' in cut],
    'samples'  : {
       'top' : topvars1j,
    }
}


nuisances['QCDscale_top_2j']  = {
    'name'  : 'QCDscale_top_2j',
    'skipCMS' : 1,
    'kind'  : 'weight',
    'type'  : 'shape',
    'cutspost' : lambda self, cuts: [cut for cut in cuts if '2j' in cut],
    'samples'  : {
       'top' : topvars2j,
    }
}


# TODO update
# ggww and interference
nuisances['QCDscale_ggVV'] = {
   'name': 'QCDscale_ggVV',
   'type': 'lnN',
   'samples': {
       'ggWW': '1.15',
   },
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


# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_top'] = {
    'name': 'CMS_hww_CRSR_accept_top',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    'cuts': [cut for cut in cuts if 'top' in cut],
}

## rate parameters
nuisances['Topnorm_0j_2017']  = {
               'name'  : 'Topnorm_0j_2017',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'SR_DF_0j',
                   'topCR_DF_0j',
                   ]
              }

nuisances['Topnorm_1j_2017']  = {
               'name'  : 'Topnorm_1j_2017',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'SR_DF_1j',
                   'topCR_DF_1j',
                   ]
              }


nuisances['Topnorm_2j_2017']  = {
               'name'  : 'Topnorm_2j_2017',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'SR_DF_2j',
                   'topCR_DF_2j',
                   ]
              }




nuisances['DYnorm_0j_2017']  = {
               'name'  : 'DYnorm_0j_2017',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'SR_DF_0j',
                   'DYCR_DF_0j',
                   ]
              }

nuisances['DYnorm_1j_2017']  = {
               'name'  : 'DYnorm_1j_2017',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'SR_DF_1j',
                   'DYCR_DF_1j',
                   ]
              }


nuisances['DYnorm_2j_2017']  = {
               'name'  : 'DYnorm_2j_2017',
               'samples'  : {
                   'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                   'SR_DF_2j',
                   'DYCR_DF_2j',
                   ]
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

