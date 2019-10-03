# variables

#variables = {}
    


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['mllVSmth_pt2ge20'] = {   'name': 'mll:mth',            #   variable name    
                             'range' : ([60,80,90,100,110,120,130,150,200],[12,25,35,40,45,50,55,70,90,210],),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 8,
                             'binY'     : 9
                             #
                             }

variables['mllVSmth_pt2lt20'] = {   'name': 'mll:mth',            #   variable name    
                             'range' : ([60,80,90,110,130,150,200],[12,25,40,50,70,90,210],),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 6,
                             'binY'     : 6
                             #
                             }


variables['mllVSmth_4x3bins'] = {   'name': 'mll:mth',            #   variable name    
                                    'range' : ([60, 90, 110, 130, 200],[10, 40, 55, 210],),            #   variable range
                                    'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                                    'fold' : 3 ,
                                    # do weighted plot too
                                    'doWeight' : 1,
                                    'binX'     : 4,
                                    'binY'     : 3
                                    #
                                }

variables['mllVSmth_3x3bins'] = {   'name': 'mll:mth',            #   variable name    
                                    'range' : ([60, 90, 130, 200],[10, 30, 70, 210],),            #   variable range
                                    'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                                    'fold' : 3 ,
                                    # do weighted plot too
                                    'doWeight' : 1,
                                    'binX'     : 3,
                                    'binY'     : 3
                                    #
                                }

variables['mllVSmth_2x2bins'] = {   'name': 'mll:mth',            #   variable name    
                                    'range' : ([60, 110, 200],[10, 40, 210],),            #   variable range
                                    'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                                    'fold' : 3 ,
                                    # do weighted plot too
                                    'doWeight' : 1,
                                    'binX'     : 2,
                                    'binY'     : 2
                                    #
                                }
