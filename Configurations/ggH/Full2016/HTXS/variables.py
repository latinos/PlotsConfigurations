# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
    


#variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
                        #'range' : (10,0,200, 5,10,110),            #   variable range
                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        #'fold' : 3
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

variables['mllVSmth_more'] = {   'name': 'mll:mth',            #   variable name    
                             'range' : (14,60,200, 14,10,150),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 , 
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 14,
                             'binY'     : 14
                             #
                             }

variables['mllVSmth_pt2bins_v2'] = {   'name': 'mll:(( mth + (mth>180)*(190-mth) )*(std_vector_lepton_pt[1]<20)+(mth+200-60)*(std_vector_lepton_pt[1]>20))',            #   variable name
                             'range' : ([60,80,100,120,140,160,180,200,210,220,230,240,250,260,270,280,290,300,310,320,330,340],[10,20,30,40,50,60,70,80,90,100,110,120,130,140,150],),          #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 21,
                             'binY'     : 14 
                             #
                             }

variables['mllVSmth_pt2bins'] = {   'name': 'mll:((mth + (mth>180)*(190-mth) )*(std_vector_lepton_pt[1]<20)+(mth+200-60)*(std_vector_lepton_pt[1]>20))',            #   variable name    
                             'range' : (14,60,340, 14,10,150),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 14,
                             'binY'     : 14
                             #
                             }

variables['mllVSmth_pt2ge20'] = {   'name': 'mll:(mth*(std_vector_lepton_pt[1]>20))',            #   variable name    
                             'range' : (7,60,200, 14,10,150),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 7,
                             'binY'     : 14
                             #
                             }

variables['mllVSmth_pt2bins_optim'] = {   'name': 'mll:(( mth + (mth>180)*(190-mth) )*(std_vector_lepton_pt[1]<20)+(mth+200-60)*(std_vector_lepton_pt[1]>20))',            #   variable name
                             'range' : ([60,70,80,85,90,95,100,105,110,115,125,140,200,210,220,225,230,235,240,245,250,255,265,280,340],[10,15,20,25,30,35,40,45,50,55,65,210],),          #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 24,
                             'binY'     : 11
                             #
                             }

