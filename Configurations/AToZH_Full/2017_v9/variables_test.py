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

variables['ellipse_mA_900_mH_400']          = { 'name'  : 'ellipse_mA_900_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                                                'fold'  : 0
                                            }

#variables['ellipse_mA_900_mH_400_onebjet']  = { 'name'  : 'ellipse_mA_900_mH_400_onebjet',
#                                                'range' : (7,-0.5,6.5),
#                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
#                                                'cuts'  : ['bveto_1j_SR'],
#                                                'fold'  : 0
#                                            }

