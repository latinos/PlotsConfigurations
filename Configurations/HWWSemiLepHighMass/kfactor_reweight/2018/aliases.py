import os
import copy
import inspect
import numpy as np 

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2016
configurations = os.path.dirname(configurations) # Differential
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
## samples, signals
#signal_file = '2HDMa_signal.py'
#if os.path.exists(signal_file) :
#    handle = open(signal_file,'r')
#    exec(handle)
#    handle.close()
#else:
#    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')


mc = [skey for skey in samples if skey not in ('FAKE', 'DATA')]

wjets = [skey for skey in samples if skey.startswith('Wjets')]


eleWP    = 'mvaFall17V1Iso_WP90'
muWP     = 'cut_Tight_HWWW'


aliases['bWP'] = {
    'expr': '0.1241'
}
aliases['tau21WP'] = {
    'expr': '0.45'
}
#aliases['LepWPCut'] = {
#    'expr': '(Lepton_isTightElectron_'+eleWP+'[0] > 0.5 \
#            || Lepton_isTightMuon_'+muWP+'[0] > 0.5)'
#}
#aliases['Lep1WPCut'] = {
#    'expr': '(Alt$(Lepton_isTightElectron_'+eleWP+'[1], 0) > 0.5 \
#            || Alt$(Lepton_isTightMuon_'+muWP+'[1], 0) > 0.5)'
#}
#aliases['nTightLep'] = {
#    'expr': '(Sum$(Lepton_isTightElectron_'+eleWP+') + Sum$(Lepton_isTightMuon_'+muWP+'))',
#}
#

#aliases['resolvHiggsMT'] = {
#    # 'expr': 'HM_Hlnjj_mt'
#    'expr': 'TMath::Sqrt( 2*Lepton_pt[0]*PuppiMET_pt \
#    *( 1-TMath::Cos(Lepton_phi[0]-PuppiMET_phi) ) )'
#}
#
#aliases['HM_Hlnjj_MT'] = {
#    # 'expr': 'HM_Hlnjj_mt'
#    'expr': 'TMath::Sqrt( 2*HM_Wlep_pt_Puppi*HM_Whad_pt \
#    *( 1-TMath::Cos(HM_Wlep_phi_Puppi-HM_Whad_phi) ) )'
#}
#
#
#aliases['mass_HIGGS_FAT'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/getResBoo.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'getResBoo',
#    'args': 0
#}
#
#aliases['HvOverFat'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/getResBoo.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'getResBoo',
#    'args': 1
#}
#
#aliases['mass_HIGGS_JJ'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/getResBoo.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'getResBoo',
#    'args': 2
#}

#aliases['W_Lep_Gen'] ={
#    'expr' : 'TMath::Sqrt( (LeptonGen_pt[0]*TMath::Cos(LeptonGen_phi[0]) + NeutrinoGen_pt[0]*TMath::Cos(NeutrinoGen_phi[0]))*(LeptonGen_pt[0]*TMath::Cos(LeptonGen_phi[0]) + NeutrinoGen_pt[0]*TMath::Cos(NeutrinoGen_phi[0])) + (LeptonGen_pt[0]*TMath::Sin(LeptonGen_phi[0]) + NeutrinoGen_pt[0]*TMath::Sin(NeutrinoGen_phi[0]))*(LeptonGen_pt[0]*TMath::Sin(LeptonGen_phi[0]) + NeutrinoGen_pt[0]*TMath::Sin(NeutrinoGen_phi[0])))',
#}
#aliases['W_Lep_Gen'] ={
#    'expr' : 'TMath::Sqrt( (GenDressedLepton_pt[0]*TMath::Cos(GenDressedLepton_phi[0]) + NeutrinoGen_pt[0]*TMath::Cos(NeutrinoGen_phi[0]))*(GenDressedLepton_pt[0]*TMath::Cos(GenDressedLepton_phi[0]) + NeutrinoGen_pt[0]*TMath::Cos(NeutrinoGen_phi[0])) + (GenDressedLepton_pt[0]*TMath::Sin(GenDressedLepton_phi[0]) + NeutrinoGen_pt[0]*TMath::Sin(NeutrinoGen_phi[0]))*(GenDressedLepton_pt[0]*TMath::Sin(GenDressedLepton_phi[0]) + NeutrinoGen_pt[0]*TMath::Sin(NeutrinoGen_phi[0])))',
#}
##aliases['HvOverJJ'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/getResBoo.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'getResBoo',
#    'args': 3
#}
#
#aliases['HvOverLEP'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/getResBoo.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'getResBoo',
#    'args': 4
#}
#
#
#
#aliases['boosted_nocut_res'] = {
#    'expr': 'PuppiMET_pt > 40 \
#            && Alt$(CleanFatJet_pt[0], 0) > 200 \
#            && FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[0]] > 0.961 \
#            && Alt$(CleanFatJet_eta[0], 999) < 2.4'
#}
#aliases['two_jet_res'] ={
#    'expr': 'nCleanJet >= 2 \
#            && HM_idx_j1 >= 0 \
#            && !boosted_nocut_res[0] \
#            && PuppiMET_pt[0] > 30 \
#            && HM_idx_j2 >= 0 \
#            && HM_Hlnjj_MT[0] > 60 \
#            && HvOverJJ[0] > 0.4'
#}

#aliases['LHEPartWlepPt'] = {
#    'linesToAdd': ['.L %s/LHEPartWlepPt.cc+' % configurations],
#    'class': 'LHEPartWlepPt',
#    'samples': wjets,
#}
#data = np.genfromtxt(os.getenv('CMSSW_BASE')+'/src/LatinoAnalysis/Gardener/python/data/ewk/kewk_w.dat', skip_header=2, skip_footer=7)
#
#weight_string = "("
#uncert_string = "("
#for row in data:
#    low  = row[0]
#    high = row[1]
#    weight = (1+row[2])
#    ucert = row[3]
#
#    weight_string+="({}<LHEPartWlepPt[0] && LHEPartWlepPt[0]<={})\
#                    *{}+".format(low, high, weight)
#    uncert_string+="({}<LHEPartWlepPt[0] && LHEPartWlepPt[0]<={})\
#                    *{}+".format(low, high, weight)
## remove trailing + sign and close parentheses
#weight_string=weight_string[:-1]+")"
#uncert_string=uncert_string[:-1]+")"
#
#aliases['EWK_W_correction'] = {
#    'expr': weight_string,
#    'samples': wjets,
#}
#aliases['EWK_W_correction_uncert'] = {
#    'expr': uncert_string,
#    'samples': wjets,
#}
#
#
#
#
#aliases['gstarLow'] = {
#    'expr': '( Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4 )',
#    'samples': 'VgS'
#}
#aliases['gstarHigh'] = {
#    'expr': '( Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4 )',
#    'samples': 'VgS'
#}





# # B-Stuff
#vetoThreshold = 20
#reqThreshold  = 30
#boostedJetBVetoCondition = '(\
#CleanJet_pt[CleanJetNotFat_jetIdx] > {threshold} \
#&& abs(CleanJet_eta[CleanJetNotFat_jetIdx]) < 2.5 \
#)'
#resolvedJetBVetoCondition = '(\
#HM_idx_j1 >= 0 && HM_idx_j2 >= 0\
#&& CleanJet_pt > {threshold} && abs(CleanJet_eta) < 2.5 \
#&& CleanJet_jetIdx != CleanJet_jetIdx[HM_idx_j1] \
#&& CleanJet_jetIdx != CleanJet_jetIdx[HM_idx_j2] \
#)'
#
#bTagBoosted = '(Sum$(Jet_btagDeepB[CleanJet_jetIdx[CleanJetNotFat_jetIdx]] > bWP[0] \
#    && {0}) == 0)'.format(boostedJetBVetoCondition)
#bTagResolved = '(Sum$(Jet_btagDeepB[CleanJet_jetIdx] > bWP[0] && {0}) == 0)'\
#                .format(resolvedJetBVetoCondition)
#
#bTemplate = '((boosted_nocut_res[0]*{0}) || ( two_jet_res[0]*{1}))'.format(bTagBoosted, bTagResolved)
#
#aliases['bVeto'] = {
#    'expr': bTemplate.format(threshold=vetoThreshold)
#}
#aliases['bReq'] = {
#    'expr': '!'+bTemplate.format(threshold=reqThreshold)
#}
#
#bSF = 'TMath::Exp(Sum$(TMath::Log( \
#    {0} * Jet_btagSF_deepcsv_shape[CleanJet_jetIdx] + !{0} * 1 \
#    )))'.format('(CleanJet_pt > {threshold} && abs(CleanJet_eta) < 2.5)')
#
#aliases['bVetoSF'] = {
#    'expr': bSF.format(threshold=vetoThreshold),
#    'samples': mc
#}
#aliases['bReqSF'] = {
#    'expr': bSF.format(threshold=reqThreshold),
#    'samples': mc
#}
#
#aliases['btagSF'] = {
#    'expr': 'bVeto*bVetoSF + bReq*bReqSF + (!bVeto && !bReq)',
#    'samples': mc
#}
#
#for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:
#
#    for targ in ['bVeto', 'bReq']:
#        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
#        alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_up_%s' % shift)
#
#        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
#        alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_down_%s' % shift)
#
#
#    aliases['btagSF%sup' % shift] = {
#        'expr': 'bVeto*bVetoSF{shift}up + bReq*bReqSF{shift}up + (!bVeto && !bReq)'\
#                .format(shift = shift),
#        'samples': mc
#    }
#    aliases['btagSF%sdown' % shift] = {
#        'expr': 'bVeto*bVetoSF{shift}down + bReq*bReqSF{shift}down + (!bVeto && !bReq)'\
#                .format(shift = shift),
#        'samples': mc
#    }





# https://twiki.cern.ch/twiki/bin/viewauth/CMS/JetWtagging

#aliases['LepWPSF'] = {
#    'expr': '((Lepton_isTightElectron_'+eleWP+'[0] > 0.5) * Lepton_tightElectron_'+eleWP+'_TotSF[0] \
#    + (Lepton_isTightMuon_'+muWP+'[0] > 0.5)*Lepton_tightMuon_'+muWP+'_TotSF[0])',
#    'samples': mc
#}
## # variations of tight lepton WP
#aliases['SFweightEleUp'] = {
#    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF_Up[0]/Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
#    'samples': mc
#}
#aliases['SFweightEleDown'] = {
#    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF_Down[0]/Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
#    'samples': mc
#}
#aliases['SFweightMuUp'] = {
#    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF_Up[0]/Lepton_tightMuon_'+muWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
#    'samples': mc
#}
#aliases['SFweightMuDown'] = {
#    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF_Down[0]/Lepton_tightMuon_'+muWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
#    'samples': mc
#}




# # PU jet Id SF
# puidSFSource = '%s/src/PlotsConfigurations/Configurations/patches/PUID_81XTraining_EffSFandUncties.root' % os.getenv('CMSSW_BASE')

# aliases['PUJetIdSF'] = {
#     'linesToAdd': [
#         'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
#         '.L %s/src/PlotsConfigurations/Configurations/patches/pujetidsf_event_new.cc+' % os.getenv('CMSSW_BASE')
#     ],
#     'class': 'PUJetIdEventSF',
#     'args': (puidSFSource, '2016', 'loose'),
#     'samples': mc
# }


#aliases['PUJetIdSF'] = {
#    'expr' : 'TMath::Exp(Sum$( \
#        (Jet_jetId>=2 \
#        && ( (Jet_electronIdx1 != Lepton_electronIdx[0]) || Jet_electronIdx1 < 0 )  \
#        && ( (Jet_muonIdx1 != Lepton_muonIdx[0] ) || Jet_muonIdx1 < 0 ) \
#        )*TMath::Log(Jet_PUIDSF_loose)\
#    ))',
#  'samples': mc
#}
#
#
#aliases['passSingleElectronHLT']= {
#    'expr':'HLT_Ele27_WPTight_Gsf'
#}





#aliases['SFweight'] = {
#    'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l', 'EMTFbug_veto', 'LepWPSF[0]', 'btagSF[0]', 'PUJetIdSF[0]']),
#    'samples': mc
#}








###### PromptGenMatch ######

## gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
#aliases['PromptGenLepMatch1l'] = {
#    'expr': 'Alt$(Lepton_promptgenmatched[0], 0)',
#    'samples': mc
#}

###### bVeto ######

## Clash fix was needed in v6
#aliases['idx_j1'] = {
#    'expr': 'HM_idx_j1',
#    'samples': new_samples
#}
#aliases['idx_j2'] = {
#    'expr': 'HM_idx_j2',
#    'samples': new_samples
#}


# Gen W stuff
lastcopy = (1 << 13)
aliases['GenW_pt'] = {
    'expr': '(Sum$((GenPart_pt)*(abs(GenPart_pdgId) == 24 && (GenPart_statusFlags & '+str(lastcopy)+'))) - 1*(Sum$(abs(GenPart_pdgId) == 24 && (GenPart_statusFlags & '+str(lastcopy)+') == 0)))',
    'samples': mc
}
aliases['GenW_mass'] = {
    'expr': '(Sum$((GenPart_mass)*(abs(GenPart_pdgId) == 24 && (GenPart_statusFlags & '+str(lastcopy)+'))) - 1*(Sum$(abs(GenPart_pdgId) == 24 && (GenPart_statusFlags & '+str(lastcopy)+') == 0)))',
    'samples': mc
}
aliases['nGenW'] = {
    'expr': '(Sum$(abs(GenPart_pdgId) == 24 && (GenPart_statusFlags & '+str(lastcopy)+')))',
    'samples': mc
}
aliases['GenW_mt'] = {
    'expr': 'TMath::Sqrt(GenW_mass*GenW_mass + GenW_pt*GenW_pt)*(nGenW[0] == 1) - 1*(nGenW[0] == 0)',
    'samples': mc
}

aliases['genW_pt'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/scripts/getGenWpt.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'getGenWpt',
    'samples': mc
}
aliases['nCleanGenJet'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/kfactor_reweight/ngenjet.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'CountGenJet',
    'samples': wjets,
}

#aliases['Wrecoil'] = {
#    'linesToAdd': [
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
#        '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/scripts/getGenWrecoil.cc+' % os.getenv('CMSSW_BASE')
#    ],
#    'class': 'getGenWrecoil',
#    'samples': mc
#}

#aliases['kfact'] = {
#    'linesToAdd': [
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
#	'gSystem->Load("%s/src/JHUGenMELA/MELA/data/%s/libmcfm_707.so","", kTRUE);'%(os.getenv('CMSSW_BASE'), os.getenv('SCRAM_ARCH')),
#        'gSystem->Load("libJHUGenMELAMELA.so","", kTRUE);',
#        '.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/kFactorUnc2.cc+' % os.getenv('CMSSW_BASE')
#    ],
#    'class': 'kFactorUnc2',
#    'args': ('PlotsConfigurations/Configurations/HWWSemiLepHighMass/kfactor_reweight/2018/HT_to_NLO_QCD_k_factors_n_stud_2.root', 'k_factor_2018'),
#    'samples': wjets, 
#    #'samples': "Wjets"
#}
#aliases['kfact'] = {
#    'linesToAdd': [
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
#        '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/scripts/k_factor_unc2.cc+' % os.getenv('CMSSW_BASE')
#    ],
#    'class': 'kFactorUnc2',
#    'args': ('PlotsConfigurations/Configurations/monoHWW/SemiLep/Wjets_kfactors/HT_to_NLO_QCD_k_factors3.root', 'k_factor_2018'),
#    'samples': ['Wjets_HTkf']
#}
