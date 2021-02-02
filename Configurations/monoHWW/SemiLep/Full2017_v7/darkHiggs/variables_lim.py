variables['Events']  = {
    'name': '1',     
    'range' : (1,0,1),   
    'xaxis' : '1',
    'fold'  : 3
}

bdt_bins       = [-1.,-0.8,-0.6,-0.4,-0.2,0.,0.2,0.4,0.6,0.8,1.]
bdt_bins_ada   = [-.5,-0.4,-0.3,-0.2,-0.1,0.,0.1,0.2,0.3,0.4,.5]
bdt_bins_fine  = [-1.,-0.75,-0.5,-0.3,-0.1,0.,0.1,0.2,0.3,0.4,0.5,0.6,0.65,0.7,1.]
bdt_bins_fine2 = [-1.,-0.7,-0.4,-0.2,0.,0.2,0.3,0.4,0.45,0.5,0.55,0.65,1.]
bdt_bins_M     = [-1.,-0.2,0.,0.2,0.4,0.6,1.]

grad_bins_fine = [-1., -0.7, -0.4, -0.2, 0., 0.2, 0.4, 0.6, 0.7, 0.8, 0.85, 0.9, 0.95, 1.]

variables['newBDT_Ada13Var']  = { 
    'name': 'newBDT_Ada13[0]',
    #'range' : (10,-1.1,1.1),
    'range' : (bdt_bins,),
    'xaxis' : 'darkHiggs BDT_{Ada13Var}',
    #'xaxis' : 'BDT',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.2, 1.],
        'ElCh_SR' : [0.2, 1.],
        'MuCh_SR' : [0.2, 1.],
    }
}
# Clean   
variables['cleanBDT_Ada12Var']  = { 
    'name': 'cleanBDT_Ada12[0]',
    #'range' : (10,-1.1,1.1),
    'range' : (bdt_bins_ada,),
    'xaxis' : 'darkHiggs BDT_{Ada12Var}',
    #'xaxis' : 'BDT',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.2, 1.],
        'ElCh_SR' : [0.2, 1.],
        'MuCh_SR' : [0.2, 1.],
    }
}   
variables['cleanBDT_Ada13Var']  = { 
    'name': 'cleanBDT_Ada13[0]',
    #'range' : (10,-1.1,1.1),
    'range' : (bdt_bins_ada,),
    'xaxis' : 'darkHiggs BDT_{Ada13Var}',
    #'xaxis' : 'BDT',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.2, 1.],
        'ElCh_SR' : [0.2, 1.],
        'MuCh_SR' : [0.2, 1.],
    }
}   
variables['cleanBDT_Grad12Var']  = { 
    'name': 'cleanBDT_Grad12[0]',
    #'range' : (10,-1.1,1.1),
    'range' : (bdt_bins,),
    'xaxis' : 'darkHiggs BDT_{Grad12Var}',
    #'xaxis' : 'BDT',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.2, 1.],
        'ElCh_SR' : [0.2, 1.],
        'MuCh_SR' : [0.2, 1.],
    }
}   
variables['cleanBDT_Grad13Var']  = { 
    'name': 'cleanBDT_Grad13[0]',
    #'range' : (10,-1.1,1.1),
    'range' : (bdt_bins,),
    'xaxis' : 'darkHiggs BDT_{Grad13Var}',
    #'xaxis' : 'BDT',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.2, 1.],
        'ElCh_SR' : [0.2, 1.],
        'MuCh_SR' : [0.2, 1.],
    }
}   
# Clean NLO
variables['cleanBDT_NLOAda12Var']  = { 
    'name': 'cleanBDT_NLOAda12[0]',
    #'range' : (10,-1.1,1.1),
    'range' : (bdt_bins_ada,),
    'xaxis' : 'darkHiggs BDT_{Ada12Var}',
    #'xaxis' : 'BDT',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.2, 1.],
        'ElCh_SR' : [0.2, 1.],
        'MuCh_SR' : [0.2, 1.],
    }
}   
variables['cleanBDT_NLOAda13Var']  = { 
    'name': 'cleanBDT_NLOAda13[0]',
    #'range' : (10,-1.1,1.1),
    'range' : (bdt_bins_ada,),
    'xaxis' : 'darkHiggs BDT_{Ada13Var}',
    #'xaxis' : 'BDT',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.2, 1.],
        'ElCh_SR' : [0.2, 1.],
        'MuCh_SR' : [0.2, 1.],
    }
}   
variables['cleanBDT_NLOGrad12Var']  = { 
    'name': 'cleanBDT_NLOGrad12[0]',
    #'range' : (10,-1.1,1.1),
    'range' : (bdt_bins,),
    'xaxis' : 'darkHiggs BDT_{Grad12Var}',
    #'xaxis' : 'BDT',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.2, 1.],
        'ElCh_SR' : [0.2, 1.],
        'MuCh_SR' : [0.2, 1.],
    }
}   
variables['cleanBDT_NLOGrad13Var']  = { 
    'name': 'cleanBDT_NLOGrad13[0]',
    #'range' : (10,-1.1,1.1),
    'range' : (bdt_bins,),
    'xaxis' : 'darkHiggs BDT_{Grad13Var}',
    #'xaxis' : 'BDT',
    'fold'  : 3, 
    'blind' : {
        'InCh_SR' : [0.2, 1.],
        'ElCh_SR' : [0.2, 1.],
        'MuCh_SR' : [0.2, 1.],
    }
}   

#variables['newBDT_Ada13Var_fine']  = { 
#    'name': 'newBDT_Ada13[0]',
#    #'range' : (10,-1.1,1.1),
#    'range' : (bdt_bins_fine,),
#    'xaxis' : 'darkHiggs BDT_{Ada13Var}',
#    #'xaxis' : 'BDT',
#    'fold'  : 3,
#    'blind' : {
#        'InCh_SR' : [0.2, 1.],
#        'ElCh_SR' : [0.2, 1.],
#        'MuCh_SR' : [0.2, 1.],
#    }
#}   

#variables['newBDT_Ada13Var_fine2']  = { 
#    'name': 'newBDT_Ada13[0]',
#    #'range' : (10,-1.1,1.1),
#    'range' : (bdt_bins_fine2,),
#    'xaxis' : 'darkHiggs BDT_{Ada13Var}',
#    #'xaxis' : 'BDT',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.2, 1.],
#        'ElCh_SR' : [0.2, 1.],
#        'MuCh_SR' : [0.2, 1.],
#    }
#}   

#variables['newBDT_SB_Ada13Var']  = { 
#    'name': 'newBDT_SB_Ada13[0]',
#    #'range' : (10,-1.1,1.1),
#    'range' : (bdt_bins,),
#    'xaxis' : 'darkHiggs BDT_{Ada13Var}',
#    #'xaxis' : 'BDT',
#    'fold'  : 3 
#}   

#variables['newBDT_SB_Ada13Var_fine']  = { 
#    'name': 'newBDT_SB_Ada13[0]',
#    #'range' : (10,-1.1,1.1),
#    'range' : (bdt_bins_fine,),
#    'xaxis' : 'darkHiggs BDT_{Ada13Var}',
#    #'xaxis' : 'BDT',
#    'fold'  : 3 
#}   

#variables['newBDT_SB_Ada13Var_fine2']  = { 
#    'name': 'newBDT_SB_Ada13[0]',
#    #'range' : (10,-1.1,1.1),
#    'range' : (bdt_bins_fine2,),
#    'xaxis' : 'darkHiggs BDT_{Ada13Var}',
#    #'xaxis' : 'BDT',
#    'fold'  : 3, 
#    'blind' : {
#        'InCh_SR' : [0.2, 1.],
#        'ElCh_SR' : [0.2, 1.],
#        'MuCh_SR' : [0.2, 1.],
#    }
#}   

#variables['nloBDT_Ada14Var']  = { 
#    'name': 'nloBDT_Ada14[0]',
#    #'range' : (10,-1.1,1.1),
#    'range' : (bdt_bins,),
#    'xaxis' : 'darkHiggs BDT_{Ada14Var}',
#    #'xaxis' : 'BDT',
#    'fold'  : 3 
#}   
#
#variables['nloBDT_Ada14Var_fine']  = { 
#    'name': 'nloBDT_Ada14[0]',
#    #'range' : (10,-1.1,1.1),
#    'range' : (bdt_bins_fine,),
#    'xaxis' : 'darkHiggs BDT_{Ada14Var}',
#    #'xaxis' : 'BDT',
#    'fold'  : 3 
#}  
 
#variables['newBDT_Grad11Var_fine']  = { 
#    'name': 'newBDT_Grad11[0]',
#    #'range' : (10,-1.1,1.1),
#    'range' : (grad_bins_fine,),
#    'xaxis' : 'darkHiggs BDT_{Grad11Var}',
#    #'xaxis' : 'BDT',
#    'fold'  : 3 
#}   

#variables['darkHiggsBDT_Ada16Var']  = { 
#                        'name': 'MHlnjj_darkHiggsBDT_Ada16Var',
#                        #'range' : (10,-1.1,1.1),
#                        'range' : (bdt_bins,),
#                        'xaxis' : 'darkHiggs BDT_{Ada16Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#variables['darkHiggsBDT_Grad16Var']  = { 
#                        'name': 'MHlnjj_darkHiggsBDT_Grad16Var',
#                        #'range' : (10,-1.1,1.1),
#                        'range' : (bdt_bins,),
#                        'xaxis' : 'darkHiggs BDT_{Grad16Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#variables['darkHiggsBDT_Ada16Var_M']  = { 
#                        'name': 'MHlnjj_darkHiggsBDT_Ada16Var',
#                        #'range' : (10,-1.1,1.1),
#                        'range' : (bdt_bins_M,),
#                        'xaxis' : 'darkHiggs BDT_{Ada16Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   
#variables['newBDT_Ada13Var_M']  = { 
#                        'name': 'newBDT_Ada13[0]',
#                        #'range' : (10,-1.1,1.1),
#                        'range' : (bdt_bins_M,),
#                        'xaxis' : 'darkHiggs BDT_{Ada13Var}',
#                        #'xaxis' : 'BDT',
#                        'fold'  : 3 
#                        }   

