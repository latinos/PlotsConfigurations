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

variables['ellipse_mA_900_mH_400']          = { 'name'  : 'ellipse_mA_900_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
						'samples' : bkg+['AZH_900_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_500_mH_350']          = { 'name'  : 'ellipse_mA_500_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
						'samples' : bkg+['AZH_500_350'],
                                                'fold'  : 0
                                            }
variables['ellipse_mA_1000_mH_600']          = { 'name'  : 'ellipse_mA_1000_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
						'samples' : bkg+['AZH_1000_600'],
                                                'fold'  : 0
                                           }
variables['ellipse_mA_800_mH_600']          = { 'name'  : 'ellipse_mA_800_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
						'samples' : bkg+['AZH_800_600'],
                                                'fold'  : 0
}

variables['ellipse_onebjet_mA_900_mH_400']          = { 'name'  : 'ellipse_onebjet_mA_900_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
						'samples' : bkg+['AZH_900_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_500_mH_350']          = { 'name'  : 'ellipse_onebjet_mA_500_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
						'samples' : bkg+['AZH_500_350'],
                                                'fold'  : 0
                                            }
variables['ellipse_onebjet_mA_1000_mH_600']          = { 'name'  : 'ellipse_onebjet_mA_1000_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
						'samples' : bkg+['AZH_1000_600'],
                                                'fold'  : 0
                                           }
variables['ellipse_onebjet_mA_800_mH_600']          = { 'name'  : 'ellipse_onebjet_mA_800_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
						'samples' : bkg+['AZH_800_600'],
                                                'fold'  : 0
}

variables['ptz']        = { 'name' : 'ZH3l_pTZ',
                            'range' : (6,0,1000),
                            'xaxis' : 'ptz',
			    'cuts' : ['breq_SR', 'bveto_1j_SR'],
                            'fold' : 3 
                        }



variables['DeltaM']  = { 'name' : 'AZH_mA_minus_mH_patch',
                            'range' : (6,0,1000),
			    'xaxis' : 'm_{A}-m_{H}',
			    'cuts' : ['breq_SR'],
			    'fold'  : 3
                         }


variables['DeltaM_onebjet']  = { 'name' : 'AZH_mA_minus_mH_onebjet',
                            'range' : (6,0,1000),
			    'xaxis' : 'm_{A}-m_{H}',
			    'cuts' : ['bveto_1j_SR'],
			    'fold'  : 3
                         }

