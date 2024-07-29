# # variables
#
# variables = {}

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
    'fold' : 3,
    'cuts' : controlRegions
}
#variables['Event_fatjetJERup']  = {
#    'name' : 'Event_fatjetJERup',
#    'range': (1,0,2),
#    'xaxis': 'events',
#    'fold' : 2,
##    'cuts' : controlRegions
#}
#
#variables['Event_fatjetJERdo']  = {
#    'name' : 'Event_fatjetJERdo',
#    'range': (1,0,2),
#    'xaxis': 'events',
#    'fold' : 2,
##    'cuts' : controlRegions
#}
#variables['Event_fatjetJESup']  = {
#    'name' : 'Event_fatjetJESup',
#    'range': (1,0,2),
#    'xaxis': 'events',
#    'fold' : 2,
##    'cuts' : controlRegions
#}
#variables['Event_fatjetJESdo']  = {
#    'name' : 'Event_fatjetJESdo',
#    'range': (1,0,2),
#    'xaxis': 'events',
#    'fold' : 2,
##    'cuts' : controlRegions
#}
#variables['Event_fatjetJMSup']  = {
#    'name' : 'Event_fatjetJMSup',
#    'range': (1,0,2),
#    'xaxis': 'events',
#    'fold' : 2,
##    'cuts' : controlRegions
#}
#variables['Event_fatjetJMSdo']  = {
#    'name' : 'Event_fatjetJMSdo',
#    'range': (1,0,2),
#    'xaxis': 'events',
#    'fold' : 2,
##    'cuts' : controlRegions
#}
#variables['Event_fatjetJMRup']  = {
#    'name' : 'Event_fatjetJMRup',
#    'range': (1,0,2),
#    'xaxis': 'events',
#    'fold' : 2,
##    'cuts' : controlRegions
#}
#variables['Event_fatjetJMRdo']  = {
#    'name' : 'Event_fatjetJMRdo',
#    'range': (1,0,2),
#    'xaxis': 'events',
#    'fold' : 2,
##    'cuts' : controlRegions
#}


######################################################
#############  High Mass category ideas  #############
######################################################
#
## variables['dR_WW_boosted'] = {
##     'name' : 'dR_WW_boosted',
##     'range': (30,0,10),
##     'xaxis': '(boosted) #Delta R WW',
##     'fold' : 3
## }
## variables['b2b_WW_boosted'] = {
##     'name' : 'b2b_WW_boosted',
##     'range': (30,0,10),
##     'xaxis': '(boosted) WW deviation from b2b',
##     'fold' : 3
## }
## variables['dPhi_WW_boosted'] = {
##     'name' : 'abs(dPhi_WW_boosted[0])',
##     'range': (15, 0, 3.5),
##     'xaxis': '(boosted) abs(#Delta#Phi WW)',
##     'fold' : 3
## }
## variables['dPhi_LNu'] = {
##     'name' : 'abs(dPhi_LNu[0])',
##     'range': (15,0,2.5),
##     'xaxis': 'abs(#Delta#Phi l#nu)',
##     'fold' : 3
## }
##variables['fatJetPt'] = {
##    'name' : 'Alt$(HM_CleanFatJetPassMBoosted_pt[0], -9099)',
##    'range': (24,0,1200),
##    'xaxis': '(boosted) W ',
##    'fold' : 3
##}
## variables['pt_sum_boosted'] = {
##     'name' : 'Lepton_pt[0] + PuppiMET_pt + Alt$(HM_CleanFatJetPassMBoosted_pt[0], -9099)',
##     'range': (50,0,2500),
##     'xaxis': '(boosted) sum(pT)',
##     'fold' : 3
## }
#
## #################################################
## ################ DNN OUT ########################
## #################################################
#variables['DNN_isVBF_OTF'] = {
#    'name' : 'DNN_isVBF_OTF[0]', 
#    'range' : (10,0,1), 
#    'xaxis' : 'Output DNN', 
#    'fold' : 0 
#}
## #####################################################
## ##################  Lepton 0  #######################
## #####################################################
##
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
## variables['lepton0_phi'] = {
##     'name' : 'Lepton_phi[0]',
##     'range': (12, -3.142, 3.142),
##     'xaxis': 'lepton[0] phi',
##     'fold' : 0
## }
#
#
#
#
######################################################
#######################  MET  ########################
######################################################
#
##variables['met_pt'] = {
##    'name' : 'PuppiMET_pt',
##    'range': (30,0,300),
##    'xaxis': 'MET [GeV]',
##    'fold' : 0
##}
## variables['met_phi'] = {
##     'name' : 'PuppiMET_phi',
##     'range': (12, -3.142, 3.142),
##     'xaxis': 'MET phi',
##     'fold' : 0
## }
#
#
#variables['met_pt'] = {
#    'name' : 'PuppiMET_pt',
#    'range': (30,0,300),
#    'xaxis': 'MET [GeV]',
#    'fold' : 0
#}
### variables['met_phi'] = {
###     'name' : 'PuppiMET_phi',
###     'range': (12, -3.142, 3.142),
###     'xaxis': 'MET phi',
###     'fold' : 0
### }
##
##
#######################################################
########################  Jets  #######################
#######################################################
##
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
#######################################################
########################  Jets  #######################
#######################################################
##
###variables['jet0_pt'] = {
###   'name' : 'Alt$(CleanJet_pt[0], -1)',
###   'range': (25, 0, 400),
###   'xaxis': 'p_{T} 1st jet [GeV]',
###   'fold' : 3
###}
##
##
### variables['jet0_eta'] = {
###     'name' : 'Alt$(CleanJet_eta[0], -99)',
###     'range': (30, -4.7, 4.7),
###     'xaxis': '#eta 1st jet',
###     'fold' : 3
### }
### variables['jet0_phi'] = {
###     'name' : 'Alt$(CleanJet_phi[0], -99)',
###     'range': (12, -3.142, 3.142),
###     'xaxis': 'lepton[0] phi',
###     'fold' : 0
#### }
###
#variables['CleanFat_jet_pt'] = {
#   'name' : 'CleanFatJet_pt[0]',
#   'range': ([200,225,250,275,300,350,400,450,500,600,700,800,900, 1000],),
#   'xaxis': 'FatJet Pt [GeV]',
#   'cuts' : controlRegions,
#   'fold' : 3
#}
#########variables['FatJet_mass'] = {
#########    'name' : 'FatJet_mass[0]',
#########    'range': (25,0,250),
#########    'xaxis': 'CleanFatJetMass [GeV]',
#########    'fold' : 0
#########}
####variables['CleanFatJet_mass'] = {
####    'name' : 'CleanFatJet_mass[0]',
####    'range': (25,0,250),
####    'xaxis': 'FatJetMass [GeV]',
####    'fold' : 0
####}
#variables['CleanFatJet_mass_zoom'] = {
#    'name' : 'CleanFatJet_mass[0]',
#    'range': (10,60,110),
#    'xaxis': 'FatJet Mass [GeV]',
#    'cuts' : controlRegions,
#    'fold' : 0
#}
###variables['Fatjet_eta'] = {
###    'name' : 'FatJet_eta[0]',
###    'range': (30, -2.4, 2.4),
###    'xaxis': 'clJet[1] eta',
###     # 'divideByBinWidth' : 1,
###    'fold' : 0
###}
###variables['DeepTag_bin'] = {
###   'name' : 'FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[0]] ',
###   'range': (20, 0.96, 1.),
###   'xaxis': 'DeepTag_FatJet',
###   'fold' : 0
###}
###
###variables['DeepTag_index'] = {
###   'name' : 'Alt$(FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[0]],0) ',
###   'range': (20,0.96,1.),
###   'xaxis': 'DeepTag_FatJet',
###   'fold' : 0
###}
#####
#####
##########################################################
##################  High Mass HWW variables  ############
##########################################################
#####
######variables['resolvHiggsMass'] = {
##### #   'name' : 'HM_Hlnjj_mass',
#####    # 'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
#####    #           650, 700, 750, 800, 900, 1100, 1500, 2500],),
##### #   'range': ([0, 200, 250, 290, 330, 370, 420, 470, 520,
#####  #             570, 620, 670, 720, 775, 870, 1000, 2000],),
#####  #  'xaxis': 'reconstr. H mass [GeV]',
##### #   'cuts' : resolvedSR,
##### #   'fold' : 3
######}
######variables['boostHiggsMass_ggf'] = {
######    'name' : 'HM_CleanFatJetPassMBoosted_HlnFat_mass[0]',
#####    # 'range': ([0, 200, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800,
#####    #           900, 1000, 1100, 1200, 1350, 1500, 1700, 2000, 3000, 5000],),
######    'range': ([0, 220, 300, 350, 400, 450, 490, 530, 580, 630, 680,
######               730, 780, 840, 950, 1075, 1175, 1370, 1900, 5000],),
######    'xaxis': 'reconstr. H mass [GeV]',
######    'cuts' : set.union(boostedSR, ak8SR),
######    'fold' : 3
######}
######variables['boostHiggsMass_vbf'] = {
######    'name' : 'HM_CleanFatJetPassMBoosted_HlnFat_mass[0]',
#####    # 'range': ([0, 200, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800,
#####    #           900, 1000, 1100, 1200, 1350, 1500, 1700, 2000, 3000, 5000],),
######    'range': ([0, 220, 300, 350, 400, 450, 490, 530, 580, 630, 680,
##### #              730, 780, 840, 950, 1100, 1300, 1800, 5000],),
##### #   'xaxis': 'reconstr. H mass [GeV]',
##### #   'cuts' : set.union(boostedSR, ak8SR),
######    'fold' : 3
######}
######variables['hmHiggsMass'] = {
######    'name' : 'HM_CleanFatJetPassMBoosted_HlnFat_mass[0]',
#####    # 'range': ([0, 900, 1000, 1100, 1200, 1350, 1500, 1700, 2000, 3000, 5000],),
#####    # 'range': ([0, 900, 1000, 1100, 1200, 1325, 1580, 2050, 5000],),
##### #   'range': ([0, 900, 990, 1085, 1185, 1300, 1500, 2000, 5000],),
##### #   'xaxis': 'reconstr. H mass [GeV]',
##### #   'cuts' : set.union(hmSR, ak8SR),
##### #   'fold' : 3
######}
#####
#####
######variables['plot_resolvHMass'] = {
######    'name' : 'HM_Hlnjj_mass',
######    'range': (24, 0, 1200),
######    'xaxis': 'reconstr. H mass [GeV]',
######    'fold' : 3,
######    'cuts': resolved,
######}
######variables['plot_boostHMass'] = {
######    'name' : 'HM_CleanFatJetPassMBoosted_HlnFat_mass[0]',
######    'range': (40, 0, 2000),
######    'xaxis': 'reconstr. H mass [GeV]',
######    'fold' : 0,
######    'cuts': set.union(boosted,boosted_general)
######}
#####
######variables['plot_boostHMass_nocut'] = {
######    'name' : 'HM_CleanFatJetPassMBoosted_HlnFat_mass[0]',
######    'range': (30, 0, 1500),
######    'xaxis': 'reconstr. H mass [GeV]',
######    'fold' : 0, 
######}
######
######variables['plot_whad_jj_patches'] = {
######    'name' : 'mass_WHAD_JJ[0]',
######    'range': (25, 0, 250),
######    'xaxis': 'reconstr. W had mass [GeV]',
######    'fold' : 0, 
######}
######
######variables['plot_whad_fat_patches'] = {
######    'name' : 'mass_WHAD_FAT[0]',
######    'range': (25, 0, 250),
######    'xaxis': 'reconstr. W had mass [GeV]',
######    'fold' : 0, 
######}
#####
#####
######variables['deltaR'] = {
######    'name' : 'deltaR[0]',
######    'range': (15, 0, 3),
######    'xaxis': 'delta R resolved or Boosted',
######    'fold' : 0, 
######}
######
######
#variables['HvOverFAT'] = {
#   'name' : 'HvOverFat[0]',
#   'range': (20, 0, 1.),
#   'xaxis': 'p_{t}^{W}/m_{Xp_{t}^{W}/m_{X}}',
#   'cuts' : controlRegions,
#   'fold' : 0
#}
#
###variables['HvOverJJ'] = {
###   'name' : 'HvOverJJ[0]',
###   'range': (20, 0, 1.),
###   'xaxis': 'Min el pt vs had pt',
###   'fold' : 0
###}
###
#######variables['Tau21decorrelated'] = {
#######   'name' : 'tau21DDT[0]',
#######   'range': (20, 0, 1.),
#######   'xaxis': 'TAU 21 DDT',
#######   'fold' : 0
#######}
#######
####
####variables['DeepTag'] = {
####   'name' : 'FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[0]] ',
####   'range': (20,0.,1.),
####   'xaxis': 'DeepTag_FatJet',
####   'fold' : 0
####}
####
####
####variables['DeepTag_bin'] = {
####   'name' : 'FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[0]] ',
####   'range': (10, 0.96, 1.),
####   'xaxis': 'DeepTag_FatJet',
####   'fold' : 0
####}
####
####variables['DeepTag_index'] = {
####   'name' : 'FatJet_deepTag_WvsQCD ',
####   'range': (20,0.,1.),
####   'xaxis': 'DeepTag_FatJet',
####   'fold' : 0
####}
####
####
####variables['DeepTag_bin_index'] = {
####   'name' : 'FatJet_deepTag_WvsQCD',
####   'range': (10, 0.96, 1.),
####   'xaxis': 'DeepTag_FatJet',
####   'fold' : 0
####}
####variables['DeepTag_FatJet'] = {
####   'name' : 'FatJet_deepTag_WvsQCD ',
####   'range': (20,0.,1),
####   'xaxis': 'DeepTag_FatJet',
####   'fold' : 0
####}
####
####
####variables['DeepTag_FatJet_MD'] = {
####   'name' : 'FatJet_deepTagMD_WvsQCD',
####   'range': (20, 0., 1.),
####   'xaxis': 'DeepTag_FatJet_MD',
####   'fold' : 0
####}
##
####variables['Delta_Rjj'] = {
####   'name' : 'DeltaR_jj',
####   'range': (40, 0., 4.),
####   'xaxis': 'Delta_Rjj',
####   'fold' : 0
####}
###
###
####variables['Delta_Rjj_Lpt'] = {
####   'name' : 'DeltaR_jj_Lpt',
####   'range': (40, 0., 4.),
####   'xaxis': 'Delta_Rjj',
####   'fold' : 0
####}
###variables['Gen_ZGstar_mass'] = {
###   'name' : 'Gen_ZGstar_mass',
###   'range': (40, 0., 200.),
###   'xaxis': 'Gen_ZGstar_mass',
###   'fold' : 0
###}
###
###
###
###
###
######
######variables['DeepTag_leadingFatJet'] = {
######   'name' : 'FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[0]] ',
######   'range': ([0,0.960,1],),
######   'xaxis': 'DeepTag_FatJet',
######   'fold' : 0
######}
#####
#variables['mass_HIGGS_FAT_VBF'] = {
#   'name' : 'mass_HIGGS_FAT[0]',
#   'range': ([0, 600, 650, 700, 750, 800, 850, 900, 950, 1000,
#  	       1100, 1200, 1300, 1500, 2000, 5000 ],),
#   'xaxis': 'Higgs Mass [GeV]',
#   'fold' : 0 ,
#   'cuts' : boostedSR,
#}
variables['mass_HIGGS_FAT_fit'] = {
   'name' : 'mass_HIGGS_FAT[0]',
   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
  	       1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1700, 2000, 3000, 5000 ],),
   'xaxis': 'Higgs Mass [GeV]',
   'fold' : 0 ,
   'cuts' : boosted ,
}
variables['mass_HIGGS_BooGGH'] = {
   'name' : 'mass_HIGGS_FAT[0]',
   'range': ([0, 250, 350,500, 550, 600,
               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
  	       1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500,1600, 1700, 
  	       1800, 2000, 2100, 2200, 2400, 2600, 2900, 3000, 5000],),
   'xaxis': 'Higgs Mass [GeV]',
   'fold' : 0 ,
   'cuts' : boostedSR_isGGH,
}
variables['mass_HIGGS_BooVBF'] = {
   'name' : 'mass_HIGGS_FAT[0]',
   'range': ([0, 450, 500, 550, 600,
               650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1150, 
  	       1350, 1400, 1450, 1500, 1600, 1700, 1800, 2000, 2400, 2600, 3400, 5000],),
   'xaxis': 'Higgs Mass [GeV]',
   'fold' : 0 ,
   'cuts' : boostedSR_isVBF,
}
variables['mass_HIGGS_BooBKG'] = {
   'name' : 'mass_HIGGS_FAT[0]',
   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
  	       1100, 1400, 5000],),
   'xaxis': 'Higgs Mass [GeV]',
   'fold' : 0 ,
   'cuts' : boostedSR_isBKG,
}

############variables['mass_HIGGS_twojet_binned'] = {
############   'name' : 'mass_HIGGS_JJ[0]',
############   'range': ([0, 150, 200, 260, 300, 350, 400, 450, 500, 550, 600,
############              650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1300, 1500, 3000],),
############   'xaxis': 'Higgs Mass [GeV]',
############   'fold' : 0,
############   'cuts' : resolved, 
############}
###########
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
#variables['mass_HIGGS_FAT_rebin'] = {
#   'name' : 'mass_HIGGS_FAT[0]',
#   'range': ([0, 250, 350, 400, 450, 500, 550, 600,
#               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
#  	       1100, 1150, 1200, 1250, 1300, 1350, 1500, 1700, 2000, 5000 ],),
#   'xaxis': 'Higgs Mass [GeV]',
#   'fold' : 0 ,
#   'cuts' : boostedSR,
#}
#variables['mass_HIGGS_FAT_fit'] = {
#   'name' : 'mass_HIGGS_FAT[0]',
#   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
#               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
#  	       1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1700, 2000, 3000, 5000 ],),
#   'xaxis': 'Higgs Mass [GeV]',
#   'fold' : 0 ,
#   'cuts' : boosted ,
#}
#variables['mass_HIGGS_FAT_binned'] = {
#   'name' : 'mass_HIGGS_FAT[0]',
#   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
#               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
#  	       1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1700, 2000, 3000 ],),
#   'xaxis': 'Higgs Mass [GeV]',
#   'fold' : 0 ,
#   'cuts' : boosted ,
#}
##variables['mass_HIGGS_FAT_fatjetJERup'] = {
##   'name' : 'mass_HIGGS_FAT_fatjetJERup[FatJet_idx_clean[0]]',
##   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
##               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
##  	       1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1700, 2000, 3000, 5000 ],),
##   'xaxis': 'Higgs Mass [GeV]',
##   'fold' : 0 ,
##   'cuts' : boosted ,
##}
##variables['mass_HIGGS_FAT_fatjetJERdo'] = {
##   'name' : 'mass_HIGGS_FAT_fatjetJERdo[FatJet_idx_clean[0]]',
##   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
##               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
##  	       1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1700, 2000, 3000, 5000 ],),
##   'xaxis': 'Higgs Mass [GeV]',
##   'fold' : 0 ,
##   'cuts' : boosted ,
##}
##variables['mass_HIGGS_FAT_fatjetJMRup'] = {
##   'name' : 'mass_HIGGS_FAT_fatjetJMRup[FatJet_idx_clean[0]]',
##   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
##               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
##  	       1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1700, 2000, 3000, 5000 ],),
##   'xaxis': 'Higgs Mass [GeV]',
##   'fold' : 0 ,
##   'cuts' : boosted ,
##}
##variables['mass_HIGGS_FAT_fatjetJMRdo'] = {
##   'name' : 'mass_HIGGS_FAT_fatjetJMRdo[FatJet_idx_clean[0]]',
##   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
##               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
##  	       1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1700, 2000, 3000, 5000 ],),
##   'xaxis': 'Higgs Mass [GeV]',
##   'fold' : 0 ,
##   'cuts' : boosted ,
##}
##variables['mass_HIGGS_FAT_fatjetJMSup'] = {
##   'name' : 'mass_HIGGS_FAT_fatjetJMSup[FatJet_idx_clean[0]]',
##   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
##               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
##  	       1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1700, 2000, 3000, 5000 ],),
##   'xaxis': 'Higgs Mass [GeV]',
##   'fold' : 0 ,
##   'cuts' : boosted ,
##}
##variables['mass_HIGGS_FAT_fatjetJMSdo'] = {
##   'name' : 'mass_HIGGS_FAT_fatjetJMSdo[FatJet_idx_clean[0]]',
##   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
##               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
##  	       1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1700, 2000, 3000, 5000 ],),
##   'xaxis': 'Higgs Mass [GeV]',
##   'fold' : 0 ,
##   'cuts' : boosted ,
##}
##variables['mass_HIGGS_FAT_fatjetJESup'] = {
##   'name' : 'mass_HIGGS_FAT_fatjetJESup[FatJet_idx_clean[0]]',
##   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
##               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
##  	       1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1700, 2000, 3000, 5000 ],),
##   'xaxis': 'Higgs Mass [GeV]',
##   'fold' : 0 ,
##   'cuts' : boosted ,
##}
##variables['mass_HIGGS_FAT_fatjetJESdo'] = {
##   'name' : 'mass_HIGGS_FAT_fatjetJESdo[FatJet_idx_clean[0]]',
##   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
##               650, 700, 750, 800, 850, 900, 950, 1000, 1050,
##  	       1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1700, 2000, 3000, 5000 ],),
##   'xaxis': 'Higgs Mass [GeV]',
##   'fold' : 0 ,
##   'cuts' : boosted ,
##}
#######
#######
#######variables['mass_HIGGS_FAT'] = {
#######   'name' : 'mass_HIGGS_FAT[0]',
#######   'range': (15, 0, 3000),
#######   'xaxis': 'Higgs Mass [GeV]',
#######   'fold' : 0
#######}
######
#variables['mass_HIGGS_twojet_binned'] = {
#   'name' : 'mass_HIGGS_JJ[0]',
#   'range': ([0, 150, 200, 260, 300, 350, 400, 450, 500, 550, 600,
#              650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1300, 1500, 3000],),
#   'xaxis': 'Higgs Mass [GeV]',
#   'fold' : 0,
#   'cuts' : resolved, 
#}
#
#variables['mass_HIGGS_twojet_rebin'] = {
#   'name' : 'mass_HIGGS_JJ[0]',
#   'range': ([0, 200, 250, 300, 350, 400, 450, 500, 550, 600,
#              650, 700, 750, 800, 850, 900, 950, 1000, 1250, 1500, 3000],),
#   'xaxis': 'Higgs Mass [GeV]',
#   'fold' : 0,
#   'cuts' : resolvedSR, 
#}
##variables['Fat_jet_pt'] = {
##   'name' : 'FatJet_pt[FatJet_idx_clean]',
##   'range': ([200,225,250,275,300,350,400,450,500,600,700,800,900, 1000],),
##    'cuts' : boosted ,
##   'xaxis': 'FatJet pt [GeV]',
##   'fold' : 0
##}
##
##variables['FatJet_mass_zoom_softdrop'] = {
##    'name' : 'FatJet_msoftdrop_nom[FatJet_idx_clean]',
##    'range': (20,60,110),
##    'cuts' : boosted ,
##    'xaxis': 'FatJet Mass [GeV]',
##    'fold' : 0
##}
##variables['FatJet_mass_zoom'] = {
##    'name' : 'FatJet_mass_nom[FatJet_idx_clean]',
##    'range': (20,60,110),
##    'cuts' : boosted ,
##    'xaxis': 'FatJet Mass [GeV]',
##    'fold' : 0
##}
##variables['wlep_mass'] = {
##    'name' : 'HM_Wlep_mass_Puppi',
##    'range': (15, 50, 200),
##    'xaxis': 'reconstr. W lep Mass [GeV]',
##    'cuts' : controlRegions,
##    'fold' : 0, 
##}
##variables['wlep_pt'] = {
##    'name' : 'HM_Wlep_pt_Puppi',
##    'range': (40, 0, 800),
##    'xaxis': 'reconstr. W lep Pt [GeV]',
##    'cuts' : controlRegions,
##    'fold' : 0, 
##}
##variables['whad_pt'] = {
##    'name' : 'HM_Whad_pt',
##    'range': (40, 0, 800),
##    'xaxis': 'reconstr. W had Pt [GeV]',
##    'fold' : 0, 
##    'cuts' : controlRegions,
##}
##variables['whad_mass'] = {
##    'name' : 'HM_Whad_mass',
##    'range': (25, 0, 250),
##    'xaxis': 'reconstr. W had mass [GeV]',
##    'cuts' : controlRegions,
##    'fold' : 0, 
##}
#######variables['Mela_boosted'] = {
#######   'name': 'MelaVBFvsGGH_boosted[0]',
#######   'range': (15,0,1),
#######   'xaxis': 'Mela_disc',
#######   'fold': 0,
#######}
#######
#######variables['Mela_resolved'] = {
#######   'name': 'MelaVBFvsGGH_resolved[0]',
#######   'range': (15,0,1),
#######   'xaxis': 'Mela_disc',
#######   'fold': 0,
#######}
######
######
#####variables['tree'] = {
#####   'tree' :{
######   	'HvOverFAT_stud': 'HvOverFat[0]',
##### #   	'CleanFatPt_stud': 'CleanFatJet_pt[0]',
#####    	'mass_HIGGS': 'mass_HIGGS_FAT[0]',
#####    	'mass_HIGGS_res': 'mass_HIGGS_JJ[0]',
#####  #  	'MELA_resolved': 'MelaVBFvsGGH_resolved[0]',
#####  #  	'MELA_boosted': 'MelaVBFvsGGH_boosted[0]',
#####   }
#####}
#######variables['Higgs_Res_Mt'] = {
#######   'name' : 'HM_Hlnjj_MT[0]',
#######   'range': (30, 0, 150),
#######   'xaxis': 'MT higgs',
#######   'fold' : 0
#######}
#######
#######variables['Had_pt'] = {
#######   'name' : 'HM_Whad_pt[0]',
#######   'range': (20, 0, 100),
#######   'xaxis': 'HAD pt [GeV]',
#######   'fold' : 0
#######}
#######variables['plot_whad_jjANDfat_patches'] = {
#######    'name' : 'mass_WHAD_JJFAT[0]',
#######    'range': (25, 0, 250),
#######    'xaxis': 'reconstr. W had mass [GeV]',
#######    'fold' : 0, 
#######}
#######
#######variables['plot_whad_fatANDjj_patches'] = {
#######    'name' : 'mass_WHAD_FATJJ[0]',
#######    'range': (25, 0, 250),
#######    'xaxis': 'reconstr. W had mass [GeV]',
#######    'fold' : 0, 
#######}
######
######variables['wlep_eta'] = {
######    'name' : 'HM_Wlep_eta_Puppi',
######    'range': (25, -2.5, 2.5),
######    'xaxis': 'reconstr. W lep eta',
######    'fold' : 0, 
#######}
###variables['wlep_mass'] = {
###    'name' : 'HM_Wlep_mass_Puppi',
###    'range': (15, 50, 200),
###    'xaxis': 'reconstr. W lep Mass [GeV]',
###    'fold' : 0, 
###    'cuts' : controlRegions
###}
###variables['wlep_pt'] = {
###    'name' : 'HM_Wlep_pt_Puppi',
###    'range': (40, 0, 800),
###    'xaxis': 'reconstr. W lep Pt [GeV]',
###    'fold' : 0, 
###    'cuts' : controlRegions
###}
###variables['whad_pt'] = {
###    'name' : 'HM_Whad_pt',
###    'range': (40, 0, 800),
###    'xaxis': 'reconstr. W had Pt [GeV]',
###    'fold' : 0, 
###    'cuts' : controlRegions
###}
###########variables['whad_eta'] = {
###########    'name' : 'HM_Whad_eta',
###########    'range': (25, -2.5, 2.5),
###########    'xaxis': 'reconstr. W had eta',
###########    'fold' : 0, 
###########}
###variables['whad_mass'] = {
###    'name' : 'HM_Whad_mass',
###    'range': (25, 0, 250),
###    'xaxis': 'reconstr. W had mass [GeV]',
###    'fold' : 0, 
###    'cuts' : controlRegions
###}
####variables['classvbf'] = {
###     'name': 'vbfdnn_odd',
###     'range' : (10,0,1.),
###     'xaxis' : 'VBF output',
###     'fold' : 3,
###     'cuts' : boostedSR,
###     'divideByBinWidth':1
###}
###variables['classbkg'] = {
###     'name': 'bkgdnn_odd',
###     'range' : (10,0,1.),
###     'xaxis' : 'BKG output',
###     'fold'  : 3,
###     'cuts' : boostedSR,
###     'divideByBinWidth':1
###}
###variables['classggh'] = {
###     'name': 'gghdnn_odd',
###     'range' : (10,0,1.),
###     'xaxis' : 'ggH output',
###     'fold'  : 3,
###     'cuts' : boostedSR,
###     'divideByBinWidth':1
###}
####variables['classvbf_bin'] = {
####     'name': 'vbfdnn_odd',
####     'range' : (20,0,1.),
####     'xaxis' : 'VBF output',
####     'fold' : 3,
####}
####variables['classbkg_bin'] = {
####     'name': 'bkgdnn_odd',
####     'range' : (6,0,1.),
####     'xaxis' : 'BKG output',
####     'fold'  : 3,
####     'divideByBinWidth':1
####}
####variables['classggh_bin'] = {
####     'name': 'gghdnn_odd',
####     'range' : (20,0,1.),
####     'xaxis' : 'ggH output',
####     'fold'  : 3,
####}
####variables['isvbf'] = {
####     'name': 'vbflike_odd',
####     'range' : ([0.,0.5,1.0,1.5],),
####     'xaxis' : 'is VBF',
####     'fold' : 0,
####}
####variables['isggh'] = {
####     'name': 'gghlike_odd',
####     'range' : ([0.,0.5,1.0,1.5],),
####     'xaxis' : 'is GGH',
####     'fold' : 0,
####}
####variables['isbkg'] = {
####     'name': 'bkglike_odd',
####     'range' : ([0.,0.5,1.0,1.5],),
####     'xaxis' : 'is BKG',
####     'fold' : 0,
####}
###variables['classvbf_res'] = {
##     'name': 'vbfdnn_res',
##     'range' : (10,0,1.),
##     'xaxis' : 'VBF output',
##     'fold' : 3,
##     'cuts' : resolvedSR,
##     'divideByBinWidth':1
##}
##variables['classbkg_res'] = {
##     'name': 'bkgdnn_res',
##     'range' : (10,0,1.),
##     'xaxis' : 'BKG output',
##     'fold'  : 3,
##     'cuts' : resolvedSR,
##     'divideByBinWidth':1
##}
##variables['classggh_res'] = {
##     'name': 'gghdnn_res',
##     'range' : (10,0,1.),
##     'xaxis' : 'ggH output',
##     'fold'  : 3,
##     'cuts' : resolvedSR,
##     'divideByBinWidth':1
##}
###variables['classvbf_bin'] = {
###     'name': 'vbfdnn_res',
###     'range' : (20,0,1.),
###     'xaxis' : 'VBF output',
###     'fold' : 3,
###}
###variables['classbkg_bin'] = {
###     'name': 'bkgdnn_res',
###     'range' : (6,0,1.),
###     'xaxis' : 'BKG output',
###     'fold'  : 3,
###     'divideByBinWidth':1
###}
###variables['classggh_bin'] = {
###     'name': 'gghdnn_res',
###     'range' : (20,0,1.),
###     'xaxis' : 'ggH output',
###     'fold'  : 3,
###}
###variables['isvbf'] = {
###     'name': 'vbflike_res',
###     'range' : ([0.,0.5,1.0,1.5],),
###     'xaxis' : 'is VBF',
###     'fold' : 0,
###}
###variables['isggh'] = {
###     'name': 'gghlike_res',
###     'range' : ([0.,0.5,1.0,1.5],),
###     'xaxis' : 'is GGH',
###     'fold' : 0,
###}
###variables['isbkg'] = {
###     'name': 'bkglike_res',
###     'range' : ([0.,0.5,1.0,1.5],),
###     'xaxis' : 'is BKG',
###     'fold' : 0,
###}
###variables['m_jj']  = {
####    'name': 'MHlnjj_m_jj',     
####    'range' : (60,0,300),   
####    'xaxis' : 'm^{j,j}',
####    'fold'  : 0                         
####}
######variables['plot_whad_fat'] = {
######    'name' : 'CleanFatJet_mass',
######    'range': (25, 0, 250),
######    'xaxis': 'reconstr. W had mass Fat [GeV]',
######    'fold' : 0, 
######}
#####
######variables['plot_whad_fatANDjj_samejet'] = {
######    'name' : 'CleanFatJet_mass[0]',
######    'range': (25, 0, 250),
######    'xaxis': 'reconstr. W had mass [GeV]',
######    'fold' : 0,
######    'cuts' : two_jet, 
######}
#####
#####
######variables['percentage_jj'] = {
######    'name': 'two_jets[0]',
######    'range': (3, -0.5,2.5 ),
######    'xaxis': 'events jj',
######    'fold': 0,
######}
######
######variables['percentage_fat'] = {
######    'name': 'fat_jet[0]',
######    'range': (3, -0.5,2.5 ),
######    'xaxis': 'events fat',
######    'fold': 0,
######}
######
######variables['both_events'] = {
######    'name': 'cohe_jet[0]',
######    'range': (3, -0.5,2.5 ),
######    'xaxis': 'both events',
######    'fold': 0,
######}
######variables['plot_WHAD_FATpatches'] = {
######    'name' : 'mass_WHAD_FAT[0]',
######    'range': (30, 0, 600),
######    'xaxis': 'reconstr. W had mass [GeV]',
######    'fold' : 0, 
######}
######
######variables['plot_WHAD_JJpatches'] = {
######    'name' : 'mass_WHAD_JJ[0]',
######    'range': (30, 0, 600),
######    'xaxis': 'reconstr. W had mass [GeV]',
######    'fold' : 0, 
######}
#####
#####
#####
######variables['resolvWhadMass'] = {
######    'name' : 'HM_Whad_mass',
######    'range': (25, 0, 250),
######    'xaxis': 'm_{j#kern[0.1]{j}} [GeV]',
######    'fold' : 3,
######    'cuts': resolved,
######}
######variables['boostWhadMass'] = {
######    'name' : 'HM_CleanFatJetPassMBoosted_mass[0]',
######    'range': (25, 0, 250),
######    'xaxis': 'm_{J} [GeV]',
######    'fold' : 0,
######}
#####
######variables['PLOT_boostWhadMass'] = {
######    'name' : 'HM_CleanFatJetPassMBoosted_mass[0]',
######    'range': (40, 0, 2000),
######    'xaxis': 'm_{J} [GeV]',
######    'fold' : 0, 
######}
#####
######variables['HM_Wlep_mt'] = {
######    'name': 'HM_Wlep_mt[0]',
######    'range': (15, 0.0, 150.0),
######    'xaxis': 'M_{T}^{l#nu} [GeV]',
######    'fold': 3,
######    'cuts': resolved,
######}
#####
###### ################################################
###### ############# BOOST VARIABLE ###################
###### ################################################
######variables['HM_FatJet_pt'] = {
######    'name': 'HM_CleanFatJetPassMBoosted_pt[0]',
######    'range': (20, 0.0, 300.0),
######    'xaxis': ' Fat_Jet_Pt [GeV]',
######    'fold': 0,
######}
#####
#####
######variables['HM_FatJet_tau21'] = {
######    'name': 'HM_CleanFatJetPassMBoosted_tau21[0]',
######    'range': (10, 0.0, 1.0),
######    'xaxis': ' tau_21 []',
######    'fold': 0,
######}
######variables['HM_FatJet_WptOvHfatM'] = {
######    'name': 'HM_CleanFatJetPassMBoosted_WptOvHfatM[0]',
######    'range': (10, 0.0, 1.0),
######    'xaxis': ' Fat_Jet_WptOvHfatM',
######    'fold': 0,
######}
#####
######variables['HM_FatJet_Mass'] = {
######    'name': 'HM_CleanFatJetPassMBoosted_mass[0]',
######    'range': (25, 0.0, 250),
######    'xaxis': ' Fat_Jet_Mass [GeV]',
######    'fold': 0,
######}
######variables['HM_FatJet_eta'] = {
######    'name': 'HM_CleanFatJetPassMBoosted_eta[0]',
######    'range': (10, -5., 5.),
######    'xaxis': ' Fat_Jet_Eta [GeV]',
######    'fold': 0,
######}
#####
###### variables['resolv_btagPt'] = {
######     'name': 'btagJetPt_resolv[0]',
######     'range': (30, 0.0, 150.0),
######     'xaxis': 'highest p_{T} of b-tagged jet [GeV]',
######     'fold': 3,
######     'cuts': resolved,
###### }
###### variables['boost_btagPt'] = {
######     'name': 'btagJetPt_boost[0]',
######     'range': (30, 0.0, 150.0),
######     'xaxis': 'highest p_{T} of b-tagged jet [GeV]',
######     'fold': 3,
######     'cuts': boosted,
###### }
#####
###### variables['WvsQCD_tau'] = {
######     'name': 'Alt$(FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[HM_CleanFatJetPassMBoosted_CFatJetIdx[0]]], -1)',
######     'range': (40, 0.0, 1.0),
######     'xaxis': 'WvsQCD DNN score',
######     'fold': 0
###### }
###### variables['WvsQCD_notau'] = {
######     'name': 'Alt$(FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[(int)idxCleanFatJetW]], -1)',
######     'range': (40, 0.0, 1.0),
######     'xaxis': 'WvsQCD DNN score',
######     'fold': 0
###### }
######
###### variables['WvsQCD_tau_MD'] = {
######     'name': 'Alt$(FatJet_deepTagMD_WvsQCD[CleanFatJet_jetIdx[HM_CleanFatJetPassMBoosted_CFatJetIdx[0]]], -1)',
######     'range': (40, 0.0, 1.0),
######     'xaxis': 'WvsQCD MD DNN score',
######     'fold': 0
###### }
###### variables['WvsQCD_notau_MD'] = {
######     'name': 'Alt$(FatJet_deepTagMD_WvsQCD[CleanFatJet_jetIdx[(int)idxCleanFatJetW]], -1)',
######     'range': (40, 0.0, 1.0),
######     'xaxis': 'WvsQCD MD DNN score',
######     'fold': 0
###### }
#####
###variables['tau21'] = {
###   'name': 'Alt$(CleanFatJet_tau21[0], 999)',
###   'range': (40, 0.0, 1.0),
###   'xaxis': 'tau_{21}',
###   'fold': 3
###}
###### variables['tau21DDT'] = {
######     'name': 'tau21DDT[0]',
######     'range': (40, 0.0, 1.0),
######     'xaxis': 'tau_{21} DDT',
######     'fold': 3
###### }
######
######
###### variables['bVeto'] = {
######     'name': 'bVeto[0]',
######     'range': (2, -0.5, 1.5),
######     'xaxis': 'bVeto',
######     'fold': 0
###### }
###### variables['boostWptOvHM'] = {
######     'name': 'Alt$(HM_CleanFatJetPassMBoosted_WptOvHfatM[0], 0)',
######     'range': (40, 0.0, 1.0),
######     'xaxis': 'Wpt / m_H',
######     'fold': 3
###### }
###### variables['resolvWptOvHM'] = {
######     'name': 'HM_WptOvHak4M',
######     'range': (40, 0.0, 1.0),
######     'fold': 3
###### }
###### variables['idxCleanFatJetW'] = {
######     'name': 'idxCleanFatJetW',
######     'range': (6, -1.5, 4.5),
######     'xaxis': 'idx'
###### }
#####
###### variables['WlepPT'] = {
######     'name': 'TMath::Sqrt( TMath::Power(Lepton_pt[0], 2) + TMath::Power(PuppiMET_pt, 2) + 2*Lepton_pt[0]*PuppiMET_pt*TMath::Cos(Lepton_phi[0]-PuppiMET_phi) )',
######     'range': (20, 0.0, 400.0),
######     'xaxis': 'Wlep pT',
######     'fold': 3
###### }
#####
###### variables['boostHiggsMT'] = {
######     'name' : 'boostHiggsMT[0]',
######     'range': (24, 0, 1200),
######     'xaxis': 'reconstr. H mt',
######     'fold' : 3
###### }
###### variables['resolvHiggsMT'] = {
######     'name' : 'resolvHiggsMT[0]',
######     'range': (24, 0, 1200),
######     'xaxis': 'reconstr. H mt',
######     'fold' : 3
###### }
###### variables['dnnHiggsMT'] = {
######     'name' : 'DNN_mth_OTF[0]',
######     'range': (24, 0, 1200),
######     'xaxis': 'DNN H mt',
######     'fold' : 3
###### }
#####
####variables['nCleanJet'] = {
####    'name' : 'Sum$(CleanJet_pt>30)',
####    'range': ([0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11],),
####    'xaxis': 'nCleanJet',
####    'fold' : 0
####}
####variables['nCleanFatJet'] = {
####    'name' : 'nCleanFatJet',
####    'range': ([0, 1, 2, 3, 4, 5],),
####    'xaxis': 'nCleanFatJet',
####    'fold' : 0
####}
