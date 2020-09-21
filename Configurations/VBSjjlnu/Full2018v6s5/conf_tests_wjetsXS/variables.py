## variabeadines
import numpy as np
## variabeadines
from itertools import chain



variables['events']  = {   'name': 'XSWeight',      
                        'range' : (2,-1,1),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['XSweight']  = {   'name': 'XSWeight',      
                        'range' : (100,-0.01,0.01),  
                        'xaxis' : 'XSweight', 
                        'fold' : 3
                        }

variables['njets_LHE'] = {   'name': 'LHE_Njets',      
                                'range' : (6,0,6),  
                                'xaxis' : 'Njets @LHE', 
                                'fold' : 3
                        }

variables['njets_LHE_LO'] = {   'name': 'LHE_NpLO',      
                                'range' : (6,0,6), 
                                'xaxis' : 'Njets LO @LHE', 
                                'fold' : 3
                        }

variables['njets_LHE_NLO']  = {   'name': 'LHE_NpNLO',      
                                'range' : (6,0,6),  
                                'xaxis' : 'Njets NLO @LHE', 
                                'fold' : 3
                        }


variables['njets_LHE_events'] = {   'name': 'LHE_Njets',      
                                'range' : (6,0,6),  
                                'xaxis' : 'Njets @LHE', 
                                'fold' : 3,
                                'weight': 'XSWeight'
                        }

variables['njets_LHE_LO_events'] = {   'name': 'LHE_NpLO',      
                                'range' : (6,0,6), 
                                'xaxis' : 'Njets LO @LHE', 
                                'fold' : 3,
                                'weight': 'XSWeight'
                        }

variables['njets_LHE_NLO_events']  = {   'name': 'LHE_NpNLO',      
                                'range' : (6,0,6),  
                                'xaxis' : 'Njets NLO @LHE', 
                                'fold' : 3,
                                'weight': 'XSWeight'
                        }




variables['LHE_Vpt']  = {   'name': 'LHE_Vpt',      
                                'range' : ([0,50,100,250,400,600,2000],),  
                                'xaxis' : 'W Pt @LHE', 
                                'fold' : 3
                        }


variables['LHE_Vpt_events'] = {   'name': 'LHE_Vpt',      
                                'range' : ([0,50,100,250,400,600,2000],), 
                                'xaxis' : 'W Pt @LHE', 
                                'fold' : 3,
                                'weight': 'XSWeight'
                        }

variables['LHE_HT']  = {   'name': 'LHE_HT',      
                                'range' : ([0,70,100,200,400,600,800,1200,2500,5000],),  
                                'xaxis' : 'HT @LHE', 
                                'fold' : 3
                        }


variables['LHE_HT_events'] = {   'name': 'LHE_HT',      
                                'range' : ([0,70,100,200,400,600,800,1200,2500,5000],),    
                                'xaxis' : 'HT @LHE', 
                                'fold' : 3,
                                'weight': 'XSWeight'
                        }


variables['nGenJets'] = {   'name': 'nGenJet',      
                                'range' : (10,0,10),  
                                'xaxis' : 'N. GenJet', 
                                'fold' : 3,
                        }

variables['nGenJets_events'] = {   'name': 'nGenJet',      
                                'range' : (10,0, 10),  
                                'xaxis' : 'N. GenJet', 
                                'fold' : 3,
                                'weight': 'XSWeight'
                        }
