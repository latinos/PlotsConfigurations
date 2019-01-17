# Aliases file

mc = [skey for skey in samples if skey not in ('Fake_me', 'Fake_em', 'DATA')]

##############################

bWP='L' #Also defined in samples.py -- using here for bVeto

##############################

# Leading two leptons have opposite sign & flavor
aliases['osof'] = {
    'expr': 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13'
}

# Trailing lepton is a muon (with pt > 10 GeV implied) or an electron with pt > 13 GeV
aliases['trailingE13'] = {
    'expr': '(abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13)'
}

# Standard dilepton cut
aliases['dilep'] = {
    'expr': 'osof && trailingE13'
}

# No jet with pt > 30 GeV
aliases['of0j'] = {
    'expr': 'std_vector_jet_pt[0] < 30.'
}

# ==1 jet with pt > 30 GeV
aliases['of1j'] = {
    'expr': 'std_vector_jet_pt[0] >= 30. && std_vector_jet_pt[1] < 30.'
}

# >=2 jets with pt > 30 GeV
aliases['of2j'] = {
    'expr': 'std_vector_jet_pt[0] >= 30. && std_vector_jet_pt[1] >= 30.'
}

# b-jet veto
aliases['bVeto'] = {
    'expr': 'bveto_CMVA' + bWP
}

# Lepton px, py
aliases['px0'] = {
    'expr': 'std_vector_lepton_pt[0] * cos(std_vector_lepton_phi[0])'
}
aliases['py0'] = {
    'expr': 'std_vector_lepton_pt[0] * sin(std_vector_lepton_phi[0])'
}
aliases['px1'] = {
    'expr': 'std_vector_lepton_pt[1] * cos(std_vector_lepton_phi[1])'
}
aliases['py1'] = {
    'expr': 'std_vector_lepton_pt[1] * sin(std_vector_lepton_phi[1])'
}

# pxll, pyll
aliases['pxll'] = {
    'expr': 'px0 + px1'
}
aliases['pyll'] = {
    'expr': 'py0 + py1'
}

# pxH, pyH
aliases['pxH'] = {
    'expr': 'pxll + metPfType1 * cos(metPfType1Phi)'
}
aliases['pyH'] = {
    'expr': 'pyll + metPfType1 * sin(metPfType1Phi)'
}

# pTH
aliases['ptH'] = {
    'expr': 'sqrt(pxH * pxH + pyH * pyH)'
}

# Leading muon
aliases['me'] = {
    'expr': 'abs(std_vector_lepton_flavour[0]) == 13'
}

# Leading electron
aliases['em'] = {
    'expr': 'abs(std_vector_lepton_flavour[0]) == 11'
}

# Leading negative muon
aliases['me_mp'] = {
    'expr': 'std_vector_lepton_flavour[0] == 13'
}

# Leading negative electron
aliases['em_mp'] = {
    'expr': 'std_vector_lepton_flavour[0] == 11'
}
# Leading positive muon
aliases['me_pm'] = {
    'expr': 'std_vector_lepton_flavour[0] == -13'
}

# Leading positive electron
aliases['em_pm'] = {
    'expr': 'std_vector_lepton_flavour[0] == -11'
}

# Subleading lepton pt >= 20 GeV
aliases['pt2ge20'] = {
    'expr': 'std_vector_lepton_pt[1] >= 20'
}

# Subleading lepton pt < 20 GeV
aliases['pt2lt20'] = {
    'expr': 'std_vector_lepton_pt[1] < 20'
}

# ptH binning at reco level
aliases['pth0to15cut'] = {
    'expr': 'ptH < 15.'
}
aliases['pth15to30cut'] = {
    'expr': 'ptH >= 15. && ptH < 30.'
}
aliases['pth30to45cut'] = {
    'expr': 'ptH >= 30. && ptH < 45.'
}
aliases['pth45to80cut'] = {
    'expr': 'ptH >= 45. && ptH < 80.'
}
aliases['pth80to120cut'] = {
    'expr': 'ptH >= 80. && ptH < 120.'
}
aliases['pth120to200cut'] = {
    'expr': 'ptH >= 120. && ptH < 200.'
}
aliases['pth200to350cut'] = {
    'expr': 'ptH >= 200. && ptH < 350.'
}
aliases['pth350to600cut'] = {
    'expr': 'ptH >= 350. && ptH < 600.'
}
aliases['pth600toInfcut'] = {
    'expr': 'ptH >= 600.'
}

##########################
## Gen level variables
##########################

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

# Gen pxH, pyH
aliases['genPxH'] = {
    'expr': 'genPxll + metGenpt * cos(metGenphi)',
    'samples': mc
}
aliases['genPyH'] = {
    'expr': 'genPyll + metGenpt * sin(metGenphi)',
    'samples': mc
}

# Gen pTll
aliases['genPtll'] = {
    'expr': 'sqrt(genPxll * genPxll + genPyll * genPyll)',
    'samples': mc
}

# Gen pTH
aliases['genPtH'] = {
    'expr': 'sqrt(genPxH * genPxH + genPyH * genPyH)',
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

# No gen jet with pt > 30 GeV
#aliases['nGenJet'] = {
#    'expr': 'Sum$(std_vector_jetGen_pt > 30 && TMath::Power(std_vector_jetGen_eta - std_vector_dressedLeptonGen_eta[0], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi - std_vector_dressedLeptonGen_phi[0]), 2.) > 0.16 && TMath::Power(std_vector_jetGen_eta - std_vector_dressedLeptonGen_eta[1], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi - std_vector_dressedLeptonGen_phi[1]), 2.) > 0.16)',
#    'samples': mc
#}

# Components for the fiducial cut
aliases['genLeptonPt'] = {
    'expr': 'std_vector_dressedLeptonGen_pt[0]>25 && std_vector_dressedLeptonGen_pt[1]>10 && std_vector_dressedLeptonGen_pt[2]<10',
    'samples': ['ggH_hww_pth0to15','ggH_hww_pth15to30','ggH_hww_pth30to45','ggH_hww_pth45to80','ggH_hww_pth80to120','ggH_hww_pth120to200','ggH_hww_pth200to350','ggH_hww_pth350to600','ggH_hww_pth600toInf','ggH_hww_nonfid']
}

aliases['genOSOF'] = {
    'expr': 'std_vector_dressedLeptonGen_pid[0] * std_vector_dressedLeptonGen_pid[1] == -11 * 13',
    'samples': ['ggH_hww_pth0to15','ggH_hww_pth15to30','ggH_hww_pth30to45','ggH_hww_pth45to80','ggH_hww_pth80to120','ggH_hww_pth120to200','ggH_hww_pth200to350','ggH_hww_pth350to600','ggH_hww_pth600toInf','ggH_hww_nonfid']
}

aliases['genTrailingE13'] = {
    'expr': '(abs(std_vector_dressedLeptonGen_pid[1]) == 13 || std_vector_dressedLeptonGen_pt[1]>13)',
    'samples': ['ggH_hww_pth0to15','ggH_hww_pth15to30','ggH_hww_pth30to45','ggH_hww_pth45to80','ggH_hww_pth80to120','ggH_hww_pth120to200','ggH_hww_pth200to350','ggH_hww_pth350to600','ggH_hww_pth600toInf','ggH_hww_nonfid']
}

#aliases['genMjj'] = {
#    'expr': 'sqrt(2 * std_vector_jetGen_pt[0] * std_vector_jetGen_pt[1] * (cosh(std_vector_jetGen_eta[0]-std_vector_jetGen_eta[1])-cos(std_vector_jetGen_phi[0]-std_vector_jetGen_phi[1])))',
#    'samples': ['ggH_hww']
#}

##########################
## Gen level cuts
##########################

# Fiducial cut (particle level phase space)
aliases['fiducial'] = {
    'expr': 'genLeptonPt && genOSOF && genTrailingE13 && genMll>12 && metGenpt>20 && genPtll>30 && genMth>=60 && genMtw2>30',
    'samples': ['ggH_hww_pth0to15','ggH_hww_pth15to30','ggH_hww_pth30to45','ggH_hww_pth45to80','ggH_hww_pth80to120','ggH_hww_pth120to200','ggH_hww_pth200to350','ggH_hww_pth350to600','ggH_hww_pth600toInf','ggH_hww_nonfid']
}
            
# ptH binning
aliases['pth0to15cutGen'] = {
    'expr': 'genPtH < 15.',
    'samples': ['ggH_hww_pth0to15']
}
aliases['pth15to30cutGen'] = {
    'expr': 'genPtH >= 15. && genPtH < 30.',
    'samples': ['ggH_hww_pth15to30']
}
aliases['pth30to45cutGen'] = {
    'expr': 'genPtH >= 30. && genPtH < 45.',
    'samples': ['ggH_hww_pth30to45']
}
aliases['pth45to80cutGen'] = {
    'expr': 'genPtH >= 45. && genPtH < 80.',
    'samples': ['ggH_hww_pth45to80']
}
aliases['pth80to120cutGen'] = {
    'expr': 'genPtH >= 80. && genPtH < 120.',
    'samples': ['ggH_hww_pth80to120']
}
aliases['pth120to200cutGen'] = {
    'expr': 'genPtH >= 120. && genPtH < 200.',
    'samples': ['ggH_hww_pth120to200']
}
aliases['pth200to350cutGen'] = {
    'expr': 'genPtH >= 200. && genPtH < 350.',
    'samples': ['ggH_hww_pth200to350']
}
aliases['pth350to600cutGen'] = {
    'expr': 'genPtH >= 350. && genPtH < 600.',
    'samples': ['ggH_hww_pth350to600']
}
aliases['pth600toInfcutGen'] = {
    'expr': 'genPtH >= 600.',
    'samples': ['ggH_hww_pth600toInf']
}

# Njets binning

#aliases['njetcut0'] = {
#    'expr': 'nGenJet == 0',
#    'samples': ['ggH_hww']
#}
#aliases['njetcut1'] = {
#    'expr': 'nGenJet == 1',
#    'samples': ['ggH_hww']
#}
#aliases['njetcut2'] = {
#    'expr': 'nGenJet >= 2 && (genMjj<65 || (genMjj>105 && genMjj<400))',
#    'samples': ['ggH_hww']
#}
