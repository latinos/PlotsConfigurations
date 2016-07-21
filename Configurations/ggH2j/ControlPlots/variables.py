# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }


variables['mjj']  = {  'name': 'mjj',
                       'range': (20,0,1000),  #for 500 < mjj < 1000
                     # 'range': (15,1000,2000),  #for  mjj > 1000
                       'xaxis': 'mjj [GeV]',
                       'fold': 0
                       }



variables['detajj']  = {  'name': 'detajj',
                       'range': (10,0,6),  #for 500 < mjj < 1000
                       'xaxis': '#Delta #eta_{jj}',
                       'fold': 0
                       }
  
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (20,10,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }


variables['jetpt1']  = {   'name': 'std_vector_jet_pt[0]',     
                        'range' : (20,30,100),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold'  : 0                       
                        }

variables['jetpt2']  = {   'name': 'std_vector_jet_pt[1]',     
                        'range' : (20,30,100),   
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold'  : 0                         
                        }




