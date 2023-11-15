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
    mc_deep =[skey for skey in samples if skey not in ['DY', 'Wjets', 'Vg', 'VgS','VZ', 'FAKE', 'DATA', 'VVV', 'ZH_htt', 'WH_htt', 'ggH_htt', 'qqH_htt']]  
    sig_mc = [skey for skey in mc if ("GGH" in skey) or ("QQH" in skey) or (skey in ["ggWW", "ggH_hww", "qqWWqq", "qqH_hww"])] # ggWW is currently reweighted sig sample, while qqWWqq needs to be symlinked to the BWReweight!
    sig_mc_PS = [skey for skey in mc if ("GGH" in skey) or ("QQH" in skey)] # ggWW is currently reweighted sig sample, while qqWWqq needs to be symlinked to the BWReweight!

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
    'Boosted' : set(x for x in cuts if 'Boosted' in x),
    'resTOP'   : 'incl_ResolvedTopCR_', #set(x for x in cuts if 'ResolvedTopCR' in x),
    'booTOP'   : 'incl_BoostedTopCR_',  #set(x for x in cuts if 'BoostedTopCR' in x),
    'resSR'   : 'incl_ResolvedSR_',     #set(x for x in cuts if 'ResolvedSR' in x),
    'resSB'   : 'incl_ResolvedSB_',     #set(x for x in cuts if 'ResolvedSB' in x),
    'booSR'   : 'incl_BoostedSR_',      #set(x for x in cuts if 'BoostedSR' in x),
    'booSB'   : 'incl_BoostedSB_',      #set(x for x in cuts if 'BoostedSB' in x),
    'resTOP_2J'   : 'incl_ResolvedTopCR_2jets',# set(x for x in cuts if 'ResolvedTopCR' in x),
    'booTOP_2J'   : 'incl_BoostedTopCR_2jets', # set(x for x in cuts if 'BoostedTopCR' in x),
    'resSR_2J'   : 'incl_ResolvedSR_2jets',    #set(x for x in cuts if 'ResolvedSR' in x),
    'resSB_2J'   : 'incl_ResolvedSB_2jets',    #set(x for x in cuts if 'ResolvedSB' in x),
    'booSR_2J'   : 'incl_BoostedSR_2jets',     #set(x for x in cuts if 'BoostedSR' in x),
    'booSB_2J'   : 'incl_BoostedSB_2jets',     #set(x for x in cuts if 'BoostedSB' in x),
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
    ##'Untag' : set(x for x in cuts if 'Untagged' in x),
    'Boost' : set(x for x in cuts if 'Boosted' in x),
    'Resolv': set(x for x in cuts if 'Resolved' in x),
    #'HM'    : set(x for x in cuts if 'HM' in x),
}


################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2018',
    'type': 'lnN',
    'samples': dict((skey, '1.015') for skey in mc if skey not in ['Wjets', 'top'])
}

nuisances['lumi_XY'] = {
    'name': 'lumi_13TeV_XY',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc if skey not in ['Wjets', 'top'])
}

nuisances['lumi_LS'] = {
    'name': 'lumi_13TeV_LS',
    'type': 'lnN',
    'samples': dict((skey, '1.002') for skey in mc if skey not in ['Wjets', 'top'])
}

nuisances['lumi_BCC'] = {
    'name': 'lumi_13TeV_BCC',
    'type': 'lnN',
    'samples': dict((skey, '1.002') for skey in mc if skey not in ['Wjets', 'top'])
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
        name += '_2018'

    nuisances['btag_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
    }




trig_syst = ['((TriggerEffWeight_1l_fixed_u)/(TriggerEffWeight_1l_fixed))*(TriggerEffWeight_1l_fixed>0.02) + (TriggerEffWeight_1l_fixed<=0.02)', '(TriggerEffWeight_1l_fixed_d)/(TriggerEffWeight_1l_fixed)*(TriggerEffWeight_1l_fixed>0.02) + (TriggerEffWeight_1l_fixed<=0.02)']
nuisances['trigg'] = {
    'name': 'CMS_eff_hwwtrigger_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, trig_syst) for skey in mc)
}

#prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']
#
#nuisances['prefire'] = {
#    'name': 'CMS_eff_prefiring_2018',
#    'kind': 'weight',
#    'type': 'shape',
#    'samples': dict((skey, prefire_syst) for skey in mc),
#}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc)
}

nuisances['electronpt'] = {
    'name' : 'CMS_scale_e_2018',
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
    'name': 'CMS_eff_m_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc)
}

nuisances['muonpt'] = {
    'name' : 'CMS_scale_m_2018',
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
jes_systs = ['JESAbsolute','JESAbsolute_2018','JESBBEC1','JESBBEC1_2018','JESEC2','JESEC2_2018','JESFlavorQCD','JESHF','JESHF_2018','JESRelativeBal','JESRelativeSample_2018']

for js in jes_systs:
    nuisances[js] = {
      'name' : 'CMS_scale_'+js,
      'kind' : 'suffix',
      'type' : 'shape',
      'mapUp'  : js+'up',
      'mapDown': js+'do',
      'samples': dict((skey, ['1', '1']) for skey in mc if skey not in sig_mc),
      'folderUp'  : makeMCDirectory('JESup'),
      'folderDown': makeMCDirectory('JESdo'),
      'AsLnN': '1'
  }



nuisances['jet_jer']  = {
    'name'  : 'CMS_jer',
    'kind'  : 'suffix',
    'type'  : 'shape',
    'mapUp'  : 'JERup',
    'mapDown': 'JERdo',
    'samples': dict((skey, ['1', '1']) for skey in mc if skey not in sig_mc),
    'folderUp'  : makeMCDirectory('JERup'),
    'folderDown': makeMCDirectory('JERdo'),
    'AsLnN': '1'
}
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
    'name' : 'CMS_scale_met_2018',
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
    'name': 'CMS_PU_2018',
    'kind': 'weight',
    'type': 'shape',
    'samples': {
        'Wjets': ['1.00042361272*(puWeightUp/puWeight)', '0.999642734402*(puWeightDown/puWeight)'],
        'DY': ['0.993259983266*(puWeightUp/puWeight)', '0.997656381501*(puWeightDown/puWeight)'],
        'top': ['1.00331969187*(puWeightUp/puWeight)', '0.999199609528*(puWeightDown/puWeight)'],
        'WW': ['1.0033022059*(puWeightUp/puWeight)', '0.997085330608*(puWeightDown/puWeight)'],
        'ggH_hww': ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)'],
        'qqH_hww': ['1.00374694528*(puWeightUp/puWeight)', '0.995878596852*(puWeightDown/puWeight)'],
    },
    'AsLnN': '1',
}

# WpWmJJ_EWK_noTop, WpWmJJ_QCD_noTop_ext1, Wg_MADGRAPHMLM: PS Weights not properly normalized!
nuisances['PS_ISR']  = {
    'name': 'PS_ISR',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['Alt$(PSWeight[2], 1.0)', 'Alt$(PSWeight[0], 1.0)']) for skey in mc if skey not in ["qqWWqq", "WW2J", "WWewk", "Vg", "VgS"] and "SBI" not in skey), #PSWeights still buggy in v7?
}
nuisances['PS_ISR']['samples'].update({'qqWWqq': ['1.031198192*(nCleanGenJet==0) + 1.029396447*(nCleanGenJet==1) + 1.008244787*(nCleanGenJet==2) + 0.958054424*(nCleanGenJet>=3)', '0.962541517*(nCleanGenJet==0) + 0.964149647*(nCleanGenJet==1) + 0.988864503*(nCleanGenJet==2) + 1.052819668*(nCleanGenJet>=3)']}) # From WpWmJJ_QCD_noTop_ext1
nuisances['PS_ISR']['samples'].update({'WW2J': ['1.031198192*(nCleanGenJet==0) + 1.029396447*(nCleanGenJet==1) + 1.008244787*(nCleanGenJet==2) + 0.958054424*(nCleanGenJet>=3)', '0.962541517*(nCleanGenJet==0) + 0.964149647*(nCleanGenJet==1) + 0.988864503*(nCleanGenJet==2) + 1.052819668*(nCleanGenJet>=3)']}) # From WpWmJJ_QCD_noTop_ext1
nuisances['PS_ISR']['samples'].update({'WWewk': ['1.000046239608802*(nCleanGenJet==0) + 1.0133437345113673*(nCleanGenJet==1) + 1.0144565712441801*(nCleanGenJet==2) + 0.9633224709814209*(nCleanGenJet>=3)', '0.9972924400977996*(nCleanGenJet==0) + 0.9796025428294364*(nCleanGenJet==1) + 0.9785038122896787*(nCleanGenJet==2) + 1.043894692205412*(nCleanGenJet>=3)']}) # From WpWmJJ_EWK_noTop
nuisances['PS_ISR']['samples'].update({'Vg': ['1.0039055667905552*(nCleanGenJet==0) + 1.0059752448648116*(nCleanGenJet==1) + 0.9926179336643974*(nCleanGenJet==2) + 0.9524471129275528*(nCleanGenJet>=3)', '0.9949355050284215*(nCleanGenJet==0) + 0.9926938538727195*(nCleanGenJet==1) + 1.0093671414600691*(nCleanGenJet==2) + 1.060578524662196*(nCleanGenJet>=3)']}) # From Zg
nuisances['PS_ISR']['samples'].update({'VgS': ['1.0000536116408023*(nCleanGenJet==0) + 1.0100100693580492*(nCleanGenJet==1) + 0.959068359375*(nCleanGenJet==2) + 0.9117049260469496*(nCleanGenJet>=3)', '0.9999367833485968*(nCleanGenJet==0) + 0.9873682892005163*(nCleanGenJet==1) + 1.0492717737268518*(nCleanGenJet==2) + 1.1176958835210322*(nCleanGenJet>=3)']}) # From WZTo3LNu_mllmin01

nuisances['PS_ISR']  = {
    'name': 'PS_ISR',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['Alt$(PSWeight[2], 1.0)', 'Alt$(PSWeight[0], 1.0)']) for skey in sig_mc_PS)
}
#for m in massggh:
#  PSup = PSunc['GGF'+m]['ISRup']
#  PSdn = PSunc['GGF'+m]['ISRdn']
#  PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
#  nuisances['PS_ISR']['samples'].update({'GGH_'+m+model_name: PSstring})
#  nuisances['PS_ISR']['samples'].update({'GGHINT_'+m+model_name: PSstring}) # Here and in the following: Don't put nuisances here for SBI; they're added automatically in a later step!
#for m in massvbf:
#  PSup = PSunc['VBF'+m]['ISRup']
#  PSdn = PSunc['VBF'+m]['ISRdn']
#  PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
#  nuisances['PS_ISR']['samples'].update({'QQH_'+m+model_name: PSstring})
#  nuisances['PS_ISR']['samples'].update({'QQHINT_'+m+model_name: PSstring})



nuisances['PS_FSR']  = {
    'name': 'PS_FSR',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['Alt$(PSWeight[3], 1.0)', 'Alt$(PSWeight[1], 1.0)']) for skey in mc if skey not in ["qqWWqq", "WW2J", "WWewk", "Vg", "VgS"] and "SBI" not in skey), #PSWeights still buggy in v7?
}
nuisances['PS_FSR']['samples'].update({'qqWWqq': ['0.976538004*(nCleanGenJet==0) + 0.993524816*(nCleanGenJet==1) + 1.006678783*(nCleanGenJet==2) + 1.009760965*(nCleanGenJet>=3)', '1.035661107*(nCleanGenJet==0) + 1.007585153*(nCleanGenJet==1) + 0.989764669*(nCleanGenJet==2) + 0.98276492*(nCleanGenJet>=3)']})
nuisances['PS_FSR']['samples'].update({'WW2J': ['0.976538004*(nCleanGenJet==0) + 0.993524816*(nCleanGenJet==1) + 1.006678783*(nCleanGenJet==2) + 1.009760965*(nCleanGenJet>=3)', '1.035661107*(nCleanGenJet==0) + 1.007585153*(nCleanGenJet==1) + 0.989764669*(nCleanGenJet==2) + 0.98276492*(nCleanGenJet>=3)']})
nuisances['PS_FSR']['samples'].update({'WWewk': ['0.9919173789731052*(nCleanGenJet==0) + 0.994273375713824*(nCleanGenJet==1) + 1.0009783801226202*(nCleanGenJet==2) + 1.0046943184676753*(nCleanGenJet>=3)', '1.0081780733496333*(nCleanGenJet==0) + 1.0052172826204072*(nCleanGenJet==1) + 0.9984786981975752*(nCleanGenJet==2) + 0.9881601609947174*(nCleanGenJet>=3)']})
nuisances['PS_FSR']['samples'].update({'Vg': ['0.9981385958679493*(nCleanGenJet==0) + 1.000785005516636*(nCleanGenJet==1) + 1.0072453356787239*(nCleanGenJet==2) + 1.016190506425758*(nCleanGenJet>=3)', '1.0032725732400525*(nCleanGenJet==0) + 1.0019489593245505*(nCleanGenJet==1) + 0.986995604774182*(nCleanGenJet==2) + 0.9629840158493718*(nCleanGenJet>=3)']})
nuisances['PS_FSR']['samples'].update({'VgS': ['0.9976593177227735*(nCleanGenJet==0) + 1.0016125187585532*(nCleanGenJet==1) + 1.0049344618055556*(nCleanGenJet==2) + 1.0195631514301164*(nCleanGenJet>=3)', '1.0026951855766457*(nCleanGenJet==0) + 1.0008132148661049*(nCleanGenJet==1) + 1.003949291087963*(nCleanGenJet==2) + 0.9708160910230832*(nCleanGenJet>=3)']})

#for m in massggh:
#  PSup = PSunc['GGF'+m]['FSRup']
#  PSdn = PSunc['GGF'+m]['FSRdn']
#  PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
#  nuisances['PS_FSR']['samples'].update({'GGH_'+m+model_name: PSstring})
#  nuisances['PS_FSR']['samples'].update({'GGHINT_'+m+model_name: PSstring})
#for m in massvbf:
#  PSup = PSunc['VBF'+m]['FSRup']
#  PSdn = PSunc['VBF'+m]['FSRdn']
#  PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
#  nuisances['PS_FSR']['samples'].update({'QQH_'+m+model_name: PSstring})
#  nuisances['PS_FSR']['samples'].update({'QQHINT_'+m+model_name: PSstring})

nuisances['PS_FSR']  = {
    'name': 'PS_FSR',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['Alt$(PSWeight[3], 1.0)', 'Alt$(PSWeight[1], 1.0)']) for skey in sig_mc_PS)
}
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

variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']

nuisances['QCDscale_V'] = {
    'name': 'QCDscale_V',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'DY': variations
    },
}

nuisances['QCDscale_Wjets'] = {
    'name': 'QCDscale_Wjets',
    'kind': 'weight_envelope',
    'type': 'shape',
    'samples': {
        'Wjets': variations
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
#nuisances['QCDscale_VV'] = {
#    'name': 'QCDscale_VV',
#    'kind': 'weight_envelope',
#    'type': 'shape',
#    'samples': {
#        'Vg': variations,
#        #'VZ': variations, #FIXME not all VZ have LHEScaleWeight
#        'VgS': variations
#    }
#}

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

##
###This should work for samples with either 8 or 9 LHE scale weights (Length$(LHEScaleWeight) == 8 or 9)
###variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']
###
###nuisances['QCDscale_V'] = {
###    'name': 'QCDscale_V',
###    'kind': 'weight_envelope',
###    'type': 'shape',
###    'samples': {
###        'DY': variations
###    },
###}
###
###
#### Variations for all other samples are consistent.
###variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]
###
###nuisances['QCDscale_WWJJ']  = {
###    'name'  : 'QCDscale_WWJJ',
###    'kind'  : 'weight_envelope',
###    'type'  : 'shape',
###    'samples'  : {
###       'qqWWqq' : variations,
###       'WW2J' : variations,
###    }
###}
###
#### FIXME: LHEScaleWeight missing
###nuisances['QCDscale_VV'] = {
###    'name': 'QCDscale_VV',
###    'kind': 'weight_envelope',
###    'type': 'shape',
###    'samples': {
###        'Vg': variations,
###        # 'VZ': variations, #FIXME not all VZ have LHEScaleWeight
###        'VgS': variations
###    }
###}
###
###topvars = variations
##
##nuisances['QCDscale_WWewk']  = {
##    'name'  : 'QCDscale_VV',
##    'type'  : 'lnN',
##    'samples'  : {
##        'WWewk' : '1.11',
##    },
##}
##
nuisances['QCDscale_ggVV'] = {
    'name': 'QCDscale_ggVV',
    'type': 'lnN',
    'samples': {
        'ggWW': '1.15',
    },
}

nuisances['Wjets_QCD_NLO_sf_stat'] = {
    'name': 'Wjets_QCD_NLO_sf_stat_2018',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples': {
        'Wjets': ['kfact[1]/kfact[0]', 'kfact[2]/kfact[0]'],
    }
}



#### QCD scale uncertainties for Higgs
#
#
#
##### FAKES
#eleWP = 'mvaFall17V1Iso_WP90'
#muWP  = 'cut_Tight_HWWW'
#fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_1l_mu25_ele35'
#
nuisances['fake_syst_2018'] = {
    'name': 'CMS_fake_syst_2018',
    'type': 'lnN',
    'samples': {
        'FAKE': '1.3'
    },
}
##nuisances['fake_ele'] = {
##    'name': 'CMS_fake_e_2018',
##    'kind': 'weight',
##    'type': 'shape',
##    'samples': {
##        'FAKE': [fakeW+'_ElUp', fakeW+'_ElDown'],
##    }
##}
##nuisances['fake_ele_stat'] = {
##    'name': 'CMS_fake_stat_e_2018',
##    'kind': 'weight',
##    'type': 'shape',
##    'samples': {
##        'FAKE': [fakeW+'_statElUp', fakeW+'_statElDown']
##    }
##}
##nuisances['fake_mu'] = {
##    'name': 'CMS_fake_m_2018',
##    'kind': 'weight',
##    'type': 'shape',
##    'samples': {
##        'FAKE': [fakeW+'_MuUp', fakeW+'_MuDown'],
##    }
##}
##nuisances['fake_mu_stat'] = {
##    'name': 'CMS_fake_stat_m_2018',
##    'kind': 'weight',
##    'type': 'shape',
##    'samples': {
##        'FAKE': [fakeW+'_statMuUp', fakeW+'_statMuDown'],
##    }
##}
#
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

# Uncertainty on SR/CR ratio


######################### MC stat #
nuisances['stat'] = {
    'type': 'auto',
    'maxPoiss': '10',
    'includeSignal': '0',
    #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
    #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
    'samples': {}
}