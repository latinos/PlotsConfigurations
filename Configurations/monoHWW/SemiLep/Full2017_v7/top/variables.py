variables['BDT_UniBin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (20,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
    }
}
variables['BDT_UniBin2']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (10,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
    }
}
variables['BDT_UniBinZoom']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (5,.5,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 0, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
    }
}
