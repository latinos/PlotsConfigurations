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

# aliases['ele_passHLT'] = {
#     'expr': 'HLT_Ele32_WPTight_Gsf_L1DoubleEG && Sum$((TrigObj_id==11) && (TrigObj_filterBits & 1024) )>0',
#     'samples': ['Fake', 'DATA']
# }


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


basedir_fakes = configurations + "/VBSjjlnu/weights_files/fake_rates/2017_Ele35"

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


aliases['puWeight_noeras'] = {
    'class': 'PuWeightNoEras',
    'args': ( '2017','{}/src/PlotsConfigurations/Configurations/patches/PU_profiles_yearly.root'.format(os.getenv('CMSSW_BASE'))),
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libPhysicsToolsNanoAODTools.so")',
        '.L %s/src/PlotsConfigurations/Configurations/patches/puWeight_noeras.cc+' % os.getenv('CMSSW_BASE')
    ],
    'samples': mc
}



####################################


aliases['Adphi_lVj'] = {
    'expr': 'TMath::Abs(Lepton_phi[0] - CleanJet_phi)',
}

aliases['dphi_lVj'] = {
    'expr': '(Adphi_lVj < 3.141592653)*Adphi_lVj + (Adphi_lVj >= 3.141592653)*TMath::Abs(Adphi_lVj - 2*3.141592653)',
}

aliases['deta_lVj'] = {
    'expr': 'TMath::Abs(Lepton_eta[0] - CleanJet_eta)',
}

aliases['dR_lVj'] = {
    'expr': 'TMath::Sqrt(deta_lVj*deta_lVj + dphi_lVj*dphi_lVj)',
}

#Jet_Et = 20
for Jet_Et in [10, 15, 20, 25, 30, 35, 40, 45]:
    aliases['PassJet_Et'+str(Jet_Et)] = {
        'expr': 'Sum$((dR_lVj > 1.)*(CleanJet_pt > '+str(Jet_Et)+')*(CleanJet_pt > 10 && abs(CleanJet_eta) < 2.5)) > 0.',
    }
