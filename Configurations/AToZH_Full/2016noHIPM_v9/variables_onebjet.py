# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
# The following is needed if combining plots between years:
#'doWeight' : 1
#'binX' : 1 
#'binY' : <# of bins>
   
variables['events']     = { 'name': '1',      
                            'range' : (1,0,2),  
                            'xaxis' : 'events', 
                            'fold' : 3
                        }



variables['mA-mH'] = { 'name' : 'AZH_mA_minus_mH_onebjet',
                       'range' : (6,0,1000),
		       'xaxis' : 'm_{A}-m_{H}',
		       #'cuts' : [cut for cut in cuts if '1j' in cut],
		       'fold'  : 3
		}


