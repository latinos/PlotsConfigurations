##############################################
# now variables to plot
# Include also variables to be plotted
########################
vars = [ 'vbs_0_pt','vbs_1_pt','w_lep_pt','deltaeta_vbs','Lepton_pt',
        'DNNoutput_resolved_v1','DNNoutput_boosted']

tree = { v:v for v in vars}
tree['lepton_flavour'] = 'abs(Lepton_pdgId[0])'

variables['variables'] = {
    'tree': tree
}
