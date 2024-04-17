# Structure configuration for datacard
# We scale the luminosity to Full Run 3
# Lumi 2018: 59.83/fb
# Lumi Run3: 300/fb
# Scaling factor: 300/59.83

scaling_factor = 300.0/59.83

# structure = {}

# keys here must match keys in samples.py
#
structure['top']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['WW']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['Wg']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['Zg']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['WgS']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['ZgS']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['ZZ']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['WZ']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : 1.138*scaling_factor # NLO -> NNLO k-factor times scaling factor
}

structure['VVV']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['ggH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0 ,   
    'scaleSampleForDatacard' : scaling_factor
}

structure['qqH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,  
    'scaleSampleForDatacard' : scaling_factor
}

structure['ZH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,    
    'scaleSampleForDatacard' : scaling_factor
}

structure['ggZH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,    
    'scaleSampleForDatacard' : scaling_factor
}

structure['WH_hww_plus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['WH_hww_minus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['ttH_hww'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['ggH_htt'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['qqH_htt'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['ZH_htt'] = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['WH_htt_plus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['WH_htt_minus'] = {
    'isSignal' : 1,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}

structure['Fake']  = {
    'isSignal' : 0,
    'isData'   : 0,
    'scaleSampleForDatacard' : scaling_factor
}


# Data
structure['DATA']  = {
    'isSignal' : 0,
    'isData'   : 1
}




