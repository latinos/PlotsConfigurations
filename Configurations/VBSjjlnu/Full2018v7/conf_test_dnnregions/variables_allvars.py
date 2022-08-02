
##############################################
# now variables to plot
# Include also variables to be plotted

res_cuts = [ c for c in cuts if 'res' in c]
boost_cuts = [ c for c in cuts if 'boost' in c]


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

# # #leptons

variables['Lepton_eta_abs'] = {   'name': 'abs(Lepton_eta[0])',      
                        'range' : (40,0,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }

variables['Lepton_eta'] = {   'name': 'Lepton_eta[0]',      
                        'range' : (50,-2.5,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }


variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (40,0,500),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 3
                        }    

variables['Lepton_pt_zoom'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (40,0,200),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 3
                        }   

# #delta angles between the VBS jets
variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (18,2.5,9),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        }    


variables['deltaphi_vbs'] = {   'name': 'deltaphi_vbs',      
                        'range' : (30,0,3.14),  
                        'xaxis' : '#Delta#phi VBS jets', 
                        'fold' : 3
                        }

# variables['deltaphi_lepnu'] = {   'name': 'deltaphi_lep_nu',      
#                         'range' : (30,0,3.14),  
#                         'xaxis' : '#Delta#phi lepton neutrino', 
#                         'fold' : 3
#                         }

variables['deltaeta_vjet'] = {   'name': 'deltaeta_vjet',      
                        'range' : (25,0,5),  
                        'xaxis' : '#Delta#eta V jets', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }   

variables['deltaphi_vjet'] = {   'name': 'deltaphi_vjet',      
                        'range' : (30,0,3.14),  
                        'xaxis' : '#Delta#phi Vjet jets', 
                        'fold' : 3
                        }

#MET
variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
                        'range' : (40,30,300),  
                        'xaxis' : 'PuppiMET_pt', 
                        'fold' : 3
                        }

variables['PuppiMET_phi'] = {   'name': 'PuppiMET_phi',      
                        'range' : (30,-3.14,3.14),  
                        'xaxis' : 'PuppiMET_phi', 
                        'fold' : 3
                        }

variables['recoMET_pz'] = {   'name': 'recoMET_pz',      
                        'range' : (40,0,300),  
                        'xaxis' : 'reco neutrino pz', 
                        'fold' : 3
                        }


# # VBS vars
variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
                        'range' : (50,200,4000) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        'blind':  [1500,4000]
}


variables['vbs_0_pt_res'] = {   'name': 'vbs_0_pt',      
                        'range' : (40,50,400),  
                        'xaxis' : 'leading VBS jet pt', 
                        'fold' : 3, 
                        'cuts': res_cuts
                        }


variables['vbs_0_pt_boost'] = {   'name': 'vbs_0_pt',      
                        'range' : (50,50,600),  
                        'xaxis' : 'leading VBS jet pt', 
                        'fold' : 3, 
                        'cuts': boost_cuts
                        }


variables['vbs_1_pt'] = {   'name': 'vbs_1_pt',      
                        'range' : (40,30,400),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3
                        } 


variables['vjet_0_pt'] = {   'name': 'vjet_0_pt',      
                        'range' : (40,30,400),  
                        'xaxis' : 'leading V-jet pt', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }


variables['vjet_1_pt'] = {   'name': 'vjet_1_pt',      
                        'range' : (40,30,400),  
                        'xaxis' : 'trailing V-jet pt', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }


variables['Mtw_lep'] = {   'name': 'Mtw_lep',      
                        'range' : (40,0,185),  
                        'xaxis' : 'Mass T W leptonic', 
                        'fold' : 3
                        }


variables['whad_pt_res'] = {
            'name': "w_had_pt",
            'range': (30, 0, 200),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts': res_cuts
}

variables['whad_pt_boost'] = {
            'name': "w_had_pt",
            'range': (40, 200, 900),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts': boost_cuts
}


variables['mjj_vjet'] = {   'name': 'mjj_vjet',      
                        'range' : (60,40,200),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3
                        }

variables['mjj_vjet_res_sig'] = {   'name': 'mjj_vjet',      
                        'range' : (30,65,105),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts': ['res_sig_ele','res_sig_mu']
                        }

variables['mjj_vjet_boost_sig'] = {   'name': 'mjj_vjet',      
                        'range' : (30,70,115),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts': ['boost_sig_ele','boost_sig_mu']
                        }

variables['vjet_0_eta'] = {   'name': 'vjet_0_eta',      
                        'range' : (40,-5,5),  
                        'xaxis' : 'leading Vjet #eta', 
                        'fold' : 3
                        }

variables['vjet_1_eta'] = {   'name': 'vjet_1_eta',      
                        'range' : (40,-5,5),  
                        'xaxis' : 'trailing Vjet #eta', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }

variables['vjet_0_eta_abs'] = {   'name': 'abs(vjet_0_eta)',      
                        'range' : (30,0,5),  
                        'xaxis' : 'leading Vjet #eta', 
                        'fold' : 3
                        }

variables['vjet_1_eta_abs'] = {   'name': 'abs(vjet_1_eta)',      
                        'range' : (30,0,5),  
                        'xaxis' : 'trailing Vjet #eta', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }


# # #
variables['vbs_0_eta'] = {   'name': 'vbs_0_eta',      
                        'range' : (40,-5,5),  
                        'xaxis' : 'leading VBS jet #eta', 
                        'fold' : 3
                        }

variables['vbs_1_eta'] = {   'name': 'vbs_1_eta',      
                        'range' : (40,-5,5),  
                        'xaxis' : 'trailing VBS jet #eta', 
                        'fold' : 3
                        }

variables['vbs_0_eta_abs'] = {   'name': 'abs(vbs_0_eta)',      
                        'range' : (30,0,5),  
                        'xaxis' : 'leading VBS jet #eta', 
                        'fold' : 3
                        }

variables['vbs_1_eta_abs'] = {   'name': 'abs(vbs_1_eta)',      
                        'range' : (30,0,5),  
                        'xaxis' : 'trailing VBS jet #eta', 
                        'fold' : 3
                        }


variables['Zlep'] = {   'name': 'Zlep',      
                        'range' : (50,-1.1,1.1),  
                        'xaxis' : 'Zepp. lepton', 
                        'fold' : 3
                        }


#jets 
variables['nJets'] = {   'name': 'nJets30',      
                        'range' : (8,2,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3
                        }


# # #Zvjets_high
variables['Zvjets_0'] = {   'name': 'Zvjets_0',      
                        'range' : (50,-1.1,1.1),  
                        'xaxis' : 'Zep. leading V-jet ', 
                        'fold' : 3
                        }

# variables['Zvjets_1'] = {   'name': 'Zvjets_1',      
#                         'range' : (30,-3,3),  
#                         'xaxis' : 'Zep. trailing V-jet ', 
#                         'fold' : 3
#                         }


# # #Asym
variables['Asym_vbs'] = {   'name': 'Asym_vbs',      
                        'range' : (30,0,1),  
                        'xaxis' : 'Pt asymmetry VBS jets', 
                        'fold' : 3
                        }

# variables['Asym_vjet'] = {   'name': 'Asym_vjet',      
#                         'range' : (30,0,1),  
#                         'xaxis' : 'Pt asymmetry V-jets', 
#                         'fold' : 3
#                         }

 
# variables['Mw_lep_reco'] = {   'name': 'Mw_lep',      
#                         'range' : (40,0,250),  
#                         'xaxis' : 'Mass W leptonic', 
#                         'fold' : 3
#                         }

variables['w_lep_pt'] = {   'name': 'w_lep_pt',      
                        'range' : (40,0,600),  
                        'xaxis' : 'Pt W leptonic', 
                        'fold' : 3
                        }

variables['Mww'] = {   'name': 'Mww',      
                        'range' : (30,0,2000),  
                        'xaxis' : 'Mww', 
                        'fold' : 3,
                         'blind': [1000,2000]
                        }

# variables['R_ww'] = {   'name': 'R_ww',      
#                         'range' : (30,0,80),  
#                         'xaxis' : 'R_ww', 
#                         'fold' : 3
#                         }

# variables['R_mw'] = {   'name': 'R_mw',      
#                         'range' : (30,0,0.6),  
#                         'xaxis' : 'R_mw', 
#                         'fold' : 3
#                         }

# variables['A_ww'] = {   'name': 'A_ww',      
#                         'range' : (30,0,1.1),  
#                         'xaxis' : 'A_ww', 
#                         'fold' : 3
#                         }

#Centrality variables
variables['Centr_vbs'] = {   'name': 'Centr_vbs',      
                        'range' : (30,0,3),  
                        'xaxis' : 'VBS centrality', 
                        'fold' : 3
                        }

variables['Centr_ww'] = {   'name': 'Centr_ww',      
                        'range' : (40,-4,4),  
                        'xaxis' : 'W boson centrality', 
                        'fold' : 3
                        }


variables['nvtx_good'] = {  'name': 'PV_npvsGood',
                        'range': (100, 0,100),
                        'xaxis': 'N. primary vertices (good)',
                        'fold': 3
                }

# #######
# # QGL vars 

# # variables['vbs_0_qgl_boost'] = {  'name': 'vbs_0_qgl_boost',
# #                         'range': (40,0.,1.),
# #                         'xaxis': 'Qgl VBS 0 jet',
# #                         'fold': 3,
# #                         'cuts': boost_cuts
# #                 }

# # variables['vbs_1_qgl_boost'] = {  'name': 'vbs_1_qgl_boost',
# #                         'range': (40,0.,1.),
# #                         'xaxis': 'Qgl VBS 1 jet',
# #                         'fold': 3,
# #                         'cuts': boost_cuts
# #                 }

# # variables['vbs_0_qgl_res'] = {  'name': 'vbs_0_qgl_res',
# #                         'range': (40,0.,1.),
# #                         'xaxis': 'Qgl VBS 0 jet',
# #                         'fold': 3,
# #                         'cuts': res_cuts
# #                 }

# # variables['vbs_1_qgl_res'] = {  'name': 'vbs_1_qgl_res',
# #                         'range': (40,0.,1.),
# #                         'xaxis': 'Qgl VBS 1 jet',
# #                         'fold': 3,
# #                         'cuts': res_cuts
# #                 }

# # variables['vjet_0_qgl_res'] = {  'name': 'vjet_0_qgl_res',
# #                         'range': (40,0.,1.),
# #                         'xaxis': 'Qgl Vjet 0 jet',
# #                         'fold': 3,
# #                         'cuts': res_cuts
# #                 }

# # variables['vjet_1_qgl_res'] = {  'name': 'vjet_1_qgl_res',
# #                         'range': (40,0.,1.),
# #                         'xaxis': 'Qgl Vjet 1 jet',
# #                         'fold': 3,
# #                         'cuts': res_cuts
# #                 }



# #######
# # QGL vars  morphed

variables['vbs_0_qgl_boost'] = {  'name': 'vbs_0_qgl_boost',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_1_qgl_boost'] = {  'name': 'vbs_1_qgl_boost',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 1 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_0_qgl_res'] = {  'name': 'vbs_0_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vbs_1_qgl_res'] = {  'name': 'vbs_1_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_0_qgl_res'] = {  'name': 'vjet_0_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl Vjet 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_1_qgl_res'] = {  'name': 'vjet_1_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl Vjet 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }


#############
# variables['vbs_jets_pt'] = {  'name': 'tag_jets_systems_pt[0]',
#                         'range': (40,0.,600),
#                         'xaxis': 'Pt of VBS jets system',
#                         'fold': 3
#                 }


############ WV system variables

  
# aliases['deltaphi_WV']= { 'expr': 'angular_vars[0]'}
# aliases['theta_Vhad']= { 'expr': 'angular_vars[1]'}
# aliases['theta_lep']= { 'expr': 'angular_vars[2]'}
# aliases['theta_vjet_0']= { 'expr': 'angular_vars[3]'}
# aliases['theta_vjet_1']= { 'expr': 'angular_vars[4]'}
# aliases['deltatheta_Vhad']= { 'expr': 'angular_vars[5]'}
# aliases['deltatheta_lep']= { 'expr': 'angular_vars[6]'}
# aliases['deltatheta_vjet0']= { 'expr': 'angular_vars[7]'}
# aliases['deltatheta_vjet1']= { 'expr': 'angular_vars[8]'}

# aliases['cosdeltatheta_Vhad']= { 'expr': 'TMath::Cos(angular_vars[5])'}
# aliases['cosdeltatheta_lep']= { 'expr': 'TMath::Cos(angular_vars[6])'}
# aliases['cosdeltatheta_vjet0']= { 'expr': 'TMath::Cos(angular_vars[7])'}
# aliases['cosdeltatheta_vjet1']= { 'expr': 'TMath::Cos(angular_vars[8])'}

# variables['WV_pt'] = {  'name': 'WV_pt',
#                         'range': (40,0.,500),
#                         'xaxis': 'Pt of WV system',
#                         'fold': 3
#                 }

# variables['WV_eta'] = {  'name': 'WV_eta',
#                         'range': (40,-3,3),
#                         'xaxis': 'Eta of WV system',
#                         'fold': 3
#                 }

# variables['WV_phi'] = {  'name': 'WV_phi',
#                         'range': (40,-3.14,3.14 ),
#                         'xaxis': 'Eta of WV system',
#                         'fold': 3
#                 }

# variables['deltaphi_WV'] = {  'name': 'deltaphi_WV',
#                         'range': (30,0,3.14),
#                         'xaxis': 'DeltaPhi of W lep and V had planes',
#                         'fold': 3
#                 }

# variables['theta_Vhad'] = {  'name': 'theta_Vhad',
#                         'range': (40,0.,3.14 ),
#                         'xaxis': 'Vhad polar angle in WVCM',
#                         'fold': 3
#                 }


# variables['theta_lep'] = {  'name': 'theta_lep',
#                         'range': (30,0,3.14),
#                         'xaxis': 'lep polar angle in Wlep CM',
#                         'fold': 3
#                 }

# variables['theta_vjet_0'] = {  'name': 'theta_vjet_0',
#                         'range': (30,0,3.14 ),
#                         'xaxis': 'Vjet 0 polar angle in Vhad CM',
#                         'fold': 3
#                 }

# variables['theta_vjet_1'] = {  'name': 'theta_vjet_1',
#                         'range': (30,0,3.14 ),
#                         'xaxis': 'Vjet 1 polar angle in Vhad CM',
#                         'fold': 3
#                 }

                
# variables['deltatheta_Vhad'] = {  'name': 'deltatheta_Vhad',
#                 'range': (30,0,3.14 ),
#                 'xaxis': 'Vhad theta* angle in WV CM',
#                 'fold': 3
#         }

# variables['deltatheta_lep'] = {  'name': 'deltatheta_lep',
#                 'range': (30,0,3.14 ),
#                 'xaxis': 'lep theta1 in WV CM',
#                 'fold': 3
#         }

# variables['deltatheta_vjet_0'] = {  'name': 'deltatheta_vjet_0',
#                 'range': (30,0,3.14 ),
#                 'xaxis': 'Vjet0 theta2 in WV CM',
#                 'fold': 3
#         }

# variables['deltatheta_vjet_1'] = {  'name': 'deltatheta_vjet_1',
#                 'range': (30,0,3.14 ),
#                 'xaxis': 'Vjet1 theta2 in WV CM',
#                 'fold': 3
#         }

# variables['cosdeltatheta_Vhad'] = {  'name': 'cosdeltatheta_Vhad',
#                 'range': (30,-1,1 ),
#                 'xaxis': 'Vhad cos(theta*) angle in WV CM',
#                 'fold': 3
#         }

# variables['cosdeltatheta_lep'] = {  'name': 'cosdeltatheta_lep',
#                 'range': (30,-1,1 ),
#                 'xaxis': 'lep cos(theta1) in WV CM',
#                 'fold': 3
#         }

# variables['cosdeltatheta_vjet_0'] = {  'name': 'cosdeltatheta_vjet_0',
#                 'range': (30,-1,1 ),
#                 'xaxis': 'Vjet0 cos(theta2) in WV CM',
#                 'fold': 3
#         }

# variables['cosdeltatheta_vjet_1'] = {  'name': 'cosdeltatheta_vjet_1',
#                 'range': (30,-1,1 ),
#                 'xaxis': 'Vjet1 cos(theta2) in WV CM',
#                 'fold': 3
#         }
# ########################################################
# ######################################################
# ### Tree output

# res_vars = [
#             'vbs_0_pt', 'vbs_0_eta', 'vbs_0_phi', 
#             'vbs_1_pt', 'vbs_1_eta', 'vbs_1_phi', 
#             'vjet_0_pt', 'vjet_0_eta', 'vjet_0_phi',
#             'vjet_1_pt', 'vjet_1_eta', 'vjet_1_phi', 
#             'mjj_vbs', 'mjj_vjet',
#             'deltaeta_vbs',  'deltaphi_vbs', 
#             'deltaeta_vjet', 'deltaphi_vjet', 
#             'Zvjets_0',  'Zlep',
#             'Asym_vbs', 'Mtw_lep', 'w_lep_pt', 'w_had_pt',
#             'Mww', 
#             'Centr_vbs', 'Centr_ww', 
#             'vbs_0_qglmorphed_res', 'vbs_1_qglmorphed_res', 'vjet_0_qglmorphed_res', 'vjet_1_qglmorphed_res',
#             'nJets30','PuppiMET_pt', 'PuppiMET_phi',
#             'deltaphi_WV', 'theta_Vhad', 'theta_lep','theta_vjet_0','theta_vjet_1',
#             'deltatheta_Vhad','deltatheta_lep','deltatheta_vjet_0','deltatheta_vjet_1',
#             'cosdeltatheta_Vhad','cosdeltatheta_lep','cosdeltatheta_vjet_0','cosdeltatheta_vjet_1'
#             ]

# res_branches =  { v:v for v in res_vars }


# boost_vars = ['vbs_0_pt', 'vbs_0_eta', 'vbs_0_phi',
#             'vbs_1_pt', 'vbs_1_eta', 'vbs_1_phi', 
#             'vjet_0_pt', 'vjet_0_eta', 'vjet_0_phi', 
#             'mjj_vbs', 'mjj_vjet',
#             'deltaeta_vbs',  'deltaphi_vbs', 
#             'deltaphi_lep_nu', 'deltaeta_lep_nu',
#             'Zvjets_0', 'Zlep',
#             'Asym_vbs',  'Mtw_lep', 'w_lep_pt','w_had_pt',
#             'Mww', 'Centr_vbs', 'Centr_ww', 
#             #'fatjet_TvsQCD' ,'fatjet_ZvsQCD','fatjet_WvsQCD',
#             'vbs_0_qglmorphed_boost', 'vbs_1_qglmorphed_boost',
#             'nJets30','PuppiMET_pt', 'PuppiMET_phi',
#             'deltaphi_WV', 'theta_Vhad', 'theta_lep','theta_vjet_0','theta_vjet_1',
#             'deltatheta_Vhad','deltatheta_lep','deltatheta_vjet_0','deltatheta_vjet_1',
#             'cosdeltatheta_Vhad','cosdeltatheta_lep','cosdeltatheta_vjet_0','cosdeltatheta_vjet_1'
#         ]

# boost_branches =  { v:v for v in boost_vars }


# #########
# # add the branches that need expressions
# for brs in [res_branches, boost_branches]:
#     brs['Lepton_pt'] = 'Lepton_pt[0]'
#     brs['Lepton_eta'] = 'Lepton_eta[0]'
#     brs['Lepton_phi'] = 'Lepton_phi[0]'
#     brs['nvtxGood'] = 'PV_npvsGood'
#     # jet systems
# #     brs['vbs_jets_pt'] = 'tag_jets_systems_pt[0]'
# #     brs['four_tag_jets_pt'] = 'tag_jets_systems_pt[1]'
# #     brs['vbs_jets_HT'] = 'tag_jets_systems_pt[2]'
# #     brs['four_tag_jets_HT'] = 'tag_jets_systems_pt[4]'
# #     brs['four_tag_jets_lepton_HT'] = 'tag_jets_systems_pt[5]'

# # only res branches
# # res_branches['v_jets_HT'] = 'tag_jets_systems_pt[3]'

# ##################################

# variables['dnn_inputs_resolved'] = {
#     'tree': res_branches,
#     'cuts' : ['res_sig_ele', 'res_sig_mu']
# }

# variables['dnn_inputs_boosted'] = {
#     'tree':  boost_branches,
#     'cuts' : ['boost_sig_ele', 'boost_sig_mu']
# }