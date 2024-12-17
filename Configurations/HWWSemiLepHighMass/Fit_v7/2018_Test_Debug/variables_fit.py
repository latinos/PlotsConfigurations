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

variables['events']  = {
    'name' : '1',
    'range': (1,0,2),
    'xaxis': 'events',
    'cuts' : controlRegions,
    'fold' : 3,
}
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
variables['classvbf_res_rebin'] = {
     'name': 'vbfdnn_res',
     'range' : ([0, 0.1, 0.2,0.3, 0.4,0.5,0.6,0.8,1.0],),
     'xaxis' : 'VBF output',
     'fold' : 3,
     'cuts' : resolvedSR, 
     'divideByBinWidth':1
}
variables['classbkg_res_rebin'] = {
     'name': 'bkgdnn_res',
     'range' : ([0, 0.2, 0.4,0.5, 0.6,0.7,0.8,0.9,1.0],),
     'xaxis' : 'BKG output',
     'fold'  : 3,
     'cuts' : resolvedSR, 
     'divideByBinWidth':1
}
variables['classggh_res_rebin'] = {
     'name': 'gghdnn_res',
     'range' : ([0, 0.1, 0.2,0.3, 0.4,0.5,0.6,0.8,1.0],),
     'xaxis' : 'ggH output',
     'fold'  : 3,
     'cuts' : resolvedSR, 
     'divideByBinWidth':1
}
variables['classvbf_res'] = {
     'name': 'vbfdnn_res',
     'range' : (10,0,1.),
     'xaxis' : 'VBF output',
     'fold' : 3,
     'cuts' : resolvedSR, 
     'divideByBinWidth':1
}
variables['classbkg_res'] = {
     'name': 'bkgdnn_res',
     'range' : (10,0,1.),
     'xaxis' : 'BKG output',
     'fold'  : 3,
     'cuts' : resolvedSR, 
     'divideByBinWidth':1
}
variables['classggh_res'] = {
     'name': 'gghdnn_res',
     'range' : (10,0,1.),
     'xaxis' : 'ggH output',
     'fold'  : 3,
     'cuts' : resolvedSR, 
     'divideByBinWidth':1
}

#variables['Pt_ratio_mass'] = {
#   'name' : 'HvOverJJ[0]',
#   'range': (20, 0, 1.),
#   'xaxis': 'p_{t}^{W}/m_{Xp_{t}^{W}/m_{X}}',
#   'fold' : 0
#}
#
#variables['HvOverJJ_rebin'] = {
#   'name' : 'HvOverJJ[0]',
#   'range': ([0, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7,1],),
#   'xaxis': 'Min el pt vs had pt',
#   'fold' : 0
#}
#variables['HvOverJJ_new'] = {
#   'name' : 'HvOverJJ[0]',
#   'range': ([0, 0.4, 0.425, 0.45, 0.475, 0.5, 0.55, 0.6, 0.65, 0.7,0.8,1],),
#   'xaxis': 'Min el pt vs had pt',
#   'fold' : 0
#}
#variables['LepPt_ratio_mass'] = {
#   'name' : 'HvOverLEP[0]',
#   'range': (20, 0, 1.),
#   'xaxis': 'p_{T}^{W}/m_{X}',
#   'fold' : 0
#}
#variables['wlep_mass'] = {
#    'name' : 'HM_Wlep_mass_Puppi',
#    'range': (15, 50, 200),
#    'xaxis': 'reconstr. W lep Mass [GeV]',
#    'fold' : 0, 
#}
#variables['wlep_eta'] = {
#    'name' : 'HM_Wlep_eta_Puppi',
#    'range': (20, -2.5, 2.5),
#    'xaxis': 'reconstr. W lep eta [GeV]',
#    'fold' : 0, 
#}
#variables['wlep_pt'] = {
#    'name' : 'HM_Wlep_pt_Puppi',
#    'range': (40, 0, 800),
#    'xaxis': 'reconstr. W lep Pt [GeV]',
#    'fold' : 0, 
#}
#variables['whad_pt'] = {
#    'name' : 'HM_Whad_pt',
#    'range': (40, 0, 800),
#    'xaxis': 'reconstr. W had Pt [GeV]',
#    'fold' : 0, 
#}
#variables['whad_mass'] = {
#    'name' : 'HM_Whad_mass',
#    'range': (25, 0, 250),
#    'xaxis': 'reconstr. W had mass [GeV]',
#    'fold' : 0, 
#}
#variables['whad_eta'] = {
#    'name' : 'HM_Whad_eta',
#    'range': (25, -2.5, 2.5),
#    'xaxis': 'reconstr. W had eta [GeV]',
#    'fold' : 0, 
#}
#variables['res_lep_px'] = {
#     'name': 'res_lep_px',
#     'range' : (30,-1500,1500),
#     'xaxis' : 'lep_px',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_lep_py'] = {
#     'name': 'res_lep_py',
#     'range' : (30,-1500,1500),
#     'xaxis' : 'lep_py',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_lep_pz'] = {
#     'name': 'res_lep_pz',
#     'range' : (30,-1500,1500),
#     'xaxis' : 'lep_pz',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j1_px'] = {
#     'name': 'res_j1_px',
#     'range' : (40,-400,400),
#     'xaxis' : 'j1_px',
#     'fold' : 3,
#     'cuts' : resolved ,
#}
#variables['res_j1_py'] = {
#     'name': 'res_j1_py',
#     'range' : (40,-400,400),
#     'xaxis' : 'j1_py',
#     'fold' : 3,
#     'cuts' : resolved ,
#}
#variables['res_j1_pz'] = {
#     'name': 'res_j1_pz',
#     'range' : (50,-1000,1000),
#     'xaxis' : 'j1_pz',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j2_px'] = {
#     'name': 'res_j2_px',
#     'range' : (40,-400,400),
#     'xaxis' : 'j2_px',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j2_py'] = {
#     'name': 'res_j2_py',
#     'range' : (40,-400,400),
#     'xaxis' : 'j2_py',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j2_pz'] = {
#     'name': 'res_j2_pz',
#     'range' : (50,-1000,1000),
#     'xaxis' : 'j2_pz',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j3_px'] = {
#     'name': 'res_j3_px',
#     'range' : (40,-400,400),
#     'xaxis' : 'j3_px',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j3_py'] = {
#     'name': 'res_j3_py',
#     'range' : (40,-400,400),
#     'xaxis' : 'j3_py',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j3_pz'] = {
#     'name': 'res_j3_pz',
#     'range' : (50,-1000,1000),
#     'xaxis' : 'j3_pz',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j4_px'] = {
#     'name': 'res_j4_px',
#     'range' : (40,-400,400),
#     'xaxis' : 'j4_px',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j4_py'] = {
#     'name': 'res_j4_py',
#     'range' : (40,-400,400),
#     'xaxis' : 'j4_py',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j4_pz'] = {
#     'name': 'res_j4_pz',
#     'range' : (50,-1000,1000),
#     'xaxis' : 'j4_pz',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j4_mass'] = {
#     'name': 'res_j4_mass',
#     'range' : (25,0,100),
#     'xaxis' : 'j4_mass',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j1_mass'] = {
#     'name': 'res_j1_mass',
#     'range' : (25,0,100),
#     'xaxis' : 'j1_mass',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j2_mass'] = {
#     'name': 'res_j2_mass',
#     'range' : (25,0,100),
#     'xaxis' : 'j2_mass',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j3_mass'] = {
#     'name': 'res_j3_mass',
#     'range' : (25,0,100),
#     'xaxis' : 'j3_mass',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_wh_px'] = {
#     'name': 'res_wh_px',
#     'range' : (40,-400,400),
#     'xaxis' : 'wh_px',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_wh_py'] = {
#     'name': 'res_wh_py',
#     'range' : (40,-400,400),
#     'xaxis' : 'wh_py',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_wh_pz'] = {
#     'name': 'res_wh_pz',
#     'range' : (50,-1000,1000),
#     'xaxis' : 'wh_pz',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_wh_mass'] = {
#     'name': 'res_wh_mass',
#     'range' : (20,55,115),
#     'xaxis' : 'wh_mass',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_wl_px'] = {
#     'name': 'res_wl_px',
#     'range' : (40,-400,400),
#     'xaxis' : 'wl_px',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_wl_py'] = {
#     'name': 'res_wl_py',
#     'range' : (40,-400,400),
#     'xaxis' : 'wl_py',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_wl_pz'] = {
#     'name': 'res_wl_pz',
#     'range' : (50,-1000,1000),
#     'xaxis' : 'wl_pz',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_wl_mass'] = {
#     'name': 'res_wl_mass',
#     'range' : (20,55,115),
#     'xaxis' : 'wl_mass',
#     'fold' : 3,
#     'cuts' : resolved ,
#}
#variables['res_mjj_12'] = {
#     'name': 'res_mjj_12',
#     'range' : (40, 0,1000),
#     'xaxis' : 'mjj_12',
#     'fold' : 3,
#     'cuts' : resolved ,
#}
#variables['res_mjj_13'] = {
#     'name': 'res_mjj_13',
#     'range' : (40, 0,1000),
#     'xaxis' : 'mjj_13',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_mjj_14'] = {
#     'name': 'res_mjj_14',
#     'range' : (40, 0,1000),
#     'xaxis' : 'mjj_14',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_mjj_23'] = {
#     'name': 'res_mjj_23',
#     'range' : (40, 0,1000),
#     'xaxis' : 'mjj_23',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_mjj_24'] = {
#     'name': 'res_mjj_24',
#     'range' : (40, 0,1000),
#     'xaxis' : 'mjj_24',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_mjj_34'] = {
#     'name': 'res_mjj_34',
#     'range' : (40, 0,1000),
#     'xaxis' : 'mjj_34',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_detajj_14'] = {
#     'name': 'res_detajj_14',
#     'range' : (30, 0,6),
#     'xaxis' : 'detajj_14',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_detajj_12'] = {
#     'name': 'res_detajj_12',
#     'range' : (30, 0,6),
#     'xaxis' : 'detajj_12',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_detajj_13'] = {
#     'name': 'res_detajj_13',
#     'range' : (30, 0,6),
#     'xaxis' : 'detajj_13',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_detajj_23'] = {
#     'name': 'res_detajj_23',
#     'range' : (30, 0,6),
#     'xaxis' : 'detajj_23',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_detajj_24'] = {
#     'name': 'res_detajj_24',
#     'range' : (30, 0,6),
#     'xaxis' : 'detajj_24',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_detajj_34'] = {
#     'name': 'res_detajj_34',
#     'range' : (30, 0,6),
#     'xaxis' : 'detajj_34',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_met_px'] = {
#     'name': 'res_met_px',
#     'range' : (40,-400,400),
#     'xaxis' : 'met_px',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_met_py'] = {
#     'name': 'res_met_py',
#     'range' : (40,-400,400),
#     'xaxis' : 'met_px',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_nJets_no'] = {
#     'name': 'res_nJets_no',
#     'range' : (10,0,10),
#     'xaxis' : 'nJets_no',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_nJets_30'] = {
#     'name': 'res_nJets_30',
#     'range' : (10,0,10),
#     'xaxis' : 'nJets_30',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_w1_px'] = {
#     'name': 'res_w1_px',
#     'range' : (40,-400,400),
#     'xaxis' : 'w1_px',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_w1_py'] = {
#     'name': 'res_w1_py',
#     'range' : (40,-400,400),
#     'xaxis' : 'w1_py',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_w1_pz'] = {
#     'name': 'res_w1_pz',
#     'range' : (50,-1000,1000),
#     'xaxis' : 'w1_pz',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_w1_mass'] = {
#     'name': 'res_w1_mass',
#     'range' : (20,55,115),
#     'xaxis' : 'w1_mass',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_w2_px'] = {
#     'name': 'res_w2_px',
#     'range' : (40,-400,400),
#     'xaxis' : 'w2_px',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_w2_py'] = {
#     'name': 'res_w2_py',
#     'range' : (40,-400,400),
#     'xaxis' : 'w2_py',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_w2_pz'] = {
#     'name': 'res_w2_pz',
#     'range' : (50,-1000,1000),
#     'xaxis' : 'w2_pz',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_w2_mass'] = {
#     'name': 'res_w2_mass',
#     'range' : (20,55,115),
#     'xaxis' : 'w2_mass',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_w1_pt'] = {
#     'name': 'res_w1_pt',
#     'range' : (30,0,1000),
#     'xaxis' : 'w1_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_w2_pt'] = {
#     'name': 'res_w2_pt',
#     'range' : (30,0,1000),
#     'xaxis' : 'w2_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j1_pt'] = {
#     'name': 'res_j1_pt',
#     'range' : (30,0,1000),
#     'xaxis' : 'j1_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j2_pt'] = {
#     'name': 'res_j2_pt',
#     'range' : (30,0,1000),
#     'xaxis' : 'j2_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j3_pt'] = {
#     'name': 'res_j3_pt',
#     'range' : (30,0,1000),
#     'xaxis' : 'j3_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j4_pt'] = {
#     'name': 'res_j4_pt',
#     'range' : (30,0,1000),
#     'xaxis' : 'j4_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_w1_pt_new'] = {
#     'name': 'res_w1_pt',
#     'range' : (30,0,150),
#     'xaxis' : 'w1_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_w2_pt_new'] = {
#     'name': 'res_w2_pt',
#     'range' : (30,0,150),
#     'xaxis' : 'w2_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j1_pt_new'] = {
#     'name': 'res_j1_pt',
#     'range' : (30,0,150),
#     'xaxis' : 'j1_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j2_pt_new'] = {
#     'name': 'res_j2_pt',
#     'range' : (30,0,150),
#     'xaxis' : 'j2_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j3_pt_new'] = {
#     'name': 'res_j3_pt',
#     'range' : (30,0,150),
#     'xaxis' : 'j3_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j4_pt_new'] = {
#     'name': 'res_j4_pt',
#     'range' : (30,0,150),
#     'xaxis' : 'j4_pt',
#     'cuts' : resolved ,
#     'fold' : 3,
#}
#variables['res_j1_pt_new_unf'] = {
#     'name': 'res_j1_pt',
#     'range' : (30,0,150),
#     'xaxis' : 'j1_pt',
#     'cuts' : resolved ,
#     'fold' : 0,
#}
#variables['res_j2_pt_new_unf'] = {
#     'name': 'res_j2_pt',
#     'range' : (30,0,150),
#     'xaxis' : 'j2_pt',
#     'cuts' : resolved ,
#     'fold' : 0,
#}
#variables['res_j3_pt_new_unf'] = {
#     'name': 'res_j3_pt',
#     'range' : (30,0,150),
#     'xaxis' : 'j3_pt',
#     'cuts' : resolved ,
#     'fold' : 0,
#}
#variables['recoMET_pz_Wlep'] = {
#     'name': 'recoWlepMet_pz',
#     'range' : (60,-1500,1500),
#     'xaxis' : 'met_pz',
#     'cuts' : resolved ,
#     'fold' : 0,
#}
#variables['recoMET_pz_Wlep_rebin'] = {
#     'name': 'recoWlepMet_pz',
#     'range' : (60,-300,300),
#     'xaxis' : 'met_pz',
#     'cuts' : resolved ,
#     'fold' : 0,
#}
