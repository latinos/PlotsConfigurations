variables['Events']  = {
    'name': '1',     
    'range' : (1,0,1),   
    'xaxis' : '1',
    'fold'  : 3
}

variables['BDT_Ada13']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.5, 0.54, 0.58, 0.62, 0.7, 1.],),
    'xaxis' : 'BDT discriminator',
    #'xaxis' : 'high m_{Z\'} NLO BDT_{Ada13}',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}

variables['BDT_400bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0.42, 0.46, 0.5, 0.54, 0.628, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}

variables['BDT_200bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0.42, 0.46, 0.516, 0.536, 0.584, 0.628, 0.712, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}
variables['BDT_100bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0.42, 0.46, 0.516, 0.536, 0.584, 0.604, 0.628, 0.656, 0.712, 0.776, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}
variables['BDT_50bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0.42, 0.46, 0.516, 0.536, 0.584, 0.604, 0.628, 0.656, 0.672, 0.708, 0.744, 0.776, 0.824, 1.],),
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
#    'range' : ([-1., -0.6, -0.2, 0., 0.1, 0.2, 0.3, 0.35, 0.41, 0.44, 0.51, 1.],),
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
#    'range' : ([-1., -0.6, -0.3, 0., 0.3, 0.5, 0.7, 0.8, 0.9, 0.94, 0.96, 0.97, 0.98, 1.],),
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
#    'range' : ([-1., -0.6, -0.3, 0., 0.3, 0.5, 0.7, 0.8, 0.9, 0.95, 0.96, 0.97, 0.98, 1.],),
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
