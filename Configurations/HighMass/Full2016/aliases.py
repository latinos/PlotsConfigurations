#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake_em', 'Fake_me', 'Fake_ee', 'Fake_mm', 'DATA', 'DYemb')]
mc_sbi = [skey for skey in samples if "SBI" in skey]

if EMorEEorMM == 'em':
  print "Final state is ElMu!"
  aliases['finalstate'] = {
  'expr': '(Alt$(Lepton_pdgId[0], 0)*Alt$(Lepton_pdgId[1], 0) == -11*13)' # Of course there's always two leptons, but Multidraw doesn't know this and gives a warning "Aliases are represented as arrays", so use the Alt$ syntax instead.
  }
elif EMorEEorMM == 'ee':
  print "Final state is ElEl!"
  aliases['finalstate'] = {
  'expr': '(Alt$(Lepton_pdgId[0], 0)*Alt$(Lepton_pdgId[1], 0) == -11*11)'
  }
elif EMorEEorMM == 'mm':
  print "Final state is MuMu!"
  aliases['finalstate'] = {
  'expr': '(Alt$(Lepton_pdgId[0], 0)*Alt$(Lepton_pdgId[1], 0) == -13*13)'
  }

if EMorEEorMM != 'em':
  #aliases['DYmva_dnn'] = {
  #    'expr': '(Alt$(CleanJet_pt[0], 0) < 30) * (dymva_dnn_0j) + (Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) < 30) * (dymva_dnn_1j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj < 3.5 || mjj < 400)) * (dymva_dnn_2j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj >= 3.5 && mjj >= 400)) * (dymva_dnn_VBF)'
  #}
  #aliases['DYmva_bdt'] = {
  #    'expr': '(Alt$(CleanJet_pt[0], 0) < 30) * (dymva_bdt_0j) + (Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) < 30) * (dymva_bdt_1j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj < 3.5 || mjj < 400)) * (dymva_bdt_2j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj >= 3.5 && mjj >= 400)) * (dymva_bdt_VBF)'
  #}
  #aliases['DYmva_dnnalt'] = {
  #    'expr': '(Alt$(CleanJet_pt[0], 0) < 30) * (dymva_alt_dnn_0j) + (Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) < 30) * (dymva_alt_dnn_1j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj < 3.5 || mjj < 400)) * (dymva_alt_dnn_2j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj >= 3.5 && mjj >= 400)) * (dymva_alt_dnn_VBF)'
  #}
  aliases['DYmva_bdtalt'] = {
      #'expr': '(Alt$(CleanJet_pt[0], 0) < 30) * (dymva_alt_bdt_0j) + (Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) < 30) * (dymva_alt_bdt_1j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj < 3.5 || mjj < 400)) * (dymva_alt_bdt_2j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj >= 3.5 && mjj >= 400)) * (dymva_alt_bdt_VBF)'
      'expr': '1.0' # Temporary disable
  }

# High Mass variables and DNNs
aliases['back2back_OTF'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/HighMass/HMvars_b2b.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'HMvarsb2b'
}

aliases['mjjGen_OTF'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/HighMass/HMvars_mjjgen.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'HMvarsmjjgen',
    'samples': ['WW', 'qqWWqq', 'WW2J', 'DYveto']+mc_sbi
}

aliases['DNN_isVBF_OTF'] = {
    'class': 'DNNprod',
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_prod.cc+' % os.getenv('CMSSW_BASE'), 
    ],
}

aliases['DNN_mth_OTF'] = {
    'class': 'DNNneut',
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_neut.cc+' % os.getenv('CMSSW_BASE'), 
    ],
}

#aliases['DNN_WW_OTF'] = {
#    'class': 'DNNcateg',
#    'args': ( 0, ),
#    'linesToAdd':[
#        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#        'gSystem->Load("libDNNEvaluator.so")',
#        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_categ.cc+' % os.getenv('CMSSW_BASE'), 
#    ],
#}
#aliases['DNN_ggHlow_OTF'] = {
#    'class': 'DNNcateg',
#    'args': ( 1, ),
#    'linesToAdd':[
#        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#        'gSystem->Load("libDNNEvaluator.so")',
#        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_categ.cc+' % os.getenv('CMSSW_BASE'), 
#    ],
#}
#aliases['DNN_ggHmid_OTF'] = {
#    'class': 'DNNcateg',
#    'args': ( 2, ),
#    'linesToAdd':[
#        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#        'gSystem->Load("libDNNEvaluator.so")',
#        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_categ.cc+' % os.getenv('CMSSW_BASE'), 
#    ],
#}
#aliases['DNN_ggHhigh_OTF'] = {
#    'class': 'DNNcateg',
#    'args': ( 3, ),
#    'linesToAdd':[
#        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#        'gSystem->Load("libDNNEvaluator.so")',
#        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_categ.cc+' % os.getenv('CMSSW_BASE'), 
#    ],
#}
#aliases['DNN_VBFlow_OTF'] = {
#    'class': 'DNNcateg',
#    'args': ( 4, ),
#    'linesToAdd':[
#        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#        'gSystem->Load("libDNNEvaluator.so")',
#        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_categ.cc+' % os.getenv('CMSSW_BASE'), 
#    ],
#}
#aliases['DNN_VBFmid_OTF'] = {
#    'class': 'DNNcateg',
#    'args': ( 5, ),
#    'linesToAdd':[
#        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#        'gSystem->Load("libDNNEvaluator.so")',
#        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_categ.cc+' % os.getenv('CMSSW_BASE'), 
#    ],
#}
#aliases['DNN_VBFhigh_OTF'] = {
#    'class': 'DNNcateg',
#    'args': ( 6, ),
#    'linesToAdd':[
#        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#        'gSystem->Load("libDNNEvaluator.so")',
#        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_categ.cc+' % os.getenv('CMSSW_BASE'), 
#    ],
#}
#aliases['DNN_other_OTF'] = {
#    'class': 'DNNcateg',
#    'args': ( 7, ),
#    'linesToAdd':[
#        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#        'gSystem->Load("libDNNEvaluator.so")',
#        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_categ.cc+' % os.getenv('CMSSW_BASE'), 
#    ],
#}
#aliases['DNN_maxcateg_OTF'] = {
#    'expr': 'max( max( max(DNN_WW_OTF, DNN_ggHlow_OTF), max(DNN_ggHmid_OTF, DNN_ggHhigh_OTF) ), max( max(DNN_VBFlow_OTF, DNN_VBFmid_OTF), max(DNN_VBFhigh_OTF, DNN_other_OTF) ) )'
#}
#aliases['DNN_categ_OTF'] = {
#    'expr': '0*(DNN_maxcateg_OTF==DNN_WW_OTF)+1*(DNN_maxcateg_OTF==DNN_ggHlow_OTF)+2*(DNN_maxcateg_OTF==DNN_ggHmid_OTF)+3*(DNN_maxcateg_OTF==DNN_ggHhigh_OTF)+4*(DNN_maxcateg_OTF==DNN_VBFlow_OTF)+5*(DNN_maxcateg_OTF==DNN_VBFmid_OTF)+6*(DNN_maxcateg_OTF==DNN_VBFhigh_OTF)+7*(DNN_maxcateg_OTF==DNN_other_OTF)'
#}

aliases['HighMass'] = {
    'expr': '(    mll>140 \
               && dphill>2.0 \
               && dphilmet<1.6 \
               && (Alt$(Lepton_pt[0], 0)+Alt$(Lepton_pt[1], 0)+PuppiMET_pt)>250 \
               && back2back_OTF<3.0 \
         )'
}

aliases['VBFcut'] = {
    'expr': '( DNN_isVBF_OTF>0.77 )'
}

aliases['VBFcut_HM'] = {
    'expr': '( DNN_isVBF_OTF>0.68 )'
}

aliases['SBI_isSMggh'] = {
    'expr': '( abs(Xsec-1.091343e+00) < 1.0e-06 )',
    'samples': mc_sbi
}
aliases['SBI_isSMVBF'] = {
    'expr': '( abs(Xsec-8.496211e-02) < 1.0e-08 )',
    'samples': mc_sbi
}
aliases['SBI_isggWW'] = {
    'expr': '( abs(Xsec-5.905000e-01) < 1.0e-07 )',
    'samples': mc_sbi
}
aliases['SBI_isqqWWqq'] = {
    'expr': '( abs(Xsec-2.423000e+00) < 1.0e-06 )',
    'samples': mc_sbi
}
aliases['SBI_isHM'] = {
    'expr': '( !SBI_isSMggh && !SBI_isSMVBF && !SBI_isggWW && !SBI_isqqWWqq )',
    'samples': mc_sbi
}

#aliases['VBFcut'] = {
#    'expr': '(    mjj>400 \
#               && detajj>3.5 \
#         )' 
#}

#aliases['HighVBFcut'] = {
#    'expr': '(    mjj>500 \
#               && detajj>4.0 \
#         )' 
#}

#aliases['oldmjjGen'] = {
#    'linesToAdd': [
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
#        '.L %s/src/PlotsConfigurations/Configurations/HighMass/oldmjjGen/deltaRMatch.C+' % os.getenv('CMSSW_BASE'),
#        '.L %s/src/PlotsConfigurations/Configurations/HighMass/oldmjjGen/mjjGen.C+' % os.getenv('CMSSW_BASE')
#    ],
#    'expr': 'mjjGen(  Alt$(GenJet_pt[abs(Jet_genJetIdx[CleanJet_jetIdx[0]])],-1), \
#                      Alt$(GenJet_eta[abs(Jet_genJetIdx[CleanJet_jetIdx[0]])],-1), \
#                      Alt$(GenJet_phi[abs(Jet_genJetIdx[CleanJet_jetIdx[0]])],-1), \
#                      Alt$(GenJet_pt[abs(Jet_genJetIdx[CleanJet_jetIdx[1]])],-1), \
#                      Alt$(GenJet_eta[abs(Jet_genJetIdx[CleanJet_jetIdx[1]])],-1), \
#                      Alt$(GenJet_phi[abs(Jet_genJetIdx[CleanJet_jetIdx[1]])],-1), \
#                      Jet_genJetIdx[CleanJet_jetIdx[0]], \
#                      Jet_genJetIdx[CleanJet_jetIdx[1]])',
#    'samples': ['WW', 'qqWWqq', 'WW2J'] + [skey for skey in samples if 'QQHSBI' in skey]
#}

aliases['GenLHE'] = {
'expr': '(Sum$(LHEPart_pdgId == 21) == 0)',
'samples': mc
}

# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}

# nGenJet for PS Uncertainty

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'CountGenJet',
    'samples': mc
}

##### Top pT reweighting
aliases['Top_pTrw'] = {
    # Mine:
    #'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(-2.02274e-01 + 1.09734e-04*topGenPt - 1.30088e-07*topGenPt*topGenPt + 5.83494e+01/(topGenPt+1.96252e+02)) * TMath::Exp(-2.02274e-01 + 1.09734e-04*antitopGenPt - 1.30088e-07*antitopGenPt*antitopGenPt + 5.83494e+01/(antitopGenPt+1.96252e+02)))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPt - 8.90557e-08*topGenPt*topGenPt) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPt - 8.90557e-08*antitopGenPt*antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)', # Same Reweighting as other years, but with additional fix for tune CUET -> CP5

    # New Top PAG
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPt - 8.90557e-08*topGenPt*topGenPt) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPt - 8.90557e-08*antitopGenPt*antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)', # Same Reweighting as other years, but with additional fix for tune CUET -> CP5
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

##### Testing effect of recoil corrections
#aliases['METrecoil_OTF'] = {
#    'linesToAdd':[
#        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#        'gSystem->Load("libHTT-utilitiesRecoilCorrections.so")',
#        '.L %s/src/PlotsConfigurations/Configurations/HighMass/METrecoil.cc+' % os.getenv('CMSSW_BASE'), 
#    ],
#    'class': 'METrecoil',
#    'args': ('HTT-utilities/RecoilCorrections/data/Type1_PuppiMET_2016.root'),
#    'samples': ['DY']
#}
aliases['METrecoil_OTF'] = {
    'expr': 'PuppiMET_pt'
}
#aliases['METrecoilPHI_OTF'] = {
#    'linesToAdd':[
#        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
#        'gSystem->Load("libHTT-utilitiesRecoilCorrections.so")',
#        '.L %s/src/PlotsConfigurations/Configurations/HighMass/METrecoilPHI.cc+' % os.getenv('CMSSW_BASE'), 
#    ],
#    'class': 'METrecoilPHI',
#    'args': ('HTT-utilities/RecoilCorrections/data/Type1_PuppiMET_2016.root'),
#    'samples': ['DY']
#}
aliases['METrecoilPHI_OTF'] = {
    'expr': 'PuppiMET_phi'
}
aliases['phill'] = {
    'expr': 'TMath::ATan2(Alt$(Lepton_pt[0], 0)*TMath::Sin(Alt$(Lepton_phi[0], 0))+Alt$(Lepton_pt[1], 0)*TMath::Sin(Alt$(Lepton_phi[1], 0)), Alt$(Lepton_pt[0], 0)*TMath::Cos(Alt$(Lepton_phi[0], 0))+Alt$(Lepton_pt[1], 0)*TMath::Cos(Alt$(Lepton_phi[1], 0)))'
}
#aliases['mth_OTF'] = {
#    'expr': 'TMath::Sqrt( 2. * ptll * METrecoil_OTF * ( 1. - TMath::Cos( phill-METrecoilPHI_OTF )))'
#}
aliases['mth_OTF'] = {
    'expr': 'mth'
}
#aliases['mtw1_OTF'] = {
#    'expr': 'TMath::Sqrt(2 * Lepton_pt[0] * METrecoil_OTF * (1 - TMath::Cos( Lepton_phi[0]-METrecoilPHI_OTF )))'
#}
aliases['mtw1_OTF'] = {
    'expr': 'mtw1'
}

##### Testing reweighting DY MET for SF
#handle = open('%s/src/PlotsConfigurations/Configurations/HighMass/DYrew_MET.py' % os.getenv('CMSSW_BASE'),'r')
#exec(handle)
#handle.close()
#if EMorEEorMM == 'em':
#  aliases['DY_METrw'] = {
#    'expr': '1',
#    'samples': ['DY']
#  }
#elif EMorEEorMM == 'ee':
#  aliases['DY_METrw'] = {
#    'expr': DYrew_MET['2016']['ee'].replace('x', 'PuppiMET_pt'),
#    'samples': ['DY']
#  }
#elif EMorEEorMM == 'mm':
#  aliases['DY_METrw'] = {
#    'expr': DYrew_MET['2016']['mm'].replace('x', 'PuppiMET_pt'),
#    'samples': ['DY']
#  }

#TODO: temporary until UE/PS has nllW
#aliases['nllWOTF'] = {
#    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/HighMass/Full2016/nllW.cc+' % os.getenv('CMSSW_BASE')],
#    'class': 'WWNLLW',
#    'args': ('central',),
#    'samples': mc_sbi #['WW', 'DYveto']
#}

# In WpWmJJ_EWK events, partons [0] and [1] are always the decay products of the first W
aliases['lhe_mW1'] = {
    'expr': 'TMath::Sqrt(2. * LHEPart_pt[0] * LHEPart_pt[1] * (TMath::CosH(LHEPart_eta[0] - LHEPart_eta[1]) - TMath::Cos(LHEPart_phi[0] - LHEPart_phi[1])))',
    'samples': ['WWewk', 'DYveto']
}

# and [2] [3] are the second W
aliases['lhe_mW2'] = {
    'expr': 'TMath::Sqrt(2. * LHEPart_pt[2] * LHEPart_pt[3] * (TMath::CosH(LHEPart_eta[2] - LHEPart_eta[3]) - TMath::Cos(LHEPart_phi[2] - LHEPart_phi[3])))',
    'samples': ['WWewk', 'DYveto']
}

# For SM ggHWW
aliases['MINLO'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/weight2MINLO.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'Weight2MINLO',
    'args': ('%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE'),),
    'samples': ['ggH_hww']+mc_sbi
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

# B-Stuff
aliases['bVeto'] = {
    'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2219) == 0'
}

aliases['bReq'] = {
    'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2219) >= 1'
}

aliases['bReq0j'] = {
    'expr': '(Alt$(CleanJet_pt[0], 0) < 30.) && !bVeto'
}

#aliases['btag1'] = {
#    'expr': '(Alt$(CleanJet_pt[0], 0) >= 30. && Alt$(CleanJet_pt[1], 0) < 30.) && bReq'
#}

#aliases['btag2'] = {
#    'expr': '(Alt$(CleanJet_pt[0], 0) >= 30. && Alt$(CleanJet_pt[1], 0) >= 30.) && bReq'
#}

#aliases['btagvbf'] = {
#    'expr': 'Alt$(CleanJet_pt[0], 0) >= 30. && bReq'
#}

# Temporary patch for BTV postprocessor bug (no SF for eta < 0, <= 102X_nAODv5_Full2018v5)

#btagSFSource = '%s/src/PhysicsTools/NanoAODTools/data/btagSF/DeepCSV_102XSF_V1.csv' % os.getenv('CMSSW_BASE')

#aliases['Jet_btagSF_shapeFix'] = {
#    'linesToAdd': [
#        'gSystem->Load("libCondFormatsBTauObjects.so");',
#        'gSystem->Load("libCondToolsBTau.so");',
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
#        '.L %s/src/PlotsConfigurations/Configurations/patches/btagsfpatch.cc+' % os.getenv('CMSSW_BASE')
#    ],
#    'class': 'BtagSF',
#    'args': (btagSFSource,),
#    'samples': mc
#}

aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log( {0} * Jet_btagSF_shape[CleanJet_jetIdx] + !{0} * 1 )))'.format('(CleanJet_pt>=20 && abs(CleanJet_eta)<2.5)'),
    #'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log( {0} * Jet_btagSF_shape[CleanJet_jetIdx] + !{0} * 1 )))'.format('(CleanJet_pt>=30 && abs(CleanJet_eta)<2.5)'),
    #'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx] + (CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['bReq0jSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log( {0} * Jet_btagSF_shape[CleanJet_jetIdx] + !{0} * 1 )))'.format('(CleanJet_pt>=20 && CleanJet_pt<30 && abs(CleanJet_eta)<2.5)'),
    #'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && CleanJet_pt<30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx]+1*(CleanJet_pt<20 || CleanJet_pt>30 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btagSF'] = {
    'expr': 'bVetoSF*bVeto + bReqSF*bReq + bReq0jSF*bReq0j + (!bVeto && !bReq && !bReq0j)',
    'samples': mc
}

for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:
    #aliases['Jet_btagSF_shapeFix_up_%s' % shift] = {
    #    'class': 'BtagSF',
    #    'args': (btagSFSource, 'up_' + shift),
    #    'samples': mc
    #}
    #aliases['Jet_btagSF_shapeFix_down_%s' % shift] = {
    #    'class': 'BtagSF',
    #    'args': (btagSFSource, 'down_' + shift),
    #    'samples': mc
    #}

    for targ in ['bVeto', 'bReq', 'bReq0j']:
        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_shape', 'btagSF_shape_up_%s' % shift)
        #alias['expr'] = alias['expr'].replace('btagSF_shapeFix', 'btagSF_shapeFix_up_%s' % shift)

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_shape', 'btagSF_shape_down_%s' % shift)
        #alias['expr'] = alias['expr'].replace('btagSF_shapeFix', 'btagSF_shapeFix_down_%s' % shift)

    aliases['btagSF%sup' % shift] = {
        'expr': 'bVetoSF{shift}up*bVeto + bReqSF{shift}up*bReq + bReq0jSF{shift}up*bReq0j + (!bVeto && !bReq && !bReq0j)'.format(shift = shift),
        'samples': mc
    }

    aliases['btagSF%sdown' % shift] = {
        'expr': 'bVetoSF{shift}down*bVeto + bReqSF{shift}down*bReq + bReq0jSF{shift}down*bReq0j + (!bVeto && !bReq && !bReq0j)'.format(shift = shift),
        'samples': mc
    }

# PU jet Id SF

# New:
puidSFSource = '%s/src/PlotsConfigurations/Configurations/patches/PUID_81XTraining_EffSFandUncties.root' % os.getenv('CMSSW_BASE')

aliases['PUJetIdSF'] = {
    'linesToAdd': [
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/pujetidsf_event_new.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'PUJetIdEventSF',
    'args': (puidSFSource, '2016', 'loose'),
    'samples': mc
}

# Old:
#puidSFSource = '%s/src/LatinoAnalysis/NanoGardener/python/data/JetPUID_effcyandSF.root' % os.getenv('CMSSW_BASE')
#
#aliases['PUJetIdSF'] = {
#    'linesToAdd': [
#        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_BASE'),
#        '.L %s/src/PlotsConfigurations/Configurations/patches/pujetidsf_event.cc+' % os.getenv('CMSSW_BASE')
#    ],
#    'class': 'PUJetIdEventSF',
#    'args': (puidSFSource, '2016', 'loose'),
#    'samples': mc
#}

