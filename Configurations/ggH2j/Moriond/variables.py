# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }


variables['mjj']  = {  'name': 'mjj',
                       'range': (20,0,200),  #for 500 < mjj < 1000
                     # 'range': (15,1000,2000),  #for  mjj > 1000
                       'xaxis': 'mjj [GeV]',
                       'fold': 3
                       }

  
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (20,10,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }


#variables['mll']  = {   'name': 'mll',            #   variable name
                        #'range' : (4, 0,200),    #   variable range
                        ##'range' : (7,10,210),    #   variable range
                      ## 'range' : (12,90,300),    #   control region: mll > 90
                        #'xaxis' : 'mll [GeV]',  #   x axis name
                        #'fold' : 3
                        #}

#variables['detajj']  = {  'name': 'detajj',
                       #'range': (7,0.0,3.5),
                     ## 'range': (10,3.5,8.5),
                       #'xaxis': 'detajj',
                       #'fold': 3
                       #}

#variables['ptll']  = {  'name': 'ptll',            #   variable name
                        #'range' : (20,30,200),    #   variable range
                        #'xaxis' : 'ptll [GeV]',  #   x axis name
                        #'fold' : 3
                        #}


#variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        #'range' : (40,0,100),   
                        #'xaxis' : 'p_{T} 1st lep',
                        #'fold'  : 3                         
                        #}

#variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        #'range' : (40,0,100),   
                        #'xaxis' : 'p_{T} 2nd lep',
                        #'fold'  : 3                         
                        #}


#variables['drll']  = {   'name': 'drll',     
                        #'range' : (40,0,3.15),   
                        #'xaxis' : '#Delta R_{ll}',
                        #'fold'  : 3                         
                        #}

                        
#variables['met']  = {   'name': 'pfType1Met',            #   variable name    
                        #'range' : (20,0,200),    #   variable range
                        #'xaxis' : 'pfmet [GeV]',  #   x axis name
                         #'fold' : 0
                        #}


                        
#variables['mpmet']  = {   'name': 'mpmet',            #   variable name    
                        #'range' : (20,0,200),    #   variable range
                        #'xaxis' : 'mpmet [GeV]',  #   x axis name
                         #'fold' : 0
                        #}



variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
                        'range' : (7,60,200, 5,10,110),            #   variable range
                        'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        'fold' : 3 , 
                        # do weighted plot too
                        'doWeight' : 1,
                        'binX'     : 7,
                        'binY'     : 5
                        #
                        }


                      
variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (10,60,200),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        'fold' : 0
                        }




