# variables

#variables = {}

variables['events']  = {
      'name': '1',      
      'range' : (1,0,2),  
      'xaxis' : 'events', 
      'fold' : 3,
}


variables['mll']  = {   
      'name': 'mll',
      'range' : (8, 12,200),
      'xaxis' : 'mll [GeV]',
      'fold' : 3,
}

variables['classvbf_mjjhigh'] = {
     'name': 'vbfdnn_mjjhigh',
     'range' : ([0.3,0.5,0.6,0.7,0.8,1],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
}

variables['classggh_mjjhigh'] = {
     'name': 'gghdnn_mjjhigh',
     'range' : ([0.3,0.4,0.5,0.6,0.7,0.8,1],),
     'xaxis' : 'DNN discriminant ggh',
     'fold'  : 3,
}

variables['classtop_mjjhigh'] = {
     'name': 'topdnn_mjjhigh',
     'range' : ([0.3,0.5,0.6,0.7,0.8,1],),
     'xaxis' : 'DNN discriminant top',
     'fold'  : 3,
}

variables['classww_mjjhigh'] = {
     'name': 'wwdnn_mjjhigh',
     'range' : ([0.3,0.4,0.5,0.6,0.7,0.8,1],),
     'xaxis' : 'DNN discriminant ww',
     'fold'  : 3,
}


variables['classvbf_mjjlow'] = {
     'name': 'vbfdnn_mjjlow',
     'range' : ([0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
}

variables['classggh_mjjlow'] = {
     'name': 'gghdnn_mjjlow',
     'range' : ([0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
     'xaxis' : 'DNN discriminant ggh',
     'fold'  : 3,
}

variables['classtop_mjjlow'] = {
     'name': 'topdnn_mjjlow',
     'range' : ([0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
     'xaxis' : 'DNN discriminant top',
     'fold'  : 3,
}

variables['classww_mjjlow'] = {
     'name': 'wwdnn_mjjlow',
     'range' : ([0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
     'xaxis' : 'DNN discriminant ww',
     'fold'  : 3,
}


