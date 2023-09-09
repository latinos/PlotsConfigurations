# # variables
#
# variables = {}

controlRegions = set(x for x in cuts if 'SB' in x or 'CR'in x)
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
#    'cuts' : controlRegions
}


#######################################################
##############  High Mass category ideas  #############
#######################################################
##
### variables['dR_WW_boosted'] = {
###     'name' : 'dR_WW_boosted',
###     'range': (30,0,10),
###     'xaxis': '(boosted) #Delta R WW',
###     'fold' : 3
### }
### variables['b2b_WW_boosted'] = {
###     'name' : 'b2b_WW_boosted',
###     'range': (30,0,10),
###     'xaxis': '(boosted) WW deviation from b2b',
###     'fold' : 3
### }
### variables['dPhi_WW_boosted'] = {
###     'name' : 'abs(dPhi_WW_boosted[0])',
###     'range': (15, 0, 3.5),
###     'xaxis': '(boosted) abs(#Delta#Phi WW)',
###     'fold' : 3
### }
### variables['dPhi_LNu'] = {
###     'name' : 'abs(dPhi_LNu[0])',
###     'range': (15,0,2.5),
###     'xaxis': 'abs(#Delta#Phi l#nu)',
###     'fold' : 3
### }
###variables['fatJetPt'] = {
###    'name' : 'Alt$(HM_CleanFatJetPassMBoosted_pt[0], -9099)',
###    'range': (24,0,1200),
###    'xaxis': '(boosted) W ',
###    'fold' : 3
###}
### variables['pt_sum_boosted'] = {
###     'name' : 'Lepton_pt[0] + PuppiMET_pt + Alt$(HM_CleanFatJetPassMBoosted_pt[0], -9099)',
###     'range': (50,0,2500),
###     'xaxis': '(boosted) sum(pT)',
###     'fold' : 3
### }
##
### #################################################
### ################ DNN OUT ########################
### #################################################
##variables['DNN_isVBF_OTF'] = {
##    'name' : 'DNN_isVBF_OTF[0]', 
##    'range' : (10,0,1), 
##    'xaxis' : 'Output DNN', 
##    'fold' : 0 
##}
### #####################################################
### ##################  Lepton 0  #######################
### #####################################################
###
#variables['lepton0_pt'] = {
#    'name' : 'Lepton_pt[0]',
#    'range': (25,0,400),
#    'xaxis': 'p_{T} 1st lep. [GeV]',
#    'fold' : 3
#}
#variables['lepton0_eta'] = {
#    'name' : 'Lepton_eta[0]',
#    'range': (25, -2.5, 2.5),
#    'xaxis': '#eta 1st lep.',
#    # 'divideByBinWidth' : 1,
#    'fold' : 0
#}
### variables['lepton0_phi'] = {
###     'name' : 'Lepton_phi[0]',
###     'range': (12, -3.142, 3.142),
###     'xaxis': 'lepton[0] phi',
###     'fold' : 0
### }
##
##
##
##
#######################################################
########################  MET  ########################
#######################################################
##
#variables['met_pt'] = {
#    'name' : 'PuppiMET_pt',
#    'range': (30,0,300),
#    'xaxis': 'MET [GeV]',
#    'fold' : 0
#}
#### variables['met_phi'] = {
####     'name' : 'PuppiMET_phi',
####     'range': (12, -3.142, 3.142),
####     'xaxis': 'MET phi',
####     'fold' : 0
#### }
###
###
########################################################
#########################  Jets  #######################
########################################################
###
#variables['jet0_pt'] = {
#   'name' : 'Alt$(CleanJet_pt[0], -1)',
#   'range': (25, 0, 400),
#   'xaxis': 'p_{T} 1st jet [GeV]',
#   'fold' : 3
#}
#
#
#variables['jet0_eta'] = {
#    'name' : 'Alt$(CleanJet_eta[0], -99)',
#    'range': (30, -4.7, 4.7),
#    'xaxis': '#eta 1st jet',
#    'fold' : 3
#}
#
#variables['jet1_pt'] = {
#   'name' : 'Alt$(CleanJet_pt[1], -1)',
#   'range': (20, 0, 250),
#   'xaxis': 'p_{T} 2nd jet [GeV]',
#   'fold' : 3
#}
#
#
#variables['jet1_eta'] = {
#    'name' : 'Alt$(CleanJet_eta[1], -99)',
#    'range': (30, -4.7, 4.7),
#    'xaxis': '#eta 2nd jet',
#    'fold' : 3
#}
#### variables['jet0_phi'] = {
####     'name' : 'Alt$(CleanJet_phi[0], -99)',
####     'range': (12, -3.142, 3.142),
####     'xaxis': 'lepton[0] phi',
####     'fold' : 0
##### }
####
#variables['CleanFat_jet_pt'] = {
#    'name' : 'CleanFatJet_pt[0]',
#    'range': ([0,200,225,250,275,300,350,400,450,500,600,700,800,900, 1000],),
#    'xaxis': 'clFATJet pt',
#    'fold' : 3
#}
########variables['FatJet_mass'] = {
########    'name' : 'FatJet_mass[0]',
########    'range': (25,0,250),
########    'xaxis': 'CleanFatJetMass [GeV]',
########    'fold' : 0
########}
##variables['CleanFatJet_mass'] = {
##    'name' : 'CleanFatJet_mass[0]',
##    'range': (25,0,250),
##    'xaxis': 'FatJetMass [GeV]',
##    'fold' : 0
##}
#variables['CleanFatJet_mass_zoom'] = {
#    'name' : 'CleanFatJet_mass[0]',
#    'range': (20,60,110),
#    'xaxis': 'FatJetMass [GeV]',
#    'fold' : 0
#}
######

#variables['CleanFat_jet_pt'] = {
#   'name' : 'CleanFatJet_pt[0]',
#   'range': ([200,225,250,275,300,350,400,450,500,600,700,800,900, 1000],),
#   'cuts' : boosted ,
#   'xaxis': 'FatJet pt [GeV]',
#   'fold' : 0
#}
variables['Fat_jet_pt'] = {
   'name' : 'FatJet_pt[0]',
   'range': ([200,225,250,275,300,350,400,450,500,600,700,800,900, 1000],),
    'cuts' : boosted ,
   'xaxis': 'FatJet pt [GeV]',
   'fold' : 0
}
variables['Fat_jet_pt_new'] = {
   'name' : 'FatJet_pt[FatJet_idx_clean]',
   'range': ([200,225,250,275,300,350,400,450,500,600,700,800,900, 1000],),
    'cuts' : boosted ,
   'xaxis': 'FatJet pt [GeV]',
   'fold' : 0
}
variables['FatJet_mass_zoom'] = {
    'name' : 'FatJet_mass[FatJet_idx_clean]',
    'range': (20,60,110),
    'cuts' : boosted ,
    'xaxis': 'FatJet Mass [GeV]',
    'fold' : 0
}
variables['FatJet_mass_softdrop'] = {
    'name' : 'FatJet_msoftdrop[FatJet_idx_clean]',
    'range': (20,60,110),
    'cuts' : boosted ,
    'xaxis': 'FatJet Mass [GeV]',
    'fold' : 0
}
variables['FatJet_mass_zoom_softdrop_n'] = {
    'name' : 'FatJet_msoftdrop_nom[FatJet_idx_clean]',
    'range': (20,60,110),
    'cuts' : boosted ,
    'xaxis': 'FatJet Mass [GeV]',
    'fold' : 0
}
variables['FatJet_mass_zoom_softdrop_M'] = {
    'name' : 'FatJet_mass_nom[FatJet_idx_clean]',
    'range': (20,60,110),
    'cuts' : boosted ,
    'xaxis': 'FatJet Mass [GeV]',
    'fold' : 0
}
variables['Fatjet_eta'] = {
    'name' : 'FatJet_eta[FatJet_idx_clean]',
    'range': (30, -2.4, 2.4),
    'cuts' : boosted ,
    'xaxis': 'FatJet #eta',
    'fold' : 0
}
variables['HvOverFAT'] = {
   'name' : 'HvOverFat[FatJet_idx_clean[0]]',
   'range': (20, 0, 1.),
   'xaxis': 'Min el pt vs fat pt',
   'fold' : 0
}
variables['mass_HIGGS_FAT_fit'] = {
   'name' : 'mass_HIGGS_FAT[FatJet_idx_clean[0]]',
   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
  	       1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1700, 2000, 3000, 5000 ],),
   'xaxis': 'Higgs Mass [GeV]',
   'fold' : 0 ,
   'cuts' : boosted ,
}
