variables['Events']  = {
    'name': '1',     
    'range' : (1,0,1),   
    'xaxis' : '1',
    'fold'  : 3
}

# 200 evts in last 5 bins
variables['BDT_2018bin']  = { 
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

variables['BDT_2017bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.46, 0.5, 0.54, 0.58, 0.66, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}

variables['BDT_2016bin']  = { 
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
#    'range' : ([-1., 0.42, 0.46, 0.5, 0.54, 0.628, 1.],),
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
#    'range' : ([-1., 0.42, 0.46, 0.516, 0.536, 0.584, 0.628, 0.712, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#variables['BDT_100bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.42, 0.46, 0.516, 0.536, 0.584, 0.604, 0.628, 0.656, 0.712, 0.776, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#variables['BDT_50bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.42, 0.46, 0.516, 0.536, 0.584, 0.604, 0.628, 0.656, 0.672, 0.708, 0.744, 0.776, 0.824, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#variables['BDT_25bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.42, 0.46, 0.516, 0.536, 0.584, 0.604, 0.628, 0.656, 0.672, 0.708, 0.744, 0.752, 0.768, 0.796, 0.816, 0.864, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}
#variables['BDT_10bin']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., 0.42, 0.46, 0.516, 0.536, 0.584, 0.604, 0.628, 0.656, 0.672, 0.708, 0.744, 0.752, 0.768, 0.796, 0.816, 0.828, 0.848, 0.892, 0.912, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}

#variables['BDT_FineBin10']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.5, 0, 0.25, 0.5, 0.6, 0.7, 0.76, 0.8, 0.82, 0.84, 0.89, 0.91, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}

#variables['BDT_FineBin25']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.5, 0, 0.25, 0.4, 0.55, 0.59, 0.63, 0.67, 0.73, 0.75, 0.79, 0.81, 0.86, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}

#variables['BDT_FineBin50']  = { 
#    'name': '2*BDT_Ada13[0]',
#    #0.548, 0.5960000000000001, 0.6440000000000001, 0.6779999999999999, 0.744, 0.776, 0.8260000000000001
#    'range' : ([-1., -0.5, 0, 0.25, 0.4, 0.55, 0.6, 0.64, 0.68, 0.74, 0.78, 0.83, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}

variables['BDT_2018Fbin']  = { 
    'name': '2*BDT_Ada13[0]',
    #100,100,200,200,300,400
    'range' : ([-1., -0.5, 0, 0.25, 0.4, 0.49, 0.52, 0.58, 0.63, 0.71, 0.77, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}

variables['BDT_2017Fbin']  = { 
    'name': '2*BDT_Ada13[0]',
    #100,100,200,200,300,400
    'range' : ([-1., -0.5, 0, 0.25, 0.35, 0.42, 0.47, 0.54, 0.58, 0.67, 0.75, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}

variables['BDT_2016Fbin']  = { 
    'name': '2*BDT_Ada13[0]',
    #100,100,200,200,300,400
    'range' : ([-1., -0.5, 0, 0.25, 0.3, 0.36, 0.46, 0.5, 0.54, 0.62, 0.73, 1.],),
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
