# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
    
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (20,10,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 3
                        }
                        
variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (10,60,200),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        'fold' : 3
                        }


       
variables['mllVSmth'] = {   'name': 'mll:((mth*(std_vector_lepton_pt[0]<40)) +((mth+300-60)*(std_vector_lepton_pt[0]<60 && std_vector_lepton_pt[0]>40)) +((mth+300*2-60*2)*(std_vector_lepton_pt[0]>60)))',            #   variable name    
                        
                        #        12 multiple of 3 -> ok!
                        #'range' : (12,60,780,   7,12,110),            #   variable range
                        'range' : (18,60,780,   7,12,110),            #   variable range
                        #'range' : (18,60,780,   10,12,110),            #   variable range
                        'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        'fold' : 3 , 
                        # do weighted plot too
                        #'doWeight' : 1,
                        #'binX'     : 18,
                        #'binY'     : 8
                        #
                        }



