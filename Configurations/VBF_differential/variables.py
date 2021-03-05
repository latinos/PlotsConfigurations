# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow


variables['classvbf'] = {
     'name': 'vbfdnn',
     'range' : (5,0,1),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
}


variables['classtop'] = {
     'name': 'topdnn',
     'range' : (5,0,1),
     'xaxis' : 'DNN discriminant top',
     'fold'  : 3,
}

variables['classww'] = {
     'name': 'wwdnn',
     'range' : (5,0,1),
     'xaxis' : 'DNN discriminant ww',
     'fold'  : 3,
}


variables['classggh'] = {
     'name': 'gghdnn',
     'range' : (5,0,1),
     'xaxis' : 'DNN discriminant ggh',
     'fold'  : 3,
}

variables['events']  = {  
     'name': '1',      
     'range' : (1,0,2),  
     'xaxis' : 'events', 
     'fold' : 3
}
