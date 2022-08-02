variables['Events']  = {
    'name': '1',     
    'range' : (1,0,1),   
    'xaxis' : '1',
    'fold'  : 3
}


variables['BDT_Ada13']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.46, 0.5, 0.54, 0.58, 0.66, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}

#bdt_bins = [-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.46, 0.5, 0.54, 0.58, 0.66, 1.]
#eta_bins = [0., 1., 3.]
#variables['BDTvJ1eta_Ada13']  = { 
#    'name': '2*BDT_Ada13[0]:abs(MHlnjj_eta_j1)',
#    'range' : (eta_bins,bdt_bins,),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{Ada13}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}

#variables['BDT_400bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.172, 0.216, 0.272, 0.344, 0.472, 1.],),
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
#    'range' : ([-1., 0.172, 0.216, 0.296, 0.34, 0.384, 0.468, 0.572, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#variables['BDT_100bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.172, 0.216, 0.296, 0.34, 0.384, 0.468, 0.52, 0.572, 0.668, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#variables['BDT_50bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.172, 0.216, 0.296, 0.34, 0.384, 0.468, 0.52, 0.548, 0.572, 0.608, 0.664, 0.752, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}

#variables['BDT_25bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.172, 0.216, 0.296, 0.34, 0.384, 0.468, 0.52, 0.548, 0.572, 0.608, 0.628, 0.652, 0.684, 0.744, 0.792, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}

#variables['BDT_10bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.172, 0.216, 0.296, 0.34, 0.384, 0.468, 0.52, 0.548, 0.572, 0.608, 0.628, 0.652, 0.688, 0.728, 0.744, 0.804, 0.852, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}

variables['BDT_FineBin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.5, 0, 0.25, 0.4, 0.55, 0.65, 0.73, 0.76, 0.79, 0.8, 0.83, 0.86, 0.89, 1.],),
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
