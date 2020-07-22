import os
import copy
import inspect
import numpy as np

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2017
configurations = os.path.dirname(configurations) # HM
configurations = os.path.dirname(configurations) # Configurations

#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]


eleWP    = 'mvaFall17V1Iso_WP90'
muWP     = 'cut_Tight_HWWW'

# aliases['DNN_isVBF_OTF'] = {
#     'class': 'DNNprod',
#     'linesToAdd':[
#         'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#         'gSystem->Load("libDNNEvaluator.so")',
#         '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_prod_semi.cc+' % os.getenv('CMSSW_BASE'),
#     ],
# }

# aliases['DNN_mth_OTF'] = {
#     'class': 'DNNneut',
#     'linesToAdd':[
#         'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#         'gSystem->Load("libDNNEvaluator.so")',
#         '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_neut_semi.cc+' % os.getenv('CMSSW_BASE'),
#     ],
# }
# aliases['DNN_test'] = {
#     'class': 'DNNtest',
#     'linesToAdd':[
#         'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#         'gSystem->Load("libDNNEvaluator.so")',
#         '.L %s/src/PlotsConfigurations/Configurations/HWWSemiLepHighMass/Full2017/DNNtest.cc+' % os.getenv('CMSSW_BASE'),
#     ],
# }
aliases['mjjGen_OTF'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/HighMass/HMvars_mjjgen.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'HMvarsmjjgen',
    'samples': ['WW', 'qqWWqq', 'WW2J', 'DYveto']
}

aliases['bWP'] = {
    'expr': '0.1522'
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


aliases['WlepMT'] = {
    'expr': 'TMath::Sqrt( 2*Lepton_pt[0]*PuppiMET_pt \
    *( 1-TMath::Cos(Lepton_phi[0]-PuppiMET_phi) ) )'
}
aliases['boostHiggsMT'] = {
    'expr': 'TMath::Sqrt( 2*Wlep_pt_Puppi*Alt$(CleanFatJetPassMBoosted_pt[0], 0) \
    *( 1-TMath::Cos(Wlep_phi_Puppi-Alt$(CleanFatJetPassMBoosted_phi[0], 0)) ) )'
}
aliases['resolvHiggsMT'] = {
    'expr': 'TMath::Sqrt( 2*Wlep_pt_Puppi*Whad_pt \
    *( 1-TMath::Cos(Wlep_phi_Puppi-Whad_phi) ) )'
}


aliases['idxCleanFatJetW'] = {
    'linesToAdd': ['.L %s/HWWSemiLepHighMass/Full2017/indexWFatJet.cc+' % configurations],
    'class': 'FindBoostWIndex'
}

aliases['manualHfatM'] = {
    'linesToAdd': ['.L %s/HWWSemiLepHighMass/Full2017/boostHiggsMass.cc+' % configurations],
    'class': 'CalcBoostHiggsMass',
}
aliases['tau21Cut'] = {
    'expr': '(Alt$(CleanFatJet_tau21[(int)idxCleanFatJetW], 1) < tau21WP)'
}

aliases['boosted'] = {
    'expr': 'PuppiMET_pt > 40 \
            && Alt$(CleanFatJetPassMBoosted_pt[0], 0) > 200 \
            && Alt$(CleanFatJetPassMBoosted_WptOvHfatM[0], 0) > 0.4 \
            && Alt$(CleanFatJetPassMBoosted_tau21[0], 999) < tau21WP[0] \
            && Alt$(CleanFatJetPassMBoosted_mass[0], 0) > 40 \
            && abs(Alt$(CleanFatJetPassMBoosted_eta[0], 999)) < 2.4'
}
aliases['boostedNoTau21'] = {
    'expr': 'PuppiMET_pt > 40 \
            && (int)idxCleanFatJetW != 999 \
            && Alt$(CleanFatJet_pt[(int)idxCleanFatJetW], 0) > 200 \
            && Alt$(CleanFatJet_pt[(int)idxCleanFatJetW], 0) / manualHfatM > 0.4 \
            && manualHfatM > 0 && Wlep_pt_Puppi / manualHfatM > 0.4 \
            && Alt$(CleanFatJet_mass[(int)idxCleanFatJetW], 0) > 40 \
            && Alt$(CleanFatJet_eta[(int)idxCleanFatJetW], 999) < 2.4'
}

aliases['resolved'] = {
    'expr': '!boosted[0] \
            && PuppiMET_pt > 30 \
            && WlepMT > 50 \
            && WptOvHak4M > 0.35 \
            && resolvHiggsMT > 60 \
            && Whad_pt > 30'
}
aliases['resolvedTEST'] = {
    'expr': 'boostedNoTau21[0] \
            && !tau21Cut \
            && PuppiMET_pt > 30 \
            && WlepMT > 50 \
            && WptOvHak4M > 0.35 \
            && resolvHiggsMT > 60 \
            && Whad_pt > 30'
}

aliases['boostedSignalWMass'] = {
    'expr': '(65 < Alt$(CleanFatJetPassMBoosted_mass[0], 0) \
            && Alt$(CleanFatJetPassMBoosted_mass[0], 999) < 105)'
}
aliases['boostedSignalWMassNoTau21'] = {
    'expr': '(65 < Alt$(CleanFatJet_mass[(int)idxCleanFatJetW], 0) \
            && Alt$(CleanFatJet_mass[(int)idxCleanFatJetW], 999) < 105)'
}

aliases['resolvedSignalWMass'] = {
    'expr': '(65 < Whad_mass && Whad_mass < 105)'
}

aliases['boostedSidebandWMass'] = {
    'expr': '(40 < Alt$(CleanFatJetPassMBoosted_mass[0], 0) \
            && Alt$(CleanFatJetPassMBoosted_mass[0], 999) < 250)'
}
aliases['boostedSidebandWMassNoTau21'] = {
    'expr': '(40 < Alt$(CleanFatJet_mass[(int)idxCleanFatJetW], 0) \
            && Alt$(CleanFatJet_mass[(int)idxCleanFatJetW], 999) < 250)'
}

aliases['lowBoostedSidebandWMass'] = {
    'expr': '(40 < Alt$(CleanFatJetPassMBoosted_mass[0], 0) \
            && Alt$(CleanFatJetPassMBoosted_mass[0], 999) < 65)'
}
aliases['highBoostedSidebandWMass'] = {
    'expr': '(105 < Alt$(CleanFatJetPassMBoosted_mass[0], 0) \
            && Alt$(CleanFatJetPassMBoosted_mass[0], 999) < 250)'
}


aliases['resolvedSidebandWMass'] = {
    'expr': '(40 < Whad_mass && Whad_mass < 250)'
}

aliases['lowResolvedSidebandWMass'] = {
    'expr': '(40 < Whad_mass && Whad_mass < 65)'
}
aliases['highResolvedSidebandWMass'] = {
    'expr': '(105 < Whad_mass && Whad_mass < 250)'
}

aliases['resolvedQCDcr'] = {
    'expr': 'resolvedSignalWMass \
            && WlepMT < 50 && 0 < resolvHiggsMT \
            && resolvHiggsMT < 60 && WptOvHak4M < 0.35'
}
# boostedQCDcr not possible RN since boosted W candidate always fulfills WptOvHfatM > 0.4
# aliases['boostedQCDcr'] = {
#     'expr': 'boostedSignalWMassNoTau21[0] \
#             && WlepMT < 50 \
#             && !tau21Cut[0]\
#             && Alt$(CleanFatJet_pt[(int)idxCleanFatJetW], 0) / manualHfatM < 0.4)'
# }

aliases['tau21DDT'] = {
    'expr': 'Alt$(CleanFatJet_tau21[(int)idxCleanFatJetW], -999) + 0.080 * TMath::Log( Alt$(CleanFatJet_mass[(int)idxCleanFatJetW]*CleanFatJet_mass[(int)idxCleanFatJetW], 0) / Alt$(CleanFatJet_pt[(int)idxCleanFatJetW], 1) )'
}
# smaller angle is: a-b - (a-b > 3.1416)*2*3.1416 + (a-b < -3.1416)*2*3.1416
aliases['dPhi_WW_boosted'] = {
    'expr': 'Wlep_phi_Puppi - Alt$(CleanFatJetPassMBoosted_phi[0], 0)\
- (Wlep_phi_Puppi - Alt$(CleanFatJetPassMBoosted_phi[0], 0) > 3.1416)*2*3.1416\
+ (Wlep_phi_Puppi - Alt$(CleanFatJetPassMBoosted_phi[0], 0) < -3.1416)*2*3.1416',
}
aliases['dPhi_WW_resolved'] = {
    'expr': 'Wlep_phi_Puppi - Whad_phi\
    - (Wlep_phi_Puppi - Whad_phi > 3.1416)*2*3.1416 \
    + (Wlep_phi_Puppi - Whad_phi < -3.1416)*2*3.1416',
}
aliases['dPhi_LNu'] = {
    'expr': 'Lepton_phi[0] - PuppiMET_phi\
    - (Lepton_phi[0] - PuppiMET_phi > 3.1416)*2*3.1416 \
    + (Lepton_phi[0] - PuppiMET_phi < -3.1416)*2*3.1416',
}
# aliases['dR_WW_boosted'] = {
#     'expr': 'TMath::Sqrt(TMath::Power(Wlep_eta_Puppi - Alt$(CleanFatJetPassMBoosted_eta[0], 0), 2) + TMath::Power(dPhi_WW_boosted[0], 2))'
# }
# aliases['b2b_WW_boosted'] = {
#     'expr': 'TMath::Sqrt(TMath::Power(Wlep_eta_Puppi + Alt$(CleanFatJetPassMBoosted_eta[0], 0), 2) + TMath::Power(abs(dPhi_WW_boosted[0]) - 3.1416, 2))'
# }




aliases['LHEPartWlepPt'] = {
    'linesToAdd': ['.L %s/HWWSemiLepHighMass/Full2017/LHEPartWlepPt.cc+' % configurations],
    'class': 'LHEPartWlepPt',
    'samples': ['Wjets-1+2J',] #['Wjets-0J', 'Wjets-1+2J']
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
    'samples': ['Wjets-1+2J',] #['Wjets-0J', 'Wjets-1+2J']
}
aliases['EWK_W_correction_uncert'] = {
    'expr': uncert_string,
    # 'samples': 'Wjets'
    'samples': ['Wjets-1+2J',] #['Wjets-0J', 'Wjets-1+2J']
}








aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
    'samples': 'VgS'
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': 'VgS'
}


# aliases['oldmjjGen'] = {
#     'linesToAdd': [
#         'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
#         '.L %s/src/PlotsConfigurations/Configurations/HighMass/oldmjjGen/deltaRMatch.C+' % os.getenv('CMSSW_BASE'),
#         '.L %s/src/PlotsConfigurations/Configurations/HighMass/oldmjjGen/mjjGen.C+' % os.getenv('CMSSW_BASE')
#     ],
#     'expr': 'mjjGen(  Alt$(GenJet_pt[abs(Jet_genJetIdx[CleanJet_jetIdx[0]])],-1), \
#                       Alt$(GenJet_eta[abs(Jet_genJetIdx[CleanJet_jetIdx[0]])],-1), \
#                       Alt$(GenJet_phi[abs(Jet_genJetIdx[CleanJet_jetIdx[0]])],-1), \
#                       Alt$(GenJet_pt[abs(Jet_genJetIdx[CleanJet_jetIdx[1]])],-1), \
#                       Alt$(GenJet_eta[abs(Jet_genJetIdx[CleanJet_jetIdx[1]])],-1), \
#                       Alt$(GenJet_phi[abs(Jet_genJetIdx[CleanJet_jetIdx[1]])],-1), \
#                       Jet_genJetIdx[CleanJet_jetIdx[0]], \
#                       Jet_genJetIdx[CleanJet_jetIdx[1]])',
#     'samples': ['qqWWqq', 'WW2J'] + [skey for skey in samples if 'QQHSBI' in skey]
# }

aliases['GenLHE'] = {
'expr': '(Sum$(LHEPart_pdgId == 21) == 0)',
'samples': ['qqWWqq', 'WW2J']
}


# # B-Stuff
aliases['bVetoBoosted'] = {
    'expr': 'Sum$(Jet_btagDeepB[CleanJet_jetIdx[CleanJetNotFat_jetIdx]] > bWP[0] \
                    && CleanJet_pt[CleanJetNotFat_jetIdx] > 20 \
                    && abs(CleanJet_eta[CleanJetNotFat_jetIdx]) < 2.5 \
                ) == 0'
}
aliases['bVetoResolved'] = {
    'expr': 'Sum$(idx_j1 >= 0 && idx_j2 >= 0 \
                    && Jet_btagDeepB[CleanJet_jetIdx] > bWP[0] \
                    && CleanJet_pt > 20 \
                    && abs(CleanJet_eta) < 2.5 \
                    && CleanJet_jetIdx != Alt$(CleanJet_jetIdx[idx_j1], -1) \
                    && CleanJet_jetIdx != Alt$(CleanJet_jetIdx[idx_j2], -1) \
                ) == 0'
}
aliases['bVeto'] = {
    'expr': '((boosted[0] && bVetoBoosted) || (!boosted[0] && bVetoResolved))'
    # 'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0'
}

aliases['bReq'] = {
    'expr': '!bVeto[0]'
    # 'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) >= 1'
}

# # Temporary patch for BTV postprocessor bug (no SF for eta < 0, <= 102X_nAODv5_Full2018v5)
# btagSFSource = '%s/src/PhysicsTools/NanoAODTools/data/btagSF/DeepCSV_102XSF_V1.csv' % os.getenv('CMSSW_BASE')
#
# aliases['Jet_btagSF_shapeFix'] = {
#     'linesToAdd': [
#         'gSystem->Load("libCondFormatsBTauObjects.so");',
#         'gSystem->Load("libCondToolsBTau.so");',
#         'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
#         '.L %s/src/PlotsConfigurations/Configurations/patches/btagsfpatch.cc+' % os.getenv('CMSSW_BASE')
#     ],
#     'class': 'BtagSF',
#     'args': (btagSFSource,),
#     'samples': mc
# }

# aliases['bVetoSF'] = {
#     'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<=20 || abs(CleanJet_eta)>=2.5))))',
#     # 'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx]+1*(CleanJet_pt<=20 || abs(CleanJet_eta)>=2.5))))',
#     'samples': mc
# }

# aliases['btagnSF'] = {
#     'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx] + (CleanJet_pt<=20 || abs(CleanJet_eta)>=2.5))))',
#     # 'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx] + (CleanJet_pt<=30 || abs(CleanJet_eta)>=2.5))))',
#     'samples': mc
# }


aliases['btagResolvedSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log( \
    (idx_j1 >= 0 && idx_j2 >= 0 \
        && CleanJet_pt > 20 && abs(CleanJet_eta) < 2.5 \
        && CleanJet_jetIdx != Alt$(CleanJet_jetIdx[idx_j1], -1) \
        && CleanJet_jetIdx != Alt$(CleanJet_jetIdx[idx_j2], -1) \
    )    * Jet_btagSF_shape[CleanJet_jetIdx] \
    + 1*(idx_j1 == -1 || idx_j2 == -1 || CleanJet_pt<=20 || abs(CleanJet_eta)>=2.5 \
        || CleanJet_jetIdx == Alt$(CleanJet_jetIdx[idx_j1], -1) || Alt$(CleanJet_jetIdx == CleanJet_jetIdx[idx_j2], -1)) \
    )))',
    'samples': mc
}
aliases['btagBoostedSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log( \
        (CleanJet_pt[CleanJetNotFat_jetIdx] > 20 \
        && abs(CleanJet_eta[CleanJetNotFat_jetIdx]) < 2.5) \
        * Jet_btagSF_shape[CleanJet_jetIdx] \
    +1*(CleanJet_pt[CleanJetNotFat_jetIdx] <= 20 \
        || abs(CleanJet_eta[CleanJetNotFat_jetIdx]) >= 2.5) \
    )))',
    'samples': mc
}

aliases['btagSF'] = {
    # 'expr': 'bVetoSF[0]*bVeto[0] + btagnSF[0]*!bVeto[0]',
    'expr': 'boosted[0]*btagBoostedSF[0] + !boosted[0]*btagResolvedSF[0]',
    'samples': mc
}

for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:
    # aliases['Jet_btagSF_shapeFix_up_%s' % shift] = {
    #     'class': 'BtagSF',
    #     'args': (btagSFSource, 'up_' + shift),
    #     'samples': mc
    # }
    # aliases['Jet_btagSF_shapeFix_down_%s' % shift] = {
    #     'class': 'BtagSF',
    #     'args': (btagSFSource, 'down_' + shift),
    #     'samples': mc
    # }

    # for targ in ['bVeto', 'btagn']:
    for targ in ['btagResolved', 'btagBoosted']:
        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_shape', 'btagSF_shape_up_%s' % shift)
        # alias['expr'] = alias['expr'].replace('btagSF_shapeFix', 'btagSF_shapeFix_up_%s' % shift)

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_shape', 'btagSF_shape_down_%s' % shift)
        # alias['expr'] = alias['expr'].replace('btagSF_shapeFix', 'btagSF_shapeFix_down_%s' % shift)

    # aliases['btagSF%sup' % shift] = {
    #     'expr': '(bVetoSF{shift}up*bVeto + btagnSF{shift}up*!bVeto[0])'.format(shift = shift),
    #     'samples': mc
    # }
    # aliases['btagSF%sdown' % shift] = {
    #     'expr': '(bVetoSF{shift}down*bVeto + btagnSF{shift}down*!bVeto)'.format(shift = shift),
    #     'samples': mc
    # }
    aliases['btagSF%sup' % shift] = {
        'expr': 'boosted[0]*btagBoostedSF{shift}up[0] \
         + !boosted[0]*btagResolvedSF{shift}up[0]'.format(shift = shift),
        'samples': mc
    }
    aliases['btagSF%sdown' % shift] = {
        'expr': 'boosted[0]*btagBoostedSF{shift}down[0] \
         + !boosted[0]*btagResolvedSF{shift}down[0]'.format(shift = shift),
        'samples': mc
    }





# https://twiki.cern.ch/twiki/bin/viewauth/CMS/JetWtagging
aliases['WtagSF'] = {
    'expr': 'boostedNoTau21[0] * (0.97 * tau21Cut[0] + 1.14 * !tau21Cut[0]) + (1-boostedNoTau21[0])',
    'samples': mc
}
aliases['SFWtagUp'] = {
    'expr': 'boostedNoTau21[0] * (1.06 * tau21Cut[0] + 0.75 * !tau21Cut[0]) + (1-boostedNoTau21[0])',
    'samples': mc
}
aliases['SFWtagDown'] = {
    'expr': 'boostedNoTau21[0] * (0.94 * tau21Cut[0] + 1.25 * !tau21Cut[0]) + (1-boostedNoTau21[0])',
    'samples': mc
}






aliases['LepWPSF'] = {
    'expr': '(Lepton_isTightElectron_'+eleWP+'[0] > 0.5) * Lepton_tightElectron_'+eleWP+'_TotSF[0] \
    + (Lepton_isTightMuon_'+muWP+'[0] > 0.5)*Lepton_tightMuon_'+muWP+'_TotSF[0]',
    'samples': mc
}
# # variations of tight lepton WP
aliases['SFweightEleUp'] = {
    #'expr': 'Lepton_tightElectron_'+eleWP+'_IdIsoSF_Up[0]',
    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF_Up[0]/Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
    'samples': mc
}
aliases['SFweightEleDown'] = {
    #'expr': 'Lepton_tightElectron_'+eleWP+'_IdIsoSF_Down[0]',
    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 11)*(Lepton_tightElectron_'+eleWP+'_TotSF_Down[0]/Lepton_tightElectron_'+eleWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 13))',
    'samples': mc
}
aliases['SFweightMuUp'] = {
    #'expr': 'Lepton_tightMuon_'+muWP+'_IdIsoSF_Up[0]',
    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF_Up[0]/Lepton_tightMuon_'+muWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
    'samples': mc
}
aliases['SFweightMuDown'] = {
    #'expr': 'Lepton_tightMuon_'+muWP+'_IdIsoSF_Down[0]',
    'expr': '((TMath::Abs(Lepton_pdgId[0]) == 13)*(Lepton_tightMuon_'+muWP+'_TotSF_Down[0]/Lepton_tightMuon_'+muWP+'_TotSF[0]) + (TMath::Abs(Lepton_pdgId[0]) == 11))',
    'samples': mc
}




# PU jet Id SF

puidSFSource = '%s/src/LatinoAnalysis/NanoGardener/python/data/JetPUID_effcyandSF.root' % os.getenv('CMSSW_BASE')

aliases['PUJetIdSF'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/pujetidsf_event.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'PUJetIdEventSF',
    'args': (puidSFSource, '2017', 'loose'),
    'samples': mc
}




# data/MC scale factors
aliases['SFweight'] = {
'expr': ' * '.join(['puWeight', 'TriggerEffWeight_1l', 'EMTFbug_veto','PrefireWeight','LepWPSF[0]','btagSF[0]', 'PUJetIdSF[0]','WtagSF[0]']),
'samples': mc
}



# FIXME top stuff
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

# aliases['Top_pTrw'] = {
#     'expr': 'isTTbar * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPtOTF) * TMath::Exp(0.0615 - 0.0005 * antitopGenPtOTF))) + isSingleTop',
#     'samples': ['top']
# }
# Dennis Roy for 2017/2018
aliases['Top_pTrw'] = {
    # Dennis:
    # 'expr': '(topGenPtOTF * antitopGenPtOTF > 0.) * (TMath::Sqrt(TMath::Exp(-2.02274e-01 + 1.09734e-04*topGenPtOTF - 1.30088e-07*topGenPtOTF*topGenPtOTF + 5.83494e+01/(topGenPtOTF+1.96252e+02)) * TMath::Exp(-2.02274e-01 + 1.09734e-04*antitopGenPtOTF - 1.30088e-07*antitopGenPtOTF*antitopGenPtOTF + 5.83494e+01/(antitopGenPtOTF+1.96252e+02)))) + (topGenPtOTF * antitopGenPtOTF <= 0.)',

    # New Top PAG
    'expr': '(topGenPtOTF * antitopGenPtOTF > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPtOTF) - 0.000134*topGenPtOTF + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPtOTF) - 0.000134*antitopGenPtOTF + 0.973))) + (topGenPtOTF * antitopGenPtOTF <= 0.)',
    'samples': ['top']
}

# for 2016
# aliases['Top_pTrw'] = {
#     # New Top PAG
#     'expr': '(topGenPtOTF * antitopGenPtOTF > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPtOTF) - 0.000134*topGenPtOTF + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPtOTF) - 0.000134*antitopGenPtOTF + 0.973) * TMath::Exp(2*1.61468e-03 + 3.46659e-06*(topGenPtOTF+antitopGenPtOTF) - 8.90557e-08*(topGenPtOTF*topGenPtOTF+antitopGenPtOTF*antitopGenPtOTF)) )) + (topGenPtOTF * antitopGenPtOTF <= 0.)',
#     'samples': ['top']
# }
