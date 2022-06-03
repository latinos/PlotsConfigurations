#aliases = {}

mc = [skey for skey in samples if skey not in ('Fake_em', 'Fake_me', 'Fake_of', 'Fake_ee', 'Fake_mm', 'DATA', 'DYemb')]
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

aliases['DNN_isggFnew_OTF'] = {
    'class': 'DNNprod_new_ggFVBF',
    'args': ( 0, ),
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_prod_new_ggFVBF.cc+' % os.getenv('CMSSW_BASE'), 
    ],
}

aliases['DNN_isVBFnew_OTF'] = {
    'class': 'DNNprod_new_ggFVBF',
    'args': ( 1, ),
    'linesToAdd':[
        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
        'gSystem->Load("libDNNEvaluator.so")',
        '.L %s/src/PlotsConfigurations/Configurations/HighMass/DNN_prod_new_ggFVBF.cc+' % os.getenv('CMSSW_BASE'), 
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


aliases['HighMass'] = {
    'expr': '(    mll>140 \
               && dphill>2.0 \
               && dphilmet<1.6 \
               && (Alt$(Lepton_pt[0], 0)+Alt$(Lepton_pt[1], 0)+PuppiMET_pt)>250 \
               && back2back_OTF<3.0 \
         )'
}

aliases['VBFcut_NEW'] = {
    'expr': '( (DNN_isVBFnew_OTF/(DNN_isVBFnew_OTF+DNN_isggFnew_OTF)>0.75)&&(DNN_isVBFnew_OTF>0.10) )'
}

aliases['ggFcut_NEW'] = {
    'expr': '( ((DNN_isggFnew_OTF>0.75)||(DNN_isVBFnew_OTF>0.10))&&(!VBFcut_NEW) )'
}

aliases['SBI_isSMggh'] = {
    'expr': '( abs(Xsec-1.091343e+00) < 1.0e-06 && !(abs(XSWeight-1.091343e-02) < 1.0e-08))', # With protection against "HM" 125 sample
    'samples': mc_sbi
}
aliases['SBI_isSMVBF'] = {
    'expr': '( abs(Xsec-8.496211e-02) < 1.0e-08 && !(abs(XSWeight-8.496211e-04) < 1.0e-10))', # With protection against "HM" 125 sample
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


aliases['GenLHE'] = {
    'expr': '(Sum$(LHEPart_pdgId == 21) == 0)',
    'samples': mc
}

aliases['njet0'] = {
    'expr': 'Alt$(CleanJet_pt[0],0)<30'
}
aliases['njet1'] = {
    'expr': 'Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)< 30'
}
aliases['njet2'] = {
    'expr': 'Alt$(CleanJet_pt[0],0)>=30 && Alt$(CleanJet_pt[1],0)>=30'
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
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/patches/getGenZpt_new.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'getGenZpt_new',
    'samples': ['DY']
}
aliases['getGenZmass_OTF'] = {
    'linesToAdd':['.L %s/src/PlotsConfigurations/Configurations/patches/getGenZmass.cc+' % os.getenv('CMSSW_BASE')],
    'class': 'getGenZmass',
    'samples': ['DY']
}
handle = open('%s/src/PlotsConfigurations/Configurations/patches/DYrew30.py' % os.getenv('CMSSW_BASE'),'r')
exec(handle)
handle.close()
aliases['DY_NLO_pTllrw'] = {
    'expr': '(('+DYrew['2016']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0))',
    'samples': ['DY']
}
aliases['DY_LO_pTllrw'] = {
    #'expr': '('+DYrew['2016']['LO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0)',
    'expr': '('+DYrew['2016']['LOtoNLO'].replace('x', 'getGenZpt_OTF')+')*(('+DYrew['2016']['NLO'].replace('x', 'getGenZpt_OTF')+')*(nCleanGenJet == 0)+1.0*(nCleanGenJet > 0))',
    'samples': ['DY']
}
aliases['DY_LOtoNLOonly'] = {
    'expr': '('+DYrew['2016']['LOtoNLO'].replace('x', 'getGenZpt_OTF')+')',
    'samples': ['DY']
}
if EMorEEorMM == 'em':
  aliases['DY_isLO'] = {
    'expr': '(0)',
    'samples': ['DY']
  }
else:
  aliases['DY_isLO'] = {
    'expr': '(getGenZmass_OTF < 50) && (LHE_HT >= 70)',
    'samples': ['DY']
  }
aliases['DY_LowMll'] = {
  'expr': '('+DYrew['2016']['LowMll'].replace('x', 'mll')+')*(mll < 70) + 1.0 * (mll >= 70)',
  'samples': ['DY']
}

##### DY MC stitching
handle2 = open('%s/src/PlotsConfigurations/Configurations/patches/DYstitching.py' % os.getenv('CMSSW_BASE'),'r')
exec(handle2)
handle2.close()
MLLbins = ["100", "200", "400", "500", "700", "800", "1000", "1500", "2000", "3000"]
PTLLbins = ["50", "100", "250", "400", "650"]
FullStitchWeight = "((getGenZmass_OTF<50)*1.0 + (getGenZmass_OTF>=50)*(" # Leave mll<50 samples alone; only stitch for mll>50
IndividualParts = []
for alpha in DYstitching["2016"]["XS"]:
  if "HT" in alpha: continue
  XSkey = "OldXS" if "PTLL" in alpha else "XS"
  aliases['DY_is'+alpha.replace("-","_")] = {
    'expr': "(abs("+str(DYstitching["2016"][XSkey][alpha])+"/Xsec -1.0) < 1.0e-03)",
    'samples': ['DY']
  }
for i in range(len(PTLLbins)+1):
  for j in range(len(MLLbins)+1):
    mllcuts = []
    ptllcuts = []
    if i>0: ptllcuts.append("(LHE_Vpt >= "+PTLLbins[i-1]+")")
    if i<len(PTLLbins): ptllcuts.append("(LHE_Vpt < "+PTLLbins[i]+")")
    if j>0: mllcuts.append("(getGenZmass_OTF >= "+MLLbins[j-1]+")")
    if j<len(MLLbins): mllcuts.append("(getGenZmass_OTF < "+MLLbins[j]+")")
    ForSamples = ["(DY_isincl*"+'*'.join(ptllcuts)+"*"+'*'.join(mllcuts)+")"] # For the inclusive sample, split it along the mll-ptll phase space
    NoverXSweight = 0.0
    for alpha in DYstitching["2016"]["NWevents"]:
      if "HT" in alpha: continue
      elif "PTLL" in alpha:
        goodlowbound = (i>0 and "PTLL_"+PTLLbins[i-1]+"-" in alpha)
        if goodlowbound: ForSamples.append("(DY_is"+alpha.replace("-","_")+"*"+'*'.join(mllcuts)+")") # In a certain ptll bin, selected only events from that specific ptll-binned sample (even the outliers just outside the edges), and just split along mll
      elif "MLL" in alpha:
        goodlowbound = (j>0 and "MLL_"+MLLbins[j-1]+"-" in alpha)
        if goodlowbound: ForSamples.append("(DY_is"+alpha.replace("-","_")+"*"+'*'.join(ptllcuts)+")") # Same as for ptll
      if (alpha=="incl") or (alpha!="incl" and goodlowbound):
        NoverXSweight += (DYstitching["2016"]["NWevents"][alpha]/DYstitching["2016"]["GenW"][alpha]) / DYstitching["2016"]["XS"][alpha] # Sum of weighted events normalized by mean absolute genW
    newbaseW = str(1000.0/NoverXSweight) if NoverXSweight!=0.0 else "0.0"
    ThisStitchWeight = "(("+'+'.join(ForSamples)+")*"+newbaseW+")"
    IndividualParts.append(ThisStitchWeight)

# Because abs(genWeight) is not the same for each event in an sample in 2018, do this the complicated way:
# Instead of adding "/abs(genWeight)" to XSWeight to propagate the normalized genWeight, get the same by-sample normalization factor as used above
AllNormedGenW = []
for alpha in DYstitching["2016"]["GenW"]:
  if "HT" in alpha: continue
  AllNormedGenW.append("(DY_is"+alpha.replace("-","_")+"*("+str(DYstitching["2016"]["GenW"][alpha] -1.0)+"))") # "-1.0" is offset, as overall "+1.0" is used later to account for any other samples (to avoid error when dividing by 0, when it comes to irrelevant mll<50GeV samples).

aliases['ThisSamplesMeanAbsGenW'] = {
  'expr': '(1.0+'+'+'.join(AllNormedGenW)+')',
  #'expr': 'abs(genWeight)', # It's OK in 2016 and 2017 though, EXCEPT for PTLL-binned samples for some reason
  'samples': ['DY']
}

# Need to split this up stupidly like this because otherwise there's a crash due to too many operations in a single expression.
#StitchWeightp1 = IndividualParts[:len(IndividualParts)//2]
#StitchWeightp2 = IndividualParts[len(IndividualParts)//2:]
StitchWeightp1 = IndividualParts[:len(IndividualParts)//3]
StitchWeightp2 = IndividualParts[len(IndividualParts)//3:2*len(IndividualParts)//3]
StitchWeightp3 = IndividualParts[2*len(IndividualParts)//3:]
aliases['DY_StitchPartOne'] = {
  'expr': '+'.join(StitchWeightp1),
  'samples': ['DY']
}
aliases['DY_StitchPartTwo'] = {
  'expr': '+'.join(StitchWeightp2),
  'samples': ['DY']
}
aliases['DY_StitchPartThree'] = {
  'expr': '+'.join(StitchWeightp3),
  'samples': ['DY']
}

FullStitchWeight = FullStitchWeight + "DY_StitchPartOne+DY_StitchPartTwo+DY_StitchPartThree" + ")/baseW/ThisSamplesMeanAbsGenW)" # Propagate normalized genW to by-event genWeight
aliases['DY_StitchWeight'] = {
  'expr': FullStitchWeight,
  'samples': ['DY']
}


# In WpWmJJ_EWK events, partons [2] and [3] are always the decay products of the first W
aliases['lhe_mW1'] = {
    'expr': 'TMath::Sqrt(2. * LHEPart_pt[2] * LHEPart_pt[3] * (TMath::CosH(LHEPart_eta[2] - LHEPart_eta[3]) - TMath::Cos(LHEPart_phi[2] - LHEPart_phi[3])))',
    'samples': ['WWewk', 'DYveto']
}

# and [4] [5] are the second W
aliases['lhe_mW2'] = {
    'expr': 'TMath::Sqrt(2. * LHEPart_pt[4] * LHEPart_pt[5] * (TMath::CosH(LHEPart_eta[4] - LHEPart_eta[5]) - TMath::Cos(LHEPart_phi[4] - LHEPart_phi[5])))',
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

aliases['bVetoSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log( {0} * Jet_btagSF_deepcsv_shape[CleanJet_jetIdx] + !{0} * 1 )))'.format('(CleanJet_pt>=20 && abs(CleanJet_eta)<2.5)'),
    'samples': mc
}

aliases['bReqSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log( {0} * Jet_btagSF_deepcsv_shape[CleanJet_jetIdx] + !{0} * 1 )))'.format('(CleanJet_pt>=30 && abs(CleanJet_eta)<2.5)'),
    'samples': mc
}

aliases['bReq0jSF'] = {
    'expr': 'TMath::Exp(Sum$(TMath::Log( {0} * Jet_btagSF_deepcsv_shape[CleanJet_jetIdx] + !{0} * 1 )))'.format('(CleanJet_pt>=20 && CleanJet_pt<30 && abs(CleanJet_eta)<2.5)'),
    'samples': mc
}

aliases['btagSF'] = {
    'expr': 'bVetoSF*bVeto + bReqSF*bReq + bReq0jSF*bReq0j + (!bVeto && !bReq && !bReq0j)',
    'samples': mc
}

for shift in ['jes','lf','hf','lfstats1','lfstats2','hfstats1','hfstats2','cferr1','cferr2']:

    for targ in ['bVeto', 'bReq', 'bReq0j']:
        alias = aliases['%sSF%sup' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_up_%s' % shift)
        #alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shapeFix', 'btagSF_deepcsv_shapeFix_up_%s' % shift)

        alias = aliases['%sSF%sdown' % (targ, shift)] = copy.deepcopy(aliases['%sSF' % targ])
        alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shape', 'btagSF_deepcsv_shape_down_%s' % shift)
        #alias['expr'] = alias['expr'].replace('btagSF_deepcsv_shapeFix', 'btagSF_deepcsv_shapeFix_down_%s' % shift)

    aliases['btagSF%sup' % shift] = {
        'expr': 'bVetoSF{shift}up*bVeto + bReqSF{shift}up*bReq + bReq0jSF{shift}up*bReq0j + (!bVeto && !bReq && !bReq0j)'.format(shift = shift),
        'samples': mc
    }

    aliases['btagSF%sdown' % shift] = {
        'expr': 'bVetoSF{shift}down*bVeto + bReqSF{shift}down*bReq + bReq0jSF{shift}down*bReq0j + (!bVeto && !bReq && !bReq0j)'.format(shift = shift),
        'samples': mc
    }

# PU jet Id SF

#aliases['Jet_PUIDSF'] = {
#  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose)))',
#  'samples': mc
#}
#
#aliases['Jet_PUIDSF_up'] = {
#  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose_up)))',
#  'samples': mc
#}
#
#aliases['Jet_PUIDSF_down'] = {
#  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2)*TMath::Log(Jet_PUIDSF_loose_down)))',
#  'samples': mc
#}

# Above includes non-lepton-cleaned jets. Use below instead: Alt$(Lepton_pdgId[1], 0)

aliases['Jet_PUIDSF'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2 && ( (Jet_electronIdx1 != Alt$(Lepton_electronIdx[0], 0) && Jet_electronIdx1 != Alt$(Lepton_electronIdx[1], 0)) || Jet_electronIdx1 < 0 ) && \
                                             ( (Jet_electronIdx2 != Alt$(Lepton_electronIdx[0], 0) && Jet_electronIdx2 != Alt$(Lepton_electronIdx[1], 0)) || Jet_electronIdx2 < 0 ) && \
                                             ( (Jet_muonIdx1 != Alt$(Lepton_muonIdx[0], 0) && Jet_muonIdx1 != Alt$(Lepton_muonIdx[1], 0)) || Jet_muonIdx1 < 0 ) && \
                                             ( (Jet_muonIdx2 != Alt$(Lepton_muonIdx[0], 0) && Jet_muonIdx2 != Alt$(Lepton_muonIdx[1], 0)) || Jet_muonIdx2 < 0 ) \
                                             )*TMath::Log(Jet_PUIDSF_loose)))',
  'samples': mc
}

aliases['Jet_PUIDSF_up'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2 && ( (Jet_electronIdx1 != Alt$(Lepton_electronIdx[0], 0) && Jet_electronIdx1 != Alt$(Lepton_electronIdx[1], 0)) || Jet_electronIdx1 < 0 ) && \
                                             ( (Jet_electronIdx2 != Alt$(Lepton_electronIdx[0], 0) && Jet_electronIdx2 != Alt$(Lepton_electronIdx[1], 0)) || Jet_electronIdx2 < 0 ) && \
                                             ( (Jet_muonIdx1 != Alt$(Lepton_muonIdx[0], 0) && Jet_muonIdx1 != Alt$(Lepton_muonIdx[1], 0)) || Jet_muonIdx1 < 0 ) && \
                                             ( (Jet_muonIdx2 != Alt$(Lepton_muonIdx[0], 0) && Jet_muonIdx2 != Alt$(Lepton_muonIdx[1], 0)) || Jet_muonIdx2 < 0 ) \
                                             )*TMath::Log(Jet_PUIDSF_loose_up)))',
  'samples': mc
}

aliases['Jet_PUIDSF_down'] = {
  'expr' : 'TMath::Exp(Sum$((Jet_jetId>=2 && ( (Jet_electronIdx1 != Alt$(Lepton_electronIdx[0], 0) && Jet_electronIdx1 != Alt$(Lepton_electronIdx[1], 0)) || Jet_electronIdx1 < 0 ) && \
                                             ( (Jet_electronIdx2 != Alt$(Lepton_electronIdx[0], 0) && Jet_electronIdx2 != Alt$(Lepton_electronIdx[1], 0)) || Jet_electronIdx2 < 0 ) && \
                                             ( (Jet_muonIdx1 != Alt$(Lepton_muonIdx[0], 0) && Jet_muonIdx1 != Alt$(Lepton_muonIdx[1], 0)) || Jet_muonIdx1 < 0 ) && \
                                             ( (Jet_muonIdx2 != Alt$(Lepton_muonIdx[0], 0) && Jet_muonIdx2 != Alt$(Lepton_muonIdx[1], 0)) || Jet_muonIdx2 < 0 ) \
                                             )*TMath::Log(Jet_PUIDSF_loose_down)))',
  'samples': mc
}


# Total SF weights
eleWP='mva_90p_Iso2016'
muWP='cut_Tight80x'

aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2l', 'LepCut2l__ele_'+eleWP+'__mu_'+muWP, 'LepSF2l__ele_'+eleWP+'__mu_'+muWP, 'btagSF', 'Jet_PUIDSF', 'PrefireWeight']),
    'samples': mc
}
