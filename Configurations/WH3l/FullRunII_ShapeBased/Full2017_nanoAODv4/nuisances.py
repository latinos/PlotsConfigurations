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
    mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
except NameError:
    mc = []
    cuts = {}
    nuisances = {}
    def makeMCDirectory(x=''):
        return ''

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()



################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

nuisances['lumi'] = {
    'name': 'lumi_13TeV_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.025') for skey in mc if skey not in ['top', 'DY'])
}

#### FAKES

nuisances['fake_syst_wh3l']  = {
               'name'  : 'fake_syst_2017',
               'type'  : 'lnN',
               'samples'  : {
                             'Fake' : '1.30',
                             },
}

nuisances['fake_ele']  = {
                'name'  : 'fake_ele_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                            'Fake': ['fakeWEleUp', 'fakeWEleDown'],
                             },
}

nuisances['fake_ele_stat']  = {
                'name'  : 'fake_ele_stat_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                            'Fake': ['fakeWStatEleUp', 'fakeWStatEleDown']
                             },
}

nuisances['fake_mu']  = {
                'name'  : 'fake_mu_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                            'Fake': ['fakeWMuUp', 'fakeWMuDown'],
                             },
}

nuisances['fake_mu_stat']  = {
                'name'  : 'fake_mu_stat_2017',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                            'Fake': ['fakeWStatMuUp', 'fakeWStatMuDown'],
                             },
}


##### B-tagger

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
    }

##### Trigger Efficiency


trig_syst = ['((TriggerEffWeight_3l_u)/(TriggerEffWeight_3l))*(TriggerEffWeight_3l>0.02) + (TriggerEffWeight_3l<=0.02)', '(TriggerEffWeight_3l_d)/(TriggerEffWeight_3l)']

nuisances['trigg_wh3l']  = {
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
    'samples': dict((skey, prefire_syst) for skey in mc)
}

##### Electron Efficiency and energy scale

nuisances['eff_e'] = {
    'name': 'CMS_eff_e_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc)
}

nuisances['electronpt'] = {
    'name': 'CMS_scale_e_2017',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('ElepTup'),
    'folderDown': makeMCDirectory('ElepTdo'),
    'AsLnN': '1'
}

##### Muon Efficiency and energy scale

nuisances['eff_m'] = {
    'name': 'CMS_eff_m_2017',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc)
}

nuisances['muonpt'] = {
    'name': 'CMS_scale_m_2017',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('MupTup'),
    'folderDown': makeMCDirectory('MupTdo'),
    'AsLnN': '1'
}

##### Jet energy scale

nuisances['jes'] = {
    'name': 'CMS_scale_j_2017',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('JESup'),
    'folderDown': makeMCDirectory('JESdo'),
    'AsLnN': '1'
}

##### MET energy scale

nuisances['met'] = {
    'name': 'CMS_scale_met_2017',
    'kind': 'tree',
    'type': 'shape',
    'samples': dict((skey, ['1', '1']) for skey in mc),
    'folderUp': makeMCDirectory('METup'),
    'folderDown': makeMCDirectory('METdo'),
    'AsLnN': '1'
}

##### PS and UE --> NO AVAILABLE FOR VH2j! 
nuisances['PS_wh3l']  = {
    'name'  : 'PS_wh3l',
    'kind'  : 'tree',
    'type'  : 'shape',
    'samples'  : {
       'WH_hww' : ['1.037','1.'],
       'WH_htt' : ['1.037','1.'],
     },
    'folderUp': makeMCDirectory('PS'),
    'folderDown': makeMCDirectory(),
    'AsLnN'      : '1',
    'synchronized': False
}

nuisances['UE_wh3l']  = {
    'name'  : 'UE_wh3l',
    'kind'  : 'tree',
    'type'  : 'shape',
    'samples'  : {
       'WH_hww' : ['1.01','1.'],
       'WH_htt' : ['1.01','1.'],
     },
    'folderUp': makeMCDirectory('UEup'),
    'folderDown': makeMCDirectory('UEdo'),
    'AsLnN'      : '1',
    'synchronized': False
}

###### pdf uncertainties

nuisances['pdf_Higgs_qqbar_wh3l']  = {
               'name'  : 'pdf_Higgs_qqbar',
               'type'  : 'lnN',
               'samples'  : {
                   'WH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH' ,'125.09','pdf','sm'),
                   },
              }


nuisances['pdf_Higgs_qqbar_ACCEPT_wh3l']  = {
               'name'  : 'pdf_Higgs_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'WH_htt'  : '1.007',
                   'WH_hww'  : '1.007',
                   'WZ'      : '1.005'
                   },
              }

##### Renormalization & factorization scales

## Shape nuisance due to QCD scale variations for DY
# LHE scale variation weights (w_var / w_nominal)
# [0] is muR=0.50000E+00 muF=0.50000E+00
# [8] is muR=0.20000E+01 muF=0.20000E+01

nuisances['QCDscale_WH']  = {
               'name'  : 'QCDscale_WH',
               'samples'  : {
                   'WH_hww' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   'WH_htt' : HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm'),
                   },
               'type'  : 'lnN',
              }


nuisances['QCDscale_qqbar_ACCEPT']  = {
               'name'  : 'QCDscale_qqbar_ACCEPT',
               'type'  : 'lnN',
               'samples'  : {
                   'WH_htt'  : '1.05',
                   'WH_hww'  : '1.05',
                   'WZ'      : '1.029'
                   },
              }


## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat'] = {
    'type': 'auto',
    'maxPoiss': '10',
    'includeSignal': '1',
    #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
    #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
    'samples': {}
}


nuisances['Zg3lnorm']  = {
               'name'  : 'CMS_hww_Zg3lnorm',
               'samples'  : {
                   'Vg' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'wh3l_zg_13TeV',
                 'wh3l_13TeV_ossf',
                 'wh3l_13TeV_sssf',
                 'wh3l_wz_13TeV',
                ]
              }

nuisances['wz3lnorm']  = {
               'name'  : 'cms_hww_wz3lnorm',
               'samples'  : {
                   'wz' : '1.00',
                   },
               'type'  : 'rateparam',
               'cuts'  : [
                 'wh3l_wz_13tev',
                 'wh3l_13tev_ossf',
                 'wh3l_13tev_sssf',
                 'wh3l_zg_13tev',
                ]
              }


for n in nuisances.values():
    n['skipCMS'] = 1

print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))
