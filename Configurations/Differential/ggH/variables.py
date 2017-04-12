# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
    
#variables['mll']  = {   'name': 'mll',            #   variable name    
                        #'range' : (20,10,200),    #   variable range
                        #'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         #'fold' : 3
                        #}
                        
#variables['mth']  = {   'name': 'mth',            #   variable name    
                        #'range' : (10,60,200),    #   variable range
                        #'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        #'fold' : 3
                        #}



##variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
                        ##'range' : (10,0,200, 5,10,110),            #   variable range
                        ##'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        ##'fold' : 3
                        ##}

                
#variables['ptllmet']  = {   'name': 'sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))',            #   variable name    
                        #'range' : (100,0,300),    #   variable range
                        #'xaxis' : 'p_{T}^{llmet} [GeV]',  #   x axis name
                        #'fold' : 3
                        #}



#variables['mllVSmth'] = {   'name': 'mll:((mth*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<15))+((mth+300-60)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<30 && sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>15))+((mth+300*2-60*2)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>30)))',            #   variable name    
                        ##'range' : (12,60,600, 4,10,110),            #   variable range
                        #'range' : (18,60,780, 8,10,150),            #   variable range
                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        #'fold' : 3 , 
                        ## do weighted plot too
                        #'doWeight' : 1,
                        #'binX'     : 18,
                        #'binY'     : 8
                        ##
                        #}

 

#variables['mllVSmth'] = {   'name': 'mll:((mth*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<15  &&    (( mtw2>=40  && mtw2<=90) && ( mtw1>=40  && mtw1<=120)&& ( mth>=60)&& ( mth<=300)  && vht_pt>30 && vht_pt<60 && mpmet >20)     )) +((mth+300-60)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<30 && sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>15   && (( mtw2>=30  && mtw2<=90)    && ( mtw1>=40  && mtw1<=120)&& ( mth>=60) && ( mth<=300))) && vht_pt>30 && vht_pt<60 && mpmet >20 ) +((mth+300*2-60*2)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>30 && (ptll > 50 && ( mtw2>=0  && mtw2<=100) && ( mtw1>=0  && mtw1<=120)&& ( mth>=60)&& ( mth<=300)&& ( dphilmet<2)&& ( ht>120 )))))',            #   variable name    
                        ##'range' : (12,60,600, 4,10,110),            #   variable range
                        ##'range' : (18,60,780, 8,10,150),            #   variable range
                        #'range' : (15,60,780, 8,10,150),            #   variable range
                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        #'fold' : 3 , 
                        ## do weighted plot too
                        ##'doWeight' : 1,
                        ##'binX'     : 18,
                        ##'binY'     : 8
                        ##
                        #}



#variables['mllVSmthSimple'] = {   'name': 'mll:((mth*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<15      )) +((mth+300-60)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<30 && sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>15    ) ) +((mth+300*2-60*2)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>30 )))',            #   variable name    
                        ##'range' : (12,60,600, 4,10,110),            #   variable range
                        ##'range' : (18,60,780, 8,10,150),            #   variable range
                        ##'range' : (15,60,780, 8,20,150),            #   variable range
                        ##'range' : (8,20,150, 15,60,780),            #   variable range
                        ##'range' : (4,12,150, 9,60,780),            #   variable range
                        
                        ##        12 multiple of 3 -> ok!
                        #'range' : (12,60,780,   6,12,100),            #   variable range
                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        #'fold' : 3 , 
                        ## do weighted plot too
                        ##'doWeight' : 1,
                        ##'binX'     : 18,
                        ##'binY'     : 8
                        ##
                        #}



#variables['mllVSmth1530'] = {   'name': 'mll:((mth*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<15  && vht_pt>30 && ( mtw1>=40  )  && mpmet >20  && ( mtw2>=40  )         )) +((mth+300-60)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<30 && sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>15   && vht_pt>30 && ( mtw1>=40  )    && mpmet >20  && ( mtw2>=40  )    ) ) +((mth+300*2-60*2)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>30  && ( mtw1>=0 ) && ( mtw2>=0  ) && ( dphilmet<2)  && ptll>40   )))',            #   variable name    
                        ##'range' : (12,60,600, 4,10,110),            #   variable range
                        ##'range' : (18,60,780, 8,10,150),            #   variable range
                        ##'range' : (15,60,780, 8,20,150),            #   variable range
                        ##'range' : (8,20,150, 15,60,780),            #   variable range
                        ##'range' : (4,12,150, 9,60,780),            #   variable range
                        
                        ##        12 multiple of 3 -> ok!
                        #'range' : (12,60,780,   7,12,110),            #   variable range
                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        #'fold' : 3 , 
                        ## do weighted plot too
                        ##'doWeight' : 1,
                        ##'binX'     : 18,
                        ##'binY'     : 8
                        ##
                        #}


       
variables['mllVSmth'] = {   'name': 'mll:((mth*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<30  && vht_pt>30 && ( mtw1>=40  )  && mpmet >20  && ( mtw2>=40  )    && mth>70     )) +((mth+300-60)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<60 && sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>30   && vht_pt>30 && ( mtw1>=40  )    && mpmet >20  && ( mtw2>=40  )    ) ) +((mth+300*2-60*2)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>60  && ( mtw1>=0 ) && ( mtw2>=0  ) && ( dphilmet<2)  && ptll>40   )))',            #   variable name    
                        #'range' : (12,60,600, 4,10,110),            #   variable range
                        #'range' : (18,60,780, 8,10,150),            #   variable range
                        #'range' : (15,60,780, 8,20,150),            #   variable range
                        #'range' : (8,20,150, 15,60,780),            #   variable range
                        #'range' : (4,12,150, 9,60,780),            #   variable range
                        
                        #        12 multiple of 3 -> ok!
                        'range' : (12,60,780,   7,12,110),            #   variable range
                        #'range' : (18,60,780,   7,12,110),            #   variable range
                        #'range' : (18,60,780,   10,12,110),            #   variable range
                        'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        'fold' : 3 , 
                        # do weighted plot too
                        #'doWeight' : 1,
                        #'binX'     : 18,
                        #'binY'     : 8
                        #
                        }





#variables['responseMatrix'] = {   'name': 'mll:((mth*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<30  && vht_pt>30 && ( mtw1>=40  )  && mpmet >20  && ( mtw2>=40  )         )) +((mth+300-60)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<60 && sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>30   && vht_pt>30 && ( mtw1>=40  )    && mpmet >20  && ( mtw2>=40  )    ) ) +((mth+300*2-60*2)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>60  && ( mtw1>=0 ) && ( mtw2>=0  ) && ( dphilmet<2)  && ptll>40   )))',            #   variable name    
                        ##'range' : (12,60,600, 4,10,110),            #   variable range
                        ##'range' : (18,60,780, 8,10,150),            #   variable range
                        ##'range' : (15,60,780, 8,20,150),            #   variable range
                        ##'range' : (8,20,150, 15,60,780),            #   variable range
                        ##'range' : (4,12,150, 9,60,780),            #   variable range
                        
                        ##        12 multiple of 3 -> ok!
                        ##'range' : (12,60,780,   7,12,110),            #   variable range
                        #'range' : (3,60,780,   1,12,110),            #   variable range
                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        #'fold' : 3 , 
                        ## do weighted plot too
                        ##'doWeight' : 1,
                        ##'binX'     : 18,
                        ##'binY'     : 8
                        ##
                        #}


           


#variables['mllVSmth'] = {   'name': 'mll:((mth*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<15  &&    (( mtw2>=40  && mtw2<=90) && ( mtw1>=40  && mtw1<=120)&& ( mth>=60)&& ( mth<=300)  && vht_pt>30 && vht_pt<60 && mpmet >20)     )) +((mth+300-60)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))<30 && sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>15   && (( mtw2>=30  && mtw2<=90)    && ( mtw1>=40  && mtw1<=120)&& ( mth>=60) && ( mth<=300))) && vht_pt>30 && vht_pt<60 && mpmet >20 ) +((mth+300*2-60*2)*(sqrt((metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))*(metPfType1*cos(metPfType1Phi)+std_vector_lepton_pt[0]*cos(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*cos(std_vector_lepton_phi[1]))+(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1]))*(metPfType1*sin(metPfType1Phi)+std_vector_lepton_pt[0]*sin(std_vector_lepton_phi[0])+std_vector_lepton_pt[1]*sin(std_vector_lepton_phi[1])))>30 && (ptll > 50 && ( mtw2>=0  && mtw2<=100) && ( mtw1>=0  && mtw1<=120)&& ( mth>=60)&& ( mth<=300)&& ( dphilmet<2)&& ( ht>120 )))))',            #   variable name    
                        ##'range' : (12,60,600, 4,10,110),            #   variable range
                        ##'range' : (18,60,780, 8,10,150),            #   variable range
                        
                        
                        
                        
                        


#variables['mtw1']  = {   'name': 'mtw1',      
                        #'range' : (30,0,300),  
                        #'xaxis' : 'mtw1 [GeV]',   
                         #'fold' : 3
                        #}


#variables['mtw2']  = {   'name': 'mtw2',      
                        #'range' : (10,0,100),  
                        #'xaxis' : 'mtw2 [GeV]',   
                         #'fold' : 3
                        #}



#variables['vhtpt']  = {   'name': 'vht_pt',      
                        #'range' : (30,0,300),  
                        #'xaxis' : 'vht pt [GeV]',   
                         #'fold' : 3
                        #}



#variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
                        #'range' : (4,60,200, 4,10,110),            #   variable range
                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        #'fold' : 3 , 
                        ## do weighted plot too
                        #'doWeight' : 1,
                        #'binX'     : 4,
                        #'binY'     : 4
                        ##
                        #}

#variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
                        #'range' : (7,60,200, 5,10,110),            #   variable range
                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        #'fold' : 3 , 
                        ## do weighted plot too
                        #'doWeight' : 1,
                        #'binX'     : 7,
                        #'binY'     : 5
                        ##
                        #}



## just for fun plots:

#variables['nvtx']  = {   'name': 'nvtx',      
                        #'range' : (40,0,40),  
                        #'xaxis' : 'nvtx', 
                         #'fold' : 3
                        #}
                        
#variables['ptll']  = {   'name': 'ptll',            #   variable name    
                        #'range' : (20,0,200),    #   variable range
                        #'xaxis' : 'pt_{ll} [GeV]',  #   x axis name
                         #'fold' : 3
                        #}

#variables['met']  = {   'name': 'pfType1Met',            #   variable name    
                        #'range' : (20,0,200),    #   variable range
                        #'xaxis' : 'pfmet [GeV]',  #   x axis name
                         #'fold' : 0
                        #}
