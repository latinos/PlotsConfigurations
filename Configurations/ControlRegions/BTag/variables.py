# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
#variables['events']  = {   'name': '1',      
                        #'range' : (1,0,2),  
                        #'xaxis' : 'events', 
                         #'fold' : 0
                        #}

 

    
#variables['btag1']  = {   'name': '(std_vector_jet_cmvav2[0] > -0.715)',      
                        #'range' : (2,0,2),  
                        #'xaxis' : 'btag1', 
                         #'fold' : 3
                        #}



variables['weightbtag_1_A']  = {   'name': 'std_vector_jet_cmvav2[0] > -0.715',      
                        'range' : (2,0,2),  
                        'xaxis' : 'weightbtag1', 
                         'fold' : 3
                        }


variables['weightbtag_1_B']  = {   'name': 'std_vector_jet_cmvav2[1] > -0.715',      
                        'range' : (2,0,2),  
                        'xaxis' : 'weightbtag2', 
                         'fold' : 3
                        }




variables['weightbtag_2D_A']  = {   'name': '(std_vector_jet_pt[0]):((std_vector_jet_eta[0]) + 10 * (std_vector_jet_cmvav2[0] > -0.715))',      
#variables['weightbtag_2D_A']  = {   'name': '(std_vector_jet_pt[0]):(std_vector_jet_eta[0])',      
                        #'range' : ([-5.0, -2.5, -2.0, -1.0, 0, 1.0, 2.0, 2.5, 5.0,       7.5,  8.0, 9.0, 10.0, 11.0, 12.0, 12.5, 15.0],[20,30,50,70,100]),  
                        #'range' : ([-5.0, 5.0, 10.0],[20, 30, 50, 100, 200]),  
                        'range' : ([-5.0, -2.5, 0, 2.5, 5.0, 7.5, 10.0, 12.5, 15.0],[20, 30, 50, 100, 200]),  
                        #'range' : ([-5.0, -2.5, 0, 2.5, 5.0],[20,70,100]),  
                        'xaxis' : '2D pt:#eta', 
                         'fold' : 3
                        }


#etaRange = [-5.0, -2.5, 0, 2.5, 5.0]
#ptRange = [20,30,100, 10000000]
