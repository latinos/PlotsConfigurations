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
    mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('FAKE')]
except NameError:
    mc = []
    cuts = {}
    nuisances = {}
    def makeMCDirectory(x=''):
        return ''

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()


#-#-################################# EXPERIMENTAL UNCERTAINTIES  #################################
#-#-#
#-#-##### Luminosity
#-#-#
#-#-## nuisances['lumi'] = {
#-#-##    'name': 'lumi_13TeV_2017',
#-#-##    'type': 'lnN',
#-#-##    'samples': dict((skey, '1.023') for skey in mc if skey not in ['Wjets', 'top'])
#-#-## }
#-#-#
#-#-#nuisances['lumi_Uncorrelated'] = {
#-#-#    'name': 'lumi_13TeV_2017',
#-#-#    'type': 'lnN',
#-#-#    'samples': dict((skey, '1.02') for skey in mc if skey not in ['Wjets'])
#-#-#}
#-#-#
#-#-#nuisances['lumi_XYFact'] = {
#-#-#    'name': 'lumi_13TeV_XYFact',
#-#-#    'type': 'lnN',
#-#-#    'samples': dict((skey, '1.008') for skey in mc if skey not in ['Wjets'])
#-#-#}
#-#-#
#-#-#nuisances['lumi_LScale'] = {
#-#-#    'name': 'lumi_13TeV_LSCale',
#-#-#    'type': 'lnN',
#-#-#    'samples': dict((skey, '1.003') for skey in mc if skey not in ['Wjets'])
#-#-#}
#-#-#
#-#-#nuisances['lumi_BBDefl'] = {
#-#-#    'name': 'lumi_13TeV_BBDefl',
#-#-#    'type': 'lnN',
#-#-#    'samples': dict((skey, '1.004') for skey in mc if skey not in ['Wjets'])
#-#-#}
#-#-#
#-#-#nuisances['lumi_DynBeta'] = {
#-#-#    'name': 'lumi_13TeV_DynBeta',
#-#-#    'type': 'lnN',
#-#-#    'samples': dict((skey, '1.005') for skey in mc if skey not in ['Wjets'])
#-#-#}
#-#-#
#-#-#nuisances['lumi_CurrCalib'] = {
#-#-#    'name': 'lumi_13TeV_CurrCalib',
#-#-#    'type': 'lnN',
#-#-#    'samples': dict((skey, '1.003') for skey in mc if skey not in ['Wjets'])
#-#-#}
#-#-#
#-#-#nuisances['lumi_Ghosts'] = {
#-#-#    'name': 'lumi_13TeV_Ghosts',
#-#-#    'type': 'lnN',
#-#-#    'samples': dict((skey, '1.001') for skey in mc if skey not in ['Wjets'])
#-#-#}
#-#-#
#-#-#
#-#-###### Trigger Efficiency
#-#-#
#-#-#trig_syst = ['((TriggerEffWeight_1l_u)/(TriggerEffWeight_1l))*(TriggerEffWeight_1l>0.02) + (TriggerEffWeight_1l<=0.02)', '(TriggerEffWeight_1l_d)/(TriggerEffWeight_1l)']
#-#-#
#-#-#nuisances['trigg'] = {
#-#-#    'name': 'CMS_eff_hwwtrigger_2017',
#-#-#    'kind': 'weight',
#-#-#    'type': 'shape',
#-#-#    'samples': dict((skey, trig_syst) for skey in mc)
#-#-#}
#-#-#
#-#-#prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']
#-#-#
#-#-#nuisances['prefire'] = {
#-#-#    'name': 'CMS_eff_prefiring_2017',
#-#-#    'kind': 'weight',
#-#-#    'type': 'shape',
#-#-#    'samples': dict((skey, prefire_syst) for skey in mc if 'DY' not in skey), #FIXME Add DY
#-#-#}
#-#-#
#-#-####### Electron Efficiency and energy scale
#-#-##
#-#-##nuisances['eff_e'] = {
#-#-##    'name': 'CMS_eff_e_2017',
#-#-##    'kind': 'weight',
#-#-##    'type': 'shape',
#-#-##    'samples': dict((skey, ['SFweightEleUp[0]', 'SFweightEleDown[0]']) for skey in mc)
#-#-##}
#-#-#
#-#-####### Muon Efficiency and energy scale
#-#-##
#-#-##nuisances['eff_m'] = {
#-#-##    'name': 'CMS_eff_m_2017',
#-#-##    'kind': 'weight',
#-#-##    'type': 'shape',
#-#-##    'samples': dict((skey, ['SFweightMuUp[0]', 'SFweightMuDown[0]']) for skey in mc)
#-#-##}
#-#-#
#-#-###### Pileup
#-#-##FIXME: correct?
#-#-#nuisances['PU'] = {
#-#-#    'name': 'CMS_PU_2017',
#-#-#    'kind': 'weight',
#-#-#    'type': 'shape',
#-#-#    'samples': {
#-#-#        'DY': ['0.993259983266*(puWeightUp/puWeight)', '0.997656381501*(puWeightDown/puWeight)'],
#-#-#    },
#-#-#    'AsLnN': '1',
#-#-#}
#-#-#
#-#-#variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]
#-#-#
#-#-#nuisances['QCDscale_V'] = {
#-#-#    'name': 'QCDscale_V',
#-#-#    'skipCMS': 1,
#-#-#    'kind': 'weight',
#-#-#    'type': 'shape',
#-#-#    'samples': {'DY': ['LHEScaleWeight[7]', 'LHEScaleWeight[0]']},
#-#-#    'AsLnN': '1'
#-#-#}
#-#-#
#-#-#
#-#-## Uncertainty on SR/CR ratio
#-#-#nuisances['CRSR_accept_SB'] = {
#-#-#    'name': 'hww_CRSR_accept_SB',
#-#-#    'type': 'lnN',
#-#-#    'samples': {'Wjets': '1.02'}, # TODO what value does this have to be?
#-#-#    #'samples': {'DY': '1.1'},
#-#-#    'cuts': [cut for cut in cuts if 'SB' in cut],
#-#-#    #'cutspost': (lambda self, cuts: [cut for cut in cuts if '_DY_' in cut and cut in self['cuts']]),
#-#-#    'cutspost': (lambda self, cuts: [cut for cut in cuts if 'SB' in cut]),
#-#-#    #'perRecoBin': True
#-#-#}
#-#-#
#-#-## Uncertainty on SR/CR ratio
#-#-#nuisances['CRSR_accept_top'] = {
#-#-#    'name': 'hww_CRSR_accept_top',
#-#-#    'type': 'lnN',
#-#-#    'samples': {'top': '1.01'},
#-#-#    #'samples': {'top': '1.05'},
#-#-#    'cuts': [cut for cut in cuts if 'TCR' in cut],
#-#-#    'cutspost': (lambda self, cuts: [cut for cut in cuts if 'TCR' in cut]),
#-#-#}
#-#-#
#-#-### ewk nlo W corr uncertainty
#-#-#nuisances['EWKnloW_Wjets'] = {
#-#-#    'name': 'EWKnloW_Wjets',
#-#-#    'kind'  : 'weight',
#-#-#    'type'  : 'shape',
#-#-#    'samples': {
#-#-#        #'Wjets': ['1./ewknloW', 'ewknloW'],
#-#-#        'Wjets': ['1./EWKnloW[0]', 'EWKnloW[0]'],
#-#-#    }
#-#-#}
#-#-#
#-#-#
#-#-#
#-#-#
#-#-#
#-#-#
#-#-### Use the following if you want to apply the automatic combine MC stat nuisances.
#-#-#nuisances['stat'] = {
#-#-#    'type': 'auto',
#-#-#    'maxPoiss': '10',
#-#-#    'includeSignal': '0',
#-#-#    #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
#-#-#    #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
#-#-#    'samples': {}
#-#-#}
#-#-#
#-#-## ##rate parameters
#-#-#cutdict = {
#-#-#    'Ele'   : [x for x in cuts if 'ElCh' in x],
#-#-#    'Muon'  : [x for x in cuts if 'MuCh' in x],
#-#-#    #'Wjets' : {x for x in cuts if 'SB' in x},
#-#-#    #'top'   : {x for x in cuts if 'TopCR' in x},
#-#-#    #'VBF'   : {x for x in cuts if 'VBF' in x},
#-#-#    #'ggF'   : {x for x in cuts if 'ggF' in x},
#-#-#    #'Untag' : {x for x in cuts if 'Untagged' in x},
#-#-#    #'Boost' : {x for x in cuts if 'Boosted' in x},
#-#-#    #'Resolv': {x for x in cuts if 'Resolved' in x}
#-#-#}
#-#-#
#-#-#
#-#-#leptons = ['Ele', 'Muon']
#-#-##categories = ['Boost', 'Resolv']
#-#-##subcategories = ['Untag', 'VBF']
#-#-#controlRegions = ['Wjets', 'top']
#-#-#
#-#-##for lepton in leptons:
#-#-##    for cat in categories:
#-#-##        for subcat in subcategories:
#-#-##            for region in controlRegions:
#-#-##                nuisances[region+'Norm'+lepton+cat+subcat] = {
#-#-##                    'name': 'CMS_hww_'+region+'Norm'+lepton+cat+subcat,
#-#-##                    'samples': {region: '1.00',},
#-#-##                    'type': 'rateParam',
#-#-##                    'cuts' : set.intersection(cutdict[lepton], cutdict[cat], cutdict[subcat])
#-#-##                }
#-#-#
#-#-#for lepton in leptons:
#-#-#    for region in controlRegions:
#-#-#        nuisances[region+'Norm'+lepton] = {
#-#-#            'name': 'CMS_hww_'+region+'Norm'+lepton,
#-#-#            'samples': {region: '1.00',},
#-#-#            'type': 'rateParam',
#-#-#            'cuts' : cutdict[lepton], 
#-#-#        }
#-#-#
#-#-###### FW E_T up down var Electron
#-#-#for syst in ['El', 'statEl', 'Mu', 'statMu']:
#-#-#    nuisances['fakeW_Et_'+syst] = {
#-#-#        'name': 'CMS_fakeW_Et_'+syst,
#-#-#        'kind': 'weight',
#-#-#        'type': 'shape',
#-#-#        'samples': {
#-#-#            'FAKE': ['FW_mu20_el35_'+syst+'Up[0]', 'FW_mu20_el35_'+syst+'Down[0]'],
#-#-#        },
#-#-#    }

for n in nuisances.values():
    n['skipCMS'] = 1

print(' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat')))
