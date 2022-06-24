# # variables
#
# variables = {}

controlRegions = set(x for x in cuts if 'SB' in x or 'TopCR' in x)
hmSR  = set(x for x in cuts if 'HMSR' in x)
#boostedSR   = set(x for x in cuts if 'BoostedSR' in x)
#resolvedSR  = set(x for x in cuts if 'ResolvedSR' in x)
ak8SR = set(x for x in cuts if 'AK8SR' in x)
no_cut_all = set( x for x in cuts if 'No_cut' in x)
resolved = set(x for x in cuts if 'Resolved' in x)
boosted  = set(x for x in cuts if 'Boosted' in x)
#boosted_general = set(x for x in cuts if 'boosted_gen' in x)
fat_jet = set(x for x in cuts if 'fatjet' in x)
variables['events']  = {
    'name' : '1',
    'range': (1,0,2),
    'xaxis': 'events',
    'fold' : 3,
    'cuts' : controlRegions
}



variables['tree'] = {
   'tree' :{
   	'lep_px': 'lep_px[0]',
   	'lep_py': 'lep_py[0]',
   	'lep_pz': 'lep_pz[0]',
   	'j1_px': 'j1_px[0]',
   	'j1_py': 'j1_py[0]',
   	'j1_pz': 'j1_pz[0]',
   	'j1_mass': 'j1_mass[0]',
   	'j2_px'  : 'j2_px[0]',
   	'j2_py'  : 'j2_py[0]',
   	'j2_pz'  : 'j2_pz[0]',
   	'j2_mass': 'j2_mass[0]',
   	'j3_px'  : 'j3_px[0]',
   	'j3_py'  : 'j3_py[0]',
   	'j3_pz'  : 'j3_pz[0]',
   	'j3_mass': 'j3_mass[0]',
   	'j4_px'  : 'j4_px[0]',
   	'j4_py'  : 'j4_py[0]',
   	'j4_pz'  : 'j4_pz[0]',
   	'j4_mass': 'j4_mass[0]',
   	'wh_px'  : 'wh_px[0]',
   	'wh_py'  : 'wh_py[0]',
   	'wh_pz'  : 'wh_pz[0]',
   	'wh_mass': 'wh_mass[0]',
   	'wl_px'  : 'wl_px[0]',
   	'wl_py'  : 'wl_py[0]',
   	'wl_pz'  : 'wl_pz[0]',
   	'wl_mass': 'wl_mass[0]',
   	'w1_px'  : 'w1_px[0]',
   	'w1_py'  : 'w1_py[0]',
   	'w1_pz'  : 'w1_pz[0]',
   	'w1_mass': 'w1_mass[0]',
   	'w2_px'  : 'w2_px[0]',
   	'w2_py'  : 'w2_py[0]',
   	'w2_pz'  : 'w2_pz[0]',
   	'w2_mass': 'w2_mass[0]',
   	'met_px'  : 'met_px[0]',
   	'met_py'  : 'met_py[0]',
   	'nJets_no'  : 'nJets_no[0]',
   	'nJets_30'  : 'nJets_30[0]',
#   	'nonresW_mjj'  : 'nonresW_mjj[0]',
   	'mjj_12'  : 'mjj_12[0]',
   	'detajj_12'  : 'detajj_12[0]',
   	'mjj_13'  : 'mjj_13[0]',
   	'detajj_13'  : 'detajj_13[0]',
   	'mjj_14'  : 'mjj_14[0]',
   	'detajj_14'  : 'detajj_14[0]',
   	'mjj_23'  : 'mjj_23[0]',
   	'detajj_23'  : 'detajj_23[0]',
   	'mjj_24'  : 'mjj_24[0]',
   	'detajj_24'  : 'detajj_24[0]',
   	'mjj_34'  : 'mjj_34[0]',
   	'detajj_34'  : 'detajj_34[0]',
   	'event'  : 'event[0]',
   }
}

variables['DeepTag'] = {
   'name' : 'FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[idxCleanFatJetW]] ',
   'range': ([0, 0.918, 1],),
   'xaxis': 'DeepTag_FatJet',
   'fold' : 0
}
