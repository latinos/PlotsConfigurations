# ## variabeadines
import numpy as np
## variabeadines
from itertools import chain


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }




#delta angles between the VBS jets
variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (16,2,8),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        }    



# variables['mjj_vbs_morebins'] = {   'name': 'mjj_vbs_corrHEM',      
#                         'range' : (20,200,4000) , 
#                         'xaxis' : 'M_{jj} VBS', 
#                         'fold' : 3,
# }

# # variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
# #                         'range' : ([200,300,400,500,600,700,800,900,1000,1200,1400,1600,1800,2000,4000],) , 
# #                         'xaxis' : 'M_{jj} VBS', 
# #                         'fold' : 3,
# #                         'blind': { c:[1000,4000] for c in phase_spaces_tot if "_sig_" in c}
# #                         }

# variables['vbs_0_pt'] = {   'name': 'vbs_0_pt_corrHEM',      
#                         'range' : (30,0,400),  
#                         'xaxis' : 'leading VBS jet pt', 
#                         'fold' : 3
#                         }


# variables['vbs_1_pt'] = {   'name': 'vbs_1_pt_corrHEM',      
#                         'range' : (30,0,400),  
#                         'xaxis' : 'trailing VBS jet pt', 
#                         'fold' : 3
#                         } 


# variables['mjj_vjet_morebins'] = {   'name': 'mjj_vjet_corrHEM',      
#                         'range' : (50,40,200),  
#                         'xaxis' : 'Whad reco mass', 
#                         'fold' : 3
#                         }


# variables['vjet_0_pt'] = {   'name': 'vjet_0_pt_corrHEM',      
#                         'range' : (30,30,400),  
#                         'xaxis' : 'leading V-jet pt', 
#                         'fold' : 3
#                         }

# variables['vjet_1_pt'] = {   'name': 'vjet_1_pt_corrHEM',      
#                         'range' : (30,30,200),  
#                         'xaxis' : 'trailing V-jet pt', 
#                         'fold' : 3
#                         }

# variables['PuppiMET'] = {   'name': 'PuppiMET_pt_corrHEM',      
#                         'range' : (30,30,300),  
#                         'xaxis' : 'PuppiMET_pt', 
#                         'fold' : 3
#                         }


# variables['PuppiMET_phi'] = {   'name': 'PuppiMET_phi_corrHEM',      
#                         'range': (30,-3.14, 3.14),  
#                         'xaxis' : 'PuppiMET #phi', 
#                         'fold' : 3
#                         }

 #################                     

variables['mjj_vbs_morebins'] = {   'name': 'mjj_vbs',      
                        'range' : (20,200,4000) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
}

# variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
#                         'range' : ([200,300,400,500,600,700,800,900,1000,1200,1400,1600,1800,2000,4000],) , 
#                         'xaxis' : 'M_{jj} VBS', 
#                         'fold' : 3,
#                         'blind': { c:[1000,4000] for c in phase_spaces_tot if "_sig_" in c}
#                         }

variables['vbs_0_pt'] = {   'name': 'vbs_0_pt',      
                        'range' : (30,0,400),  
                        'xaxis' : 'leading VBS jet pt', 
                        'fold' : 3
                        }


variables['vbs_1_pt'] = {   'name': 'vbs_1_pt',      
                        'range' : (30,0,400),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3
                        } 


variables['mjj_vjet_morebins'] = {   'name': 'mjj_vjet',      
                        'range' : (50,40,200),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3
                        }


variables['vjet_0_pt'] = {   'name': 'vjet_0_pt',      
                        'range' : (30,30,400),  
                        'xaxis' : 'leading V-jet pt', 
                        'fold' : 3
                        }

variables['vjet_1_pt'] = {   'name': 'vjet_1_pt',      
                        'range' : (30,30,200),  
                        'xaxis' : 'trailing V-jet pt', 
                        'fold' : 3
                        }


        

#MET
variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
                        'range' : (30,30,300),  
                        'xaxis' : 'PuppiMET_pt', 
                        'fold' : 3
                        }


variables['PuppiMET_phi'] = {   'name': 'PuppiMET_phi',      
                        'range': (30,-3.14, 3.14),  
                        'xaxis' : 'PuppiMET #phi', 
                        'fold' : 3
                        }


variables['vjet_0_eta'] = {   'name': 'vjet_0_eta',      
                        'range' : (30,0,5),  
                        'xaxis' : 'leading Vjet #eta', 
                        'fold' : 3
                        }

variables['vjet_1_eta'] = {   'name': 'vjet_1_eta',      
                        'range' : (30,0,5),  
                        'xaxis' : 'trailing Vjet #eta', 
                        'fold' : 3
                        }


# # #
variables['vbs_0_eta'] = {   'name': 'vbs_0_eta',      
                        'range' : (30,0,5),  
                        'xaxis' : 'leading VBS jet #eta', 
                        'fold' : 3
                        }

variables['vbs_1_eta'] = {   'name': 'vbs_1_eta',      
                        'range' : (30,0,5),  
                        'xaxis' : 'trailing VBS jet #eta', 
                        'fold' : 3
                        }

variables['Zlep'] = {   'name': 'Zlep',      
                        'range' : (40,-1.5,1.5),  
                        'xaxis' : 'Zepp. lepton', 
                        'fold' : 3
                        }



#jets 
variables['nJets'] = {   'name': 'Sum$(CleanJet_pt >= 30)',      
                        'range' : (6,4,10),  
                        'xaxis' : 'nJets >= 30 GeV', 
                        'fold' : 3
                        }


variables['nvtx'] = {  'name': 'PV_npvs',
                        'range': (100, 0,100),
                        'xaxis': 'N. primary vertices',
                        'fold': 3
                }
