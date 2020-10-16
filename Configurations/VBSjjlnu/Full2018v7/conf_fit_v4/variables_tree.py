
res_vars = [
            'vbs_0_pt', 'vbs_0_eta', 'vbs_0_phi', 'vbs_0_E',
            'vbs_1_pt', 'vbs_1_eta', 'vbs_1_phi', 'vbs_1_E',
            'vjet_0_pt', 'vjet_0_eta', 'vjet_0_phi', 'vjet_0_E',
            'vjet_1_pt', 'vjet_1_eta', 'vjet_1_phi', 'vjet_1_E',
            'mjj_vbs', 'mjj_vjet',
            'deltaeta_vbs',  'deltaphi_vbs', 
            'deltaeta_vjet', 'deltaphi_vjet', 
            'deltaR_lep_vbs', 'deltaR_lep_vjet',
            'deltaphi_lep_nu', 'deltaeta_lep_nu',
            'deltaR_lep_nu', 'deltaR_vbs', 'deltaR_vjet',
            'Rvjets_0', 'Rvjets_1',
            'Zvjets_0', 'Zvjets_1', 'Zlep',
            'Asym_vbs', 'Asym_vjet', 'Mw_lep', 'Mtw_lep', 'w_lep_pt', 'w_had_pt',
            'Mww', 'R_ww', 'R_mw', 'A_ww',
            'Centr_vbs', 'Centr_ww', 'Lep_proj', 'Lep_projw',
            'recoMET_pz' 
            ]

res_branches =  { v:v for v in res_vars }


boost_vars = ['vbs_0_pt', 'vbs_0_eta', 'vbs_0_phi', 'vbs_0_E',
            'vbs_1_pt', 'vbs_1_eta', 'vbs_1_phi', 'vbs_1_E',
            'vjet_0_pt', 'vjet_0_eta', 'vjet_0_phi', 'vjet_0_E',
            'mjj_vbs', 'mjj_vjet',
            'deltaeta_vbs',  'deltaphi_vbs', 
            'deltaR_lep_vbs', 'deltaR_lep_vjet',
            'deltaphi_lep_nu', 'deltaeta_lep_nu',
            'deltaR_lep_nu', 'deltaR_vbs', 'deltaR_vjet',
            'Rvjets_0', 'Zvjets_0', 'Zlep',
            'Asym_vbs', 'Mw_lep', 'Mtw_lep', 'w_lep_pt', 'w_had_pt',
            'Mww', 'R_ww', 'R_mw', 'A_ww',
            'Centr_vbs', 'Centr_ww', 'Lep_proj', 'Lep_projw',
            'recoMET_pz' 
            ]

boost_branches =  { v:v for v in boost_vars }

#########
# add the rest of the branches
for brs in [res_branches, boost_branches]:
    brs['Lepton_pt'] = 'Lepton_pt[0]'
    brs['Lepton_eta'] = 'Lepton_eta[0]'
    brs['Lepton_phi'] = 'Lepton_phi[0]'
    brs['PuppiMET_pt'] = 'PuppiMET_pt'
    brs['PuppiMET_phi'] = 'PuppiMET_phi'
    brs['nJets30'] = 'Sum$(CleanJet_pt[CleanJetNotFat_jetIdx] >= 30)'
    brs['nvtxGood'] = 'PV_npvsGood'


variables['dnn_inputs_resolved'] = {
    'tree': res_branches,
    'cuts' : ['res_sig_ele', 'res_sig_mu']
}

variables['dnn_inputs_boosted'] = {
    'tree':  boost_branches,
    'cuts' : ['boost_sig_ele', 'boost_sig_mu']
}

