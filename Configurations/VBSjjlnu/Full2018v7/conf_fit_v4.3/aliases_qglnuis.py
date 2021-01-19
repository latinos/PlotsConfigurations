import os
import copy
import inspect

configurations = os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/"
conf_folder = configurations +"/VBSjjlnu/Full2018v7"

#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

####################

aliases['nJets30']= {
    'expr' : 'Sum$(CleanJet_pt[CleanJetNotFat_jetIdx] >= 30)'
}

###################
# trigger eff

aliases['ele_trig_eff'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/triggerEff_1lep.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'TrigEff_1lep',
    'args': ('/afs/cern.ch/user/a/arun/public/fixedTextfiles/2018/mvaid/Ele32_pt_eta_efficiency_withSys_Run2018.txt'),
    'samples': mc
}

aliases['SingleLepton_trigEff_corrected'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff[0] +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l',
    'samples': mc
}

aliases['SingleLepton_trigEff_corrected_up'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff[1] +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l_u',
    'samples': mc
}

aliases['SingleLepton_trigEff_corrected_down'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff[2] +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l_d',
    'samples': mc
}
############################################
# B tagging
#loose 0.1241
# tight 0.7527

aliases['bVeto'] = {
    'expr': '(Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1241) == 0)'
}

aliases['bReq'] = {
    'expr': '(Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1241) >= 1)'
}

aliases['bReqTight'] = {
    'expr': '(Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.7527) >= 1)'
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

for s in systs:
  aliases['btagSF'+s+'up'] = { 'expr': '(bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_up_'+s)+'+bReqTight*'+aliases['bReqSF']['expr'].replace('shape','shape_up_'+s)+'+ ( (!bVeto) && (!bReqTight) ))', 'samples':mc  }
  aliases['btagSF'+s+'down'] = { 'expr': '(bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_down_'+s)+'+bReqTight*'+aliases['bReqSF']['expr'].replace('shape','shape_down_'+s)+'+ ( (!bVeto) && (!bReqTight) ))', 'samples':mc }

################################################################################################


# PostProcessing did not create (anti)topGenPt for ST samples with _ext1
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
    'expr': 'isTTbar * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPtOTF) - 0.000134*topGenPtOTF + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPtOTF) - 0.000134*antitopGenPtOTF + 0.973))) + isSingleTop',
    'samples': ['top']
}

#########################################################################################

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'CountGenJet',
    'samples': mc
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
    'expr': '('+DYrew['2018']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY']
}
aliases['DY_LO_pTllrw'] = {
    'expr': '('+DYrew['2018']['LO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'samples': ['DY']
}


###########################################################################################
#fakes

basedir_fakes = configurations + "/VBSjjlnu/weights_files/fake_rates/2018"

ets = ["25", "35", "45"]

el_pr_file = os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2018v7/mvaFall17V1Iso_WP90/ElePR.root"
mu_pr_file = os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2018v7/cut_Tight_HWWW/MuonPR.root"

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


###################################3

# PU jet Id SF

# puidSFSource = '{}/patches/PUID_81XTraining_EffSFandUncties.root'.format(configurations)

# aliases['PUJetIdSF'] = {
#     'linesToAdd': [
#         'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#         '.L %s/patches/pujetidsf_event_new.cc+' % configurations
#     ],
#     'class': 'PUJetIdEventSF',
#     'args': (puidSFSource, '2018', 'loose'),
#     'samples': mc
# }

aliases['PUJetIdSF'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose)))',
  'samples': mc
}

aliases['PUJetIdSF_up'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose_up)))',
  'samples': mc
}


aliases['PUJetIdSF_down'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose_down)))',
  'samples': mc
}



######################################


# For VgS
aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
    'samples': 'VgS'
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': 'VgS'
}

#############################

aliases['veto_fatjet_180'] = {
            'class': 'VetoFatJetResolved',
            'args': (180.),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L {}/VBSjjlnu/macros/veto_fatjet_resolved.cc+'.format(configurations)
            ]           
}

###################################
# New QGL 

morphing_file = configurations + "/VBSjjlnu/weights_files/qgl_morphing/morphing_functions_withvars_2018.root"


aliases["CleanJet_qgl_morphed"]  = {
    'class': 'QGL_morphing',
    'args' : (morphing_file, "nom", "0000"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/macros/qgl_morphing.cc+'.format(configurations)
        ] 
}

aliases["CleanJet_qgl_morphed_morphUp_gluon_loweta"]  = {
    'class': 'QGL_morphing',
    'args' : (morphing_file, "up", "0001"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/macros/qgl_morphing.cc+'.format(configurations)
        ] 
}

aliases["CleanJet_qgl_morphed_morphUp_gluon_higheta"]  = {
    'class': 'QGL_morphing',
    'args' : (morphing_file, "up", "0010"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/macros/qgl_morphing.cc+'.format(configurations)
        ] 
}

aliases["CleanJet_qgl_morphed_morphUp_quark_loweta"]  = {
    'class': 'QGL_morphing',
    'args' : (morphing_file, "up", "0100"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/macros/qgl_morphing.cc+'.format(configurations)
        ] 
}

aliases["CleanJet_qgl_morphed_morphUp_quark_higheta"]  = {
    'class': 'QGL_morphing',
    'args' : (morphing_file, "up", "1000"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/macros/qgl_morphing.cc+'.format(configurations)
        ] 
}

######
aliases["CleanJet_qgl_morphed_morphDown_gluon_loweta"]  = {
    'class': 'QGL_morphing',
    'args' : (morphing_file, "down", "0001"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/macros/qgl_morphing.cc+'.format(configurations)
        ] 
}

aliases["CleanJet_qgl_morphed_morphDown_gluon_higheta"]  = {
    'class': 'QGL_morphing',
    'args' : (morphing_file, "down", "0010"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/macros/qgl_morphing.cc+'.format(configurations)
        ] 
}

aliases["CleanJet_qgl_morphed_morphDown_quark_loweta"]  = {
    'class': 'QGL_morphing',
    'args' : (morphing_file, "down", "0100"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/macros/qgl_morphing.cc+'.format(configurations)
        ] 
}

aliases["CleanJet_qgl_morphed_morphDown_quark_higheta"]  = {
    'class': 'QGL_morphing',
    'args' : (morphing_file, "down", "1000"),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/macros/qgl_morphing.cc+'.format(configurations)
        ] 
}

##########################


aliases['vbs_0_qgl_res'] = {
   'expr': 'Alt$(CleanJet_qgl_morphed[VBS_jets_maxmjj_massWZ[0]],-1)'
} 


aliases['vjet_0_qgl_res'] = {
    'expr': 'Alt$(CleanJet_qgl_morphed[V_jets_maxmjj_massWZ[0]],-1)'
} 

aliases['vjet_1_qgl_res'] = {
    'expr': 'Alt$(CleanJet_qgl_morphed[V_jets_maxmjj_massWZ[1]],-1)'
} 

aliases['vbs_0_qgl_boost'] = {
    'expr': 'Alt$(CleanJet_qgl_morphed[VBS_jets_maxmjj[0]],-1)'
} 

aliases['vbs_1_qgl_boost'] = {
    'expr': 'Alt$(CleanJet_qgl_morphed[VBS_jets_maxmjj[1]],-1)'
} 

###########
## morphUP

for jt in ['quark', 'gluon']:
    for jeta in ['loweta', 'higheta']:
        for morph in ['morphUp', 'morphDown']:
            jtype = morph + "_" + jt+"_"+jeta

            aliases['vbs_0_qgl_res_' +jtype ] = {
                'expr': 'Alt$(CleanJet_qgl_morphed_' + jtype + '[VBS_jets_maxmjj_massWZ[0]],-1)'
            } 
            aliases['vjet_0_qgl_res_' +jtype ] = {
                'expr': 'Alt$(CleanJet_qgl_morphed_' + jtype + '[V_jets_maxmjj_massWZ[0]],-1)'
            } 
            aliases['vjet_1_qgl_res_' +jtype] = {
                'expr': 'Alt$(CleanJet_qgl_morphed_' + jtype + '[V_jets_maxmjj_massWZ[1]],-1)'
            } 
            aliases['vbs_0_qgl_boost_' +jtype ] = {
                'expr': 'Alt$(CleanJet_qgl_morphed_' + jtype + '[VBS_jets_maxmjj[0]],-1)'
            } 
            aliases['vbs_1_qgl_boost_' +jtype ] = {
                'expr': 'Alt$(CleanJet_qgl_morphed_' + jtype + '[VBS_jets_maxmjj[1]],-1)'
            } 



##########################
# additional uncertainties for Wtagging from pt extrapolation
aliases['BoostedWtagSF_ptextr'] = {
    'class': 'Wtagging_SF_ptExtrap',
    'args': ('2018'),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/VBSjjlnu/macros/Wtagging_SF_ptExtrap.cc+'.format(configurations)
    ]   
}

#########################

mva_reader_path = os.getenv('CMSSW_BASE') + '/src/PlotsConfigurations/Configurations/VBSjjlnu/macros/'
models_path = '/eos/home-d/dvalsecc/www/VBSPlots/DNN_archive/FullRun2_v7/FullRun2_v7/'

aliases['DNNoutput_boosted'] = {
    'class': 'MVAReaderBoosted_mVauto_qglnuis',
    'args': ( models_path +'boost_sig/models/v3_d/',  models_path +'boost_sig/models/v3_d/cumulative_signal_2018.root', False, 0),
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L ' + mva_reader_path + 'mva_reader_boosted_v3d_mVauto_qglnuis.cc+', 
    ],
}

aliases['DNNoutput_resolved'] = {
    'class': 'MVAReaderResolved_mVauto_qglnuis',
    'args': ( models_path+ 'res_sig/models/v4_d/',models_path+ 'res_sig/models/v4_d/cumulative_signal_2018.root', False, 1),
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L ' + mva_reader_path + 'mva_reader_resolved_v4d_mVauto_qglnuis.cc+', 
    ],
}

# aliases['DNNoutput'] = {
#     'expr': '(VBS_category==0)*(DNNoutput_boosted) + (VBS_category==1)*(DNNoutput_resolved)'
# }


