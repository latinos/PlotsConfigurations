variables['Events']  = {
    'name': '1',     
    'range' : (1,0,1),   
    'xaxis' : '1',
    'fold'  : 3
}

#bdt_bins       = [-1.,-0.8,-0.6,-0.4,-0.2,0.,0.2,0.4,0.6,0.8,1.]
#bdt_bins_ada   = [-.5,-0.4,-0.3,-0.2,-0.1,0.,0.1,0.2,0.3,0.4,.5]
#bdt_bins_fine  = [-1.,-0.75,-0.5,-0.3,-0.1,0.,0.1,0.2,0.3,0.4,0.5,0.6,0.65,0.7,1.]
#bdt_bins_fine2 = [-1.,-0.7,-0.4,-0.2,0.,0.2,0.3,0.4,0.45,0.5,0.55,0.65,1.]
#bdt_bins_M     = [-1.,-0.2,0.,0.2,0.4,0.6,1.]
#
#grad_bins_fine = [-1., -0.7, -0.4, -0.2, 0., 0.2, 0.4, 0.6, 0.7, 0.8, 0.85, 0.9, 0.95, 1.]
#
#clean_bins_ada_o = [-.5, -0.3, -0.2, -0.1, 0., 0.05, 0.1, 0.15, 0.175, 0.2, 0.5]
#clean_bins_ada   = [-1., -0.6, -0.4, -0.2, 0., 0.1, 0.2, 0.3, 0.35, 0.4, 1.]
#clean_bins_grad  = [-1., -0.5, -0.2, 0., 0.2, 0.4, 0.6, 0.7, 0.8, 0.85, 0.9, 0.94, 0.97, 1.]
#
#clean_bins_grad12_fine = [-1., -0.5, -0.2, 0., 0.2, 0.4, 0.6, 0.7, 0.8, 0.86, 0.9, 0.94, 0.96, 0.98, 1.]
#clean_bins_grad13_fine = [-1., -0.5, -0.2, 0., 0.2, 0.4, 0.6, 0.7, 0.8, 0.9, 0.93, 0.95, 0.97, 0.98, 0.99, 1.]
#
#clean_bins_ada12_fine = [-1., -0.6, -0.4, -0.2, 0., 0.15, 0.25, 0.35, 0.4, 0.45, 1.]
#clean_bins_ada13_fine = [-1., -0.6, -0.4, -0.2, 0., 0.15, 0.25, 0.35, 0.4, 0.45, 0.5, 0.56, 1.]
#
###variables['newBDT_Ada13Var']  = { 
###    'name': 'newBDT_Ada13[0]',
###    #'range' : (10,-1.1,1.1),
###    'range' : (bdt_bins,),
###    'xaxis' : 'darkHiggs BDT_{Ada13Var}',
###    #'xaxis' : 'BDT',
###    'fold'  : 3, 
###    'blind' : {
###        'InCh_SR' : [0.2, 1.],
###        'ElCh_SR' : [0.2, 1.],
###        'MuCh_SR' : [0.2, 1.],
###    }
###}
##variables['newBDT_Ada13Var_fine2']  = { 
##    'name': 'newBDT_Ada13[0]',
##    #'range' : (10,-1.1,1.1),
##    'range' : (bdt_bins_fine2,),
##    'xaxis' : 'old BDT_{Ada13Var}',
##    #'xaxis' : 'BDT',
##    'fold'  : 3, 
##    'blind' : {
##        'InCh_SR' : [0.2, 1.],
##        'ElCh_SR' : [0.2, 1.],
##        'MuCh_SR' : [0.2, 1.],
##    }
##}   
##
### Clean   
##variables['cleanBDT_Ada12Var']  = { 
##    'name': 'cleanBDT_Ada12[0]*2',
##    #'range' : (10,-1.1,1.1),
##    'range' : (clean_bins_ada12_fine,),
##    'xaxis' : 'new BDT_{Ada12Var}',
##    #'xaxis' : 'BDT',
##    'fold'  : 3, 
##    'blind' : {
##        'InCh_SR' : [0.4, 1.],
##        'ElCh_SR' : [0.4, 1.],
##        'MuCh_SR' : [0.4, 1.],
##    }
##}   
##variables['cleanBDT_Grad12Var']  = { 
##    'name': 'cleanBDT_Grad12[0]',
##    #'range' : (10,-1.1,1.1),
##    'range' : (clean_bins_grad12_fine,),
##    'xaxis' : 'new BDT_{Grad12Var}',
##    #'xaxis' : 'BDT',
##    'fold'  : 3, 
##    'blind' : {
##        'InCh_SR' : [0.8, 1.],
##        'ElCh_SR' : [0.8, 1.],
##        'MuCh_SR' : [0.8, 1.],
##    }
##}   
### Clean NLO
##variables['cleanBDT_NLOAda12Var']  = { 
##    'name': 'cleanBDT_NLOAda12[0]*2',
##    #'range' : (10,-1.1,1.1),
##    'range' : (clean_bins_ada12_fine,),
##    'xaxis' : 'new NLO BDT_{Ada12Var}',
##    #'xaxis' : 'BDT',
##    'fold'  : 3, 
##    'blind' : {
##        'InCh_SR' : [0.4, 1.],
##        'ElCh_SR' : [0.4, 1.],
##        'MuCh_SR' : [0.4, 1.],
##    }
##}   
##variables['cleanBDT_NLOGrad12Var']  = { 
##    'name': 'cleanBDT_NLOGrad12[0]',
##    #'range' : (10,-1.1,1.1),
##    'range' : (clean_bins_grad12_fine,),
##    'xaxis' : 'new NLO BDT_{Grad12Var}',
##    #'xaxis' : 'BDT',
##    'fold'  : 3, 
##    'blind' : {
##        'InCh_SR' : [0.8, 1.],
##        'ElCh_SR' : [0.8, 1.],
##        'MuCh_SR' : [0.8, 1.],
##    }
##}   
##
### Clean   
##variables['cleanBDT_Ada13Var']  = { 
##    'name': 'cleanBDT_Ada13[0]*2',
##    #'range' : (10,-1.1,1.1),
##    'range' : (clean_bins_ada13_fine,),
##    'xaxis' : 'new BDT_{Ada13Var}',
##    #'xaxis' : 'BDT',
##    'fold'  : 3, 
##    'blind' : {
##        'InCh_SR' : [0.4, 1.],
##        'ElCh_SR' : [0.4, 1.],
##        'MuCh_SR' : [0.4, 1.],
##    }
##}   
##variables['cleanBDT_Grad13Var']  = { 
##    'name': 'cleanBDT_Grad13[0]',
##    #'range' : (10,-1.1,1.1),
##    'range' : (clean_bins_grad13_fine,),
##    'xaxis' : 'new BDT_{Grad13Var}',
##    #'xaxis' : 'BDT',
##    'fold'  : 3, 
##    'blind' : {
##        'InCh_SR' : [0.8, 1.],
##        'ElCh_SR' : [0.8, 1.],
##        'MuCh_SR' : [0.8, 1.],
##    }
##}   
### Clean NLO
##variables['cleanBDT_NLOAda13Var']  = { 
##    'name': 'cleanBDT_NLOAda13[0]*2',
##    #'range' : (10,-1.1,1.1),
##    'range' : (clean_bins_ada13_fine,),
##    'xaxis' : 'new NLO BDT_{Ada13Var}',
##    #'xaxis' : 'BDT',
##    'fold'  : 3, 
##    'blind' : {
##        'InCh_SR' : [0.4, 1.],
##        'ElCh_SR' : [0.4, 1.],
##        'MuCh_SR' : [0.4, 1.],
##    }
##}   
##variables['cleanBDT_NLOGrad13Var']  = { 
##    'name': 'cleanBDT_NLOGrad13[0]',
##    #'range' : (10,-1.1,1.1),
##    'range' : (clean_bins_grad13_fine,),
##    'xaxis' : 'new NLO BDT_{Grad13Var}',
##    #'xaxis' : 'BDT',
##    'fold'  : 3, 
##    'blind' : {
##        'InCh_SR' : [0.8, 1.],
##        'ElCh_SR' : [0.8, 1.],
##        'MuCh_SR' : [0.8, 1.],
##    }
##}   
##
###variables['newBDT_SB_Ada13Var']  = { 
###    'name': 'newBDT_SB_Ada13[0]',
###    #'range' : (10,-1.1,1.1),
###    'range' : (bdt_bins,),
###    'xaxis' : 'darkHiggs BDT_{Ada13Var}',
###    #'xaxis' : 'BDT',
###    'fold'  : 3 
###}   
##
###variables['newBDT_SB_Ada13Var_fine']  = { 
###    'name': 'newBDT_SB_Ada13[0]',
###    #'range' : (10,-1.1,1.1),
###    'range' : (bdt_bins_fine,),
###    'xaxis' : 'darkHiggs BDT_{Ada13Var}',
###    #'xaxis' : 'BDT',
###    'fold'  : 3 
###}   
##
###variables['newBDT_SB_Ada13Var_fine2']  = { 
###    'name': 'newBDT_SB_Ada13[0]',
###    #'range' : (10,-1.1,1.1),
###    'range' : (bdt_bins_fine2,),
###    'xaxis' : 'darkHiggs BDT_{Ada13Var}',
###    #'xaxis' : 'BDT',
###    'fold'  : 3, 
###    'blind' : {
###        'InCh_SR' : [0.2, 1.],
###        'ElCh_SR' : [0.2, 1.],
###        'MuCh_SR' : [0.2, 1.],
###    }
###}   
##
###variables['nloBDT_Ada14Var']  = { 
###    'name': 'nloBDT_Ada14[0]',
###    #'range' : (10,-1.1,1.1),
###    'range' : (bdt_bins,),
###    'xaxis' : 'darkHiggs BDT_{Ada14Var}',
###    #'xaxis' : 'BDT',
###    'fold'  : 3 
###}   
###
###variables['nloBDT_Ada14Var_fine']  = { 
###    'name': 'nloBDT_Ada14[0]',
###    #'range' : (10,-1.1,1.1),
###    'range' : (bdt_bins_fine,),
###    'xaxis' : 'darkHiggs BDT_{Ada14Var}',
###    #'xaxis' : 'BDT',
###    'fold'  : 3 
###}  
## 
###variables['newBDT_Grad11Var_fine']  = { 
###    'name': 'newBDT_Grad11[0]',
###    #'range' : (10,-1.1,1.1),
###    'range' : (grad_bins_fine,),
###    'xaxis' : 'darkHiggs BDT_{Grad11Var}',
###    #'xaxis' : 'BDT',
###    'fold'  : 3 
###}   
##
###variables['darkHiggsBDT_Ada16Var']  = { 
###                        'name': 'MHlnjj_darkHiggsBDT_Ada16Var',
###                        #'range' : (10,-1.1,1.1),
###                        'range' : (bdt_bins,),
###                        'xaxis' : 'darkHiggs BDT_{Ada16Var}',
###                        #'xaxis' : 'BDT',
###                        'fold'  : 3 
###                        }   
###variables['darkHiggsBDT_Grad16Var']  = { 
###                        'name': 'MHlnjj_darkHiggsBDT_Grad16Var',
###                        #'range' : (10,-1.1,1.1),
###                        'range' : (bdt_bins,),
###                        'xaxis' : 'darkHiggs BDT_{Grad16Var}',
###                        #'xaxis' : 'BDT',
###                        'fold'  : 3 
###                        }   
###variables['darkHiggsBDT_Ada16Var_M']  = { 
###                        'name': 'MHlnjj_darkHiggsBDT_Ada16Var',
###                        #'range' : (10,-1.1,1.1),
###                        'range' : (bdt_bins_M,),
###                        'xaxis' : 'darkHiggs BDT_{Ada16Var}',
###                        #'xaxis' : 'BDT',
###                        'fold'  : 3 
###                        }   
###variables['newBDT_Ada13Var_M']  = { 
###                        'name': 'newBDT_Ada13[0]',
###                        #'range' : (10,-1.1,1.1),
###                        'range' : (bdt_bins_M,),
###                        'xaxis' : 'darkHiggs BDT_{Ada13Var}',
###                        #'xaxis' : 'BDT',
###                        'fold'  : 3 
###                        }   
##
#
#clean_ada_binning  = [-1., -0.5, -0.2, 0., 0.1, 0.2, 0.25, 0.3, 0.36, 0.4, 0.44, 0.5, 1.]
#clean_grad_binning = [-1., -0.6, -0.2, 0.1, 0.3, 0.5, 0.65, 0.75, 0.8, 0.85, 0.9, 0.95, 0.96, 0.97, 0.99, 1.]
#
#hmZp_ada_binning  = [-1., -0.5, -0.2, 0., 0.15, 0.25, 0.35, 0.4, 0.45, 0.5, 0.56, 1.]
#hmZp_grad_binning = [-1., -0.6, -0.2, 0.1, 0.3, 0.5, 0.65, 0.75, 0.8, 0.85, 0.9, 0.95, 0.96, 0.97, 0.99, 1.]
#
#variables['cleanBDT_NLOAda13Var']  = { 
#    'name': 'cleanBDT_NLOAda13[0]*2',
#    #'range' : (10,-1.1,1.1),
#    'range' : (clean_ada_binning,),
#    'xaxis' : 'new NLO BDT_{Ada13Var}',
#    #'xaxis' : 'BDT',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'ElCh_SR' : [0.4, 1.],
#        'MuCh_SR' : [0.4, 1.],
#    }
#}   
#variables['cleanBDT_NLOGrad13Var']  = { 
#    'name': 'cleanBDT_NLOGrad13[0]',
#    #'range' : (10,-1.1,1.1),
#    'range' : (clean_grad_binning,),
#    'xaxis' : 'new NLO BDT_{Grad13Var}',
#    #'xaxis' : 'BDT',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.95, 1.],
#        'ElCh_SR' : [0.95, 1.],
#        'MuCh_SR' : [0.95, 1.],
#    }
#}   
#variables['hmZpBDT_NLOAda13Var']  = { 
#    'name': 'hmZpBDT_NLOAda13[0]*2',
#    #'range' : (10,-1.1,1.1),
#    'range' : (hmZp_ada_binning,),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{Ada13Var}',
#    #'xaxis' : 'BDT',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.4, 1.],
#        'ElCh_SR' : [0.4, 1.],
#        'MuCh_SR' : [0.4, 1.],
#    }
#}   
#variables['hmZpBDT_NLOGrad13Var']  = { 
#    'name': 'hmZpBDT_NLOGrad13[0]',
#    #'range' : (10,-1.1,1.1),
#    'range' : (hmZp_grad_binning,),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{Grad13Var}',
#    #'xaxis' : 'BDT',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.95, 1.],
#        'ElCh_SR' : [0.95, 1.],
#        'MuCh_SR' : [0.95, 1.],
#    }
#}

#variables['hmZpBDT_mtw']  = { 
#    'name': 'BDT_mtw[0]',
#    'range' : ([-1., -0.6, -0.3, 0., 0.2, 0.4, 0.6, 0.7, 0.8, 0.9, 0.94, 0.96, 0.97, 0.98, 0.99, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{mtw var}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.5, 1.],
#        'InCh_highMtw_SR' : [0.5, 1.],
#    }
#}
#
#variables['hmZpBDT_hig']  = { 
#    'name': 'BDT_hig[0]',
#    'range' : ([-1., -0.5, -0.2, 0., 0.2, 0.4, 0.55, 0.7, 0.8, 0.9, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{high cut}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.5, 1.],
#        'InCh_highMtw_SR' : [0.5, 1.],
#    }
#}

#variables['hmZpDNN_nom']  = { 
#    'name': 'DNN_nom[0]',
#    'range' : ([0., 0.2, 0.4, 0.6, 0.7, 0.8, 0.9, 0.94, 0.96, 0.97, 0.98, 0.99, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO DNN_{nominal}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.5, 1.],
#        'InCh_highMtw_SR' : [0.5, 1.],
#    }
#}
#   
#variables['hmZpDNN_mtw']  = { 
#    'name': 'DNN_mtw[0]',
#    'range' : ([0., 0.2, 0.4, 0.6, 0.7, 0.8, 0.9, 0.94, 0.96, 0.97, 0.98, 0.99, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO DNN_{mtw var}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.5, 1.],
#        'InCh_highMtw_SR' : [0.5, 1.],
#    }
#}
#
#variables['hmZpDNN_hig']  = { 
#    'name': 'DNN_hig[0]',
#    'range' : ([0., 0.2, 0.4, 0.55, 0.65, 0.75, 0.8, 0.85, 0.9, 0.94, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO DNN_{high cut}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.5, 1.],
#        'InCh_highMtw_SR' : [0.5, 1.],
#    }
#}

#variables['hmZpBDT_nom']  = { 
#    'name': 'BDT_nom[0]',
#    'range' : ([-1., -0.6, -0.3, 0., 0.2, 0.4, 0.6, 0.7, 0.8, 0.92, 0.94, 0.96, 0.975, 0.99, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{nominal}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.5, 1.],
#        'InCh_highMtw_SR' : [0.5, 1.],
#    }
#}
#variables['hmZpBDT_nomM']  = { 
#    'name': 'BDT_nom[0]',
#    'range' : ([-1., -0.6, -0.3, 0., 0.2, 0.4, 0.6, 0.7, 0.8, 0.92, 0.94, 0.96, 0.975, 1.],),
#    'xaxis' : 'high m_{Z\'} NLO BDT_{nominal}',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.5, 1.],
#        'InCh_highMtw_SR' : [0.5, 1.],
#    }
#}

variables['BDT_Ada13']  = { 
    'name': '2*BDT_Ada13[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.3, 0.34, 0.38, 0.47, 0.57, 1.],),
    'xaxis' : 'high m_{Z\'} NLO BDT_{Ada13}',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.4, 1.],
        'InCh_highMtw_SR' : [0.4, 1.],
    }
}

variables['BDT_Ada13b']  = { 
    'name': '2*BDT_Ada13b[0]',
    'range' : ([-1., -0.6, -0.2, 0., 0.2, 0.24, 0.27, 0.3, 0.36, 0.45, 1.],),
    'xaxis' : 'high m_{Z\'} NLO bveto BDT_{Ada13}',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.3, 1.],
        'InCh_highMtw_SR' : [0.3, 1.],
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
#    'range' : ([-1., -0.6, -0.2, 0., 0.1, 0.2, 0.3, 0.35, 0.38, 0.43, 0.48, 1.],),
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
