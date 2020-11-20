

variables['tree'] = {
    'tree': {
            'j0_partfl':'Jet_partonFlavour[CleanJet_jetIdx[0]]',
            'j1_partfl':'Jet_partonFlavour[CleanJet_jetIdx[1]]',
            'j2_partfl':'Jet_partonFlavour[CleanJet_jetIdx[2]]',
            'j3_partfl':'Jet_partonFlavour[CleanJet_jetIdx[3]]',

            'j0_qgl':'Jet_qgl[CleanJet_jetIdx[0]]',
            'j1_qgl':'Jet_qgl[CleanJet_jetIdx[1]]',
            'j2_qgl':'Jet_qgl[CleanJet_jetIdx[2]]',
            'j3_qgl':'Jet_qgl[CleanJet_jetIdx[3]]',
            
            'j0_pt': 'CleanJet_pt[0]',
            'j1_pt': 'CleanJet_pt[1]',
            'j2_pt': 'CleanJet_pt[2]',
            'j3_pt': 'CleanJet_pt[3]',

            'j0_eta': 'CleanJet_eta[0]',
            'j1_eta': 'CleanJet_eta[1]',
            'j2_eta': 'CleanJet_eta[2]',
            'j3_eta': 'CleanJet_eta[3]',

        },
    'samples':  [s for s in samples if s not in ["DATA", "Fake"]]
}


variables['tree_DATA'] = {
    'tree': {
            'j0_qgl':'Jet_qgl[CleanJet_jetIdx[0]]',
            'j1_qgl':'Jet_qgl[CleanJet_jetIdx[1]]',
            'j2_qgl':'Jet_qgl[CleanJet_jetIdx[2]]',
            'j3_qgl':'Jet_qgl[CleanJet_jetIdx[3]]',
            
            'j0_pt': 'CleanJet_pt[0]',
            'j1_pt': 'CleanJet_pt[1]',
            'j2_pt': 'CleanJet_pt[2]',
            'j3_pt': 'CleanJet_pt[3]',

            'j0_eta': 'CleanJet_eta[0]',
            'j1_eta': 'CleanJet_eta[1]',
            'j2_eta': 'CleanJet_eta[2]',
            'j3_eta': 'CleanJet_eta[3]',
        },
    'samples':  ["DATA", "Fake"]
}
