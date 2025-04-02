# # variables
#
# variables = {}

#configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
#configurations = os.path.dirname(configurations) # Full2017v7
#configurations = os.path.dirname(configurations) # HM
#configurations = os.path.dirname(configurations) # Configurations
#mc = [skey for skey in samples if skey not in ('FAKE', 'data_obs')]
controlRegions = set(x for x in cuts if 'SB' in x or 'CR'in x)
SignalRegions = set(x for x in cuts if 'SR' in x )
hmSR  = set(x for x in cuts if 'HMSR' in x)
boostedSR   = set(x for x in cuts if 'BoostedSR' in x)
resolvedSR  = set(x for x in cuts if 'ResolvedSR' in x)
ak8SR = set(x for x in cuts if 'AK8SR' in x)
no_cut_all = set( x for x in cuts if 'No_cut' in x)
resolved = set(x for x in cuts if 'Resolved' in x)
boosted  = set(x for x in cuts if 'Boosted' in x)
#boosted_general = set(x for x in cuts if 'boosted_gen' in x)
fat_jet = set(x for x in cuts if 'fatjet' in x)
boostedSR_isGGH   = set(x for x in cuts if 'BoostedSR_isGGH_H' in x)
boostedSR_isBKG   = set(x for x in cuts if 'BoostedSR_isBKG_H' in x)
boostedSR_isVBF   = set(x for x in cuts if 'BoostedSR_isVBF_H' in x)
resolvedSR_isGGH  = set(x for x in cuts if 'ResolvedSR_isGGH' in x)
resolvedSR_isBKG  = set(x for x in cuts if 'ResolvedSR_isBKG' in x)
resolvedSR_isVBF  = set(x for x in cuts if 'ResolvedSR_isVBF' in x)

#variables['events']  = {
#    'name' : '1',
#    'range': (1,0,2),
#    'xaxis': 'events',
#    'cuts' : controlRegions,
#    'fold' : 3,
#}
variables['mass_HIGGS_ResVBF'] = {
   'name' : 'mass_HIGGS_JJ[0]',
   'range': ([0, 150, 200, 260, 300, 350, 400, 450, 500, 550, 600,
              650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1300, 1500, 1700, 2000, 3000],),
   'xaxis': 'Higgs Mass [GeV]',
   'fold' : 0,
   'cuts' : resolvedSR_isVBF, 
}
variables['mass_HIGGS_ResGGH'] = {
   'name' : 'mass_HIGGS_JJ[0]',
   'range': ([0, 260, 300, 350, 400, 450, 500, 550, 600,
              650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1300, 1500, 1700, 3000],),
   'xaxis': 'Higgs Mass [GeV]',
   'fold' : 0,
   'cuts' : resolvedSR_isGGH, 
}
variables['mass_HIGGS_ResBKG'] = {
   'name' : 'mass_HIGGS_JJ[0]',
   'range': ([0, 200, 260, 300, 350, 400, 450, 500, 550, 600,
              650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1300,1500,1700,3000],),
   'xaxis': 'Higgs Mass [GeV]',
   'fold' : 0,
   'cuts' : resolvedSR_isBKG, 
}

variables['mass_HIGGS'] = {
   'name' : 'mass_HIGGS_JJ[0]',
   'range': ([350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500, 510, 520, 530, 540, 550],),
   'xaxis': 'Higgs Mass [GeV]',
   'fold' : 0,
}
#variables['classvbf_res_rebin'] = {
#     'name': 'vbfdnn_res',
#     'range' : ([0, 0.1, 0.2,0.3, 0.4,0.5,0.6,0.8,1.0],),
#     'xaxis' : 'VBF output',
#     'fold' : 3,
#     'cuts' : resolvedSR, 
#     'divideByBinWidth':1
#}
#variables['classbkg_res_rebin'] = {
#     'name': 'bkgdnn_res',
#     'range' : ([0, 0.2, 0.4,0.5, 0.6,0.7,0.8,0.9,1.0],),
#     'xaxis' : 'BKG output',
#     'fold'  : 3,
#     'cuts' : resolvedSR, 
#     'divideByBinWidth':1
#}
#variables['classggh_res_rebin'] = {
#     'name': 'gghdnn_res',
#     'range' : ([0, 0.1, 0.2,0.3, 0.4,0.5,0.6,0.8,1.0],),
#     'xaxis' : 'ggH output',
#     'fold'  : 3,
#     'cuts' : resolvedSR, 
#     'divideByBinWidth':1
#}
#variables['classvbf_res'] = {
#     'name': 'vbfdnn_res',
#     'range' : (10,0,1.),
#     'xaxis' : 'VBF output',
#     'fold' : 3,
#     'cuts' : resolvedSR, 
#     'divideByBinWidth':1
#}
#variables['classbkg_res'] = {
#     'name': 'bkgdnn_res',
#     'range' : (10,0,1.),
#     'xaxis' : 'BKG output',
#     'fold'  : 3,
#     'cuts' : resolvedSR, 
#     'divideByBinWidth':1
#}
#variables['classggh_res'] = {
#     'name': 'gghdnn_res',
#     'range' : (10,0,1.),
#     'xaxis' : 'ggH output',
#     'fold'  : 3,
#     'cuts' : resolvedSR, 
#     'divideByBinWidth':1
#}
#
#variables['classvbf_rebin'] = {
#     'name': 'vbfdnn_odd',
#     'range' : ([0, 0.1, 0.2,0.3, 0.4,0.5,0.6,0.8,1.0],),
#     'xaxis' : 'VBF output',
#     'fold' : 3,
#     'cuts' : boostedSR, 
#     'divideByBinWidth':1
#}
#variables['classbkg_rebin'] = {
#     'name': 'bkgdnn_odd',
#     'range' : ([0, 0.2, 0.4,0.5, 0.6,0.7,0.8,0.9,1.0],),
#     'xaxis' : 'BKG output',
#     'fold'  : 3,
#     'cuts' : boostedSR, 
#     'divideByBinWidth':1
#}
#variables['classggh_rebin'] = {
#     'name': 'gghdnn_odd',
#     'range' : ([0, 0.1, 0.2,0.3, 0.4,0.5,0.6,0.8,1.0],),
#     'xaxis' : 'ggH output',
#     'fold'  : 3,
#     'cuts' : boostedSR, 
#     'divideByBinWidth':1
#}
#variables['classvbf_high_rebin'] = {
#     'name': 'vbfdnn_high',
#     'range' : ([0, 0.1, 0.2,0.3, 0.4,0.5,0.6,0.8,1.0],),
#     'xaxis' : 'VBF output',
#     'fold' : 3,
#     'cuts' : boostedSR, 
#     'divideByBinWidth':1
#}
#variables['classbkg_high_rebin'] = {
#     'name': 'bkgdnn_high',
#     'range' : ([0, 0.2, 0.4,0.5, 0.6,0.7,0.8,0.9,1.0],),
#     'xaxis' : 'BKG output',
#     'fold'  : 3,
#     'cuts' : boostedSR, 
#     'divideByBinWidth':1
#}
#variables['classggh_high_rebin'] = {
#     'name': 'gghdnn_high',
#     'range' : ([0, 0.1, 0.2,0.3, 0.4,0.5,0.6,0.8,1.0],),
#     'xaxis' : 'ggH output',
#     'fold'  : 3,
#     'cuts' : boostedSR, 
#     'divideByBinWidth':1
#}
#variables['classvbf'] = {
#     'name': 'vbfdnn_odd',
#     'range' : (10,0,1.),
#     'xaxis' : 'VBF output',
#     'fold' : 3,
#     'cuts' : boostedSR, 
#     'divideByBinWidth':1
#}
#variables['classbkg'] = {
#     'name': 'bkgdnn_odd',
#     'range' : (10,0,1.),
#     'xaxis' : 'BKG output',
#     'fold'  : 3,
#     'cuts' : boostedSR, 
#     'divideByBinWidth':1
#}
#variables['classggh'] = {
#     'name': 'gghdnn_odd',
#     'range' : (10,0,1.),
#     'xaxis' : 'ggH output',
#     'fold'  : 3,
#     'cuts' : boostedSR, 
#     'divideByBinWidth':1
#}
#variables['classvbf_high'] = {
#     'name': 'vbfdnn_high',
#     'range' : (10,0,1.),
#     'xaxis' : 'VBF output',
#     'fold' : 3,
#     'cuts' : boostedSR, 
#     'divideByBinWidth':1
#}
#variables['classbkg_high'] = {
#     'name': 'bkgdnn_high',
#     'range' : (10,0,1.),
#     'xaxis' : 'BKG output',
#     'fold'  : 3,
#     'cuts' : boostedSR, 
#     'divideByBinWidth':1
#}
#variables['classggh_high'] = {
#     'name': 'gghdnn_high',
#     'range' : (10,0,1.),
#     'xaxis' : 'ggH output',
#     'fold'  : 3,
#     'cuts' : boostedSR, 
#     'divideByBinWidth':1
#}
#variables['Pt_ratio_mass'] = {
#   'name' : 'HvOverJJ[0]',
#   'range': (20, 0, 1.),
#   'xaxis': 'p_{t}^{W}/m_{Xp_{t}^{W}/m_{X}}',
#   'fold' : 0
#}
#
variables['HvOverJJ_rebin'] = {
   'name' : 'HvOverJJ[0]',
   'range': ([0, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7,1],),
   'xaxis': 'Min el pt vs had pt',
   'fold' : 0
}
variables['wlep_mass'] = {
    'name' : 'HM_Wlep_mass_Puppi',
    'range': (15, 50, 200),
    'xaxis': 'reconstr. W lep Mass [GeV]',
    'fold' : 0, 
}
variables['wlep_eta'] = {
    'name' : 'HM_Wlep_eta_Puppi',
    'range': (40, -5, 5),
    'xaxis': 'reconstr. W lep eta [GeV]',
    'fold' : 0, 
}
variables['wlep_pt'] = {
    'name' : 'HM_Wlep_pt_Puppi',
    'range': (40, 0, 800),
    'xaxis': 'reconstr. W lep Pt [GeV]',
    'fold' : 0, 
}
variables['whad_pt'] = {
    'name' : 'HM_Whad_pt',
    'range': (40, 0, 800),
    'xaxis': 'reconstr. W had Pt [GeV]',
    'fold' : 0, 
}
variables['whad_mass'] = {
    'name' : 'HM_Whad_mass',
    'range': (25, 0, 250),
    'xaxis': 'reconstr. W had mass [GeV]',
    'fold' : 0, 
}
variables['whad_eta'] = {
    'name' : 'HM_Whad_eta',
    'range': (40, -5, 5),
    'xaxis': 'reconstr. W had eta [GeV]',
    'fold' : 0, 
}
variables['lep_pt'] = {
     'name': 'Lepton_pt',
     'range' : (30,0,1500),
     'xaxis' : 'lep_pt',
     'cuts' : resolved ,
     'fold' : 3,
}
#variables['lep_pt'] = {
#     'name': 'Lepton_pt',
#     'range' : (30,0,300),
#     'xaxis' : 'lep_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
##variables['lep_phi'] = {
##     'name': 'Lepton_phi',
##     'range' : (30,-3.14,3.14),
##     'xaxis' : 'lep_phi',
##     'cuts' : resolved ,
##     'fold' : 3,
##}
variables['lep_eta'] = {
     'name': 'Lepton_eta',
     'range' : (30,-2.5,2.5),
     'xaxis' : 'lep_eta',
     'cuts' : resolved ,
     'fold' : 3,
}
variables['jet1_pt'] = {
     'name': 'CleanJet_pt[CleanJet_jetIdx[Alt$(HM_idx_j1 >= 0, 0)*HM_idx_j1]]',
     'range' : (30,0,1500),
     'xaxis' : 'jet1_pt',
     'cuts' : resolved ,
     'fold' : 3,
}
##variables['jet1_phi'] = {
##     'name': 'CleanJet_phi[CleanJet_jetIdx[Alt$(HM_idx_j1 >= 0, 0)*HM_idx_j1]]',
##     'range' : (30,-3.14,3.14),
##     'xaxis' : 'jet1_phi',
##     'cuts' : resolved ,
##     'fold' : 3,
##}
#variables['jet1_eta'] = {
#     'name': 'CleanJet_eta[CleanJet_jetIdx[Alt$(HM_idx_j1 >= 0, 0)*HM_idx_j1]]',
#     'range' : (30,-5,5),
#     'xaxis' : 'jet1_eta',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
##variables['jet1_mass'] = {
##     'name': 'CleanJet_mass[CleanJet_jetIdx[Alt$(HM_idx_j1 >= 0, 0)*HM_idx_j1]]',
##     'range' : (40,0,120),
##     'xaxis' : 'jet1_mass',
##     'cuts' : resolved ,
##     'fold' : 3,
##}
variables['res_w1_pt_new'] = {
     'name': 'res_w1_pt',
     'range' : (30,0,150),
     'xaxis' : 'w1_pt',
     'cuts' : resolved ,
     'fold' : 3,
}
variables['res_w2_pt_new'] = {
     'name': 'res_w2_pt',
     'range' : (30,0,150),
     'xaxis' : 'w2_pt',
     'cuts' : resolved ,
     'fold' : 3,
}
#variables['jet2_pt'] = {
#     'name': 'CleanJet_pt[CleanJet_jetIdx[Alt$(HM_idx_j2 >= 0, 0)*HM_idx_j2]]',
#     'range' : (30,0,1500),
#     'xaxis' : 'jet2_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
##variables['jet2_phi'] = {
##     'name': 'CleanJet_phi[CleanJet_jetIdx[Alt$(HM_idx_j2 >= 0, 0)*HM_idx_j2]]',
##     'range' : (30,-3.14,3.14),
##     'xaxis' : 'jet2_phi',
##     'cuts' : resolved ,
##     'fold' : 3,
##}
#variables['jet2_eta'] = {
#     'name': 'CleanJet_eta[CleanJet_jetIdx[Alt$(HM_idx_j2 >= 0, 0)*HM_idx_j2]]',
#     'range' : (30,-5,5),
#     'xaxis' : 'jet2_eta',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
variables['mass_HIGGS_twojet_binned'] = {
   'name' : 'mass_HIGGS_JJ[0]',
   'range': ([0, 150, 200, 260, 300, 350, 400, 450, 500, 550, 600,
              650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1300, 1500, 3000],),
   'xaxis': 'Higgs Mass [GeV]',
   'fold' : 0,
}
#variables['jet2_mass'] = {
#     'name': 'CleanJet_mass[CleanJet_jetIdx[Alt$(HM_idx_j2 >= 0, 0)*HM_idx_j2]]',
#     'range' : (40,0,120),
#     'xaxis' : 'jet2_mass',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
