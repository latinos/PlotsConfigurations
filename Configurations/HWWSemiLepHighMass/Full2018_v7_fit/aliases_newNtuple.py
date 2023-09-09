import os
import csv
import copy
import inspect
import numpy as np

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2017v7
configurations = os.path.dirname(configurations) # HM
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('FAKE', 'DATA')]
mc_deep =[skey for skey in samples if skey not in ['DY', 'Wjets', 'Vg', 'VgS','VZ', 'FAKE', 'DATA', 'VVV', 'ZH_htt', 'WH_htt', 'ggH_htt', 'qqH_htt']]  
wjets = [skey for skey in samples if skey.startswith('Wjets')]
top = [skey for skey in samples if skey.startswith('top')]


eleWP    = 'mvaFall17V1Iso_WP90'
muWP     = 'cut_Tight_HWWW'

#aliases['DNN_isVBF_OTF'] = {
#    'class': 'DNNprodSemi',
#    'linesToAdd':[
#        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#        'gSystem->Load("libDNNEvaluator.so")',
#        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_prod_semi.cc+' % os.getenv('CMSSW_BASE'),
#    ],
#}

#aliases['btagJetPt_resolv'] = {
 #   'linesToAdd': [
 #       '.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/btagJetPt.cc+' % os.getenv('CMSSW_BASE')
 #   ],
 #   'class': 'BtagJetPt',
 #   'args': ('resolved', '2016')
#}
#aliases['btagJetPt_boost'] = {
 #   'linesToAdd': [
  #      '.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/btagJetPt.cc+' % os.getenv('CMSSW_BASE')
   # ],
   # 'class': 'BtagJetPt',
   # 'args': ('boosted', '2016')
#}

aliases['mjjGen_OTF'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/HighMass/HMvars_mjjgen.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'HMvarsmjjgen',
    'samples': [skey for skey in samples if "QQHSBI" in skey or skey in ['WW', 'qqWWqq', 'WW2J', 'DYveto']]
}

aliases['bWP'] = {
    'expr': '0.1241'
}
aliases['tau21WP'] = {
    'expr': '0.45'
}
aliases['LepWPCut'] = {
    'expr': '(Lepton_isTightElectron_'+eleWP+'[0] > 0.5 \
            || Lepton_isTightMuon_'+muWP+'[0] > 0.5)'
}
aliases['Lep1WPCut'] = {
    'expr': '(Alt$(Lepton_isTightElectron_'+eleWP+'[1], 0) > 0.5 \
            || Alt$(Lepton_isTightMuon_'+muWP+'[1], 0) > 0.5)'
}
aliases['nTightLep'] = {
    'expr': '(Sum$(Lepton_isTightElectron_'+eleWP+') + Sum$(Lepton_isTightMuon_'+muWP+'))',
}


aliases['resolvHiggsMT'] = {
    # 'expr': 'HM_Hlnjj_mt'
    'expr': 'TMath::Sqrt( 2*Lepton_pt[0]*PuppiMET_pt \
    *( 1-TMath::Cos(Lepton_phi[0]-PuppiMET_phi) ) )'
}

aliases['HM_Hlnjj_MT'] = {
    # 'expr': 'HM_Hlnjj_mt'
    'expr': 'TMath::Sqrt( 2*HM_Wlep_pt_Puppi*HM_Whad_pt \
    *( 1-TMath::Cos(HM_Wlep_phi_Puppi-HM_Whad_phi) ) )'
}

#aliases['WptOvFat_nocut'] = {
#    # 'expr': 'HM_Hlnjj_mt'
#    'expr': ' TMath::Sqrt( 2*HM_Wlep_pt_Puppi*HM_Whad_pt)'
#}
#
#
#aliases['WptOvHak4M_nocut'] = {
#    'expr': 'min(HM_Wlep_pt_Puppi,HM_Whad_pt)/Hlnjj_mass_HM' 
#}
#

aliases['idxCleanFatJetW'] = {
    'expr': '(HM_idxWfat_noTau21Cut*(HM_idxWfat_noTau21Cut>=0) + 999*(HM_idxWfat_noTau21Cut<0))'
}

aliases['tau21Cut'] = {
    'expr': '(Alt$(CleanFatJet_tau21[idxCleanFatJetW], 1) < tau21WP)'
}

eff_tr_dir = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/TriggEff/fixedTextfiles/"
aliases['ele_trig_eff'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/triggerEff_1lep.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'TrigEff_1lep',
    'args': (eff_tr_dir+'2018/mvaid/Ele32_pt_eta_efficiency_withSys_Run2018.txt'),
    'samples': mc
}

aliases['TriggerEffWeight_1l_fixed'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff[0] +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l',
    'samples': mc
}

aliases['TriggerEffWeight_1l_fixed_u'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff[1] +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l_u',
    'samples': mc
}

aliases['TriggerEffWeight_1l_fixed_d'] = {
    'expr': '(abs(Lepton_pdgId[0])==11)*ele_trig_eff[2] +  (abs(Lepton_pdgId[0])==13)*TriggerEffWeight_1l_d',
    'samples': mc
}


aliases['hole_ex'] = {
    'expr': '( ((Lepton_eta[0] < -1.3 && Lepton_eta[0] > -2.5) && (Lepton_phi[0] >-1.57 && Lepton_phi[0] < -0.87) && (abs(Lepton_pdgId[0])==11)) || ((Alt$(CleanJet_eta[0], 99) < -1.3 && (Alt$(CleanJet_eta[0], -99) > -2.5 ) )&& ( Alt$(CleanJet_phi[0], -99) > -1.57 && Alt$(CleanJet_phi[0], 99) < -0.87)) || ((Alt$(CleanJet_eta[1], 99) < -1.3 && (Alt$(CleanJet_eta[1], -99) > -2.5 ) ) && ( Alt$(CleanJet_phi[1], -99) > -1.57 && Alt$(CleanJet_phi[1], 199) < -0.87))) ',
}



aliases['boosted'] = {
    'expr': 'PuppiMET_pt > 40 \
            && Alt$(HM_CleanFatJetPassMBoosted_pt[0], 0) > 200 \
            && Alt$(HM_CleanFatJetPassMBoosted_WptOvHfatM[0], 0) > 0.4 \
            && Alt$(HM_CleanFatJetPassMBoosted_tau21[0], 999) < tau21WP[0] \
            && Alt$(HM_CleanFatJetPassMBoosted_mass[0], 0) > 40 \
            && abs(Alt$(HM_CleanFatJetPassMBoosted_eta[0], 999)) < 2.4'
}
#aliases['boostedNoTau21'] = {
#    'expr': 'PuppiMET_pt > 40 \
#            && idxCleanFatJetW != 999 \
#            && Alt$(CleanFatJet_pt[idxCleanFatJetW], 0) > 200 \
#            && Alt$(CleanFatJet_pt[idxCleanFatJetW], 0) / HM_HlnFatMass_noTau21Cut > 0.4 \
#            && HM_HlnFatMass_noTau21Cut > 0 && HM_Wlep_pt_Puppi / HM_HlnFatMass_noTau21Cut > 0.4 \
#            && Alt$(CleanFatJet_mass[idxCleanFatJetW], 0) > 40 \
#            && Alt$(CleanFatJet_eta[idxCleanFatJetW], 999) < 2.4'
#}
#
aliases['resolved'] = {
    'expr': '!boosted[0] \
            && PuppiMET_pt > 30 \
            && HM_WptOvHak4M > 0.35 \
            && resolvHiggsMT > 60 \
            && HM_Whad_pt > 30'
}

aliases['boostedSignalWMassNoTau21'] = {
    'expr': '(65 < Alt$(CleanFatJet_mass[idxCleanFatJetW], 0) \
            && Alt$(CleanFatJet_mass[idxCleanFatJetW], 999) < 105)'
}

aliases['resolvedSignalWMass'] = {
    'expr': '(65 < HM_Whad_mass && HM_Whad_mass < 105)'
}

aliases['boostedSidebandWMass'] = {
    'expr': '(40 < Alt$(CleanFatJet_mass[0], 0) \
            && Alt$(CleanFatJet_mass[0], 999) < 250)'
}
aliases['boostedSidebandWMassNoTau21'] = {
    'expr': '(40 < Alt$(CleanFatJet_mass[idxCleanFatJetW], 0) \
            && Alt$(CleanFatJet_mass[idxCleanFatJetW], 999) < 250)'
}

aliases['lowBoostedSidebandWMass'] = {
    'expr': '(40 < Alt$(HM_CleanFatJetPassMBoosted_mass[0], 0) \
            && Alt$(HM_CleanFatJetPassMBoosted_mass[0], 999) < 65)'
}
aliases['highBoostedSidebandWMass'] = {
    'expr': '(105 < Alt$(HM_CleanFatJetPassMBoosted_mass[0], 0) \
            && Alt$(HM_CleanFatJetPassMBoosted_mass[0], 999) < 250)'
}


aliases['resolvedSidebandWMass'] = {
    'expr': '(40 < HM_Whad_mass && HM_Whad_mass < 250)'
}

aliases['lowResolvedSidebandWMass'] = {
    'expr': '(40 < HM_Whad_mass && HM_Whad_mass < 65)'
}
aliases['highResolvedSidebandWMass'] = {
    'expr': '(105 < HM_Whad_mass && HM_Whad_mass < 250)'
}






#aliases['resolvedQCDcr'] = {
#    'expr': 'resolvedSignalWMass \
#            && HM_Wlep_mt < 50 && 0 < resolvHiggsMT \
#            && resolvHiggsMT < 60 && HM_WptOvHak4M < 0.35'
#}
#aliases['resolvedQCDSR'] = {
#    'expr': '!boosted[0] \
#            && resolvedSignalWMass \
#            && PuppiMET_pt > 30 \
#            && HM_WptOvHak4M > 0.35 \
#            && resolvHiggsMT > 60 \
#            && HM_Whad_pt > 30'
#}
# boostedQCDcr not possible RN since boosted W candidate always fulfills WptOvHfatM > 0.4


aliases['tau21DDT'] = {
    'expr': '( Alt$(CleanFatJet_tau21[idxCleanFatJetW], -999) + 0.080 * TMath::Log( Alt$(CleanFatJet_mass[idxCleanFatJetW]*CleanFatJet_mass[idxCleanFatJetW], 0) / Alt$(CleanFatJet_pt[idxCleanFatJetW], 1) ) )'
}
# smaller angle is: a-b - (a-b > 3.1416)*2*3.1416 + (a-b < -3.1416)*2*3.1416
aliases['dPhi_WW_boosted'] = {
    'expr': '( HM_Wlep_phi_Puppi - Alt$(HM_CleanFatJetPassMBoosted_phi[0], 0)\
- (HM_Wlep_phi_Puppi - Alt$(HM_CleanFatJetPassMBoosted_phi[0], 0) > 3.1416)*2*3.1416\
+ (HM_Wlep_phi_Puppi - Alt$(HM_CleanFatJetPassMBoosted_phi[0], 0) < -3.1416)*2*3.1416 )',
}
aliases['dPhi_WW_resolved'] = {
    'expr': '( HM_Wlep_phi_Puppi - HM_Whad_phi\
    - (HM_Wlep_phi_Puppi - HM_Whad_phi > 3.1416)*2*3.1416 \
    + (HM_Wlep_phi_Puppi - HM_Whad_phi < -3.1416)*2*3.1416 )',
}
aliases['dPhi_LNu'] = {
    'expr': '( Lepton_phi[0] - PuppiMET_phi\
    - (Lepton_phi[0] - PuppiMET_phi > 3.1416)*2*3.1416 \
    + (Lepton_phi[0] - PuppiMET_phi < -3.1416)*2*3.1416 )',
}

aliases['deltaR'] = {
    'expr' : 'TMath::Sqrt((HM_Whad_phi - Alt$(CleanFatJet_phi[0],0))*(HM_Whad_phi - Alt$(CleanFatJet_phi[0],0)) + (HM_Whad_eta - Alt$(CleanFatJet_eta[0],0))*(HM_Whad_eta - Alt$(CleanFatJet_eta[0],0))) '
}

aliases['isJetBoo'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_making.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'FatJet_making',
    'args': 0
}

aliases['nCleanJetOverlap'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_making.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'FatJet_making',
    'args': 1
}

aliases['FatJet_idx_clean'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_making.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'FatJet_making',
    'args': 2
}
aliases['FatJet_Num'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_making.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'FatJet_making',
    'args': 3
}

aliases['CleanJet_notOverlapping'] = { 
    'linesToAdd': [
	'gSystem->Load("%s/src/JHUGenMELA/MELA/data/%s/libmcfm_707.so","", kTRUE);'%(os.getenv('CMSSW_BASE'), os.getenv('SCRAM_ARCH')),
        'gSystem->Load("libJHUGenMELAMELA.so","", kTRUE);',
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_JetExcluding.cc+' % os.getenv('CMSSW_BASE')
    ],  
    'class': 'FatJet_JetExcluding',
}
#aliases['idx_JetOver'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_making.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_making',
#    'args': 2
#}

aliases['mass_HIGGS_FAT'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/getResBoo_var.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'getResBoo_var',
    'args': 0
}

aliases['HvOverFat'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/getResBoo_var.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'getResBoo_var',
    'args': 1
}
aliases['mass_HIGGS_JJ'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/getResBoo_var.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'getResBoo_var',
    'args': 2
}

aliases['HvOverJJ'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/getResBoo_var.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'getResBoo_var',
    'args': 3
}

aliases['HvOverLEP'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/getResBoo_var.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'getResBoo_var',
    'args': 4
}

aliases['mass_HIGGS_FAT_fatjetJERup'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'FatJet_Unc',
    'args': (0,'jerUp')
}

aliases['mass_HIGGS_FAT_fatjetJERdo'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'FatJet_Unc',
    'args': (0,'jerDo')
}

aliases['HvOverFat_fatjetJERup'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'FatJet_Unc',
    'args': (1,'jerUp')
}

aliases['HvOverFat_fatjetJERdo'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'FatJet_Unc',
    'args': (1,'jerDo')
}
aliases['FatJet_mass_nom_fatjetJERup'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'FatJet_Unc',
    'args': (2,'jerUp')
}

aliases['FatJet_mass_nom_fatjetJERdo'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'FatJet_Unc',
    'args': (2,'jerDo')
}
aliases['FatJet_pt_fatjetJERup'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'FatJet_Unc',
    'args': (3,'jerUp')
}

aliases['FatJet_pt_fatjetJERdo'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'FatJet_Unc',
    'args': (3,'jerDo')
}
aliases['nCleanFatJet_fatjetJERup'] = {
    'expr': 'nCleanFatJet[0]',
}

aliases['nCleanFatJet_fatjetJERdo'] = {
    'expr': 'nCleanFatJet[0]',
}
aliases['HM_Whad_pt_fatjetJERup'] = {
    'expr': 'HM_Whad_pt[0]',
}

aliases['HM_Whad_pt_fatjetJERdo'] = {
    'expr': 'HM_Whad_pt[0]',
}
#aliases['mass_HIGGS_FAT_fatjetJMRup'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_Unc',
#    'args': (0,'jmrUp')
#}
#
#aliases['mass_HIGGS_FAT_fatjetJMRdo'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_Unc',
#    'args': (0,'jmrDo')
#}
#
#aliases['FatJet_pt_fatjetJERdo'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_Unc',
#    'args': (2,'jerDo')
#}
#
#aliases['FatJet_pt_fatjetJERup'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_Unc',
#    'args': (2,'jerDo')
#}
#aliases['Higgs_Mass_JmrUp'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_Unc',
#    'args': (0,'jmrUp')
#}
#
#aliases['Higgs_Mass_JmrDo'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_Uncertainties.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_Unc',
#    'args': (0,'jmrDo')
#}
aliases['boosted_nocut'] = {
    'expr': 'PuppiMET_pt > 40 \
            && isJetBoo > 0 \
            && Alt$(FatJet_pt[FatJet_idx_clean], 0) > 200 \
            && Alt$(FatJet_eta[FatJet_idx_clean], 999) < 2.4'
}

aliases['boosted_nocut_res'] = {
    'expr': 'PuppiMET_pt > 40 \
            && isJetBoo > 0 \
            && Alt$(FatJet_pt_nom[FatJet_idx_clean], 0) > 200 \
            && Alt$(FatJet_deepTag_WvsQCD[FatJet_idx_clean[0]],0) > 0.961 \
            && Alt$(FatJet_eta[FatJet_idx_clean], 999) < 2.4'
}
aliases['resolved_nocut'] = {
    'expr': 'nCleanJet >= 2 \
            && HM_Whad_mass > 0 \
            && CleanJet_pt[0] > 30 \
            && PuppiMET_pt[0] > 30 \
            && CleanJet_pt[1] > 30'
}



#    'expr': 'deltaR < 1 \
#            && nCleanFatJet >= 1 \
#            && nCleanJet >= 2 \
#            && CleanJet_pt[0] > 30 \
#            && CleanJet_pt[1] > 30 \
#            && PuppiMET_pt[0] > 40 \
#            && Alt$(CleanFatJet_pt[idxCleanFatJetW], 0) > 200 \
#            && Alt$(CleanFatJet_eta[idxCleanFatJetW], 999) < 2.4'
#}
#
#
#aliases['fat_jet'] ={
#    'expr': 'nCleanFatJet >= 1 '
#}
#
#aliases['boosted_nocut_tau_up'] = {
#    'expr': 'PuppiMET_pt > 40 \
#            && Alt$(CleanFatJet_pt[0], 0) > 200 \
#            && FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[0]] > 0.961 \
#            && Alt$(CleanFatJet_eta[0], 999) < 2.4'
#}
#
#aliases['boosted_nocut_tau_down'] = {
#    'expr': 'PuppiMET_pt > 40 \
#            && Alt$(CleanFatJet_pt[0], 0) > 200 \
#            && FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[0]] < 0.961 \
#            && Alt$(CleanFatJet_eta[0], 999) < 2.4'
#}

aliases['boostedSignalWMass'] = {
    'expr': '(isJetBoo > 0 && (65 < FatJet_msoftdrop_nom[FatJet_idx_clean] \
            && FatJet_msoftdrop_nom[FatJet_idx_clean] < 105))'
}
aliases['two_jet_res'] ={
    'expr': 'nCleanJet >= 2 \
            && HM_idx_j1 >= 0 \
            && !boosted_nocut_res[0] \
            && PuppiMET_pt[0] > 30 \
            && HM_idx_j2 >= 0 \
            && HM_Hlnjj_MT[0] > 60 \
            && HvOverJJ[0] > 0.35'
}
#aliases['boosted_nocut_res_gen'] ={
#    'expr': 'Sum$(GenJetAK8_pt>180)>0'
#}
#
#aliases['two_jet_res_gen'] ={
#    'expr': 'nCleanJet >= 2 \
#            && (Sum$(GenJetAK8_pt>180)==0)'
#}
#aliases['boosted_nocut_do'] = {
#    'expr': 'PuppiMET_pt > 40 \
#            && Alt$(CleanFatJet_pt[0], 0) > 200 \
#            && FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[0]] > 0.961 \
#            && HvOverFat < 0.3 \
#            && Alt$(CleanFatJet_eta[0], 999) < 2.4'
#}
#aliases['boosted_fat_jet'] = {
#    'expr': 'PuppiMET_pt > 40 \
#            && Alt$(CleanFatJet_pt[0], 0) > 200 \
#            && FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[0]] > 0.961 \
#            && HvOverFat > 0.4 \
#            && Alt$(CleanFatJet_eta[0], 999) < 2.4'
#}
#
#            # && idxCleanFatJetW != 999 \
#
#aliases['two_jet_res'] ={
#    'expr': 'nCleanJet >= 2 \
#            && !boosted_fat_jet[0] \
#            && HM_idx_j1 != 0 \
#            && PuppiMET_pt[0] > 30 \
#            && HM_Hlnjj_MT[0] > 60 \
#            && HvOverJJ[0] > 0.4 \
#            && HM_idx_j2 != 0'
#}


aliases['LHEPartWlepPt'] = {
    'linesToAdd': ['.L %s/HWWSemiLepHighMass/LHEPartWlepPt.cc+' % configurations],
    'class': 'LHEPartWlepPt',
    'samples': 'Wjets'
}
data = np.genfromtxt(os.getenv('CMSSW_BASE')+'/src/LatinoAnalysis/Gardener/python/data/ewk/kewk_w.dat', skip_header=2, skip_footer=7)

weight_string = "("
uncert_string = "("
for row in data:
    low  = row[0]
    high = row[1]
    weight = (1+row[2])
    ucert = row[3]

    weight_string+="({}<LHEPartWlepPt[0] && LHEPartWlepPt[0]<={})\
                    *{}+".format(low, high, weight)
    uncert_string+="({}<LHEPartWlepPt[0] && LHEPartWlepPt[0]<={})\
                    *{}+".format(low, high, weight)
# remove trailing + sign and close parentheses
weight_string=weight_string[:-1]+")"
uncert_string=uncert_string[:-1]+")"

aliases['EWK_W_correction'] = {
    'expr': weight_string,
    'samples': 'Wjets'
}
aliases['EWK_W_correction_uncert'] = {
    'expr': uncert_string,
    'samples': 'Wjets'
}




aliases['gstarLow'] = {
    'expr': '( Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4 )',
    'samples': 'VgS'
}
aliases['gstarHigh'] = {
    'expr': '( Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4 )',
    'samples': 'VgS'
}



aliases['GenLHE'] = {
'expr': '(Sum$(LHEPart_pdgId == 21) == 0)',
'samples': [x for x in samples if x in ['qqWWqq', 'WW2J'] or 'QQHSBI' in x]
}



aliases['genW_pt'] = {
    'linesToAdd': [
	'gSystem->Load("%s/src/JHUGenMELA/MELA/data/%s/libmcfm_707.so","", kTRUE);'%(os.getenv('CMSSW_BASE'), os.getenv('SCRAM_ARCH')),
        'gSystem->Load("libJHUGenMELAMELA.so","", kTRUE);',
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/scripts/getGenWpt.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'getGenWpt',
    'samples': mc
}

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

aliases['res_idx_j1'] = {
    'expr': '((two_jet_res[0]==1)*CleanJet_jetIdx[Alt$(HM_idx_j1 >= 0, 0)*HM_idx_j1] + !two_jet_res[0]*-9989.)'
}
aliases['res_idx_j2'] = {
    'expr': '((two_jet_res[0]==1)*CleanJet_jetIdx[Alt$(HM_idx_j2 >= 0, 0)*HM_idx_j2]+ !two_jet_res[0]*-9989.)'
}
bJetV_req = '(two_jet_res[0] && CleanJet_pt > 20 && abs(CleanJet_eta) < 2.5 && CleanJet_jetIdx != res_idx_j1[0] && CleanJet_jetIdx != res_idx_j2[0])'
bJetR_req = '(two_jet_res[0] && CleanJet_pt > 30 && abs(CleanJet_eta) < 2.5 && CleanJet_jetIdx != res_idx_j1[0] && CleanJet_jetIdx != res_idx_j2[0])'

aliases['nbJet'] = {
    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx] > bWP[0] && CleanJet_pt > 30)',
}

aliases['bVeto'] = {
    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx] > bWP[0] && '+bJetV_req+' ) == 0',
}

aliases['bReq'] = {
    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx] > bWP[0] && '+bJetR_req+' ) >= 1',
}
aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log('+bJetV_req+'*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(!'+bJetV_req+'))))',
    'samples': mc
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log('+bJetR_req+'*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx]+1*(!'+bJetR_req+'))))',
    'samples': mc
}

bJetV_req_boo = '(CleanJet_pt[CleanJet_notOverlapping] > 20 && abs(CleanJet_eta[CleanJet_notOverlapping]) < 2.5  && isJetBoo[0])'
bJetR_req_boo = '(CleanJet_pt[CleanJet_notOverlapping] > 30 && abs(CleanJet_eta[CleanJet_notOverlapping]) < 2.5 && isJetBoo[0])'

aliases['bVeto_boo'] = {
    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx[CleanJet_notOverlapping]] > bWP[0] && '+bJetV_req_boo+' ) == 0',
}

aliases['bReq_boo'] = {
    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx[CleanJet_notOverlapping]] > bWP[0] && '+bJetR_req_boo+' ) >= 1',
}
aliases['bVeto_booSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log('+bJetV_req_boo+'*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx[CleanJet_notOverlapping]]+1*(!'+bJetV_req_boo+'))))',
    'samples': mc
}

aliases['bReq_booSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log('+bJetR_req_boo+'*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx[CleanJet_notOverlapping]]+1*(!'+bJetR_req_boo+'))))',
    'samples': mc
}
aliases['btagSF'] = {
    'expr': 'two_jet_res[0]*(bVetoSF[0]*bVeto[0] + bReqSF[0]*bReq[0]) + boosted_nocut_res[0]*(bVeto_booSF[0]*bVeto_boo[0] + bReq_booSF[0]*bReq_boo[0])',
    'samples': mc
}
for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:

    for targ in ['bVeto', 'bReq', 'bVeto_boo', 'bReq_boo']:
        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_up_%s' % shift)

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_down_%s' % shift)


    aliases['btagSF%sup' % shift] = {
       # 'expr': 'bVeto*bVetoSF{shift}up + bReq*bReqSF{shift}up + (!bVeto && !bReq)'\
        'expr': 'two_jet_res*(bVetoSF{shift}up*bVeto + bReqSF{shift}up*bReq) + boosted_nocut_res*(bVeto_booSF{shift}up*bVeto_boo + bReq_booSF{shift}up*bReq_boo)'\
                .format(shift = shift),
        'samples': mc
    }
    aliases['btagSF%sdown' % shift] = {
      #  'expr': 'bVeto*bVetoSF{shift}down + bReq*bReqSF{shift}down + (!bVeto && !bReq)'\
        'expr': 'two_jet_res*(bVetoSF{shift}down*bVeto + bReqSF{shift}down*bReq) + boosted_nocut_res*(bVeto_booSF{shift}down*bVeto_boo + bReq_booSF{shift}down*bReq_boo)'\
                .format(shift = shift),
        'samples': mc
    }





#aliases['bVetoSF_boo'] = {
#    'expr': 'TMath::Exp(Sum$(TMath::Log('+bJetV_req_boo+'*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx[CleanJetNotFat_jetIdx]]+1*(!'+bJetV_req_boo+'))))',
#    'samples': mc
#}
#
#aliases['bReqSF_boo'] = {
#    'expr': 'TMath::Exp(Sum$(TMath::Log('+bJetR_req_boo+'*Jet_btagSF_deepcsv_shape[CleanJet_jetIdx[CleanJetNotFat_jetIdx]]+1*(!'+bJetR_req_boo+'))))',
#    'samples': mc
#}
#aliases['btagSF'] = {
#    'expr': 'two_jet_res[0]*(bVetoSF[0]*bVeto[0] + bReqSF[0]*bReq[0]) + boosted_nocut_res[0]*(bVetoSF_boo[0]*bVeto_boo[0] + bReqSF_boo[0]*bReq_boo[0])',
#    'samples': mc
#}
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
#aliases['WtagSF'] = {
#    'expr': '(boostedNoTau21[0] * (1.0*tau21Cut[0] + 0.96*!tau21Cut[0]) + (1-boostedNoTau21[0]))',
#    'samples': mc
#}
#aliases['SFWtagUp'] = {
#    'expr': '(boostedNoTau21[0] * (1.06*tau21Cut[0] + 0.89*!tau21Cut[0]) + (1-boostedNoTau21[0]))',
#    'samples': mc
#}
#aliases['SFWtagDown'] = {
#    'expr': '(boostedNoTau21[0] * (0.94*tau21Cut[0] + 1.11*!tau21Cut[0]) + (1-boostedNoTau21[0]))',
#    'samples': mc
#}






aliases['LepWPSF'] = {
    'expr': '((Lepton_isTightElectron_'+eleWP+'[0] > 0.5) * Lepton_tightElectron_'+eleWP+'_TotSF[0] \
    + (Lepton_isTightMuon_'+muWP+'[0] > 0.5)*Lepton_tightMuon_'+muWP+'_TotSF[0])',
    'samples': mc
}
# # variations of tight lepton WP
aliases['SFweightEleUp'] = {
    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF_Up[0]/Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
    'samples': mc
}
aliases['SFweightEleDown'] = {
    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF_Down[0]/Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
    'samples': mc
}
aliases['SFweightMuUp'] = {
    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF_Up[0]/Lepton_tightMuon_'+muWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
    'samples': mc
}
aliases['SFweightMuDown'] = {
    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF_Down[0]/Lepton_tightMuon_'+muWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
    'samples': mc
}




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


aliases['PUJetIdSF'] = {
    'expr' : 'TMath::Exp(Sum$( \
        (Jet_jetId>=2 \
        && ( (Jet_electronIdx1 != Lepton_electronIdx[0]) || Jet_electronIdx1 < 0 )  \
        && ( (Jet_muonIdx1 != Lepton_muonIdx[0] ) || Jet_muonIdx1 < 0 ) \
        )*TMath::Log(Jet_PUIDSF_loose)\
    ))',
  'samples': mc
}

aliases['DeltaR_comp'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_matching.cc+'  % os.getenv('CMSSW_BASE')],
    'class': 'FatJet_matching',
    'args': 0,
    'samples': mc,
}

aliases['deltaR_ov'] = {
    'expr' : 'DeltaR_comp < 0.8 ',
    'samples': mc
}

aliases['FatJet_tau21'] = {
    'expr' : 'FatJet_tau2/FatJet_tau1',
}

with open(configurations+'/HWWSemiLepHighMass/DeepAK8V2_W_SFs.csv') as csvfile:
    reader = csv.DictReader(row for row in csvfile if not row.startswith('#'))
    deepAK8Dict = dict()
    for row in reader:
        name = '{y}_{ver}_{mtr}_{pT_l}_{pT_h}'.format(
            y    = row['Year'],
            ver  = row['version'],
            mtr  = row['MistaggingRate[%]'],
            pT_l = row['pT_low[GeV]'],
            pT_h = row['pT_high[GeV]']
        )
        deepAK8Dict[name]         = str(row['SF'])
        deepAK8Dict[name+'_up']   = str(float(row['SF'])+float(row['SF_upperErr']))
        deepAK8Dict[name+'_down'] = str(float(row['SF'])+float(row['SF_lowerErr']))
# 200 300
# 300 400
# 400 800
year = '2018'
mtr = '0p5'
aliases['DeepAK8_SF'] = {
    'expr': "( 1 * !boosted_nocut_res[0] + boosted_nocut_res[0]*( 1*!deltaR_ov[0] + deltaR_ov[0]*( " +\
        \
        deepAK8Dict[year+'_Nominal_'+mtr+'_200_300'] +\
        "* (100 < Alt$(FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)\
        && Alt$(FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0) < 300)   +" +\
        \
        deepAK8Dict[year+'_Nominal_'+mtr+'_300_400'] +\
        "* (300 < Alt$(FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0) \
        && Alt$(FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0) < 400)   +" +\
        \
        deepAK8Dict[year+'_Nominal_'+mtr+'_400_800'] +\
        "* (400 < Alt$(FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0))  ) ))",
    'samples': mc
}

aliases['DeepAK8_SF_up'] = {
    #'expr': "( 1 * two_jet_res[0] + !two_jet_res[0]*(" +\
    'expr': "( 1 * !boosted_nocut_res[0] + boosted_nocut_res[0]*(1*!deltaR_ov[0] + deltaR_ov[0]*(" +\
        \
        deepAK8Dict[year+'_Nominal_'+mtr+'_200_300_up'] +\
        "* (100 < FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)] \
        && FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)] < 300)   +" +\
        \
        deepAK8Dict[year+'_Nominal_'+mtr+'_300_400_up'] +\
        "* (300 < FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)] \
        && FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)] < 400)   +" +\
        \
        deepAK8Dict[year+'_Nominal_'+mtr+'_400_800_up'] +\
        "* (400 < FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)] ) )))",
    'samples': mc
}

aliases['DeepAK8_SF_down'] = {
    #'expr': "( 1 * two_jet_res[0] + !two_jet_res[0]*(" +\
    'expr': "( 1 * !boosted_nocut_res[0] + boosted_nocut_res[0]*(1*!deltaR_ov[0] + deltaR_ov[0]*(" +\
        \
        deepAK8Dict[year+'_Nominal_'+mtr+'_200_300_down'] +\
        "* (100 < FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)] \
        && FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)] < 300)   +" +\
        \
        deepAK8Dict[year+'_Nominal_'+mtr+'_300_400_down'] +\
        "* (300 < FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)] \
        && FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)] < 400)   +" +\
        \
        deepAK8Dict[year+'_Nominal_'+mtr+'_400_800_down'] +\
        "* (400 < FatJet_pt[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)])  )))",
    'samples': mc
}



aliases['passSingleElectronHLT']= {
    'expr':'HLT_Ele27_WPTight_Gsf'
}


aliases['Fat_rewei'] = {# New Top PAG
    'expr': '(1 * !boosted_nocut_res[0] + (boosted_nocut_res[0]*(-11.3853 + 0.279639*Alt$(CleanFatJet_mass[0],0) -0.00156272*Alt$(CleanFatJet_mass[0],0)*Alt$(CleanFatJet_mass[0],0))))',
#    'expr': '1',
    'samples': mc_deep, #['top',]#['top']
}



aliases['SFweight'] = {
    #'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l', 'EMTFbug_veto',  'PrefireWeight', 'LepWPSF[0]', 'btagSF[0]', 'PUJetIdSF[0]']),
    'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l_fixed', 'EMTFbug_veto', 'LepWPSF[0]', 'PUJetIdSF[0]','btagSF[0]','DeepAK8_SF[0]']),
    #'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l', 'EMTFbug_veto',  'PrefireWeight', 'LepWPSF[0]', 'btagSF[0]', 'PUJetIdSF[0]', 'DeepAK8_SF[0]']),
    #'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l', 'EMTFbug_veto',  'PrefireWeight', 'LepWPSF[0]', 'btagSF[0]', 'PUJetIdSF[0]', 'WtagSF[0]']),
    #'expr': ' * '.join(['puWeight', 'trigWeight', 'EMTFbug_veto',  'PrefireWeight', 'LepWPSF[0]', 'btagSF[0]', 'PUJetIdSF[0]', 'DeepAK8_SF[0]']),
    'samples': mc
}

# TODO: choice here between boosted W tagging with tau21 (WtagSF)
#       or DeepAK8 (DeepAK8_SF)
# # data/MC scale factors
aliases['SFweight_deep'] = {
    #'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l', 'EMTFbug_veto',  'PrefireWeight', 'LepWPSF[0]', 'btagSF[0]', 'PUJetIdSF[0]']),
 #   'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l_fixed', 'EMTFbug_veto', 'LepWPSF[0]', 'btagSF[0]', 'PUJetIdSF[0]']),
    'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l_fixed', 'EMTFbug_veto',  'LepWPSF[0]', 'PUJetIdSF[0]', 'DeepAK8_SF[0]','btagSF[0]']),
    #'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l', 'EMTFbug_veto',  'PrefireWeight', 'LepWPSF[0]', 'btagSF[0]', 'PUJetIdSF[0]', 'WtagSF[0]']),
    #'expr': ' * '.join(['puWeight', 'trigWeight', 'EMTFbug_veto',  'PrefireWeight', 'LepWPSF[0]', 'btagSF[0]', 'PUJetIdSF[0]', 'DeepAK8_SF[0]']),
    'samples': mc_deep
}



# FIXME top stuff
# PostProcessing did not create (anti)topGenPt for ST samples with _ext1
lastcopy = (1 << 13)

aliases['isTTbar'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 2' % lastcopy,
    'samples': top,#['top',]
}
aliases['isSingleTop'] = {
    'expr': 'Sum$(TMath::Abs(GenPart_pdgId) == 6 && TMath::Odd(GenPart_statusFlags / %d)) == 1' % lastcopy,
    'samples': top,#['top',]
}

aliases['topGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == 6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
    'samples': top,#['top',]
}
aliases['antitopGenPtOTF'] = {
    'expr': 'Sum$((GenPart_pdgId == -6 && TMath::Odd(GenPart_statusFlags / %d)) * GenPart_pt)' % lastcopy,
    'samples': top,#['top',]
}


#aliases['DeepAK8_SF_top'] = {
#    #'expr': "( 1 * two_jet_res[0] + !two_jet_res[0]*(" +\
#    'expr': "(1*( topGenPtOTF * antitopGenPtOTF <= 0.) + (topGenPtOTF * antitopGenPtOTF > 0.)*( 1 * !boosted_nocut_res[0] + boosted_nocut_res[0]*(" +\
#        \
#        deepAK8Dict[year+'_Nominal_'+mtr+'_200_300'] +\
#        "* (100 < Alt$(CleanFatJet_pt[0],0) \
#        && Alt$(CleanFatJet_pt[0],0) < 300)   +" +\
#        \
#        deepAK8Dict[year+'_Nominal_'+mtr+'_300_400'] +\
#        "* (300 < Alt$(CleanFatJet_pt[0],0) \
#        && Alt$(CleanFatJet_pt[0],0) < 400)   +" +\
#        \
#        deepAK8Dict[year+'_Nominal_'+mtr+'_400_800'] +\
#        "* (400 < Alt$(CleanFatJet_pt[0],0))   )))",
#    'samples': top,#['top',]
#}
#
#aliases['DeepAK8_SF_top_up'] = {
#    #'expr': "(1*( topGenPtOTF * antitopGenPtOTF <= 0.) + (topGenPtOTF * antitopGenPtOTF > 0.)*( 1 * two_jet_res[0] + !two_jet_res[0]*(" +\
#    'expr': "(1*( topGenPtOTF * antitopGenPtOTF <= 0.) + (topGenPtOTF * antitopGenPtOTF > 0.)*( 1 * !boosted_nocut_res[0] + boosted_nocut_res[0]*(" +\
#        \
#        deepAK8Dict[year+'_Nominal_'+mtr+'_200_300_up'] +\
#        "* (100 < Alt$(CleanFatJet_pt[0],0) \
#        && Alt$(CleanFatJet_pt[0],0) < 300)   +" +\
#        \
#        deepAK8Dict[year+'_Nominal_'+mtr+'_300_400_up'] +\
#        "* (300 < Alt$(CleanFatJet_pt[0],0) \
#        && Alt$(CleanFatJet_pt[0],0) < 400)   +" +\
#        \
#        deepAK8Dict[year+'_Nominal_'+mtr+'_400_800_up'] +\
#        "* (400 < Alt$(CleanFatJet_pt[0],0))   )))",
#    'samples':top,# ['top',]
#}
#
#aliases['DeepAK8_SF_top_down'] = {
#    #'expr': "(1*( topGenPtOTF * antitopGenPtOTF <= 0.) + (topGenPtOTF * antitopGenPtOTF > 0.)*(1 * two_jet_res[0] + !two_jet_res[0]*(" +\
#    'expr': "(1*( topGenPtOTF * antitopGenPtOTF <= 0.) + (topGenPtOTF * antitopGenPtOTF > 0.)*( 1 * !boosted_nocut_res[0] + boosted_nocut_res[0]*(" +\
#        \
#        deepAK8Dict[year+'_Nominal_'+mtr+'_200_300_down'] +\
#        "* (100 < Alt$(CleanFatJet_pt[0],0) \
#        && Alt$(CleanFatJet_pt[0],0) < 300)   +" +\
#        \
#        deepAK8Dict[year+'_Nominal_'+mtr+'_300_400_down'] +\
#        "* (300 < Alt$(CleanFatJet_pt[0],0) \
#        && Alt$(CleanFatJet_pt[0],0) < 400)   +" +\
#        \
#        deepAK8Dict[year+'_Nominal_'+mtr+'_400_800_down'] +\
#        "* (400 < Alt$(CleanFatJet_pt[0],0))   )))",
#    'samples': top,#['top',]
#}

aliases['Top_DeepTagrw'] = {# New Top PAG
    'expr': '(1 * !boosted_nocut_res[0] + (boosted_nocut_res[0]*(-209.823 + 222.559*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)+ 218.759*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0) -230.892*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0))))',
    #'samples': top,#['top']
    'samples': mc_deep
}

aliases['Top_DeepTagrw_up_0'] = {
    'expr': '(1 * !boosted_nocut_res[0] + (boosted_nocut_res[0]*(-209.821 + 222.56*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)+ 218.761*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0) -230.890*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0))))',
    #'samples': ['top',]#['top']
    'samples': mc_deep
}
aliases['Top_DeepTagrw_up_1'] = {
    'expr': '(1 * !boosted_nocut_res[0] + (boosted_nocut_res[0]*(-209.731 + 222.572*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)+ 218.722*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0) -230.964*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0))))',
    #'samples': ['top',]#['top']
    'samples': mc_deep
}
aliases['Top_DeepTagrw_up_2'] = {
    'expr': '(1 * !boosted_nocut_res[0] + (boosted_nocut_res[0]*(-209.876 + 222.670*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)+ 218.732*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0) -230.924*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0))))',
    #'samples': ['top',]#['top']
    'samples': mc_deep
}
aliases['Top_DeepTagrw_up_3'] = {
    'expr': '(1 * !boosted_nocut_res[0] + (boosted_nocut_res[0]*(-209.804 + 222.566*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)+ 218.655*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0) -230.813*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0))))',
    #'samples': ['top',]#['top']
    'samples': mc_deep
}

aliases['Top_DeepTagrw_do_0'] = {
    'expr': '(1 * !boosted_nocut_res[0] + (boosted_nocut_res[0]*(-209.825 + 222.557*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)+ 218.757*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0) -230.894*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0))))',
    #'samples': ['top',]#['top']
    'samples': mc_deep
}
aliases['Top_DeepTagrw_do_1'] = {
    'expr': '(1 * !boosted_nocut_res[0] + (boosted_nocut_res[0]*(-209.915 + 222.546*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)+ 218.796*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0) -230.820*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0))))',
    'samples': mc_deep
}
aliases['Top_DeepTagrw_do_2'] = {
    'expr': '(1 * !boosted_nocut_res[0] + (boosted_nocut_res[0]*(-209.770 + 222.448*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)+ 218.786*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0) -230.859*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0))))',
    'samples': mc_deep
}
aliases['Top_DeepTagrw_do_3'] = {
    'expr': '(1 * !boosted_nocut_res[0] + (boosted_nocut_res[0]*(-209.842 + 222.552*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)+ 218.863*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0) -230.971*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0)*Alt$(FatJet_deepTag_WvsQCD[Alt$(FatJet_idx_clean[0]*(isJetBoo > 0),0)],0))))',
    #'samples': ['top',]#['top']
    'samples': mc_deep
}
aliases['SFweight_top'] = {
    #'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l_fixed', 'EMTFbug_veto', 'LepWPSF[0]', 'btagSF[0]', 'PUJetIdSF[0]']),
    #'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l_fixed', 'EMTFbug_veto',  'LepWPSF[0]', 'btagSF[0]', 'PUJetIdSF[0]', 'DeepAK8_SF[0]','Top_DeepTagrw[0]']),
    'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l_fixed', 'EMTFbug_veto',  'LepWPSF[0]','PUJetIdSF[0]','btagSF[0]', 'PUJetIdSF[0]','DeepAK8_SF[0]','Top_DeepTagrw[0]']),#, 'Top_DeepTagrw[0]']),#'Fat_rewei[0]']),
    #'expr': ' * '.join(['puWeight', 'trigWeight', 'EMTFbug_veto',  'PrefireWeight', 'LepWPSF[0]', 'btagSF[0]', 'PUJetIdSF[0]', 'DeepAK8_SF[0]']),
    #'samples': top, #['top',]
    'samples': mc_deep
}

aliases['Top_pTrw'] = {# New Top PAG
    'expr': '((topGenPtOTF * antitopGenPtOTF > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPtOTF) - 0.000134*topGenPtOTF + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPtOTF) - 0.000134*antitopGenPtOTF + 0.973))) + (topGenPtOTF * antitopGenPtOTF <= 0.))',
    'samples': top,#['top']
}




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





mc_sbi = [skey for skey in samples if "SBI" in skey]
aliases['CheckforSM'] = {
    'linesToAdd' : [
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        '.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/CheckForSM125.cc+' % os.getenv('CMSSW_BASE')
    ],
    'expr': 'CheckforSM()',
    'samples': mc_sbi
}

aliases['SBI_isSMggh'] = {
    'expr': '( abs(Xsec-1.091343e+00) < 1.0e-06 && CheckforSM )', # With protection against "HM" 125 sample
    'samples': mc_sbi
}
aliases['SBI_isSMVBF'] = {
    'expr': '( abs(Xsec-8.496211e-02) < 1.0e-08 && CheckforSM )', # With protection against "HM" 125 sample
    'samples': mc_sbi
}
aliases['SBI_isggWW'] = {
    'expr': '( abs(Xsec-6.387000e-02) < 1.0e-08 )',
    'samples': mc_sbi
}
aliases['SBI_isqqWWqq'] = {
    'expr': '( abs(Xsec-2.160000e+00) < 1.0e-06)',
    'samples': mc_sbi
}
aliases['SBI_isHM'] = {
    'expr': '( !SBI_isSMggh && !SBI_isSMVBF && !SBI_isggWW && !SBI_isqqWWqq )',
    'samples': mc_sbi
}

#aliases["nJetHigh2"]={
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/getNJet.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'getNJet',
#}

aliases['kfact'] = { 
    'linesToAdd': [
	'gSystem->Load("%s/src/JHUGenMELA/MELA/data/%s/libmcfm_707.so","", kTRUE);'%(os.getenv('CMSSW_BASE'), os.getenv('SCRAM_ARCH')),
        'gSystem->Load("libJHUGenMELAMELA.so","", kTRUE);',
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/kFactorUnc2.cc+' % os.getenv('CMSSW_BASE')
    ],  
    'class': 'kFactorUnc2',
    'args': ('PlotsConfigurations/Configurations/HWWSemiLepHighMass/wjets_kfactor_DH/HT_to_NLO_QCD_k_factors_Boo_2017pl2018_miNNLO.root', 'k_factor_2017','PlotsConfigurations/Configurations/HWWSemiLepHighMass/wjets_kfactor_DH/HT_to_NLO_QCD_k_factors_noBoo_2017pl2018_miNNLO.root', 'k_factor_2017'),
    'samples': 'Wjets', 
}
#aliases["MelaVBFvsGGH_boosted"]={
#    'linesToAdd': [
#    'gSystem->Load("%s/src/JHUGenMELA/MELA/data/%s/libmcfm_707.so","", kTRUE);'%(os.getenv('CMSSW_BASE'), os.getenv('SCRAM_ARCH')),
#    'gSystem->Load("libJHUGenMELAMELA.so","", kTRUE);',
#    '.L %s/HWWSemiLepHighMass/MelaGGFvsVBF.cc+' % configurations],
#    'class': 'MelaGGFvsVBF',
#    'args': 0
#}
#aliases["MelaVBFvsGGH_resolved"]={
#    'linesToAdd': [
#    'gSystem->Load("%s/src/JHUGenMELA/MELA/data/%s/libmcfm_707.so","", kTRUE);'%(os.getenv('CMSSW_BASE'), os.getenv('SCRAM_ARCH')),
#    'gSystem->Load("libJHUGenMELAMELA.so","", kTRUE);',
#    '.L %s/HWWSemiLepHighMass/MelaGGFvsVBF.cc+' % configurations],
#    'class': 'MelaGGFvsVBF',
#    'args': 1
#}
#aliases['kfact'] = { 
#    'linesToAdd': [
#	'gSystem->Load("%s/src/JHUGenMELA/MELA/data/%s/libmcfm_707.so","", kTRUE);'%(os.getenv('CMSSW_BASE'), os.getenv('SCRAM_ARCH')),
#        'gSystem->Load("libJHUGenMELAMELA.so","", kTRUE);',
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
#        '.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/kFactorUnc2.cc+' % os.getenv('CMSSW_BASE')
#    ],  
#    'class': 'kFactorUnc2',
#    'args': ('PlotsConfigurations/Configurations/HWWSemiLepHighMass/wjets_kfactor_DH/HT_to_NLO_QCD_k_factors_all.root', 'k_factor_2018'),
#    'samples': 'Wjets', 
#}
#aliases['kfact'] = { 
#    'linesToAdd': [
#	'gSystem->Load("%s/src/JHUGenMELA/MELA/data/%s/libmcfm_707.so","", kTRUE);'%(os.getenv('CMSSW_BASE'), os.getenv('SCRAM_ARCH')),
#        'gSystem->Load("libJHUGenMELAMELA.so","", kTRUE);',
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
#        '.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/kFactorUnc2.cc+' % os.getenv('CMSSW_BASE')
#    ],  
#    'class': 'kFactorUnc2',
#    'args': ('PlotsConfigurations/Configurations/HWWSemiLepHighMass/wjets_kfactor_DH/HT_to_NLO_QCD_k_factors_boo_2018_pg.root', 'k_factor_2018','PlotsConfigurations/Configurations/HWWSemiLepHighMass/wjets_kfactor_DH/HT_to_NLO_QCD_k_factors_res_2018_noboo_pg.root', 'k_factor_2018'),
#    'samples': 'Wjets', 
#}
FR_dir = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FAKE_RW/FR/2018_rewei_bis/"
PR_dir = os.getenv('CMSSW_BASE') + "/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FAKE_RW/PR/2018/"
el_pr_file = PR_dir+"plot_ElCh_l1_etaVpt_ptel_2D_pr.root"
mu_pr_file = PR_dir+"plot_MuCh_l1_etaVpt_ptmu_2D_pr.root"
for lep in ['El', 'Mu']:
    for dEt in [-10, 0, 10]:
        if lep == 'El':
            el_et = El_jetEt + dEt
            mu_et = Mu_jetEt
        elif lep == 'Mu':
            el_et = El_jetEt
            mu_et = Mu_jetEt + dEt

        el_fr_file = FR_dir+"plot_ElCh_JetEt"+str(el_et)+"_l1_etaVpt_ptel_fw_ewk_2D.root"
        mu_fr_file = FR_dir+"plot_MuCh_JetEt"+str(mu_et)+"_l1_etaVpt_ptmu_fw_ewk_2D.root"
    
        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)] = {
            'linesToAdd' : [
                'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                #'.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/fakeweight_p1_OTF.cc+' % os.getenv('CMSSW_BASE')
                '.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/fakeweight_OTF.cc+' % os.getenv('CMSSW_BASE')
            ],
            #'class': 'fakeWeight_p1_OTF',
            'class': 'fakeWeightOTF',
            #'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(mu_fr_file), False, False), 
            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), el_pr_file, copy.deepcopy(mu_fr_file), mu_pr_file, False, False), 
            'samples': ["FAKE"]
        }
        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)+'_statUp'] = {
            #'class': 'fakeWeight_p1_OTF',
            'class': 'fakeWeightOTF',
            #'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(mu_fr_file), True, False), 
            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), el_pr_file, copy.deepcopy(mu_fr_file), mu_pr_file, True, False), 
            'samples': ["FAKE"]
        }
        aliases['FW_mu'+str(mu_et)+'_el'+str(el_et)+'_statDown'] = {
            #'class': 'fakeWeight_p1_OTF',
            'class': 'fakeWeightOTF',
            #'args': (eleWP, muWP, copy.deepcopy(el_fr_file), copy.deepcopy(mu_fr_file), False, True), 
            'args': (eleWP, muWP, copy.deepcopy(el_fr_file), el_pr_file, copy.deepcopy(mu_fr_file), mu_pr_file, False, True), 
            'samples': ["FAKE"]
        }

for var in ['Up', 'Down']:
    for lep in ['El', 'Mu']:
        el_et = El_jetEt
        mu_et = Mu_jetEt
        if var == 'Down': dEt = -10
        elif var == 'Up': dEt = 10
        if lep == 'El': 
            el_et = El_jetEt + dEt
            is_lep = '(TMath::Abs(Lepton_pdgId[0]) == 11)'
            no_lep = '(TMath::Abs(Lepton_pdgId[0]) == 13)'
        elif lep == 'Mu': 
            mu_et = mu_et + dEt
            is_lep = '(TMath::Abs(Lepton_pdgId[0]) == 13)'
            no_lep = '(TMath::Abs(Lepton_pdgId[0]) == 11)'

        aliases['FW_mu'+str(Mu_jetEt)+'_el'+str(El_jetEt)+'_'+lep+var] = {
            'expr': '('+is_lep+'*(FW_mu'+str(mu_et)+'_el'+str(el_et)+'[0]/FW_mu'+str(Mu_jetEt)+'_el'+str(El_jetEt)+'[0]) + '+no_lep+')',
            'samples': ["FAKE"]
        }
        aliases['FW_mu'+str(Mu_jetEt)+'_el'+str(El_jetEt)+'_stat'+lep+var] = {
            'expr': '('+is_lep+'*(FW_mu'+str(Mu_jetEt)+'_el'+str(El_jetEt)+'_stat'+var+'[0]/FW_mu'+str(Mu_jetEt)+'_el'+str(El_jetEt)+'[0]) + '+no_lep+')',
            'samples': ["FAKE"]
        }

#aliases['vbfdnn_odd'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/DNN_prod_semi_new_odd.cc+'% os.getenv('CMSSW_BASE') ],
#    'class': 'DNNprodSemiNewOdd',
#    'args': 0,
#}
#aliases['gghdnn_odd'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/DNN_prod_semi_new_odd.cc+'% os.getenv('CMSSW_BASE') ],
#    'class': 'DNNprodSemiNewOdd',
#    'args': 1,
#}
#aliases['bkgdnn_odd'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/DNN_prod_semi_new_odd.cc+'% os.getenv('CMSSW_BASE') ],
#    'class': 'DNNprodSemiNewOdd',
#    'args': 2,
#}
#aliases['lep_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 0
#}
#aliases['lep_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 1
#}
#aliases['lep_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 2
#}
#aliases['j1_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 3
#}
#aliases['j1_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 4
#}
#aliases['j1_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 5
#}
#aliases['j1_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 6
#}
#aliases['j2_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 7
#}
#aliases['j2_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 8
#}
#aliases['j2_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 9
#}
#aliases['j2_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 10
#}
#aliases['j3_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 11
#}
#aliases['j3_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 12
#}
#aliases['j3_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 13
#}
#aliases['j3_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 14
#}
#aliases['j4_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 15
#}
#aliases['j4_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 16
#}
#aliases['j4_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 17
#}
#aliases['j4_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 18
#}
#aliases['wh_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 19
#}
#aliases['wh_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 20
#}
#aliases['wh_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 21
#}
#aliases['wh_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 22
#}
#aliases['wl_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 23
#}
#aliases['wl_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 24
#}
#aliases['wl_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 25
#}
#aliases['wl_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 26
#}
#aliases['subjet1_pt'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 27
#}
#aliases['subjet1_eta'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 28
#}
#aliases['subjet1_phi'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 29
#}
#aliases['subjet1_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 30
#}
#aliases['subjet2_pt'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 31
#}
#aliases['subjet2_eta'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 32
#}
#aliases['subjet2_phi'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 33
#}
#aliases['subjet2_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 34
#}
#
#aliases['met_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 35
#}
#aliases['met_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 36
#}
#aliases['nJets_no'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 37
#}
#aliases['nJets_30'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 38
#}
#aliases['nonresW_mjj'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 39
#}
#aliases['mjj_12'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 40
#}
#aliases['detajj_12'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 41
#}
#aliases['mjj_13'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 42
#}
#aliases['detajj_13'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 43
#}
#aliases['mjj_14'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 44
#}
#aliases['detajj_14'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 45
#}
#aliases['mjj_23'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 46
#}
#aliases['detajj_23'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 47
#}
#aliases['mjj_24'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 48
#}
#aliases['detajj_24'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 49
#}
#aliases['mjj_34'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 50
#}
#aliases['detajj_34'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/FatJet_DNN_comp.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'FatJet_DNN_comp',
#    'args': 51
#}
#aliases['res_lep_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 0
#}
#aliases['res_lep_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 1
#}
#aliases['res_lep_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 2
#}
#aliases['res_j1_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 3
#}
#aliases['res_j1_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 4
#}
#aliases['res_j1_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 5
#}
#aliases['res_j1_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 6
#}
#aliases['res_j2_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 7
#}
#aliases['res_j2_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 8
#}
#aliases['res_j2_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 9
#}
#aliases['res_j2_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 10
#}
#aliases['res_j3_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 11
#}
#aliases['res_j3_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 12
#}
#aliases['res_j3_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 13
#}
#aliases['res_j3_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 14
#}
#aliases['res_j4_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 15
#}
#aliases['res_j4_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 16
#}
#aliases['res_j4_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 17
#}
#aliases['res_j4_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 18
#}
#aliases['res_wh_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 19
#}
#aliases['res_wh_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 20
#}
#aliases['res_wh_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 21
#}
#aliases['res_wh_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 22
#}
#aliases['res_wl_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 23
#}
#aliases['res_wl_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 24
#}
#aliases['res_wl_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 25
#}
#aliases['res_wl_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 26
#}
#aliases['res_w1_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 27
#}
#aliases['res_w1_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 28
#}
#aliases['res_w1_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 29
#}
#aliases['res_w1_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 30
#}
#aliases['res_w2_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 31
#}
#aliases['res_w2_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 32
#}
#aliases['res_w2_pz'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 33
#}
#aliases['res_w2_mass'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 34
#}
#
#aliases['res_met_px'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 35
#}
#aliases['res_met_py'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 36
#}
#aliases['res_nJets_no'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 37
#}
#aliases['res_nJets_30'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 38
#}
#aliases['res_nonresW_mjj'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 39
#}
#aliases['res_mjj_12'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 40
#}
#aliases['res_detajj_12'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 41
#}
#aliases['res_mjj_13'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 42
#}
#aliases['res_detajj_13'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 43
#}
#aliases['res_mjj_14'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 44
#}
#aliases['res_detajj_14'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 45
#}
#aliases['res_mjj_23'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 46
#}
#aliases['res_detajj_23'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 47
#}
#aliases['res_mjj_24'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 48
#}
#aliases['res_detajj_24'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 49
#}
#aliases['res_mjj_34'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 50
#}
#aliases['res_detajj_34'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/comp_jets_res.cc+'  % os.getenv('CMSSW_BASE')],
#    'class': 'comp_jets_res',
#    'args': 51
#}
##aliases['vbflike_odd'] = {
##        'expr': 'vbfdnn_odd>gghdnn_odd && vbfdnn_odd>bkgdnn_odd ',
##}
##
##aliases['bkglike_odd'] = {
##        'expr': 'bkgdnn_odd>gghdnn_odd && bkgdnn_odd>vbfdnn_odd ',
##}
##
##aliases['gghlike_odd'] = {
##        'expr': 'gghdnn_odd>vbfdnn_odd && gghdnn_odd>bkgdnn_odd ',
##}
##
#aliases['vbfdnn_res'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/DNN_prod_semi_new_res.cc+'% os.getenv('CMSSW_BASE') ],
#    'class': 'DNNprodSemiNewRes',
#    'args': 0,
#}
#aliases['gghdnn_res'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/DNN_prod_semi_new_res.cc+'% os.getenv('CMSSW_BASE') ],
#    'class': 'DNNprodSemiNewRes',
#    'args': 1,
#}
#aliases['bkgdnn_res'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/DNN_prod_semi_new_res.cc+'% os.getenv('CMSSW_BASE') ],
#    'class': 'DNNprodSemiNewRes',
#    'args': 2,
#}
##aliases['vbflike_res'] = {
##        'expr': 'vbfdnn_res>gghdnn_res && vbfdnn_res>bkgdnn_res ',
##}
##
##aliases['bkglike_res'] = {
##        'expr': 'bkgdnn_res>gghdnn_res && bkgdnn_res>vbfdnn_res ',
##}
##
##aliases['gghlike_res'] = {
##        'expr': 'gghdnn_res>vbfdnn_res && gghdnn_res>bkgdnn_res ',
##}
#aliases['vbfdnn_high'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/DNN_prod_semi_new_high.cc+'% os.getenv('CMSSW_BASE') ],
#    'class': 'DNNprodSemiNewHigh',
#    'args': 0,
#}
#aliases['gghdnn_high'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/DNN_prod_semi_new_high.cc+'% os.getenv('CMSSW_BASE') ],
#    'class': 'DNNprodSemiNewHigh',
#    'args': 1,
#}
#aliases['bkgdnn_high'] = {
#    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/DNN_prod_semi_new_high.cc+'% os.getenv('CMSSW_BASE') ],
#    'class': 'DNNprodSemiNewHigh',
#    'args': 2,
#}
#aliases['SBI_isSMggh'] = {
 #   'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/isSample.cc+' % os.getenv('CMSSW_BASE')],
 #   'expr' : 'is_SMggh()',
 #   'samples': mc_sbi
#}
#aliases['SBI_isSMVBF'] = {
#    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/isSample.cc+' % os.getenv('CMSSW_BASE')],
#    'expr' : 'is_SMVBF()',
#    'samples': mc_sbi
#}
#aliases['SBI_isggWW'] = {
 #   'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/isSample.cc+' % os.getenv('CMSSW_BASE')],
 #   'expr' : 'is_ggWW()',
  #  'samples': mc_sbi
#}
#aliases['SBI_isqqWWqq'] = {
 #   'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/isSample.cc+' % os.getenv('CMSSW_BASE')],
 #   'expr' : 'is_qqWWqq()',
 #   'samples': mc_sbi
#}
#aliases['SBI_isHM'] = {
#    'expr': '( !SBI_isSMggh && !SBI_isSMVBF && !SBI_isggWW && !SBI_isqqWWqq )',
#    'samples': mc_sbi
#}
