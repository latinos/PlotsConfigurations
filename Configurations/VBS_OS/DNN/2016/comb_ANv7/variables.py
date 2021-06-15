#variables['tree_DNN'] = {
#                        'tree': {
#                              'DNNoutput': 'DNNoutput'
#                          }
#                        }
#
variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3,
                        'blind' : {
                            "sr_lowZ": [0,2],
                            "sr_highZ": [0,2]
                            }
                        }

variables['DNNoutput_lowZ_s2sb5e3'] = {
                        'name' : 'DNNoutput',
                        'range' : ( [0,0.21, 0.33, 0.42, 0.51, 0.58, 0.64, 0.7, 0.75, 0.79, 0.83, 0.88, 0.92, 0.96, 1],),
                        'xaxis' : 'DNN score',
#                        'divideByBinWidth': 1,
                        'fold' : 1,
                        'blind' : {
                            "sr_lowZ": [0.5,1],
                            "sr_highZ": [0.5,1]
                            }
                        }
variables['DNNoutput_highZ_s2sb5e3'] = {
                        'name' : 'DNNoutput',
                        'range' : ([0, 0.5, 0.67, 0.8, 0.91, 1],),
                        'xaxis' : 'DNN score',
                        'fold' : 1,
#                        'divideByBinWidth': 1,
                        'blind' : {
                            "sr_lowZ": [0.5,1],
                            "sr_highZ": [0.5,1]
                            }
                        }


#variables['DNNoutput_lowZ_s2sb5e3_2018_m'] = {
#                        'name' : 'DNNoutput',
#                        'range' : ([0, 0.15,  0.26, 0.36, 0.41, 0.46, 0.5,  0.57, 0.6, 0.63, 0.66, 0.69, 0.72, 0.75, 0.77,  0.82, 0.84, 0.86, 0.88, 0.9, 0.92,  0.96, 1],),
#                        'xaxis' : 'DNN score',
#                        'fold' : 1,
#                        'divideByBinWidth': 1,
#                        'blind' : {
#                            "sr_lowZ": [0.5,1],
#                            "sr_highZ": [0.5,1]
#                            }
#                        }
#
#variables['DNNoutput_lowZ_s2sb5e3_2018'] = {
#                        'name' : 'DNNoutput',
#                        'range' : ([0, 0.15, 0.21, 0.26, 0.31, 0.36, 0.41, 0.46, 0.5, 0.53, 0.57, 0.6, 0.63, 0.66, 0.69, 0.72, 0.75, 0.77, 0.79, 0.82, 0.84, 0.86, 0.88, 0.9, 0.92, 0.94, 0.96, 1],),
#                        'xaxis' : 'DNN score',
#                        'fold' : 1,
#                        'divideByBinWidth': 1,
#                        'blind' : {
#                            "sr_lowZ": [0.5,1],
#                            "sr_highZ": [0.5,1]
#                            }
#                        }
#
#variables['DNNoutput_highZ_s2sb5e3_2018'] = {
#                        'name' : 'DNNoutput',
#                        'range' : ([0,0.26, 0.36, 0.44, 0.52, 0.6, 0.66, 0.72, 0.77, 0.82, 0.87, 0.92, 0.96, 1],),
#                        'xaxis' : 'DNN score',
#                        'fold' : 1,
#                        'divideByBinWidth': 1,
#                        'blind' : {
#                            "sr_lowZ": [0.5,1],
#                            "sr_highZ": [0.5,1]
#                            }
#                        }
#
