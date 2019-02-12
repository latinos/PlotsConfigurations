def setupfiducial(drawer, variables = ['ptH', 'njet']):
    drawer.addVariable('genPxll', 'std_vector_dressedLeptonGen_pt[0] * cos(std_vector_dressedLeptonGen_phi[0]) + std_vector_dressedLeptonGen_pt[1] * cos(std_vector_dressedLeptonGen_phi[1])')
    drawer.addVariable('genPyll', 'std_vector_dressedLeptonGen_pt[0] * sin(std_vector_dressedLeptonGen_phi[0]) + std_vector_dressedLeptonGen_pt[1] * sin(std_vector_dressedLeptonGen_phi[1])')
    drawer.addVariable('genPtll', 'sqrt(genPxll * genPxll + genPyll * genPyll)')

    _tmp = [
        'std_vector_dressedLeptonGen_pt[0]>25 && std_vector_dressedLeptonGen_pt[1]>10 && std_vector_dressedLeptonGen_pt[2]<10',
        'std_vector_dressedLeptonGen_pid[0] * std_vector_dressedLeptonGen_pid[1] == -11 * 13',
        '(abs(std_vector_dressedLeptonGen_pid[1]) == 13 || std_vector_dressedLeptonGen_pt[1]>13)',
        'sqrt(2*std_vector_dressedLeptonGen_pt[0] * std_vector_dressedLeptonGen_pt[1] * (cosh(std_vector_dressedLeptonGen_eta[0]-std_vector_dressedLeptonGen_eta[1])-cos(std_vector_dressedLeptonGen_phi[0]-std_vector_dressedLeptonGen_phi[1]))) > 12.',
        'sqrt(2 * metGenpt * (genPtll - genPxll * cos(metGenphi) - genPyll * sin(metGenphi))) > 60.',
        'sqrt(2 * std_vector_dressedLeptonGen_pt[1] * metGenpt * (1-cos(std_vector_dressedLeptonGen_phi[1]-metGenphi))) > 30.'
    ]
        
    drawer.addVariable('fiducial', ' && '.join(_tmp))

    if 'ptH' in variables:
        drawer.addVariable('genPxH', 'genPxll + metGenpt * cos(metGenphi)')
        drawer.addVariable('genPyH', 'genPyll + metGenpt * sin(metGenphi)')
        drawer.addVariable('genPth', 'sqrt(genPxH * genPxH + genPyH * genPyH)')

    if 'njet' in variables:
        drawer.addVariable('genJetClean', 'TMath::Power(std_vector_jetGen_eta - std_vector_dressedLeptonGen_eta[0], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi - std_vector_dressedLeptonGen_phi[0]), 2.) > 0.16 && TMath::Power(std_vector_jetGen_eta - std_vector_dressedLeptonGen_eta[1], 2.) + TMath::Power(TVector2::Phi_mpi_pi(std_vector_jetGen_phi - std_vector_dressedLeptonGen_phi[1]), 2.) > 0.16')
        drawer.addVariable('nGenJet', 'Sum$(std_vector_jetGen_pt > 30 && genJetClean)')
