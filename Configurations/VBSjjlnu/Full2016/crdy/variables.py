# variables

#variables = {}
    
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }


# variables['lep_pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
#                          'range' : (60,0,600),   
#                          'xaxis' : 'p_{T} 1st lep',
#                          'fold'  : 3                         
#                          }

# variables['lep_pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
#                         'range' : (50,0,300),   
#                         'xaxis' : 'p_{T} 2rd lep',
#                         'fold'  : 3                         
#                         }

# variables['lep_eta1']  = {  'name': 'abs(std_vector_lepton_eta[0])',     
#                          'range' : (10,0.,3),   
#                          'xaxis' : '#eta 1st lep',
#                          'fold'  : 0                         
#                          }


# variables['njets'] =  {
#  		'name': '1*(std_vector_jet_pt[0]>20) + 1*(std_vector_jet_pt[1]>20) + \
#                          1*(std_vector_jet_pt[2]>20)+ 1*(std_vector_jet_pt[3]>20) + \
#                          1*(std_vector_jet_pt[4]>20) + 1*(std_vector_jet_pt[5]>20) + \
#                          1*(std_vector_jet_pt[6]>20)+ 1*(std_vector_jet_pt[7]>20) + \
#                          1*(std_vector_jet_pt[8]>20) + 1*(std_vector_jet_pt[9]>20)',
#  		'range': (10,0,10),
#  		'xaxis': '# jets',
#  		'fold': 3	
#  	}

# variables['nlep'] =  {
#                  'name': '1*(std_vector_lepton_pt[0]>20) + 1*(std_vector_lepton_pt[1]>20) + \
#                          1*(std_vector_lepton_pt[2]>20)+ 1*(std_vector_lepton_pt[3]>20) + \
#                         1*(std_vector_lepton_pt[4]>20)',
#                  'range': (5,0,5),
#                  'xaxis': '# leptons',
#                  'fold': 3
#        }

# # to be added recoMET and recoMET_pz after neutrino reco


# variables['pfmet']  = { 
#                         'name': 'metPfType1',     
#                         'range' : (20,0,1000),   
#                         'xaxis' : 'pfmet [GeV]',
#                         'fold'  : 3                         
#                 }


# variables['jet_pt1']  = {
#                          'name': 'std_vector_jet_pt[0]',     
#                          'range' : (50,0,800),   
#                          'xaxis' : 'p_{T} 1st jet',
#                          'fold' : 3   
#                         }

# variables['jet_pt2']  = {
#                          'name': 'std_vector_jet_pt[1]',     
#                          'range' : (50,0,800),   
#                          'xaxis' : 'p_{T} 2nd jet',
#                          'fold' : 3   
#                   }


# variables['jet_pt3']  = { 
#                         'name': 'std_vector_jet_pt[2]',     
#                         'range' : (50,0,800),   
#                         'xaxis' : 'p_{T} 3rd jet',
#                         'fold' : 3   
#                         }

# variables['jet_pt4']  = {
#                         'name': 'std_vector_jet_pt[3]',     
#                         'range' : (50,0,800),   
#                         'xaxis' : 'p_{T} 4th jet',
#                         'fold' : 3   
#                  }

# variables['jet_eta1']  = {  'name': 'abs(std_vector_jet_eta[0])',
#                          'range' : (10,0.0,5.0),
#                          'xaxis' : '#eta 1st jet',
#                          'fold'  : 0
#                          }

# variables['jet_eta2']  = {  'name': 'abs(std_vector_jet_eta[1])',
#                         'range' : (10,-5.0,5.0),
#                         'xaxis' : '#eta 2nd jet',
#                         'fold'  : 0
#                         }

# variables['jet_eta3']  = {  'name': 'abs(std_vector_jet_eta[2])',
#                          'range' : (10,0.0,5.0),
#                          'xaxis' : '#eta 1st jet',
#                          'fold'  : 0
#                          }

# variables['jet_eta4']  = {  'name': 'abs(std_vector_jet_eta[3])',
#                         'range' : (10,-5.0,5.0),
#                         'xaxis' : '#eta 2nd jet',
#                         'fold'  : 0
#                         }

# ### VBS kinematic variables 

# # vbs
# variables['vbs_pt_high'] = {
#         'name'  : 'vbs_pt_high',
#         'range' : (50,0,800),
#         'xaxis' : 'p_{T} 1st lep',
#         'fold'  : 3
# }
# variables['vbs_pt_low'] = {
#         'name'  : 'vbs_pt_low',
#         'range' : (50,0,800),
#         'xaxis' : 'p_{T} 2nd lep',
#         'fold'  : 3
# }
# variables['mjj_vbs'] = {
#         'name' : 'mjj_vbs',
#         'range': (50,0,2500),
#         'xaxis': 'm_{jj \ vbs} [GeV]',
#         'fold' : 3
# }
# variables['deltaeta_vbs'] = {
#         'name' : 'deltaeta_vbs',
#         'range': (10,0.,7),
#         'xaxis': '#Delta #eta vbs',
#         'fold' : 3
# }
# variables['deltaphi_vbs'] = {
#         'name': 'deltaphi_vbs',
#         'range' : (10,0.,6.28),
#         'xaxis' : '#Delta #phi vbs',
#         'fold'  : 3
# }
# variables['deltaR_vbs'] = {
#         'name' : 'deltaR_vbs',
#         'range': (40,2,8),
#         'xaxis': '#Delta R VBS',
#         'fold' : 3
# }
# variables['vbs_etaprod'] = {
#         'name' : 'abs(vbs_etaprod)',
#         'range': (10,0,20),
#         'xaxis': 'vbs #eta prod',
#         'fold' : 3
# }
# variables['vbs_eta_high'] = {
#         'name' : 'vbs_eta_high',
#         'range': (10,0,7),
#         'xaxis': '#eta vbs high',
#         'fold' : 3
# }
# variables['vbs_eta_low'] = {
#         'name' : 'vbs_eta_low',
#         'range': (10,0,7),
#         'xaxis': '#eta vbs low',
#         'fold' : 3
# }

# # vjets
# variables['vjet_pt_high'] = {
#         'name' : 'vjet_pt_high',
#         'range': (50,0,800),
#         'xaxis': 'pt vbs jet high',
#         'fold' : 3
# }
# variables['vjet_pt_low'] = {
#         'name' : 'vjet_pt_low',
#         'range': (50,0,800),
#         'xaxis': 'pt vbs jet low',
#         'fold' : 3
# }
# variables['mjj_vjet'] = {
#         'name' : 'mjj_vjet',
#         'range': (40,0,200),
#         'xaxis': 'm_{jj \ vjet} [GeV]',
#         'fold' : 3
# }
# variables['deltaeta_vjet'] = {
#         'name' : 'deltaeta_vjet',
#         'range': (10,0.,7),
#         'xaxis': '#Delta #eta vjet',
#         'fold' : 3
# }
# variables['deltaphi_vjet'] = {
#         'name': 'deltaphi_vjet',
#         'range' : (10,0.,6.28),
#         'xaxis' : '#Delta #phi vjet',
#         'fold'  : 3
# }
# variables['deltaR_vjet'] = {
#         'name' : 'deltaR_vjet',
#         'range': (20,2,8),
#         'xaxis': '#Delta R vjet',
#         'fold' : 3
# }
# variables['vjet_eta_high'] = {
#         'name' : 'vjet_eta_high',
#         'range': (20,0,7),
#         'xaxis': '#eta vjet high',
#         'fold' : 3
# }
# variables['vjet_eta_low'] = {
#         'name' : 'vjet_eta_low',
#         'range': (20,0,7),
#         'xaxis': '#eta vjet low',
#         'fold' : 3
# }

# # neutrino
# variables['deltaphi_lep_nu'] = {
#         'name' : 'deltaphi_lep_nu',
#         'range': (20,0,7),
#         'xaxis': '#Delta #phi lep nu',
#         'fold' : 3
# }
# variables['deltaeta_lep_nu'] = {
#         'name' : 'deltaeta_lep_nu',
#         'range': (20,0,7),
#         'xaxis': '#Delta #eta lep nu',
#         'fold' : 3
# }
# variables['deltaR_lep_nu'] = {
#         'name' : 'deltaR_lep_nu',
#         'range': (20,0,4),
#         'xaxis': '#Delta R lep nu',
#         'fold' : 3
# }

# # angles with lepton
# variables['deltaphi_lep_vbs_high'] = {
#         'name' : 'deltaphi_lep_vbs_high',
#         'range': (20,0,7),
#         'xaxis': '#Delta #phi lep vbs high',
#         'fold' : 3
# }
# variables['deltaphi_lep_vbs_low'] = {
#         'name' : 'deltaphi_lep_vbs_low',
#         'range': (20,0,7),
#         'xaxis': '#Delta #phi lep vbs low',
#         'fold' : 3
# }
# variables['deltaphi_lep_vjet_high'] = {
#         'name' : 'deltaphi_lep_vjet_high',
#         'range': (20,0,7),
#         'xaxis': '#Delta #phi lep vjets high',
#         'fold' : 3
# }
# variables['deltaphi_lep_vjet_low'] = {
#         'name' : 'deltaphi_lep_vjet_low',
#         'range': (20,0,7),
#         'xaxis': '#Delta #phi lep vjets low',
#         'fold' : 3
# }
# variables['deltaeta_lep_vbs_high'] = {
#         'name' : 'deltaeta_lep_vbs_high',
#         'range': (20,0,7),
#         'xaxis': '#Delta #eta lep vbs high',
#         'fold' : 3
# }
# variables['deltaeta_lep_vbs_low']  = {
#         'name' : 'deltaeta_lep_vbs_low',
#         'range': (20,0,7),
#         'xaxis': '#Delta #eta lep vbs low',
#         'fold' : 3
# }
# variables['deltaeta_lep_vjet_high'] = {
#         'name' : 'deltaeta_lep_vjet_high',
#         'range': (20,0,7),
#         'xaxis': '#Delta #eta lep vjet high',
#         'fold' : 3
# }
# variables['deltaeta_lep_vjet_low'] = {
#         'name' : 'deltaeta_lep_vjet_low',
#         'range': (20,0,7),
#         'xaxis': '#Delta #eta lep vjet low',
#         'fold' : 3
# }

# # Look for nearest vbs jet from lepton
# variables['deltaR_lep_vbs'] = {
#         'name' : 'deltaR_lep_vbs',
#         'range': (20,0,4),
#         'xaxis': '#Delta R lep vbs',
#         'fold' : 3
# }
# variables['deltaR_lep_vjet'] = {
#         'name' : 'deltaR_lep_vjet',
#         'range': (20,0,4),
#         'xaxis': '#Delta R lep vjet',
#         'fold' : 3
# }

# # zeppenfeld
# variables['Zvjets_high'] = {
#         'name' : 'Zvjets_high',
#         'range': (20,-4,4),
#         'xaxis': 'Z vjets high',
#         'fold' : 3
# }
# variables['Zvjets_low'] = {
#         'name' : 'Zvjets_low',
#         'range': (20,-4,4),
#         'xaxis': 'Z vjets low',
#         'fold' : 3
# }
# variables['Zlep'] = {
#         'name' : 'Zlep',
#         'range': (20,-4,4),
#         'xaxis': 'Z lep',
#         'fold' : 3
# }

# # R variables
# variables['Rvjets_high'] = {
#         'name' : 'Rvjets_high',
#         'range': (20,0,4),
#         'xaxis': 'R vjets high',
#         'fold' : 3
# }
# variables['Rvjets_low'] ={
#         'name' : 'Rvjets_low',
#         'range': (20,0,4),
#         'xaxis': 'R vjets low',
#         'fold' : 3
# }

# asymmetry
# variables['A_vbs']  = {
#         'name' : 'A_vbs',
#         'range': (10,0,1),
#         'xaxis': 'A vbs',
#         'fold' : 3
# }
# variables['A_vjet'] = {
#         'name' : 'A_vjet',
#         'range': (10,0,1),
#         'xaxis': 'A vjet',
#         'fold' : 3
# }

### trigger efficiency
## This works only without any data
# variables['effTrigW1l'] = {
#         'name': 'effTrigW1l',
#         'range': (20, -3., 3.),
#         'xaxis': 'Trigger efficiency one lepton',
#         'fold': 3
# }

### btag cut efficiencies

# variables['nbjet_deepcsv_loose'] = {
#         'name':'1*(std_vector_jet_pt[0]>25)*(std_vector_jet_DeepCSVB[0]>0.2219) + \
#                 1*(std_vector_jet_pt[1]>25)*(std_vector_jet_DeepCSVB[1]>0.2219) + \
#                 1*(std_vector_jet_pt[2]>25)*(std_vector_jet_DeepCSVB[2]>0.2219) + \
#                 1*(std_vector_jet_pt[3]>25)*(std_vector_jet_DeepCSVB[3]>0.2219) + \
#                 1*(std_vector_jet_pt[4]>25)*(std_vector_jet_DeepCSVB[4]>0.2219) + \
#                 1*(std_vector_jet_pt[5]>25)*(std_vector_jet_DeepCSVB[5]>0.2219) + \
#                 1*(std_vector_jet_pt[6]>25)*(std_vector_jet_DeepCSVB[6]>0.2219) + \
#                 1*(std_vector_jet_pt[7]>25)*(std_vector_jet_DeepCSVB[7]>0.2219) + \
#                 1*(std_vector_jet_pt[8]>25)*(std_vector_jet_DeepCSVB[8]>0.2219) + \
#                 1*(std_vector_jet_pt[9]>25)*(std_vector_jet_DeepCSVB[9]>0.2219)',
#         'range' : (10,0,10),
#         'xaxis' : 'nbjet_deepcsv_loose',
#         'fold'  : 3
# }

# variables['nbjet_deepcsv_medium'] = {
#         'name':'1*(std_vector_jet_pt[0]>25)*(std_vector_jet_DeepCSVB[0]>0.6324) + \
#                 1*(std_vector_jet_pt[1]>25)*(std_vector_jet_DeepCSVB[1]>0.6324) + \
#                 1*(std_vector_jet_pt[2]>25)*(std_vector_jet_DeepCSVB[2]>0.6324) + \
#                 1*(std_vector_jet_pt[3]>25)*(std_vector_jet_DeepCSVB[3]>0.6324) + \
#                 1*(std_vector_jet_pt[4]>25)*(std_vector_jet_DeepCSVB[4]>0.6324) + \
#                 1*(std_vector_jet_pt[5]>25)*(std_vector_jet_DeepCSVB[5]>0.6324) + \
#                 1*(std_vector_jet_pt[6]>25)*(std_vector_jet_DeepCSVB[6]>0.6324) + \
#                 1*(std_vector_jet_pt[7]>25)*(std_vector_jet_DeepCSVB[7]>0.6324) + \
#                 1*(std_vector_jet_pt[8]>25)*(std_vector_jet_DeepCSVB[8]>0.6324) + \
#                 1*(std_vector_jet_pt[9]>25)*(std_vector_jet_DeepCSVB[9]>0.6324)',
#         'range' : (10,0,10),
#         'xaxis' : 'nbjet_deepcsv_medium',
#         'fold'  : 3
# }

# variables['nbjet_deepcsv_tight'] = {
#         'name':'1*(std_vector_jet_pt[0]>25)*(std_vector_jet_DeepCSVB[0]>0.8958) + \
#                 1*(std_vector_jet_pt[1]>25)*(std_vector_jet_DeepCSVB[1]>0.8958) + \
#                 1*(std_vector_jet_pt[2]>25)*(std_vector_jet_DeepCSVB[2]>0.8958) + \
#                 1*(std_vector_jet_pt[3]>25)*(std_vector_jet_DeepCSVB[3]>0.8958) + \
#                 1*(std_vector_jet_pt[4]>25)*(std_vector_jet_DeepCSVB[4]>0.8958) + \
#                 1*(std_vector_jet_pt[5]>25)*(std_vector_jet_DeepCSVB[5]>0.8958) + \
#                 1*(std_vector_jet_pt[6]>25)*(std_vector_jet_DeepCSVB[6]>0.8958) + \
#                 1*(std_vector_jet_pt[7]>25)*(std_vector_jet_DeepCSVB[7]>0.8958) + \
#                 1*(std_vector_jet_pt[8]>25)*(std_vector_jet_DeepCSVB[8]>0.8958) + \
#                 1*(std_vector_jet_pt[9]>25)*(std_vector_jet_DeepCSVB[9]>0.8958)',
#         'range' : (10,0,10),
#         'xaxis' : 'nbjet_deepcsv_tight',
#         'fold'  : 3
# }

# variables['nbjet_cmvav2_loose'] = {
#         'name':'1*(std_vector_jet_pt[0]>25)*(std_vector_jet_cmvav2[0]>-0.5884) + \
#                 1*(std_vector_jet_pt[1]>25)*(std_vector_jet_cmvav2[1]>-0.5884) + \
#                 1*(std_vector_jet_pt[2]>25)*(std_vector_jet_cmvav2[2]>-0.5884) + \
#                 1*(std_vector_jet_pt[3]>25)*(std_vector_jet_cmvav2[3]>-0.5884) + \
#                 1*(std_vector_jet_pt[4]>25)*(std_vector_jet_cmvav2[4]>-0.5884) + \
#                 1*(std_vector_jet_pt[5]>25)*(std_vector_jet_cmvav2[5]>-0.5884) + \
#                 1*(std_vector_jet_pt[6]>25)*(std_vector_jet_cmvav2[6]>-0.5884) + \
#                 1*(std_vector_jet_pt[7]>25)*(std_vector_jet_cmvav2[7]>-0.5884) + \
#                 1*(std_vector_jet_pt[8]>25)*(std_vector_jet_cmvav2[8]>-0.5884) + \
#                 1*(std_vector_jet_pt[9]>25)*(std_vector_jet_cmvav2[9]>-0.5884)',
#         'range' : (10,0,10),
#         'xaxis' : 'nbjet_cmvav2_loose',
#         'fold'  : 3
# }

# variables['nbjet_cmvav2_medium'] = {
#         'name':'1*(std_vector_jet_pt[0]>25)*(std_vector_jet_cmvav2[0]>0.4432) + \
#                 1*(std_vector_jet_pt[1]>25)*(std_vector_jet_cmvav2[1]>0.4432) + \
#                 1*(std_vector_jet_pt[2]>25)*(std_vector_jet_cmvav2[2]>0.4432) + \
#                 1*(std_vector_jet_pt[3]>25)*(std_vector_jet_cmvav2[3]>0.4432) + \
#                 1*(std_vector_jet_pt[4]>25)*(std_vector_jet_cmvav2[4]>0.4432) + \
#                 1*(std_vector_jet_pt[5]>25)*(std_vector_jet_cmvav2[5]>0.4432) + \
#                 1*(std_vector_jet_pt[6]>25)*(std_vector_jet_cmvav2[6]>0.4432) + \
#                 1*(std_vector_jet_pt[7]>25)*(std_vector_jet_cmvav2[7]>0.4432) + \
#                 1*(std_vector_jet_pt[8]>25)*(std_vector_jet_cmvav2[8]>0.4432) + \
#                 1*(std_vector_jet_pt[9]>25)*(std_vector_jet_cmvav2[9]>0.4432)',
#         'range' : (10,0,10),
#         'xaxis' : 'nbjet_cmvav2_medium',
#         'fold'  : 3
# }

# variables['nbjet_cmvav2_tight'] = {
#         'name':'1*(std_vector_jet_pt[0]>25)*(std_vector_jet_cmvav2[0]>0.9432) + \
#                 1*(std_vector_jet_pt[1]>25)*(std_vector_jet_cmvav2[1]>0.9432) + \
#                 1*(std_vector_jet_pt[2]>25)*(std_vector_jet_cmvav2[2]>0.9432) + \
#                 1*(std_vector_jet_pt[3]>25)*(std_vector_jet_cmvav2[3]>0.9432) + \
#                 1*(std_vector_jet_pt[4]>25)*(std_vector_jet_cmvav2[4]>0.9432) + \
#                 1*(std_vector_jet_pt[5]>25)*(std_vector_jet_cmvav2[5]>0.9432) + \
#                 1*(std_vector_jet_pt[6]>25)*(std_vector_jet_cmvav2[6]>0.9432) + \
#                 1*(std_vector_jet_pt[7]>25)*(std_vector_jet_cmvav2[7]>0.9432) + \
#                 1*(std_vector_jet_pt[8]>25)*(std_vector_jet_cmvav2[8]>0.9432) + \
#                 1*(std_vector_jet_pt[9]>25)*(std_vector_jet_cmvav2[9]>0.9432)',
#         'range' : (10,0,10),
#         'xaxis' : 'nbjet_cmvav2_tight',
#         'fold'  : 3
# }


    
#variables['nvtx']  = {   'name': 'nvtx',      
                        #'range' : (40,0,40),  
                        #'xaxis' : 'nvtx', 
                         #'fold' : 3
                      #}
                        
variables['mll']  = {   'name': 'mll',            #   variable name    
                       'range' : (40, 0,200),    #   variable range
                       'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                        'fold' : 0
                       }

variables['mllpeak'] = {   'name': 'mll',            #   variable name
                           'range' : (100,80,100),    #   variable range
                           'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                           'fold' : 0
                        }

#variables['mth']  = {   'name': 'mth',            #   variable name    
                        #'range' : (40,0,200),    #   variable range
                        #'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                         #'fold' : 0
                        #}

#variables['dphill']  = {   'name': 'abs(dphill)',     
                        #'range' : (20,0,3.14),   
                        #'xaxis' : '#Delta#phi_{ll}',
                        #'fold' : 3
                        #}

#variables['ptll']  = {   'name': 'ptll',     
                        #'range' : (40, 0,200),   
                        #'xaxis' : 'p_{T}^{ll} [GeV]',
                        #'fold' : 3
                        #}
