#aliases = {}

# imported from samples.py:
# samples

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]
signal = [skey for skey in samples if '_hww' in skey]
top = [skey for skey in samples if skey.startswith('top')]

##############################

bWP='L'
#bWP='M'
#bWP='T'
bSF='bPogSF_CMVA'+bWP
#bSF='bPogSF_CSV'+bWP
#bSF='bPogSF_deepCSV'+bWP

#eleWP='cut_WP_Tight80X'
#eleWP='cut_WP_Tight80X_SS'
#eleWP='mva_80p_Iso2015'
#eleWP='mva_80p_Iso2016'
#eleWP='mva_90p_Iso2015'
eleWP='mva_90p_Iso2016'

muWP='cut_Tight80x'

##############################

## categorization
aliases['leade'] = {
    'expr': 'abs(std_vector_lepton_flavour[0]) == 11'
}

aliases['leadm'] = {
    'expr': 'abs(std_vector_lepton_flavour[0]) == 13'
}

aliases['highptTrail'] = {
    'expr': 'std_vector_lepton_pt[1] > 20.'
}

aliases['lowptTrail'] = {
    'expr': 'std_vector_lepton_pt[1] < 20.'
}

# Trailing lepton is a muon (with pt > 10 GeV implied) or an electron with pt > 13 GeV
aliases['trailingE13'] = {
    'expr': '(abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13)'
}

# Leading two leptons have opposite sign & flavor
aliases['osof'] = {
    'expr': 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13'
}

# Precompiled lepton cuts
aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc + ['DATA']
}

# No jet with pt > 30 GeV
aliases['zeroJet'] = {
    'expr': 'std_vector_jet_pt[0] < 30.'
}

# ==1 jet with pt > 30 GeV
aliases['oneJet'] = {
    'expr': 'std_vector_jet_pt[0] >= 30. && std_vector_jet_pt[1] < 30.'
}

# >=2 jets with pt > 30 GeV
aliases['manyJet'] = {
    'expr': 'std_vector_jet_pt[1] >= 30.'
}

## >=2 jets with pt > 30 GeV limiting to "ggh" configuration
#aliases['manyJetGGH'] = {
#    'expr': 'manyJet && (mjj < 65. || (mjj > 105. && mjj < 400.))'
#}

## number of jets capped at 2
#aliases['njetCapped'] = {
#    'expr': 'njet * (njet < 3) + 2 * (njet > 2)'
#}

## number of bjets
#aliases['nbjet'] = {
#    'expr': 'Sum$(std_vector_jet_pt > 30. && std_vector_jet_cmvav2 > -0.5884)'
#}

# b-jet veto
aliases['bVeto'] = {
    'expr': 'bveto_CMVA' + bWP
}

aliases['toprwgt'] = {
    'expr': 'TMath::Sqrt(TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt))',
    'samples': top
}

# Lepton px, py
#aliases['px0'] = {
#    'expr': 'std_vector_lepton_pt[0] * cos(std_vector_lepton_phi[0])'
#}
#aliases['py0'] = {
#    'expr': 'std_vector_lepton_pt[0] * sin(std_vector_lepton_phi[0])'
#}
#aliases['px1'] = {
#    'expr': 'std_vector_lepton_pt[1] * cos(std_vector_lepton_phi[1])'
#}
#aliases['py1'] = {
#    'expr': 'std_vector_lepton_pt[1] * sin(std_vector_lepton_phi[1])'
#}

# pxll, pyll
#aliases['pxll'] = {
#    'expr': 'px0 + px1'
#}
#aliases['pyll'] = {
#    'expr': 'py0 + py1'
#}

# pxH, pyH
#aliases['pxH'] = {
#    'expr': 'pxll + metPfType1 * cos(metPfType1Phi)'
#}
#aliases['pyH'] = {
#    'expr': 'pyll + metPfType1 * sin(metPfType1Phi)'
#}

# pTH - identical to pTWW
#aliases['ptH'] = {
#    'expr': 'sqrt(pxH * pxH + pyH * pyH)'
#}

# Lepton & b-jet id efficiency scale factor
aliases['sfWeight'] = {
    'expr': ' * '.join(['SFweight2l', bSF, 'LepSF2l__ele_'+eleWP+'__mu_'+muWP, 'LepWPCut']),
    'samples': mc
}
# And variations
aliases['sfWeightEleUp'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__Up',
    'samples': mc
}
aliases['sfWeightEleDown'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__Do',
    'samples': mc
}
aliases['sfWeightMuUp'] = {
    'expr': 'LepSF2l__mu_'+muWP+'__Up',
    'samples': mc
}
aliases['sfWeightMuDown'] = {
    'expr': 'LepSF2l__mu_'+muWP+'__Do',
    'samples': mc
}
aliases['sfWeightBtagBCUp'] = {
    'expr': '('+bSF+'_bc_up)/('+bSF+')',
    'samples': mc
}
aliases['sfWeightBtagBCDown'] = {
    'expr': '('+bSF+'_bc_down)/('+bSF+')',
    'samples': mc
}
aliases['sfWeightBtagUDSGUp'] = {
    'expr': '('+bSF+'_udsg_up)/('+bSF+')',
    'samples': mc
}
aliases['sfWeightBtagUDSGDown'] = {
    'expr': '('+bSF+'_udsg_down)/('+bSF+')',
    'samples': mc
}

# Fake leptons transfer factor
aliases['fakeWeight'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP,
    'samples': ['Fake']
}
# And variations - already divided by central values in formulas !
aliases['fakeWeightEleUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleUp',
    'samples': ['Fake']
}
aliases['fakeWeightEleDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleDown',
    'samples': ['Fake']
}
aliases['fakeWeightMuUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuUp',
    'samples': ['Fake']
}
aliases['fakeWeightMuDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuDown',
    'samples': ['Fake']
}
aliases['fakeWeightStatEleUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleUp',
    'samples': ['Fake']
}
aliases['fakeWeightStatEleDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleDown',
    'samples': ['Fake']
}
aliases['fakeWeightStatMuUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuUp',
    'samples': ['Fake']
}
aliases['fakeWeightStatMuDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuDown',
    'samples': ['Fake']
}

# Gen lepton match
aliases['GenLepMatch'] = {
    'expr': 'GenLepMatch2l',
    'samples': mc
}

# Gen HT (includes leptons!)
aliases['genHT'] = {
    'expr': 'Sum$(std_vector_LHEparton_pt * (std_vector_LHEparton_pt > 0))',
    'samples': mc
}

# Gen Mll
aliases['genMll'] = {
    'expr': 'sqrt(2*std_vector_dressedLeptonGen_pt[0] * std_vector_dressedLeptonGen_pt[1] * (cosh(std_vector_dressedLeptonGen_eta[0]-std_vector_dressedLeptonGen_eta[1])-cos(std_vector_dressedLeptonGen_phi[0]-std_vector_dressedLeptonGen_phi[1])))',
    'samples': mc
}

# Gen px, py
aliases['genPx0'] = {
    'expr': 'std_vector_dressedLeptonGen_pt[0] * cos(std_vector_dressedLeptonGen_phi[0])',
    'samples': mc
}
aliases['genPy0'] = {
    'expr': 'std_vector_dressedLeptonGen_pt[0] * sin(std_vector_dressedLeptonGen_phi[0])',
    'samples': mc
}
aliases['genPx1'] = {
    'expr': 'std_vector_dressedLeptonGen_pt[1] * cos(std_vector_dressedLeptonGen_phi[1])',
    'samples': mc
}
aliases['genPy1'] = {
    'expr': 'std_vector_dressedLeptonGen_pt[1] * sin(std_vector_dressedLeptonGen_phi[1])',
    'samples': mc
}

# Gen pxll, pyll
aliases['genPxll'] = {
    'expr': 'genPx0 + genPx1',
    'samples': mc
}
aliases['genPyll'] = {
    'expr': 'genPy0 + genPy1',
    'samples': mc
}

# Gen met x, y
aliases['genMetx'] = {
    'expr': 'metGenpt * cos(metGenphi)',
    'samples': mc
}
aliases['genMety'] = {
    'expr': 'metGenpt * sin(metGenphi)',
    'samples': mc
}

# Gen pxH, pyH
aliases['genPxH'] = {
    'expr': 'genPxll + genMetx',
    'samples': mc
}
aliases['genPyH'] = {
    'expr': 'genPyll + genMety',
    'samples': mc
}

aliases['genPth'] = {
    'expr': 'sqrt(genPxH * genPxH + genPyH * genPyH)',
    'samples': mc
}

# Gen pTll
aliases['genPtll'] = {
    'expr': 'sqrt(genPxll * genPxll + genPyll * genPyll)',
    'samples': mc
}

## Gen H pz
#aliases['genPzH'] = {
#    'expr': 'higgsGenpt * TMath::SinH(higgsGeneta)',
#    'samples': mc
#}
#
## Gen H energy
#aliases['genEH'] = {
#    'expr': 'TMath::Sqrt(higgsGenmass * higgsGenmass + TMath::Power(higgsGenpt * TMath::CosH(higgsGeneta), 2.))',
#    'samples': mc
#}
#
## Gen yH
#aliases['genYH'] = {
#    'expr': 'TMath::Log((genEH + genPzH) / (higgsGenmass * higgsGenmass + higgsGenpt * higgsGenpt))',
#    'samples': mc
#}
#
## Gen yH
#aliases['absGenYH'] = {
#    'expr': 'abs(genYH)',
#    'samples': mc
#}

# Gen mth
aliases['genMth'] = {
    'expr': 'sqrt(2 * metGenpt * (genPtll - genPxll * cos(metGenphi) - genPyll * sin(metGenphi)))',
    'samples': mc
}

# Gen mtw2
aliases['genMtw2'] = {
    'expr': 'sqrt(2 * std_vector_dressedLeptonGen_pt[1] * metGenpt * (1-cos(std_vector_dressedLeptonGen_phi[1]-metGenphi)))',
    'samples': mc
}

# Overlap cleaning for gen jets
aliases['genJetClean'] = {
    'expr': 'TMath::Power(std_vector_jetGen_eta - std_vector_dressedLeptonGen_eta[0], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi - std_vector_dressedLeptonGen_phi[0]), 2.) > 0.16 && TMath::Power(std_vector_jetGen_eta - std_vector_dressedLeptonGen_eta[1], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi - std_vector_dressedLeptonGen_phi[1]), 2.) > 0.16',
    'samples': mc
}

aliases['genJet0Clean'] = {
    'expr': 'TMath::Power(std_vector_jetGen_eta[0] - std_vector_dressedLeptonGen_eta[0], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi[0] - std_vector_dressedLeptonGen_phi[0]), 2.) > 0.16 && TMath::Power(std_vector_jetGen_eta[0] - std_vector_dressedLeptonGen_eta[1], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi[0] - std_vector_dressedLeptonGen_phi[1]), 2.) > 0.16',
    'samples': mc
}

aliases['genJet1Clean'] = {
    'expr': 'TMath::Power(std_vector_jetGen_eta[1] - std_vector_dressedLeptonGen_eta[0], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi[1] - std_vector_dressedLeptonGen_phi[0]), 2.) > 0.16 && TMath::Power(std_vector_jetGen_eta[1] - std_vector_dressedLeptonGen_eta[1], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi[1] - std_vector_dressedLeptonGen_phi[1]), 2.) > 0.16',
    'samples': mc
}

# Components for the fiducial cut
aliases['genLeptonPt'] = {
    'expr': 'std_vector_dressedLeptonGen_pt[0]>25 && std_vector_dressedLeptonGen_pt[1]>10 && std_vector_dressedLeptonGen_pt[2]<10',
    'samples': signal
}
aliases['genOSOF'] = {
    'expr': 'std_vector_dressedLeptonGen_pid[0] * std_vector_dressedLeptonGen_pid[1] == -11 * 13',
    'samples': signal
}
aliases['genTrailingE13'] = {
    'expr': '(abs(std_vector_dressedLeptonGen_pid[1]) == 13 || std_vector_dressedLeptonGen_pt[1]>13)',
    'samples': signal
}

#expr = 'sqrt(2 * std_vector_jetGen_pt[0] * std_vector_jetGen_pt[1] * (cosh(std_vector_jetGen_eta[0]-std_vector_jetGen_eta[1])-cos(std_vector_jetGen_phi[0]-std_vector_jetGen_phi[1]))) * (genJet0Clean && genJet1Clean) + '
#expr += 'sqrt(2 * std_vector_jetGen_pt[0] * std_vector_jetGen_pt[2] * (cosh(std_vector_jetGen_eta[0]-std_vector_jetGen_eta[2])-cos(std_vector_jetGen_phi[0]-std_vector_jetGen_phi[2]))) * (genJet0Clean && !genJet1Clean) + '
#expr += 'sqrt(2 * std_vector_jetGen_pt[1] * std_vector_jetGen_pt[2] * (cosh(std_vector_jetGen_eta[1]-std_vector_jetGen_eta[2])-cos(std_vector_jetGen_phi[1]-std_vector_jetGen_phi[2]))) * (!genJet0Clean && genJet1Clean) + '
#expr += 'sqrt(2 * std_vector_jetGen_pt[2] * std_vector_jetGen_pt[3] * (cosh(std_vector_jetGen_eta[2]-std_vector_jetGen_eta[3])-cos(std_vector_jetGen_phi[2]-std_vector_jetGen_phi[3]))) * (!genJet0Clean && !genJet1Clean)'
#
#aliases['genMjj'] = {
#    'expr': expr,
#    'samples': mc
#}
#aliases['genDetajj'] = {
#    'expr': 'abs(std_vector_jetGen_eta[0] - std_vector_jetGen_eta[1])',
#    'samples': mc
#}

## Number of gen jets with pt > 30 GeV
#aliases['nGenJet'] = {
#    'expr': 'Sum$(std_vector_jetGen_pt > 30 && genJetClean)',
#    'samples': mc
#}

#aliases['nGenJetCapped'] = {
#    'expr': 'nGenJet * (nGenJet < 3) + 2 * (nGenJet > 2)',
#    'samples': mc
#}

#aliases['nGenJetGGH'] = {
#    'expr': 'nGenJet * (nGenJet < 2) + nGenJet * (nGenJet >= 2 && (genMjj < 65. || (genMjj > 105. && genMjj < 400.)))',
#    'samples': mc
#}

# Fiducial cut for differential measurements
aliases['fiducial'] = {
    #'expr': 'genLeptonPt && genOSOF && genTrailingE13 && genMll>12 && metGenpt>20 && genPtll>30 && genMth>=60 && genMtw2>30'
    'expr': 'genLeptonPt && genOSOF && genTrailingE13 && genMll>12 && genPtll>30 && genMth>=60 && genMtw2>30',
    'samples': signal
}

#aliases['gen_STXS_VBF'] = {
#    'expr': 'higgsGenpt < 200. && genMjj > 400. && genDetajj > 2.8',
#    'samples': signal
#}
#aliases['bin_njet_2_STXS_ggF_gg'] = {
#    'expr': 'nGenJet >= 2 && !gen_STXS_VBF',
#    'samples': signal
#}
#aliases['bin_njet_2_STXS_ggF_VBF'] = {
#    'expr': 'nGenJet >= 2 && gen_STXS_VBF',
#    'samples': signal
#}
#
## Reco cuts for STXS
#aliases['STXS_VBF'] = {
#    'expr': 'pTWW < 200. && mjj > 400. && detajj > 2.8'
#}
#
## Reco cuts used by HWW 2016
#aliases['historical_gg'] = {
#    'expr': 'mjj < 65. || (mjj > 105. && mjj < 400.)'
#}
#aliases['historical_VBF'] = {
#    'expr': 'mjj > 400.'
#}
#aliases['historical_VBF'] = {
#    'expr': 'mjj > 65. && mjj < 105.'
#}
#
## >=2 jet with pt > 30 GeV, ggH tag
#aliases['manyJet_STXS_ggF_gg'] = {
#    'expr': 'manyJet && !STXS_VBF'
#}
#
## >=2 jet with pt > 30 GeV, ggH tag
#aliases['manyJet_STXS_ggF_VBF'] = {
#    'expr': 'manyJet && STXS_VBF'
#}
