# variables

#variables = {}

variables['events']  = {
      'name': '1',      
      'range' : (1,0,2),  
      'xaxis' : 'events', 
      'fold' : 3,
      'cuts' : [
           'hww2l2v_13TeV_top_2j_vh',
            'hww2l2v_13TeV_top_2j_mjj350_700',
            'hww2l2v_13TeV_top_2j_mjjGT350_pthGT200',
            'hww2l2v_13TeV_top_2j_mjjGT700' ,
            'hww2l2v_13TeV_top_2j_pth0_60'  ,
            'hww2l2v_13TeV_top_2j_pth60_120',
            'hww2l2v_13TeV_top_2j_pth120_200',
            'hww2l2v_13TeV_top_pth200_300'   ,
            'hww2l2v_13TeV_top_pthGT300',
            'hww2l2v_13TeV_dytt_2j_vh',
            'hww2l2v_13TeV_dytt_2j_mjj350_700',
            'hww2l2v_13TeV_dytt_2j_mjjGT350_pthGT200',
            'hww2l2v_13TeV_dytt_2j_mjjGT700' ,
            'hww2l2v_13TeV_dytt_2j_pth0_60'  ,
            'hww2l2v_13TeV_dytt_2j_pth60_120',
            'hww2l2v_13TeV_dytt_2j_pth120_200',
            'hww2l2v_13TeV_dytt_pth200_300'   ,
            'hww2l2v_13TeV_dytt_pthGT300',
      ]
}


variables['mll']  = {   
      'name': 'mll',
      'range' : (10, 100, 210),
      'xaxis' : 'mll [GeV]',
      'fold' : 3,
      'cuts' : [
            'hww2l2v_13TeV_of_pthGT650',
            'hww2l2v_13TeV_of_pth450_650'
            #'hww2l2v_13TeV_of2j_mjj65_105'
      ]
}



variables['mllVSmjj'] = {   'name': 'mll:mjj', #   variable name    
                             'range' : ([65,85,105],[12,40,80,120,160,200],), #(8,65,105,8,12,200), # variable range
                             'xaxis' : 'm_{ll} : m_{jj}',  #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 0,
                             'binX'     : 2,
                             'binY'     : 5,
                             'cuts' : [
                                    'hww2l2v_13TeV_of2j_mjj65_105'
                             ]
}


variables['mllVSmth_pt2lt20'] = {   'name': 'mll:mth', #   variable name    
                             'range' : ([60,80,90,110,130,150,200],[12,25,40,50,70,90,210],), # variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',  #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 0,
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
                                    'doWeight' : 0,
                                    'binX'     : 4,
                                    'binY'     : 3,
                                     #
                                     
                                    'cuts' : [
                                          'hww2l2v_13TeV_of_pth300_450',
                                          'hww2l2v_13TeV_of_pthGT300',
                                    ]
                                }

variables['classvbf_1'] = {
     'name': 'vbfdnn',
      #'range' : ([0,0.535,0.635,0.705,1.],),
     'range' : ([0,0.535,0.605,0.665,0.705,0.775,1.],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_vbflike_mjj350_700_pthLT200',
     ]
}
variables['classvbf_2'] = {
     'name': 'vbfdnn',
     #'range' : ([0,0.625,0.735,0.845,1.],),
     'range' : ([0,0.655,0.725,0.765,0.795,0.825,0.855,0.915,1.],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_vbflike_mjjGT700_pthLT200',
     ]
}
variables['classvbf_3'] = {
     'name': 'vbfdnn',
     #'range' : ([0,0.715,1.],),
     'range' : ([0,0.745,0.875,1.],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_vbflike_mjjGT350_pthGT200'
     ]
}



variables['classggh'] = {
     'name': 'gghdnn',
     'range' : ([0.,0.485, 1.],),
     'xaxis' : 'DNN discriminant ggh',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_gghlike_mjj350_700_pthLT200',
            'hww2l2v_13TeV_of2j_gghlike_mjjGT700_pthLT200',
            'hww2l2v_13TeV_of2j_gghlike_mjjGT350_pthGT200'
     ]
}


variables['classtop_1'] = {
     'name': 'topdnn',
     'range' : ([0,0.5,0.75,1.],),
     'xaxis' : 'DNN discriminant top',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_toplike_mjj350_700_pthLT200',
            'hww2l2v_13TeV_of2j_toplike_mjjGT350_pthGT200'
     ]
}

variables['classtop_2'] = {
     'name': 'topdnn',
     'range' : ([0,0.5,1.],),
     'xaxis' : 'DNN discriminant top',
     'fold'  : 3,
     'cuts'  : [
            'hww2l2v_13TeV_of2j_toplike_mjjGT700_pthLT200',
     ]
}
variables['classww'] = {
     'name': 'wwdnn',
     'range' : ([0.,0.5,0.75,1],),
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

