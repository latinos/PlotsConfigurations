#aliases = {}

# imported from samples.py:
# samples, signals

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]
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

# Precompiled lepton cuts
aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc + ['DATA']
}

aliases['gstarLow'] = {
    'expr': 'Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 4',
    'samples': 'VgS'
}

aliases['gstarHigh'] = {
    'expr': 'Gen_ZGstar_mass <0 || Gen_ZGstar_mass > 4',
    'samples': 'VgS'
}

# No jet with pt > 30 GeV
aliases['zeroJet'] = {
    'expr': 'std_vector_jet_pt[0] < 30.'
}

# b-jet veto
aliases['bVeto'] = {
    'expr': 'bveto_CMVA' + bWP
}

aliases['bReq'] = {
    'expr': 'Sum$(std_vector_jet_pt > 30. && abs(std_vector_jet_eta) < 2.5 && std_vector_jet_cmvav2 > -0.5884) >= 1'
}

aliases['topcr'] = {
    'expr': 'mtw2>30 && mll>50 && ((zeroJet && !bVeto) || bReq)'
}

aliases['dycr'] = {
    'expr': 'mth<60 && mll>40 && mll<80 && bVeto'
}

aliases['wwcr'] = {
    'expr': 'mth>60 && mtw2>30 && mll>100 && bVeto'
}

# SR definition

aliases['sr'] = {
    'expr': 'mth>60 && mtw2>30 && bVeto && std_vector_electron_passConversionVeto[1]' # this is how it's done in Full2016
}

# top reweighting
aliases['toprwgt'] = {
    'expr': 'TMath::Sqrt(TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt))',
    'samples': top
}

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

# Components for the fiducial cut
aliases['genLeptonPt'] = {
    'expr': 'std_vector_dressedLeptonGen_pt[0]>25 && std_vector_dressedLeptonGen_pt[1]>10 && std_vector_dressedLeptonGen_pt[2]<10',
    'samples': signals
}
aliases['genOSOF'] = {
    'expr': 'std_vector_dressedLeptonGen_pid[0] * std_vector_dressedLeptonGen_pid[1] == -11 * 13',
    'samples': signals
}
aliases['genTrailingE13'] = {
    'expr': '(abs(std_vector_dressedLeptonGen_pid[1]) == 13 || std_vector_dressedLeptonGen_pt[1]>13)',
    'samples': signals
}

# Number of gen jets with pt > 30 GeV
aliases['nCleanGenJet'] = {
    'expr': 'Sum$(std_vector_jetGen_pt > 30 && genJetClean)',
    'samples': mc
}

# Fiducial cut for differential measurements
aliases['fiducial'] = {
    #'expr': 'genLeptonPt && genOSOF && genTrailingE13 && genMll>12 && metGenpt>20 && genPtll>30 && genMth>=60 && genMtw2>30'
    'expr': 'genLeptonPt && genOSOF && genMll>12 && genPtll>30 && genMth>=60 && genMtw2>30',
    'samples': signals
}
