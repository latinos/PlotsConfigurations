#aliases = {}

# imported from samples.py:
# samples

mc = [skey for skey in samples if skey not in ('Fake', 'DATA')]
signal = [skey for skey in samples if '_hww' in skey]
dy = [skey for skey in samples if skey.startswith('DY')]
top = [skey for skey in samples if skey.startswith('top')]

eleWP = 'mvaFall17Iso_WP90'
muWP = 'cut_Tight_HWWW'

aliases['LepWPCut'] = {
    'expr': 'LepCut2l__ele_'+eleWP+'__mu_'+muWP,
    'samples': mc + ['DATA']
}

# Fake leptons transfer factor
aliases['fakeW'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP,
    'samples': ['Fake']
}
# And variations - already divided by central values in formulas !
aliases['fakeWEleUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleUp',
    'samples': ['Fake']
}
aliases['fakeWEleDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_EleDown',
    'samples': ['Fake']
}
aliases['fakeWMuUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuUp',
    'samples': ['Fake']
}
aliases['fakeWMuDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_MuDown',
    'samples': ['Fake']
}
aliases['fakeWStatEleUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleUp',
    'samples': ['Fake']
}
aliases['fakeWStatEleDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statEleDown',
    'samples': ['Fake']
}
aliases['fakeWStatMuUp'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuUp',
    'samples': ['Fake']
}
aliases['fakeWStatMuDown'] = {
    'expr': 'fakeW2l_ele_'+eleWP+'_mu_'+muWP+'_statMuDown',
    'samples': ['Fake']
}

# data/MC scale factors
aliases['SFweight'] = {
    'expr': ' * '.join(['SFweight2l', 'LepSF2l__ele_' + eleWP + '__mu_' + muWP, 'btagWeight', 'LepWPCut', 'PrefireWeight']),
    'samples': mc
}
# variations
# And variations
aliases['SFweightEleUp'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__Up',
    'samples': mc
}
aliases['SFweightEleDown'] = {
    'expr': 'LepSF2l__ele_'+eleWP+'__Do',
    'samples': mc
}
aliases['SFweightMuUp'] = {
    'expr': 'LepSF2l__mu_'+muWP+'__Up',
    'samples': mc
}
aliases['SFweightMuDown'] = {
    'expr': 'LepSF2l__mu_'+muWP+'__Do',
    'samples': mc
}

aliases['ptllDYW_NLO'] = {
    'expr': '((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))',
    'samples': dy
}

aliases['ptllDYW_LO'] = {
    'expr': '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))',
    'samples': dy
}

aliases['Top_pTrw'] = {
    'expr': '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )',
    'samples': top
}

aliases['osof'] = {
    'expr': 'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13'
}

aliases['trailingE13'] = {
    'expr': 'abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1] > 13.'
}

aliases['bVeto'] = {
    'expr': 'Sum$(CleanJet_pt > 20. && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0'
}

aliases['leadingBJet'] = {
    'expr': 'Jet_btagDeepB[CleanJet_jetIdx[0]] > 0.1522'
}

aliases['atleastoneBJet'] = {
    'expr': 'Jet_btagDeepB[CleanJet_jetIdx[0]] > 0.1522 || Jet_btagDeepB[CleanJet_jetIdx[1]] > 0.1522'
}

# No jet with pt > 30 GeV
aliases['zeroJet'] = {
    'expr': 'Sum$(CleanJet_pt >= 30.) == 0'
}

# ==1 jet with pt > 30 GeV
aliases['oneJet'] = {
    'expr': 'Sum$(CleanJet_pt >= 30.) == 1'
}

# >=2 jets with pt > 30 GeV
aliases['manyJet'] = {
    'expr': 'Sum$(CleanJet_pt >= 30.) >= 2'
}

## Variables for fiducial region definition

# Gen Mll
aliases['genMll'] = {
    'expr': 'sqrt(2*GenDressedLepton_pt[0] * GenDressedLepton_pt[1] * (cosh(GenDressedLepton_eta[0]-GenDressedLepton_eta[1])-cos(GenDressedLepton_phi[0]-GenDressedLepton_phi[1])))',
    'samples': signal
}

# Gen px, py
aliases['genPx0'] = {
    'expr': 'GenDressedLepton_pt[0] * cos(GenDressedLepton_phi[0])',
    'samples': signal
}
aliases['genPy0'] = {
    'expr': 'GenDressedLepton_pt[0] * sin(GenDressedLepton_phi[0])',
    'samples': signal
}
aliases['genPx1'] = {
    'expr': 'GenDressedLepton_pt[1] * cos(GenDressedLepton_phi[1])',
    'samples': signal
}
aliases['genPy1'] = {
    'expr': 'GenDressedLepton_pt[1] * sin(GenDressedLepton_phi[1])',
    'samples': signal
}

# Gen pxll, pyll
aliases['genPxll'] = {
    'expr': 'genPx0 + genPx1',
    'samples': signal
}
aliases['genPyll'] = {
    'expr': 'genPy0 + genPy1',
    'samples': signal
}

# Gen met x, y
aliases['genMetx'] = {
    'expr': 'GenMET_pt * cos(GenMET_phi)',
    'samples': signal
}
aliases['genMety'] = {
    'expr': 'GenMET_pt * sin(GenMET_phi)',
    'samples': signal
}

# Gen pxH, pyH
aliases['genPxH'] = {
    'expr': 'genPxll + genMetx',
    'samples': signal
}
aliases['genPyH'] = {
    'expr': 'genPyll + genMety',
    'samples': signal
}

aliases['genPth'] = {
    'expr': 'sqrt(genPxH * genPxH + genPyH * genPyH)',
    'samples': signal
}

# Gen pTll
aliases['genPtll'] = {
    'expr': 'sqrt(genPxll * genPxll + genPyll * genPyll)',
    'samples': signal
}

# Gen mth
aliases['genMth'] = {
    'expr': 'sqrt(2 * GenMET_pt * (genPtll - genPxll * cos(GenMET_phi) - genPyll * sin(GenMET_phi)))',
    'samples': signal
}

# Gen mtw2
aliases['genMtw2'] = {
    'expr': 'sqrt(2 * GenDressedLepton_pt[1] * GenMET_pt * (1-cos(GenDressedLepton_phi[1]-GenMET_phi)))',
    'samples': signal
}

## Overlap cleaning for gen jets
#aliases['genJetClean'] = {
#    'expr': 'TMath::Power(std_vector_jetGen_eta - GenDressedLepton_eta[0], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi - GenDressedLepton_phi[0]), 2.) > 0.16 && TMath::Power(std_vector_jetGen_eta - GenDressedLepton_eta[1], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi - GenDressedLepton_phi[1]), 2.) > 0.16',
#    'samples': signal
#}
#
#aliases['genJet0Clean'] = {
#    'expr': 'TMath::Power(std_vector_jetGen_eta[0] - GenDressedLepton_eta[0], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi[0] - GenDressedLepton_phi[0]), 2.) > 0.16 && TMath::Power(std_vector_jetGen_eta[0] - GenDressedLepton_eta[1], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi[0] - GenDressedLepton_phi[1]), 2.) > 0.16',
#    'samples': signal
#}
#
#aliases['genJet1Clean'] = {
#    'expr': 'TMath::Power(std_vector_jetGen_eta[1] - GenDressedLepton_eta[0], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi[1] - GenDressedLepton_phi[0]), 2.) > 0.16 && TMath::Power(std_vector_jetGen_eta[1] - GenDressedLepton_eta[1], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi[1] - GenDressedLepton_phi[1]), 2.) > 0.16',
#    'samples': signal
#}

# Components for the fiducial cut
aliases['genLeptonPt'] = {
    'expr': 'GenDressedLepton_pt[0]>25 && Sum$(GenDressedLepton_pt>10) == 2',
    'samples': signal
}
aliases['genOSOF'] = {
    'expr': 'GenDressedLepton_pdgId[0] * GenDressedLepton_pdgId[1] == -11 * 13',
    'samples': signal
}
aliases['genTrailingE13'] = {
    'expr': 'abs(GenDressedLepton_pdgId[1]) == 13 || GenDressedLepton_pt[1]>13',
    'samples': signal
}

# Fiducial cut for differential measurements
aliases['fiducial'] = {
    #'expr': 'genLeptonPt && genOSOF && genTrailingE13 && genMll>12 && GenMET_pt>20 && genPtll>30 && genMth>=60 && genMtw2>30'
    'expr': 'genLeptonPt && genOSOF && genTrailingE13 && genMll>12 && genPtll>30 && genMth>=60 && genMtw2>30',
    'samples': signal
}
