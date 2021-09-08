# variables

#variables = {}

variables['events']  = {
      'name': '1',      
      'range' : (1,0,2),  
      'xaxis' : 'events', 
      'fold' : 3
}


variables['mll']  = {   
      'name': 'mll',
      'range' : ([10, 100, 210],),
      'xaxis' : 'mll [GeV]',
      'fold' : 3
}


variables['mllVSmjj'] = {   'name': 'mll:mjj', #   variable name    
                             'range' : ([65,85,105],[12,40,80,120,160,200],), #(8,65,105,8,12,200), # variable range
                             'xaxis' : 'm_{ll} : m_{jj}',  #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 2,
                             'binY'     : 5,
}

variables['mllVSmth_pt2lt20'] = {   'name': 'mll:mth', #   variable name    
                             'range' : ([60,80,90,110,130,150,200],[12,25,40,50,70,90,210],), # variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',  #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 6,
                             'binY'     : 6
}


variables['mllVSmth_4x3bins'] = {   'name': 'mll:mth',            #   variable name    
                                    'range' : ([60, 90, 110, 130, 200],[10, 40, 55, 210],),            #   variable range
                                    'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                                    'fold' : 3 ,
                                    # do weighted plot too
                                    'doWeight' : 1,
                                    'binX'     : 4,
                                    'binY'     : 3
                                }



variables['classvbf_1'] = {
     'name': 'vbfdnn',
     'range' : ([0,0.535,0.605,0.665,0.705,0.775,1.],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
}
variables['classvbf_2'] = {
     'name': 'vbfdnn',
     'range' : ([0,0.655,0.725,0.765,0.795,0.825,0.855,0.915,1.],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
}
variables['classvbf_3'] = {
     'name': 'vbfdnn',
     'range' : ([0,0.745,0.875,1.],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
}



variables['classggh'] = {
     'name': 'gghdnn',
     'range' : ([0.,0.485, 1.],),
     'xaxis' : 'DNN discriminant ggh',
     'fold'  : 3,
}


variables['classtop_1'] = {
     'name': 'topdnn',
     'range' : ([0.,0.5,0.75,1.],),
     'xaxis' : 'DNN discriminant top',
     'fold'  : 3,
}

variables['classtop_2'] = {
     'name': 'topdnn',
     'range' : ([0.,0.5,1.],),
     'xaxis' : 'DNN discriminant top',
     'fold'  : 3,
}

variables['classww'] = {
     'name': 'wwdnn',
     'range' : ([0.,0.5,0.75,1],),
     'xaxis' : 'DNN discriminant ww',
     'fold'  : 3,
}

