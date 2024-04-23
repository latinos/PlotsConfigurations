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


################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

# https://twiki.cern.ch/twiki/bin/view/CMS/LumiRecommendationsRun2#LumiComb
# Uncorrelated 2016               1.0
# Uncorrelated       2017              2.0
# Uncorrelated             2018             1.5
# Correlated   2016, 2017, 2018   0.6, 0.9, 2.0
# Correlated         2017, 2018        0.6, 0.2

nuisances['lumi_Uncorrelated'] = {
    'name'    : 'lumi_13TeV_2018',
    'type'    : 'lnN',
    'samples' : dict((skey, '1.015') for skey in mc if skey not in ['WZ'])
}

nuisances['lumi_Correlated_Run2'] = {
    'name'    : 'lumi_13TeV_correlated',
    'type'    : 'lnN',
    'samples' : dict((skey, '1.020') for skey in mc if skey not in ['WZ'])
}

nuisances['lumi_Correlated_2017_2018'] = {
    'name'    : 'lumi_13TeV_1718',
    'type'    : 'lnN',
    'samples' : dict((skey, '1.002') for skey in mc if skey not in ['WZ'])
}


#### FAKES
nuisances['fake_syst_mm'] = {
    'name'    : 'CMS_fake_syst_mm',
    'type'    : 'lnN',
    'samples' : {
        'Fake_mm' : '1.3'
    },
}
nuisances['fake_syst_em'] = {
    'name'    : 'CMS_fake_syst_em',
    'type'    : 'lnN',
    'samples' : {
        'Fake_em' : '1.3'
    },
}
nuisances['fake_syst_ee'] = {
    'name'    : 'CMS_fake_syst_ee',
    'type'    : 'lnN',
    'samples' : {
        'Fake_ee' : '1.3'
    },
}

nuisances['fake_ele'] = {
    'name'    : 'CMS_fake_e_2018',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : {
        'Fake' : ['fakeWEleUp', 'fakeWEleDown'],
    }
}
nuisances['fake_ele_stat'] = {
    'name'    : 'CMS_fake_stat_e_2018',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : {
        'Fake' : ['fakeWStatEleUp', 'fakeWStatEleDown']
    }
}
nuisances['fake_mu'] = {
    'name'    : 'CMS_fake_m_2018',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : {
        'Fake' : ['fakeWMuUp', 'fakeWMuDown'],
    }   
}       
nuisances['fake_mu_stat'] = {
    'name'    : 'CMS_fake_stat_m_2018',
    'kind'    : 'weight',
    'type'    : 'shape',
    'samples' : {
        'Fake' : ['fakeWStatMuUp', 'fakeWStatMuDown'],
    }
}

nuisances['UE_CP5']  = {
    'name'    : 'CMS_WH_hww_UE',
    'skipCMS' : 1,
    'type'    : 'lnN',
    'samples' : dict((skey, '1.015') for skey in mc),
}

nuisances['WgStar'] = {
    'name'    : 'CMS_hww_WgStarScale',
    'type'    : 'lnN',
    'samples' : {
        'WgS' : '1.25'
    }
}

nuisances['QCDscale_ggVV'] = {
    'name'    : 'QCDscale_ggVV',
    'type'    : 'lnN',
    'samples' : {
        'ggWW' : '1.15',
    },
}

## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
    'type'          : 'auto',
    'maxPoiss'      : '10',
    'includeSignal' : '0',
    'samples'       : {}
}

for n in nuisances.values():
    n['skipCMS'] = 1
