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
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}

variables['BDT_2017bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.46, 0.5, 0.54, 0.58, 0.66, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}

variables['BDT_2016bin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.45, 0.5, 0.55, 0.64, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}

## SR cut
variables['BDT_shortSR']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 2, 
}

## Merge last 5 bins for CR
variables['BDT_2018CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.5, 1.],),
    #'range' : ([-1., -0.6, -0.2, 0.2, 0.5, 1.],),
    'xaxis' : 'BDT discriminator',
    #'xaxis' : 'high m_{Z\'} NLO BDT_{Ada13}',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #}
}

variables['BDT_2017CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 0.46, 1.],),
    #'range' : ([-1., -0.6, -0.2, 0.2, 0.46, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #}
}

variables['BDT_2016CRbin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.4, 1.],),
    #'range' : ([-1., -0.6, -0.2, 0.2, 0.4, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #}
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

#variables['BDT_FineBin10']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.5, 0, 0.25, 0.4, 0.55, 0.65, 0.73, 0.76, 0.79, 0.8, 0.83, 0.86, 0.89, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}

#variables['BDT_FineBin25']  = { 
#    'name': '2*BDT_Ada13[0]',
#    'range' : ([-1., -0.5, 0, 0.25, 0.4, 0.54, 0.59, 0.63, 0.68, 0.72, 0.75, 0.79, 0.84, 1.],),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'InCh_highMtw_SR' : [0.4, 1.],
#    }
#}

#variables['BDT_FineBin50']  = { 
#    'name': '2*BDT_Ada13[0]',
#    #0.504, 0.554, 0.5960000000000001, 0.6420000000000001, 0.692, 0.746, 0.8
#    'range' : ([-1., -0.5, 0, 0.25, 0.4, 0.5, 0.55, 0.6, 0.64, 0.69, 0.75, 0.8, 1.],),
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
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}

variables['BDT_2017Fbin']  = { 
    'name': '2*BDT_Ada13[0]',
    #100,100,200,200,300,400
    'range' : ([-1., -0.5, 0, 0.25, 0.35, 0.42, 0.47, 0.54, 0.58, 0.67, 0.75, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}

variables['BDT_2016Fbin']  = { 
    'name': '2*BDT_Ada13[0]',
    #100,100,200,200,300,400
    'range' : ([-1., -0.5, 0, 0.25, 0.3, 0.36, 0.46, 0.5, 0.54, 0.62, 0.73, 1.],),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}

variables['BDT_UniBin']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : (20,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    #'blind' : {
    #    'InCh_SR' : [0.4, 1.],
    #    'InCh_highMtw_SR' : [0.4, 1.],
    #}
}

variables['BDT_b_UniBin']  = { 
    'name': '2*BDT_btag[0]',
    'range' : (20,-1.,1.),
    'xaxis' : 'BDT discriminator',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
    }
}
#variables['BDT_nb_UniBin']  = { 
#    'name': '2*BDT_no_btag[0]',
#    'range' : (20,-1.,1.),
#    'xaxis' : 'BDT discriminator',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#    }
#}
#
#variables['BDT_nb_2016bin']  = { 
#    'name': '2*BDT_no_btag[0]',
#    'range' : ([-1.,-0.6, -0.2, 0., 0.2, 0.3, 0.35, 0.40, 0.42, 0.45, 0.50, 0.55, 1.],),
#    'xaxis' : 'BDT discriminator',
#    #'xaxis' : 'BDT',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#    }
#}
variables['BDT_b_2016bin']  = { 
    'name': '2*BDT_btag[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.25, 0.3, 0.34, 0.37, 0.39, 0.43, 0.5, 1.],),
    'xaxis' : 'BDT discriminator',
    #'xaxis' : 'BDT',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
    }
}
#variables['BDT_nb_2017bin']  = { 
#    'name': '2*BDT_no_btag[0]',
#    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.35, 0.39, 0.42, 0.45, 0.51, 0.57, 1.],),
#    'xaxis' : 'BDT discriminator',
#    #'xaxis' : 'BDT',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#    }
#}
variables['BDT_b_2017bin']  = { 
    'name': '2*BDT_btag[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.34, 0.37, 0.39, 0.45, 0.53, 1.],),
    'xaxis' : 'BDT discriminator',
    #'xaxis' : 'BDT',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
    }
}
#variables['BDT_nb_2018bin']  = { 
#    'name': '2*BDT_no_btag[0]',
#    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.35, 0.4, 0.44, 0.47, 0.50, 0.54, 0.58, 1.],),
#    'xaxis' : 'BDT discriminator',
#    #'xaxis' : 'BDT',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#    }
#}
variables['BDT_b_2018bin']  = { 
    'name': '2*BDT_btag[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.35, 0.41, 0.44, 0.47, 0.5, 0.57, 1.],),
    'xaxis' : 'BDT discriminator',
    #'xaxis' : 'BDT',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
    }
}
