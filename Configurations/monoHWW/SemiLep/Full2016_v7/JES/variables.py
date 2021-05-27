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

#variables['BDT_400bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.32, 0.364, 0.408, 0.476, 0.56, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#
#variables['BDT_200bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.32, 0.364, 0.408, 0.448, 0.472, 0.504, 0.556, 0.64, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#variables['BDT_100bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.32, 0.364, 0.408, 0.448, 0.472, 0.504, 0.524, 0.556, 0.584, 0.64, 0.728, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#variables['BDT_50bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.32, 0.364, 0.408, 0.448, 0.472, 0.504, 0.524, 0.556, 0.584, 0.608, 0.636, 0.66, 0.728, 0.804, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#variables['BDT_25bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.32, 0.364, 0.408, 0.448, 0.472, 0.504, 0.524, 0.556, 0.584, 0.608, 0.636, 0.66, 0.724, 0.772, 0.804, 0.864, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#variables['BDT_10bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.32, 0.364, 0.408, 0.448, 0.472, 0.504, 0.524, 0.556, 0.584, 0.608, 0.636, 0.66, 0.724, 0.772, 0.8, 0.816, 0.848, 0.884, 0.908, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}

variables['BDT_FineBin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.5, 0, 0.25, 0.5, 0.6, 0.65, 0.78, 0.8, 0.85, 0.88, 0.9, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}

variables['BDT_UniBin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (20,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}
