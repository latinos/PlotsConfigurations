# nuisances

nuisances = {}

# name of samples here must match keys in samples.py

# imported from samples.py:
# samples, treeBaseDir, mcProduction, mcSteps
# imported from cuts.py
# cuts
import copy

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, Sample):
    return getSampleFiles(inputDir, Sample, False, 'nanoLatino_')

try:
    mc = [skey for skey in samples if skey not in ('FAKE', 'DATA')]
    mc_deep =[skey for skey in samples if skey not in ['DY', 'top', 'Wjets', 'Vg', 'VgS','VZ', 'FAKE', 'DATA', 'VVV', 'ZH_htt', 'WH_htt', 'ggH_htt', 'qqH_htt']]  
    sig_mc = [skey for skey in mc if ("GGH" in skey) or ("QQH" in skey) or (skey in ["ggWW", "ggH_hww", "qqWWqq", "qqH_hww"])] # ggWW is currently reweighted sig sample, while qqWWqq needs to be symlinked to the BWReweight!

except NameError:
    mc = []
    sig_mc = []
    cuts = {}
    nuisances = {}
    def makeMCDirectory(x=''):
        return ''

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()


cutdict = {
    'Ele'   : set(x for x in cuts if 'ElCh' in x),
    'Muon'  : set(x for x in cuts if 'MuCh' in x),
    'Wjets' : set(x for x in cuts if 'SB' in x),
    'resTOP'   : 'incl_ResolvedTopCR_', #set(x for x in cuts if 'ResolvedTopCR' in x),
    'booTOP'   : 'incl_BoostedTopCR_',  #set(x for x in cuts if 'BoostedTopCR' in x),
    'resSR'   : 'incl_ResolvedSR_',     #set(x for x in cuts if 'ResolvedSR' in x),
    'resSB'   : 'incl_ResolvedSB_',     #set(x for x in cuts if 'ResolvedSB' in x),
    'booSR'   : 'incl_BoostedSR_',      #set(x for x in cuts if 'BoostedSR' in x),
    'booSB'   : 'incl_BoostedSB_',      #set(x for x in cuts if 'BoostedSB' in x),
    'resTOP_2J'   : 'incl_ResolvedTopCR_2jets', #set(x for x in cuts if 'ResolvedTopCR' in x),
    'booTOP_2J'   : 'incl_BoostedTopCR_2jets',  #set(x for x in cuts if 'BoostedTopCR' in x),
    'resSR_2J'   : 'incl_ResolvedSR_2jets',     #set(x for x in cuts if 'ResolvedSR' in x),
    'resSB_2J'   : 'incl_ResolvedSB_2jets',     #set(x for x in cuts if 'ResolvedSB' in x),
    'booSR_2J'   : 'incl_BoostedSR_2jets',      #set(x for x in cuts if 'BoostedSR' in x),
    'booSB_2J'   : 'incl_BoostedSB_2jets',      #set(x for x in cuts if 'BoostedSB' in x),
    'resTOP_01J'   : 'incl_ResolvedTopCR_0jets', #set(x for x in cuts if 'ResolvedTopCR' in x),
    'booTOP_01J'   : 'incl_BoostedTopCR_0jets',  #set(x for x in cuts if 'BoostedTopCR' in x),
    'resSR_01J'   : 'incl_ResolvedSR_0jets',     #set(x for x in cuts if 'ResolvedSR' in x),
    'resSB_01J'   : 'incl_ResolvedSB_0jets',     #set(x for x in cuts if 'ResolvedSB' in x),
    'booSR_01J'   : 'incl_BoostedSR_0jets',      #set(x for x in cuts if 'BoostedSR' in x),
    'booSB_01J'   : 'incl_BoostedSB_0jets',      #set(x for x in cuts if 'BoostedSB' in x),
    'booSR_up'   : 'incl_BoostedSR_up',      #set(x for x in cuts if 'BoostedSR' in x),
    'booCR'   : 'incl_BoostedCR_',      #set(x for x in cuts if 'BoostedSB' in x),
    'booCR_1'   : 'incl_BoostedCR_notau',      #set(x for x in cuts if 'BoostedSB' in x),
    'booCR_2'   : 'incl_BoostedSB_notau',      #set(x for x in cuts if 'BoostedSB' in x),
}


################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc if skey not in ['Wjets', 'top'])
}
nuisances['lumi_XY'] = {
    'name': 'lumi_13TeV_XY',
    'type': 'lnN',
    'samples': dict((skey, '1.008') for skey in mc if skey not in ['Wjets', 'top'])
}
nuisances['lumi_LS'] = {
    'name': 'lumi_13TeV_LS',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['Wjets', 'top'])
}
nuisances['lumi_BBD'] = {
    'name': 'lumi_13TeV_BBD',
    'type': 'lnN',
    'samples': dict((skey, '1.004') for skey in mc if skey not in ['Wjets', 'top'])
}
nuisances['lumi_DB'] = {
    'name': 'lumi_13TeV_DB',
    'type': 'lnN',
    'samples': dict((skey, '1.005') for skey in mc if skey not in ['Wjets', 'top'])
}
nuisances['lumi_BCC'] = {
    'name': 'lumi_13TeV_BCC',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['Wjets', 'top'])
}
nuisances['lumi_GS'] = {
    'name': 'lumi_13TeV_GS',
    'type': 'lnN',
    'samples': dict((skey, '1.001') for skey in mc if skey not in ['Wjets', 'top'])
}




######## btag
for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    name = 'CMS_btag_%s' % shift
    if 'stats' in shift:
        name += '_2017'

    nuisances['btag_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
    }



#### WtagSF
useDeepAK8 = True

if useDeepAK8 is False:
    nuisances['wtag'] = {
        'name': 'CMS_wtag_eff',
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, ['SFWtagUp', 'SFWtagDown']) for skey in mc),
        'cuts'  : [
                cutdict['resTOP'],
                cutdict['booTOP'],
                cutdict['resSB'],
                cutdict['resSR'],
                cutdict['booSB'],
                cutdict['booSR'],
               ]
 #'cuts': set.union(cutdict['Resolv'], cutdict['Boost'])
    }
else:
    nuisances['wtag'] = {
        'name': 'CMS_wtag_eff',
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, ['DeepAK8_SF_up/DeepAK8_SF', 'DeepAK8_SF_down/DeepAK8_SF']) for skey in mc_deep),
        'cuts'  : [
                cutdict['resTOP'],
                cutdict['booTOP'],
                cutdict['resSB'],
                cutdict['resSR'],
                cutdict['booSB'],
                cutdict['booSR'],
                cutdict['resTOP_2J'],
                cutdict['booTOP_2J'],
                cutdict['resSB_2J'],
                cutdict['resSR_2J'],
                cutdict['booSB_2J'],
                cutdict['booSR_2J'],
                cutdict['resTOP_01J'],
                cutdict['booTOP_01J'],
                cutdict['resSB_01J'],
                cutdict['resSR_01J'],
                cutdict['booSB_01J'],
                cutdict['booSR_01J'],
                cutdict['booCR'],
                cutdict['booCR_1'],
                cutdict['booCR_2'],
               ]
       # 'cuts': set.union(cutdict['Resolv'], cutdict['Boost'])
    }

nuisances['wtag_top'] = {
    'name': 'CMS_wtag_eff_top',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples': {
        'top': ['DeepAK8_SF_top_up/DeepAK8_SF_top', 'DeepAK8_SF_top_down/DeepAK8_SF_top'],
    },
    'cuts' : [
            cutdict['resTOP'],
            cutdict['booTOP'],
            cutdict['resSB'],
            cutdict['resSR'],
            cutdict['booSB'],
            cutdict['booSR'],
            cutdict['resTOP_2J'],
            cutdict['booTOP_2J'],
            cutdict['resSB_2J'],
            cutdict['resSR_2J'],
            cutdict['booSB_2J'],
            cutdict['booSR_2J'],
            cutdict['resTOP_01J'],
            cutdict['booTOP_01J'],
            cutdict['resSB_01J'],
            cutdict['resSR_01J'],
            cutdict['booSB_01J'],
            cutdict['booSR_01J'],
            cutdict['booCR'],
            cutdict['booCR_1'],
            cutdict['booCR_2'],
               ]
}

#nuisances['wtag_HM'] = {
#    'name':  'CMS_wtag_eff_HM',
#    'type': 'lnN',
#    'samples': dict((skey, '1.1') for skey in mc),
#    'cuts': cutdict['HM']
#}


##### Trigger Efficiency

#trig_syst = ['((TriggerEffWeight_1l_u)/(TriggerEffWeight_1l))*(TriggerEffWeight_1l>0.02) + (TriggerEffWeight_1l<=0.02)', '(TriggerEffWeight_1l_d)/(TriggerEffWeight_1l)*(TriggerEffWeight_1l>0.02) + (TriggerEffWeight_1l<=0.02)']

trig_syst = ['((TriggerEffWeight_1l_fixed_u)/(TriggerEffWeight_1l_fixed))*(TriggerEffWeight_1l_fixed>0.02) + (TriggerEffWeight_1l_fixed<=0.02)', '(TriggerEffWeight_1l_fixed_d)/(TriggerEffWeight_1l_fixed)*(TriggerEffWeight_1l_fixed>0.02) + (TriggerEffWeight_1l_fixed<=0.02)']
nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc)
}

prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']

nuisances['prefire'] = {
    'name': 'CMS_eff_prefiring_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, prefire_syst) for skey in mc),
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc)
}

nuisances['electronpt'] = {
    'name' : 'CMS_scale_e_2017',
    'kind' : 'suffix',
    'type' : 'shape',
    'mapUp'  : 'ElepTup',
    'mapDown': 'ElepTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc if skey not in sig_mc ),
    'folderUp'  : makeMCDirectory('ElepTup'),
    'folderDown': makeMCDirectory('ElepTdo'),
    'AsLnN': '1'
}
#nuisances['electronpt_BWReweight'] = {
#    'name' : 'CMS_scale_e_2017',
#    'kind' : 'suffix',
#    'type' : 'shape',
#    'mapUp'  : 'ElepTup',
#    'mapDown': 'ElepTdo',
#    'samples': dict((skey, ['1', '1']) for skey in sig_mc),
#    'folderUp'  : makeMCDirectory('_BWReweight_ElepTup'),
#    'folderDown': makeMCDirectory('_BWReweight_ElepTdo'),
#    'AsLnN': '1'
#}

##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc)
}

nuisances['muonpt'] = {
    'name' : 'CMS_scale_m_2017',
    'kind' : 'suffix',
    'type' : 'shape',
    'mapUp'  : 'MupTup',
    'mapDown': 'MupTdo',
    'samples': dict((skey, ['1', '1']) for skey in mc if skey not in sig_mc),
    'folderUp'  : makeMCDirectory('MupTup'),
    'folderDown': makeMCDirectory('MupTdo'),
    'AsLnN': '1'
}
#nuisances['muonpt_BWReweight'] = {
#    'name' : 'CMS_scale_m_2017',
#    'kind' : 'suffix',
#    'type' : 'shape',
#    'mapUp'  : 'MupTup',
#    'mapDown': 'MupTdo',
#    'samples': dict((skey, ['1', '1']) for skey in sig_mc),
#    'folderUp'  : makeMCDirectory('_BWReweight_MupTup'),
#    'folderDown': makeMCDirectory('_BWReweight_MupTdo'),
#    'AsLnN': '1'
#}


##### Jet energy scale
#jes_systs = ['JESAbsolute','JESAbsolute_2017','JESBBEC1','JESBBEC1_2017','JESEC2','JESEC2_2017','JESFlavorQCD','JESHF','JESHF_2017','JESRelativeBal','JESRelativeSample_2017']

#for js in jes_systs:
#    nuisances[js] = {
#      'name' : 'CMS_scale_'+js,
#      'kind' : 'suffix',
#      'type' : 'shape',
#      'mapUp'  : js+'up',
#      'mapDown': js+'do',
#      'samples': dict((skey, ['1', '1']) for skey in mc if skey not in sig_mc),
#      'folderUp'  : makeMCDirectory('JESup'),
#      'folderDown': makeMCDirectory('JESdo'),
#      'AsLnN': '1'
#  }
#  nuisances[js+'_BWReweight'] = {
#      'name' : 'CMS_scale_'+js,
#      'kind' : 'suffix',
#      'type' : 'shape',
#      'mapUp'  : js+'up',
#      'mapDown': js+'do',
#      'samples': dict((skey, ['1', '1']) for skey in sig_mc),
#      'folderUp'  : makeMCDirectory('_BWReweight_JESup'),
#      'folderDown': makeMCDirectory('_BWReweight_JESdo'),
#      'AsLnN': '1'
#  }

# ##### FatJet scale and resolution

#nuisances['fatjet_jes']  = {
#    'name'  : 'CMS_scale_fatj_2017',
#    'kind'  : 'suffix',
#    'type'  : 'shape',
#    'mapUp'  : 'fatjetJESup',
#    'mapDown': 'fatjetJESdo',
#    'samples': dict((skey, ['1', '1']) for skey in mc if skey not in sig_mc),
#    'folderUp'  : makeMCDirectory('fatjetJESup'),
#    'folderDown': makeMCDirectory('fatjetJESdo'),
#    'AsLnN': '1'
#}
#nuisances['fatjet_jer']  = {
#    'name'  : 'CMS_res_fatjer_2017',
#    'kind'  : 'suffix',
#    'type'  : 'shape',
#    'mapUp'  : 'fatjetJERup',
#    'mapDown': 'fatjetJERdo',
#    'samples': dict((skey, ['1', '1']) for skey in mc if skey not in sig_mc),
#    'folderUp'  : makeMCDirectory('fatjetJERup'),
#    'folderDown': makeMCDirectory('fatjetJERdo'),
#    'AsLnN': '1'
#}
#nuisances['fatjet_jms']  = {
#    'name'  : 'CMS_fatjms_2017',
#    'kind'  : 'suffix',
#    'type'  : 'shape',
#    'mapUp'  : 'fatjetJMSup',
#    'mapDown': 'fatjetJMSdo',
#    'samples': dict((skey, ['1', '1']) for skey in mc if skey not in sig_mc),
#    'folderUp'  : makeMCDirectory('fatjetJMSup'),
#    'folderDown': makeMCDirectory('fatjetJMSdo'),
#    'AsLnN': '1'
#}
#nuisances['fatjet_jmr']  = {
#    'name'  : 'CMS_res_fatjmr_2017',
#    'kind'  : 'suffix',
#    'type'  : 'shape',
#    'mapUp'  : 'fatjetJMRup',
#    'mapDown': 'fatjetJMRdo',
#    'samples': dict((skey, ['1', '1']) for skey in mc if skey not in sig_mc),
#    'folderUp'  : makeMCDirectory('fatjetJMRup'),
#    'folderDown': makeMCDirectory('fatjetJMRdo'),
#    'AsLnN': '1'
#}

#nuisances['fatjet_jes_BWReweight']  = {
#    'name'  : 'CMS_scale_fatj_2017',
#    'kind'  : 'suffix',
#    'type'  : 'shape',
#    'mapUp'  : 'fatjetJESup',
#    'mapDown': 'fatjetJESdo',
#    'samples': dict((skey, ['1', '1']) for skey in sig_mc),
#    'folderUp'  : makeMCDirectory('_BWReweight_fatjetJESup'),
#    'folderDown': makeMCDirectory('_BWReweight_fatjetJESdo'),
#    'AsLnN': '1'
#}
#nuisances['fatjet_jer_BWReweight']  = {
#    'name'  : 'CMS_res_fatjer_2017',
#    'kind'  : 'suffix',
#    'type'  : 'shape',
#    'mapUp'  : 'fatjetJERup',
#    'mapDown': 'fatjetJERdo',
#    'samples': dict((skey, ['1', '1']) for skey in sig_mc),
#    'folderUp'  : makeMCDirectory('_BWReweight_fatjetJERup'),
#    'folderDown': makeMCDirectory('_BWReweight_fatjetJERdo'),
#    'AsLnN': '1'
#}
#nuisances['fatjet_jms_BWReweight']  = {
#    'name'  : 'CMS_fatjms_2017',
#    'kind'  : 'suffix',
#    'type'  : 'shape',
#    'mapUp'  : 'fatjetJMSup',
#    'mapDown': 'fatjetJMSdo',
#    'samples': dict((skey, ['1', '1']) for skey in sig_mc),
#    'folderUp'  : makeMCDirectory('_BWReweight_fatjetJMSup'),
#    'folderDown': makeMCDirectory('_BWReweight_fatjetJMSdo'),
#    'AsLnN': '1'
#}
#nuisances['fatjet_jmr_BWReweight']  = {
#    'name'  : 'CMS_res_fatjmr_2017',
#    'kind'  : 'suffix',
#    'type'  : 'shape',
#    'mapUp'  : 'fatjetJMRup',
#    'mapDown': 'fatjetJMRdo',
#    'samples': dict((skey, ['1', '1']) for skey in sig_mc),
#    'folderUp'  : makeMCDirectory('_BWReweight_fatjetJMRup'),
#    'folderDown': makeMCDirectory('_BWReweight_fatjetJMRdo'),
#    'AsLnN': '1'
#}


##### MET energy scale

nuisances['met'] = {
    'name' : 'CMS_scale_met_2017',
    'kind' : 'suffix',
    'type' : 'shape',
    'mapUp'  : 'METup',
    'mapDown': 'METdo',
    'samples': dict((skey, ['1', '1']) for skey in mc if skey not in sig_mc),
    'folderUp' : makeMCDirectory('METup'),
    'folderDown': makeMCDirectory('METdo'),
    'AsLnN': '1'
}
#nuisances['met_BWReweight'] = {
#    'name' : 'CMS_scale_met_2017',
#    'kind' : 'suffix',
#    'type' : 'shape',
#    'mapUp'  : 'METup',
#    'mapDown': 'METdo',
#    'samples': dict((skey, ['1', '1']) for skey in sig_mc),
#    'folderUp' : makeMCDirectory('_BWReweight_METup'),
#    'folderDown': makeMCDirectory('_BWReweight_METdo'),
#    'AsLnN': '1'
#}

##### Pileup

nuisances['PU'] = {
    'name': 'CMS_PU_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Wjets': ['0.999633420476*(puWeightUp/puWeight)', '1.0004806047*(puWeightDown/puWeight)'],
        'DY': ['0.993259983266*(puWeightUp/puWeight)', '0.997656381501*(puWeightDown/puWeight)'],
        'top': ['1.00331969187*(puWeightUp/puWeight)', '0.999199609528*(puWeightDown/puWeight)'],
        'WW': ['1.0033022059*(puWeightUp/puWeight)', '0.997085330608*(puWeightDown/puWeight)'],
        'ggH_hww': ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)'],
        'qqH_hww': ['1.00374694528*(puWeightUp/puWeight)', '0.995878596852*(puWeightDown/puWeight)'],
    },
    'AsLnN': '1',
}
#handle = open("../../HighMass/PUunc_Semi.py",'r')
handle = open("../../../../PlotsConfigurations/Configurations/HighMass/PUunc_Semi.py",'r')
exec(handle)
handle.close()

for m in massggh:
  PUup = PUunc['GGF'+m]['Up']
  PUdn = PUunc['GGF'+m]['Down']
  PUstring = [str(PUup)+'*(puWeightUp/puWeight)', str(PUdn)+'*(puWeightDown/puWeight)']
  nuisances['PU']['samples'].update({'GGH_'+m+model_name: PUstring})
  nuisances['PU']['samples'].update({'GGHINT_'+m+model_name: PUstring})
for m in massvbf:
  PUup = PUunc['VBF'+m]['Up']
  PUdn = PUunc['VBF'+m]['Down']
  PUstring = [str(PUup)+'*(puWeightUp/puWeight)', str(PUdn)+'*(puWeightDown/puWeight)']
  nuisances['PU']['samples'].update({'QQH_'+m+model_name: PUstring})
  nuisances['PU']['samples'].update({'QQHINT_'+m+model_name: PUstring})




#
##### PS and UE
# high mass PS from dileptonic
#handle = open("../../HighMass/PSunc_Semi.py",'r')
handle = open("../../../../PlotsConfigurations/Configurations/HighMass/PSunc_Semi.py",'r')
exec(handle)
handle.close()

nuisances['PS_ISR']  = {
    'name': 'PS_ISR',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Wjets': ['0.997054474752*(nCleanGenJet==0) + 1.01491223907*(nCleanGenJet==1) + 1.00675986689*(nCleanGenJet==2) + 0.973889730523*(nCleanGenJet>=3)', '1.00439657406*(nCleanGenJet==0) + 0.98111895136*(nCleanGenJet==1) + 0.99317366464*(nCleanGenJet==2) + 1.03376665043*(nCleanGenJet>=3)'],
        'Vg'     : ['1.00227428567253*(nCleanGenJet==0) + 1.00572014989997*(nCleanGenJet==1) + 0.970824885256465*(nCleanGenJet==2) + 0.927346068071086*(nCleanGenJet>=3)', '0.996488506572636*(nCleanGenJet==0) + 0.993582795375765*(nCleanGenJet==1) + 1.03643678934568*(nCleanGenJet==2) + 1.09735277266955*(nCleanGenJet>=3)'],
        'VgS'    : ['1.0000536116408023*(nCleanGenJet==0) + 1.0100100693580492*(nCleanGenJet==1) + 0.959068359375*(nCleanGenJet==2) + 0.9117049260469496*(nCleanGenJet>=3)', '0.9999367833485968*(nCleanGenJet==0) + 0.9873682892005163*(nCleanGenJet==1) + 1.0492717737268518*(nCleanGenJet==2) + 1.1176958835210322*(nCleanGenJet>=3)'],
        'ggWW'   : ['1.040233912070831*(nCleanGenJet==0) + 0.9611236379290876*(nCleanGenJet==1) + 0.9014289294088699*(nCleanGenJet==2) + 0.864310738090035*(nCleanGenJet>=3)', '0.9510305474211223*(nCleanGenJet==0) + 1.0433432942960381*(nCleanGenJet==1) + 1.1271383507266095*(nCleanGenJet==2) + 1.1885756983901514*(nCleanGenJet>=3)'],
        'WW'     : ['1.0005237869294796*(nCleanGenJet==0) + 1.0157425373134328*(nCleanGenJet==1) + 0.9644598124510606*(nCleanGenJet==2) + 0.9271488926223369*(nCleanGenJet>=3)', '0.9993553300024391*(nCleanGenJet==0) + 0.9806102300995024*(nCleanGenJet==1) + 1.042603303739856*(nCleanGenJet==2) + 1.0950369125887705*(nCleanGenJet>=3)'],
        'WWewk'   : ['1.000046239608802*(nCleanGenJet==0) + 1.0133437345113673*(nCleanGenJet==1) + 1.0144565712441801*(nCleanGenJet==2) + 0.9633224709814209*(nCleanGenJet>=3)', '0.9972924400977996*(nCleanGenJet==0) + 0.9796025428294364*(nCleanGenJet==1) + 0.9785038122896787*(nCleanGenJet==2) + 1.043894692205412*(nCleanGenJet>=3)'], # From WpWmJJ_EWK_noTop
        'qqWWqq'   : ['1.031198192*(nCleanGenJet==0) + 1.029396447*(nCleanGenJet==1) + 1.008244787*(nCleanGenJet==2) + 0.958054424*(nCleanGenJet>=3)', '0.962541517*(nCleanGenJet==0) + 0.964149647*(nCleanGenJet==1) + 0.988864503*(nCleanGenJet==2) + 1.052819668*(nCleanGenJet>=3)'], # From WpWmJJ_QCD_noTop_ext1
        'WW2J'   : ['1.031198192*(nCleanGenJet==0) + 1.029396447*(nCleanGenJet==1) + 1.008244787*(nCleanGenJet==2) + 0.958054424*(nCleanGenJet>=3)', '0.962541517*(nCleanGenJet==0) + 0.964149647*(nCleanGenJet==1) + 0.988864503*(nCleanGenJet==2) + 1.052819668*(nCleanGenJet>=3)'], # From WpWmJJ_QCD_noTop_ext1
        'top'    : ['1.0020618369910668*(nCleanGenJet==0) + 1.0063081530771556*(nCleanGenJet==1) + 1.0094298425968304*(nCleanGenJet==2) + 0.9854207999040726*(nCleanGenJet>=3)', '0.9974340279269026*(nCleanGenJet==0) + 0.9920634820709106*(nCleanGenJet==1) + 0.988226385054923*(nCleanGenJet==2) + 1.017968568319235*(nCleanGenJet>=3)'],
        'DY'     : ['0.9998177685645392*(nCleanGenJet==0) + 1.0080838149428026*(nCleanGenJet==1) + 1.0057948912950987*(nCleanGenJet==2) + 0.9721358221196619*(nCleanGenJet>=3)', '1.0003244155266309*(nCleanGenJet==0) + 0.9897992135367016*(nCleanGenJet==1) + 0.9928782069009531*(nCleanGenJet==2) + 1.0348902921423981*(nCleanGenJet>=3)'],
        'VVV'    : ['1.0270826786253018*(nCleanGenJet==0) + 1.0198703447307862*(nCleanGenJet==1) + 1.0109191915514344*(nCleanGenJet==2) + 0.9838184220287978*(nCleanGenJet>=3)', '0.9661665482954546*(nCleanGenJet==0) + 0.9751744967838527*(nCleanGenJet==1) + 0.9859624782745712*(nCleanGenJet==2) + 1.0202995039288625*(nCleanGenJet>=3)'],
        'VZ'    : ['1.0005649495173758*(nCleanGenJet==0) + 1.0126108996187784*(nCleanGenJet==1) + 0.9655814439488959*(nCleanGenJet==2) + 0.9231853653899337*(nCleanGenJet>=3)', '0.9992093891493296*(nCleanGenJet==0) + 0.9843983411237471*(nCleanGenJet==1) + 1.0409271492937164*(nCleanGenJet==2) + 1.1001990664321764*(nCleanGenJet>=3)'], # From ZZTo2L2Nu_ext1
        'ggH_hww': ['1.0007510488273352*(nCleanGenJet==0) + 1.0152476349471342*(nCleanGenJet==1) + 0.9645590929269297*(nCleanGenJet==2) + 0.9189171704206691*(nCleanGenJet>=3)', '0.9989909143752528*(nCleanGenJet==0) + 0.9814978813068076*(nCleanGenJet==1) + 1.0416554335980368*(nCleanGenJet==2) + 1.1060543963750413*(nCleanGenJet>=3)'],
        'qqH_hww': ['1.0008858084852863*(nCleanGenJet==0) + 1.001293920824975*(nCleanGenJet==1) + 1.0013304143711548*(nCleanGenJet==2) + 0.9875473532521144*(nCleanGenJet>=3)', '0.9987483211480337*(nCleanGenJet==0) + 0.9982952329209852*(nCleanGenJet==1) + 0.9983076740658964*(nCleanGenJet==2) + 1.016023412328836*(nCleanGenJet>=3)'],
        'WH_hww' : ['1.0006979353025824*(nCleanGenJet==0) + 1.0014529360558138*(nCleanGenJet==1) + 1.0007920644457673*(nCleanGenJet==2) + 0.996814275350521*(nCleanGenJet>=3)', '0.9990367459746422*(nCleanGenJet==0) + 0.9980712824836634*(nCleanGenJet==1) + 0.9989875513096169*(nCleanGenJet==2) + 1.0039628146069568*(nCleanGenJet>=3)'],
        'ZH_hww' : ['1.0008198940532742*(nCleanGenJet==0) + 1.001574300159756*(nCleanGenJet==1) + 1.0014892423703352*(nCleanGenJet==2) + 0.9982835923429388*(nCleanGenJet>=3)', '0.9991322211949244*(nCleanGenJet==0) + 0.9979828392772856*(nCleanGenJet==1) + 0.9980190791034156*(nCleanGenJet==2) + 1.0021025907582017*(nCleanGenJet>=3)'],
        'ggH_htt' : ['1.0009206232135992*(nCleanGenJet==0) + 1.0169049400184142*(nCleanGenJet==1) + 0.9651882268657965*(nCleanGenJet==2) + 0.9207705642435241*(nCleanGenJet>=3)', '0.9987561139828172*(nCleanGenJet==0) + 0.9794201864664572*(nCleanGenJet==1) + 1.0412120487156962*(nCleanGenJet==2) + 1.1029538166275263*(nCleanGenJet>=3)'], # From GluGluHToTauTau_M125
        'qqH_htt' : ['1.0015936666002356*(nCleanGenJet==0) + 1.0009069467125817*(nCleanGenJet==1) + 1.0013415884915544*(nCleanGenJet==2) + 0.9899575000578329*(nCleanGenJet>=3)', '0.9977688532207473*(nCleanGenJet==0) + 0.9987106379579664*(nCleanGenJet==1) + 0.9982730482948471*(nCleanGenJet==2) + 1.0129212222112982*(nCleanGenJet>=3)'], # From VBFHToTauTau_M125
        'ZH_htt' : ['1.0011046590284958*(nCleanGenJet==0) + 1.0009827081230018*(nCleanGenJet==1) + 1.0014051098703878*(nCleanGenJet==2) + 0.9922466090234346*(nCleanGenJet>=3)', '0.9985385006421232*(nCleanGenJet==0) + 0.9987921714622244*(nCleanGenJet==1) + 0.9980838293358115*(nCleanGenJet==2) + 1.009751444450435*(nCleanGenJet>=3)'], # From HZJ_HToTauTau_M125
        'WH_htt' : ['1.000668369771863*(nCleanGenJet==0) + 1.0016815623453736*(nCleanGenJet==1) + 1.0013707389683542*(nCleanGenJet==2) + 0.9915138785231363*(nCleanGenJet>=3)', '0.9991668459690679*(nCleanGenJet==0) + 0.9978760956386513*(nCleanGenJet==1) + 0.9981171739879867*(nCleanGenJet==2) + 1.0105488300114145*(nCleanGenJet>=3)'], # From HWplusJ_HToTauTau_M125
    },
}
for m in massggh:
  PSup = PSunc['GGF'+m]['ISRup']
  PSdn = PSunc['GGF'+m]['ISRdn']
  PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
  nuisances['PS_ISR']['samples'].update({'GGH_'+m+model_name: PSstring})
  nuisances['PS_ISR']['samples'].update({'GGHINT_'+m+model_name: PSstring}) # Here and in the following: Don't put nuisances here for SBI; they're added automatically in a later step!
for m in massvbf:
  PSup = PSunc['VBF'+m]['ISRup']
  PSdn = PSunc['VBF'+m]['ISRdn']
  PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
  nuisances['PS_ISR']['samples'].update({'QQH_'+m+model_name: PSstring})
  nuisances['PS_ISR']['samples'].update({'QQHINT_'+m+model_name: PSstring})



nuisances['PS_FSR']  = {
    'name': 'PS_FSR',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Wjets': ['0.951581197919*(nCleanGenJet==0) + 0.997755474747*(nCleanGenJet==1) + 1.02983517401*(nCleanGenJet==2) + 1.01143623738*(nCleanGenJet>=3)', '1.08454892632*(nCleanGenJet==0) + 1.0003688082*(nCleanGenJet==1) + 0.980741215888*(nCleanGenJet==2) + 0.97189538569*(nCleanGenJet>=3)'],
        'Vg'     : ['0.999935529935028*(nCleanGenJet==0) + 0.997948255568351*(nCleanGenJet==1) + 1.00561645493085*(nCleanGenJet==2) + 1.0212896960035*(nCleanGenJet>=3)', '1.00757702771109*(nCleanGenJet==0) + 1.00256681166083*(nCleanGenJet==1) + 0.93676371569867*(nCleanGenJet==2) + 0.956448336052435*(nCleanGenJet>=3)'],
        'VgS'    : ['0.9976593177227735*(nCleanGenJet==0) + 1.0016125187585532*(nCleanGenJet==1) + 1.0049344618055556*(nCleanGenJet==2) + 1.0195631514301164*(nCleanGenJet>=3)', '1.0026951855766457*(nCleanGenJet==0) + 1.0008132148661049*(nCleanGenJet==1) + 1.003949291087963*(nCleanGenJet==2) + 0.9708160910230832*(nCleanGenJet>=3)'],
        'ggWW'   : ['0.9910563426395067*(nCleanGenJet==0) + 1.0069894351287263*(nCleanGenJet==1) + 1.016616376034912*(nCleanGenJet==2) + 1.015902717074592*(nCleanGenJet>=3)', '1.0147395976461193*(nCleanGenJet==0) + 0.9860219489006646*(nCleanGenJet==1) + 0.9694680606617647*(nCleanGenJet==2) + 0.9489845115821678*(nCleanGenJet>=3)'],
        'WW'     : ['0.995462478372054*(nCleanGenJet==0) + 1.0052129975124378*(nCleanGenJet==1) + 1.008836750560578*(nCleanGenJet==2) + 0.9984120564941189*(nCleanGenJet>=3)', '1.008927720738437*(nCleanGenJet==0) + 0.995163868159204*(nCleanGenJet==1) + 0.9911024228315418*(nCleanGenJet==2) + 0.9763787172658678*(nCleanGenJet>=3)'],
        'WWewk'   : ['0.9919173789731052*(nCleanGenJet==0) + 0.994273375713824*(nCleanGenJet==1) + 1.0009783801226202*(nCleanGenJet==2) + 1.0046943184676753*(nCleanGenJet>=3)', '1.0081780733496333*(nCleanGenJet==0) + 1.0052172826204072*(nCleanGenJet==1) + 0.9984786981975752*(nCleanGenJet==2) + 0.9881601609947174*(nCleanGenJet>=3)'],
        'qqWWqq'   : ['0.976538004*(nCleanGenJet==0) + 0.993524816*(nCleanGenJet==1) + 1.006678783*(nCleanGenJet==2) + 1.009760965*(nCleanGenJet>=3)', '1.035661107*(nCleanGenJet==0) + 1.007585153*(nCleanGenJet==1) + 0.989764669*(nCleanGenJet==2) + 0.98276492*(nCleanGenJet>=3)'],
        'WW2J'   : ['0.976538004*(nCleanGenJet==0) + 0.993524816*(nCleanGenJet==1) + 1.006678783*(nCleanGenJet==2) + 1.009760965*(nCleanGenJet>=3)', '1.035661107*(nCleanGenJet==0) + 1.007585153*(nCleanGenJet==1) + 0.989764669*(nCleanGenJet==2) + 0.98276492*(nCleanGenJet>=3)'],
        'top'    : ['0.9910899786333963*(nCleanGenJet==0) + 0.9990635702054794*(nCleanGenJet==1) + 1.002141744200183*(nCleanGenJet==2) + 1.0129742776372779*(nCleanGenJet>=3)', '1.0068843378231833*(nCleanGenJet==0) + 0.998988498438759*(nCleanGenJet==1) + 0.9952696584115224*(nCleanGenJet==2) + 0.9790955840673237*(nCleanGenJet>=3)'],
        'DY'     : ['0.9958763409773141*(nCleanGenJet==0) + 1.0041335498093422*(nCleanGenJet==1) + 1.0163363150953029*(nCleanGenJet==2) + 1.0296733670670226*(nCleanGenJet>=3)', '1.0066775262249232*(nCleanGenJet==0) + 0.9945601465681602*(nCleanGenJet==1) + 0.9662459619335311*(nCleanGenJet==2) + 0.9479423453563661*(nCleanGenJet>=3)'],
        'VVV'    : ['0.9809047855490748*(nCleanGenJet==0) + 0.9823641498350338*(nCleanGenJet==1) + 0.9976414629808243*(nCleanGenJet==2) + 1.0077953569413387*(nCleanGenJet>=3)', '1.035388723727876*(nCleanGenJet==0) + 1.0347339790465233*(nCleanGenJet==1) + 1.0017058788771533*(nCleanGenJet==2) + 0.9829344116371653*(nCleanGenJet>=3)'],
        'VZ'    : ['0.9969613063607379*(nCleanGenJet==0) + 1.0055822932729375*(nCleanGenJet==1) + 1.0115617769727228*(nCleanGenJet==2) + 1.003930218451846*(nCleanGenJet>=3)', '1.0044825167062181*(nCleanGenJet==0) + 0.9934087678296067*(nCleanGenJet==1) + 0.9816200440919792*(nCleanGenJet==2) + 0.9733590995315957*(nCleanGenJet>=3)'],
        'ggH_hww': ['0.9936588910230489*(nCleanGenJet==0) + 1.0087564198432573*(nCleanGenJet==1) + 1.014636529653396*(nCleanGenJet==2) + 1.00399261707105*(nCleanGenJet>=3)','1.0125063182369591*(nCleanGenJet==0) + 0.9846168672324244*(nCleanGenJet==1) + 0.9778204449152542*(nCleanGenJet==2) + 1.0014057292097962*(nCleanGenJet>=3)'],
        'qqH_hww': ['0.9902864012471768*(nCleanGenJet==0) + 0.9950165165635796*(nCleanGenJet==1) + 1.0024778632714528*(nCleanGenJet==2) + 1.0132965690130387*(nCleanGenJet>=3)', '1.0171041801597582*(nCleanGenJet==0) + 1.0088822239287307*(nCleanGenJet==1) + 0.9946938338710369*(nCleanGenJet==2) + 0.9782409053438381*(nCleanGenJet>=3)'],
        'WH_hww' : ['0.9864466858859676*(nCleanGenJet==0) + 0.9911412676207558*(nCleanGenJet==1) + 1.0047988929561447*(nCleanGenJet==2) + 1.0135375714689319*(nCleanGenJet>=3)', '1.022768308571873*(nCleanGenJet==0) + 1.0147067259919833*(nCleanGenJet==1) + 0.9932121652658327*(nCleanGenJet==2) + 0.9807301742549035*(nCleanGenJet>=3)'],
        'ZH_hww' : ['0.98702584755388*(nCleanGenJet==0) + 0.9881328970299905*(nCleanGenJet==1) + 1.0046199525397077*(nCleanGenJet==2) + 1.0091561054313662*(nCleanGenJet>=3)', '1.0236225630459734*(nCleanGenJet==0) + 1.0213677207764504*(nCleanGenJet==1) + 0.9933149152918336*(nCleanGenJet==2) + 0.978832627595614*(nCleanGenJet>=3)'],
        'ggH_htt' : ['0.9943019952320858*(nCleanGenJet==0) + 1.0083325858201546*(nCleanGenJet==1) + 1.0201886103441544*(nCleanGenJet==2) + 0.9998286915341232*(nCleanGenJet>=3)', '1.0109237494149799*(nCleanGenJet==0) + 0.9873094123474508*(nCleanGenJet==1) + 0.9675289700468541*(nCleanGenJet==2) + 0.99986531610269*(nCleanGenJet>=3)'],
        'qqH_htt' : ['0.9902403321260225*(nCleanGenJet==0) + 0.996767386750923*(nCleanGenJet==1) + 1.0040574219585203*(nCleanGenJet==2) + 1.0124888310238733*(nCleanGenJet>=3)', '1.0139721006126092*(nCleanGenJet==0) + 1.002858740414655*(nCleanGenJet==1) + 0.9961014338785547*(nCleanGenJet==2) + 0.978061636844175*(nCleanGenJet>=3)'],
        'ZH_htt' : ['0.9936708956610235*(nCleanGenJet==0) + 0.9954883239735823*(nCleanGenJet==1) + 1.0074327384991346*(nCleanGenJet==2) + 1.0068065233897634*(nCleanGenJet>=3)', '1.0106252599791612*(nCleanGenJet==0) + 1.0109967871866061*(nCleanGenJet==1) + 0.9941765805699787*(nCleanGenJet==2) + 0.9967875439175832*(nCleanGenJet>=3)'],
        'WH_htt' : ['0.9951849276795807*(nCleanGenJet==0) + 0.9971109709655758*(nCleanGenJet==1) + 1.0089023169085682*(nCleanGenJet==2) + 1.0177364980737993*(nCleanGenJet>=3)', '1.0080916898956942*(nCleanGenJet==0) + 1.003439195368276*(nCleanGenJet==1) + 0.9870860759068387*(nCleanGenJet==2) + 0.9778888209017473*(nCleanGenJet>=3)'],
    },
}
for m in massggh:
  PSup = PSunc['GGF'+m]['FSRup']
  PSdn = PSunc['GGF'+m]['FSRdn']
  PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
  nuisances['PS_FSR']['samples'].update({'GGH_'+m+model_name: PSstring})
  nuisances['PS_FSR']['samples'].update({'GGHINT_'+m+model_name: PSstring})
for m in massvbf:
  PSup = PSunc['VBF'+m]['FSRup']
  PSdn = PSunc['VBF'+m]['FSRdn']
  PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
  nuisances['PS_FSR']['samples'].update({'QQH_'+m+model_name: PSstring})
  nuisances['PS_FSR']['samples'].update({'QQHINT_'+m+model_name: PSstring})

# An overall 1.5% UE uncertainty will cover all the UEup/UEdo variations
# And we don't observe any dependency of UE variations on njet
nuisances['UE']  = {
                'name'  : 'UE_CP5',
                'skipCMS' : 1,
                'type': 'lnN',
                'samples': dict((skey, '1.015') for skey in mc),
}



# ####### Generic "cross section uncertainties"

apply_on = {
    'top': [
        '(topGenPtOTF * antitopGenPtOTF <= 0.) * 1.0816 + (topGenPtOTF * antitopGenPtOTF > 0.)',
        '(topGenPtOTF * antitopGenPtOTF <= 0.) * 0.9184 + (topGenPtOTF * antitopGenPtOTF > 0.)'
    ]
}

nuisances['singleTopToTTbar'] = {
    'name': 'singleTopToTTbar',
    'skipCMS': 1,
    'kind': 'weight',
    'type': 'shape',
    'samples': apply_on
}


### Top pT reweighting uncertainty -> not needed if the DATA/MC agreement is within the uncertainties after reweighting
# currently replaced by QCD scale
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

nuisances['VZ'] = {
    'name': 'CMS_hww_VZScale',
    'type': 'lnN',
    'samples': {
        'VgS_H': '1.16'
    }
}


###### pdf uncertainties

valuesggh  = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH', '125.09','pdf','sm')
valuesggzh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm')
valuesbbh  = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH', '125.09','pdf','sm')

nuisances['pdf_Higgs_gg'] = {
    'name': 'pdf_Higgs_gg',
    'samples': {
        'ggH_hww' : valuesggh,
        'ggH_htt' : valuesggh,
        'ggZH_hww': valuesggzh,
        'bbH_hww' : valuesbbh
    },
    'type': 'lnN',
}
for m in massggh:
    values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'pdf','bsm')
    nuisances['pdf_Higgs_gg']['samples'].update({'GGH_'+m+model_name: values})
    nuisances['pdf_Higgs_gg']['samples'].update({'GGHINT_'+m+model_name: values})



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
for m in massvbf:
    values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'bsm')
    nuisances['pdf_Higgs_qqbar']['samples'].update({'QQH_'+m+model_name: values})
    nuisances['pdf_Higgs_qqbar']['samples'].update({'QQHINT_'+m+model_name: values})




# Top, W+jets: Taken into account in rateParam, since these are all lnN anyway
# PDF for background: https://twiki.cern.ch/twiki/bin/view/CMS/StandardModelCrossSectionsat13TeV and https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns

# W+W-: 0.0589 / 1.2804 = 0.046001
# ZW+: 0.0064 / 0.1427 = 0.0448493
# ZW-: 0.0039 / 0.0921 = 0.0423453
# ZZ:  0.0027 / 0.0719 = 0.0375522
# DY: 14.78 / 6077.22 = 0.0024320
nuisances['pdf_gg']  = {
    'name'  : 'pdf_gg',
    'type'  : 'lnN',
    'samples'  : {
        'ggWW'    : '1.05',
    },
}

nuisances['pdf_qqbar']  = {
    'name'  : 'pdf_qqbar',
    'type'  : 'lnN',
    'samples'  : {
        'Vg'      : '1.04',
        'VZ'      : '1.04',
        'VgS'     : '1.04',
        'qqWWqq'  : '1.05',
        'DY'      : '1.002',
    },
}


nuisances['pdf_Higgs_gg_ACCEPT'] = {
    'name': 'pdf_Higgs_gg_ACCEPT',
    'samples': {
        'ggH_hww': '1.006',
        'ggH_htt': '1.006',
        # 'ggZH_hww': '1.006',
        # 'bbH_hww': '1.006'
    },
    'type': 'lnN',
}
# FIXME: values from dileptonic
for m in massggh:
  pdfgg_weight = 1.0 + (-4.10343+1.19015e-03*int(m)-9.68156e-08*int(m)*int(m)+6.90171e+03/(int(m)+8.71935e+02)-8.94415e+05/((int(m)+4.72259e+02)*(int(m)+4.72259e+02)))/100.0
  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGH_'+m+model_name: str(pdfgg_weight)})
  nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGHINT_'+m+model_name: str(pdfgg_weight)})



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
# FIXME: values from dileptonic
for m in massvbf:
  pdfqq_weight = 1.0 + (1.46296e-01)/100.0
  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQH_'+m+model_name: str(pdfqq_weight)})
  nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQHINT_'+m+model_name: str(pdfqq_weight)})




nuisances['pdf_gg_ACCEPT'] = {
    'name': 'pdf_gg_ACCEPT',
    'samples': {
        'ggWW': '1.006',
    },
    'type': 'lnN',
}

nuisances['pdf_qqbar_ACCEPT'] = {
    'name': 'pdf_qqbar_ACCEPT',
    'type': 'lnN',
    'samples': {
        'qqWWqq': '1.001'
    },
}




##### Renormalization & factorization scales

## This should work for samples with either 8 or 9 LHE scale weights (Length$(LHEScaleWeight) == 8 or 9)
variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'DY': variations
    },
}


# Variations for all other samples are consistent.
variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]
variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']

nuisances['QCDscale_WWJJ']  = {
    'name'  : 'QCDscale_WWJJ',
    'kind'  : 'weight_envelope',
    'type'  : 'shape',
    'samples'  : {
       'qqWWqq' : variations,
    }
}

# FIXME: LHEScaleWeight missing
nuisances['QCDscale_VV'] = {
    'name': 'QCDscale_VV',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'Vg': variations,
        #'VZ': variations, #FIXME not all VZ have LHEScaleWeight
        'VgS': variations
    }
}

topvars = variations
# Normalize top QCD scale
if True:
  topnorms = {"0j": [1.070761703863844, 1.0721982065714528, 1.0008829637654995, 1.002515087891841, 0.9270080603942781, 0.9270717138194097], "1j": [1.0846741444664376, 1.0806432359691847, 1.0079221754798773, 0.9960603215169435, 0.9198946095840594, 0.9129672863490275], "2j": [1.1209941307567444, 1.103222357530683, 1.0224795274718796, 0.9829374807746288, 0.9038880068177306, 0.8840173265167147]}
  for i,alpha in enumerate(topvars):
    topvars[i] = alpha+"*((Alt$(CleanJet_pt[0], 0) < 30.)/"+str(topnorms["0j"][i])+" + (Alt$(CleanJet_pt[0], 0) >= 30.)*(Alt$(CleanJet_pt[1], 0) < 30.)/"+str(topnorms["1j"][i])+" + (Alt$(CleanJet_pt[1], 0) >= 30.)/"+str(topnorms["2j"][i])+")"

topvars = variations
nuisances['QCDscale_ttbar']  = {
               'name'  : 'QCDscale_ttbar', 
                'skipCMS' : 1,
                'kind'  : 'weight_envelope',
                'type'  : 'shape',
                'samples'  : {
                   'top' : topvars,
                   }
}

nuisances['QCDscale_WWewk']  = {
    'name'  : 'QCDscale_VV',
    'type'  : 'lnN',
    'samples'  : {
        'WWewk' : '1.11',
    },
}

nuisances['QCDscale_ggVV'] = {
    'name': 'QCDscale_ggVV',
    'type': 'lnN',
    'samples': {
        'ggWW': '1.15',
    },
}




#### QCD scale uncertainties for Higgs
values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm')
nuisances['QCDscale_ggH'] = {
    'name': 'QCDscale_ggH',
    'samples': {
        'ggH_hww': values,
        'ggH_htt': values
    },
    'type': 'lnN'
}
for m in massggh:
    values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'scale','bsm')
    nuisances['QCDscale_ggH']['samples'].update({
        'GGH_'+m+model_name: values
    })
    nuisances['QCDscale_ggH']['samples'].update({
        'GGHINT_'+m+model_name: values
    })


values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm')
nuisances['QCDscale_qqH'] = {
    'name': 'QCDscale_qqH',
    'samples': {
        'qqH_hww': values,
        'qqH_htt': values
    },
    'type': 'lnN'
}
for m in massvbf:
    values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'scale','bsm')
    nuisances['QCDscale_qqH']['samples'].update({
        'QQH_'+m+model_name: values
    })
    nuisances['QCDscale_qqH']['samples'].update({
        'QQHINT_'+m+model_name: values
    })



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


nuisances['QCDscale_ggH_ACCEPT'] = {
    'name': 'QCDscale_ggH_ACCEPT',
    'type': 'lnN',
    'samples': {
        'ggH_hww': '1.012',
        'ggH_htt': '1.012',
        'ggZH_hww': '1.012',
        'ggWW': '1.012',
    },
}
# FIXME: this is fit from dileptonic
for m in massggh:
    scalegg_weight = 1.0 + (-5.53622e-02+6.73342e-05*int(m)+2.55597e+01/(int(m)-1.10009e+02))/100.0
    nuisances['QCDscale_ggH_ACCEPT']['samples'].update({
        'GGH_'+m+model_name: str(scalegg_weight)})
    nuisances['QCDscale_ggH_ACCEPT']['samples'].update({
        'GGHINT_'+m+model_name: str(scalegg_weight)})


nuisances['QCDscale_qqH_ACCEPT'] = {
    'name': 'QCDscale_qqH_ACCEPT',
    'type': 'lnN',
    'samples': {
        'qqH_hww': '1.003',
        'qqH_htt': '1.003',
        'qqWWqq' : '1.003',
    },
}
# FIXME: this is fit from dileptonic
for m in massvbf:
    scaleqq_weight = 1.0 + (4.54513e-02+3.01227e-06*int(m)+4.72447/(int(m)-9.97821e+01))/100.0
    nuisances['QCDscale_qqH_ACCEPT']['samples'].update({
        'QQH_'+m+model_name: str(scaleqq_weight)})
    nuisances['QCDscale_qqH_ACCEPT']['samples'].update({
        'QQHINT_'+m+model_name: str(scaleqq_weight)})


nuisances['QCDscale_VH_ACCEPT']  = {
    'name'  : 'QCDscale_VH_ACCEPT',
    'type'  : 'lnN',
    'samples'  : {
        'WH_htt': '1.010',
        'WH_hww': '1.010',
        'ZH_hww': '1.015',
        'ZH_htt': '1.015',
    },
}

# #### FAKES
eleWP = 'mvaFall17V1Iso_WP90'
muWP  = 'cut_Tight_HWWW'
fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_1l_mu25_ele35'

nuisances['fake_syst'] = {
    'name': 'CMS_fake_syst',
    'type': 'lnN',
    'samples': {
        'FAKE': '1.3'
    },
}
nuisances['fake_ele'] = {
    'name': 'CMS_fake_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'FAKE': [fakeW+'_ElUp/'+fakeW, fakeW+'_ElDown/'+fakeW],
    }
}
nuisances['fake_ele_stat'] = {
    'name': 'CMS_fake_stat_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'FAKE': [fakeW+'_statElUp/'+fakeW, fakeW+'_statElDown/'+fakeW]
    }
}
nuisances['fake_mu'] = {
    'name': 'CMS_fake_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'FAKE': [fakeW+'_MuUp/'+fakeW, fakeW+'_MuDown/'+fakeW],
    }
}
nuisances['fake_mu_stat'] = {
    'name': 'CMS_fake_stat_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'FAKE': [fakeW+'_statMuUp/'+fakeW, fakeW+'_statMuDown/'+fakeW],
    }
}


# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_ResolvSB'] = {
    'name': 'CMS_hww_CRSR_accept_SB',
    'type': 'lnN',
    'samples': {'Wjets': '1.009',},
    'cuts': [cut for cut in cuts if 'ResolvedSB' in cut],
    'cutspost': (lambda self, cuts: [cut for cut in cuts if 'SB' in cut]),
}
nuisances['CRSR_accept_BoostSB'] = {
    'name': 'CMS_hww_CRSR_accept_SB',
    'type': 'lnN',
    'samples': {'Wjets': '1.022',},
    'cuts': [cut for cut in cuts if 'BoostedSB' in cut],
    'cutspost': (lambda self, cuts: [cut for cut in cuts if 'SB' in cut]),
}

# Uncertainty on SR/CR ratio
nuisances['CRSR_accept_top'] = {
    'name': 'CMS_hww_CRSR_accept_top',
    'type': 'lnN',
    'samples': {'top': '1.01'},
    'cuts': [cut for cut in cuts if 'TopCR' in cut],
    'cutspost': (lambda self, cuts: [cut for cut in cuts if 'TopCR' in cut]),
}







## ...except in sample "WpWmJJ_QCD_noTop"! weights are NOT normalized! (2016 only)
#variations = ['LHEScaleWeight[%d]/LHEScaleWeight[4]' % i for i in [0, 1, 3, 5, 7, 8]]
#variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[5]', 'LHEScaleWeight[15]', 'LHEScaleWeight[25]', 'LHEScaleWeight[35]', 'LHEScaleWeight[40]']
#
#nuisances['QCDscale_WWJJ']  = {
#                'name'  : 'QCDscale_VV',
#                'skipCMS' : 1,
#                'kind'  : 'weight_envelope',
#                'type'  : 'shape',
#                'samples'  : {
#                   'qqWWqq' : variations,
##                   'WW2J' : variations,
#                }
#}
#
#
#variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]
## FIXME: LHEScaleWeight missing
#nuisances['QCDscale_VV'] = {
#    'name': 'QCDscale_VV',
#    'kind': 'weight_envelope',
#    'type': 'shape',
#    'samples': {
#        'Vg': variations,
#        # 'VZ': variations, #FIXME not all VZ have LHEScaleWeight
#        'VgS': variations
#    }
#}
#
#topvars = variations
#
##variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']
#variations = ['Alt$(LHEScaleWeight[0],1)*(Sum$(abs(GenPart_pdgId)==6 && abs(GenPart_statusFlags>>7 & 1))>=2) + (Sum$(abs(GenPart_pdgId)==6 && abs(GenPart_statusFlags>>7 & 1))<2)','Alt$(LHEScaleWeight[1],1)*(Sum$(abs(GenPart_pdgId)==6 && abs(GenPart_statusFlags>>7 & 1))>=2) + (Sum$(abs(GenPart_pdgId)==6 && abs(GenPart_statusFlags>>7 & 1))<2)','Alt$(LHEScaleWeight[3],1)*(Sum$(abs(GenPart_pdgId)==6 && abs(GenPart_statusFlags>>7 & 1))>=2) + (Sum$(abs(GenPart_pdgId)==6 && abs(GenPart_statusFlags>>7 & 1))<2)','Alt$(LHEScaleWeight[5],1)*(Sum$(abs(GenPart_pdgId)==6 && abs(GenPart_statusFlags>>7 & 1))>=2) + (Sum$(abs(GenPart_pdgId)==6 && abs(GenPart_statusFlags>>7 & 1))<2)', 'Alt$(LHEScaleWeight[7],1)*(Sum$(abs(GenPart_pdgId)==6 && abs(GenPart_statusFlags>>7 & 1))>=2) + (Sum$(abs(GenPart_pdgId)==6 && abs(GenPart_statusFlags>>7 & 1))<2)', 'Alt$(LHEScaleWeight[8],1)*(Sum$(abs(GenPart_pdgId)==6 && abs(GenPart_statusFlags>>7 & 1))>=2) + (Sum$(abs(GenPart_pdgId)==6 && abs(GenPart_statusFlags>>7 & 1))<2)']
## Normalize top QCD scale
## Normalize top QCD scale
#if True:
#  topnorms = {"0j": [1.070761703863844, 1.0721982065714528, 1.0008829637654995, 1.002515087891841, 0.9270080603942781, 0.9270717138194097], "1j": [1.0846741444664376, 1.0806432359691847, 1.0079221754798773, 0.9960603215169435, 0.9198946095840594, 0.9129672863490275], "2j": [1.1209941307567444, 1.103222357530683, 1.0224795274718796, 0.9829374807746288, 0.9038880068177306, 0.8840173265167147]}
#  for i,alpha in enumerate(topvars):
#    topvars[i] = alpha+"*((Alt$(CleanJet_pt[0], 0) < 30.)/"+str(topnorms["0j"][i])+" + (Alt$(CleanJet_pt[0], 0) >= 30.)*(Alt$(CleanJet_pt[1], 0) < 30.)/"+str(topnorms["1j"][i])+" + (Alt$(CleanJet_pt[1], 0) >= 30.)/"+str(topnorms["2j"][i])+")"
#
#nuisances['QCDscale_ttbar']  = {
#               'name'  : 'QCDscale_ttbar', 
#                'skipCMS' : 1,
#                'kind'  : 'weight_envelope',
#                'type'  : 'shape',
#                'samples'  : {
#                   'top' : variations,
#                   }
#}
#
#nuisances['QCDscale_WWewk']  = {
#    'name'  : 'QCDscale_VV',
#    'type'  : 'lnN',
#    'samples'  : {
#        'WWewk' : '1.11',
#    },
#}
#
#nuisances['QCDscale_ggVV'] = {
#    'name': 'QCDscale_ggVV',
#    'type': 'lnN',
#    'samples': {
#        'ggWW': '1.15',
#    },
#}


### FAKES
eleWP = 'mva_90p_Iso2016'
muWP  = 'cut_Tight80x'
fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_1l_mu25_ele35'

nuisances['fake_syst'] = {
    'name': 'CMS_fake_syst',
    'type': 'lnN',
    'samples': {
        'FAKE': '1.3'
    },
}

#nuisances['Wjets_QCD_NLO_sf_stat'] = {
#    'name': 'Wjets_QCD_NLO_sf_stat_2016',
#    'kind'  : 'weight',
#    'type'  : 'shape',
#    'samples': {
#        'Wjets': ['kfact[1]/kfact[0]', 'kfact[2]/kfact[0]'],
##        #'WjetsMjj': ['kfact[1]/kfact[0]', 'kfact[2]/kfact[0]'],
##        #'WjetsSP': ['kfactSP[1]/kfactSP[0]', 'kfactSP[2]/kfactSP[0]'],
##        #'WjetsSP': ['kfact[1]/kfact[0]', 'kfact[2]/kfact[0]'],
#    }
#}

el_et = El_jetEt
mu_et = Mu_jetEt
for syst in ['El', 'statEl', 'Mu', 'statMu']:
    name_tag = ''
    #if 'stat' in syst: name_tag += '_stat'
    #if 'El' in syst: name_tag += '_e'
    #else: name_tag += '_m'

    if 'El' in syst: name_tag += '_e'
    else: name_tag += '_m'
    if 'stat' in syst: name_tag += '_stat'
    else: name_tag += '_recoil'

    nuisances['fake_'+syst] = {
        'name': 'CMS_fake'+name_tag+'_2016',
        'kind': 'weight',
        'type': 'shape',
        'samples': {
            'FAKE': ['FW_mu'+str(mu_et)+'_el'+str(el_et)+'_'+syst+'Up[0]', 'FW_mu'+str(mu_et)+'_el'+str(el_et)+'_'+syst+'Down[0]'],
            #'FAKE': ['FW_mu20_el35_'+syst+'Up[0]', 'FW_mu20_el35_'+syst+'Down[0]'],
        },
    }





####################### rate parameter ##########

nuisances['wjets_res'] ={
	'name': 'Wjets_J2',
	'samples': {'Wjets': '1.00'},	
	'type': 'rateParam',
        'cuts'  : [
                cutdict['resSB'],
                cutdict['resSR'],
               ]
#	'cuts': set.union(cutdict['resSR'], cutdict['resSB']),
}
nuisances['wjets_boo'] ={                 
 	'name': 'Wjets_FatJet',
 	'samples': {'Wjets': '1.00'},	
 	'type': 'rateParam',
        'cuts'  : [
                cutdict['booSB'],
                cutdict['booSR'],
               ]
# 	'cuts': set.union(cutdict['booSR'], cutdict['booSB']),
}
nuisances['top_res'] ={
	'name': 'Top_J2',
	'samples': {'top': '1.00'},	
	'type': 'rateParam',
        'cuts'  : [
                cutdict['resTOP'],
                cutdict['resSR'],
               ]
#	'cuts': set.union(cutdict['resSR'],cutdict['resTOP']),
}
nuisances['top_boo'] ={
	'name': 'Top_FatJet',
	'samples': {'top': '1.00'},	
	'type': 'rateParam',
        'cuts'  : [
                cutdict['booTOP'],
                cutdict['booSR'],
               ]
#	'cuts': set.union(cutdict['booSR'],cutdict['booTOP']),
}


######################### MC stat #
nuisances['stat'] = {
    'type': 'auto',
    'maxPoiss': '10',
    'includeSignal': '0',
    #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
    #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
    'samples': {}
}
