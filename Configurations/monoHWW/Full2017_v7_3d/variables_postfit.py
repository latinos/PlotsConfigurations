# variables

SignalRegions = set(x for x in cuts if 'SR' in x)
ControlRegions = set(x for x in cuts if 'CR' in x)

variables['events']  = {   
    'name': '1',
    'range' : (1,0,2),
    'xaxis' : 'events',
    'fold' : 3,
    'cuts' : ControlRegions
}

# variables['mllVSmtw2_0']  = {   'name': 'mtw2:mll',
# #                                'range' : ([0,40,90,200],[12,60,90,120,200],),
#                                 'range' : ([12,60,90,120,200],[0,50,90,130,160,300],),
#                                 'xaxis' : 'm_{ll} : m_{T}^{l_{min}, MET}', 
#                                 'fold' : 3,
#                               'doWeight' : 1,
#                               'binX'     : 4,
#                               'binY'     : 5,
#                         }



variables['mllVSmtw2_1']  = {   'name': 'mtw2:mll',
#                                'range' : ([0,40,90,200],[12,60,90,120,200],),
                                'range' : ([12,60,90,120,200],[0,50,90,130,170,300],),
                                 'xaxis' : 'm_{ll} : m_{T}^{l_{min}, MET}', 
                                'fold' : 3,
                              'doWeight' : 1,
                              'binX'     : 4,
                              'binY'     : 5,
                              'cuts' : SignalRegions
                        }


# variables['mllVSmtw2_2']  = {   'name': 'mtw2:mll',
# #                                'range' : ([0,40,90,200],[12,60,90,120,200],),
#                                 'range' : ([12,60,90,120,200],[0,50,90,130,180,300],),
#                                 'xaxis' : 'm_{ll} : m_{T}^{l_{min}, MET}', 
#                                 'fold' : 3,
#                               'doWeight' : 1,
#                               'binX'     : 4,
#                               'binY'     : 5,
#                         }


# variables['mllVSmtw2_3']  = {   'name': 'mtw2:mll',
# #                                'range' : ([0,40,90,200],[12,60,90,120,200],),
#                                 'range' : ([12,60,90,120,200],[0,50,90,130,190,300],),
#                                 'xaxis' : 'm_{ll} : m_{T}^{l_{min}, MET}', 
#                                 'fold' : 3,
#                               'doWeight' : 1,
#                               'binX'     : 4,
#                               'binY'     : 5,
#                         }


# variables['mllVSmtw2_4']  = {   'name': 'mtw2:mll',
# #                                'range' : ([0,40,90,200],[12,60,90,120,200],),
#                                 'range' : ([12,60,90,120,200],[0,50,90,130,160,200,300],),
#                                 'xaxis' : 'm_{ll} : m_{T}^{l_{min}, MET}', 
#                                 'fold' : 3,
#                               'doWeight' : 1,
#                               'binX'     : 4,
#                               'binY'     : 6,
#                         }


# variables['mllVSmtw2_5']  = {   'name': 'mtw2:mll',
# #                                'range' : ([0,40,90,200],[12,60,90,120,200],),
#                                 'range' : ([12,60,90,120,200],[0,50,90,130,170,210,300],),
#                                 'xaxis' : 'm_{ll} : m_{T}^{l_{min}, MET}', 
#                                 'fold' : 3,
#                               'doWeight' : 1,
#                               'binX'     : 4,
#                               'binY'     : 6,
#                         }


# variables['mllVSmtw2_drll2']  = {   'name': 'mtw2:mll',
#                                 'range' : ([12,60,90,120,200],[0,50,100,150,300],),
#                                 'xaxis' : 'm_{T}^{l2+MET} : m_{ll} [GeV]',
#                                 'fold' : 3,
#                               'doWeight' : 1,
#                               'binX'     : 4,
#                               'binY'     : 4,
#                         }

