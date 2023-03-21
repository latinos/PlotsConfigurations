# Configuration for binning optimization

# You can define here:
# - signals
# - backgrounds
# - main backgrounds

# You need at least 10 MC events of each main background to form a bin. 

# Backgrounds
binning['DY']  = {  
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['top'] = {   
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['WW']  = {
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['WWewk']  = {
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['ggWW']  = {
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['Zg']  = {
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['Wg']  = { 
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['ZgS'] = { 
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['WgS']  = {
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['WZ']  = {
    'isSignal' :        0,
    'isMainBackground': 1, # main background
}

binning['ZZ']  = { 
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['VVV']  = { 
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['Fake_em']  = {  
    'isSignal' :        0,
    'isMainBackground': 1, # main background
}

binning['Fake_ee']  = {  
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['Fake_mm']  = { 
    'isSignal' :        0,
    'isMainBackground': 0,
}

# Higgs backgrounds
binning['ggH_hww'] = {
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['qqH_hww'] = {
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['ZH_hww'] = {
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['ggZH_hww'] = {
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['ggH_htt'] = {
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['qqH_htt'] = {
    'isSignal' :        0,
    'isMainBackground': 0,
}

binning['ZH_htt'] = {
    'isSignal' :        0,
    'isMainBackground': 0,
}

# WH - signal
binning['WH_hww_minus'] = {
    'isSignal' :        1,
    'isMainBackground': 0,
}

binning['WH_hww_plus'] = {
    'isSignal' :        1,
    'isMainBackground': 0,
}

binning['WH_htt_plus'] = {
    'isSignal' :        1,
    'isMainBackground': 0,
}

binning['WH_htt_minus'] = {
    'isSignal' :        1,
    'isMainBackground': 0,
}

