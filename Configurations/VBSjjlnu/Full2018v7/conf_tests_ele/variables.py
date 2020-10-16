# ## variabeadines
import numpy as np
## variabeadines
from itertools import chain



# variables['events']  = {   'name': '1',      
#                         'range' : (1,0,2),  
#                         'xaxis' : 'events', 
#                         'fold' : 3
#                         }


# variables['jet_1_pt'] = {   'name': 'CleanJet_pt[0]',      
#                         'range' : (40,30,500),  
#                         'xaxis' : 'Jet 1 Pt', 
#                         'fold' : 3
#                         } 

# variables['jet_2_pt'] = {   'name': 'CleanJet_pt[1]',      
#                         'range' : (30,30,300),  
#                         'xaxis' : 'Jet 2 Pt', 
#                         'fold' : 3
# } 

# variables['jet_3_pt'] = {   'name': 'CleanJet_pt[2]',      
#                         'range' : (30,30,300),  
#                         'xaxis' : 'Jet 3 Pt', 
#                         'fold' : 3
# } 

# variables['jet_4_pt'] = {   'name': 'CleanJet_pt[3]',      
#                         'range' : (30,30,300),  
#                         'xaxis' : 'Jet 4 Pt', 
#                         'fold' : 3
# }

# variables['jet_1_eta'] = {   'name': 'abs(CleanJet_eta[0])',      
#                         'range' : (40,0,5),  
#                         'xaxis' : 'Jet 1 Pt', 
#                         'fold' : 3
#                         } 

# variables['jet_2_eta'] = {   'name': 'abs(CleanJet_eta[1])',      
#                         'range' : (40,0,5),  
#                         'xaxis' : 'Jet 2 Eta', 
#                         'fold' : 3
# } 

# variables['jet_3_eta'] = {   'name': 'abs(CleanJet_eta[2])',      
#                         'range' : (40,0,5),  
#                         'xaxis' : 'Jet 3 Eta', 
#                         'fold' : 3
# } 

# variables['jet_4_eta'] = {   'name': 'abs(CleanJet_eta[3])',      
#                         'range' : (40,0,5),  
#                         'xaxis' : 'Jet 4 Eta', 
#                         'fold' : 3
# }



# variables['Zlep'] = {   'name': 'Zlep',      
#                         'range' : (40,-1.5,1.5),  
#                         'xaxis' : 'Zepp. lepton', 
#                         'fold' : 3
#                         }





# variables['electron_eta_abs'] = {   'name': 'abs(Lepton_eta[0])',      
#                         'range' : (60,0,2.5),  
#                         'xaxis' : 'Electron #eta', 
#                         'fold' : 3
#                         }


variables['electron_eta'] = {   'name': 'Lepton_eta[0]',      
                        'range' : (60,-2.5,2.5),  
                        'xaxis' : 'Electron #eta', 
                        'fold' : 3
                        }


# variables['electron_phi'] = {   'name': 'Lepton_phi[0]',      
#                         'range' : (50,-3.14,3.14),  
#                         'xaxis' : 'Electron #phi', 
#                         'fold' : 3
#                         }

# variables['electron_etaphi'] = {   'name': 'Lepton_eta[0]:Lepton_phi[0]',      
#                         'range' : (20,-3.14,3.14, 20, -2.5 , 2.5),  
#                         'xaxis' : 'Electron #phi', 
#                         'fold' : 3
#                         }

# variables['electron_etaphi_EB'] = {   'name': 'Lepton_eta[0]:Lepton_phi[0]',      
#                         'range' : (20,-3.14,3.14, 20, -1.49 , 1.49),  
#                         'xaxis' : 'Electron #eta : #phi in EB', 
#                         'fold' : 0
#                         }

# variables['electron_etaphi_EE'] = {   'name': 'abs(Lepton_eta[0]):Lepton_phi[0]',      
#                         'range' : (20,-3.14,3.14, 20, 1.49, 2.5),  
#                         'xaxis' : 'Electron #eta : #phi in EE', 
#                         'fold' : 0
#                         }

# variables['electron_eta_zoom'] = {   'name': 'abs(Lepton_eta[0])',      
#                         'range' : (20,2,2.5),  
#                         'xaxis' : 'Electron #eta', 
#                         'fold' : 3
#                         }


# variables['electron_pt'] = {   'name': 'Lepton_pt[0]',      
#                         'range' : (50,35,150),  
#                         'xaxis' : 'Electron pt', 
#                         'fold' : 3
#                         } 


# variables['Electron_deltaEtaSC'] = { 'name': 'Electron_deltaEtaSC[Lepton_electronIdx[0]]',
#                                     'range' : (30,-0.1,0.1),  
#                                     'xaxis' : 'Electron #Delta#eta SuperCluster', 
#                                     'fold' : 3
#                         }    


# variables['Electron_dxy'] = { 'name': 'Electron_dxy[Lepton_electronIdx[0]]',
#                                     'range' : (40,-0.05,0.05),  
#                                     'xaxis' : 'Electron dxy', 
#                                     'fold' : 3
#                         }    

# variables['Electron_dxyErr'] = { 'name': 'Electron_dxyErr[Lepton_electronIdx[0]]',
#                                     'range' : (50,0,4),  
#                                     'xaxis' : 'Electron dxy Error in cm', 
#                                     'fold' : 3
#                         }    


# variables['Electron_dzErr'] = { 'name': 'Electron_dzErr[Lepton_electronIdx[0]]',
#                                     'range' : (50,0,4),  
#                                     'xaxis' : 'Electron dz Err in cm', 
#                                     'fold' : 3
#                         }     

# variables['Electron_eInvMinusPInv'] = { 'name': 'Electron_eInvMinusPInv[Lepton_electronIdx[0]]',
#                                     'range' : (40,-0.025,0),  
#                                     'xaxis' : 'Electron 1/E_SC - 1/p_trk', 
#                                     'fold' : 3
#                         }    

# variables['Electron_energyErr'] = { 'name': 'Electron_energyErr[Lepton_electronIdx[0]]',
#                                     'range' : (50,0,50),  
#                                     'xaxis' : 'Energy error of the cluster-track combination', 
#                                     'fold' : 3
#                         }   

# variables['Electron_hoe'] = { 'name': 'Electron_hoe[Lepton_electronIdx[0]]',
#                                     'range' : (60,0,0.08),  
#                                     'xaxis' : 'Electron H over E', 
#                                     'fold' : 3
#                         }    

# # variables['Electron_jetPtRelv2'] = { 'name': 'Electron_jetPtRelv2[0]',
# #                                     'range' : (50,0,60),  
# #                                     'xaxis' : 'Rel. lep Pt wrt closest jet after lep subtract.', 
# #                                     'fold' : 3
# #                         }    

# variables['Electron_lostHits'] = { 'name': 'Electron_lostHits[Lepton_electronIdx[0]]',
#                                     'range' : (8,0,2),  
#                                     'xaxis' : 'Electron Lost hits', 
#                                     'fold' : 3
#                         }    


# variables['Electron_pfRelIso03_all'] = { 'name': 'Electron_pfRelIso03_all[Lepton_electronIdx[0]]',
#                                     'range' : (60,0,0.2),  
#                                     'xaxis' : 'PF relative iso R=0.3', 
#                                     'fold' : 3
#                         }    

# variables['Electron_pfRelIso03_chg'] = { 'name': 'Electron_pfRelIso03_chg[Lepton_electronIdx[0]]',
#                                     'range' : (60,0,0.2),  
#                                     'xaxis' : 'PF relative iso R=0.3, charged', 
#                                     'fold' : 3
#                         } 

# variables['Electron_r9'] = { 'name': 'Electron_r9[Lepton_electronIdx[0]]',
#                                     'range' : (40,0.2,1),  
#                                     'xaxis' : 'Electron R9', 
#                                     'fold' : 3
#                         } 


# variables['Electron_sieie'] = { 'name': 'Electron_sieie[Lepton_electronIdx[0]]',
#                                     'range' : (40,0,0.03),  
#                                     'xaxis' : 'Sigma iEtaiEta supercluster full5x5', 
#                                     'fold' : 3
#                         } 
 
# variables['Electron_ip3d'] = { 'name': 'Electron_ip3d[Lepton_electronIdx[0]]',
#                                     'range' : (50,0,10),  
#                                     'xaxis' : '3D impact parameter wrt first PV, in cm', 
#                                     'fold' : 3
#                         } 

  
variables['Electron_sip3d'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]',
                                    'range' : (50,0,20),  
                                    'xaxis' : '3D impact parameter significance wrt first PV', 
                                    'fold' : 3
                        } 

 
  
variables['Electron_sip3d_zoom'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]',
                                    'range' : (30,0,3),  
                                    'xaxis' : '3D impact parameter significance wrt first PV', 
                                    'fold' : 0
                        } 



# variables['eta_sip3d'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]:abs(Electron_eta[Lepton_electronIdx[0]])',
#                                     'range' : (20, 0, 2.5, 25,0,5),  
#                                     'xaxis' : 'Sip3d : |eta|', 
#                                     'fold' : 0
#                         } 


variables['eta_sip3d_EB'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]:abs(Electron_eta[Lepton_electronIdx[0]])',
                                    'range' : (10, 0, 1.49, 25,0,5),  
                                    'xaxis' : 'Sip3d : |eta|', 
                                    'fold' : 0
                        } 

variables['eta_sip3d_EE'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]:abs(Electron_eta[Lepton_electronIdx[0]])',
                                    'range' : (10, 1.49, 2.5, 25,0,5),  
                                    'xaxis' : 'Sip3d : |eta|', 
                                    'fold' : 0
                        } 


variables['eta_sip3d_less'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]:abs(Electron_eta[Lepton_electronIdx[0]])',
                                    'range' : (10, 0, 2.5, 25,0,5),  
                                    'xaxis' : 'Sip3d : |eta|', 
                                    'fold' : 0
                        } 


variables['eta_sip3d_EB_less'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]:abs(Electron_eta[Lepton_electronIdx[0]])',
                                    'range' : (5, 0, 1.49, 25,0,5),  
                                    'xaxis' : 'Sip3d : |eta|', 
                                    'fold' : 0
                        } 

variables['eta_sip3d_EE_less'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]:abs(Electron_eta[Lepton_electronIdx[0]])',
                                    'range' : (5, 1.49, 2.5, 25,0,5),  
                                    'xaxis' : 'Sip3d : |eta|', 
                                    'fold' : 0
                        } 


# variables['PV_chi2'] = {   'name': 'PV_chi2',
#                         'range' : (40,0.3,1.3),  
#                         'xaxis' : 'PV chi2', 
#                         'fold' : 3
# }
        
variables['goodNvtx'] = {   'name': 'PV_npvsGood',
                        'range' : (100,0,100),  
                        'xaxis' : 'Number of good PVs', 
                        'fold' : 3
}

# variables['PV_score'] = {   'name': 'log10(PV_score)',
#                         'range' : (50,2,10),  
#                         'xaxis' : 'log10(PV score). i.e. sum pt2 of clustered objects', 
#                         'fold' : 3
# }

# variables['PV_score_zoom'] = {   'name': 'log10(PV_score)',
#                         'range' : (50,2,6),  
#                         'xaxis' : 'log10(PV score) i.e. sum pt2 of clustered objects', 
#                         'fold' : 0
# }

# variables['HT'] = {'name': "MET_sumEt",
#                 'range' : (60,0,4000),  
#                 'xaxis' : 'Sum of Et', 
#                 'fold' : 3

#  }

        

# #MET
# variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
#                         'range' : (30,30,300),  
#                         'xaxis' : 'PuppiMET_pt', 
#                         'fold' : 3
#                         }


# variables['PuppiMET_phi'] = {   'name': 'PuppiMET_phi',      
#                         'range': (30,-3.14, 3.14),  
#                         'xaxis' : 'PuppiMET #phi', 
#                         'fold' : 3
#                         }


# #jets 
# variables['nJets'] = {   'name': 'Sum$(CleanJet_pt >= 30)',      
#                         'range' : (6,4,10),  
#                         'xaxis' : 'nJets >= 30 GeV', 
#                         'fold' : 3
#                         }


# variables['nvtx'] = {  'name': 'PV_npvs',
#                         'range': (100, 0,100),
#                         'xaxis': 'N. primary vertices',
#                         'fold': 3
#                 }


variables['ele_dz_err'] = {  'name': 'Electron_dzErr[Lepton_electronIdx[0]] ',
                        'range': (50,0, 0.5),
                        'xaxis': 'dZ uncertainty',
                        'fold': 3
                }

variables['Electron_dz'] = { 'name': 'Electron_dz[Lepton_electronIdx[0]]',
                                    'range' : (40,-0.2, 0.2),  
                                    'xaxis' : 'Electron dz', 
                                    'fold' : 3
                        }   

variables['nOtherPV'] = {  'name': 'nOtherPV',
                        'range': (4, 0, 4),
                        'xaxis': 'nOther primary vertex',
                        'fold': 3
                        }

##############################

variables['otherPV0_dz'] = {  'name': 'otherPV_dz0',
                        'range': (50, -0.3,0.3),
                        'xaxis': 'dZ from 1st other PV',
                        'fold': 3
                }

variables['otherPV1_dz'] = {  'name': 'otherPV_dz1',
                        'range': (60, -0.4,0.4),
                        'xaxis': 'dZ from 2nd other PV',
                        'fold': 0
                }

variables['otherPV2_dz'] = {  'name': 'otherPV_dz2',
                        'range': (60, -0.4,0.4),
                        'xaxis': 'dZ from 3rd other PV',
                        'fold': 0
                }


# variables['otherPV3_dz'] = {  'name': 'otherPV_dz3',
#                         'range': (60, -0.4,0.4),
#                         'xaxis': 'dZ from 4th other PV',
#                         'fold': 0
#                 }
#####################
#ratio

variables['otherPV0_ratio'] = {  'name': 'abs(otherPV_dz0) /  abs(Electron_dz[Lepton_electronIdx[0]])',
                        'range': (60, 0, 3),
                        'xaxis': 'dZ from 1st other PV / dZ',
                        'fold': 0
                }

variables['otherPV0_ratio_zoom'] = {  'name': 'abs(otherPV_dz0) /  abs(Electron_dz[Lepton_electronIdx[0]])',
                        'range': (60, 0.5, 1.5),
                        'xaxis': 'dZ from 1st other PV / dZ',
                        'fold': 0
                }

variables['otherPV1_ratio'] = {  'name': 'abs(otherPV_dz1) /  abs(Electron_dz[Lepton_electronIdx[0]])',
                        'range': (50, 0, 3),
                        'xaxis': 'dZ from 2nd other PV / dZ',
                        'fold': 3
                }

variables['otherPV2_ratio'] = {  'name': 'abs(otherPV_dz2) /  abs(Electron_dz[Lepton_electronIdx[0]])',
                        'range': (50, 0, 3),
                        'xaxis': 'dZ from 3rd other PV / dZ',
                        'fold': 3
                }


# variables['otherPV3_ratio'] = {  'name': 'abs(otherPV_dz3) /  abs(Electron_dz[Lepton_electronIdx[0]])',
#                         'range': (60, 0, 3),
#                         'xaxis': 'dZ from 4th other PV / dZ',
#                         'fold': 0
#                 }

##################

variables['otherPV0_ratio_eledz'] = {  'name': 'abs(otherPV_dz0) / abs(Electron_dz[Lepton_electronIdx[0]]):abs(Electron_dz[Lepton_electronIdx[0]])',
                        'range': (6,0,0.1, 6, 0.5,1.5),
                        'xaxis': 'dZ (other 1th PV) ratio: main PV dz',
                        'fold': 0
                }

variables['otherPV1_ratio_eledz'] = {  'name': 'abs(otherPV_dz1) / abs(Electron_dz[Lepton_electronIdx[0]]):abs(Electron_dz[Lepton_electronIdx[0]])',
                        'range': (6,0,0.1, 6,0,3),
                        'xaxis': 'dZ (other 2nd PV) ratio: main PV dz',
                        'fold': 0
                }

variables['otherPV2_ratio_eledz'] = {  'name': 'abs(otherPV_dz2) / abs(Electron_dz[Lepton_electronIdx[0]]):abs(Electron_dz[Lepton_electronIdx[0]])',
                        'range': (6,0,0.1, 6,0,3),
                        'xaxis': 'dZ (other 3rd PV) ratio: main PV dz',
                        'fold': 0
                }

# variables['otherPV3_ratio_eledz'] = {  'name': 'abs(otherPV_dz3) / abs(Electron_dz[Lepton_electronIdx[0]]):abs(Electron_dz[Lepton_electronIdx[0]])',
#                         'range': (6,0,0.1, 6,0,3),
#                         'xaxis': 'dZ (other 4th PV) ratio: main PV dz',
#                         'fold': 0
#                 }

#######################################################

variables['otherPV0_eledz'] = {  'name': 'abs(otherPV_dz0):abs(Electron_dz[Lepton_electronIdx[0]])',
                        'range': (6,0,0.2, 6, 0,0.2),
                        'xaxis': 'dZ (oter 1th PV): main PV dz',
                        'fold': 0
                }

variables['otherPV1_eledz'] = {  'name': 'abs(otherPV_dz1):abs(Electron_dz[Lepton_electronIdx[0]])',
                        'range': (6,0,0.2, 6,0,0.2),
                        'xaxis': 'dZ (other 2nd PV): main PV dz',
                        'fold': 0
                }

variables['otherPV2_eledz'] = {  'name': 'abs(otherPV_dz2):abs(Electron_dz[Lepton_electronIdx[0]])',
                        'range': (6,0,0.2, 6,0,0.2),
                        'xaxis': 'dZ (other 3rd PV): main PV dz',
                        'fold': 0
                }

# variables['otherPV3_eledz'] = {  'name': 'abs(otherPV_dz3):abs(Electron_dz[Lepton_electronIdx[0]])',
#                         'range': (6,0,0.2, 6,0,0.2),
#                         'xaxis': 'dZ (other 4th PV) ratio: main PV dz',
#                         'fold': 0
#                 }


######################################################

variables['otherPV0_sip3d'] = {  'name': 'abs(otherPV_dz0):Electron_sip3d[Lepton_electronIdx[0]]',
                        'range': (10,0,5, 10,0,0.2 ),
                        'xaxis': 'dZ (other 1th PV): Sip3d',
                        'fold': 3
                }

variables['otherPV1_sip3d'] = {  'name': 'abs(otherPV_dz1):Electron_sip3d[Lepton_electronIdx[0]]',
                        'range': (10,0,5, 10,0,0.2 ),
                        'xaxis': 'dZ (other 2nd PV): Sip3d',
                        'fold': 3
                }

variables['otherPV2_sip3d'] = {  'name': 'abs(otherPV_dz2):Electron_sip3d[Lepton_electronIdx[0]]',
                        'range': (10,0,5, 10,0,0.2 ),
                        'xaxis': 'dZ (other 3rd PV): Sip3d',
                        'fold': 3
                }

######################################################

variables['otherPV0_ratio_sip3d_zoom'] = {  'name': 'abs(otherPV_dz0)/ abs(Electron_dz[Lepton_electronIdx[0]]):Electron_sip3d[Lepton_electronIdx[0]]',
                        'range': ( 10,0,5, 20,0.5,1.5),
                        'xaxis': 'dZ (other 1th PV) ratio: Sip3d',
                        'fold': 3
                }

variables['otherPV1_ratio_sip3d_zoom'] = {  'name': 'abs(otherPV_dz1)/ abs(Electron_dz[Lepton_electronIdx[0]]):Electron_sip3d[Lepton_electronIdx[0]]',
                        'range': ( 10,0,5, 20,0.5,1.5),
                        'xaxis': 'dZ (other 2nd PV) ratio: Sip3d',
                        'fold': 3
                }


variables['otherPV0_ratio_sip3d'] = {  'name': 'abs(otherPV_dz0)/ abs(Electron_dz[Lepton_electronIdx[0]]):Electron_sip3d[Lepton_electronIdx[0]]',
                        'range': ( 10,0,10, 20,0.5,1.5),
                        'xaxis': 'dZ (other 1th PV) ratio: Sip3d',
                        'fold': 3
                }

variables['otherPV1_ratio_sip3d'] = {  'name': 'abs(otherPV_dz1)/ abs(Electron_dz[Lepton_electronIdx[0]]):Electron_sip3d[Lepton_electronIdx[0]]',
                        'range': ( 10,0,10, 20,0.5,1.5),
                        'xaxis': 'dZ (other 2nd PV) ratio: Sip3d',
                        'fold': 3
                
                }

#########################
variables['otherPV0_ratio_sip3d_zoom_lessbins'] = {  'name': 'abs(otherPV_dz0)/ abs(Electron_dz[Lepton_electronIdx[0]]):Electron_sip3d[Lepton_electronIdx[0]]',
                        'range': ( 10,0,5, 10,0.5,1.5),
                        'xaxis': 'dZ (other 1th PV) ratio: Sip3d',
                        'fold': 3
                }

variables['otherPV1_ratio_sip3d_zoom_lessbins'] = {  'name': 'abs(otherPV_dz1)/ abs(Electron_dz[Lepton_electronIdx[0]]):Electron_sip3d[Lepton_electronIdx[0]]',
                        'range': ( 10,0,5, 10,0.5,1.5),
                        'xaxis': 'dZ (other 2nd PV) ratio: Sip3d',
                        'fold': 3
                }


variables['otherPV0_ratio_sip3d_lessbins'] = {  'name': 'abs(otherPV_dz0)/ abs(Electron_dz[Lepton_electronIdx[0]]):Electron_sip3d[Lepton_electronIdx[0]]',
                        'range': ( 10,0,10, 10,0.5,1.5),
                        'xaxis': 'dZ (other 1th PV) ratio: Sip3d',
                        'fold': 3
                }

variables['otherPV1_ratio_sip3d_lessbins'] = {  'name': 'abs(otherPV_dz1)/ abs(Electron_dz[Lepton_electronIdx[0]]):Electron_sip3d[Lepton_electronIdx[0]]',
                        'range': ( 10,0,10, 10,0.5,1.5),
                        'xaxis': 'dZ (other 2nd PV) ratio: Sip3d',
                        'fold': 3
                }
########################################

variables['otherPV0_ratio_mainScore'] = {  'name': 'abs(otherPV_dz0)/abs(Electron_dz[Lepton_electronIdx[0]]):log10(PV_score)',
                        'range': (10,2,6, 10,0.5,1.5),
                        'xaxis': 'dZ (other 1th PV): main PV score',
                        'fold': 3
                }

variables['otherPV1_ratio_mainScore'] = {  'name': 'abs(otherPV_dz1)/abs(Electron_dz[Lepton_electronIdx[0]]):log10(PV_score)',
                        'range': (10,2,6, 10,0.5,1.5),
                        'xaxis': 'dZ (other 2nd PV): main PV score',
                        'fold': 3
                }

# variables['otherPV2_ratio_mainScore'] = {  'name': 'abs(otherPV_dz2)/abs(Electron_dz[Lepton_electronIdx[0]]):log10(PV_score):log10(PV_score)',
#                         'range': (6,2,6, 6, 0, 0.3),
#                         'xaxis': 'dZ (other 3rd PV): main PV score',
#                         'fold': 3
#                 }

# variables['otherPV3_mainScore'] = {  'name': 'abs(otherPV_dz3):log10(PV_score):log10(PV_score)',
#                         'range': (6,2,6, 6, 0, 0.3),
#                         'xaxis': 'dZ (other 4th PV): main PV score',
#                         'fold': 0
#                 }
