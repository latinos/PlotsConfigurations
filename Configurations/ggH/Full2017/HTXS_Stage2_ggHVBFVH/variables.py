# variables

#variables = {}

variables['events']  = {
      'name': '1',      
      'range' : (1,0,2),  
      'xaxis' : 'events', 
      'fold' : 3,
      'cuts' : [
             'hww2l2v_13TeV_top_0j', 
             'hww2l2v_13TeV_top_1j', 
             'hww2l2v_13TeV_top_2j', 
             'hww2l2v_13TeV_top_2j_vbf', 
             'hww2l2v_13TeV_top_2j_vh',
             'hww2l2v_13TeV_dytt_0j', 
             'hww2l2v_13TeV_dytt_1j', 
             'hww2l2v_13TeV_dytt_2j', 
             'hww2l2v_13TeV_dytt_2j_vbf', 
             'hww2l2v_13TeV_dytt_2j_vh'
      ]
}


variables['mll']  = {   
      'name': 'mll',
      'range' : (8, 12,200),
      'xaxis' : 'mll [GeV]',
      'fold' : 3,
      'cuts' : [
            'hww2l2v_13TeV_of2j_mjj65_105'
      ]
}



variables['mllVSmjj'] = {   'name': 'mll:mjj', #   variable name    
                             'range' : ([65,85,105],[12,40,80,120,160,200],), #(8,65,105,8,12,200), # variable range
                             'xaxis' : 'm_{ll} : m_{jj}',  #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 8,
                             'binY'     : 8,
                             'cuts' : [
                                    'hww2l2v_13TeV_of2j_mjj65_105'
                             ]
}


variables['mllVSmth_pt2lt20'] = {   'name': 'mll:mth', #   variable name    
                             'range' : ([60,80,90,110,130,150,200],[12,25,40,50,70,90,210],), # variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',  #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 6,
                             'binY'     : 6,
                             'cuts' : [
                                   'hww2l2v_13TeV_of_pth200_300',
                                   'hww2l2v_13TeV_of2j_pth0_60', 
                                   'hww2l2v_13TeV_of2j_pth60_120', 
                                   'hww2l2v_13TeV_of2j_pth120_200'
                             ]
}


variables['mllVSmth_4x3bins'] = {   'name': 'mll:mth',            #   variable name    
                                    'range' : ([60, 90, 110, 130, 200],[10, 40, 55, 210],),            #   variable range
                                    'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                                    'fold' : 3 ,
                                    # do weighted plot too
                                    'doWeight' : 1,
                                    'binX'     : 4,
                                    'binY'     : 3,
                                     #
                                     
                                    'cuts' : [
                                          'hww2l2v_13TeV_of_pth300_450'
                                    ]
                                }

variables['mllVSmth_3x3bins'] = {   'name': 'mll:mth',            #   variable name    
                                    'range' : ([60, 90, 130, 200],[10, 30, 70, 210],),            #   variable range
                                    'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                                    'fold' : 3 ,
                                    # do weighted plot too
                                    'doWeight' : 1,
                                    'binX'     : 3,
                                    'binY'     : 3,
                                    #
                                    'cuts' : [
                                          'hww2l2v_13TeV_of_pth450_650'
                                    ]
                                }

variables['mllVSmth_2x2bins'] = {   'name': 'mll:mth',            #   variable name    
                                    'range' : ([60, 110, 200],[10, 40, 210],),            #   variable range
                                    'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                                    'fold' : 3 ,
                                    # do weighted plot too
                                    'doWeight' : 1,
                                    'binX'     : 2,
                                    'binY'     : 2,
                                    #                                
                                    'cuts' : [
                                          'hww2l2v_13TeV_of_pthGT650'
                                    ]

}

variables['classvbf_mjjhigh'] = {
     'name': 'vbfdnn_mjjhigh',
     'range' : ([0.3,0.5,0.6,0.7,0.8,1],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_vbflike_mjj350_700_pthLT200',
            'hww2l2v_13TeV_of2j_vbflike_mjjGT700_pthLT200',
            'hww2l2v_13TeV_of2j_vbflike_mjjGT350_pthGT200'
     ]
}

variables['classggh_mjjhigh'] = {
     'name': 'gghdnn_mjjhigh',
     'range' : ([0.3,0.4,0.5,0.6,0.7,0.8,1],),
     'xaxis' : 'DNN discriminant ggh',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_gghlike_mjj350_700_pthLT200',
            'hww2l2v_13TeV_of2j_gghlike_mjjGT700_pthLT200',
            'hww2l2v_13TeV_of2j_gghlike_mjjGT350_pthGT200'
     ]
}

variables['classtop_mjjhigh'] = {
     'name': 'topdnn_mjjhigh',
     'range' : ([0.3,0.5,0.6,0.7,0.8,1],),
     'xaxis' : 'DNN discriminant top',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_toplike_mjj350_700_pthLT200', 
            'hww2l2v_13TeV_of2j_toplike_mjjGT700_pthLT200',
            'hww2l2v_13TeV_of2j_toplike_mjjGT350_pthGT200'
     ]
}

variables['classww_mjjhigh'] = {
     'name': 'wwdnn_mjjhigh',
     'range' : ([0.3,0.4,0.5,0.6,0.7,0.8,1],),
     'xaxis' : 'DNN discriminant ww',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_wwlike_mjj350_700_pthLT200', 
            'hww2l2v_13TeV_of2j_wwlike_mjjGT700_pthLT200',
            'hww2l2v_13TeV_of2j_wwlike_mjjGT350_pthGT200'
    ]
}

'''
variables['classvbf_mjjlow'] = {
     'name': 'vbfdnn_mjjlow',
     'range' : ([0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_vbflike_mjj200_350'
     ]
}

variables['classggh_mjjlow'] = {
     'name': 'gghdnn_mjjlow',
     'range' : ([0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
     'xaxis' : 'DNN discriminant ggh',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_gghlike_mjj200_350'
     ]
}

variables['classtop_mjjlow'] = {
     'name': 'topdnn_mjjlow',
     'range' : ([0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
     'xaxis' : 'DNN discriminant top',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_toplike_mjj200_350'
     ]
}

variables['classww_mjjlow'] = {
     'name': 'wwdnn_mjjlow',
     'range' : ([0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
     'xaxis' : 'DNN discriminant ww',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_wwlike_mjj200_350'
     ]
}
'''

