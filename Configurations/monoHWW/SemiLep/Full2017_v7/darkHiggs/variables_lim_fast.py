variables['BDT_2017bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.46, 0.5, 0.54, 0.58, 0.66, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    },
}
