# # nuisances
#
# nuisances = {}
#
# # name of samples here must match keys in samples.py
#
# # imported from samples.py:
# # samples, treeBaseDir, mcProduction, mcSteps
# # imported from cuts.py
# # cuts
# import copy
#
# from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight
#
# def nanoGetSampleFiles(inputDir, Sample):
#     return getSampleFiles(inputDir, Sample, False, 'nanoLatino_')
#
# try:
#     mc = [skey for skey in samples if skey not in ('FAKE', 'DATA')]
# except NameError:
#     mc = []
#     cuts = {}
#     nuisances = {}
#     def makeMCDirectory(x=''):
#         return ''
#
# from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
# HiggsXS = HiggsXSection()
#
#
# cutdict = {
#     'Ele'   : {x for x in cuts if 'ElCh' in x},
#     'Muon'  : {x for x in cuts if 'MuCh' in x},
#     'Wjets' : {x for x in cuts if 'SB' in x},
#     'top'   : {x for x in cuts if 'TopCR' in x},
#     'VBF'   : {x for x in cuts if 'VBF' in x},
#     'ggF'   : {x for x in cuts if 'GGF' in x},
#     'Untag' : {x for x in cuts if 'Untagged' in x},
#     'Boost' : {x for x in cuts if 'Boosted' in x},
#     'Resolv': {x for x in cuts if 'Resolved' in x},
#     'HM'    : {x for x in cuts if 'HM' in x}
# }
#
#
# ################################ EXPERIMENTAL UNCERTAINTIES  #################################
#
# #### Luminosity
#
# nuisances['lumi_Uncorrelated'] = {
#     'name': 'lumi_13TeV_2017',
#     'type': 'lnN',
#     'samples': dict((skey, '1.02') for skey in mc if skey not in ['Wjets', 'top'])
# }
# nuisances['lumi_XY'] = {
#     'name': 'lumi_13TeV_XY',
#     'type': 'lnN',
#     'samples': dict((skey, '1.008') for skey in mc if skey not in ['Wjets', 'top'])
# }
# nuisances['lumi_LS'] = {
#     'name': 'lumi_13TeV_LS',
#     'type': 'lnN',
#     'samples': dict((skey, '1.003') for skey in mc if skey not in ['Wjets', 'top'])
# }
# nuisances['lumi_BBD'] = {
#     'name': 'lumi_13TeV_BBD',
#     'type': 'lnN',
#     'samples': dict((skey, '1.004') for skey in mc if skey not in ['Wjets', 'top'])
# }
# nuisances['lumi_DB'] = {
#     'name': 'lumi_13TeV_DB',
#     'type': 'lnN',
#     'samples': dict((skey, '1.005') for skey in mc if skey not in ['Wjets', 'top'])
# }
# nuisances['lumi_BCC'] = {
#     'name': 'lumi_13TeV_BCC',
#     'type': 'lnN',
#     'samples': dict((skey, '1.003') for skey in mc if skey not in ['Wjets', 'top'])
# }
# nuisances['lumi_GS'] = {
#     'name': 'lumi_13TeV_GS',
#     'type': 'lnN',
#     'samples': dict((skey, '1.001') for skey in mc if skey not in ['Wjets', 'top'])
# }
#
#
#
#
# ##### B-tagger
#
# for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
#     btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]
#
#     name = 'CMS_btag_%s' % shift
#     if 'stats' in shift:
#         name += '_2017'
#
#     nuisances['btag_%s' % shift] = {
#         'name': name,
#         'kind': 'weight',
#         'type': 'shape',
#         'samples': dict((skey, btag_syst) for skey in mc),
#     }
#
#
#
# ##### WtagSF
#
# nuisances['wtag'] = {
#     'name': 'CMS_wtag_eff',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, ['SFWtagUp', 'SFWtagDown']) for skey in mc),
#     'cuts': [cutdict['Resolv'], cutdict['Boost']]
# }
#
# nuisances['wtag_HM'] = {
#     'name':  'CMS_wtag_eff',
#     'type': 'lnN',
#     'samples': dict((skey, '1.1') for skey in mc),
#     'cuts': [cutdict['HM']]
# }
#
#
#
#
# ##### Trigger Efficiency
#
# trig_syst = ['((TriggerEffWeight_1l_u)/(TriggerEffWeight_1l))*(TriggerEffWeight_1l>0.02) + (TriggerEffWeight_1l<=0.02)', '(TriggerEffWeight_1l_d)/(TriggerEffWeight_1l)*(TriggerEffWeight_1l>0.02) + (TriggerEffWeight_1l<=0.02)']
#
# nuisances['trigg'] = {
#     'name': 'CMS_eff_hwwtrigger_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, trig_syst) for skey in mc)
# }
#
# prefire_syst = ['PrefireWeight_Up/PrefireWeight', 'PrefireWeight_Down/PrefireWeight']
#
# nuisances['prefire'] = {
#     'name': 'CMS_eff_prefiring_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, prefire_syst) for skey in mc),
# }
#
# ##### Electron Efficiency and energy scale
#
# nuisances['eff_e'] = {
#     'name': 'CMS_eff_e_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, ['SFweightEleUp', 'SFweightEleDown']) for skey in mc)
# }
#
# nuisances['electronpt'] = {
#     'name' : 'CMS_scale_e_2017',
#     'kind' : 'suffix',
#     'type' : 'shape',
#     'mapUp'  : 'ElepTup',
#     'mapDown': 'ElepTdo',
#     'samples': dict((skey, ['1', '1']) for skey in mc),
#     'folderUp'  : makeMCDirectory('ElepTup'),
#     'folderDown': makeMCDirectory('ElepTdo'),
#     'AsLnN': '1'
# }
#
# ##### Muon Efficiency and energy scale
#
# nuisances['eff_m'] = {
#     'name': 'CMS_eff_m_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, ['SFweightMuUp', 'SFweightMuDown']) for skey in mc)
# }
#
# nuisances['muonpt'] = {
#     'name' : 'CMS_scale_m_2017',
#     'kind' : 'suffix',
#     'type' : 'shape',
#     'mapUp'  : 'MupTup',
#     'mapDown': 'MupTdo',
#     'samples': dict((skey, ['1', '1']) for skey in mc),
#     'folderUp'  : makeMCDirectory('MupTup'),
#     'folderDown': makeMCDirectory('MupTdo'),
#     'AsLnN': '1'
# }
#
#
# ##### Jet energy scale
# jes_systs = ['JESAbsolute','JESAbsolute_2017','JESBBEC1','JESBBEC1_2017','JESEC2','JESEC2_2017','JESFlavorQCD','JESHF','JESHF_2017','JESRelativeBal','JESRelativeSample_2017']
#
# for js in jes_systs:
#   nuisances[js] = {
#       'name' : 'CMS_scale_'+js,
#       'kind' : 'suffix',
#       'type' : 'shape',
#       'mapUp'  : js+'up',
#       'mapDown': js+'do',
#       'samples': dict((skey, ['1', '1']) for skey in mc),
#       'folderUp'  : makeMCDirectory('JESup'),
#       'folderDown': makeMCDirectory('JESdo'),
#       'AsLnN': '1'
#   }
#
# ##### MET energy scale
#
# nuisances['met'] = {
#     'name' : 'CMS_scale_met_2017',
#     'kind' : 'suffix',
#     'type' : 'shape',
#     'mapUp'  : 'METup',
#     'mapDown': 'METdo',
#     'samples': dict((skey, ['1', '1']) for skey in mc),
#     'folderUp' : makeMCDirectory('METup_suffix'),
#     'folderDown': makeMCDirectory('METdo_suffix'),
#     'AsLnN': '1'
# }
#
# ##### Pileup
#
# nuisances['PU'] = {
#     'name': 'CMS_PU_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
        # 'Wjets': ['0.999633420476*(puWeightUp/puWeight)', '1.0004806047*(puWeightDown/puWeight)'],
#         'DY': ['0.993259983266*(puWeightUp/puWeight)', '0.997656381501*(puWeightDown/puWeight)'],
#         'top': ['1.00331969187*(puWeightUp/puWeight)', '0.999199609528*(puWeightDown/puWeight)'],
#         'WW': ['1.0033022059*(puWeightUp/puWeight)', '0.997085330608*(puWeightDown/puWeight)'],
#         'ggH_hww': ['1.0036768006*(puWeightUp/puWeight)', '0.995996570285*(puWeightDown/puWeight)'],
#         'qqH_hww': ['1.00374694528*(puWeightUp/puWeight)', '0.995878596852*(puWeightDown/puWeight)'],
#     },
#     'AsLnN': '1',
# }
# handle = open("../../HighMass/PUunc_Semi.py",'r')
# exec(handle)
# handle.close()
#
# for m in massggh:
#   PUup = PUunc['GGF'+m]['Up']
#   PUdn = PUunc['GGF'+m]['Down']
#   PUstring = [str(PUup)+'*(puWeightUp/puWeight)', str(PUdn)+'*(puWeightDown/puWeight)']
#   nuisances['PU']['samples'].update({'GGH_'+m+model_name: PUstring})
#   nuisances['PU']['samples'].update({'GGHINT_'+m+model_name: PUstring})
# for m in massvbf:
#   PUup = PUunc['VBF'+m]['Up']
#   PUdn = PUunc['VBF'+m]['Down']
#   PUstring = [str(PUup)+'*(puWeightUp/puWeight)', str(PUdn)+'*(puWeightDown/puWeight)']
#   nuisances['PU']['samples'].update({'QQH_'+m+model_name: PUstring})
#   nuisances['PU']['samples'].update({'QQHINT_'+m+model_name: PUstring})
#
#
#
#
# #
# ##### PS and UE
# high mass PS from dileptonic
# handle = open("../../HighMass/PSunc_Semi.py",'r')
# exec(handle)
# handle.close()
#
# nuisances['PS_ISR']  = {
#     'name': 'PS_ISR',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, ['PSWeight[2]', 'PSWeight[0]']) for skey in mc if skey not in ["qqWWqq", "WW2J", "WWewk", "Vg", "VgS"]), #PSWeights still buggy in v7?
# }
# nuisances['PS_ISR']['samples'].update({'qqWWqq': ['1.031198192*(nCleanGenJet==0) + 1.029396447*(nCleanGenJet==1) + 1.008244787*(nCleanGenJet==2) + 0.958054424*(nCleanGenJet>=3)', '0.962541517*(nCleanGenJet==0) + 0.964149647*(nCleanGenJet==1) + 0.988864503*(nCleanGenJet==2) + 1.052819668*(nCleanGenJet>=3)']}) # From WpWmJJ_QCD_noTop_ext1
# nuisances['PS_ISR']['samples'].update({'WW2J': ['1.031198192*(nCleanGenJet==0) + 1.029396447*(nCleanGenJet==1) + 1.008244787*(nCleanGenJet==2) + 0.958054424*(nCleanGenJet>=3)', '0.962541517*(nCleanGenJet==0) + 0.964149647*(nCleanGenJet==1) + 0.988864503*(nCleanGenJet==2) + 1.052819668*(nCleanGenJet>=3)']}) # From WpWmJJ_QCD_noTop_ext1
# nuisances['PS_ISR']['samples'].update({'WWewk': ['1.000046239608802*(nCleanGenJet==0) + 1.0133437345113673*(nCleanGenJet==1) + 1.0144565712441801*(nCleanGenJet==2) + 0.9633224709814209*(nCleanGenJet>=3)', '0.9972924400977996*(nCleanGenJet==0) + 0.9796025428294364*(nCleanGenJet==1) + 0.9785038122896787*(nCleanGenJet==2) + 1.043894692205412*(nCleanGenJet>=3)']}) # From WpWmJJ_EWK_noTop
# nuisances['PS_ISR']['samples'].update({'Vg': ['1.0039055667905552*(nCleanGenJet==0) + 1.0059752448648116*(nCleanGenJet==1) + 0.9926179336643974*(nCleanGenJet==2) + 0.9524471129275528*(nCleanGenJet>=3)', '0.9949355050284215*(nCleanGenJet==0) + 0.9926938538727195*(nCleanGenJet==1) + 1.0093671414600691*(nCleanGenJet==2) + 1.060578524662196*(nCleanGenJet>=3)']}) # From Zg
# nuisances['PS_ISR']['samples'].update({'VgS': ['1.0000536116408023*(nCleanGenJet==0) + 1.0100100693580492*(nCleanGenJet==1) + 0.959068359375*(nCleanGenJet==2) + 0.9117049260469496*(nCleanGenJet>=3)', '0.9999367833485968*(nCleanGenJet==0) + 0.9873682892005163*(nCleanGenJet==1) + 1.0492717737268518*(nCleanGenJet==2) + 1.1176958835210322*(nCleanGenJet>=3)']}) # From WZTo3LNu_mllmin01
#
# for m in massggh:
#   PSup = PSunc['GGF'+m]['ISRup']
#   PSdn = PSunc['GGF'+m]['ISRdn']
#   PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
#   nuisances['PS_ISR']['samples'].update({'GGH_'+m+model_name: PSstring})
#   nuisances['PS_ISR']['samples'].update({'GGHINT_'+m+model_name: PSstring}) # Here and in the following: Don't put nuisances here for SBI; they're added automatically in a later step!
# for m in massvbf:
#   PSup = PSunc['VBF'+m]['ISRup']
#   PSdn = PSunc['VBF'+m]['ISRdn']
#   PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
#   nuisances['PS_ISR']['samples'].update({'QQH_'+m+model_name: PSstring})
#   nuisances['PS_ISR']['samples'].update({'QQHINT_'+m+model_name: PSstring})
#
#
#
# nuisances['PS_FSR']  = {
#     'name': 'PS_FSR',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': dict((skey, ['PSWeight[3]', 'PSWeight[1]']) for skey in mc if skey not in ["qqWWqq", "WW2J", "WWewk", "Vg", "VgS"]), #PSWeights still buggy in v7?
# }
# nuisances['PS_FSR']['samples'].update({'qqWWqq': ['0.976538004*(nCleanGenJet==0) + 0.993524816*(nCleanGenJet==1) + 1.006678783*(nCleanGenJet==2) + 1.009760965*(nCleanGenJet>=3)', '1.035661107*(nCleanGenJet==0) + 1.007585153*(nCleanGenJet==1) + 0.989764669*(nCleanGenJet==2) + 0.98276492*(nCleanGenJet>=3)']})
# nuisances['PS_FSR']['samples'].update({'WW2J': ['0.976538004*(nCleanGenJet==0) + 0.993524816*(nCleanGenJet==1) + 1.006678783*(nCleanGenJet==2) + 1.009760965*(nCleanGenJet>=3)', '1.035661107*(nCleanGenJet==0) + 1.007585153*(nCleanGenJet==1) + 0.989764669*(nCleanGenJet==2) + 0.98276492*(nCleanGenJet>=3)']})
# nuisances['PS_FSR']['samples'].update({'WWewk': ['0.9919173789731052*(nCleanGenJet==0) + 0.994273375713824*(nCleanGenJet==1) + 1.0009783801226202*(nCleanGenJet==2) + 1.0046943184676753*(nCleanGenJet>=3)', '1.0081780733496333*(nCleanGenJet==0) + 1.0052172826204072*(nCleanGenJet==1) + 0.9984786981975752*(nCleanGenJet==2) + 0.9881601609947174*(nCleanGenJet>=3)']})
# nuisances['PS_FSR']['samples'].update({'Vg': ['0.9981385958679493*(nCleanGenJet==0) + 1.000785005516636*(nCleanGenJet==1) + 1.0072453356787239*(nCleanGenJet==2) + 1.016190506425758*(nCleanGenJet>=3)', '1.0032725732400525*(nCleanGenJet==0) + 1.0019489593245505*(nCleanGenJet==1) + 0.986995604774182*(nCleanGenJet==2) + 0.9629840158493718*(nCleanGenJet>=3)']})
# nuisances['PS_FSR']['samples'].update({'VgS': ['0.9976593177227735*(nCleanGenJet==0) + 1.0016125187585532*(nCleanGenJet==1) + 1.0049344618055556*(nCleanGenJet==2) + 1.0195631514301164*(nCleanGenJet>=3)', '1.0026951855766457*(nCleanGenJet==0) + 1.0008132148661049*(nCleanGenJet==1) + 1.003949291087963*(nCleanGenJet==2) + 0.9708160910230832*(nCleanGenJet>=3)']})
#
# for m in massggh:
#   PSup = PSunc['GGF'+m]['FSRup']
#   PSdn = PSunc['GGF'+m]['FSRdn']
#   PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
#   nuisances['PS_FSR']['samples'].update({'GGH_'+m+model_name: PSstring})
#   nuisances['PS_FSR']['samples'].update({'GGHINT_'+m+model_name: PSstring})
# for m in massvbf:
#   PSup = PSunc['VBF'+m]['FSRup']
#   PSdn = PSunc['VBF'+m]['FSRdn']
#   PSstring = [str(PSup['0j'])+'*(nCleanGenJet==0) + '+str(PSup['1j'])+'*(nCleanGenJet==1) + '+str(PSup['2j'])+'*(nCleanGenJet==2) + '+str(PSup['3j'])+'*(nCleanGenJet>=3)', str(PSdn['0j'])+'*(nCleanGenJet==0) + '+str(PSdn['1j'])+'*(nCleanGenJet==1) + '+str(PSdn['2j'])+'*(nCleanGenJet==2) + '+str(PSdn['3j'])+'*(nCleanGenJet>=3)']
#   nuisances['PS_FSR']['samples'].update({'QQH_'+m+model_name: PSstring})
#   nuisances['PS_FSR']['samples'].update({'QQHINT_'+m+model_name: PSstring})
#
# # An overall 1.5% UE uncertainty will cover all the UEup/UEdo variations
# # And we don't observe any dependency of UE variations on njet
# nuisances['UE']  = {
#                 'name'  : 'UE_CP5',
#                 'skipCMS' : 1,
#                 'type': 'lnN',
#                 'samples': dict((skey, '1.015') for skey in mc),
# }
#
#
#
# # ####### Generic "cross section uncertainties"
#
# apply_on = {
#     'top': [
#         '(topGenPtOTF * antitopGenPtOTF <= 0.) * 1.0816 + (topGenPtOTF * antitopGenPtOTF > 0.)',
#         '(topGenPtOTF * antitopGenPtOTF <= 0.) * 0.9184 + (topGenPtOTF * antitopGenPtOTF > 0.)'
#     ]
# }
#
# nuisances['singleTopToTTbar'] = {
#     'name': 'singleTopToTTbar',
#     'skipCMS': 1,
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': apply_on
# }
#
#
# ### Top pT reweighting uncertainty -> not needed if the DATA/MC agreement is within the uncertainties after reweighting
# # currently replaced by QCD scale
# # nuisances['TopPtRew'] = {
# #     'name': 'CMS_topPtRew',   # Theory uncertainty
# #     'kind': 'weight',
# #     'type': 'shape',
# #     'samples': {'top': ["Top_pTrw*Top_pTrw", "1."]},
# #     'symmetrize': True
# # }
#
#
# nuisances['VgStar'] = {
#     'name': 'CMS_hww_VgStarScale',
#     'type': 'lnN',
#     'samples': {
#         'VgS_L': '1.25'
#     }
# }
#
# nuisances['VZ'] = {
#     'name': 'CMS_hww_VZScale',
#     'type': 'lnN',
#     'samples': {
#         'VgS_H': '1.16'
#     }
# }
#
#
# ###### pdf uncertainties
#
# valuesggh  = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH', '125.09','pdf','sm')
# valuesggzh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','pdf','sm')
# valuesbbh  = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','bbH', '125.09','pdf','sm')
#
# nuisances['pdf_Higgs_gg'] = {
#     'name': 'pdf_Higgs_gg',
#     'samples': {
#         'ggH_hww' : valuesggh,
#         'ggH_htt' : valuesggh,
#         'ggZH_hww': valuesggzh,
#         'bbH_hww' : valuesbbh
#     },
#     'type': 'lnN',
# }
# for m in massggh:
#     values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'pdf','bsm')
#     nuisances['pdf_Higgs_gg']['samples'].update({'GGH_'+m+model_name: values})
#     nuisances['pdf_Higgs_gg']['samples'].update({'GGHINT_'+m+model_name: values})
#
#
#
# valuesqqh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','pdf','sm')
# valueswh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','pdf','sm')
# valueszh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','pdf','sm')
#
# nuisances['pdf_Higgs_qqbar'] = {
#     'name': 'pdf_Higgs_qqbar',
#     'type': 'lnN',
#     'samples': {
#         'qqH_hww': valuesqqh,
#         'qqH_htt': valuesqqh,
#         'WH_hww': valueswh,
#         'WH_htt': valueswh,
#         'ZH_hww': valueszh,
#         'ZH_htt': valueszh
#     },
# }
# for m in massvbf:
#     values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'bsm')
#     nuisances['pdf_Higgs_qqbar']['samples'].update({'QQH_'+m+model_name: values})
#     nuisances['pdf_Higgs_qqbar']['samples'].update({'QQHINT_'+m+model_name: values})
#
#
# # values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','pdf','sm')
# # nuisances['pdf_Higgs_ttH'] = {
# #     'name': 'pdf_Higgs_ttH',
# #     'type': 'lnN',
# #     'samples': {
# #         'ttH_hww': values
# #     },
# # }
#
#
# # Top, W+jets: Taken into account in rateParam, since these are all lnN anyway
# # PDF for background: https://twiki.cern.ch/twiki/bin/view/CMS/StandardModelCrossSectionsat13TeV and https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns
#
# # W+W-: 0.0589 / 1.2804 = 0.046001
# # ZW+: 0.0064 / 0.1427 = 0.0448493
# # ZW-: 0.0039 / 0.0921 = 0.0423453
# # ZZ:  0.0027 / 0.0719 = 0.0375522
# # DY: 14.78 / 6077.22 = 0.0024320
# nuisances['pdf_gg']  = {
#     'name'  : 'pdf_gg',
#     'type'  : 'lnN',
#     'samples'  : {
#         'ggWW'    : '1.05',
#     },
# }
#
# nuisances['pdf_qqbar']  = {
#     'name'  : 'pdf_qqbar',
#     'type'  : 'lnN',
#     'samples'  : {
#         'Vg'      : '1.04',
#         'VZ'      : '1.04',
#         'VgS'     : '1.04',
#         'qqWWqq'  : '1.05',
#         'DY'      : '1.002',
#     },
# }
#
#
# nuisances['pdf_Higgs_gg_ACCEPT'] = {
#     'name': 'pdf_Higgs_gg_ACCEPT',
#     'samples': {
#         'ggH_hww': '1.006',
#         'ggH_htt': '1.006',
#         # 'ggZH_hww': '1.006',
#         # 'bbH_hww': '1.006'
#     },
#     'type': 'lnN',
# }
# # FIXME: values from dileptonic
# for m in massggh:
#   pdfgg_weight = 1.0 + (-4.10343+1.19015e-03*int(m)-9.68156e-08*int(m)*int(m)+6.90171e+03/(int(m)+8.71935e+02)-8.94415e+05/((int(m)+4.72259e+02)*(int(m)+4.72259e+02)))/100.0
#   nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGH_'+m+model_name: str(pdfgg_weight)})
#   nuisances['pdf_Higgs_gg_ACCEPT']['samples'].update({'GGHINT_'+m+model_name: str(pdfgg_weight)})
#
#
#
# nuisances['pdf_Higgs_qqbar_ACCEPT'] = {
#     'name': 'pdf_Higgs_qqbar_ACCEPT',
#     'type': 'lnN',
#     'samples': {
#         'qqH_hww': '1.002',
#         'qqH_htt': '1.002',
#         'WH_hww': '1.003',
#         'WH_htt': '1.003',
#         'ZH_hww': '1.002',
#         'ZH_htt': '1.002',
#     },
# }
# # FIXME: values from dileptonic
# for m in massvbf:
#   pdfqq_weight = 1.0 + (1.46296e-01)/100.0
#   nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQH_'+m+model_name: str(pdfqq_weight)})
#   nuisances['pdf_Higgs_qqbar_ACCEPT']['samples'].update({'QQHINT_'+m+model_name: str(pdfqq_weight)})
#
#
#
#
# nuisances['pdf_gg_ACCEPT'] = {
#     'name': 'pdf_gg_ACCEPT',
#     'samples': {
#         'ggWW': '1.006',
#     },
#     'type': 'lnN',
# }
#
# nuisances['pdf_qqbar_ACCEPT'] = {
#     'name': 'pdf_qqbar_ACCEPT',
#     'type': 'lnN',
#     'samples': {
#         'qqWWqq': '1.001'
#     },
# }
#
#
#
#
# # Theory uncertainty for ggH
# #
# #
# #   THU_ggH_Mu, THU_ggH_Res, THU_ggH_Mig01, THU_ggH_Mig12, THU_ggH_VBF2j, THU_ggH_VBF3j, THU_ggH_PT60, THU_ggH_PT120, THU_ggH_qmtop
# #
# #   see https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SignalModelingTools
#
# # thus = [
# #     ('THU_ggH_Mu', 'ggH_mu'),
# #     ('THU_ggH_Res', 'ggH_res'),
# #     ('THU_ggH_Mig01', 'ggH_mig01'),
# #     ('THU_ggH_Mig12', 'ggH_mig12'),
# #     ('THU_ggH_VBF2j', 'ggH_VBF2j'),
# #     ('THU_ggH_VBF3j', 'ggH_VBF3j'),
# #     ('THU_ggH_PT60', 'ggH_pT60'),
# #     ('THU_ggH_PT120', 'ggH_pT120'),
# #     ('THU_ggH_qmtop', 'ggH_qmtop')
# # ]
# #
# # for name, vname in thus:
# #     updown = [vname, '2.-%s' % vname]
# #
# #     nuisances[name] = {
# #         'name': name,
# #         'skipCMS': 1,
# #         'kind': 'weight',
# #         'type': 'shape',
# #         'samples': {
# #           'ggH_hww': updown,
# #           #'ggH_htt': updown
# #         }
# #     }
#
#
#
# ##### Renormalization & factorization scales
#
# ## This should work for samples with either 8 or 9 LHE scale weights (Length$(LHEScaleWeight) == 8 or 9)
# variations = ['LHEScaleWeight[0]', 'LHEScaleWeight[1]', 'LHEScaleWeight[3]', 'LHEScaleWeight[Length$(LHEScaleWeight)-4]', 'LHEScaleWeight[Length$(LHEScaleWeight)-2]', 'LHEScaleWeight[Length$(LHEScaleWeight)-1]']
#
# nuisances['QCDscale_V'] = {
#     'name': 'QCDscale_V',
#     'kind': 'weight_envelope',
#     'type': 'shape',
#     'samples': {
#         'DY': variations
#     },
# }
#
#
# # Variations for all other samples are consistent.
# variations = ['LHEScaleWeight[%d]' % i for i in [0, 1, 3, 5, 7, 8]]
#
# nuisances['QCDscale_WWJJ']  = {
#     'name'  : 'QCDscale_WWJJ',
#     'kind'  : 'weight_envelope',
#     'type'  : 'shape',
#     'samples'  : {
#        'qqWWqq' : variations,
#        'WW2J' : variations,
#     }
# }
#
# # FIXME: LHEScaleWeight missing
# nuisances['QCDscale_VV'] = {
#     'name': 'QCDscale_VV',
#     'kind': 'weight_envelope',
#     'type': 'shape',
#     'samples': {
#         'Vg': variations,
#         #'VZ': variations, #FIXME not all VZ have LHEScaleWeight
#         'VgS': variations
#     }
# }
#
# nuisances['QCDscale_ttbar']  = {
#     'name' : 'QCDscale_ttbar',
#     'kind' : 'weight_envelope',
#     'type' : 'shape',
#     'samples'  : {
#         'top' : variations,
#     }
# }
#
# nuisances['QCDscale_WWewk']  = {
#     'name'  : 'QCDscale_VV',
#     'type'  : 'lnN',
#     'samples'  : {
#         'WWewk' : '1.11',
#     },
# }
#
# nuisances['QCDscale_ggVV'] = {
#     'name': 'QCDscale_ggVV',
#     'type': 'lnN',
#     'samples': {
#         'ggWW': '1.15',
#     },
# }
#
#
#
#
# #### QCD scale uncertainties for Higgs
# values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH','125.09','scale','sm')
# nuisances['QCDscale_ggH'] = {
#     'name': 'QCDscale_ggH',
#     'samples': {
#         'ggH_hww': values,
#         'ggH_htt': values
#     },
#     'type': 'lnN'
# }
# for m in massggh:
#     values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggH',int(m),'scale','bsm')
#     nuisances['QCDscale_ggH']['samples'].update({
#         'GGH_'+m+model_name: values
#     })
#     nuisances['QCDscale_ggH']['samples'].update({
#         'GGHINT_'+m+model_name: values
#     })
#
#
# values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH','125.09','scale','sm')
# nuisances['QCDscale_qqH'] = {
#     'name': 'QCDscale_qqH',
#     'samples': {
#         'qqH_hww': values,
#         'qqH_htt': values
#     },
#     'type': 'lnN'
# }
# for m in massvbf:
#     values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','vbfH',int(m),'scale','bsm')
#     nuisances['QCDscale_qqH']['samples'].update({
#         'QQH_'+m+model_name: values
#     })
#     nuisances['QCDscale_qqH']['samples'].update({
#         'QQHINT_'+m+model_name: values
#     })
#
#
#
# valueswh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','WH','125.09','scale','sm')
# valueszh = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ZH','125.09','scale','sm')
#
# nuisances['QCDscale_VH'] = {
#     'name': 'QCDscale_VH',
#     'samples': {
#         'WH_hww': valueswh,
#         'WH_htt': valueswh,
#         'ZH_hww': valueszh,
#         'ZH_htt': valueszh
#     },
#     'type': 'lnN',
# }
#
# values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ggZH','125.09','scale','sm')
#
# # nuisances['QCDscale_ggZH'] = {
# #     'name': 'QCDscale_ggZH',
# #     'samples': {
# #         'ggZH_hww': values
# #     },
# #     'type': 'lnN',
# # }
#
# # values = HiggsXS.GetHiggsProdXSNP('YR4','13TeV','ttH','125.09','scale','sm')
# #
# # nuisances['QCDscale_ttH'] = {
# #     'name': 'QCDscale_ttH',
# #     'samples': {
# #         'ttH_hww': values
# #     },
# #     'type': 'lnN',
# # }
#
#
# nuisances['QCDscale_ggH_ACCEPT'] = {
#     'name': 'QCDscale_ggH_ACCEPT',
#     'type': 'lnN',
#     'samples': {
#         'ggH_hww': '1.012',
#         'ggH_htt': '1.012',
#         'ggZH_hww': '1.012',
#         'ggWW': '1.012',
#     },
# }
# # FIXME: this is fit from dileptonic
# for m in massggh:
#     scalegg_weight = 1.0 + (-5.53622e-02+6.73342e-05*int(m)+2.55597e+01/(int(m)-1.10009e+02))/100.0
#     nuisances['QCDscale_ggH_ACCEPT']['samples'].update({
#         'GGH_'+m+model_name: str(scalegg_weight)})
#     nuisances['QCDscale_ggH_ACCEPT']['samples'].update({
#         'GGHINT_'+m+model_name: str(scalegg_weight)})
#
#
# nuisances['QCDscale_qqH_ACCEPT'] = {
#     'name': 'QCDscale_qqH_ACCEPT',
#     'type': 'lnN',
#     'samples': {
#         'qqH_hww': '1.003',
#         'qqH_htt': '1.003',
#         'qqWWqq' : '1.003',
#     },
# }
# # FIXME: this is fit from dileptonic
# for m in massvbf:
#     scaleqq_weight = 1.0 + (4.54513e-02+3.01227e-06*int(m)+4.72447/(int(m)-9.97821e+01))/100.0
#     nuisances['QCDscale_qqH_ACCEPT']['samples'].update({
#         'QQH_'+m+model_name: str(scaleqq_weight)})
#     nuisances['QCDscale_qqH_ACCEPT']['samples'].update({
#         'QQHINT_'+m+model_name: str(scaleqq_weight)})
#
#
# nuisances['QCDscale_VH_ACCEPT']  = {
#     'name'  : 'QCDscale_VH_ACCEPT',
#     'type'  : 'lnN',
#     'samples'  : {
#         'WH_htt': '1.010',
#         'WH_hww': '1.010',
#         'ZH_hww': '1.015',
#         'ZH_htt': '1.015',
#     },
# }
#
#
#
# #### FAKES
# eleWP = 'mvaFall17V1Iso_WP90'
# muWP  = 'cut_Tight_HWWW'
# fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_1l_mu25_ele35'
#
# nuisances['fake_syst'] = {
#     'name': 'CMS_fake_syst',
#     'type': 'lnN',
#     'samples': {
#         'FAKE': '1.3'
#     },
# }
# nuisances['fake_ele'] = {
#     'name': 'CMS_fake_e_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'FAKE': [fakeW+'_ElUp', fakeW+'_ElDown'],
#     }
# }
# nuisances['fake_ele_stat'] = {
#     'name': 'CMS_fake_stat_e_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'FAKE': [fakeW+'_statElUp', fakeW+'_statElDown']
#     }
# }
# nuisances['fake_mu'] = {
#     'name': 'CMS_fake_m_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'FAKE': [fakeW+'_MuUp', fakeW+'_MuDown'],
#     }
# }
# nuisances['fake_mu_stat'] = {
#     'name': 'CMS_fake_stat_m_2017',
#     'kind': 'weight',
#     'type': 'shape',
#     'samples': {
#         'FAKE': [fakeW+'_statMuUp', fakeW+'_statMuDown'],
#     }
# }
#
#
# # Uncertainty on SR/CR ratio
# nuisances['CRSR_accept_ResolvSB'] = {
#     'name': 'CMS_hww_CRSR_accept_SB',
#     'type': 'lnN',
#     'samples': {'Wjets': '1.009'},
#     'cuts': [cut for cut in cuts if 'ResolvedSB' in cut],
#     'cutspost': (lambda self, cuts: [cut for cut in cuts if 'SB' in cut]),
# }
# nuisances['CRSR_accept_BoostSB'] = {
#     'name': 'CMS_hww_CRSR_accept_SB',
#     'type': 'lnN',
#     'samples': {'Wjets': '1.022'},
#     'cuts': [cut for cut in cuts if 'BoostedSB' in cut],
#     'cutspost': (lambda self, cuts: [cut for cut in cuts if 'SB' in cut]),
# }
#
# # Uncertainty on SR/CR ratio
# nuisances['CRSR_accept_top'] = {
#     'name': 'CMS_hww_CRSR_accept_top',
#     'type': 'lnN',
#     'samples': {'top': '1.01'},
#     'cuts': [cut for cut in cuts if 'TopCR' in cut],
#     'cutspost': (lambda self, cuts: [cut for cut in cuts if 'TopCR' in cut]),
# }
#
#
#
#
#
# # # ##rate parameters
# # leptons = ['Ele', 'Muon']
# # categories = ['Boost', 'Resolv']
# # subcategories = ['Untag', 'VBF']
# # controlRegions = ['Wjets', 'top']
# #
# # for lepton in leptons:
# #     for cat in categories:
# #         for subcat in subcategories:
# #             for region in controlRegions:
# #                 nuisances[region+'Norm'+lepton+cat+subcat] = {
# #                     'name': 'CMS_hww_'+region+'Norm'+lepton+cat+subcat,
# #                     'samples': {region: '1.00',},
# #                     'type': 'rateParam',
# #                     'cuts' : set.intersection(cutdict[lepton], cutdict[cat], cutdict[subcat])
# #                 }
#
#
#
#
#
#
# # Replace lnN nuisances (from QCD and PDF only -> Other lnN nuisance are consistent across SBI) for samples contributing to SBI with shape:
# oldnuisances = copy.deepcopy(nuisances)
# for nuis in oldnuisances:
#   if nuisances[nuis]['type'] == "lnN" and (("QCD" in nuis) or ("pdf" in nuis)):
#     for samp in oldnuisances[nuis]['samples']:
#       if ("GGH" in samp) or ("QQH" in samp) or (samp in ["ggWW", "ggH_hww", "qqWWqq", "qqH_hww"]):
#         lnNval = nuisances[nuis]['samples'][samp]
#         if "/" in lnNval:
#           lnNvalUp = lnNval.split('/')[0]
#           lnNvalDn = lnNval.split('/')[1]
#         else:
#           lnNvalUp = lnNval
#           lnNvalDn = str(1.0/float(lnNval))
#         if nuis+'_shape' in nuisances:
#           nuisances[nuis+'_shape']['samples'].update({samp: [lnNvalUp, lnNvalDn]})
#         else:
#           nuisances[nuis+'_shape'] = {
#                 'name'  : nuisances[nuis]['name'],
#                 'kind'  : 'weight',
#                 'type'  : 'shape',
#                 'samples' : { samp : [lnNvalUp, lnNvalDn] },
#                 }
#         del nuisances[nuis]['samples'][samp]
#         if nuisances[nuis]['samples'] == {}: del nuisances[nuis]
#
# # Now create SBI nuisances
# nuisancename = {}
# for nuis in nuisances:
#   if nuisances[nuis]['type'] == "shape":
#     if nuisances[nuis]['name'] not in nuisancename: nuisancename[nuisances[nuis]['name']] = []
#     nuisancename[nuisances[nuis]['name']].append(nuis)
# for nuisname in nuisancename:
#   allsamples = {}
#   for nuis in nuisancename[nuisname]:
#     allsamples.update(nuisances[nuis]['samples']) # Sometimes have 2 dict keys doing shapes for the same nuisance for different samples; combine them here
#   if [samp for samp in allsamples if 'SBI' in samp] == []:
#     dogg=0
#     doqq=0
#     for samp in allsamples:
#       if ("GGH" in samp) or (samp in ["ggWW", "ggH_hww"]): dogg=1
#       elif ("QQH" in samp) or (samp in ["qqWWqq", "qqH_hww"]): doqq=1
#     if dogg==1:
#         SM_up = '1.0'
#         SM_dn = '1.0'
#         WW_up = '1.0'
#         WW_dn = '1.0'
#         sig_up = '1.0'
#         sig_dn = '1.0'
#         for nuis in nuisancename[nuisname]:
#           if "ggH_hww" in nuisances[nuis]['samples']: SM_up = nuisances[nuis]['samples']["ggH_hww"][0]
#           if "ggH_hww" in nuisances[nuis]['samples']: SM_dn = nuisances[nuis]['samples']["ggH_hww"][1]
#           if "ggWW" in nuisances[nuis]['samples']: WW_up = nuisances[nuis]['samples']["ggWW"][0]
#           if "ggWW" in nuisances[nuis]['samples']: WW_dn = nuisances[nuis]['samples']["ggWW"][1]
#         for m in massggh:
#           for nuis in nuisancename[nuisname]:
#             if 'GGH_'+m+model_name in nuisances[nuis]['samples']: sig_up = nuisances[nuis]['samples']['GGH_'+m+model_name][0]
#             if 'GGH_'+m+model_name in nuisances[nuis]['samples']: sig_dn = nuisances[nuis]['samples']['GGH_'+m+model_name][1]
#           SBI_string = ['('+sig_up+')*SBI_isHM + ('+SM_up+')*SBI_isSMggh + ('+WW_up+')*SBI_isggWW',
#                         '('+sig_dn+')*SBI_isHM + ('+SM_dn+')*SBI_isSMggh + ('+WW_dn+')*SBI_isggWW']
#           nuisances[nuis]['samples'].update({'GGHSBI_'+m+model_name: SBI_string})
#     if doqq==1:
#         SM_up = '1.0'
#         SM_dn = '1.0'
#         WW_up = '1.0'
#         WW_dn = '1.0'
#         sig_up = '1.0'
#         sig_dn = '1.0'
#         for nuis in nuisancename[nuisname]:
#           if "qqH_hww" in nuisances[nuis]['samples']: SM_up = nuisances[nuis]['samples']["qqH_hww"][0]
#           if "qqH_hww" in nuisances[nuis]['samples']: SM_dn = nuisances[nuis]['samples']["qqH_hww"][1]
#           if "qqWWqq" in nuisances[nuis]['samples']: WW_up = nuisances[nuis]['samples']["qqWWqq"][0]
#           if "qqWWqq" in nuisances[nuis]['samples']: WW_dn = nuisances[nuis]['samples']["qqWWqq"][1]
#         for m in massvbf:
#           for nuis in nuisancename[nuisname]:
#             if 'QQH_'+m+model_name in nuisances[nuis]['samples']: sig_up = nuisances[nuis]['samples']['QQH_'+m+model_name][0]
#             if 'QQH_'+m+model_name in nuisances[nuis]['samples']: sig_dn = nuisances[nuis]['samples']['QQH_'+m+model_name][1]
#           SBI_string = ['('+sig_up+')*SBI_isHM + ('+SM_up+')*SBI_isSMVBF + ('+WW_up+')*SBI_isqqWWqq',
#                         '('+sig_dn+')*SBI_isHM + ('+SM_dn+')*SBI_isSMVBF + ('+WW_dn+')*SBI_isqqWWqq']
#           nuisances[nuis]['samples'].update({'QQHSBI_'+m+model_name: SBI_string})
#
#
#
#
#
#
#
#
#
# StatSwitch = False
# if StatSwitch:
#     nuisances['stat']  = {
#         # apply to the following samples: name of samples here must match keys in samples.py
#         'samples'  : {
#
#          'ggWW': {
#                'typeStat' : 'bbb',
#                'zeroMCError' : '0',
#                'correlate': []
#          },
#          'ggH_hww':{
#                'typeStat' : 'bbb',
#                'zeroMCError' : '0',
#                'correlate': []
#          },
#          'qqWWqq': {
#               'typeStat' : 'bbb',
#                'zeroMCError' : '0',
#                'correlate': []
#          },
#          'qqH_hww':{
#                'typeStat' : 'bbb',
#                'zeroMCError' : '0',
#                'correlate': []
#          },
#
#
#         },
#         'type'  : 'shape'
#         }
#     # FIXME: SBI is gone
#     for m in massggh:
#         nuisances['stat']['samples']['GGH_'+m+model_name] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [] }
#         nuisances['stat']['samples']['ggWW']["correlate"].append('GGHSBI_'+m+model_name)
#         nuisances['stat']['samples']['ggH_hww']["correlate"].append('GGHSBI_'+m+model_name)
#         nuisances['stat']['samples']['GGH_'+m+model_name]['correlate'].append('GGHSBI_'+m+model_name)
#
#     for m in massvbf:
#         nuisances['stat']['samples']['QQH_'+m+model_name] = { 'typeStat' : 'bbb', 'zeroMCError' : '0', 'correlate': [] }
#         nuisances['stat']['samples']['qqWWqq']["correlate"].append('QQHSBI_'+m+model_name)
#         nuisances['stat']['samples']['qqH_hww']["correlate"].append('QQHSBI_'+m+model_name)
#         nuisances['stat']['samples']['QQH_'+m+model_name]['correlate'].append('QQHSBI_'+m+model_name)
#
#
#
#
#
#
#
#
# for n in nuisances.values():
#     n['skipCMS'] = 1
#
# print(' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat')))
