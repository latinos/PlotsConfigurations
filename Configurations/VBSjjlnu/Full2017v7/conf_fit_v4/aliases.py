import os
import copy
import inspect

configurations = os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/"
conf_folder = configurations +"/VBSjjlnu/Full2017v7"

#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

####################

aliases['nJets30']= {
    'expr' : 'Sum$(CleanJet_pt[CleanJetNotFat_jetIdx] >= 30)'
}

#########################################
# trigger eff

aliases['ele_trig_eff_B'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/triggerEff_1lep.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'TrigEff_1lep',
    'args': ('/afs/cern.ch/user/a/arun/public/fixedTextfiles/2017/mvaid/Ele35_pt_eta_efficiency_withSys_Run2017B.txt'),
    'samples': mc
}

aliases['ele_trig_eff_CDE'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/triggerEff_1lep.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'TrigEff_1lep',
    'args': ('/afs/cern.ch/user/a/arun/public/fixedTextfiles/2017/mvaid/Ele35_pt_eta_efficiency_withSys_Run2017CDE.txt'),
    'samples': mc
}

aliases['ele_trig_eff_F'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/triggerEff_1lep.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'TrigEff_1lep',
    'args': ('/afs/cern.ch/user/a/arun/public/fixedTextfiles/2017/mvaid/Ele35_pt_eta_efficiency_withSys_Run2017F.txt'),
    'samples': mc
}

aliases['ele_trig_eff_tot'] = {
    'expr' : '(run_period==1)*ele_trig_eff_B[0] + (run_period>1 && run_period<5)*ele_trig_eff_CDE[0] + (run_period==5)*ele_trig_eff_F[0]',
    'samples': mc
}

aliases['ele_trig_eff_tot_up'] = {
    'expr' : '(run_period==1)*ele_trig_eff_B[1] + (run_period>1 && run_period<5)*ele_trig_eff_CDE[1] + (run_period==5)*ele_trig_eff_F[1]',
    'samples': mc
}

aliases['ele_trig_eff_tot_down'] = {
    'expr' : '(run_period==1)*ele_trig_eff_B[2] + (run_period>1 && run_period<5)*ele_trig_eff_CDE[2] + (run_period==5)*ele_trig_eff_F[2]',
    'samples': mc
}

aliases['SingleLepton_trigEff_corrected'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff_tot +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l',
    'samples': mc
}

aliases['SingleLepton_trigEff_corrected_up'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff_tot_up +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l_u',
    'samples': mc
}

aliases['SingleLepton_trigEff_corrected_down'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff_tot_down +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l_d',
    'samples': mc
}


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

######################################

# Using tight scale factors for jets in the horn
aliases['PUJetIdSF'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*( abs(Jet_eta)<2.65 || abs(Jet_eta)>3.139)*TMath::Log(Jet_PUIDSF_loose) + (Jet_jetId>=2)*(abs(Jet_eta)>2.65 && abs(Jet_eta)<3.139)*TMath::Log(Jet_PUIDSF_tight)))',
  'samples': mc
}

aliases['PUJetIdSF_up'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*( abs(Jet_eta)<2.65 || abs(Jet_eta)>3.139)*TMath::Log(Jet_PUIDSF_loose_up) + (Jet_jetId>=2)*(abs(Jet_eta)>2.65 && abs(Jet_eta)<3.139)*TMath::Log(Jet_PUIDSF_tight_up)))',
  'samples': mc
}


aliases['PUJetIdSF_down'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*(abs(Jet_eta)<2.65 || abs(Jet_eta)>3.139)*TMath::Log(Jet_PUIDSF_loose_down) + (Jet_jetId>=2)*(abs(Jet_eta)>2.65 && abs(Jet_eta)<3.139)*TMath::Log(Jet_PUIDSF_tight_down)))',
  'samples': mc
}


# #PU jet Id SF
# puidSFSource = "{}/patches/PUID_81XTraining_EffSFandUncties.root".format(configurations)
# print(puidSFSource)

# # For 2017 the working point is loose everywhere, but tight in the horns region  2.65<abs(eta)<3.139
# aliases['PUJetIdSF'] = {
#     'class': "PU_jetidsf_horns",
#     'args': (puidSFSource, "2017", "loose"),
#     'linesToAdd': [
#         'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
#         'gSystem->AddIncludePath("-I%s/src/LatinoAnalysis/MultiDraw/interface");' % os.getenv('CMSSW_BASE'),
#         'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#         '.L {}/VBSjjlnu/Full2017v7/corrections/pujetidsf_horns.cc+'.format(configurations)
#     ],
#     'samples': [m for m in mc if m != 'DY']
# }

#########################################

aliases['nCleanGenJet'] = {
    'linesToAdd': [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'CountGenJet',
    'samples': mc
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


basedir_fakes = configurations + "/VBSjjlnu/weights_files/fake_rates/2017"

ets = ["25", "35", "45"]
el_pr_file = os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2017v7/mvaFall17V1Iso_WP90/ElePR.root"
mu_pr_file = os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2017v7/cut_Tight_HWWW/MuonPR.root"

for et in ets:
    el_fr_file = basedir_fakes + "/plot_ElCh_JetEt"+et+"_l1_etaVpt_ptel_aseta_fw_ewk_2D.root" #No absolute value for fakes
    mu_fr_file = basedir_fakes + "/plot_MuCh_JetEt"+et+"_l1_etaVpt_ptmu_fw_ewk_2D.root"
    aliases['fakeWeight_'+et] = { 
        'class': 'newFakeWeightOTFall',
        'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(el_pr_file), copy.deepcopy(mu_fr_file), copy.deepcopy(mu_pr_file), False, False, False),  #doabsEta=False, no stat variations
        'linesToAdd' : [
            'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
            '.L {}/VBSjjlnu/macros/newfakeweight_OTFall.cc+'.format(configurations)
        ],     
        'samples': ["Fake"]
    }

#stat variations
el_fr_file35 = basedir_fakes + "/plot_ElCh_JetEt35_l1_etaVpt_ptel_aseta_fw_ewk_2D.root" #No absolute value for fakes
mu_fr_file35 = basedir_fakes + "/plot_MuCh_JetEt35_l1_etaVpt_ptmu_fw_ewk_2D.root"

aliases['fakeWeight_35_statUp'] = { 
        'class': 'newFakeWeightOTFall',
        'args': (eleWP, muWP, copy.deepcopy(el_fr_file35), copy.deepcopy(el_pr_file), copy.deepcopy(mu_fr_file35), copy.deepcopy(mu_pr_file), False, True, False),   
        'samples': ["Fake"]
    }
aliases['fakeWeight_35_statDo'] = { 
        'class': 'newFakeWeightOTFall',
        'args': (eleWP, muWP, copy.deepcopy(el_fr_file35), copy.deepcopy(el_pr_file), copy.deepcopy(mu_fr_file35), copy.deepcopy(mu_pr_file), False, False, True), 
        'samples': ["Fake"]
    }


##############################################


################################################
# For VgS
aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
    'samples': 'VgS'
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': 'VgS'
}


############################
#Wjets fajets recalibration

aliases['veto_fatjet_180'] = {
            'class': 'VetoFatJetResolved',
            'args': (180.),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L {}/VBSjjlnu/macros/veto_fatjet_resolved.cc+'.format(configurations)
            ]           
}

##################################


morphing_file = configurations + "/VBSjjlnu/weights_files/qgl_morphing/morphing_functions_final_2018.root"
do_morph = "11111111"
m_gluon_loweta_pt0 = "j3_loweta_pt0_gluon"
m_gluon_loweta_pt1 = "j3_loweta_pt1_gluon"
m_gluon_higheta_pt0 = "j1_higheta_pt0_gluon"
m_gluon_higheta_pt1 = "j1_higheta_pt1_gluon"
m_quark_loweta_pt0 = "j1_loweta_pt0_quark"
m_quark_loweta_pt1 = "j1_loweta_pt1_quark"
m_quark_higheta_pt0 = "j1_higheta_pt0_quark"
m_quark_higheta_pt1 = "j0_higheta_pt1_quark"

###############
aliases['vbs_0_qgl_res'] = {
    'class': 'QglVarsMorphing',
    'args': ('vbs_0_qglmorphed_res', morphing_file, do_morph, m_gluon_loweta_pt0, m_gluon_loweta_pt1, m_gluon_higheta_pt0, m_gluon_higheta_pt1, 
                                                       m_quark_loweta_pt0, m_quark_loweta_pt1, m_quark_higheta_pt0, m_quark_higheta_pt1),
     'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/VBSjjlnu/macros/qgl_vars_morphing.cc+'.format(configurations)
        ] 
} 

# aliases['vbs_1_qgl_res'] = {
#     'class': 'QglVarsMorphing',
#     'args': ('vbs_1_qglmorphed_res', morphing_file, do_morph, m_gluon_loweta_pt0, m_gluon_loweta_pt1, m_gluon_higheta_pt0, m_gluon_higheta_pt1, 
#                                                        m_quark_loweta_pt0, m_quark_loweta_pt1, m_quark_higheta_pt0, m_quark_higheta_pt1 )
# } 

aliases['vjet_0_qgl_res'] = {
    'class': 'QglVarsMorphing',
    'args': ('vjet_0_qglmorphed_res', morphing_file, do_morph, m_gluon_loweta_pt0, m_gluon_loweta_pt1, m_gluon_higheta_pt0, m_gluon_higheta_pt1, 
                                                       m_quark_loweta_pt0, m_quark_loweta_pt1, m_quark_higheta_pt0, m_quark_higheta_pt1 )
} 

aliases['vjet_1_qgl_res'] = {
    'class': 'QglVarsMorphing',
    'args': ('vjet_1_qglmorphed_res', morphing_file, do_morph, m_gluon_loweta_pt0, m_gluon_loweta_pt1, m_gluon_higheta_pt0, m_gluon_higheta_pt1, 
                                                       m_quark_loweta_pt0, m_quark_loweta_pt1, m_quark_higheta_pt0, m_quark_higheta_pt1 )
} 

aliases['vbs_0_qgl_boost'] = {
    'class': 'QglVarsMorphing',
    'args': ('vbs_0_qglmorphed_boost', morphing_file, do_morph, m_gluon_loweta_pt0, m_gluon_loweta_pt1, m_gluon_higheta_pt0, m_gluon_higheta_pt1, 
                                                       m_quark_loweta_pt0, m_quark_loweta_pt1, m_quark_higheta_pt0, m_quark_higheta_pt1 )
} 

aliases['vbs_1_qgl_boost'] = {
    'class': 'QglVarsMorphing',
    'args': ('vbs_1_qglmorphed_boost', morphing_file, do_morph, m_gluon_loweta_pt0, m_gluon_loweta_pt1, m_gluon_higheta_pt0, m_gluon_higheta_pt1, 
                                                       m_quark_loweta_pt0, m_quark_loweta_pt1, m_quark_higheta_pt0, m_quark_higheta_pt1 )
} 

############################

# aliases['tag_jets_systems_pt'] = {
#     'class': 'TagJetsSystemsPt',
#     'args': (),
#     'linesToAdd' : [
#         'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#         '.L {}/VBSjjlnu/macros/TagJetsSystemsPt.cc+'.format(configurations)
#     ]   
# }


# aliases['vbs_jets_pt'] ={
#     'expr' : 'tag_jets_systems_pt[0]'
# }


##########################
# additional uncertainties for Wtagging from pt extrapolation
aliases['BoostedWtagSF_ptextr'] = {
    'class': 'Wtagging_SF_ptExtrap',
    'args': ('2017'),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/VBSjjlnu/macros/Wtagging_SF_ptExtrap.cc+'.format(configurations)
    ]   
}


#########################

mva_reader_path = os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/VBSjjlnu/macros/'
models_path = '/eos/home-d/dvalsecc/www/VBSPlots/DNN_archive/FullRun2_v7/FullRun2_v7/'

aliases['DNNoutput_boosted'] = {
    'class': 'MVAReaderBoosted',
    'args': ( models_path +'boost_sig/models/v8_b/',  models_path +'boost_sig/models/v8_b/cumulative_signal_2017.root', False, 0),
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L ' + mva_reader_path + 'mva_reader_boosted_v6b.cc+', 
    ],
}

aliases['DNNoutput_resolved'] = {
    'class': 'MVAReaderResolved',
    'args': ( models_path+ 'res_sig/models/v3_b/',models_path+ 'res_sig/models/v3_b/cumulative_signal_2017.root', False, 1),
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L ' + mva_reader_path + 'mva_reader_resolved_v3b.cc+', 
    ],
}

aliases['DNNoutput'] = {
    'expr': '(VBS_category==0)*(DNNoutput_boosted) + (VBS_category==1)*(DNNoutput_resolved)'
}

