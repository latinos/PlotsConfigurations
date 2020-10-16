import os
import copy
import inspect

configurations = os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/"
conf_folder = configurations +"/VBSjjlnu/Full2017v7"

#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]


aliases['is_wjetsSample'] =  {
    'expr' : 'getSampleName()',
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/VBSjjlnu/Full2018v7/macros/samples_id.cc+'.format(configurations)
    ]
}


aliases['fatjetpt08']= {
    'expr': ' (is_wjetsSample)*( Alt$(CleanFatJet_pt[0],0) * 0.8) + (!is_wjetsSample)*(Alt$(CleanFatJet_pt[0],0))'
}

# aliases['fatjetpt09']= {
#     'expr': ' (is_wjetsSample)*( Alt$(CleanFatJet_pt[0],0) * 0.9) + (!is_wjetsSample)*(Alt$(CleanFatJet_pt[0],0))'
# }

# aliases['fatjetpt095']= {
#     'expr': ' (is_wjetsSample)*( Alt$(CleanFatJet_pt[0],0) * 0.95) + (!is_wjetsSample)*(Alt$(CleanFatJet_pt[0],0))'
# }

aliases['fatjetpt085']= {
   'expr': ' (is_wjetsSample)*( Alt$(CleanFatJet_pt[0],0) * 0.85) + (!is_wjetsSample)*(Alt$(CleanFatJet_pt[0],0))'
}

aliases['fatjetpt082']= {
   'expr': ' (is_wjetsSample)*( Alt$(CleanFatJet_pt[0],0) * 0.82) + (!is_wjetsSample)*(Alt$(CleanFatJet_pt[0],0))'
}

aliases['fatjetpt083']= {
   'expr': ' (is_wjetsSample)*( Alt$(CleanFatJet_pt[0],0) * 0.83) + (!is_wjetsSample)*(Alt$(CleanFatJet_pt[0],0))'
}

aliases['fatjetpt087']= {
   'expr': ' (is_wjetsSample)*( Alt$(CleanFatJet_pt[0],0) * 0.87) + (!is_wjetsSample)*(Alt$(CleanFatJet_pt[0],0))'
}

############################
aliases['mjj_vjet08']= {
    'expr': ' (is_wjetsSample)*( mjj_vjet * 0.8) + (!is_wjetsSample)*(mjj_vjet)'
}

aliases['mjj_vjet085']= {
   'expr': ' (is_wjetsSample)*( mjj_vjet * 0.85) + (!is_wjetsSample)*(mjj_vjet)'
}

aliases['mjj_vjet082']= {
   'expr': ' (is_wjetsSample)*( mjj_vjet * 0.82) + (!is_wjetsSample)*(mjj_vjet)'
}

aliases['mjj_vjet083']= {
   'expr': ' (is_wjetsSample)*( mjj_vjet * 0.83) + (!is_wjetsSample)*(mjj_vjet)'
}

aliases['mjj_vjet087']= {
   'expr': ' (is_wjetsSample)*( mjj_vjet * 0.87) + (!is_wjetsSample)*(mjj_vjet)'
}

#####################

aliases['veto_fatjet_180'] = {
            'class': 'VetoFatJet',
            'args': (180.),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L {}/VBSjjlnu/Full2018v7/macros/veto_fatjet.cc+'.format(configurations)
            ]           
}

aliases['veto_fatjet_153'] = {
            'class': 'VetoFatJet',
            'args': (153.),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L {}/VBSjjlnu/Full2018v7/macros/veto_fatjet.cc+'.format(configurations)
            ]           
}

aliases['veto_fatjet_149'] = {
            'class': 'VetoFatJet',
            'args': (149.),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L {}/VBSjjlnu/Full2018v7/macros/veto_fatjet.cc+'.format(configurations)
            ]           
}

aliases['veto_fatjet_wjet85'] = {
    'expr':  '(is_wjetsSample)*(veto_fatjet_153) + (!is_wjetsSample)*(veto_fatjet_180)'
}

aliases['veto_fatjet_wjet83'] = {
    'expr':  '(is_wjetsSample)*(veto_fatjet_149) + (!is_wjetsSample)*(veto_fatjet_180)'
}


# aliases["sip3d_cut"]= {
#     'expr': '-2.22222*abs( Alt$(Electron_eta[Lepton_electronIdx[0]], 0) ) + 6.33333'
# }

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


############################################
# B tagging

bAlgo = 'DeepB'
bWP = '0.1522'


aliases['bVeto'] = {
    'expr': '(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)'
}

aliases['bReq'] = {
    'expr': '(Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) >= 1)'
}

aliases['bReqTight'] = {
    'expr': '(Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.8001) >= 1)'
}

aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(CleanJet_pt<=20 || abs(CleanJet_eta)>=2.5))))',
    'samples': mc
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(CleanJet_pt<=30 || abs(CleanJet_eta)>=2.5))))',
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
  aliases['btagSF'+s+'down'] = { 'expr': '(bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_down_'+s)+'+bReqTight*'+aliases['bReqSF']['expr'].replace('shape','shape_down_'+s)+'+ ( (!bVeto) && (!bReqTight) ))', 'samples':mc }
  
################################################################################################


# LastProcessing did not create (anti)topGenPt for ST samples with _ext1
lastcopy = (1 << 13)

aliases['isTTbar'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 2' % lastcopy,
    'samples': ['top']
}

aliases['isSingleTop'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 1' % lastcopy,
     'samples': ['top']
}

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'CountGenJet',
    'samples': mc
}

aliases['topGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == 6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
    'samples': ['top']
}

aliases['antitopGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == -6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
    'samples': ['top']
}

##### Top pT reweighting
aliases['Top_pTrw'] = {
    # Mine:
    #'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(-2.02274e-01 + 1.09734e-04*topGenPt - 1.30088e-07*topGenPt*topGenPt + 5.83494e+01/(topGenPt+1.96252e+02)) * TMath::Exp(-2.02274e-01 + 1.09734e-04*antitopGenPt - 1.30088e-07*antitopGenPt*antitopGenPt + 5.83494e+01/(antitopGenPt+1.96252e+02)))) + (topGenPt * antitopGenPt <= 0.)',

    # New Top PAG
    'expr': '(topGenPtOTF * antitopGenPtOTF > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPtOTF) - 0.000134*topGenPtOTF + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPtOTF) - 0.000134*antitopGenPtOTF + 0.973))) + (topGenPtOTF * antitopGenPtOTF <= 0.)',
    'samples': ['top']
}

#### DY Z pT reweighting
aliases['getGenZpt_OTF'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/patches/getGenZpt.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'getGenZpt',
    'samples': ['DY']
}

handle = open('%s/src/PlotsConfigurations/Configurations/patches/DYrew30.py' % os.getenv('CMSSW_BASE'),'r')
exec(handle)
handle.close()
aliases['DY_NLO_pTllrw'] = {
    'expr': '('+DYrew['2017']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY']
}
aliases['DY_LO_pTllrw'] = {
    'expr': '('+DYrew['2017']['LO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY']
}

###########################

aliases['fake_weight_corrected'] = {
    'class': 'FakeWeightCorrector',
    'args': ("%s/VBSjjlnu/Full2017v6/corrections/fakeweight_correction.root" % configurations, 
                "mvaFall17V1Iso_WP90", "fakeW_ele_mvaFall17V1Iso_WP90_mu_cut_Tight_HWWW_1l_mu20_ele35", 
                os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2017v7/mvaFall17V1Iso_WP90/EleFR_jet35.root",
                os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2017v7/mvaFall17V1Iso_WP90/ElePR.root"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L %s/patches/fakeweight_corrector.cc+' % configurations
     ],
    'samples': ["Fake"]
}

# PU jet Id SF
puidSFSource = '{}/patches/PUID_81XTraining_EffSFandUncties.root'.format(configurations)

# For 2017 the working point is loose everywhere, but tight in the horns region  2.65<abs(eta)<3.139
aliases['PUJetIdSF'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L {}/VBSjjlnu/Full2017v6s5/corrections/pujetidsf_2017_horns.cc+'.format(configurations)
    ],
    'class': 'PUJetIdEventSF',
    'args': (puidSFSource, '2017', 'loose'),
    'samples': [ s for s in mc if s not in ["DY"]]
}


# For VgS
aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
    'samples': 'VgS'
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': 'VgS'
}

