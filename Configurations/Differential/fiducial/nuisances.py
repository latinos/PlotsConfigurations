try:
    from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
    HiggsXS = HiggsXSection()

except ImportError:
    import os
    import sys

    path = os.path.abspath(__file__)
    for _ in range(6):
        path = os.path.dirname(path)
    cmssw_base = path

    sys.path.append(cmssw_base + '/python')
    current_cmssw_base = os.environ['CMSSW_BASE']
    os.environ['CMSSW_BASE'] = cmssw_base

    from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
    HiggsXS = HiggsXSection()    

    os.environ['CMSSW_BASE'] = current_cmssw_base

try:
    nuisances
except NameError:
    nuisances = {}

#nuisances['PS']  = {
#    'name': 'PS',
#    'kind': 'weight',
#    'type': 'shape',
#    'samples': {
#        'WW': ['PSWeight[0]', 'PSWeight[3]'],
#        #'ggH_hww': ['PSWeight[0]', 'PSWeight[3]'], # broken in source
#        #'qqH_hww': ['PSWeight[0]', 'PSWeight[3]'] # broken in source
#    },
#    #'symmetrize': True
#}

#nuisances['UE'] = {
#    'name': 'UE', 
#    'kind': 'tree',
#    'type': 'shape',
#    'samples': {
#        'ggH_hww' : ['1', '1'],
#        'qqH_hww' : ['1', '1']
#    },
#    'folderUp': makeMCDirectory('UEup'),
#    'folderDown': makeMCDirectory('UEdo'),
#    'synchronized': False
#}

###### pdf uncertainties

valuesggh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','pdf','sm')
valuesggzh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm')
valuesbbh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','pdf','sm')

nuisances['pdf_Higgs_gg'] = {
    'name': 'pdf_Higgs_gg',
    'samples': {
        'ggH_hww': valuesggh,
        'ggH_hwwalt': valuesggh,
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
        'qqH_hwwalt': valuesqqh,
        'WH_hww': valueswh,
        'ZH_hww': valueszh,
    },
}

# Theory uncertainty for ggH
#
#
#   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
#
#   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools

thus = [
    ('THU_ggH_Mu', 'ggH_mu'),
    ('THU_ggH_Res', 'ggH_res'),
    ('THU_ggH_Mig01', 'ggH_mig01'),
    ('THU_ggH_Mig12', 'ggH_mig12'),
    ('THU_ggH_VBF2j', 'ggH_VBF2j'),
    ('THU_ggH_VBF3j', 'ggH_VBF3j'),
    ('THU_ggH_PT60', 'ggH_pT60'),
    ('THU_ggH_PT120', 'ggH_pT120'),
    ('THU_ggH_qmtop', 'ggH_qmtop')
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
          'ggH_hwwalt': updown
        }
    }

#### QCD scale uncertainties for Higgs signals other than ggH

values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm')

nuisances['QCDscale_qqH'] = {
    'name': 'QCDscale_qqH', 
    'samples': {
        'qqH_hww': values,
        'qqH_hwwalt': values,
    },
    'type': 'lnN'
}

valueswh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm')
valueszh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm')

nuisances['QCDscale_VH'] = {
    'name': 'QCDscale_VH', 
    'samples': {
        'WH_hww': valueswh,
        'ZH_hww': valueszh,
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

#values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH','125.09','scale','sm')
#
#nuisances['QCDscale_bbH'] = {
#  'name': 'QCDscale_bbH',
#  'samples': {
#    'bbH_hww': values
#  },
#  'type': 'lnN',
#}

values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm')

nuisances['QCDscale_ttH'] = {
    'name': 'QCDscale_ttH',
    'samples': {
        'ttH_hww': values
    },
    'type': 'lnN',
}
