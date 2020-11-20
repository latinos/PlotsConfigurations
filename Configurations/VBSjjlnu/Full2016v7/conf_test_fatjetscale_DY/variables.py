# variables

#variables = {}
variables['cleanfatjet_pt']  = {   'name': 'Alt$(CleanFatJet_pt[0],-99)',      
                       'range' : (40,200,800),  
                       'xaxis' : 'FatJet Pt', 
                        'fold' : 3
                     }

variables['cleanfatjet_eta']  = {   'name': 'Alt$(CleanFatJet_eta[0],-99)',      
                       'range' : (50,-2.4, 2.5),  
                       'xaxis' : 'FatJet eta', 
                        'fold' : 3
                     }


variables['cleanfatjet_mass']  = {   'name': 'Alt$(CleanFatJet_mass[0],-99)',      
                       'range' : (60,40, 200),  
                       'xaxis' : 'FatJet mass', 
                        'fold' : 3
                     }


variables['cleanfatjet_tau21']  = {   'name': 'Alt$(CleanFatJet_tau21[0],-99)',      
                       'range' : (50,0, 1),  
                       'xaxis' : 'FatJet mass', 
                        'fold' : 3
                     }


# variables['fatjet_pt']  = {   'name': 'Alt$(FatJet_pt[0],-99)',      
#                        'range' : (60,40,200),  
#                        'xaxis' : 'FatJet Pt', 
#                         'fold' : 3
#                      }

# variables['fatjet_eta']  = {   'name': 'Alt$(FatJet_eta[0],-99)',      
#                        'range' : (50,-2.4, 2.5),  
#                        'xaxis' : 'FatJet eta', 
#                         'fold' : 3
#                      }


# variables['fatjet_mass']  = {   'name': 'Alt$(FatJet_mass[0],-99)',      
#                        'range' : (60,0, 250),  
#                        'xaxis' : 'FatJet mass', 
#                         'fold' : 3
#                      }
