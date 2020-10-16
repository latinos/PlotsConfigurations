import os
import copy
import inspect

configurations = os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/"
conf_folder = configurations +"/VBSjjlnu/Full2016v7"

#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

aliases["sip3d_cut"]= {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L {}/VBSjjlnu/Full2018v7/macros/sip3d_cut.cc+'.format(configurations)
    ],
    'class': 'Sip3dcut',
    'args': ()
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


# ############################################
# # DNN reader - Updated to 2018 specific

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

##########################################

aliases['fake_weight_corrected'] = {
    'class': 'FakeWeightCorrector',
    'args': ("%s/VBSjjlnu/Full2017v6/corrections/fakeweight_correction.root" % configurations, 
                "mva_90p_Iso2016", "fakeW_ele_mva_90p_Iso2016_mu_cut_Tight80x_1l_mu20_ele35", 
                os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2016v7/mva90pIso2016/EleFR_jet35.root",
                os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2016v7/mva90pIso2016/ElePR.root"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L %s/patches/fakeweight_corrector.cc+' % configurations
     ],
    'samples': ["Fake"]
}
#######################################


aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'CountGenJet',
    'samples': mc
}

lastcopy = (1 << 13)
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
    #'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(-2.02274e-01 + 1.09734e-04*topGenPt - 1.30088e-07*topGenPt*topGenPt + 5.83494e+01/(topGenPt+1.96252e+02)) * TMath::Exp(-2.02274e-01 + 1.09734e-04*antitopGenPt - 1.30088e-07*antitopGenPt*antitopGenPt + 5.83494e+01/(antitopGenPt+1.96252e+02)))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPt - 8.90557e-08*topGenPt*topGenPt) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPt - 8.90557e-08*antitopGenPt*antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)', # Same Reweighting as other years, but with additional fix for tune CUET -> CP5

    # New Top PAG
    'expr': '(topGenPtOTF * antitopGenPtOTF > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPtOTF) - 0.000134*topGenPtOTF + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPtOTF) - 0.000134*antitopGenPtOTF + 0.973))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPtOTF - 8.90557e-08*topGenPtOTF*topGenPtOTF) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPtOTF - 8.90557e-08*antitopGenPtOTF*antitopGenPtOTF))) + (topGenPtOTF * antitopGenPtOTF <= 0.)', # Same Reweighting as other years, but with additional fix for tune CUET -> CP5
    'samples': ['top']
}

##### DY Z pT reweighting
aliases['getGenZpt_OTF'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/patches/getGenZpt.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'getGenZpt',
    'samples': ['DY']
}
handle = open('%s/src/PlotsConfigurations/Configurations/patches/DYrew30.py' % os.getenv('CMSSW_BASE'),'r')
exec(handle)
handle.close()
aliases['DY_NLO_pTllrw'] = {
    'expr': '('+DYrew['2016']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY']
}
aliases['DY_LO_pTllrw'] = {
    'expr': '('+DYrew['2016']['LO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY']
}


lastcopy = (1 << 13)
aliases['isTTbar'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 2' % lastcopy,
    'samples': ['top']
}

aliases['isSingleTop'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 1' % lastcopy,
     'samples': ['top']
}

