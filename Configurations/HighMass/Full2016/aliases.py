#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake_em', 'Fake_me', 'Fake_ee', 'Fake_mm', 'DATA', 'DYemb')]
mc_emb = [skey for skey in samples if skey not in ('Fake_em', 'Fake_me', 'Fake_ee', 'Fake_mm', 'DATA')]

bAlgo = 'DeepB'
bWP = '0.1241'

if EMorEEorMM == 'em':
  print "Final state is ElMu!"
  aliases['finalstate'] = {
  'expr': '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)'
  }
elif EMorEEorMM == 'ee':
  print "Final state is ElEl!"
  aliases['finalstate'] = {
  'expr': '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)'
  }
elif EMorEEorMM == 'mm':
  print "Final state is MuMu!"
  aliases['finalstate'] = {
  'expr': '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)'
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
      'expr': '(Alt$(CleanJet_pt[0], 0) < 30) * (dymva_alt_bdt_0j) + (Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) < 30) * (dymva_alt_bdt_1j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj < 3.5 || mjj < 400)) * (dymva_alt_bdt_2j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj >= 3.5 && mjj >= 400)) * (dymva_alt_bdt_VBF)'
  }

# High Mass variables and DNNs
aliases['back2back_OTF'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/HighMass/HMvars_b2b.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'HMvarsb2b'
}

aliases['mjjGen_OTF'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/HighMass/HMvars_mjjgen.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'HMvarsmjjgen',
    'samples': ['WW', 'qqWWqq', 'WW2J', 'DYveto']
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
               && (Lepton_pt[0]+Lepton_pt[1]+PuppiMET_pt)>250 \
               && back2back_OTF<3.0 \
         )' 
}

aliases['VBFcut'] = {
    'expr': '( DNN_isVBF_OTF>0.75 )' 
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

aliases['ttHMVA_SF_2l'] = {'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/patches/compute_SF.C+' % os.getenv('CMSSW_BASE')],
                           'class': 'compute_SF',
                           'args' : ('2016', 2, 'total_SF'),
                             'samples': mc_emb
                          }

aliases['ttHMVA_SF_Up_0'] = {'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/patches/compute_SF.C+' % os.getenv('CMSSW_BASE')],
                             'class': 'compute_SF',
                             'args' : ('2016', 2, 'single_SF_up', 0),
                             'samples': mc_emb
                            }
aliases['ttHMVA_SF_Up_1'] = {'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/patches/compute_SF.C+' % os.getenv('CMSSW_BASE')],
                             'class': 'compute_SF',
                             'args' : ('2016', 2, 'single_SF_up', 1),
                             'samples': mc_emb
                            }
aliases['ttHMVA_SF_Down_0'] = {'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/patches/compute_SF.C+' % os.getenv('CMSSW_BASE')],
                               'class': 'compute_SF',
                               'args' : ('2016', 2, 'single_SF_down', 0),
                               'samples': mc_emb
                              }
aliases['ttHMVA_SF_Down_1'] = {'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/patches/compute_SF.C+' % os.getenv('CMSSW_BASE')],
                               'class': 'compute_SF',
                               'args' : ('2016', 2, 'single_SF_down', 1),
                               'samples': mc_emb
                              }
aliases['ttHMVA_2l_mu_SF_Up'] = {'expr' : '(ttHMVA_SF_Up_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                           (ttHMVA_SF_Up_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11))',
                                 'samples': mc_emb
                                }
aliases['ttHMVA_2l_mu_SF_Down'] = {'expr' : '(ttHMVA_SF_Down_0*(TMath::Abs(Lepton_pdgId[0]) == 13) + (TMath::Abs(Lepton_pdgId[0]) == 11)) *\
                                             (ttHMVA_SF_Down_1*(TMath::Abs(Lepton_pdgId[1]) == 13) + (TMath::Abs(Lepton_pdgId[1]) == 11))',
                                   'samples': mc_emb
                                  }

aliases['GenLHE'] = {
'expr': '(Sum$(LHEPart_pdgId == 21) == 0)',
'samples': mc
}

# gen-matching to prompt only (GenLepMatch2l matches to *any* gen lepton)
aliases['PromptGenLepMatch2l'] = {
    'expr': 'Alt$(Lepton_promptgenmatched[0]*Lepton_promptgenmatched[1], 0)',
    'samples': mc
}

aliases['Top_pTrw'] = {
    #'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(-2.02274e-01 + 1.09734e-04*topGenPt - 1.30088e-07*topGenPt*topGenPt + 5.83494e+01/(topGenPt+1.96252e+02)) * TMath::Exp(-2.02274e-01 + 1.09734e-04*antitopGenPt - 1.30088e-07*antitopGenPt*antitopGenPt + 5.83494e+01/(antitopGenPt+1.96252e+02)))) * (TMath::Sqrt((1.04660 + 5.31733e-02*TMath::TanH(-1.71685 + 2.52570e-03*topGenPt)) * (1.04660 + 5.31733e-02*TMath::TanH(-1.71685 + 2.52570e-03*antitopGenPt)))) + (topGenPt * antitopGenPt <= 0.)',

    # Mine:
    #'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(-2.02274e-01 + 1.09734e-04*topGenPt - 1.30088e-07*topGenPt*topGenPt + 5.83494e+01/(topGenPt+1.96252e+02)) * TMath::Exp(-2.02274e-01 + 1.09734e-04*antitopGenPt - 1.30088e-07*antitopGenPt*antitopGenPt + 5.83494e+01/(antitopGenPt+1.96252e+02)))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPt - 8.90557e-08*topGenPt*topGenPt) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPt - 8.90557e-08*antitopGenPt*antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)', # Same Reweighting as other years, but with additional fix for tune CUET -> CP5

    # New Top PAG
    'expr': '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt((0.103*TMath::Exp(-0.0118*topGenPt) - 0.000134*topGenPt + 0.973) * (0.103*TMath::Exp(-0.0118*antitopGenPt) - 0.000134*antitopGenPt + 0.973))) * (TMath::Sqrt(TMath::Exp(1.61468e-03 + 3.46659e-06*topGenPt - 8.90557e-08*topGenPt*topGenPt) * TMath::Exp(1.61468e-03 + 3.46659e-06*antitopGenPt - 8.90557e-08*antitopGenPt*antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)', # Same Reweighting as other years, but with additional fix for tune CUET -> CP5
    'samples': ['top']
}

#TODO: temporary until UE/PS has nllW
#aliases['nllWOTF'] = {
#    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/HighMass/Full2016/nllW.cc+' % os.getenv('CMSSW_BASE')],
#    'class': 'WWNLLW',
#    'args': ('central',),
#    'samples': ['WW', 'DYveto']
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
#aliases['MINLO'] = {
#    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/weight2MINLO.cc+' % os.getenv('CMSSW_BASE')],
#    'class': 'Weight2MINLO',
#    'args': ('%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE'),),
#    'samples': ['ggH_hww']
#}

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
    'expr': 'Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0'
}

aliases['bReq'] = {
    'expr': 'Sum$(CleanJet_pt > 30. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) >= 1'
}

aliases['bReq2j'] = {
    'expr': '(CleanJet_pt[0] > 30. && abs(CleanJet_eta[0]) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx[0]] > 0.2217) && (CleanJet_pt[1] > 30. && abs(CleanJet_eta[1]) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx[1]] > 0.2217)'
}

aliases['btag0'] = {
    'expr': '(Alt$(CleanJet_pt[0], 0) < 30.) && !bVeto'
}

aliases['btag1'] = {
    'expr': '(Alt$(CleanJet_pt[0], 0) >= 30. && Alt$(CleanJet_pt[1], 0) < 30.) && bReq'
}

aliases['btag2'] = {
    'expr': '(Alt$(CleanJet_pt[0], 0) >= 30. && Alt$(CleanJet_pt[1], 0) >= 30.) && bReq'
}

aliases['btagvbf'] = {
    'expr': 'Alt$(CleanJet_pt[0], 0) >= 30. && bReq'
}

# Temporary patch for BTV postprocessor bug (no SF for eta < 0, <= 102X_nAODv5_Full2018v5)

btagSFSource = '%s/src/PhysicsTools/NanoAODTools/data/btagSF/DeepCSV_102XSF_V1.csv' % os.getenv('CMSSW_BASE')

aliases['Jet_btagSF_shapeFix'] = {
    'linesToAdd': [
        'gSystem->Load("libCondFormatsBTauObjects.so");',
        'gSystem->Load("libCondToolsBTau.so");',
        'gSystem->AddIncludePath("-I%s/src");' % os.getenv('CMSSW_RELEASE_BASE'),
        '.L %s/src/PlotsConfigurations/Configurations/patches/btagsfpatch.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'BtagSF',
    'args': (btagSFSource,),
    'samples': mc
}

aliases['bVetoSF'] = {
    #'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))',
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx]+1*(CleanJet_pt<20 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btag0SF'] = {
    #'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && CleanJet_pt<30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx]+1*(CleanJet_pt<20 || CleanJet_pt>30 || abs(CleanJet_eta)>2.5))))',
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>20 && CleanJet_pt<30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx]+1*(CleanJet_pt<20 || CleanJet_pt>30 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btagnSF'] = {
    #'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shape[CleanJet_jetIdx] + (CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))',
    'expr': 'TMath::Exp(Sum$(TMath::Log((CleanJet_pt>30 && abs(CleanJet_eta)<2.5)*Jet_btagSF_shapeFix[CleanJet_jetIdx] + (CleanJet_pt<30 || abs(CleanJet_eta)>2.5))))',
    'samples': mc
}

aliases['btagSF'] = {
    'expr': 'bVetoSF*bVeto + btag0SF*btag0 + btagnSF*(btag1 + btag2) + (!bVeto && !btag0 && !btag1 && !btag2)',
    'samples': mc
}

for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:
    aliases['Jet_btagSF_shapeFix_up_%s' % shift] = {
        'class': 'BtagSF',
        'args': (btagSFSource, 'up_' + shift),
        'samples': mc
    }
    aliases['Jet_btagSF_shapeFix_down_%s' % shift] = {
        'class': 'BtagSF',
        'args': (btagSFSource, 'down_' + shift),
        'samples': mc
    }

    for targ in ['bVeto', 'btag0', 'btagn']:
        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        #alias['expr'] = alias['expr'].replace('btagSF_shape', 'btagSF_shape_up_%s' % shift)
        alias['expr'] = alias['expr'].replace('btagSF_shapeFix', 'btagSF_shapeFix_up_%s' % shift)

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        #alias['expr'] = alias['expr'].replace('btagSF_shape', 'btagSF_shape_down_%s' % shift)
        alias['expr'] = alias['expr'].replace('btagSF_shapeFix', 'btagSF_shapeFix_down_%s' % shift)

    aliases['btagSF%sup' % shift] = {
        'expr': 'bVetoSF{shift}up*bVeto + btag0SF{shift}up*btag0 + btagnSF{shift}up*(btag1 + btag2) + (!bVeto && !btag0 && !btag1 && !btag2)'.format(shift = shift),
        'samples': mc
    }

    aliases['btagSF%sdown' % shift] = {
        'expr': 'bVetoSF{shift}down*bVeto + btag0SF{shift}down*btag0 + btagnSF{shift}down*(btag1 + btag2) + (!bVeto && !btag0 && !btag1 && !btag2)'.format(shift = shift),
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
    'args': (puidSFSource, '2016', 'loose'),
    'samples': mc
}

# nGenJet for PS Uncertainty

aliases['nCleanGenJet'] = {
    'linesToAdd': ['.L %s/src/PlotsConfigurations/Configurations/Differential/ngenjet.cc+' % os.getenv('CMSSW_BASE')
    ],
    'class': 'CountGenJet',
    'samples': mc
}

