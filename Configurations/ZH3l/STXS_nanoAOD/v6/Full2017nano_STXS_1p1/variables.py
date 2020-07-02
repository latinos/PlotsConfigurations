# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']     = { 'name': '1',      
                            'range' : (1,0,2),  
                            'xaxis' : 'events', 
                            'fold' : 3,
                            'cuts' : [cut for cut in cuts if 'CR' in cut]
                        }

variables['mtw_fit']    = { 'name' : 'ZH3l_mTlmet_test[0]',
                            'range' : (8,0,160),
                            'xaxis' : 'mTlmet',
                            'fold' : 2,
                            'cuts' : [cut for cut in cuts if 'SR' in cut]
                        }

variables['mTlmetj']   = { 'name' : 'ZH3l_mTlmetj_test[0]',
                            'range' : (10,0,250),
                            'xaxis' : 'mTlmetj',
                            'fold' : 2,
                            'cuts' : [cut for cut in cuts if 'SR_1j' in cut]
                        }

variables['mTlmetjj']   = { 'name' : 'ZH3l_mTlmetjj_test[0]',
                            'range' : (16,50,450),
                            'xaxis' : 'mTlmetjj',
                            'fold' : 3,
                            'cuts' : [cut for cut in cuts if 'SR_2j' in cut]
                        }

