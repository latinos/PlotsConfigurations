import os
import copy
import inspect

configurations = os.getenv("CMSSW_BASE") + "/src/PlotsConfigurations/Configurations/"
conf_folder = configurations +"/VBSjjlnu/Full2018v7"

#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]

####################

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


# systs = ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']
# #systs = ['jes']

# for s in systs:
#   aliases['btagSF'+s+'up'] = { 'expr': '(bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_up_'+s)+'+bReqTight*'+aliases['bReqSF']['expr'].replace('shape','shape_up_'+s)+'+ ( (!bVeto) && (!bReqTight) ))', 'samples':mc  }
#   aliases['btagSF'+s+'down'] = { 'expr': '(bVeto*'+aliases['bVetoSF']['expr'].replace('shape','shape_down_'+s)+'+bReqTight*'+aliases['bReqSF']['expr'].replace('shape','shape_down_'+s)+'+ ( (!bVeto) && (!bReqTight) ))', 'samples':mc }

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

et = "35"
el_fr_file = basedir_fakes + "/plot_ElCh_JetEt"+et+"_l1_etaVpt_ptel_aseta_fw_ewk_2D.root" #No absolute value for fakes
mu_fr_file = basedir_fakes + "/plot_MuCh_JetEt"+et+"_l1_etaVpt_ptmu_fw_ewk_2D.root"
el_pr_file = os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2016v7/mva90pIso2016/ElePR.root"
mu_pr_file = os.getenv('CMSSW_BASE') + "/src/LatinoAnalysis/NanoGardener/python/data/fake_prompt_rates/Full2016v7/Tight80X/MuonPR.root"

aliases['FW_mu'+et+'_ele'+et] = { 
    'class': 'newFakeWeightOTFall',
    'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(el_pr_file), copy.deepcopy(mu_fr_file), copy.deepcopy(mu_pr_file), False, False, False),  #doabsEta=False, no stat variations
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/VBSjjlnu/macros/newfakeweight_OTFall.cc+'.format(configurations)
    ],     
    'samples': ["Fake"]
}

###################################3

# PU jet Id SF

puidSFSource = '{}/patches/PUID_81XTraining_EffSFandUncties.root'.format(configurations)

aliases['PUJetIdSF'] = {
    'linesToAdd': [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L %s/patches/pujetidsf_event_new.cc+' % configurations
    ],
    'class': 'PUJetIdEventSF',
    'args': (puidSFSource, '2018', 'loose'),
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


aliases['veto_fatjet_180'] = {
            'class': 'VetoFatJet',
            'args': (180.),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L {}/VBSjjlnu/Full2018v7/macros/veto_fatjet.cc+'.format(configurations)
            ]           
}

##########################3
# NLO/LO factors for Wjets
aliases['wjets_LOtoNLO'] = {
            'class': 'Wjets_LOtoNLO',
            'args': (),
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                '.L {}/VBSjjlnu/Full2018v7/corrections/wjets_LOtoNLO.cc+'.format(configurations)
            ] ,
            'samples': ['Wjets_HT']         
}


##################################

aliases['fatjet_TvsQCD'] = {
    'expr': 'FatJet_deepTag_TvsQCD[CleanFatJet_jetIdx[0]]'
}

aliases['fatjet_ZvsQCD'] = {
    'expr': 'FatJet_deepTag_ZvsQCD[CleanFatJet_jetIdx[0]]'
}

aliases['fatjet_WvsQCD'] = {
    'expr': 'FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[0]]'
}

aliases['fatjet_subjet1_pt'] = {
    'expr': 'SubJet_pt[FatJet_subJetIdx1[CleanFatJet_jetIdx[0]]]'
}

aliases['fatjet_subjet2_pt'] = {
    'expr': 'SubJet_pt[FatJet_subJetIdx2[CleanFatJet_jetIdx[0]]]'
}

aliases['fatjet_subjet_ptratio'] = {
    'expr': 'SubJet_pt[FatJet_subJetIdx2[CleanFatJet_jetIdx[0]]] / SubJet_pt[FatJet_subJetIdx1[CleanFatJet_jetIdx[0]]]'
}

###################################3
# QGL variables

aliases['vbs_0_qgl_res'] = {
    'class': 'QglVars',
    'args': ('vbs_0_qgl_res'),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/VBSjjlnu/Full2018v7/macros/qgl_vars.cc+'.format(configurations)
    ]   
} 

aliases['vbs_1_qgl_res'] = {
    'class': 'QglVars',
    'args': ('vbs_1_qgl_res'), 
} 

aliases['vjet_0_qgl_res'] = {
    'class': 'QglVars',
    'args': ('vjet_0_qgl_res'), 
} 

aliases['vjet_1_qgl_res'] = {
    'class': 'QglVars',
    'args': ('vjet_1_qgl_res'), 
} 

aliases['vbs_0_qgl_boost'] = {
    'class': 'QglVars',
    'args': ('vbs_0_qgl_boost'), 
} 

aliases['vbs_1_qgl_boost'] = {
    'class': 'QglVars',
    'args': ('vbs_1_qgl_boost'), 
} 


############################

aliases['tag_jets_systems_pt'] = {
    'class': 'TagJetsSystemsPt',
    'args': (),
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L {}/VBSjjlnu/macros/TagJetsSystemsPt.cc+'.format(configurations)
    ]   
}