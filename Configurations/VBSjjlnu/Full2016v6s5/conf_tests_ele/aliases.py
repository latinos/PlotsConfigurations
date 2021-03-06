import os
import copy
import inspect

configurations = os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/"
conf_folder = configurations +"/VBSjjlnu/Full2016v6s5"

#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

aliases['whad_pt'] = {
            'class': 'WhadPt',
            'args': (),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L {}/VBSjjlnu/Full2018v6s5/macros/whad_pt.cc+'.format(configurations)
            ]           
}

aliases["sip3d_cut"]= {
    'expr': '(abs(Lepton_pdgId[0])==13)*1 + \
             (abs(Lepton_pdgId[0])==11)*(-2.22222*abs(Electron_eta[Lepton_electronIdx[0]]) + 6.33333)'
}
############################################
# DNN reader - Updated to 2018 specific

# mva_reader_path = os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2018v6s5/mva/'
# models_path = '/eos/home-d/dvalsecc/www/VBSPlots/DNN_archive/FullRun2/'

# aliases['DNNoutput_boosted'] = {
#     'class': 'MVAReaderBoosted_v5',
#     'args': ( models_path +'boost_sig/models/v5/',  mva_reader_path + 'cumulative_signal_boosted_v5.root', False, 0),
#     'linesToAdd':[
#         'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#         'gSystem->Load("libDNNEvaluator.so")',
#         '.L ' + mva_reader_path + 'mva_reader_boosted_v5.cc+', 
#     ],
# }

# aliases['DNNoutput_resolved'] = {
#     'class': 'MVAReaderResolved_v29',
#     'args': ( models_path+ 'res_sig/models/v29/', mva_reader_path + 'cumulative_signal_resolved_v29.root', False, 1),
#     'linesToAdd':[
#         'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#         'gSystem->Load("libDNNEvaluator.so")',
#         '.L ' + mva_reader_path + 'mva_reader_resolved_v29.cc+', 
#     ],
# }

# aliases['DNNoutput'] = {
#     'expr': '(VBS_category==0)*(DNNoutput_boosted) + (VBS_category==1)*(DNNoutput_resolved)'
# }


# aliases['detavbs_jetpt_bin'] = {
#     'expr':'(VBS_category==0)* \
#                 (   1*( deltaeta_vbs < 5) + \
#                     2*(deltaeta_vbs >= 5) \
#                 )+\
#             (VBS_category==1) * \
#                 (   3* ((deltaeta_vbs < 5)  && vbs_1_pt < 75) + \
#                     4* ((deltaeta_vbs >= 5)  && vbs_1_pt < 75) + \
#                     \
#                     5* ((deltaeta_vbs < 4)  &&  ( vbs_1_pt >= 75 && vbs_1_pt <150) ) + \
#                     6* ((deltaeta_vbs >= 4) &&  ( vbs_1_pt >= 75 && vbs_1_pt <150) ) + \
#                     7* ( vbs_1_pt >= 150 ) \
#                 )'
# }


##################################
# BTag

bAlgo = 'DeepB'
bWP = ' 0.2217 '
bWPtight = '0.8953'

aliases['bVeto'] = {
    'expr': '(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] >  0.2217 ) == 0)'
}

aliases['bReq'] = {
    'expr': '(Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] >  0.2217 ) >= 1)'
}


aliases['bReqTight'] = {
    'expr': '(Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] >  0.8953 ) >= 1)'
}

aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<=20 || abs(CleanJet_eta)>=2.5))))',
    'samples': mc
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<=30 || abs(CleanJet_eta)>=2.5))))',
    'samples': mc
}

aliases['btagSF'] = {
    'expr': 'bVeto*bVetoSF + bReqTight *bReqSF',
    'samples': mc
}



systs = ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']
#systs = ['jes']

for s in systs:
  aliases['btagSF'+s+'up'] = { 'expr': '(bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_up_'+s)+'+bReqTight*'+aliases['bReqSF']['expr'].replace('shape','shape_up_'+s)+'+ ( (!bVeto) && (!bReqTight) ))', 'samples':mc  }
  aliases['btagSF'+s+'down'] = { 'expr': '(bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_down_'+s)+'+bReqTight*'+aliases['bReqSF']['expr'].replace('shape','shape_down_'+s)+'+ ( (!bVeto) && (!bReqTight) ))', 'samples':mc  }

################################################################################################


puidSFSource = '{}/patches/PUID_81XTraining_EffSFandUncties.root'.format(configurations)

aliases['PUJetIdSF'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/patches/pujetidsf_event_new.cc+' % configurations
    ],
    'class': 'PUJetIdEventSF',
    'args': (puidSFSource, '2016', 'loose'),
    'samples': mc
}

aliases['fake_weight_corrected'] = {
    'class': 'FakeWeightCorrector',
    'args': ("%s/VBSjjlnu/Full2017v6/corrections/fakeweight_correction.root" % configurations, 
                "mva_90p_Iso2016", "fakeW_ele_mva_90p_Iso2016_mu_cut_Tight80x_mu10_ele35", 
                os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2016v6/mva90pIso2016/EleFR_jet35.root",
                os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2016v6/mva90pIso2016/ElePR.root"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L %s/patches/fakeweight_corrector.cc+' % configurations
     ],
    'samples': ["Fake"]
}

#LastProcessing did not create (anti)topGenPt for ST samples with _ext1


# top weight from 2017/2018
lastcopy = (1 << 13)
aliases['isTTbar'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 2' % lastcopy,
    'samples': ['top']
}

aliases['isSingleTop'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 1' % lastcopy,
     'samples': ['top']
}

aliases['topGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == 6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
     'samples': ['top']
}

aliases['antitopGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == -6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
     'samples': ['top']
}

aliases['Top_pTrw'] = {
    #'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPt) * TMath::Exp(0.0615 - 0.0005 * antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)',
    'expr': '(topGenPtOTF * antitopGenPtOTF > 0.) * (TMath::Sqrt(TMath::Exp(-0.158631 + 2.00214e-04*topGenPtOTF - 3.09496e-07*topGenPtOTF*topGenPtOTF + 34.93/(topGenPtOTF+135.633)) * TMath::Exp(-0.158631 + 2.00214e-04*antitopGenPtOTF - 3.09496e-07*antitopGenPtOTF*antitopGenPtOTF + 34.93/(antitopGenPtOTF+135.633)))) + (topGenPtOTF * antitopGenPtOTF <= 0.)',
    'samples': ['top']
}


aliases['Wtagging_SF_nominal'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L {}/VBSjjlnu/Full2016v6s5/corrections/Wtagging_SF.cc+'.format(configurations)
    ],
    'class': 'Wtagging_SF',
    'args': ('nominal', '2016'),
    'samples': mc
}


aliases['Wtagging_SF_up'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L {}/VBSjjlnu/Full2016v6s5/corrections/Wtagging_SF.cc+'.format(configurations)
    ],
    'class': 'Wtagging_SF',
    'args': ('up', '2016'),
    'samples': mc
}


aliases['Wtagging_SF_down'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L {}/VBSjjlnu/Full2016v6s5/corrections/Wtagging_SF.cc+'.format(configurations)
    ],
    'class': 'Wtagging_SF',
    'args': ('down', '2016'),
    'samples': mc
}


aliases["nearestEleJet"]= {
    'class': "NearestJetDR",
    'args': (),
    'linesToAdd': [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L %s/conf_tests_ele/nearest_jet_dR.cc+' % conf_folder
    ]
}