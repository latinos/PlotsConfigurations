

#### For limits
variables['Events']  = {
    'name': '1',     
    'range' : (1,0,1),   
    'xaxis' : '1',
    'fold'  : 3
}
variables['BDT_UniBin5']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (5,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}
variables['BDT_UniBin10']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (10,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}

variables['BDT_UniBin20']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (20,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}
variables['BDT_UniBin40']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (40,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}

variables['BDT_FineEnd10']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.5, 0., 0.4, 0.6, 0.8, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}
#variables['BDT_FineEnd15']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.5, 0., 0.35, 0.55, 0.7, 0.85, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    #'blind' : {
#    #    'InCh_SR' : [0.4, 1.],
#    #    'InCh_highMtw_SR' : [0.4, 1.],
#    #}
#}
variables['BDT_FineEnd20']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.5, 0., 0.4, 0.6, 0.7, 0.8, 0.9, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}
#variables['BDT_FineEnd40']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.5, 0., 0.4, 0.6, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    #'blind' : {
#    #    'InCh_SR' : [0.4, 1.],
#    #    'InCh_highMtw_SR' : [0.4, 1.],
#    #}
#}
variables['BDT_FineLast10']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.4, 0.1, 0.6, 0.8, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}
#variables['BDT_FineLast15']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.4, 0.1, 0.6, 0.85, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    #'blind' : {
#    #    'InCh_SR' : [0.4, 1.],
#    #    'InCh_highMtw_SR' : [0.4, 1.],
#    #}
#}
variables['BDT_FineLast20']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.4, 0.1, 0.6, 0.8, 0.9, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}
variables['BDT_FineLast40']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.4, 0.1, 0.6, 0.8, 0.9, 0.95, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}
#variables['BDT_Fine3Last10']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.4, 0.1, 0.4, 0.6, 0.8, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    #'blind' : {
#    #    'InCh_SR' : [0.4, 1.],
#    #    'InCh_highMtw_SR' : [0.4, 1.],
#    #}
#}
#variables['BDT_Fine3Last20']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.4, 0.1, 0.5, 0.7, 0.8, 0.9, 1.],),
#    #'range' : ([-1., -0.5, 0., 0.4, 0.6, 0.7, 0.8, 0.9, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    #'blind' : {
#    #    'InCh_SR' : [0.4, 1.],
#    #    'InCh_highMtw_SR' : [0.4, 1.],
#    #}
#}
#variables['BDT_Fine3Last40']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.4, 0.1, 0.6, 0.75, 0.85, 0.9, 0.95, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    #'blind' : {
#    #    'InCh_SR' : [0.4, 1.],
#    #    'InCh_highMtw_SR' : [0.4, 1.],
#    #}
#}

#variables['BDT_2018bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.5, 0.54, 0.58, 0.62, 0.7, 1.],),
#    'xaxis' : 'BDT discriminator',
#    #'xaxis' : 'high m_{Z\'} NLO BDT_{Ada13}',
#    'fold'  : 3, 
#    #'blind' : {
#    #    'InCh_SR' : [0.4, 1.],
#    #    'InCh_highMtw_SR' : [0.4, 1.],
#    #}
#}
#
#variables['BDT_2017bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.46, 0.5, 0.54, 0.58, 0.66, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    #'blind' : {
#    #    'InCh_SR' : [0.4, 1.],
#    #    'InCh_highMtw_SR' : [0.4, 1.],
#    #}
#}
#
#variables['BDT_2016bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.45, 0.5, 0.55, 0.64, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    #'blind' : {
#    #    'InCh_SR' : [0.4, 1.],
#    #    'InCh_highMtw_SR' : [0.4, 1.],
#    #}
#}

variables['BDT_CFineEnd10']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0., 0.4, 0.6, 0.8, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}
variables['BDT_CFineEnd20']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., 0., 0.4, 0.6, 0.7, 0.8, 0.9, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}
