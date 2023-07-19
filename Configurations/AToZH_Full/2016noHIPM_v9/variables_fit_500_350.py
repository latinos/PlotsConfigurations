# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
# The following is needed if combining plots between years:
#'doWeight' : 1
#'binX' : 1 
#'binY' : <# of bins>
bkg = [skey for skey in samples if not skey.startswith('AZH')]

variables['events']     = { 'name': '1',      
                            'range' : (1,0,2),  
                            'xaxis' : 'events', 
                            'fold' : 3
                        }


variables['ellipse_mA_500_mH_350']          = { 'name'  : 'ellipse_mA_500_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
						'samples' : bkg+['AZH_500_350'],
                                                'fold'  : 0
                                            }


