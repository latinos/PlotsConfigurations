######################################## FIT Variables
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
#                        'blind' : {
#                            "sr_lowZ": [0.7,1],
#                            "sr_highZ": [0.7,1]
#                            }
                        }
variables['DNNoutput_highZ_s2sb5e3'] = {
                        'name' : 'DNNoutput',
                        'range' : ([0, 0.5, 0.67, 0.8, 0.91, 1],),
                        'xaxis' : 'DNN score',
                        'fold' : 1,
#                        'divideByBinWidth': 1,
#                        'blind' : {
#                            "sr_lowZ": [0.7,1],
#                            "sr_highZ": [0.7,1]
#                            }
                        }



