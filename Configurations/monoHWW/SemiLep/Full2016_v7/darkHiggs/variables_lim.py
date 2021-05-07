variables['Events']  = {
    'name': '1',     
    'range' : (1,0,1),   
    'xaxis' : '1',
    'fold'  : 3
}

variables['BDT_Ada13']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.45, 0.5, 0.55, 0.64, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}

variables['BDT_400bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0.32, 0.364, 0.408, 0.476, 0.56, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}

variables['BDT_200bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0.32, 0.364, 0.408, 0.448, 0.472, 0.504, 0.556, 0.64, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}
variables['BDT_100bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0.32, 0.364, 0.408, 0.448, 0.472, 0.504, 0.524, 0.556, 0.584, 0.64, 0.728, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}
variables['BDT_50bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0.32, 0.364, 0.408, 0.448, 0.472, 0.504, 0.524, 0.556, 0.584, 0.608, 0.636, 0.66, 0.728, 0.804, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}

#variables['BDT_Ada13G']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.45, 0.5, 0.55, 0.64, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{Ada13}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#   
#variables['BDT_Ada10']  = { 
#    'name': '2*BDT_Ada10[0]',
#    'range' : ([-1., -0.6, -0.2, 0., 0.1, 0.2, 0.3, 0.36, 0.4, 0.48, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{Ada10}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#
#variables['BDT_Ada10G']  = { 
#    'name': '2*BDT_Ada10[0]',
#    'range' : ([-1., -0.6, -0.2, 0., 0.1, 0.2, 0.3, 0.36, 0.4, 0.48, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{Ada10}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#
#variables['BDT_Grad13']  = { 
#    'name': 'BDT_Grad13[0]',
#    'range' : ([-1., -0.6, -0.3, 0., 0.3, 0.5, 0.7, 0.8, 0.9, 0.94, 0.96, 0.98, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{Grad13}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.9, 1.],
#        'InCh_highMtw_SR' : [0.9, 1.],
#    }
#}
#
#variables['BDT_Grad13G']  = { 
#    'name': 'BDT_Grad13[0]',
#    'range' : ([-1., -0.6, -0.3, 0., 0.3, 0.5, 0.7, 0.8, 0.9, 0.94, 0.96, 0.98, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{Grad13}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.9, 1.],
#        'InCh_highMtw_SR' : [0.9, 1.],
#    }
#}
#
#variables['BDT_Grad10']  = { 
#    'name': 'BDT_Grad10[0]',
#    'range' : ([-1., -0.6, -0.3, 0., 0.3, 0.5, 0.7, 0.8, 0.9, 0.94, 0.95, 0.96, 0.98, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{Grad10}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.9, 1.],
#        'InCh_highMtw_SR' : [0.9, 1.],
#    }
#}
#
#variables['BDT_Grad10G']  = { 
#    'name': 'BDT_Grad10[0]',
#    'range' : ([-1., -0.6, -0.3, 0., 0.3, 0.5, 0.7, 0.8, 0.9, 0.94, 0.95, 0.96, 0.98, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{Grad10}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.9, 1.],
#        'InCh_highMtw_SR' : [0.9, 1.],
#    }
#}
